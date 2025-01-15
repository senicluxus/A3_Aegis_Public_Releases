class CfgWeapons
{
    /* Definitions */
	#include "\A3_Aegis\macros_weaponAcc.hpp"
    
    /* Inheritance Tree */
	#include "\A3_Aegis\cfgRifles.hpp"

	/* Base Classes */
	class Aegis_srifle_SVD_base_F: Rifle_Long_Base_F
	{
		author = $STR_A3_A_Lukinator96_and_Soi;
		scope = protected;
		scopeArsenal = protected;
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_srifle_SVD_base_F_Library0;
		};
		model = "A3_Aegis\weapons_f_aegis\LongRangeRifles\SVD\Aegis_SVD.p3d";
		picture = "\A3\Weapons_F_EPA\LongRangeRifles\DMR_01\Data\UI\gear_DMR_01_X_CA.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		displayName  = "SVD 7.62 mm"; 
		descriptionShort = $STR_A3_cfgweapons_srifle_dmr_01_f1;
		handAnim[] = {"OFP2_ManSkeleton","\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\SVD\Data\Anim\SVD.rtm"};
		reloadAction = "GestureReloadDMR05";
		reloadMagazineSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_reload",1,1,10};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.63095737,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.63095737,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.63095737,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.63095737,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.63095737,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.63095737,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.63095737,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.63095737,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.63095737,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.63095737,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.63095737,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.63095737,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_dry",0.25118864,1,20};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_firemode",0.31622776,1,5};
		recoil = "recoil_dmr_06";
		maxZeroing = 1600;
		inertia=0.69999999;
		aimTransitionSpeed=0.89999998;
		distanceZoomMin=300;
		distanceZoomMax=300;
		cursor="srifle";
		hiddenSelections[] = {"camo1","camo2"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] = {0.62,0.38};
				iconScale = 0.2;
			};
			class MuzzleSlot: asdg_MuzzleSlot_762R_SVD
			{  
				iconPosition[] = {-0.02,0.41};
				iconScale = 0.2;
			};
			class UnderBarrelSlot{};
			class PointerSlot: asdg_PistolUnderRail
            {
				iconPosition[] =
                {
                    0.3,    // X
                    0.5   // Y
                };
				iconScale = 0.2;
            };
			mass = 135;
		};
		magazines[] = 
		{
			10Rnd_762x54_Mag,
			Aegis_10Rnd_762x54_SVD_Yellow_Mag_F,
			Aegis_10Rnd_762x54_SVD_Green_Mag_F,
			Aegis_10Rnd_762x54_SVD_Red_Mag_F
		};
		magazineWell[] = 
		{
			Rahim_762x54
		};
		modes[] = 
		{
			Single,
			single_close_optics1,
			single_medium_optics1,
			single_far_optics1
		};
		initSpeed = 830;
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = 
				{
					"AK12_Shot_SoundSet",
					"DMR01_Tail_SoundSet",
					"DMR01_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = 
				{
					"AK12_silencerShot_SoundSet",
					"DMR01_silencerTail_SoundSet",
					"DMR01_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime = 0.092;
			dispersion = 0.00058;
			recoil = "recoil_single_dmr";
			recoilProne = "recoil_single_prone_dmr";
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
		};
		class single_close_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 500;
			maxRangeProbab = 0.01;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
		};
		class single_medium_optics1: single_close_optics1
		{
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_far_optics1: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 700;
			midRangeProbab = 0.5;
			maxRange = 1000;
			maxRangeProbab = 0.05;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
		};
		aiDispersionCoefY = 3;
		aiDispersionCoefX = 2;
		/* ACE Stats*/
		ACE_barrelLength = 620;
		ACE_barrelTwist = 241;
		ACE_twistDirection = 1;
	};

	/* Weapon Classes */
	class Aegis_srifle_SVD_f: Aegis_srifle_SVD_base_F
	{
		author = $STR_A3_A_Lukinator96_and_Soi;
		displayname = $STR_A3_A_CfgWeapons_srifle_SVD_F0;
		scope = public;
		scopeArsenal = public;
		picture = "\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\SVD\Data\UI\icon_Aegis_srifle_SVD_f_ca.paa";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = 
		{
			"A3_Aegis\weapons_f_aegis\LongRangeRifles\SVD\data\svd_co.paa",
			"a3_aegis\weapons_f_aegis\rifles\akm74\data\ak_mount_co.paa"
		};
		baseweapon = "Aegis_srifle_SVD_f";
		
	};
	class Aegis_srifle_SVD_blk_f: Aegis_srifle_SVD_base_F
	{
		author = $STR_A3_A_Lukinator96_and_Soi;
		displayname = $STR_A3_A_CfgWeapons_srifle_SVD_black_F0;
		scope = public;
		scopeArsenal = public;
		picture = "\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\SVD\Data\UI\icon_Aegis_srifle_SVD_blk_f_ca.paa";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = 
		{
			"A3_Aegis\weapons_f_aegis\LongRangeRifles\SVD\data\svd_blk_co.paa",
			"a3_aegis\weapons_f_aegis\rifles\akm74\data\ak_mount_co.paa"
		};
		baseweapon = "Aegis_srifle_SVD_blk_f";
		
	};
	class Aegis_srifle_SVD_plum_f: Aegis_srifle_SVD_base_F
	{
		author = $STR_A3_A_Lukinator96_and_Soi;
		displayname = $STR_A3_A_CfgWeapons_srifle_SVD_plum_F0;
		scope = public;
		scopeArsenal = public;
		hiddenSelections[] = {"camo1","camo2"};
		picture = "\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\SVD\Data\UI\icon_Aegis_srifle_SVD_plum_f_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"A3_Aegis\weapons_f_aegis\LongRangeRifles\SVD\data\svd_plum_co.paa",
			"a3_aegis\weapons_f_aegis\rifles\akm74\data\ak_mount_co.paa"
		};
		baseweapon = "Aegis_srifle_SVD_plum_f";
		
	};


	/* Accessorised Weapons */
	#include "Presets.hpp"
};