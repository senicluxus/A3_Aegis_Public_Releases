scriptName "BIS_fnc_animalRandomization: functions_F";
/*
	Author: Julien VIDA <@tom_48_97>, edited by AveryTheKitty

	Description:
	Randomize the texture to use for animals

	Parameter(s):
	_this: Object - an animal

	Returns:
	Nothing  - maybe a unmicorn, some day
*/
#define SELF BIS_fnc_animalRandomization

if !(local _this) exitWith {/*Goat bye!*/};

/*---------------------------------------------------------------------------
	class Cow_random_F: Animal_Base_F
---------------------------------------------------------------------------*/
if (_this isKindOf "Cow_random_F") exitWith
{
	_textureList =
	[
		"\A3_Aegis\Animals_F_Aegis\Cow\Data\Black_Cow_CO.paa",
		"\A3_Aegis\Animals_F_Aegis\Cow\Data\BlackWhite_Cow_CO.paa",
		"\A3_Aegis\Animals_F_Aegis\Cow\Data\Brown_Cow_CO.paa",
		"\A3_Aegis\Animals_F_Aegis\Cow\Data\Cow_CO.paa"
	];
	_this setObjectTextureGlobal [0, (_textureList call BIS_fnc_selectRandom)];
};