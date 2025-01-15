class CfgWeapons
{
    /* Definitions */
	#include "\A3_Aegis\macros_weaponAcc.hpp"
    
    /* Inheritance Tree */
	#include "\A3_Aegis\cfgRifles.hpp"

    /* Bases */
	class arifle_RPK_base_F: Rifle_Base_F
	{
		model = "\A3_Aegis\Weapons_F_Aegis\Rifles\RPK\RPK_F.p3d";
	  	hiddenSelections[] = {camo_1};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Rifles\RPK\Data\RPK_CO.paa"};
		descriptionShort = $STR_A3_A_CfgWeapons_arifle_RPK_base_F1;
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_arifle_RPK_base_F_Library0;
		};
		handAnim[] =
		{
	    	OFP2_ManSkeleton,
			"\A3\Weapons_F_Exp\Rifles\AKM\Data\Anim\AKM.rtm"
		};
		reloadAction = GestureReloadAKM;
		magazines[] =
		{
			75Rnd_762x39_Mag_F,
			75Rnd_762x39_Mag_Tracer_F
		};
		magazineWell[] = {AK_762x39};
		magazineReloadSwitchPhase = 0.48;
		discreteDistance[] =
		{
			100,
			200,
			300,
			400,
			500,
			600,
			700,
			800
		};
		discreteDistanceInitIndex = 1;
		initSpeed = 715;
		inertia = 0.8;
		dexterity = 1.6;
		aimTransitionSpeed = 0.9;
		recoil = recoil_rpk;
		deployedPivot = bipod;
		hasBipod = true;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_762R
			{  
				iconPosition[] = {-0.02,0.41};
				iconScale = 0.2;
			};
			class CowsSlot: CowsSlot_Rail
			{
				iconPosition[] = {0.55,0.28};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_PistolUnderRail
			{
				iconPosition[] = {0.2,0.44};
				iconScale = 0.2;
			};
			class UnderBarrelSlot{};
			mass = 155;
		};
		modes[] =
		{
			FullAuto,
	    	Single,
			FullAuto_medium
	  	};
		class Single: Mode_SemiAuto
		{
			reloadTime = RPM_600;
			dispersion = 0.00116;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
	  	};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = RPM_600;
			dispersion = 0.00116;
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-006;
		};
		class FullAuto_medium: FullAuto
		{
			showToPlayer = false;
			burstRangeMax = 8;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 175;
			midRangeProbab = 0.75;
			maxRange = 300;
			maxRangeProbab = 0.25;
			aiRateOfFire = 2;
		};

        /* ACE */
        ACE_barrelTwist = 195.04;
        ACE_barrelLength = 590;
	};

    /* Weapons */
	class arifle_RPK_F: arifle_RPK_base_F
	{
		author = $STR_A3_A_AveryTheKitty_and_BOOLY;
		scope = public;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\RPK\Data\UI\icon_arifle_RPK_F_X_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_arifle_RPK_F0;
		baseWeapon = arifle_RPK_F;
	};
};