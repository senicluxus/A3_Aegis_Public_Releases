/*
	by POLPOX
	
	Just for fun, displays a fake serial number for airburst ammo
	arg: [display,ammo]
*/

params ["_disp","_ammoName","_ammoCount"] ;

if (isNull _disp) then {
	{
		if((ctrlIDD _x) == 300 and !isNull (_x displayCtrl 51211)) exitWith {
			_disp = _x ;
		} ;	
	} forEach (uiNamespace getVariable "IGUI_displays") ;
} ;

_disp displayCtrl 51204 ctrlSetText call {
	if (getNumber (configFile >> "CfgAmmo" >> _ammoName >> "Aegis_isAirburst") != 1) exitWith {"N/A"} ;
	if (_ammoCount == 0) exitWith {"N/A"} ;
	format ["GL-05%1%2%3%4",floor random 10,floor random 10,floor random 10,floor random 10] ;
} ;