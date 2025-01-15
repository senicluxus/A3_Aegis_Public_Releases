  class CfgWeapons
{  
	/* Definitions */
	#include "\A3_Aegis\macros_weaponAcc.hpp"
    
    /* Inheritance Tree */
	#include "\A3_Aegis\cfgRifles.hpp"

	/* Base classes */
	class Aegis_arifle_M16A4_base_F: Rifle_Base_F
	{
		model = "A3_Aegis\Weapons_F_Aegis\Rifles\M16\M16A4_F.p3d";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		descriptionShort = "$STR_A3_CfgWeapons_arifle_SPAR_01_base_F1";
		class Library
		{
			libTextDesc = "$STR_A3_A_CfgWeapons_arifle_M16_base_F_Library0";
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};	
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"A3_Aegis\Weapons_F_Aegis\Rifles\M16\data\anim\M16A4.rtm"
		};
		reloadAction = "Aegis_GestureReloadM16A4";
		magazines[] =
		{
			"30Rnd_556x45_Stanag"
		};
		magazineWell[] =
		{
			"STANAG_556x45",
			"STANAG_556x45_Large"
		};
		magazineReloadSwitchPhase = 0.47999999;
		htMin = 8;
		htMax = 920;
		inertia = 0.60000002;
		aimTransitionSpeed = 1.1;
		dexterity = 1.4;
		initSpeed = 880;
		recoil = "Aegis_recoil_rifle_M16A4";
		maxZeroing = 800;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[] = 
				{
					0,
					0.40000001
				};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] = 
				{
					0.44999999,
					0.28
				};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = 
				{
					0.34999999,
					0.44999999
				};
				iconScale = 0.2;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] = 
				{
					0.2,
					0.80000001
				};
				iconScale = 0.30000001;
			};
			mass = 85;
		};
		modes[]=
		{
			"Single",
			"Burst",
			"single_medium_optics1",
			"single_medium_optics2",
			"Burst_medium"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.08;
			dispersion = 0.00057999999;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.69999999;
			maxRange = 250;
			maxRangeProbab = 0.2;
		};
		class Burst: Mode_Burst
		{
			burst = 3;
			reloadTime = 0.06;
			dispersion = 0.00086999999;
			minRange = 2;
			minRangeProbab = 0.89999998;
			midRange = 50;
			midRangeProbab = 0.69999999;
			maxRange = 100;
			maxRangeProbab = 0.050000001;
		};
		class Burst_medium: Burst
		{
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.69999999;
			maxRange = 100;
			maxRangeProbab = 0.050000001;
			aiRateOfFire = 2;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 5;
			minRangeProbab = 0.2;
			midRange = 300;
			midRangeProbab = 0.69999999;
			maxRange = 450;
			maxRangeProbab = 0.30000001;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.69999999;
			maxRange = 600;
			maxRangeProbab = 0.050000001;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
	};
	class Aegis_arifle_M16A4_FG_base_F: Aegis_arifle_M16A4_base_F
	{
		model = "A3_Aegis\Weapons_F_Aegis\Rifles\M16\M16A4_FG_F.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};	
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"A3_Aegis\Weapons_F_Aegis\Rifles\M16\data\anim\M16A4_FG.rtm"
		};
		inertia = 0.5;
		dexterity = 1.5;
		aimTransitionSpeed = 1.1;
		initSpeed = 800;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=85;
		};
	};
	class Aegis_arifle_M16A4_GL_base_F: Aegis_arifle_M16A4_base_F
	{
		UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		model = "A3_Aegis\Weapons_F_Aegis\Rifles\M16\M16A4_GL_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"A3_Aegis\Weapons_F_Aegis\Rifles\M16\data\anim\M16A4_GL.rtm"
		};
		reloadAction = "Aegis_GestureReloadM16A4_GL_Magazine";
		inertia = 0.60000002;
		dexterity = 1.3;
		aimTransitionSpeed = 0.89999998;
		initSpeed = 800;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class UnderBarrelSlot
			{
			};
			mass = 105;
		};
		muzzles[]=
		{
			"this",
			"UGL"
		};
		class UGL: UGL_F
		{
			displayName = "UGL";
			useModelOptics = 0;
			useExternalOptic = 0;
			cameraDir = "OP_look";
			discreteDistance[] = {50,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye_50",
				"OP_eye_100",
				"OP_eye_150",
				"OP_eye_200",
				"OP_eye_250",
				"OP_eye_300",
				"OP_eye_350",
				"OP_eye_400"
			};
			discreteDistanceInitIndex=1;
			reloadAction = "Aegis_GestureReloadM16A4_GL_Shell";
			magazineReloadSwitchPhase=0.40000001;
		};
	};
	
	/* Black */	
	class Aegis_arifle_M16A4_F: Aegis_arifle_M16A4_base_F
	{
		author = $STR_A3_A_Grave_3dGunsmith;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_M16A4_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\M16\data\UI\Icon_arifle_M16A4_black_F_CA.paa";
		baseWeapon = "Aegis_arifle_M16A4_black_F";
		hiddenSelectionsTextures[]=
		{
			"A3_Aegis\Weapons_F_Aegis\Rifles\M16\Data\arifle_M16A4_01_black_CO.paa",
			"A3_Aegis\Weapons_F_Aegis\Rifles\M16\Data\arifle_M16A4_02_black_CO.paa"
		};
	};
	class Aegis_arifle_M16A4_FG_F: Aegis_arifle_M16A4_FG_base_F
	{
		author = $STR_A3_A_Grave_3dGunsmith;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_M16A4_grip_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\M16\data\UI\Icon_arifle_M16A4_FG_black_F_CA.paa";
		baseWeapon = "Aegis_arifle_M16A4_FG_black_F";
		hiddenSelectionsTextures[]=
		{
			"A3_Aegis\Weapons_F_Aegis\Rifles\M16\Data\arifle_M16A4_01_black_CO.paa",
			"A3_Aegis\Weapons_F_Aegis\Rifles\M16\Data\arifle_M16A4_02_black_CO.paa",
			"A3_Aegis\Weapons_F_Aegis\Rifles\M16\Data\arifle_M16A4_05_black_CO.paa"
		};
	};
	class Aegis_arifle_M16A4_GL_F: Aegis_arifle_M16A4_GL_base_F
	{
		author = $STR_A3_A_Grave_3dGunsmith;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_M16A4_GL_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\M16\data\UI\Icon_arifle_M16A4_GL_black_F_CA.paa";
		baseWeapon = "Aegis_arifle_M16A4_GL_black_F";
		hiddenSelectionsTextures[]=
		{
			"A3_Aegis\Weapons_F_Aegis\Rifles\M16\Data\arifle_M16A4_01_black_CO.paa",
			"A3_Aegis\Weapons_F_Aegis\Rifles\M16\Data\arifle_M16A4_02_black_CO.paa",
			"A3_Aegis\Weapons_F_Aegis\Rifles\M16\Data\arifle_M16A4_03_black_CO.paa",
			"A3_Aegis\Weapons_F_Aegis\Rifles\M16\Data\arifle_M16A4_04_black_CO.paa"
		};
	};
	
};