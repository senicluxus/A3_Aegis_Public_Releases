/* Accessories */
class muzzle_snds_H: ItemCore
{
    picture = "\A3_Aegis\Weapons_F_Aegis\Acc\Data\UI\icon_muzzle_snds_H_black_F_CA.paa";
    model = "\A3_Aegis\Weapons_F_Aegis\Acc\Aegis_acca_snds_65_black_F.p3d";
};
class muzzle_snds_M;
class muzzle_snds_B;
class muzzle_snds_acp;
class muzzle_snds_338_black;

class acc_pointer_IR: ItemCore
{
	class ItemInfo: InventoryFlashLightItem_Base_F
	{
		class Pointer;
	};
};

class bipod_02_F_blk;
class muzzle_snds_H_khk_F: muzzle_snds_H
{
    picture = "\A3_Aegis\Weapons_F_Aegis\Acc\Data\UI\icon_muzzle_snds_H_khaki_F_CA.paa";
    model = "\A3_Aegis\Weapons_F_Aegis\Acc\Aegis_acca_snds_65_khaki_F.p3d";
};
class muzzle_snds_H_snd_F: muzzle_snds_H
{
    picture = "\A3_Aegis\Weapons_F_Aegis\Acc\Data\UI\icon_muzzle_snds_H_sand_F_CA.paa";
    model = "\A3_Aegis\Weapons_F_Aegis\Acc\Aegis_acca_snds_65_sand_F.p3d";
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
class optic_srs: ItemCore	// Deprecated due to horrific blue tinge on glass, unfixable because vanilla model
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
/*class optic_ACOG: ItemCore
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
};*/
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
	author = $STR_A3_A_Grave;
	htMin = 1;
	htMax = 600;
	afMax = 0;
	mfMax = 0;
	mFact = 1;
	tBody = 100;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_muzzle_snds_4600;
	picture = "\A3_Aegis\weapons_f_aegis\Acc\Data\UI\icon_muzzle_snds_46_black_F_CA.paa";
	model = "\A3_Aegis\weapons_f_aegis\Acc\Aegis_acca_snds_46_black_F.p3d";
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
class Aegis_muzzle_snds_460_khaki: muzzle_snds_460
{
	author = $STR_A3_A_Grave;
	displayName = $STR_A3_A_CfgWeapons_muzzle_snds_460_khaki0;
	picture = "\A3_Aegis\weapons_f_aegis\Acc\Data\UI\icon_muzzle_snds_46_khaki_F_CA.paa";
	model = "\A3_Aegis\weapons_f_aegis\Acc\Aegis_acca_snds_46_khaki_F.p3d";
};
class Aegis_muzzle_snds_460_sand: muzzle_snds_460
{
	author = $STR_A3_A_Grave;
	displayName = $STR_A3_A_CfgWeapons_muzzle_snds_460_sand0;
	picture = "\A3_Aegis\weapons_f_aegis\Acc\Data\UI\icon_muzzle_snds_46_sand_F_CA.paa";
	model = "\A3_Aegis\weapons_f_aegis\Acc\Aegis_acca_snds_46_sand_F.p3d";
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
/* AK PBS Suppressors */
class aegis_muzzle_snds_pbs_545_blk: muzzle_snds_545
{
	author = $STR_A3_A_Jamie;
	displayName = $STR_A3_A_CfgWeapons_muzzle_snds_pbs_545_blk0;
	model = "\A3_Aegis\Weapons_F_Aegis\Acc\Aegis_acca_snds_pbs4_blk.p3d";
	picture = "\A3_Aegis\weapons_f_aegis\Acc\Data\UI\icon_muzzle_PBS4_black_F_CA";
};
class aegis_muzzle_snds_pbs_545_arid: muzzle_snds_545
{
	author = $STR_A3_A_Jamie;
	displayName = $STR_A3_A_CfgWeapons_muzzle_snds_pbs_545_arid0;
	model = "\A3_Aegis\Weapons_F_Aegis\Acc\Aegis_acca_snds_pbs4_arid.p3d";
	picture = "\A3_Aegis\weapons_f_aegis\Acc\Data\UI\icon_muzzle_PBS4_arid_F_CA.paa";
};
class aegis_muzzle_snds_pbs_545_lush: muzzle_snds_545
{
	author = $STR_A3_A_Jamie;
	displayName = $STR_A3_A_CfgWeapons_muzzle_snds_pbs_545_lush0;
	model = "\A3_Aegis\Weapons_F_Aegis\Acc\Aegis_acca_snds_pbs4_lush.p3d";
	picture = "\A3_Aegis\weapons_f_aegis\Acc\Data\UI\icon_muzzle_PBS4_lush_F_CA.paa";
};
class aegis_muzzle_snds_pbs_762_blk: muzzle_snds_B
{
	author = $STR_A3_A_Jamie;
	displayName = $STR_A3_A_CfgWeapons_muzzle_snds_pbs_762_blk0;
	model = "\A3_Aegis\Weapons_F_Aegis\Acc\Aegis_acca_snds_pbs1_blk.p3d";
	picture = "\A3_Aegis\weapons_f_aegis\Acc\Data\UI\icon_muzzle_PBS1_black_F_CA.paa";
};
class aegis_muzzle_snds_pbs_762_arid: muzzle_snds_B
{
	author = $STR_A3_A_Jamie;
	displayName = $STR_A3_A_CfgWeapons_muzzle_snds_pbs_726_arid0;
	model = "\A3_Aegis\Weapons_F_Aegis\Acc\Aegis_acca_snds_pbs1_arid.p3d";
	picture = "\A3_Aegis\weapons_f_aegis\Acc\Data\UI\icon_muzzle_PBS1_arid_F_CA.paa";
};
class aegis_muzzle_snds_pbs_762_lush: muzzle_snds_B
{
	author = $STR_A3_A_Jamie;
	displayName = $STR_A3_A_CfgWeapons_muzzle_snds_pbs_762_lush0;
	model = "\A3_Aegis\Weapons_F_Aegis\Acc\Aegis_acca_snds_pbs1_lush.p3d";
	picture = "\A3_Aegis\weapons_f_aegis\Acc\Data\UI\icon_muzzle_PBS1_lush_F_CA.paa";
};
/* AK PBS Suppressors - End */

/* Mk11/M110 Suppressors */
class aegis_muzzle_snds_sr25_blk: muzzle_snds_B
{
	author = $STR_A3_A_Grave_3dGunsmith;
	displayName = $STR_A3_A_CfgWeapons_muzzle_snds_sr25_blk0;
	model = "\A3_Aegis\Weapons_F_Aegis\Acc\acca_snds_SR25_black_F.p3d";
	picture = "\A3_Aegis\weapons_f_aegis\Acc\Data\UI\icon_muzzle_snds_SR25_black_F_CA.paa";
};
class aegis_muzzle_snds_sr25_snd: muzzle_snds_B
{
	author = $STR_A3_A_Grave_3dGunsmith;
	displayName = $STR_A3_A_CfgWeapons_muzzle_snds_sr25_snd0;
	model = "\A3_Aegis\Weapons_F_Aegis\Acc\acca_snds_SR25_sand_F.p3d";
	picture = "\A3_Aegis\weapons_f_aegis\Acc\Data\UI\icon_muzzle_snds_SR25_sand_F_CA.paa";
};
class aegis_muzzle_snds_sr25_khk: muzzle_snds_B
{
	author = $STR_A3_A_Grave_3dGunsmith;
	displayName = $STR_A3_A_CfgWeapons_muzzle_snds_sr25_khk0;
	model = "\A3_Aegis\Weapons_F_Aegis\Acc\acca_snds_SR25_khaki_F.p3d";
	picture = "\A3_Aegis\weapons_f_aegis\Acc\Data\UI\icon_muzzle_snds_SR25_khaki_F_CA.paa";
};
/* MK11/M110 Suppressors - End */

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
	descriptionUse = $STR_A3_cfgWeapons_use_flashlight0;
	picture = "\A3\weapons_F\Data\UI\gear_accv_flashlight_CA.paa";
	model = "\A3\weapons_f\acc\accv_Flashlight_F";
	descriptionShort = $STR_A3_cfgWeapons_acc_flashlight1;
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
/* Optic ROS Sight - Begin */
class optic_ACO;
class Aegis_optic_ROS: optic_ACO
{
	author = $STR_A3_A_Grave_AD98;
	displayname = $STR_A3_A_CfgWeapons_optic_ROS0;
	picture = "\A3_Aegis\weapons_f_aegis\Acc\Data\UI\icon_optic_ROS_black_F_CA.paa";
	model = "A3_Aegis\weapons_f_aegis\Acc\acco_ROS_black_F.p3d";
};
class optic_ACO_smg;
class Aegis_optic_ROS_SMG: optic_ACO_smg
{
 	author = $STR_A3_A_Grave_AD98;
	displayname = $STR_A3_A_CfgWeapons_optic_ROS_SMG0;
	picture = "\A3_Aegis\weapons_f_aegis\Acc\Data\UI\icon_optic_ROS_black_F_CA.paa";
	model = "A3_Aegis\weapons_f_aegis\Acc\acco_ROS_black_SMG_F.p3d";
};
/* Optic ROS Sight - End*/

/* Optic BVO Sight - Begin */
class Aegis_optic_1p87: optic_ACO
{
	author = $STR_A3_A_Jamie_and_Epick;
	displayname = $STR_A3_A_CfgWeapons_optic_1p870;
	picture = "\A3_Aegis\weapons_f_aegis\Acc\Data\UI\icon_optic_BVO_blk_CA";
	model = "\A3_Aegis\weapons_f_aegis\Acc\acco_1p87_black_F.p3d";
};
class Aegis_optic_1p87_snd: Aegis_optic_1p87
{
	author = $STR_A3_A_Jamie_and_Epick;
	displayname = $STR_A3_A_CfgWeapons_optic_1p87_snd0;
	picture = "\A3_Aegis\weapons_f_aegis\Acc\Data\UI\icon_optic_BVO_snd_CA";
	model = "\A3_Aegis\weapons_f_aegis\Acc\acco_1p87_snd_F.p3d";
};
class Aegis_optic_1p87_arid: Aegis_optic_1p87
{
	author = $STR_A3_A_Jamie_and_Epick;
	displayname = $STR_A3_A_CfgWeapons_Aegis_optic_1p87_arid0;
	picture = "\A3_Aegis\weapons_f_aegis\Acc\Data\UI\icon_optic_BVO_arid_CA.paa";
	model = "\A3_Aegis\weapons_f_aegis\Acc\acco_1p87_arid_F.p3d";
};
class Aegis_optic_1p87_lush: Aegis_optic_1p87
{
	author = $STR_A3_A_Jamie_and_Epick;
	displayname = $STR_A3_A_CfgWeapons_optic_optic_1p87_lush0;
	picture = "\A3_Aegis\weapons_f_aegis\Acc\Data\UI\icon_optic_BVO_lush_CA.paa";
	model = "\A3_Aegis\weapons_f_aegis\Acc\acco_1p87_lush_F.p3d";
};
/* Optic BVO Sight - End*/

/* Compact Laser Pointer - Begin */
class Aegis_acc_pointer_compact_red: acc_pointer_IR
{
	author = "Michael Karel";
	displayName = $STR_A3_A_CfgWeapons_acc_pointer_compact_red0;
	picture = "\A3_Aegis\weapons_f_aegis\Acc\Data\UI\icon_CompactLaser_F_CA.paa";
	model = "A3_Aegis\weapons_f_aegis\Acc\Aegis_accv_pointer_compact.p3d";
	class ItemInfo: ItemInfo
	{
		mass = 4;
		class Pointer: Pointer
		{
			isIR = 0; // 0 == visible laser, default is 1
			irDotSize = 0.02; // not new, default is 0.1
			beamThickness = 0.075; // Only with visible laser
			beamColor[] = {1000,0,0}; // Only with visible laser
			dotColor[] = {1500,0,0}; // Only with visible laser
		};
	};
	inertia = 0.075;
};
class Aegis_acc_pointer_compact_green: Aegis_acc_pointer_compact_red
{
	author = "Michael Karel";
	displayName = $STR_A3_A_CfgWeapons_acc_pointer_compact_grn0;
	class ItemInfo: ItemInfo
	{
		class Pointer: Pointer
		{
			beamColor[] = {15,3000,15}; // Only with visible laser
			dotColor[] = {350,10000,350}; // Only with visible laser
		};
	};
};

class Aegis_acc_pointer_compact_pistol_red: Aegis_acc_pointer_compact_red
{
	author = "Michael Karel";
	displayName = $STR_A3_A_CfgWeapons_acc_pointer_compact_pistol_red0;
	picture = "\A3_Aegis\weapons_f_aegis\Acc\Data\UI\icon_CompactLaser_Pistol_F_CA.paa";
	model = "A3_Aegis\weapons_f_aegis\Acc\Aegis_accv_pointer_compact_pistol.p3d";
	class ItemInfo: ItemInfo
	{
		mass = 2.5;
		class Pointer: Pointer
		{
			irDotSize = 0.015; // not new, default is 0.1
			beamThickness = 0.05; // Only with visible laser
		};
	};
	inertia = 0.035;
};
class Aegis_acc_pointer_compact_pistol_green: Aegis_acc_pointer_compact_pistol_red
{
	author = "Michael Karel";
	displayName = $STR_A3_A_CfgWeapons_acc_pointer_compact_pistol_grn0;
	class ItemInfo: ItemInfo
	{
		class Pointer: Pointer
		{
			beamColor[] = {15,3000,15}; // Only with visible laser
			dotColor[] = {350,10000,350}; // Only with visible laser
		};
	};
};
/* Compact Laser Pointer - End*/

/* Dual Mode Laser Aiming Module - Begin*/
class Aegis_acc_pointer_DM: acc_pointer_IR
{
	author = $STR_A3_A_Grave_neonmahmud;
	displayName = $STR_A3_A_CfgWeapons_acc_pointer_DM0;
	picture = "\A3_Aegis\weapons_f_aegis\Acc\Data\UI\icon_IRLaser_black_F_CA.paa";
	model = "A3_Aegis\weapons_f_aegis\Acc\accv_pointer_black_F.p3d";
	
	MRT_SwitchItemPrevClass = "Aegis_acc_pointer_DM_visible_Red";
	MRT_SwitchItemNextClass = "Aegis_acc_pointer_DM_visible_Red";
	MRT_switchItemHintText = "IR Laser";
};
class Aegis_acc_pointer_DM_visible_Red: Aegis_acc_pointer_DM
{
	scope = protected;
	author = $STR_A3_A_Grave_neonmahmud;
	class ItemInfo: ItemInfo
	{
		class Pointer: Pointer
		{
			irLaserPos = "laser pos";	// may need to tweak?
			irLaserEnd = "laser dir";
			
			isIR = 0;
			irDotSize = 0.02;
			beamThickness = 0.075;
			beamColor[] = {1000,0,0};
			dotColor[] = {1500,0,0};
		};
	};
	
	MRT_SwitchItemPrevClass = "Aegis_acc_pointer_DM";
	MRT_SwitchItemNextClass = "Aegis_acc_pointer_DM";
	MRT_switchItemHintText = "Visible";
};

class Aegis_acc_pointer_DM_Sand: Aegis_acc_pointer_DM
{
	author = $STR_A3_A_Grave_neonmahmud;
	displayName = $STR_A3_A_CfgWeapons_acc_pointer_DM_Sand0;
	picture = "\A3_Aegis\weapons_f_aegis\Acc\Data\UI\icon_IRLaser_sand_F_CA.paa";
	model = "A3_Aegis\weapons_f_aegis\Acc\accv_pointer_sand_F.p3d";
	
	MRT_SwitchItemPrevClass = "Aegis_acc_pointer_DM_Sand_visible_Red";
	MRT_SwitchItemNextClass = "Aegis_acc_pointer_DM_Sand_visible_Red";
};
class Aegis_acc_pointer_DM_Sand_visible_Red: Aegis_acc_pointer_DM_Sand
{
	scope = protected;
	author = $STR_A3_A_Grave_neonmahmud;
	class ItemInfo: ItemInfo
	{
		class Pointer: Pointer
		{
			irLaserPos = "laser pos";	// may need to tweak?
			irLaserEnd = "laser dir";
			
			isIR = 0;
			irDotSize = 0.02;
			beamThickness = 0.075;
			beamColor[] = {1000,0,0};
			dotColor[] = {1500,0,0};
		};
	};
	
	MRT_SwitchItemPrevClass = "Aegis_acc_pointer_DM_Sand";
	MRT_SwitchItemNextClass = "Aegis_acc_pointer_DM_Sand";
	MRT_switchItemHintText = "Visible";
};

class Aegis_acc_pointer_DM_Khaki: Aegis_acc_pointer_DM
{
	author = $STR_A3_A_Grave_neonmahmud;
	displayName = $STR_A3_A_CfgWeapons_acc_pointer_DM_Khaki0;
	picture = "\A3_Aegis\weapons_f_aegis\Acc\Data\UI\icon_IRLaser_khaki_F_CA.paa";
	model = "A3_Aegis\weapons_f_aegis\Acc\accv_pointer_khaki_F.p3d";
	
	MRT_SwitchItemPrevClass = "Aegis_acc_pointer_DM_Khaki_visible_Red";
	MRT_SwitchItemNextClass = "Aegis_acc_pointer_DM_Khaki_visible_Red";
};
class Aegis_acc_pointer_DM_Khaki_visible_Red: Aegis_acc_pointer_DM_Khaki
{
	scope = protected;
	author = $STR_A3_A_Grave_neonmahmud;
	class ItemInfo: ItemInfo
	{
		class Pointer: Pointer
		{
			irLaserPos = "laser pos";	// may need to tweak?
			irLaserEnd = "laser dir";
			
			isIR = 0;
			irDotSize = 0.02;
			beamThickness = 0.075;
			beamColor[] = {1000,0,0};
			dotColor[] = {1500,0,0};
		};
	};
	
	MRT_SwitchItemPrevClass = "Aegis_acc_pointer_DM_Khaki";
	MRT_SwitchItemNextClass = "Aegis_acc_pointer_DM_Khaki";
	MRT_switchItemHintText = "Visible";
};

class Aegis_acc_pointer_DM_Arid: Aegis_acc_pointer_DM
{
	author = $STR_A3_A_Grave_neonmahmud;
	displayName = $STR_A3_A_CfgWeapons_acc_pointer_DM_Arid0;
	picture = "\A3_Aegis\weapons_f_aegis\Acc\Data\UI\icon_IRLaser_Arid_F_CA.paa";
	model = "A3_Aegis\weapons_f_aegis\Acc\accv_pointer_arid_F.p3d";
	
	MRT_SwitchItemPrevClass = "Aegis_acc_pointer_DM_Arid_visible_Red";
	MRT_SwitchItemNextClass = "Aegis_acc_pointer_DM_Arid_visible_Red";
};
class Aegis_acc_pointer_DM_Arid_visible_Red: Aegis_acc_pointer_DM_Arid
{
	scope = protected;
	author = $STR_A3_A_Grave_neonmahmud;
	class ItemInfo: ItemInfo
	{
		class Pointer: Pointer
		{
			irLaserPos = "laser pos";	// may need to tweak?
			irLaserEnd = "laser dir";
			
			isIR = 0;
			irDotSize = 0.02;
			beamThickness = 0.075;
			beamColor[] = {1000,0,0};
			dotColor[] = {1500,0,0};
		};
	};
	
	MRT_SwitchItemPrevClass = "Aegis_acc_pointer_DM_Arid";
	MRT_SwitchItemNextClass = "Aegis_acc_pointer_DM_Arid";
	MRT_switchItemHintText = "Visible";
};

class Aegis_acc_pointer_DM_Lush: Aegis_acc_pointer_DM
{
	author = $STR_A3_A_Grave_neonmahmud;
	displayName = $STR_A3_A_CfgWeapons_acc_pointer_DM_Lush0;
	picture = "\A3_Aegis\weapons_f_aegis\Acc\Data\UI\icon_IRLaser_Lush_F_CA.paa";
	model = "A3_Aegis\weapons_f_aegis\Acc\accv_pointer_lush_F.p3d";
	
	MRT_SwitchItemPrevClass = "Aegis_acc_pointer_DM_Lush_visible_Red";
	MRT_SwitchItemNextClass = "Aegis_acc_pointer_DM_Lush_visible_Red";
};
class Aegis_acc_pointer_DM_Lush_visible_Red: Aegis_acc_pointer_DM_Lush
{
	scope = protected;
	author = $STR_A3_A_Grave_neonmahmud;
	class ItemInfo: ItemInfo
	{
		class Pointer: Pointer
		{
			irLaserPos = "laser pos";	// may need to tweak?
			irLaserEnd = "laser dir";
			
			isIR = 0;
			irDotSize = 0.02;
			beamThickness = 0.075;
			beamColor[] = {1000,0,0};
			dotColor[] = {1500,0,0};
		};
	};
	
	MRT_SwitchItemPrevClass = "Aegis_acc_pointer_DM_Lush";
	MRT_SwitchItemNextClass = "Aegis_acc_pointer_DM_Lush";
	MRT_switchItemHintText = "Visible";
};

// Needs CBA Script to be Dual Mode - IR default, for AI usage, visible as a switch mode.
/* Dual Mode Laser Aiming Module - End */

/* ACOGs - Begin*/
class Aegis_optic_ACOG: ItemCore
{
	author = $STR_A3_A_Grave_3dGunsmith;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_optic_ACOG0;
	picture = "\A3_Aegis\weapons_f_aegis\Acc\data\UI\icon_optic_ACOG_black_F_CA.paa";
	model = "\A3_Aegis\weapons_f_aegis\Acc\acco_ACOG_black_F";
	descriptionShort = $STR_A3_A_CfgWeapons_optic_ACOG1;
	weaponInfoType = RscWeaponZeroing;
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		mass = 8;
		opticType = 1;
		optics = 1;
		modelOptics = "\A3\Weapons_f_beta\acc\reticle_MRCO_F";
		class OpticsModes
		{
			class ACOGscope
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"OpticsRadialBlur1",
					"OpticsBlur1"
				};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				opticsZoomMin=0.125;
				opticsZoomMax=0.125;
				opticsZoomInit=0.125;
				memoryPointCamera="opticView";
				visionMode[]={};
				distanceZoomMin=300;
				distanceZoomMax=300;
			};
			class ACOGcq
			{
				opticsID=2;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"Default"
				};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=100;
				distanceZoomMax=100;
			};
		};
	};
	inertia = 0.1;
};
class Aegis_optic_ACOG_sand: Aegis_optic_ACOG
{
	author = $STR_A3_A_Grave_3dGunsmith;
	displayName = $STR_A3_A_CfgWeapons_optic_ACOG_sand0;
	picture = "\A3_Aegis\weapons_f_aegis\Acc\data\UI\icon_optic_ACOG_sand_F_CA.paa";
	model = "\A3_Aegis\weapons_f_aegis\Acc\acco_ACOG_sand_F";
};
class Aegis_optic_ACOG_khaki: Aegis_optic_ACOG
{
	author = $STR_A3_A_Grave_3dGunsmith;
	displayName = $STR_A3_A_CfgWeapons_optic_ACOG_khaki0;
	picture = "\A3_Aegis\weapons_f_aegis\Acc\data\UI\icon_optic_ACOG_khaki_F_CA.paa";
	model = "\A3_Aegis\weapons_f_aegis\Acc\acco_ACOG_khaki_F";
};
// Models are commercial, so APL-ND. Models to be removed from public repo
/* ACOGs - End*/
/* ICO & AICO - Begin */
// Models are APL-ND
class Aegis_optic_ICO: ItemCore
{
	author = $STR_A3_A_Grave_wnschpnsch;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_optic_ICO0;
	picture = "\A3_Aegis\weapons_f_aegis\Acc\data\UI\icon_optic_ICO_black_F_CA.paa";
	model = "\A3_Aegis\weapons_f_aegis\Acc\acco_ICO_black_F";
	descriptionShort = "$STR_A3_cfgWeapons_optic_Aco1";
	weaponInfoType = "RscWeaponZeroing";
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		mass=4;
		modelOptics = "\A3\Weapons_F\empty";
		optics=1;
		class OpticsModes
		{
			class ICO
			{
				opticsID=1;
				useModelOptics=0;
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				distanceZoomMin=200;
				distanceZoomMax=200;
				cameraDir="";
				visionMode[]={};
				opticsPPEffects[]=
				{
					"Default"
				};
			};
		};
	};
	inertia=0;
};
class Aegis_optic_ICO_khaki: Aegis_optic_ICO
{
	author = $STR_A3_A_Grave_wnschpnsch;
	displayName = $STR_A3_A_CfgWeapons_optic_ICO_khaki0;
	picture = "\A3_Aegis\weapons_f_aegis\Acc\data\UI\icon_optic_ICO_khaki_F_CA.paa";
	model = "\A3_Aegis\weapons_f_aegis\Acc\acco_ICO_khaki_F";
};
class Aegis_optic_ICO_sand: Aegis_optic_ICO
{
	author = $STR_A3_A_Grave_wnschpnsch;
	displayName = $STR_A3_A_CfgWeapons_optic_ICO_sand0;
	picture = "\A3_Aegis\weapons_f_aegis\Acc\data\UI\icon_optic_ICO_sand_F_CA.paa";
	model = "\A3_Aegis\weapons_f_aegis\Acc\acco_ICO_sand_F";
};
/* ICO & AICO - End*/
/* P320 Attachments - Begin*/
class Aegis_optic_PRO_base: ItemCore
{
	author = $STR_A3_A_Grave_Egorov;
	_generalMacro = "Aegis_optic_PRO_base";
	scope = 0;
	scopeCurator = 0;
	scopeArsenal = 0;
	model="\A3_Aegis\weapons_f_aegis\Acc\acco_PRO_black_F";
	descriptionShort = $STR_A3_cfgWeapons_optic_MRD1;
	weaponInfoType = "RscWeaponZeroing";
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		mass = 4;
		modelOptics = "\A3\Weapons_F\empty";
		optics = 1;
		class OpticsModes
		{
			class MRO
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.25;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				distanceZoomMin = 50;
				distanceZoomMax = 50;
				cameraDir = "";
				visionMode[]= {};
				opticsPPEffects[]=
				{
					"Default"
				};
			};
		};
	};
	inertia = 0;
};
class Aegis_optic_PRO_black: Aegis_optic_PRO_base
{
	author = $STR_A3_A_Grave_Egorov;
	_generalMacro = "Aegis_optic_PRO_black";
	scope = public;
	scopeCurator = public;
	scopeArsenal = public;
	displayName = $STR_A3_A_CfgWeapons_acc_optic_PRO0;
	picture = "\A3_Aegis\weapons_f_aegis\Acc\data\UI\icon_optic_PRO_black_CA.paa";
	model = "\A3_Aegis\weapons_f_aegis\Acc\acco_PRO_black_F.p3d";
};
class Aegis_muzzle_snds_enhanced_base: ItemCore
{
	author = $STR_A3_A_Grave;
	_generalMacro = "Aegis_muzzle_snds_enhanced_base";
	scope = 0;
	scopeCurator = 0;
	scopeArsenal = 0;
	picture = "\A3_Aegis\weapons_f_aegis\Acc\data\UI\icon_muzzle_snds_enhanced_black_CA.paa";
	model = "\A3_Aegis\weapons_f_aegis\Acc\acca_snds_enhanced_black_F.p3d";
	htMin = 1;
	htMax = 600;
	afMax = 0;
	mfMax = 0;
	mFact = 1;
	tBody = 100;
	class ItemInfo: InventoryMuzzleItem_Base_F
	{
		mass = 12;
		class MagazineCoef
		{
			initSpeed = 1.05;
		};
		class AmmoCoef
		{
			hit = 1;
			typicalSpeed = 1;
			airFriction = 1;
			visibleFire = 0.30000001;
			audibleFire = 0.039999999;
			visibleFireTime = 0.5;
			audibleFireTime = 0.5;
			cost = 1;
		};
		soundTypeIndex = 1;
		muzzleEnd = "zaslehPoint";
		alternativeFire = "Zasleh2";
		class MuzzleCoef
		{
			dispersionCoef = 0.80000001;
			artilleryDispersionCoef = 1;
			fireLightCoef = 0.1;
			recoilCoef = 1;
			recoilProneCoef = 1;
			minRangeCoef = 1;
			minRangeProbabCoef = 1;
			midRangeCoef = 1;
			midRangeProbabCoef = 1;
			maxRangeCoef = 1;
			maxRangeProbabCoef = 1;
		};
	};
	inertia = 0.2;
};
class Aegis_muzzle_snds_9MM_enhanced_black: Aegis_muzzle_snds_enhanced_base
{
	author = $STR_A3_A_Grave;
	_generalMacro = "Aegis_muzzle_snds_9MM_enhanced_black";
	scope = public;
	scopeCurator = public;
	scopeArsenal = public;
	displayName = $STR_A3_A_CfgWeapons_muzzle_snds_9MM_enhanced_black0;
	picture = "\A3_Aegis\weapons_f_aegis\Acc\data\UI\icon_muzzle_snds_enhanced_black_CA.paa";
	model = "\A3_Aegis\weapons_f_aegis\Acc\acca_snds_enhanced_black_F.p3d";
};
class Aegis_muzzle_snds_9MM_enhanced_sand: Aegis_muzzle_snds_enhanced_base
{
	author = $STR_A3_A_Grave;
	_generalMacro = "Aegis_muzzle_snds_9MM_enhanced_sand";
	scope = public;
	scopeCurator = public;
	scopeArsenal = public;
	displayName = $STR_A3_A_CfgWeapons_muzzle_snds_9MM_enhanced_sand0;
	picture = "\A3_Aegis\weapons_f_aegis\Acc\data\UI\icon_muzzle_snds_enhanced_sand_CA.paa";
	model = "\A3_Aegis\weapons_f_aegis\Acc\acca_snds_enhanced_sand_F.p3d";
};
class Aegis_muzzle_snds_9MM_enhanced_khaki: Aegis_muzzle_snds_enhanced_base
{
	author = $STR_A3_A_Grave;
	_generalMacro = "Aegis_muzzle_snds_9MM_enhanced_khaki";
	scope = public;
	scopeCurator = public;
	scopeArsenal = public;
	displayName = $STR_A3_A_CfgWeapons_muzzle_snds_9MM_enhanced_khaki0;
	picture = "\A3_Aegis\weapons_f_aegis\Acc\data\UI\icon_muzzle_snds_enhanced_khaki_CA.paa";
	model = "\A3_Aegis\weapons_f_aegis\Acc\acca_snds_enhanced_khaki_F.p3d";
};
class Aegis_acc_LightModule_Pistol_base: ItemCore
{
	author = $STR_A3_A_Grave_8asiandude;
	_generalMacro = "Aegis_acc_LightModule_Pistol_base";
	scope = 0;
	scopeCurator = 0;
	scopeArsenal = 0;
	model = "\A3_Aegis\weapons_f_aegis\Acc\accv_LightModule_Pistol_black_F";
	class ItemInfo: InventoryFlashLightItem_Base_F
	{
		mass = 8;
		class FlashLight
		{
			color[]= {1200,1500,1800};
			ambient[]= {6,10,10};
			intensity = 35;
			innerangle = 25;
			outerangle = 46;
			conefadecoef = 2;
			position = "Flashlight_Pos";
			direction = "Flashlight_Dir";
			flaremaxdistance = 150;
			daylight = 0;
			size = 1;
			flaresize = 1;
			useflare = 1;
			class Attenuation
			{
				start = 0;
				constant = 0.5;
				linear = 0.1;
				quadratic = 1;
				hardlimitstart = 140;
				hardlimitend = 150;
			};
			volumeShape = "";
			scale[]= {1,1,1};
		};
	};
	inertia = 0.1;
};
class Aegis_acc_LightModule_Pistol_black: Aegis_acc_LightModule_Pistol_base
{
	author = $STR_A3_A_Grave_8asiandude;
	scope = public;
	scopeCurator = public;
	scopeArsenal = public;
	displayName = $STR_A3_A_CfgWeapons_acc_LightModule_Pistol_black0;
	descriptionShort = $STR_A3_cfgWeapons_acc_flashlight1;
	picture = "\A3_Aegis\weapons_f_aegis\Acc\data\UI\icon_acc_lightModule_Pistol_Black_CA.paa";
	model = "A3_Aegis\weapons_f_aegis\Acc\accv_lightModule_pistol_black_F";
};
class Aegis_acc_LightModule_Pistol_sand: Aegis_acc_LightModule_Pistol_base
{
	author = $STR_A3_A_Grave_8asiandude;
	scope = public;
	scopeCurator = public;
	scopeArsenal = public;
	displayName = $STR_A3_A_CfgWeapons_acc_LightModule_Pistol_sand0;
	descriptionShort = $STR_A3_cfgWeapons_acc_flashlight1;
	picture = "\A3_Aegis\weapons_f_aegis\Acc\data\UI\icon_acc_lightModule_Pistol_sand_CA.paa";
	model = "A3_Aegis\weapons_f_aegis\Acc\accv_lightModule_pistol_sand_F";
};
class Aegis_acc_LightModule_Pistol_khaki: Aegis_acc_LightModule_Pistol_base
{
	author = $STR_A3_A_Grave_8asiandude;
	scope = public;
	scopeCurator = public;
	scopeArsenal = public;
	displayName = $STR_A3_A_CfgWeapons_acc_LightModule_Pistol_khaki0;
	descriptionShort = $STR_A3_cfgWeapons_acc_flashlight1;
	picture = "\A3_Aegis\weapons_f_aegis\Acc\data\UI\icon_acc_lightModule_Pistol_khaki_CA.paa";
	model = "A3_Aegis\weapons_f_aegis\Acc\accv_lightModule_pistol_khaki_F";
};

/* Ruger-57 Muzzle Attachments */
class Muzzle_snds_L;
class Aegis_Muzzle_snds_RP57: muzzle_snds_L
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_Muzzle_snds_RP570;
};
class Aegis_Muzzle_mzls_RP57: muzzle_mzls_L
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_muzzle_mzls_RP570;
};