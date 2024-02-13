/*
	by POLPOX
	
	Controls Punisher's HUD
*/

uiNamespace setVariable ["Aegis_RscOptics_Punisher_disp",_this#0] ;

addMissionEventHandler ["Draw3D",{
	_thisArgs params ["_disp"] ;
	
	// terminate EH when the display is no more aka you have no Punisher anymore
	if (isNull _disp) exitWith {
		removeMissionEventHandler ["Draw3D",_thisEventHandler] ;
	} ;

	// don't do anything if isn't Punisher and isn't in ADS
	if (/*primaryWeapon cameraOn isKindOf ["GL_XM25_F",configFile >> "CfgWeapons"] and */cameraView == "GUNNER") then {
		// get display
		/*private _disp = displayNull ;
		{
			if((ctrlIDD _x) == 300 and !isNull (_x displayCtrl 51211)) exitWith {
				_disp = _x ;
			} ;	
		} forEach (uiNamespace getVariable "IGUI_displays") ;*/
		
		// executed only when the serial is not determined
		if (ctrlText (_disp displayCtrl 51204) == "") then {
			[_disp,getText (configFile >> "CfgMagazines" >> currentMagazine cameraOn >> "ammo"),cameraOn ammo currentWeapon cameraOn] call Aegis_fnc_airburstSerial ;
		} ;
		
		// lase distance bar
		#include "\a3\ui_f\hpp\defineCommonGrids.inc"
		#define DISTBARY (19 * GUI_GRID_OLD_OPTICS_H)
		#define DISTBARH (6 * GUI_GRID_OLD_OPTICS_H)
		#define DISTBAREDGE (0.1 * GUI_GRID_OLD_OPTICS_H)
		
		private _ctrl = _disp displayCtrl 51211 ;
		private _distCtrl = _disp displayCtrl 183 ;
		
		private _dist = call {
			private _text = ctrlText _distCtrl ;
			if (_text == "----") exitWith {1000} ;
			(parseNumber _text) min 1000
		} ;
		
		ctrlPosition _ctrl params ["_posX","_posY","_posW","_posH"] ;
		_ctrl ctrlSetPosition [
			_posX,
			DISTBARY-(DISTBARH*(_dist/1000))+DISTBARH+DISTBAREDGE*1,
			_posW,
			(DISTBARH*(_dist/1000))-DISTBAREDGE*2
		] ;
		_ctrl ctrlCommit 0 ;

		// if the mag is empty
		if ((cameraOn ammo currentWeapon cameraOn) == 0) then {
			// ZEROING ENGAGED
			(_disp displayCtrl 51205) ctrlSetText "" ;

			// ammo mode
			private _ctrl = _disp displayCtrl 51201 ;
			_ctrl ctrlSetText (["EMPTY","RELOAD"] select ((time mod 1.6) < 0.8)) ;
		} else {
			(_disp displayCtrl 51205) ctrlSetText "!ZEROING ENGAGED!" ;
		} ;

		
		private _magClass = (configFile >> "CfgMagazines" >> currentMagazine cameraOn) ;
		private _ammoClass = (configFile >> "CfgAmmo" >> getText (configFile >> "CfgMagazines" >> currentMagazine cameraOn >> "ammo")) ;
		
		// execute only when the current ammo has AB ability
		if (
			getNumber (_ammoClass >> "Aegis_isAirburst") == 1
		) then {
			// a/b dist bar
			private _ctrl = _disp displayCtrl 51212 ;
			private _distCtrl = _disp displayCtrl 198 ;
			
			private _dist = call {
				private _text = ctrlText _distCtrl ;
				if (_text == "----") exitWith {-1} ;
				(parseNumber _text) min 1000 max 50
			} ;
			
			ctrlPosition _ctrl params ["_posX","_posY","_posW","_posH"] ;
			_ctrl ctrlSetPosition [
				_posX,
				DISTBARY-(DISTBARH*(_dist/1000))+DISTBARH+DISTBAREDGE*1,
				_posW,
				(DISTBARH*(_dist/1000))-DISTBAREDGE*2
			] ;
			_ctrl ctrlCommit 0 ;
			
			// a/b dist text
			private _ctrl = _disp displayCtrl 51202 ;
			
			call {
				if (_dist == -1) exitWith {
					_ctrl ctrlSetText "----";
				} ;
				if (_dist == 1000 and (time mod 1.6) < 0.8) exitWith {
					_ctrl ctrlSetText "MAX";
				} ;
				if (_dist == 50 and (time mod 1.6) < 0.8) exitWith {
					_ctrl ctrlSetText "MIN";
				} ;
				call {
					private _text = str _dist ;
					if (count _text == 4) exitWith {
						_ctrl ctrlSetText _text ;
					} ;
					if (count _text == 3) exitWith {
						_ctrl ctrlSetText format ["0%1",_text] ;
					} ;
					if (count _text == 2) exitWith {
						_ctrl ctrlSetText format ["00%1",_text] ;
					} ;
				} ;
			} ;
			
			// ammo mode
			if ((cameraOn ammo currentWeapon cameraOn) != 0) then {	
				private _ctrl = _disp displayCtrl 51201 ;
				_ctrl ctrlSetText "A/B" ;
			} ;
			
			// ETA
			private _ctrl = _disp displayCtrl 51203 ;
			call {
				if (_dist == -1) exitWith {
					_ctrl ctrlSetText "N/A";
				} ;
				_ctrl ctrlSetText format ["%1 s",_dist / (getNumber (_magClass >> "initSpeed") * 0.8) toFixed 2] ;
			} ;
		} else {
			// and if not show N/A
			
			// a/b dist bar
			private _ctrl = _disp displayCtrl 51212 ;
			
			ctrlPosition _ctrl params ["_posX","_posY","_posW","_posH"] ;
			_ctrl ctrlSetPosition [
				_posX,
				DISTBARY-(DISTBARH*0)+DISTBARH+DISTBAREDGE*1,
				_posW,
				(DISTBARH*0)-DISTBAREDGE*2
			] ;
			_ctrl ctrlCommit 0 ;
			
			// a/b dist text
			private _ctrl = _disp displayCtrl 51202 ;
			_ctrl ctrlSetText "N/A" ;
			
			// ammo mode
			if ((cameraOn ammo currentWeapon cameraOn) != 0) then {	
				private _ctrl = _disp displayCtrl 51201 ;
				_ctrl ctrlSetText "REGULAR" ;
			} ;
			
			private _distCtrl = _disp displayCtrl 198 ;
			private _dist = call {
				private _text = ctrlText _distCtrl ;
				if (_text == "----") exitWith {-1} ;
				parseNumber _text
			} ;
			
			private _ctrl = _disp displayCtrl 51203 ;
			call {
				if (_dist == -1) exitWith {
					_ctrl ctrlSetText "N/A";
				} ;
				_ctrl ctrlSetText format ["%1 s",_dist / (getNumber (_magClass >> "initSpeed") * 0.8) toFixed 2] ;
			} ;
		} ;
		
	} ;
},_this] ;