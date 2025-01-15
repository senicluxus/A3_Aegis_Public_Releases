class CfgWeapons
{
    /* Definitions */
	#include "\A3_Aegis\macros_weaponAcc.hpp"
    
    /* Inheritance Tree */
	#include "\A3_Aegis\cfgRifles.hpp"
	class arifle_RPK_base_F: Rifle_Base_F
	{
		class WeaponsSlotsInfo;
	};

	/* Base Classes */
	class Aegis_arifle_RPK74_base_F: arifle_RPK_base_F
	{
		descriptionShort = $STR_A3_A_CfgWeapons_arifle_AK12_545_base_F1;
		recoil = recoil_rpk74;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_545R
			{  
				iconPosition[] = {-0.02,0.41};
				iconScale = 0.2;
			};
			mass = 103;
		};
		magazines[] = 
		{
			Aegis_45Rnd_545x39_Mag_Green_F,
			Aegis_45Rnd_545x39_Mag_F,
			Aegis_45Rnd_545x39_Mag_Tracer_Green_F,
			Aegis_45Rnd_545x39_Mag_Tracer_F
		};
		magazineWell[] = 
		{
			"AK_545x39",
			"CBA_545x39_AK",
			"CBA_545x39_RPK",
		};
		modes[] =
		{
			FullAuto,
	    	Single,
			FullAuto_medium,
			medium_optics1,
			medium_optics2
	  	};
		initSpeed = 960;
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_dry",0.17782794,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_firemode",0.17782794,1,5};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"AK74_Shot_SoundSet","AK74_Tail_SoundSet","AK74_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"AK12_silencerShot_SoundSet","AK12_silencerTail_SoundSet","AK12_silencerInteriorTail_SoundSet"};
			};
			reloadTime = RPM_600;
			dispersion = 0.00116;
			minRange = 2;
			minRangeProbab = 0.01;
			midRange = 200;
			midRangeProbab = 0.01;
			maxRange = 400;
			maxRangeProbab = 0.01;
	  	};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"AK74_Shot_SoundSet","AK74_Tail_SoundSet","AK74_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"AK12_silencerShot_SoundSet","AK12_silencerTail_SoundSet","AK12_silencerInteriorTail_SoundSet"};
			};
			reloadTime = RPM_600;
			dispersion = 0.00116;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
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
		class medium_optics1: FullAuto
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=150;
			minRangeProbab=0.2;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=525;
			maxRangeProbab=0.30000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=525;
		};
		class medium_optics2: medium_optics1
		{
			requiredOpticType=2;
			minRange=300;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=750;
			maxRangeProbab=0.050000001;
			aiRateOfFire=10;
			aiRateOfFireDistance=750;
		};
	};
	class Aegis_arifle_RPK74M_F: Aegis_arifle_RPK74_base_F
	{
		recoil = recoil_rpk74;
		model = "A3_Aegis\Weapons_f_aegis\rifles\rpk74\rpk74m_f.p3d";
		author = $STR_A3_A_Lukinator96;
		scope = public;
		scopearsenal = public;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\RPK74\Data\UI\icon_Aegis_arifle_RPK74M_F_ca.paa";
		//hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Rifles\RPK\Data\RPK_alt_CO.paa"};
		displayName = $STR_A3_A_CfgWeapons_arifle_rpk74m_f0;
		descriptionShort = $STR_A3_A_CfgWeapons_arifle_RPK_545_base_F1;
		baseWeapon = Aegis_arifle_RPK74M_F;
		class WeaponSlotsInfo: WeaponSlotsInfo 
		{
			class CowsSlot: CowsSlot_Rail
			{
				iconPosition[] = {0.55,0.28};
				iconScale = 0.2;
			};
			class MuzzleSlot: asdg_MuzzleSlot_545R
			{  
				iconPosition[] = {-0.02,0.41};
				iconScale = 0.2;
			};
			class UnderBarrelSlot{};
			class PointerSlot: asdg_PistolUnderRail
			{
				iconPosition[] = {0.2,0.44};
				iconScale = 0.2;
			};
			mass = 113;
		};
		magazines[] = 
		{
			Aegis_45Rnd_545x39_Mag_Green_F,
			Aegis_45Rnd_545x39_Mag_F,
			Aegis_45Rnd_545x39_Mag_Tracer_Green_F,
			Aegis_45Rnd_545x39_Mag_Tracer_F
		};
		magazineWell[] = 
		{
			"AK_545x39",
			"CBA_545x39_AK",
			"CBA_545x39_RPK",
		};

		/* ACE Stats*/
		ACE_barrelLength = 590.00;
		ACE_barrelTwist = 195.072;
		ACE_twistDirection = 1;
	};
};