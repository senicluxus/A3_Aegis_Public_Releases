class CfgWeapons
{
    /* Definitions */
	#include "\A3_Aegis\macros_weaponAcc.hpp"
    
    /* Inheritance Tree */
	#include "\A3_Aegis\cfgRifles.hpp"

    /* Bases */
	class Opf_RFB_base_F: Rifle_Base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = private;
		magazines[] = {20Rnd_762x51_Mag};
		reloadAction = GestureReloadSDAR;
		recoil = recoil_rfb;
		maxZeroing = 800;
		hiddenSelections[] =
		{
			camo,
			camo1
		};
		hiddenSelectionsTextures[] =
		{
			"\A3_Opf\Weapons_F_Opf\Rifles\RFB\Data\RFB_CO.paa",
			"\A3\Weapons_F\Rifles\SDAR\Data\RFB_UW_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\A3_Opf\Weapons_F_Opf\Rifles\RFB\Data\RFB.rvmat",
			"\A3\Weapons_F\Rifles\SDAR\Data\RFB_UW.rvmat"
		};
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3\Weapons_F\Rifles\SDAR\Data\Anim\SDAR.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot{};
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] =
				{
					0.5,    // X
					0.35    // Y
				};
				iconScale = 0.2;
			};
			class PointerSlot{};
		};
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		modes[] =
		{
			Single,
			single_medium_optics1,
			single_far_optics2
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {StandardSound};
			reloadTime = RPM_SEMI;
			dispersion = 0.00131;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = false;
			minRange = 5;
			minRangeProbab = 0.2;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.3;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 100;
			minRangeProbab = 0.2;
			midRange = 550;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 7;
			aiRateOfFireDistance = 700;
		};
		aiDispersionCoefY = 6;
		aiDispersionCoefX = 4;
	};

    /* Arsenal */
	class Opf_arifle_RFB_F: Opf_RFB_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = Opf_arifle_RFB_F;
		scope = public;
		model = "\A3\Weapons_F\Rifles\SDAR\SDAR_F.p3d";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 80;
		};
		inertia = 0.4;
		aimTransitionSpeed = 1.4;
		dexterity = 1.6;
		displayName = $STR_A3_O_CfgWeapons_arifle_RFB_F0;
		picture = "\a3\weapons_f\Rifles\SDAR\data\UI\gear_sdar_x_ca.paa";
		UiPicture = "\a3\weapons_f\Rifles\SDAR\data\UI\gear_sdar_t_ca.paa";
		descriptionShort = $STR_A3_O_CfgWeapons_arifle_RFB_F1;
		class Library
		{
			libTextDesc = $STR_A3_O_CfgWeapons_arifle_RFB_F_Library0;
		};
	};

    /* Deprecated */
    #include "deprecated.hpp"
};