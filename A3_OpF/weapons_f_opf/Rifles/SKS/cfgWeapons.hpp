class CfgWeapons
{
    /* Definitions */
	#include "\A3_Aegis\macros_weaponAcc.hpp"
    
    /* Inheritance Tree */
	#include "\A3_Aegis\cfgRifles.hpp"

    /* Bases */
	class Opf_arifle_SKS_base_F: Rifle_Base_F
	{
		author = $STR_A3_A_AveryTheKitty_Luchador_and_Toadie2K;
		scope = private;
		displayName = $STR_A3_O_CfgWeapons_arifle_SKS_base_F0;
		descriptionShort = $STR_A3_O_CfgWeapons_arifle_SKS_base_F1;
		model = "\A3_Opf\Weapons_F_Opf\Rifles\SKS\SKS_F.p3d";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
	  	hiddenSelections[] = {camo_1};
		handAnim[] =
		{
	    	OFP2_ManSkeleton,
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_06\Data\Anim\DMR_06.rtm"
		};
		reloadAction = GestureReloadSKS;
		magazines[] = {30Rnd_762x39_Mag_F};
		magazineWell[] = {AK_762x39};
		magazineReloadSwitchPhase = 0.48;
		inertia = 0.7;
		aimTransitionSpeed = 0.9;
		dexterity = 1.68;
		initSpeed = 735;
		recoil = recoil_sks;
		maxZeroing = 1000;
		bullet1[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_01",db-6,1,15};
		bullet2[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_02",db-6,1,15};
		bullet3[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_03",db-6,1,15};
		bullet4[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_04",db-6,1,15};
		bullet5[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_01",db-8,1,15};
		bullet6[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_02",db-8,1,15};
		bullet7[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_03",db-8,1,15};
		bullet8[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_04",db-8,1,15};
		bullet9[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_01",db-12,1,15};
		bullet10[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_02",db-12,1,15};
		bullet11[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_03",db-12,1,15};
		bullet12[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_04",db-12,1,15};
		soundBullet[] =
		{
			bullet1,1/12,
			bullet2,1/12,
			bullet3,1/12,
			bullet4,1/12,
			bullet5,1/12,
			bullet6,1/12,
			bullet7,1/12,
			bullet8,1/12,
			bullet9,1/12,
			bullet10,1/12,
			bullet11,1/12,
			bullet12,1/12
		};
		class Library
		{
			libTextDesc = $STR_A3_O_CfgWeapons_arifle_SKS_base_F_Library0;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot{};
			class CowsSlot{};
			class PointerSlot{};
			class UnderBarrelSlot{};
			mass = 160;
		};
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		modes[] = {Single};
		class Single: Mode_SemiAuto
		{
			sounds[] = {StandardSound};
			reloadTime = RPM_600;
			dispersion = 0.00116;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
	  	};
	};

    /* Arsenal */
	class Opf_arifle_SKS_F: Opf_arifle_SKS_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Luchador_and_Toadie2K;
		baseWeapon = Opf_arifle_SKS_F;
		scope = public;
		displayName = $STR_A3_O_CfgWeapons_arifle_SKS_F0;
		picture = "\A3_Opf\Weapons_F_Opf\Rifles\SKS\Data\UI\icon_arifle_SKS_F_X_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Opf\Weapons_F_Opf\Rifles\SKS\Data\SKS_CO.paa"};
	};
};