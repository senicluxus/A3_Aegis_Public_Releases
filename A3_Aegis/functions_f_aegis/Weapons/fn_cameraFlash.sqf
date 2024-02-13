/*
	by POLPOX
	
	easter egg, controls camera flash and sound
*/

params ["_disp"] ;

uiNamespace setVariable ["RscOptics_Camera_lxWS_disp",_this#0] ;

with localNamespace do {
	if (isNil "Aegis_Camera_lxWS_EH") then {
		Aegis_Camera_lxWS_EH = addUserActionEventHandler ["defaultAction","Activate",{
			private _disp = uiNamespace getVariable ["RscOptics_Camera_lxWS_disp",displayNull] ;
			
			if (isNull _disp) exitWith {
				removeUserActionEventHandler ["defaultAction","Activate",_thisEventHandler] ;
				with localNamespace do {
					Aegis_Camera_lxWS_EH = nil ;
				} ;
			} ;
			if (isGamePaused or !isGameFocused) exitWith {} ;
			
			[cameraOn,{
				private _unit = _this ;
				playSound3D [
					"lxWS\sounds_f_lxWS\ambient\objects\sfx_camShutterClick.ogg",
					objNull,
					false,getPosASL _unit,1,1,0,0,true
				] ;

				private _light = "#lightreflector" createVehicleLocal [0,0,0] ;
				
				_light setPosWorld (_unit modelToWorldVisualWorld (_unit selectionPosition "leftHand")) ;
				
				(_unit weaponDirection currentWeapon _unit) params ["_dX","_dY","_dZ"] ;
				
				_light setVectorDirAndUp [[_dX,_dY,_dZ],[_dX,_dZ,_dY]] ;
				
				_light setLightIntensity (200*sqrt (getLighting#1)) ;
				_light setLightAmbient [1,1,1] ;
				_light setLightColor [1,1,1] ;
				_light setLightConePars [150,10,4] ;
				_light setLightDayLight true ;
				_light setLightUseFlare true ;
				_light setLightFlareSize 5 ;
				
				addMissionEventHandler ["EachFrame",{
					_thisArgs params ["_light","_timeNow"] ;
					if (_timeNow + 0.075 < diag_tickTime) exitWith {
						deleteVehicle _light ;
						removeMissionEventHandler ["EachFrame",_thisEventHandler] ;
					} ;
				},[_light,diag_tickTime]] ;
				
			}] remoteExecCall ["call"] ;
		}] ;
	} ;
} ;