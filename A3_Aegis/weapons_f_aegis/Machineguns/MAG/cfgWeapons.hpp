class CfgWeapons
{
	/* Definitions */
	#include "\A3_Aegis\macros_weaponAcc.hpp"
    
    /* Inheritance Tree */
	#include "\A3_Aegis\cfgRifles.hpp"
    
	class Aegis_MMG_FNMAG_Base: Rifle_Long_Base_F
	{
		scope = 0;
		model = "\A3_Aegis\weapons_f_aegis\Machineguns\MAG\Aegis_FNMAG_01.p3d";
		reloadAction = "GestureReloadFNMAG";
		handAnim[] = 
		{
			"OFP2_ManSkeleton",
			"A3_Aegis\weapons_f_aegis\Machineguns\MAG\data\FNMAG.rtm"
		};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {
			"\A3_Aegis\weapons_f_aegis\Machineguns\MAG\data\m240_1_co.paa",
			"\A3_Aegis\weapons_f_aegis\Machineguns\MAG\data\m240_2_co.paa",
			"\A3_Aegis\weapons_f_aegis\Machineguns\MAG\data\m240_int_co.paa",
			"\A3_Aegis\weapons_f_aegis\Machineguns\MAG\data\m240_fnmag_co.paa"
		};
		hasBipod = 1;

		htMin = 8;
		htMax = 920;
		inertia = 0.8;
		aimTransitionSpeed = 0.7;
		dexterity = 1.3;
		initSpeed = 850;
		recoil = "recoil_mmg_01";
		maxZeroing = 1000;
		cursor = "mg";
		magazines[] = 
		{
			"Aegis_200Rnd_762x51_MAG_Red_F",
			"Aegis_200Rnd_762x51_MAG_Red_Tracer_F",
			"Aegis_200Rnd_762x51_MAG_Yellow_F",
			"Aegis_200Rnd_762x51_MAG_Yellow_Tracer_F",
			"Aegis_200Rnd_762x51_MAG_Green_F",
			"Aegis_200Rnd_762x51_MAG_Green_Tracer_F"
		};
		magazineWell[] = 
		{
			"Aegis_FNMAG"
		};
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_arifle_FNMAG_base_F_Library0;
		};
		descriptionShort = $STR_A3_A_CfgWeapons_Aegis_FNMAG_Short_Desc_F1;
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.501187,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.501187,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.501187,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.501187,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.398107,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.398107,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.398107,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.398107,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.251189,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.251189,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.251189,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.251189,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_dry",0.562341,1,10};
		reloadMagazineSound[] = {"A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Machineguns\MAG\gpmg_Reload",1.5,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_firemode",0.316228,1,5};

		class GunParticles: GunParticles
		{
			class AmmoBeltEject
			{
				directionName = "linkEnd";
				positionName = "linkStart";
				effectName = "MachineGunEject1";
			};
			/*class FirstEffect
			{
				effectName = "MachineGunCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};*/

			// tried to add smoke from right side of the gun and ejector, but it looks too much
			/*
			class EffectRight
			{
				effectName = "RifleAssaultCloud";
				directionName = "effectRightDir";
				positionName = "linkStart";
			};
			class EffectBottom
			{
				effectName = "RifleAssaultCloud";
				directionName = "effectDownDir";
				positionName = "nabojnicestart";
			};
			*/
		};

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 380;
			class MuzzleSlot: MuzzleSlot_762
			{
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
			};
			class CowsSlot: CowsSlot_Rail
			{
				iconPosition[] = {0.57,0.37};
				iconScale = 0.15;
			};
			class PointerSlot: PointerSlot_Rail
			{
				iconPosition[] = {0.35,0.46};
				iconScale = 0.2;
			};
			class UnderBarrelSlot
			{
			};
		};

		modes[] = {"FullAuto","close","short","medium","far_optic1","far_optic2"};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = (60/750);
			dispersion = 0.0006;
			sounds[] = {"StandardSound","SilencedSound"};
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Zafir_Shot_SoundSet","SyndikatLMG_Tail_SoundSet","SyndikatLMG_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"S77_silencerShot_SoundSet","SyndikatLMG_silencerTail_SoundSet","SyndikatLMG_silencerInteriorTail_SoundSet"};
			};
		};
		class close: FullAuto
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.1;
			showToPlayer = 0;
		};
		class far_optic1: medium
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 1000;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.4;
			maxRange = 650;
			maxRangeProbab = 0.01;
		};
		class far_optic2: far_optic1
		{
			burst = 3;
			requiredOpticType = 2;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 950;
			maxRangeProbab = 0.01;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 900;
		};
		aiDispersionCoefY = 24;
		aiDispersionCoefX = 21;
	};
	class Aegis_MMG_FNMAG_old_F: Aegis_MMG_FNMAG_Base
	{
		author = $STR_A3_A_POLPOX_and_Chair;
		scope = public;
		baseWeapon = Aegis_FNMAG_old_F;
		displayName = $STR_A3_A_CfgWeapons_Aegis_FNMAG_old_f0;
		picture = "\A3_Aegis\weapons_f_aegis\Machineguns\MAG\Data\UI\icon_Aegis_MMG_FNMAG_old_F_ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 400;
			class MuzzleSlot
			{
			};
			class CowsSlot
			{
			};
			class PointerSlot
			{
			};
			class UnderBarrelSlot
			{
			};
		};
		class FullAuto: FullAuto
		{
			dispersion = 0.00065;
		};
		magazines[] = 
		{
			"Aegis_200Rnd_762x51_MAG_Red_F",
			"Aegis_200Rnd_762x51_MAG_Red_Tracer_F",
			"Aegis_200Rnd_762x51_MAG_Yellow_F",
			"Aegis_200Rnd_762x51_MAG_Yellow_Tracer_F",
			"Aegis_200Rnd_762x51_MAG_Green_F",
			"Aegis_200Rnd_762x51_MAG_Green_Tracer_F"
		};
		magazineWell[] = 
		{
			"Aegis_FNMAG"
		};
	};
	class Aegis_MMG_FNMAG_F: Aegis_MMG_FNMAG_Base
	{
		author = $STR_A3_A_POLPOX_and_Chair;
		scope = public;
		baseWeapon = Aegis_MMG_FNMAG_F;
		model = "A3_Aegis\weapons_f_aegis\Machineguns\MAG\Aegis_FNMAG_02.p3d";
		picture = "\A3_Aegis\weapons_f_aegis\Machineguns\MAG\Data\UI\icon_Aegis_MMG_FNMAG_F_ca.paa";
		displayName = $STR_A3_A_CfgWeapons_Aegis_FNMAG_F0;
		magazines[] = 
		{
			"Aegis_200Rnd_762x51_MAG_Red_F",
			"Aegis_200Rnd_762x51_MAG_Red_Tracer_F",
			"Aegis_200Rnd_762x51_MAG_Yellow_F",
			"Aegis_200Rnd_762x51_MAG_Yellow_Tracer_F",
			"Aegis_200Rnd_762x51_MAG_Green_F",
			"Aegis_200Rnd_762x51_MAG_Green_Tracer_F"
		};
		magazineWell[] = 
		{
			"Aegis_FNMAG"
		};
	};
	class Aegis_MMG_FNMAG_240_F: Aegis_MMG_FNMAG_Base
	{
		author = $STR_A3_A_POLPOX_and_Chair;
		scope = public;
		baseWeapon = Aegis_MMG_FNMAG_240_F;
		model = "A3_Aegis\weapons_f_aegis\Machineguns\MAG\Aegis_M240.p3d";
		displayName = $STR_A3_A_CfgWeapons_Aegis_FNMAG_240_F0;
		recoil = "recoil_zafir";
		picture = "\A3_Aegis\weapons_f_aegis\Machineguns\MAG\Data\UI\icon_Aegis_MMG_FNMAG_240_F_ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 340;
		};
		class FullAuto: FullAuto
		{
			reloadTime = (60/850);
		};
		magazines[] = 
		{
			"Aegis_200Rnd_762x51_MAG_Red_F",
			"Aegis_200Rnd_762x51_MAG_Red_Tracer_F",
			"Aegis_200Rnd_762x51_MAG_Yellow_F",
			"Aegis_200Rnd_762x51_MAG_Yellow_Tracer_F",
			"Aegis_200Rnd_762x51_MAG_Green_F",
			"Aegis_200Rnd_762x51_MAG_Green_Tracer_F"
		};
		magazineWell[] = 
		{
			"Aegis_FNMAG"
		};
	};
	#include "Presets.hpp"
};
