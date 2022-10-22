class CfgWeapons
{
    /* Definitions */
	#include "\A3_Aegis\macros_weaponAcc.hpp"
    
    /* Inheritance Tree */
	#include "\A3_Aegis\cfgRifles.hpp"

    /* Bases */
	class WF50_base_F: Rifle_Long_Base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = private;
		magazines[] = {5Rnd_127x99_Mag};
		magazineWell[] = {WF50_127x99};
		reloadAction = GestureReloadLRR;
		recoil = recoil_wf50;
		maxZeroing = 1600;
		cursor = srifle;
		initSpeed = 825;
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\WF50\Data\Anim\WF50.rtm"
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName = SniperCloud;
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		modes[] =
		{
			Single,
			far_optic1,
			medium_optic2,
			far_optic2
		};
		deployedPivot = bipod;
		hasBipod = true;
		class Single: Mode_SemiAuto
		{
			sounds[] = {StandardSound};
			reloadTime = RPM_BOLT_ACTION;
			dispersion = 0.00044;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
		};
		class far_optic1: Single
		{
			showToPlayer = false;
			minRange = 150;
			minRangeProbab = 0.2;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 1500;
			maxRangeProbab = 0.4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			requiredOpticType = 1;
		};
		class medium_optic2: Single
		{
			showToPlayer = false;
			minRange = 250;
			minRangeProbab = 0.2;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.4;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			requiredOpticType = 2;
		};
		class far_optic2: far_optic1
		{
			minRange = 500;
			minRangeProbab = 0.2;
			midRange = 1100;
			midRangeProbab = 0.7;
			maxRange = 2000;
			maxRangeProbab = 0.3;
			aiRateOfFire = 7;
			aiRateOfFireDistance = 1500;
			requiredOpticType = 2;
		};
	};

    /* Weapons */
	class srifle_WF50_F: WF50_base_F
	{
		author = $STR_A3_A_AveryTheKitty_and_Skaveria;
		baseWeapon = srifle_WF50_F;
		scope = protected;
		model = "\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\WF50\WF50_F.p3d";
		displayName = $STR_A3_A_CfgWeapons_srifle_WF50_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\WF50\Data\UI\icon_srifle_WF50_F_X_CA.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_sniper_CA.paa";
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_srifle_WF50_F_Library0;
		};
		descriptionShort = $STR_A3_A_CfgWeapons_srifle_WF50_F1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 380;
			class MuzzleSlot{};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] =
				{
					0.6,    // X
					0.35    // Y
				};
				iconScale = 0.2;
			};
			class PointerSlot{};
			class UnderbarrelSlot{};
		};
		inertia = 1.0;
		aimTransitionSpeed = 0.5;
		dexterity = 1.2;
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\WF50\Data\WF50_CO.paa"};
	};
	class srifle_WF50_camo_F: srifle_WF50_F
	{
		author = $STR_A3_A_AveryTheKitty_and_Skaveria;
		baseWeapon = srifle_WF50_camo_F;
		scope = protected;
		displayName = $STR_A3_A_CfgWeapons_srifle_WF50_camo_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\WF50\Data\UI\icon_srifle_WF50_camo_F_X_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\WF50\Data\WF50_BLUFOR_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\WF50\Data\WF50_BLUFOR.rvmat"};
	};
	class srifle_WF50_tna_F: srifle_WF50_camo_F
	{
		author = $STR_A3_A_AveryTheKitty_and_Skaveria;
		baseWeapon = srifle_WF50_tna_F;
		displayName = $STR_A3_A_CfgWeapons_srifle_WF50_tna_F0;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\WF50\Data\srifle_WF50_tna_F_CO.paa"};
		picture = "\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\WF50\Data\UI\icon_srifle_WF50_tna_F_X_CA.paa";
	};

    /* Accessorized Weapons */
	#include "cfgWeaponsAcc.hpp"
};