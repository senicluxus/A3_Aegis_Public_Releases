#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
#include "\A3_Aegis\Weapons_F_Aegis\ASDG.hpp"
#include "\A3_Aegis\macros_weaponAcc.hpp"
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot_58;
class MuzzleSlot_545R;
class CowsSlot_Rail;
class CowsSlot_Dovetail;
class PointerSlot_Rail;
class UnderBarrelSlot_rail;
class WeaponSlotsInfo;
class CfgWeapons
{
	//Base
	class arifle_CTAR_base_F;
	class arifle_CTAR_GL_base_F;
	class arifle_CTARS_base_F;
	class Aegis_arifle_CTAR_tan_f: arifle_CTAR_base_f
	{
		author = $STR_A3_A_Jamie;
		displayname = $STR_A3_A_CfgWeapons_arifle_CTAR_tan_f0;
		baseweapon = Aegis_arifle_CTAR_tan_f;
		scope = Public;
		picture = "\A3_Aegis\weapons_f_aegis\Rifles\CTAR\Data\UI\icon_arifle_CTAR_tan_F_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\weapons_f_aegis\Rifles\CTAR\Data\ctar_f_1_tan_CO.paa",
			"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_2_co.paa"
		};
	};
	class Aegis_arifle_CTAR_GL_tan_f: arifle_CTAR_GL_base_f
	{
		author = $STR_A3_A_Jamie;
		displayname = $STR_A3_A_CfgWeapons_arifle_CTAR_GL_tan_f0;
		baseweapon = Aegis_arifle_CTAR_GL_tan_f;
		scope = Public;
		picture = "\A3_Aegis\weapons_f_aegis\Rifles\CTAR\Data\UI\icon_arifle_CTAR_GL_tan_F_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\weapons_f_aegis\Rifles\CTAR\Data\ctar_f_1_tan_CO.paa",
			"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_2_co.paa",
			"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTARS_GL_F_co.paa"
		};
	};
	class Aegis_arifle_CTARS_tan_f: arifle_CTARS_base_f
	{
		author = $STR_A3_A_Jamie;
		displayname = $STR_A3_A_CfgWeapons_arifle_CTARS_tan_f0;
		baseweapon = Aegis_arifle_CTARS_tan_f;
		scope = Public;
		picture = "\A3_Aegis\weapons_f_aegis\Rifles\CTAR\Data\UI\icon_arifle_CTARS_tan_F_X_CA";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\weapons_f_aegis\Rifles\CTAR\Data\ctar_f_1_tan_CO.paa",
			"\a3\weapons_f_exp\rifles\ctars\data\ctars_f_co.paa"
		};
	};
	#include "presets.hpp"
};