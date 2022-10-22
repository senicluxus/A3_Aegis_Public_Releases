/* Accessories */
class muzzle_snds_H: ItemCore
{
    picture = "\A3\Weapons_F\Acc\Data\UI\icon_muzzle_snds_M_CA.paa";
    model = "\A3\Weapons_F\Acc\acca_snds_lmg_blk_F.p3d";
};
class muzzle_snds_M;
class muzzle_snds_B;
class muzzle_snds_acp;
class muzzle_snds_338_black;
class acc_pointer_IR;
class bipod_02_F_blk;
class muzzle_snds_H_khk_F: muzzle_snds_H
{
    model = "\A3\Weapons_F\Acc\acca_snds_lmg_khk_F.p3d";
    picture = "\A3\Weapons_F_Exp\Acc\Data\UI\icon_muzzle_snds_m_khk_F_CA.paa";
};
class muzzle_snds_H_snd_F: muzzle_snds_H
{
    model = "\A3\Weapons_F\Machineguns\M200\lmg_suppressor";
    picture = "\A3\Weapons_F_Exp\Acc\Data\UI\icon_muzzle_snds_m_snd_F_CA.paa";
};
class bipod_02_F_lush: bipod_02_F_blk
{
    displayName = $STR_A3_A_CfgWeapons_bipod_02_F_lush0;
};
class bipod_02_F_arid: bipod_02_F_blk
{
    displayName = $STR_A3_A_CfgWeapons_bipod_02_F_arid0;
};
class muzzle_snds_pistol_heavy_01: muzzle_snds_acp
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgWeapons_muzzle_snds_pistol_heavy_010;
	model = "\A3\Weapons_F\Acc\acca_snds_osprey_F.p3d";
	picture = "\A3_Aegis\Weapons_F_Aegis\Acc\Data\UI\icon_muzzle_snds_pistol_heavy_01_CA.paa";
};
class muzzle_mzls_H: ItemCore
{
	author = $STR_A3_A_AveryTheKitty;
	htMin = 1;
	htMax = 600;
	afMax = 0;
	mfMax = 0;
	mFact = 1;
	tBody = 100;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_muzzle_mzls_H0;
	picture = "\A3\Weapons_F\Data\UI\gear_acca_mzls_H_CA.paa";
	model = "\A3\Weapons_F\Acc\acca_mzls_H_F.p3d";
	class ItemInfo: InventoryMuzzleItem_Base_F
	{
		mass = 5;
		class AmmoCoef
		{
			hit = 1;
			typicalSpeed = 1;
			airFriction = 1;
			visibleFire = 0.5;
			audibleFire = 1;
			visibleFireTime = 0.5;
			audibleFireTime = 1;
			cost = 1;
		};
		soundTypeIndex = 0;
		muzzleEnd = zaslehPoint;
		alternativeFire = Zasleh2;
		class MuzzleCoef
		{
			dispersionCoef = 0.9f;
			artilleryDispersionCoef = 1.0f;
			fireLightCoef = 0.1f;
			recoilCoef = 1.0f;
			recoilProneCoef = 1.0f;
			minRangeCoef = 1.0f;
			minRangeProbabCoef = 1.0f;
			midRangeCoef = 1.0f;
			midRangeProbabCoef = 1.0f;
			maxRangeCoef = 1.0f;
			maxRangeProbabCoef = 1.0f;
		};
	};
	inertia = 0.1;
};
class muzzle_mzls_L: muzzle_mzls_H
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgWeapons_muzzle_mzls_L0;
	picture = "\A3\Weapons_F\Data\UI\gear_acca_mzls_L_CA.paa";
	model = "\A3\Weapons_F\Acc\acca_mzls_L_F.p3d";
	class ItemInfo: ItemInfo
	{
		mass = 3;
		class MagazineCoef
		{
			initSpeed = 1;
		};
		class AmmoCoef
		{
			hit = 1;
			typicalSpeed = 1;
			airFriction = 1;
			visibleFire = 0.5;
			audibleFire = 1;
			visibleFireTime = 0.5;
			audibleFireTime = 1;
			cost = 1;
		};
		soundTypeIndex = 0;
		muzzleEnd = zaslehPoint;
		alternativeFire = Zasleh2;
		class MuzzleCoef
		{
			dispersionCoef = 0.9f;
			artilleryDispersionCoef = 1.0f;
			fireLightCoef = 0.1f;
			recoilCoef = 1.0f;
			recoilProneCoef = 1.0f;
			minRangeCoef = 1.0f;
			minRangeProbabCoef = 1.0f;
			midRangeCoef = 1.0f;
			midRangeProbabCoef = 1.0f;
			maxRangeCoef = 1.0f;
			maxRangeProbabCoef = 1.0f;
		};
	};
	inertia = 0.1;
};
class muzzle_mzls_M: muzzle_mzls_H
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgWeapons_muzzle_mzls_M0;
	picture = "\A3\Weapons_F\Data\UI\gear_acca_mzls_H_CA.paa";
	model = "\A3\Weapons_F\Acc\acca_mzls_H_F.p3d";
	class ItemInfo: ItemInfo
	{
		mass = 4;
		class MagazineCoef
		{
			initSpeed = 1;
		};
		class AmmoCoef
		{
			hit = 1;
			typicalSpeed = 1;
			airFriction = 1;
			visibleFire = 0.5;
			audibleFire = 1;
			visibleFireTime = 0.5;
			audibleFireTime = 1;
			cost = 1;
		};
		soundTypeIndex = 0;
		muzzleEnd = zaslehPoint;
		alternativeFire = Zasleh2;
		class MuzzleCoef
		{
			dispersionCoef = 0.9f;
			artilleryDispersionCoef = 1.0f;
			fireLightCoef = 0.1f;
			recoilCoef = 1.0f;
			recoilProneCoef = 1.0f;
			minRangeCoef = 1.0f;
			minRangeProbabCoef = 1.0f;
			midRangeCoef = 1.0f;
			midRangeProbabCoef = 1.0f;
			maxRangeCoef = 1.0f;
			maxRangeProbabCoef = 1.0f;
		};
	};
	inertia = 0.1;
};
class muzzle_mzls_B: muzzle_mzls_H
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgWeapons_muzzle_mzls_B0;
	picture = "\A3\Weapons_F\Data\UI\gear_acca_mzls_H_CA.paa";
	model = "\A3\Weapons_F\Acc\acca_mzls_H_F.p3d";
	class ItemInfo: ItemInfo
	{
		mass = 6;
		class MagazineCoef
		{
			initSpeed = 1;
		};
		class AmmoCoef
		{
			hit = 1;
			typicalSpeed = 1;
			airFriction = 1;
			visibleFire = 0.5;
			audibleFire = 1;
			visibleFireTime = 0.5;
			audibleFireTime = 1;
			cost = 1;
		};
		soundTypeIndex = 0;
		muzzleEnd = zaslehPoint;
		alternativeFire = Zasleh2;
		class MuzzleCoef
		{
			dispersionCoef = 0.9f;
			artilleryDispersionCoef = 1.0f;
			fireLightCoef = 0.1f;
			recoilCoef = 1.0f;
			recoilProneCoef = 1.0f;
			minRangeCoef = 1.0f;
			minRangeProbabCoef = 1.0f;
			midRangeCoef = 1.0f;
			midRangeProbabCoef = 1.0f;
			maxRangeCoef = 1.0f;
			maxRangeProbabCoef = 1.0f;
		};
	};
	inertia = 0.2;
};
class muzzle_mzls_acp: muzzle_mzls_H
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgWeapons_muzzle_mzls_acp0;
	picture = "\A3\Weapons_F\Data\UI\gear_acca_mzls_L_CA.paa";
	model = "\A3\Weapons_F\Acc\acca_mzls_L_F.p3d";
	class ItemInfo: ItemInfo
	{
		mass = 3;
		class MagazineCoef
		{
			initSpeed = 1;
		};
		class AmmoCoef
		{
			hit = 1;
			typicalSpeed = 1;
			airFriction = 1;
			visibleFire = 0.5;
			audibleFire = 1;
			visibleFireTime = 0.5;
			audibleFireTime = 1;
			cost = 1;
		};
		soundTypeIndex = 0;
		muzzleEnd = zaslehPoint;
		alternativeFire = Zasleh2;
		class MuzzleCoef
		{
			dispersionCoef = 0.9f;
			artilleryDispersionCoef = 1.0f;
			fireLightCoef = 0.1f;
			recoilCoef = 1.0f;
			recoilProneCoef = 1.0f;
			minRangeCoef = 1.0f;
			minRangeProbabCoef = 1.0f;
			midRangeCoef = 1.0f;
			midRangeProbabCoef = 1.0f;
			maxRangeCoef = 1.0f;
			maxRangeProbabCoef = 1.0f;
		};
	};
	inertia = 0.1;
};
class muzzle_mzls_smg_01: muzzle_mzls_acp
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgWeapons_muzzle_mzls_smg_010;
	model = "\A3\Weapons_F\Acc\acca_mzls_SMG_01_F.p3d";
	picture = "\A3\Weapons_F\Acc\Data\UI\icon_muzzle_snds_H_CA.paa";
};
class optic_srs: ItemCore
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	displayName = $STR_A3_A_CfgWeapons_optic_srs0;
	picture = "\A3\Weapons_F\Data\UI\gear_acco_srs_CA.paa";
	model = "\A3\Weapons_F\Acc\acco_srs_F.p3d";
	descriptionShort = $STR_A3_A_CfgWeapons_optic_srs1;
	weaponInfoType = RscWeaponZeroing;
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		mass = 6;
		opticType = CLOSE_RANGE_OPTIC;
		optics = true;
		modelOptics = "\A3\Weapons_F\Acc\acco_srs_F.p3d";
		class OpticsModes
		{
			class SRS
			{
				opticsID = 1;
				useModelOptics = false;
				opticsPPEffects[] =
				{
					OpticsCHAbera5,
					OpticsBlur5
				};
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.25;
				opticsZoomInit = 0.75;
				memoryPointCamera = eye;
				opticsFlare = false;
				opticsDisablePeripherialVision = false;
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				cameraDir = "";
				visionMode[] = {};
			};
		};
	};
	inertia = 0.1;
};
class optic_dcl: ItemCore
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_optic_dcl0;
	picture = "\A3\Weapons_F\Data\UI\gear_acco_dcl_120_CA.paa";
	model = "\A3\Weapons_F\Acc\acco_dcl_120_F.p3d";
	descriptionShort = $STR_A3_A_CfgWeapons_optic_dcl1;
	weaponInfoType = RscWeaponZeroing;
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		mass = 14;
		opticType = CLOSE_RANGE_OPTIC;
		optics = true;
		modelOptics = "\A3\Weapons_F\Acc\acco_dcl_120_F.p3d";
		class OpticsModes
		{
			class DCL
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] =
				{
					OpticsCHAbera5,
					OpticsBlur5
				};
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.25;
				opticsZoomInit = 0.75;
				memoryPointCamera = eye;
				opticsFlare = false;
				opticsDisablePeripherialVision = false;
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				cameraDir = "";
				visionMode[] = {};
			};
		};
	};
	inertia = 0.3;
};
class optic_ACOG: ItemCore
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	displayName = $STR_A3_A_CfgWeapons_optic_ACOG0;
	picture = "\A3_Aegis\Weapons_F_Aegis\Acc\Data\UI\icon_optic_ACOG_CA.paa";
	model = "\A3_Aegis\Weapons_F_Aegis\Acc\acco_ACOG_F.p3d";
	descriptionShort = $STR_A3_A_CfgWeapons_optic_ACOG1;
	weaponInfoType = RscWeaponZeroing;
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		mass = 8;
		opticType = CLOSE_RANGE_OPTIC;
		optics = true;
		modelOptics = "\A3_Aegis\Weapons_F_Aegis\Acc\acco_ACOG_F.p3d";
		class OpticsModes
		{
			class Kolimator
			{
				opticsID = 1;
				useModelOptics = false;
				opticsPPEffects[] = {Default};
				opticsFlare = false;
				opticsDisablePeripherialVision = 0;
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.25;
				opticsZoomInit = 0.75;
				memoryPointCamera = eye;
				visionMode[] = {};
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				cameraDir = "";
			};
			class ACOG
			{
				opticsID = 2;
				useModelOptics = false;
				opticsPPEffects[] =
				{
					OpticsCHAbera5,
					OpticsBlur5
				};
				opticsZoomMin = 0.125;
				opticsZoomMax = 0.125;
				opticsZoomInit= 0.125;
				memoryPointCamera = opticView;
				opticsFlare = true;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
			};
		};
	};
	inertia = 0.1;
};
class optic_tws_sniper: ItemCore
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_CfgWeapons_optic_tws_sniper0;
	picture = "\A3_Aegis\Weapons_F_Aegis\Acc\Data\UI\icon_optic_tws_sniper_CA.paa";
	model = "\A3\Weapons_F\Acc\acco_tws_F.p3d";
	descriptionShort = $STR_A3_CfgWeapons_optic_tws_sniper1;
	weaponInfoType = RscOptics_tws_sniper;
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		mass = 16;
		weaponInfoType = RscWeaponRangeZeroingModeFOV;
		opticType = LONG_RANGE_OPTIC;
		optics = true;
		modelOptics = "\A3_Aegis\Weapons_F_Aegis\Acc\Reticle_tws_sniper.p3d";
		class OpticsModes
		{
			class TWS
			{
				opticsID = 1;
				useModelOptics = true;
				opticsPPEffects[] =
				{
					OpticsCHAbera1,
					OpticsBlur1
				};
				opticsZoomMin = 0.0285;
				opticsZoomMax = 0.076;
				opticsZoomInit = 0.076;
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
				discreteDistanceInitIndex = 2;
				distanceZoomMin = 100;
				distanceZoomMax = 1200;
				discretefov[] = {0.076,0.0285};
				discreteInitIndex = false;
				memoryPointCamera = opticView;
				visionMode[] =
				{
					Ti,
					Normal
				};
				thermalMode[] = {0,1};
				opticsFlare = true;
				opticsDisablePeripherialVision = true;
				cameraDir = "";
			};
		};
	};
	inertia = 0.2;
};
class muzzle_snds_B_wdm_F: muzzle_snds_B
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgWeapons_muzzle_snds_B_wdm_F0;
	model = "\A3\Weapons_F\Acc\acca_snds_58_wdm_F.p3d";
	picture = "\A3\Weapons_F_Exp\Acc\Data\UI\icon_muzzle_snds_58_wdm_F_CA.paa";
};
class muzzle_snds_408_black: muzzle_snds_338_black
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgWeapons_muzzle_snds_408_black0;
	model = "\A3\Weapons_F\Acc\acca_snds_338_black_F.p3d";
	picture = "\A3\Weapons_F_Mark\Data\UI\icon_muzzle_snds_338_black_CA.paa";
};
class muzzle_snds_408_green: muzzle_snds_408_black
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgWeapons_muzzle_snds_408_green0;
	model = "\A3\Weapons_F\Acc\acca_snds_338_green_F.p3d";
	picture = "\A3\Weapons_F_Mark\Data\UI\icon_muzzle_snds_338_green_CA.paa";
};
class muzzle_snds_408_sand: muzzle_snds_408_black
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgWeapons_muzzle_snds_408_sand0;
	model = "\A3\Weapons_F\Acc\acca_snds_338_tan_F.p3d";
	picture = "\A3\Weapons_F_Mark\Data\UI\icon_muzzle_snds_338_sand_CA.paa";
};
class muzzle_snds_460: ItemCore
{
	author = $STR_A3_A_AveryTheKitty;
	htMin = 1;
	htMax = 600;
	afMax = 0;
	mfMax = 0;
	mFact = 1;
	tBody = 100;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_muzzle_snds_4600;
	picture = "\A3\Weapons_F\Acc\Data\UI\icon_muzzle_snds_L_CA.paa";
	model = "\A3\Weapons_F\Acc\acca_snds_L_F.p3d";
	class ItemInfo: InventoryMuzzleItem_Base_F
	{
		mass = 10;
		class MagazineCoef
		{
			initSpeed = 1.05;
		};
		class AmmoCoef
		{
			hit = 1;
			typicalSpeed = 1;
			airFriction = 1;
			visibleFire = 0.5;
			audibleFire = 0.3;
			visibleFireTime = 0.5;
			audibleFireTime = 0.5;
			cost = 1;
		};
		soundTypeIndex = 1;
		muzzleEnd = zaslehPoint;
		alternativeFire = Zasleh2;
		class MuzzleCoef
		{
			dispersionCoef = 0.8f;
			artilleryDispersionCoef = 1.0f;
			fireLightCoef = 0.1f;
			recoilCoef = 1.0f;
			recoilProneCoef = 1.0f;
			minRangeCoef = 1.0f;
			minRangeProbabCoef = 1.0f;
			midRangeCoef = 1.0f;
			midRangeProbabCoef = 1.0f;
			maxRangeCoef = 1.0f;
			maxRangeProbabCoef = 1.0f;
		};
	};
	inertia = 0.2;
};
class muzzle_snds_545: muzzle_snds_H
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgWeapons_muzzle_snds_5450;
	model = "\A3\Weapons_F\Acc\acca_snds_h_F.p3d";
	picture = "\A3\Weapons_F\Acc\Data\UI\icon_muzzle_snds_H_CA.paa";
};
class muzzle_snds_545_wdm_F: muzzle_snds_545
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgWeapons_muzzle_snds_545_wdm_F0;
	model = "\A3\Weapons_F\Acc\acca_snds_58_wdm_F.p3d";
	picture = "\A3\Weapons_F_Exp\Acc\Data\UI\icon_muzzle_snds_58_wdm_F_CA.paa";
};
class muzzle_snds_545_lush_F: muzzle_snds_545
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgWeapons_muzzle_snds_545_lush_F0;
	model = "\A3\Weapons_F\Acc\acca_snds_h_lush_F.p3d";
	picture = "\A3\Weapons_F_Enoch\Acc\Data\UI\icon_muzzle_snds_B_lush_F_CA.paa";
};
class muzzle_snds_545_arid_F: muzzle_snds_545
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgWeapons_muzzle_snds_545_arid_F0;
	model = "\A3\Weapons_F\Acc\acca_snds_h_arid_F.p3d";
	picture = "\A3\Weapons_F_Enoch\Acc\Data\UI\icon_muzzle_snds_B_arid_F_CA.paa";
};
class muzzle_mzls_58_F: muzzle_mzls_M
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgWeapons_muzzle_mzls_58_F0;
	model = "\A3\Weapons_F\Acc\acca_mzls_H_F.p3d";
	picture = "\A3\Weapons_F\Data\UI\gear_acca_mzls_H_CA.paa";
};
class muzzle_mzls_545: muzzle_mzls_M
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgWeapons_muzzle_mzls_5450;
	model = "\A3\Weapons_F\Acc\acca_mzls_H_F.p3d";
	picture = "\A3\Weapons_F\Data\UI\gear_acca_mzls_H_CA.paa";
};
class optic_ACO_grn;
class optic_ACO_grn_AK_F: optic_ACO_grn
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgWeapons_optic_ACO_grn_AK_F0;
	model = /*"\A3_Aegis\Weapons_F_Aegis\Acc\acco_aco_AK_F.p3d"*/ "\A3\Weapons_F\Acc\acco_aco_OP_smg_F.p3d";
	picture = "\A3_Aegis\Weapons_F_Aegis\Acc\Data\UI\icon_optic_ACO_grn_AK_F_CA.paa";
};
/*
class optic_Kobra_F: ItemCore
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	displayName = $STR_A3_A_CfgWeapons_optic_Kobra_F0;
	picture = "\A3_Aegis\Weapons_F_Aegis\Acc\Data\UI\icon_optic_Kobra_F_CA.paa";
	model = "\A3_Aegis\Weapons_F_Aegis\Acc\acco_Kobra_F.p3d";
	descriptionShort = $STR_A3_A_CfgWeapons_optic_Kobra_F1;
	weaponInfoType = RscWeaponZeroing;
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		mass = 6;
		modelOptics = "\A3\Weapons_F\empty.p3d";
		optics = true;
		class OpticsModes
		{
			class Kobra
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.25;
				opticsZoomInit = 0.75;
				memoryPointCamera = eye;
				opticsFlare = false;
				opticsDisablePeripherialVision = false;
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				cameraDir = "";
				visionMode[] = {};
				opticsPPEffects[] = {Default};
			};
		};
	};
	inertia = 0.1;
};
class optic_pso_F: ItemCore
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	displayName = $STR_A3_A_CfgWeapons_optic_pso_F0;
	picture = "\A3_Aegis\Weapons_F_Aegis\Acc\Data\UI\icon_optic_pso_F_CA.paa";
	model = "\A3_Aegis\Weapons_F_Aegis\Acc\acco_pso_F.p3d";
	descriptionShort = $STR_A3_A_CfgWeapons_optic_pso_F1;
	weaponInfoType = RscWeaponZeroing;
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		mass = 14;
		opticType = LONG_RANGE_OPTIC;
		weaponInfoType = RscWeaponRangeZeroingFOV;
		optics = true;
		modelOptics = "\A3\Weapons_F\Acc\Reticle_pso_F.p3d";
		class OpticsModes
		{
			class Snip
			{
				opticsID = 1;
				opticsDisplayName = "WFOV";
				useModelOptics = true;
				opticsPPEffects[] =
				{
					OpticsCHAbera1,
					OpticsBlur1
				};
				opticsZoomMin = 0.01;
				opticsZoomMax = 0.042;
				opticsZoomInit = 0.042;
				discreteDistance[] =
				{
					300,
					400,
					500,
					600,
					700,
					800,
					900,
					1000,
					1100,
					1200,
					1300
				};
				discreteDistanceInitIndex = 2;
				distanceZoomMin = 300;
				distanceZoomMax = 1300;
				discretefov[] = {0.042,0.01};
				discreteInitIndex = 0;
				memoryPointCamera = opticView;
				modelOptics = "\A3\Weapons_F\Acc\Reticle_pso_F.p3d";
				visionMode[] = {Normal};
				opticsFlare = true;
				opticsDisablePeripherialVision = true;
				cameraDir = "";
			};
		};
	};
	inertia = 0.2;
};
*/
class acc_flashlight_ir: ItemCore
{
	author = "Ravenholme";
	scope = public;
	displayName = "IR Flashlight";
	descriptionUse = "$STR_A3_cfgWeapons_use_flashlight0";
	picture = "\A3\weapons_F\Data\UI\gear_accv_flashlight_CA.paa";
	model = "\A3\weapons_f\acc\accv_Flashlight_F";
	descriptionShort = "$STR_A3_cfgWeapons_acc_flashlight1";
	class ItemInfo: InventoryFlashLightItem_Base_F
	{
		mass = 4;
		class FlashLight
		{
			irlight = true;
			color[] = {0.705,0.627,0.51};
			ambient[] = {0.9,0.81,0.7};
			intensity = 1000;
			size = 1;
			innerAngle = 5;
			outerAngle = 100;
			coneFadeCoef = 8;
			position = "flash dir";
			direction = "flash";
			useFlare = 1;
			flareSize = 1.4;
			flareMaxDistance = 100;
			dayLight = 0;
			class Attenuation
			{
				start = 0;
				constant = 0.5;
				linear = 0.1;
				quadratic = 0.2;
				hardLimitStart = 27;
				hardLimitEnd = 34;
			};
			volumeShape = "a3\data_f\VolumeLightFlashlight.p3d";
			scale[] = {1,1,1};
		};
	};
	inertia = 0.1;
};

class acc_o_FMS: ItemCore
{
    author = $STR_A3_A_AveryTheKitty;
    scope = public; 
	scopeArsenal = public;

    displayName = $STR_A3_A_acc_o_FMS_dn;
    descriptionShort = $STR_A3_A_acc_o_FMS_ds;
	model = "\A3_Aegis\weapons_f_aegis\acc\FMS.p3d";
	picture = "\A3_Aegis\weapons_f_aegis\acc\Data\UI\icon_acc_o_FMS_ca.paa";
	weaponInfoType = RscWeaponZeroing;

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 1; // Medium Range
		optics = true;
		modelOptics = "\A3_Aegis\weapons_f_aegis\acc\FMS.p3d";
    	mass = 5; // 4.62966, but close enough for government work.

		class OpticsModes
		{
			class FMSScope
			{
				opticsID = 2;
				useModelOptics = false;
				memoryPointCamera = opticView;
                visionMode[] = {};

				//--- FX
				opticsFlare = true;
				opticsDisablePeripherialVision = true;
                opticsPPEffects[] =
				{
					OpticsRadialBlur1,
					OpticsBlur1
				};

				//--- Zeroing
				opticsZoomMin = 0.125;
				opticsZoomMax = 0.125;
				opticsZoomInit = 0.125;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
			};
			class FMSIronsights
			{
				opticsID = 1;
				useModelOptics = false;
				memoryPointCamera = eye;
				visionMode[] = {};

				//--- FX
				opticsFlare = false;
				opticsDisablePeripherialVision = false;
				opticsPPEffects[] = {Default};

				//--- Zeroing
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.25;
				opticsZoomInit = 0.75;
				distanceZoomMin = 200;
				distanceZoomMax = 200;
			};
		};
	};
};