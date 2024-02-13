/*
	by POLPOX
	
	Auto-executed
	
	obsolete
*/

addUserActionEventHandler ["gunElevAuto","Activate",{
	// Exit if player is not local
	private _unit = cameraOn ;
	// And if the camera is not on sight exit
	if (!local _unit or cameraView != "GUNNER") exitWith {} ;
	// If the weapon has auto zxeroing ability
	if (getNumber (configFile >> "CfgWeapons" >> currentWeapon _unit >> "Aegis_LaseRangeAutoZeroing") == 1) then {
		// Scripted lase distance
		private _intersect = lineIntersectsSurfaces [
			AGLToASL positionCameraToWorld [0,0,0],
			AGLToASL positionCameraToWorld [0,0,1000],
			_unit,objNull,true,1
		] ;
		
		// If the distance is measured
		if (count _intersect > 0) then {
			_unit setWeaponZeroing [currentWeapon _unit,currentMuzzle _unit,call {
				private _lasedDist = AGLToASL positionCameraToWorld [0,0,0] distance (_intersect#0#0) ;
				_lasedDist = _lasedDist max 50 min 1000 ;
				(_lasedDist - 50)
			}] ;
		} ;
	} ;
}] ;