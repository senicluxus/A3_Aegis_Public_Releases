/*
	Author: Karel Moricky, modified by AveryTheKitty

	Description:
		Initialize world scene

	Parameter(s):
		ARRAY of CODEs - random code will be selected and called. The code should contain scene init

	Returns:
		Nothing
*/

private _variants = _this;

//--- Pick a scene to show
private _index = uinamespace getvariable ["BIS_mainMenuScene",-1];
if (_index >= 0 && _index < count _variants) then {
	[] call (_variants select _index);
} else {
	if (count _variants > 0) then {
		[] call (selectrandom _variants);
	} else {
		["No scenes defined for %1",worldname] call bis_fnc_error;
	};
};
 
// Show vignette
"colorCorrections" ppEffectAdjust [1,1,0,[0,0,0,0],[0,0,0,0.24],[1,1,1,0],[0.7,0.7,0,0,-0.1,0.4,0.8]]; 
"colorCorrections" ppEffectEnable TRUE; 
"colorCorrections" ppEffectCommit 0;
 
sleep 1;
 
// Play music
0 fadeMusic 1;
playMusic "LeadTrack01c_F"; // Play main menu theme
addMusicEventHandler ["MusicStop", {0 fadeMusic 1; playMusic "LeadTrack01c_F"}]; // Repeat the music