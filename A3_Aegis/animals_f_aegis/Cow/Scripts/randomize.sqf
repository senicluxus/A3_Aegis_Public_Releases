/*--------------------------------------------------------------------
	file: randomize.sqf
	===================
	Author: Julien VIDA <@tom_48_97>
	Description: Redirect to the new system
--------------------------------------------------------------------*/

if !(local _this) exitWith {};

if (_this isKindOf "Cow_random_F") exitWith
{
	_textureList =
	[
		"\A3_Aegis\Animals_F_Aegis\Cow\Data\Black_Cow_CO.paa",
		"\A3_Aegis\Animals_F_Aegis\Cow\Data\BlackWhite_Cow_CO.paa",
		"\A3_Aegis\Animals_F_Aegis\Cow\Data\Brown_Cow_CO.paa",
		"\A3_Aegis\Animals_F_Aegis\Cow\Data\Cow_CO.paa"
	];
	_this setObjectTextureGlobal [0, selectRandom _textureList];
};