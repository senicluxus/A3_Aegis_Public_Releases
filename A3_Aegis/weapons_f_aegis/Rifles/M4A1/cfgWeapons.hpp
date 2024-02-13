class CfgWeapons
{
    /* Definitions */
	#include "\A3_Aegis\macros_weaponAcc.hpp"
    
    /* Inheritance Tree */
	#include "\A3_Aegis\cfgRifles.hpp"
    
    //Base classes
	class Aegis_arifle_M4A1_base_F: Rifle_Base_F
	{
		model="\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\M4A1_F.p3d";
		UiPicture="\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		descriptionShort="$STR_A3_CfgWeapons_arifle_SPAR_01_base_F1";
		class Library
		{
			libTextDesc="$STR_A3_A_CfgWeapons_arifle_M4A1_base_F_Library0";
		};
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};	
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\data\anim\M4A1.rtm"
		};
		reloadAction = "GestureReloadSPAR_01";
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
		recoil = "Aegis_recoil_rifle_M4A1";
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
			mass=75; //CQB=60 //GL=95
		};
		modes[] =
		{
			"Single",
			"FullAuto",
			"single_medium_optics1",
			"single_medium_optics2",
			"fullauto_medium"
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
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.08;
			dispersion = 0.00057999999;
			minRange = 2;
			minRangeProbab = 0.89999998;
			midRange = 15;
			midRangeProbab = 0.69999999;
			maxRange = 30;
			maxRangeProbab = 0.050000001;
			aiRateOfFire = 1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
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
		ACE_barrelTwist = 304.79999;
		ACE_barrelLength = 406.39999;
		ACE_railHeightAboveBore = 4.6999998;
	};
	class Aegis_arifle_M4A1_GL_base_F: Aegis_arifle_M4A1_base_F
	{
		UiPicture="\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		model="\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\M4A1_GL_F.p3d";
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
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\data\anim\M4A1_GL.rtm"
		};
		inertia = 0.60000002;
		dexterity = 1.3;
		aimTransitionSpeed = 0.89999998;
		initSpeed = 800;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 95;
		};
		muzzles[] =
		{
			"this",
			"EGLM"
		};
		class EGLM: UGL_F
		{
			displayName = "EGLM";
			useModelOptics = 0;
			useExternalOptic = 0;
			cameraDir = "OP_look";
			discreteDistance[] = {50,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[] =
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
			discreteDistanceInitIndex = 1;
			reloadAction = "GestureReloadSPARUGL";
			magazineReloadSwitchPhase = 0.40000001;
		};
		ACE_barrelLength = 330.20001;
	};
    class Aegis_arifle_M4A1_Grip_base_F: Aegis_arifle_M4A1_base_F
	{
		model = "\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\M4A1_grip_F.p3d";
        handAnim[] =
		{
			"OFP2_ManSkeleton",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\data\anim\M4A1_Grip.rtm"
		};
		inertia = 0.5;
		dexterity = 1.6;
		aimTransitionSpeed = 1.1;
		initSpeed = 800;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 80;
		};
	};
	class Aegis_arifle_M4A1_short_base_F: Aegis_arifle_M4A1_base_F
	{
		model = "\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\M4A1_short_grip_F.p3d";
        handAnim[] =
		{
			"OFP2_ManSkeleton",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\data\anim\M4A1_Grip.rtm"
		};
		inertia = 0.5;
		dexterity = 1.7;
		aimTransitionSpeed = 1.1;
		initSpeed = 800;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 65;
		};
		class Single: Single
		{
			dispersion=0.00073000003;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.00073000003;
		};
		ACE_barrelLength=330.20001;
	};

	// Black	
	class Aegis_arifle_M4A1_F: Aegis_arifle_M4A1_base_F
	{
		author = $STR_A3_A_Grave_3dGunsmith;
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_M4A1_F0;
		picture = "\A3_Aegis\weapons_f_aegis\Rifles\M4A1\Data\UI\Icon_arifle_M4A1_black_F_CA.paa";
		baseWeapon = "Aegis_arifle_M4A1_F";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_01_black_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_02_black_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_05_black_CO.paa"
		};
	};
	class Aegis_arifle_M4A1_short_F: Aegis_arifle_M4A1_short_base_F
	{
		author = $STR_A3_A_Grave_3dGunsmith;
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_M4A1_short_F0;
		picture = "\A3_Aegis\weapons_f_aegis\Rifles\M4A1\Data\UI\Icon_arifle_M4A1_short_grip_black_F_CA.paa";
		baseWeapon = "Aegis_arifle_M4A1_short_F";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_01_black_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_02_black_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_05_black_CO.paa"
		};
	};
	class Aegis_arifle_M4A1_GL_F: Aegis_arifle_M4A1_GL_base_F
	{
		author = $STR_A3_A_Grave_3dGunsmith;
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_M4A1_GL_F0;
		picture = "\A3_Aegis\weapons_f_aegis\Rifles\M4A1\Data\UI\Icon_arifle_M4A1_GL_black_F_CA.paa";
		baseWeapon="Aegis_arifle_M4A1_GL_F";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_01_black_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_02_black_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_03_black_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_04_black_CO.paa"
		};
	};
    class Aegis_arifle_M4A1_grip_F: Aegis_arifle_M4A1_grip_base_F
	{
		author = $STR_A3_A_Grave_3dGunsmith;
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_M4A1_grip_F0;
		picture = "\A3_Aegis\weapons_f_aegis\Rifles\M4A1\Data\UI\Icon_arifle_M4A1_grip_black_F_CA.paa";
		baseWeapon = "Aegis_arifle_M4A1_grip_F";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_01_black_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_02_black_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_05_black_CO.paa"
		};
	};

	// Sand	
	class Aegis_arifle_M4A1_sand_F: Aegis_arifle_M4A1_base_F
	{
		author = $STR_A3_A_Grave_3dGunsmith;
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_M4A1_snd_f0;
		picture = "\A3_Aegis\weapons_f_aegis\Rifles\M4A1\Data\UI\Icon_arifle_M4A1_sand_F_CA.paa";
		baseWeapon="Aegis_arifle_M4A1_sand_F";
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Sand"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_01_sand_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_02_sand_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_05_black_CO.paa"
		};
	};
	class Aegis_arifle_M4A1_short_sand_F: Aegis_arifle_M4A1_short_base_F
	{
		author = $STR_A3_A_Grave_3dGunsmith;
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_M4A1_short_snd_f0;
		picture = "\A3_Aegis\weapons_f_aegis\Rifles\M4A1\Data\UI\Icon_arifle_M4A1_short_grip_sand_F_CA.paa";
		baseWeapon = "Aegis_arifle_M4A1_short_sand_F";
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Sand"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_01_sand_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_02_sand_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_05_black_CO.paa"
		};
	};
	class Aegis_arifle_M4A1_GL_sand_F: Aegis_arifle_M4A1_GL_base_F
	{
		author = $STR_A3_A_Grave_3dGunsmith;
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_M4A1_GL_snd_f0;
		picture = "\A3_Aegis\weapons_f_aegis\Rifles\M4A1\Data\UI\Icon_arifle_M4A1_GL_sand_F_CA.paa";
		baseWeapon = "Aegis_arifle_M4A1_GL_sand_F";
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Sand"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_01_sand_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_02_sand_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_03_sand_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_04_sand_CO.paa"
		};
    };
    class Aegis_arifle_M4A1_grip_sand_F: Aegis_arifle_M4A1_grip_base_F
	{
		author = $STR_A3_A_Grave_3dGunsmith;
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_M4A1_Grip_snd_f0;
		picture = "\A3_Aegis\weapons_f_aegis\Rifles\M4A1\Data\UI\Icon_arifle_M4A1_grip_sand_F_CA.paa";
		baseWeapon = "Aegis_arifle_M4A1_grip_sand_F";
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Sand"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_01_sand_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_02_sand_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_05_black_CO.paa"
		};
	};
	// Khaki	
	class Aegis_arifle_M4A1_khaki_F: Aegis_arifle_M4A1_base_F
	{
		author = $STR_A3_A_Grave_3dGunsmith;
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_M4A1_khk_f0;
		picture = "\A3_Aegis\weapons_f_aegis\Rifles\M4A1\Data\UI\Icon_arifle_M4A1_khaki_F_CA.paa";
		baseWeapon = "Aegis_arifle_M4A1_khaki_F";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_01_khaki_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_02_khaki_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_05_black_CO.paa"
		};
	};
	class Aegis_arifle_M4A1_short_khaki_F: Aegis_arifle_M4A1_short_base_F
	{
		author = $STR_A3_A_Grave_3dGunsmith;
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_M4A1_Short_khk_f0;
		picture = "\A3_Aegis\weapons_f_aegis\Rifles\M4A1\Data\UI\Icon_arifle_M4A1_short_grip_khaki_F_CA.paa";
		baseWeapon = "Aegis_arifle_M4A1_short_khaki_F";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_01_khaki_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_02_khaki_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_05_black_CO.paa"
		};
	};
	class Aegis_arifle_M4A1_GL_khaki_F: Aegis_arifle_M4A1_GL_base_F
	{
		author = $STR_A3_A_Grave_3dGunsmith;
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_M4A1_GL_khk_f0;
		picture = "\A3_Aegis\weapons_f_aegis\Rifles\M4A1\Data\UI\Icon_arifle_M4A1_GL_khaki_F_CA.paa";
		baseWeapon = "Aegis_arifle_M4A1_GL_khaki_F";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_01_khaki_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_02_khaki_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_03_khaki_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_04_khaki_CO.paa"
		};
	};
    class Aegis_arifle_M4A1_grip_khaki_F: Aegis_arifle_M4A1_grip_base_F
	{
		author = $STR_A3_A_Grave_3dGunsmith;
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_M4A1_Grip_khk_f0;
		picture = "\A3_Aegis\weapons_f_aegis\Rifles\M4A1\Data\UI\Icon_arifle_M4A1_grip_khaki_F_CA.paa";
		baseWeapon = "Aegis_arifle_M4A1_grip_khaki_F";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_01_khaki_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_02_khaki_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M4A1\Data\arifle_M4A1_05_black_CO.paa"
		};
	};
};