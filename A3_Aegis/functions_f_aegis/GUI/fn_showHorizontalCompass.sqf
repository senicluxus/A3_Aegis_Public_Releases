/*
	Author: Karel Moricky, modified by AveryTheKitty

	Description:
		Show or hide horizontal compass

	Parameter(s):
		0: BOOL - true to show, false to hide

	Returns:
		NOTHING
*/

params [["_show",true,[true,""]]];

/*
//--- Exit if incompatible addons loaded
if (!hasInterface || {isClass (configFile >> "CfgPatches" >> "A3_UI_F_Contact") || {isClass (configFile >> "CfgPatches" >> "ace_main") || {isClass (configFile >> "CfgPatches" >> "PLP_ArtworkSupport_Data")}}}) exitWith {false};
*/

//--- Hide
if (_show isequalto false) exitwith {
	"RscCompass" cuttext ["","plain"];
	removemissioneventhandler ["loaded",missionnamespace getvariable ["Aegis_fnc_showHorizontalCompass_loaded",-1]];
};

//--- Show the compass only in mission phase, not in intro or outro
if (_show isequalto "postInit") exitwith {
	[] spawn {
		scriptname "Aegis_fnc_showHorizontalCompass: Init";
		_display = displaynull;
		waituntil {
			_display = [] call bis_fnc_displayMission;
			!isnull _display
		};
		if (ctrlidd _display == 46) then {true call Aegis_fnc_showHorizontalCompass;};
	};
};

// --- Show
"RscCompass" cutrsc ["RscCompass","plain"];

//--- Show after load
if (missionnamespace getvariable ["Aegis_fnc_showHorizontalCompass_loaded",-1] < 0) then {
	missionnamespace setvariable [
		"Aegis_fnc_showHorizontalCompass_loaded",
		addmissioneventhandler [
			"loaded",
			{
				[] spawn {
					sleep 0.1; //--- Wait a bit, otherwise the compass won't be shown
					"RscCompass" cutrsc ["RscCompass","plain"];
				};
			}
		]
	];
};

true