/*
	by POLPOX
	
	Can be used by Fired EH either in unit/weapon
*/

params ["_unit","_weapon","_muzzle","","_ammo","","_proj"] ;

// no deflect, will detonate ASAP
_proj addEventHandler ["Deflected",{triggerAmmo (_this#0)}] ;
private _punisherZeroing = {
	if (_this < 100) exitWith {} ;
	if (_weapon isKindOf ["GL_XM25_F",configFile >> "CfgWeapons"]) then {
		private _velocity = velocityModelspace _proj ;

		// thanks Google spreadsheet!
		private _angle = -0.729 + 7.28E-03*_this  + 4.32E-07*_this^2 + 2.59E-09*_this^3 ;
		
		private _dir = [_velocity,-_angle,0] call BIS_fnc_rotateVector3D ;
		private _up = [_velocity,-_angle-90,0] call BIS_fnc_rotateVector3D ;
		_proj setVectorDirAndUp [_proj vectorModelToWorld _dir,_proj vectorModelToWorld _up] ;
		_proj setVelocityModelSpace _velocity ;
	} ;
} ;

// If the ammo has Airburst ability, it initializes
if (local _unit and getNumber (configFile >> "CfgAmmo" >> _ammo >> "Aegis_isAirburst") == 1) then {

	private _lasedDistance = call {
		private _return = 0 ;
		private _disp = uiNamespace getVariable [format ["%1_disp",getText (configFile >> "CfgWeapons" >> _weapon >> "weaponInfoType")],displayNull] ;

		// if the display for it is not found, try to fetch automatically
		if (isNull _disp) then {
			{
				if((ctrlIDD _x) == 300) then {
					private _lase = _x displayCtrl 198 ;
					if (!isNull _lase) exitWith {
						_disp = _x ;
					} ;
				} ;	
			} forEach (uiNamespace getVariable "IGUI_displays") ;
		} ;
		
		// just for fun - ammo serial number
		[_disp,_ammo,_unit ammo _muzzle] call Aegis_fnc_airburstSerial ;
		
		private _lase = _disp displayCtrl 198 ;
		if (!isNull _lase) then {
			_return = parseNumber ctrlText _lase ;
		} ;
		_return
	} ;

	if (_lasedDistance == 0) exitWith {} ;

	// Initialize variables
	private _range = _lasedDistance max 50 + (getNumber (configFile >> "CfgAmmo" >> _ammo >> "Aegis_airburstFuseDistance")) ;
	private _pos = getPosASL _proj ;
	
	// Adds MissionEH to check if it reaches the distance
	addMissionEventHandler ["EachFrame",{
		_thisArgs params ["_pos","_range","_proj"] ;
		
		// If the bullet doesn't exist, exit
		if (isNull _proj) exitWith {removeMissionEventHandler ["EachFrame",_thisEventHandler]} ;
		
		// No need to execute this during a pause
		if (accTime == 0) exitWith {} ;
		
		// Declares the speed/travel distance during a frame
		private _frameCoef = (accTime * diag_deltaTime) ;
		private _frameSpeed = (vectorMagnitude velocity _proj) * _frameCoef ;
		
		private _dist = (_pos distance getPosASL _proj) ;
		
		// If the bullet is going to reach the distance during this frame...
		if (_dist > (_range - _frameSpeed)) then {
			// Adjust the bullet position so low FPS won't affect this function
			_proj setPosASL (call {
				getPosASL _proj vectorAdd ((vectorNormalized velocity _proj) vectorMultiply (_range - _dist))
			}) ;
			
			// Explode!
			triggerAmmo _proj ;
			
			// And exit this function
			removeMissionEventHandler ["EachFrame",_thisEventHandler] ;
		} ;
	},[_pos,_range,_proj]] ;
	
	(_range) call _punisherZeroing ;
} else {
	// auto zeriong if the lased distance is a thing
	private _disp = uiNamespace getVariable [format ["%1_disp",getText (configFile >> "CfgWeapons" >> _weapon >> "weaponInfoType")],displayNull] ;
	private _distCtrl = _disp displayCtrl 183 ;
	private _dist = call {
		private _text = ctrlText _distCtrl ;
		if (_text == "----") exitWith {1000} ;
		(parseNumber _text) min 1000
	} ;
	(_dist) call _punisherZeroing ;
} ;