class CfgWeapons
{
    /* Definitions */
	#include "\A3_Aegis\macros_weaponAcc.hpp"
    
    /* Inheritance Tree */
	#include "\A3_Aegis\cfgRifles.hpp"

    /* Weapons */
	class sgun_Mp153_black_F: Rifle_Base_F
	{
		author = $STR_A3_A_AveryTheKitty_and_SAM61;
		baseWeapon = sgun_Mp153_black_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_sgun_Mp153_black_F0;
		model = "\A3_Aegis\Weapons_F_Aegis\Shotguns\Mp153\Mp153_F.p3d";
		magazines[] =
		{
			4Rnd_12Gauge_Pellets,
			Aegis_4Rnd_12Gauge_HE,
			Aegis_4Rnd_12Gauge_Smoke,
			4Rnd_12Gauge_Slug
		};
		magazineWell[] = {MP153_12GA};
		maxZeroing = 100;
		reloadAction = GestureReloadM4SSAS;
		recoil = recoil_mp153;
		cursor = sgun;
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\Anim\DMR_03.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot{};
			class CowsSlot{};
			class PointerSlot: asdg_PistolUnderRail
			{
				iconPosition[] =
                {
                    0.5,    // X
                    0.3     // Y
                };
				iconScale = 0.2;
			};
			mass = 140;
		};
		inertia = 0.6;
		aimTransitionSpeed = 1.1;
		dexterity = 1.3;
		initSpeed = 375;
		picture = "\A3_Aegis\Weapons_F_Aegis\Shotguns\Mp153\Data\UI\icon_sgun_Mp153_black_F_X_CA.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		descriptionShort = $STR_A3_A_CfgWeapons_sgun_Mp153_black_F1;
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Shotguns\Mp153\Data\Mp153_CO.paa"};
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_sgun_Mp153_black_F_Library0;
		};
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		modes[] = {Single};
		class Single: Mode_SemiAuto
		{
			sounds[] = {StandardSound};
			dispersion = 0.00116;
			reloadTime = RPM_SEMI;
			minRange = 1;
			minRangeProbab = 0.5;
			midRange = 60;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
		};
	};
	class sgun_Mp153_classic_F: sgun_Mp153_black_F
	{
		author = $STR_A3_A_AveryTheKitty_and_SAM61;
		baseWeapon = sgun_Mp153_classic_F;
		displayName = $STR_A3_A_CfgWeapons_sgun_Mp153_classic_F0;
		model = "\A3_Aegis\Weapons_F_Aegis\Shotguns\Mp153\Mp153_classic_F.p3d";
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_06\Data\Anim\DMR_06.rtm"
		};
		picture = "\A3_Aegis\Weapons_F_Aegis\Shotguns\Mp153\Data\UI\icon_sgun_Mp153_classic_F_X_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Shotguns\Mp153\Data\Mp153_classic_CO.paa"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot{};
			class CowsSlot{};
			class PointerSlot{};
			mass = 160;
		};
		initSpeed = 380;
		inertia = 0.7;
		aimTransitionSpeed = 1;
	};
};