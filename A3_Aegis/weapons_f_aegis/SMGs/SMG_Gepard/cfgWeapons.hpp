class CfgWeapons
{
    /* Definitions */
	#include "\A3_Aegis\macros_weaponAcc.hpp"
    
    /* Inheritance Tree */
	#include "\A3_Aegis\cfgRifles.hpp"

    /* Bases */
	class Aegis_SMG_Gepard_Base_F: Rifle_Short_Base_F
	{
		author = $STR_A3_A_POLPOX_Lukin_Toadie;
		scope = private;
		displayName = $STR_A3_A_CfgWeapons_SMG_Gepard_base_F0;
		descriptionShort = $STR_A3_CfgWeapons_pdw2000_base_F0;
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_SMG_Gepard_base_F_Library0;
		};
		model = "\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_Gepard\Aegis_Gepard.p3d";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		hiddenSelections[] = 
		{
			camo1,
			camo2
		};
		hiddenSelectionsTextures[] = 
		{
			"A3_Aegis\weapons_f_aegis\SMGs\SMG_Gepard\Data\SMG_Gepard_Camo1_CO.paa",
			"A3_Aegis\weapons_f_aegis\SMGs\SMG_Gepard\Data\SMG_Gepard_Camo2_CO.paa"
		};
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_Gepard\Data\Anim\gepard.rtm"
		};
		reloadAction = GestureReloadGepard;
		magazines[] =
		{
			Aegis_40Rnd_9x21_Gepard_Mag_F,
			Aegis_40Rnd_9x21_Gepard_Green_Mag_F,
			Aegis_40Rnd_9x21_Gepard_Yellow_Mag_F,
			Aegis_20Rnd_9x21_Gepard_Mag_F
		};
		magazineWell[] = {Aegis_SMG_Gepard_9x21};
		bullet1[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",0.5011872,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",0.5011872,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",0.5011872,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",0.5011872,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",0.39810717,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",0.39810717,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",0.39810717,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",0.39810717,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",0.39810717,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",0.39810717,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",0.39810717,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",0.39810717,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_dry",0.17782794,1,10};
		reloadMagazineSound[] = {"A3_Aegis\sounds_f_aegis\arsenal\weapons\SMGs\SMG_Gepard\gepard_reload",1,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_firemode",0.17782794,1,5};
		magazineReloadSwitchPhase = 0.48;
		aimTransitionSpeed = 1.4;
		inertia=0.2;
		dexterity = 1.8;
		initSpeed = 380;
		recoil = Aegis_Recoil_Gepard;
		maxZeroing = 400;
		discreteDistance[] =
		{
			100,
			200
		};
		discreteDistanceInitIndex = 0;
		cursor = smg;
		distanceZoomMin=300;
		distanceZoomMax=300;
		modes[]=
		{
			"FullAuto",
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"SMGPDW2000_Shot_SoundSet","AK74_Tail_SoundSet","AK74_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"SMGPDW2000_silencerShot_SoundSet","AK12_silencerTail_SoundSet","AK12_silencerInteriorTail_SoundSet"};
			};
			recoil = "recoil_single_pdw";
			recoilProne = "recoil_single_prone_pdw";
			reloadTime = RPM_600;
			dispersion = 0.0020300001;
			minRange = 2;
			minRangeProbab = 0.03;
			midRange = 200;
			midRangeProbab = 0.69999999;
			maxRange = 350;
			maxRangeProbab = 0.5;
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"SMGPDW2000_Shot_SoundSet","AK74_Tail_SoundSet","AK74_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"SMGPDW2000_silencerShot_SoundSet","AK12_silencerTail_SoundSet","AK12_silencerInteriorTail_SoundSet"};
			};
			recoil = "recoil_auto_pdw";
			recoilProne = "recoil_auto_prone_pdw";
			reloadTime = RPM_700;
			dispersion = 0.0020300001;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.050000001;
			aiRateOfFire = 0.8;
			aiRateOfFireDistance = 50;
		};
		class weaponslotsinfo: weaponslotsinfo
		{
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] = {0.55,0.18};
				iconScale = 0.2;
			};
			class MuzzleSlot: asdg_MuzzleSlot_9MM_SMG
			{  
				iconPosition[] = {0.1,0.28};
				iconScale = 0.25;
			};
			class UnderBarrelSlot{};
			class PointerSlot: PointerSlot_Rail
            {
				iconPosition[] =
                {
                    0.3,    // X
                    0.27    // Y
                };
				iconScale = 0.25;
            };
			mass = 44;
		};

		/* ACE Ballistics */
		ACE_barrelTwist = 218.46;
		ACE_barrelLength = 	235;
		ACE_twistDirection = 1;
	};

    /* Weapons */
	class Aegis_SMG_Gepard_blk_F: Aegis_SMG_Gepard_Base_F
	{
		author = $STR_A3_A_POLPOX_Lukin_Toadie;
		baseWeapon = Aegis_SMG_Gepard_blk_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_SMG_Gepard_base_F0;
		picture = "\A3_Aegis\weapons_f_aegis\SMGs\SMG_Gepard\Data\UI\icon_Aegis_SMG_Gepard_blk_F_ca.paa";
	};

    /* Accessorized Weapons */
    #include "cfgWeaponsAcc.hpp"
};