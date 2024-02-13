class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons 
{
	class mk20_base_F;
	class srifle_EBR_F;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
//	class R_GL_lxWS;
	class Atlas_Arifle_Famas_Base: Rifle_Base_F
	{
		author = $STR_A3_A_Slatts_BranFlakes;
		_generalMacro = "Atlas_Arifle_Famas_Base";
		scope = 0;		
		handAnim[] = {"OFP2_ManSkeleton", "\A3_Atlas\weapons_f_atlas\Rifles\FAMAS\Data\anim\famas_tact_high.rtm"};
		muzzles[] = {"this", "Atlas_Famas_RifleGrenade"};
		reloadAction = "GestureReloadFAMAS";
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_green", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Yellow"};
		magazineWell[] = {"CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL","STANAG_556x45","STANAG_556x45_Large"};
		magazineReloadSwitchPhase = 0.48;
		htMin = 8;
		htMax = 920;
		inertia = 0.5;
		aimTransitionSpeed = 1.1;
		dexterity = 1.5;
		initSpeed = 750;
		recoil = "recoil_trg20";
		maxZeroing = 800;
		deployedPivot = "bipod";
		hasBipod = 1;
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down", 0.707946, 1, 20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up", 0.707946, 1, 20};
		bullet1[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_01", 0.446684, 1, 15};
		bullet2[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_02", 0.446684, 1, 15};
		bullet3[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_03", 0.446684, 1, 15};
		bullet4[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_04", 0.446684, 1, 15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_01", 0.562341, 1, 15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_02", 0.562341, 1, 15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_03", 0.562341, 1, 15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_04", 0.562341, 1, 15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_01", 0.562341, 1, 15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_02", 0.562341, 1, 15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_03", 0.562341, 1, 15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_04", 0.562341, 1, 15};
		soundBullet[] = {"bullet1", 0.087, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy = "\a3\data_f\proxies\weapon_slots\MUZZLE";
				displayName = "Muzzle Slot";
				iconPicture = "\a3\weapons_f\Data\ui\attachment_muzzle";
				iconPosition[] = {0, 0.45};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913_long
			{
				linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
				displayName = "Optics Slot";
				iconPicture = "\a3\weapons_f\Data\ui\attachment_top";
				iconPinpoint = "Bottom";
				iconPosition[] = {0.5, 0.35};
				iconScale = 0.2;
				
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy = "\a3\data_f\proxies\weapon_slots\SIDE";
				displayName = "Pointer Slot";
				iconPicture = "\a3\weapons_f\Data\ui\attachment_side";
				iconPosition[] = {0.2, 0.45};
				iconScale = 0.25;
			};
			mass = 90;
		};
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		modes[] = {"Single", "Burst", "FullAuto", "single_medium_optics1", "single_medium_optics2", "burst_medium", "fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.07;
			dispersion = 0.00073;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"lxWS_Velko_Shot_SoundSet", "SPAR01_Tail_SoundSet", "SPAR01_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"lxWS_Velko_silencerShot_SoundSet", "SPAR01_silencerTail_SoundSet", "SPAR01_silencerInteriorTail_SoundSet"};
			};
		};
		class Burst: Mode_Burst
		{
			reloadTime = 0.059;
			burst = 3;
			dispersion = 0.00073;
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"lxWS_Velko_Shot_SoundSet", "SPAR01_Tail_SoundSet", "SPAR01_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"lxWS_Velko_silencerShot_SoundSet", "SPAR01_silencerTail_SoundSet", "SPAR01_silencerInteriorTail_SoundSet"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.054;
			dispersion = 0.00073;
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-006;
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"lxWS_Velko_Shot_SoundSet", "SPAR01_Tail_SoundSet", "SPAR01_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"lxWS_Velko_silencerShot_SoundSet", "SPAR01_silencerTail_SoundSet", "SPAR01_silencerInteriorTail_SoundSet"};
			};
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
		};
		class Burst_medium: Burst
		{
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 5;
			minRangeProbab = 0.2;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_dry", 0.562341, 1, 10};
		reloadMagazineSound[] = {"A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\FAMAS\FAMAS_reload.ogg", 1, 1, 35};
		changeFiremodeSound[] = 
		{
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_firemode", 0.177828, 1, 5
		};
		hiddenSelections[] = 
		{
			"CamoG2_1", 
			"CamoG2_2", 
			"CamoG2_3",
			"CamoG2_Low",
			
			"CamoRail",
			"CamoG2_Grip",
			
			"CamoF1_2",
			"CamoF1_3",
		
			"CamoM203",
			"CamoM203_Low"
			
		};
		hiddenSelectionsTextures[] = 
		{
			"A3_Atlas\weapons_f_atlas\Rifles\famas\data\tex\famas_g2_1.paa",
			"A3_Atlas\weapons_f_atlas\Rifles\famas\data\tex\famas_g2_2.paa",
			"A3_Atlas\weapons_f_atlas\Rifles\famas\data\tex\famas_g2_3.paa",
			"A3_Atlas\weapons_f_atlas\Rifles\famas\data\tex\famas_low.paa",
			
			"A3_Atlas\weapons_f_atlas\Rifles\famas\data\tex\rail_famas.paa",
			"A3_Atlas\weapons_f_atlas\Rifles\famas\data\tex\handgrip.paa",
			
			"A3_Atlas\weapons_f_atlas\Rifles\famas\data\tex\famas_2.paa",
			"A3_Atlas\weapons_f_atlas\Rifles\famas\data\tex\famas_3.paa",
			
			"A3_Atlas\weapons_f_atlas\Rifles\famas\data\tex\m203.paa",
			"A3_Atlas\weapons_f_atlas\Rifles\famas\data\tex\m203_low.paa"
		};
		class Atlas_Famas_RifleGrenade: UGL_F
		{
			scope = 2;
			displayName = "Rifle Grenade";
			magazines[] = {"1Rnd_40mm_HE_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_50mm_Smoke_lxWS"};
			magazineWell[] = {"SLR_Grenades"};
			cameraDir = "OP_look";
			reloadAction = "lxWS_GestureReload_slr_GL";
			recoil = "lxWS_recoil_RifleGrenade";
			discreteDistance[] = {40,60,80};
			discreteDistanceInitIndex = 1;
			discreteDistanceCameraPoint[] = {"OP_eye_40","OP_eye_60","OP_eye_80"};
			reloadMagazineSound[] = {"lxWS\sounds_f_lxws\weapons\SLR\lxws_slr_GL_reload",1.3,1,20};
			modes[] = {"Single"};
			useModelOptics = 0;
			useExternalOptic = 0;
			class Single: Mode_SemiAuto
			{
				reloadTime = 0.07;
				dispersion = 0.00073;
				minRange = 2;
				minRangeProbab = 0.5;
				midRange = 150;
				midRangeProbab = 0.7;
				maxRange = 250;
				maxRangeProbab = 0.2;
				class BaseSoundModeType
				{
				};
				class StandardSound: BaseSoundModeType
				{
					soundSetShot[] = {"lxWS_Velko_Shot_SoundSet", "SPAR01_Tail_SoundSet", "SPAR01_InteriorTail_SoundSet"};
				};
				class SilencedSound: BaseSoundModeType
				{
					soundSetShot[] = {"lxWS_Velko_Shot_SoundSet", "SPAR01_Tail_SoundSet", "SPAR01_InteriorTail_SoundSet"};
				};
			};
		};
		class Atlas_FamasG4_RifleGrenade: UGL_F
		{
			scope = 2;
			displayName = "Rifle Grenade";
			magazines[] = {"1Rnd_40mm_HE_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_50mm_Smoke_lxWS"};
			magazineWell[] = {"SLR_Grenades"};
			cameraDir = "OP_look";
			reloadAction = "lxWS_GestureReload_slr_GL";
			recoil = "lxWS_recoil_RifleGrenade";
			discreteDistance[] = {40,60,80};
			discreteDistanceInitIndex = 1;
			discreteDistanceCameraPoint[] = {"OP_eye_40","OP_eye_60","OP_eye_80"};
			reloadMagazineSound[] = {"lxWS\sounds_f_lxws\weapons\SLR\lxws_slr_GL_reload",1.3,1,20};
			modes[] = {"Single"};
			useModelOptics = 0;
			useExternalOptic = 0;
			class Single: Mode_SemiAuto
			{
				reloadTime = 0.07;
				dispersion = 0.00073;
				minRange = 2;
				minRangeProbab = 0.5;
				midRange = 150;
				midRangeProbab = 0.7;
				maxRange = 250;
				maxRangeProbab = 0.2;
				class BaseSoundModeType
				{
				};
				class StandardSound: BaseSoundModeType
				{
					soundSetShot[] = {"Msbs65_01_Shot_SoundSet", "SPAR01_Tail_SoundSet", "SPAR01_InteriorTail_SoundSet"};
				};
				class SilencedSound: BaseSoundModeType
				{
					soundSetShot[] = {"Msbs65_01_Shot_SoundSet", "SPAR01_Tail_SoundSet", "SPAR01_InteriorTail_SoundSet"};
				};
			};
		};
		weaponInfoType = "RscWeaponZeroing";
	};
	
	class Atlas_Arifle_Famas_M203_base: Atlas_Arifle_Famas_Base
	{
		class Atlas_Arifle_Famas_M203: UGL_F
		{
			scope = 2;
			displayName = "GL 203";
			magazines[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
			magazineWell[] = {"UGL_40x36","CBA_40mm_M203","CBA_40mm_EGLM"};
			cameraDir = "OP_look";
			reloadAction = "GestureReloadFAMASUGL";
			discreteDistance[] = {50,75,100,150,200,250,300,350,400};
			discreteDistanceInitIndex = 1;
			useModelOptics = 0;
			useExternalOptic = 0;
			discreteDistanceCameraPoint[] = {"OP_eye_50","OP_eye_75","OP_eye_100","OP_eye_150","OP_eye_200","OP_eye_250","OP_eye_300","OP_eye_350","OP_eye_400"};
			reloadMagazineSound[] = {"lxWS\sounds_f_lxws\weapons\SLR\lxws_slr_GL_reload",1.3,1,20};
		};
	};
	
	// FAMAS G2 5.56
	class Atlas_Arifle_famasG2_F: Atlas_Arifle_Famas_Base
	{
		author = $STR_A3_A_Slatts_BranFlakes;
		_generalMacro = "Atlas_Arifle_famasG2_F";
		scope = 2;
		scopeCurator = 2;
		baseWeapon = "Atlas_Arifle_famasG2";
		displayName = $STR_A3_A_CfgWeapons_atlas_arifle_FAMAS_F0;
		model = "\A3_Atlas\weapons_f_atlas\Rifles\famas\Atlas_arifle_g2.p3d";
		descriptionShort = $STR_A3_A_CfgWeapons_arifle_FAMAS_base_F1;
		picture = "\A3_Atlas\weapons_f_atlas\Rifles\famas\data\ui\gear_famasG2_X_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\A3_Atlas\weapons_f_atlas\Rifles\FAMAS\Data\anim\famas_new_high_2.rtm"};
		//reloadmagazinesound[] = {"A3\sounds_f\weapons\reloads\new_ebr", 0.630957, 1, 35};
		reloadMagazineSound[] = {"A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\FAMAS\FAMAS_reload.ogg", 1, 1, 35};
		hiddenSelections[] = 
		{
			"CamoG2_1", 
			"CamoG2_2", 
			"CamoG2_3",
			"CamoG2_Low",
			
			"CamoRail",
			
			"CamoF1_2",
			"CamoF1_3"
			
		};
		hiddenSelectionsTextures[] = 
		{
			"A3_Atlas\weapons_f_atlas\Rifles\famas\data\tex\famas_g2_1.paa",
			"A3_Atlas\weapons_f_atlas\Rifles\famas\data\tex\famas_g2_2.paa",
			"A3_Atlas\weapons_f_atlas\Rifles\famas\data\tex\famas_g2_3.paa",
			"A3_Atlas\weapons_f_atlas\Rifles\famas\data\tex\famas_low.paa",
			
			"A3_Atlas\weapons_f_atlas\Rifles\famas\data\tex\rail_famas.paa",
			
			"A3_Atlas\weapons_f_atlas\Rifles\famas\data\tex\famas_2.paa",
			"A3_Atlas\weapons_f_atlas\Rifles\famas\data\tex\famas_3.paa"
		};
		deployedPivot = "bipod";
		hasBipod = 1;
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down", 0.707946, 1, 20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up", 0.707946, 1, 20};
		muzzles[] = {"this", "Atlas_Famas_RifleGrenade"};
		
	};
	class Atlas_Arifle_famasG2_Grip_F: Atlas_Arifle_Famas_Base
	{
		author = $STR_A3_A_Slatts_BranFlakes;
		_generalMacro = "Atlas_Arifle_famasG2_Grip_F";
		scope = 2;
		scopeCurator = 2;
		baseWeapon = "Atlas_Arifle_famasG2_Grip_F";
		displayName = $STR_A3_A_CfgWeapons_atlas_arifle_FAMAS_Grip_F0;
		model = "\A3_Atlas\weapons_f_atlas\Rifles\FAMAS\Atlas_arifle_g2_hg.p3d";
		descriptionShort = $STR_A3_A_CfgWeapons_arifle_FAMAS_base_F1;
//		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F_Exp\Rifles\CTAR\Anim\CTAR_F.rtm"};
		//reloadmagazinesound[] = {"A3\sounds_f\weapons\reloads\new_ebr", 0.630957, 1, 35};
		reloadMagazineSound[] = {"A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\FAMAS\FAMAS_reload.ogg", 1, 1, 35};
		picture = "\A3_Atlas\weapons_f_atlas\Rifles\famas\data\ui\gear_famasG2grip_X_ca.paa";
		hiddenSelections[] = 
		{
			"CamoG2_1", 
			"CamoG2_2", 
			"CamoG2_3",
			"CamoG2_Low",
			
			"CamoRail",
			"CamoG2_Grip",
			
			"CamoF1_2",
			"CamoF1_3"
			
		};
		hiddenSelectionsTextures[] = 
		{
			"A3_Atlas\weapons_f_atlas\Rifles\famas\data\tex\famas_g2_1.paa",
			"A3_Atlas\weapons_f_atlas\Rifles\famas\data\tex\famas_g2_2.paa",
			"A3_Atlas\weapons_f_atlas\Rifles\famas\data\tex\famas_g2_3.paa",
			"A3_Atlas\weapons_f_atlas\Rifles\famas\data\tex\famas_low.paa",
			
			"A3_Atlas\weapons_f_atlas\Rifles\famas\data\tex\rail_famas.paa",
			"A3_Atlas\weapons_f_atlas\Rifles\famas\data\tex\handgrip.paa",
			
			"A3_Atlas\weapons_f_atlas\Rifles\famas\data\tex\famas_2.paa",
			"A3_Atlas\weapons_f_atlas\Rifles\famas\data\tex\famas_3.paa"
		};
		deployedPivot = "bipod";
		hasBipod = 1;
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down", 0.707946, 1, 20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up", 0.707946, 1, 20};
		muzzles[] = {"this", "Atlas_Famas_RifleGrenade"};
		
	};

	class Atlas_Arifle_famasG2_GL_F: Atlas_Arifle_Famas_M203_base
	{
		author = $STR_A3_A_Slatts_BranFlakes;
		_generalMacro = "Atlas_Arifle_famasG2_GL_F";
		scope = 2;
		scopeCurator = 2;
		baseWeapon = "Atlas_Arifle_famasG2_GL_F";
		displayName = $STR_A3_A_CfgWeapons_atlas_arifle_FAMAS_GL_F0;
		model = "\A3_Atlas\weapons_f_atlas\Rifles\FAMAS\Atlas_arifle_G2_M203.p3d";
		descriptionShort = $STR_A3_A_CfgWeapons_arifle_FAMAS_base_F1;
		handAnim[] = {"OFP2_ManSkeleton", "\A3_Atlas\weapons_f_atlas\Rifles\FAMAS\Data\anim\famas_new_gl.rtm"};
		//reloadmagazinesound[] = {"A3\sounds_f\weapons\reloads\new_ebr", 0.630957, 1, 35};
		reloadMagazineSound[] = {"A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\FAMAS\FAMAS_reload.ogg", 1, 1, 35};
		picture = "\A3_Atlas\weapons_f_atlas\Rifles\famas\data\ui\gear_famasG2m203_X_ca.paa";
		hiddenSelections[] = 
		{
			"CamoG2_1", 
			"CamoG2_2", 
			"CamoG2_3",
			"CamoG2_Low",
			
			"CamoRail",
			
			"CamoF1_2",
			"CamoF1_3",
		
			"CamoM203",
			"CamoM203_Low"
			
		};
		hiddenSelectionsTextures[] = 
		{
			"A3_Atlas\weapons_f_atlas\Rifles\famas\data\tex\famas_g2_1.paa",
			"A3_Atlas\weapons_f_atlas\Rifles\famas\data\tex\famas_g2_2.paa",
			"A3_Atlas\weapons_f_atlas\Rifles\famas\data\tex\famas_g2_3.paa",
			"A3_Atlas\weapons_f_atlas\Rifles\famas\data\tex\famas_low.paa",
			
			"A3_Atlas\weapons_f_atlas\Rifles\famas\data\tex\rail_famas.paa",
			
			"A3_Atlas\weapons_f_atlas\Rifles\famas\data\tex\famas_2.paa",
			"A3_Atlas\weapons_f_atlas\Rifles\famas\data\tex\famas_3.paa",
			
			"A3_Atlas\weapons_f_atlas\Rifles\famas\data\tex\m203.paa",
			"A3_Atlas\weapons_f_atlas\Rifles\famas\data\tex\m203_low.paa"
		};
		deployedPivot = "bipod";
		hasBipod = 1;
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down", 0.707946, 1, 20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up", 0.707946, 1, 20};
		muzzles[] = {"this", "Atlas_Arifle_Famas_M203"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 110;
		};
	};

	// FAMAS F1 5.56
	class Atlas_ARifle_FamasF1_Base: Atlas_ARifle_Famas_Base
	{
		author = $STR_A3_A_Slatts_BranFlakes;
		_generalMacro = "Atlas_ARifle_FamasF1_Base";
		scope = 0;		
		handAnim[] = {"OFP2_ManSkeleton", "\A3_Atlas\weapons_f_atlas\Rifles\famas\Data\anim\famas_tact_high.rtm"};
		muzzles[] = {"this", "Atlas_Famas_RifleGrenade"};
		magazines[] = 
		{
			"Atlas_25Rnd_556x45_Famas", 
			"Atlas_25Rnd_556x45_Famas_green",
			"Atlas_25Rnd_556x45_Famas_red",
			"Atlas_25Rnd_556x45_Famas_yellow",
			"Atlas_25Rnd_556x45_Famas_Tracer_Red",
			"Atlas_25Rnd_556x45_Famas_Tracer_Green",
			"Atlas_25Rnd_556x45_Famas_Tracer_Yellow"
		};
		magazineWell[] = {"Atlas_FAMAS_556x54"};
		hiddenSelections[] = 
		{
			"CamoF1_1", 
			"CamoF1_2", 
			"CamoF1_3",
			"Camo_Low",
			
			"CamoRail",
			"CamoG2_Grip",
		
			"CamoM203",
			"CamoM203_Low"
			
		};
		hiddenSelectionsTextures[] = 
		{
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\famas_1.paa",
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\famas_2.paa",
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\famas_3.paa",
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\famas_low.paa",
			
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\rail_famas.paa",
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\handgrip.paa",
			
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\m203.paa",
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\m203_low.paa"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
		};
		reloadMagazineSound[] = {"A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\FAMAS\FAMAS_reload.ogg", 1, 1, 35};
	};
	class atlas_arifle_famasF1_RIS_F: atlas_arifle_FamasF1_Base
	{
		author = $STR_A3_A_Slatts_BranFlakes;
		_generalMacro = "atlas_arifle_famasF1_RIS_F";
		scope = 2;
		scopeCurator = 2;
		baseWeapon = "atlas_arifle_famasF1_RIS_F";
		displayName = $STR_A3_A_CfgWeapons_atlas_arifle_FAMASF1_Rail_F0;
		model = "\A3_Atlas\weapons_f_atlas\rifles\famas\Atlas_arifle_famas_f1.p3d";
		descriptionShort = $STR_A3_A_CfgWeapons_arifle_FAMAS_base_F1;
		handAnim[] = {"OFP2_ManSkeleton", "\A3_Atlas\weapons_f_atlas\rifles\FAMAS\Data\anim\famas_new_high.rtm"};
		//reloadmagazinesound[] = {"A3\sounds_f\weapons\reloads\new_ebr", 0.630957, 1, 35};
		reloadMagazineSound[] = {"A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\FAMAS\FAMAS_reload.ogg", 1, 1, 35};
		picture = "\A3_Atlas\weapons_f_atlas\rifles\famas\data\ui\gear_famasf1ris_X_ca.paa";
		hiddenSelections[] = 
		{
			"CamoF1_1", 
			"CamoF1_2", 
			"CamoF1_3",
			"Camo_Low",
			
			"CamoRail",
			"CamoG2_Grip",
		
			"CamoM203",
			"CamoM203_Low"
			
		};
		hiddenSelectionsTextures[] = 
		{
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\famas_1.paa",
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\famas_2.paa",
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\famas_3.paa",
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\famas_low.paa",
			
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\rail_famas.paa",
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\handgrip.paa",
			
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\m203.paa",
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\m203_low.paa"
		};
		muzzles[] = {"this", "Atlas_Famas_RifleGrenade"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 95;
		};
	};
	class atlas_arifle_famasF1_F: atlas_arifle_FamasF1_Base
	{
		author = $STR_A3_A_Slatts_BranFlakes;
		_generalMacro = "atlas_arifle_famasF1_F";
		scope = 2;
		scopeCurator = 2;
		baseWeapon = "atlas_arifle_famasF1_F";
		displayName = $STR_A3_A_CfgWeapons_atlas_arifle_FAMASF1_F0;
		model = "\A3_Atlas\weapons_f_atlas\rifles\famas\Atlas_arifle_famas_f1.p3d";
		descriptionShort = $STR_A3_A_CfgWeapons_arifle_FAMAS_base_F1;
		handAnim[] = {"OFP2_ManSkeleton", "\A3_Atlas\weapons_f_atlas\rifles\FAMAS\Data\anim\famas_new_high.rtm"};
		//reloadmagazinesound[] = {"A3\sounds_f\weapons\reloads\new_ebr", 0.630957, 1, 35};
		reloadMagazineSound[] = {"A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\FAMAS\FAMAS_reload.ogg", 1, 1, 35};
		picture = "\A3_Atlas\weapons_f_atlas\rifles\famas\data\ui\gear_famasf1_X_ca.paa";
		hiddenSelections[] = 
		{
			"CamoF1_1", 
			"CamoF1_2", 
			"CamoF1_3",
			"Camo_Low",
			
			"CamoRail",
			"CamoG2_Grip",
		
			"CamoM203",
			"CamoM203_Low"
			
		};
		hiddenSelectionsTextures[] = 
		{
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\famas_1.paa",
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\famas_2.paa",
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\famas_3.paa",
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\famas_low.paa",
			
			"",
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\handgrip.paa",
			
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\m203.paa",
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\m203_low.paa"
		};
		muzzles[] = {"this", "Atlas_Famas_RifleGrenade"};	
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {};
				
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {};
			};
			mass = 100;
		};
	};
	class atlas_arifle_famasF1_Grip_F: atlas_arifle_FamasF1_base
	{
		author = $STR_A3_A_Slatts_BranFlakes;
		_generalMacro = "atlas_arifle_famasF1_Grip_F";
		scope = 2;
		scopeCurator = 2;
		baseWeapon = "atlas_arifle_famasF1_Grip_F";
		displayName = $STR_A3_A_CfgWeapons_atlas_arifle_FAMASF1_Grip_F0;
		model = "A3_Atlas\weapons_f_atlas\rifles\famas\Atlas_arifle_f1_hg.p3d";
		descriptionShort = $STR_A3_A_CfgWeapons_arifle_FAMAS_base_F1;
		handAnim[] = {"OFP2_ManSkeleton", "\A3_Atlas\weapons_f_atlas\rifles\FAMAS\Data\anim\famas_tact_high.rtm"};
		picture = "\A3_Atlas\weapons_f_atlas\rifles\famas\data\ui\gear_famasf1grip_X_ca.paa";
		//reloadmagazinesound[] = {"A3\sounds_f\weapons\reloads\new_ebr", 0.630957, 1, 35};
		reloadMagazineSound[] = {"A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\FAMAS\FAMAS_reload.ogg", 1, 1, 35};
		hiddenSelections[] = 
		{
			"CamoF1_1", 
			"CamoF1_2", 
			"CamoF1_3",
			"Camo_Low",
			
			"CamoRail",
			"CamoG2_Grip"
			
		};
		hiddenSelectionsTextures[] = 
		{
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\famas_1.paa",
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\famas_2.paa",
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\famas_3.paa",
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\famas_low.paa",
			
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\rail_famas.paa",
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\handgrip.paa"
		};
		muzzles[] = {"this", "Atlas_Famas_RifleGrenade"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 95;
		};
	};

	class Atlas_arifle_famasF1_GL_F: Atlas_Arifle_Famas_M203_base
	{
		author = $STR_A3_A_Slatts_BranFlakes;
		_generalMacro = "atlas_arifle_famasF1_GL_F";
		scope = 2;
		scopeCurator = 2;
		baseWeapon = "atlas_arifle_famasF1_GL_F";
		displayName = $STR_A3_A_CfgWeapons_atlas_arifle_FAMASF1_GL_F0;
		model = "A3_Atlas\weapons_f_atlas\rifles\famas\Atlas_arifle_f1_M203.p3d";
		descriptionShort = $STR_A3_A_CfgWeapons_arifle_FAMAS_base_F1;		
		handAnim[] = {"OFP2_ManSkeleton", "\A3_Atlas\weapons_f_atlas\Rifles\FAMAS\Data\anim\famas_new_gl.rtm"};
		picture = "\A3_Atlas\weapons_f_atlas\rifles\famas\data\ui\gear_famasf1m203_X_ca.paa";
		reloadMagazineSound[] = {"A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\FAMAS\FAMAS_reload.ogg", 1, 1, 35};
		hiddenSelections[] = 
		{
			"CamoF1_1", 
			"CamoF1_2", 
			"CamoF1_3",
			"Camo_Low",
			
			"CamoRail",
			"CamoG2_Grip",
		
			"CamoM203",
			"CamoM203_Low"
			
		};
		hiddenSelectionsTextures[] = 
		{
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\famas_1.paa",
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\famas_2.paa",
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\famas_3.paa",
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\famas_low.paa",
			
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\rail_famas.paa",
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\handgrip.paa",
			
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\m203.paa",
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\m203_low.paa"
		};
		magazines[] = 
		{
			"Atlas_25Rnd_556x45_Famas", 
			"Atlas_25Rnd_556x45_Famas_green",
			"Atlas_25Rnd_556x45_Famas_red",
			"Atlas_25Rnd_556x45_Famas_yellow",
			"Atlas_25Rnd_556x45_Famas_Tracer_Red",
			"Atlas_25Rnd_556x45_Famas_Tracer_Green",
			"Atlas_25Rnd_556x45_Famas_Tracer_Yellow"
		};
		magazineWell[] = {"Atlas_FAMAS_556x54"};
		muzzles[] = {"this", "Atlas_Arifle_Famas_M203"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 120;
		};	
	};

	// FAMAS G4 6.5mm
	class atlas_arifle_FamasG4_Base: atlas_arifle_Famas_Base
	{
		author = $STR_A3_A_Slatts_BranFlakes;
		_generalMacro = "atlas_arifle_FamasG4_Base";
		scope = 0;		
		handAnim[] = {"OFP2_ManSkeleton", "\A3_Atlas\weapons_f_atlas\rifles\FAMAS\Data\anim\famas_tact_high.rtm"};
		muzzles[] = {"this", "Atlas_Famas_RifleGrenade"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag"};
		magazineWell[] = {"MX_65x39_MSBS"};
		recoil = "recoil_MSBS65";
		hiddenSelections[] = 
		{
			"CamoG2_1", 
			"CamoG2_2", 
			"CamoG2_3",
			"CamoG2_Low",
			
			"CamoRail",
			
			"CamoF1_2",
			"CamoF1_3"
			
		};
		hiddenSelectionsTextures[] = 
		{
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\famas_g2_1.paa",
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\famas_g2_2.paa",
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\famas_g2_3.paa",
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\famas_low.paa",
			
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\rail_famas.paa",
			
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\famas_2.paa",
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\famas_3.paa"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.07;
			dispersion = 0.00073;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Msbs65_01_Shot_SoundSet", "SPAR01_Tail_SoundSet", "SPAR01_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"Msbs65_01_Shot_Silencer_SoundSet", "SPAR01_silencerTail_SoundSet", "SPAR01_silencerInteriorTail_SoundSet"};
			};
		};
		class Burst: Mode_Burst
		{
			reloadTime = 0.059;
			burst = 3;
			dispersion = 0.00073;
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Msbs65_01_Shot_SoundSet", "SPAR01_Tail_SoundSet", "SPAR01_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"Msbs65_01_Shot_Silencer_SoundSet", "SPAR01_silencerTail_SoundSet", "SPAR01_silencerInteriorTail_SoundSet"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.054;
			dispersion = 0.00073;
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-006;
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Msbs65_01_Shot_SoundSet", "SPAR01_Tail_SoundSet", "SPAR01_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"Msbs65_01_Shot_Silencer_Auto_SoundSet", "SPAR01_silencerTail_SoundSet", "SPAR01_silencerInteriorTail_SoundSet"};
			};
		};
		reloadMagazineSound[] = {"A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\FAMAS\FAMAS_65_reload", 1, 1, 35};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_65
			{
				linkProxy = "\a3\data_f\proxies\weapon_slots\MUZZLE";
				displayName = "Muzzle Slot";
				iconPicture = "\a3\weapons_f\Data\ui\attachment_muzzle";
				iconPosition[] = {0, 0.45};
				iconScale = 0.2;
			};
		};
	};
	/*class atlas_arifle_FamasG4: atlas_arifle_Famas_Base
	{
		author = $STR_A3_A_Slatts_BranFlakes;
		_generalMacro = "atlas_arifle_FamasG4";
		scope = 2;
		scopeCurator = 2;
		baseWeapon = "atlas_arifle_FamasG4";
		displayName = "FA-MAS G4 6.5mm";
		model = "\A3_Atlas\weapons_f_atlas\rifles\famas\KLYN_famas_g4.p3d";
		descriptionShort = "6.5mm Assault Rifle";
		handAnim[] = {"OFP2_ManSkeleton", "A3_Atlas\weapons_f_atlas\rifles\FAMAS\Data\anim\famas_new_high_2.rtm"};
		picture = "\A3_Atlas\weapons_f_atlas\rifles\famas\data\ui\gear_famasG2_X_ca.paa";
		deployedPivot = "bipod";
		hasBipod = 1;
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down", 0.707946, 1, 20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up", 0.707946, 1, 20};
		muzzles[] = {"this", "Atlas_Famas_RifleGrenade"};
	};*/
	class atlas_arifle_famasG4_Grip_F: atlas_arifle_FamasG4_Base
	{
		author = $STR_A3_A_Slatts_BranFlakes;
		_generalMacro = "atlas_arifle_famasG4_Grip_F";
		scope = 2;
		scopeCurator = 2;
		baseWeapon = "atlas_arifle_famasG4_Grip_F";
		displayName = $STR_A3_A_CfgWeapons_atlas_arifle_FAMASG4_F0;
		model = "\A3_Atlas\weapons_f_atlas\rifles\famas\Atlas_arifle_famas_g4_hg.p3d";
		descriptionShort = $STR_A3_A_CfgWeapons_arifle_FAMASG4_base_F1;
//		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F_Exp\Rifles\CTAR\Anim\CTAR_F.rtm"};
		picture = "\A3_Atlas\weapons_f_atlas\rifles\famas\data\ui\gear_famasG2grip_X_ca.paa";
		deployedPivot = "bipod";
		hasBipod = 1;
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down", 0.707946, 1, 20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up", 0.707946, 1, 20};
		muzzles[] = {"this", "Atlas_FamasG4_RifleGrenade"};
		reloadMagazineSound[] = {"A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\FAMAS\FAMAS_65_reload.ogg", 1, 1, 35};
		class Library		
		{			
			libTextDesc = $STR_A3_A_CfgWeapons_Atlas_arifle_FAMAS_base_F_Library0;
		};
	};

	class Atlas_Arifle_famasG4_GL_F: Atlas_Arifle_Famas_M203_base
	{
		author = $STR_A3_A_Slatts_BranFlakes;
		_generalMacro = "Atlas_Arifle_famasG4_GL_F";
		scope = 2;
		scopeCurator = 2;
		baseWeapon = "Atlas_Arifle_famasG4_GL_F";
		displayName = $STR_A3_A_CfgWeapons_atlas_arifle_FAMASG4_GL_F0;
		model = "\A3_Atlas\weapons_f_atlas\rifles\famas\Atlas_arifle_famas_G4_M203.p3d";
		descriptionShort = $STR_A3_A_CfgWeapons_arifle_FAMASG4_base_F1;
		handAnim[] = {"OFP2_ManSkeleton", "\A3_Atlas\weapons_f_atlas\rifles\FAMAS\Data\anim\famas_new_gl.rtm"};
		reloadMagazineSound[] = {"A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\FAMAS\FAMAS_65_reload.ogg", 1, 1, 35};
		picture = "A3_Atlas\weapons_f_atlas\rifles\famas\data\ui\gear_famasG2m203_X_ca.paa";
		hiddenSelections[] = 
		{
			"CamoG2_1", 
			"CamoG2_2", 
			"CamoG2_3",
			"CamoG2_Low",
			
			"CamoRail",
			
			"CamoF1_2",
			"CamoF1_3",
		
			"CamoM203",
			"CamoM203_Low"
			
		};
		hiddenSelectionsTextures[] = 
		{
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\famas_g2_1.paa",
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\famas_g2_2.paa",
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\famas_g2_3.paa",
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\famas_low.paa",
			
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\rail_famas.paa",
			
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\famas_2.paa",
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\famas_3.paa",
			
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\m203.paa",
			"A3_Atlas\weapons_f_atlas\rifles\famas\data\tex\m203_low.paa"
		};
		deployedPivot = "bipod";
		hasBipod = 1;
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down", 0.707946, 1, 20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up", 0.707946, 1, 20};
		muzzles[] = {"this", "Atlas_Arifle_Famas_M203"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag"};
		magazineWell[] = {"MX_65x39_MSBS"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_65
			{
				linkProxy = "\a3\data_f\proxies\weapon_slots\MUZZLE";
				displayName = "Muzzle Slot";
				iconPicture = "\a3\weapons_f\Data\ui\attachment_muzzle";
				iconPosition[] = {0, 0.45};
				iconScale = 0.2;
			};
			mass = 110;
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.07;
			dispersion = 0.00073;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Msbs65_01_Shot_SoundSet", "SPAR01_Tail_SoundSet", "SPAR01_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"Msbs65_01_Shot_Silencer_SoundSet", "SPAR01_silencerTail_SoundSet", "SPAR01_silencerInteriorTail_SoundSet"};
			};
		};
		class Burst: Mode_Burst
		{
			reloadTime = 0.059;
			burst = 3;
			dispersion = 0.00073;
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Msbs65_01_Shot_SoundSet", "SPAR01_Tail_SoundSet", "SPAR01_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"Msbs65_01_Shot_Silencer_SoundSet", "SPAR01_silencerTail_SoundSet", "SPAR01_silencerInteriorTail_SoundSet"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.054;
			dispersion = 0.00073;
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-006;
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Msbs65_01_Shot_SoundSet", "SPAR01_Tail_SoundSet", "SPAR01_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"Msbs65_01_Shot_Silencer_Auto_SoundSet", "SPAR01_silencerTail_SoundSet", "SPAR01_silencerInteriorTail_SoundSet"};
			};
		};
	};
	#include "presets.hpp"
};