#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
#include "\A3_Aegis\Weapons_F_Aegis\ASDG.hpp"
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
    class arifle_AKS_base_F;
	class arifle_AKS_F: arifle_AKS_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot
			{
			};
			class MuzzleSlot: asdg_MuzzleSlot_545R
			{
				iconPosition[]={0.16,0.41};
				iconScale=0.2;
			};
			class UnderBarrelSlot
			{
			};
			class PointerSlot
			{
			};
			mass=80;
		};
	};
	class arifle_AKS_alt_F: arifle_AKS_F
	{
		author = "Grave";
		baseWeapon = arifle_AKS_alt_F;
		displayName = $STR_A3_A_CfgWeapons_arifle_AKS_alt_F0;
		hiddenSelectionsTextures[]=
		{
			"A3_Aegis\weapons_f_Aegis\Rifles\AKS\Data\arifle_AK74U_wood_CO.paa",
			"\A3\Weapons_F_Exp\Rifles\AKS\Data\magazine_ak74_co.paa"
		};
		//picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AKS\Data\UI\icon_arifle_AK74U_wood_F_ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot
			{
			};
			class MuzzleSlot: asdg_MuzzleSlot_545R
			{  
				iconPosition[] = {-0.02,0.41};
				iconScale = 0.2;
			};
			class UnderBarrelSlot{};
			class PointerSlot{};
			mass = 80;
		};
	};
	class arifle_AKSM_F: arifle_AKS_F
	{
		author = "Grave";
		baseWeapon = arifle_AKSM_F;
		displayName = $STR_A3_A_CfgWeapons_arifle_AKSM_F0;
		hiddenSelectionsTextures[]=
		{
			"A3_Aegis\weapons_f_Aegis\Rifles\AKS\Data\arifle_AK74U_black_CO.paa",
			"\A3\Weapons_F_Exp\Rifles\AKS\Data\magazine_ak74_co.paa"
		};
		//picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AKS\Data\UI\icon_arifle_AK74U_black_F_ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot
			{
			};
			class MuzzleSlot: asdg_MuzzleSlot_545R
			{  
				iconPosition[] = {-0.02,0.41};
				iconScale = 0.2;
			};
			class UnderBarrelSlot{};
			class PointerSlot{};
			mass = 60;
		};
		magazines[]=
		{
			30Rnd_545x39_Black_Mag_F,
			30Rnd_545x39_Black_Mag_Tracer_F
		};
	};
	class arifle_AKSM_alt_F: arifle_AKSM_F
	{
		author = "Grave";
		baseWeapon = arifle_AKSM_alt_F;
		displayName = $STR_A3_A_CfgWeapons_arifle_AKSM_alt_F0;
		hiddenSelectionsTextures[]=
		{
			"A3_Aegis\weapons_f_Aegis\Rifles\AKS\Data\arifle_AK74U_plum_CO.paa",
			"\A3\Weapons_F_Exp\Rifles\AKS\Data\magazine_ak74_co.paa"
		};
		//picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AKS\Data\UI\icon_arifle_AK74U_plum_F_ca.paa";
		magazines[]=
		{
			30Rnd_545x39_Mag_F,
			30Rnd_545x39_Mag_Green_F,
			30Rnd_545x39_Mag_Tracer_F,
			30Rnd_545x39_Mag_Tracer_Green_F
		};
	};
};