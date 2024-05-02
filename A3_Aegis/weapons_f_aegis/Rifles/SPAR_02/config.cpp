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
	//Base
	class Rifle_Base_F;
	class arifle_SPAR_02_base_F: Rifle_Base_F
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
	};
	// SPAR-16 Infantry
	class Aegis_arifle_SPAR_02_Inf_base_F: arifle_SPAR_02_base_F
	{
		author = $STR_A3_A_Ravenholme;
		descriptionShort= $STR_A3_CfgWeapons_arifle_SPAR_01_base_F1;
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
		magazineWell[]=
		{
			"STANAG_556x45",
			"STANAG_556x45_Large"
		};
		hiddenSelectionsMaterials[]=
		{
			"A3_Aegis\weapons_f_aegis\Rifles\SPAR_01\data\arifle_SPAR_01_01.rvmat",
			"A3_Aegis\weapons_f_aegis\Rifles\SPAR_01\data\arifle_SPAR_01_02.rvmat"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[]={0,0.40000001};
				iconScale=0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.44999999,0.28};
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0.34999999,0.44999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[]={0.2,0.80000001};
				iconScale=0.30000001;
			};
			mass=110;
		};
		distanceZoomMin=300;
		distanceZoomMax=300;
		modes[]=
		{
			"Single",
			"FullAuto",
			"single_medium_optics1",
			"single_medium_optics2",
			"fullauto_medium"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.07;
			dispersion=0.00057999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"SPAR01_Shot_SoundSet", "SPAR01_Tail_SoundSet", "SPAR01_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"SPAR01_silencerShot_SoundSet", "SPAR01_silencerTail_SoundSet", "SPAR01_silencerInteriorTail_SoundSet"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.07;
			dispersion=0.00057999999;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"SPAR01_Shot_SoundSet", "SPAR01_Tail_SoundSet", "SPAR01_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"SPAR01_silencerShot_SoundSet", "SPAR01_silencerTail_SoundSet", "SPAR01_silencerInteriorTail_SoundSet"};
			};
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=5;
			minRangeProbab=0.2;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=525;
			maxRangeProbab=0.30000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=525;
		};
		class single_medium_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=100;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=750;
			maxRangeProbab=0.050000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=750;
		};
	};
	class Aegis_arifle_SPAR_02_inf_blk_F: Aegis_arifle_SPAR_02_inf_base_F
	{
		author = $STR_A3_A_Ravenholme;
		displayName = $STR_A3_CfgWeapons_arifle_spar_01_blk_f0;
		scope = public;
		picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_blk_F_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\weapons_f_aegis\Rifles\SPAR_01\data\arifle_SPAR_01_01_black_Aegis_CO.paa",
			"\A3_Aegis\weapons_f_aegis\Rifles\SPAR_01\data\arifle_SPAR_01_02_black_Aegis_CO.paa"
		};
	};
	class Aegis_arifle_SPAR_02_inf_khk_F: Aegis_arifle_SPAR_02_inf_base_F
	{
		author = $STR_A3_A_Ravenholme;
		displayName = $STR_A3_CfgWeapons_arifle_spar_01_khk_f0;
		scope = public;
		picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_khk_F_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\weapons_f_aegis\Rifles\SPAR_01\data\arifle_SPAR_01_01_khaki_Aegis_CO.paa",
			"\A3_Aegis\weapons_f_aegis\Rifles\SPAR_01\data\arifle_SPAR_01_02_khaki_Aegis_CO.paa"
		};
	};
	class Aegis_arifle_SPAR_02_inf_snd_F: Aegis_arifle_SPAR_02_inf_base_F
	{
		author = $STR_A3_A_Ravenholme;
		displayName = $STR_A3_CfgWeapons_arifle_spar_01_snd_f0;
		scope = public;
		picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_snd_F_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\weapons_f_aegis\Rifles\SPAR_01\data\arifle_SPAR_01_01_sand_Aegis_CO.paa",
			"\A3_Aegis\weapons_f_aegis\Rifles\SPAR_01\data\arifle_SPAR_01_02_sand_Aegis_CO.paa"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Sand",
			"30Rnd_556x45_Stanag_Sand_green",
			"30Rnd_556x45_Stanag_Sand_red",
			"30Rnd_556x45_Stanag_Sand_Tracer_Red",
			"30Rnd_556x45_Stanag_Sand_Tracer_Green",
			"30Rnd_556x45_Stanag_Sand_Tracer_Yellow"
		};
	};
};
