class CfgWeapons
{
    /* Definitions */
	#include "\A3_Aegis\macros_weaponAcc.hpp"
    
    /* Inheritance Tree */
	#include "\A3_Aegis\cfgRifles.hpp"

    /* Bases */
	class arifle_AK12_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class Single: Mode_SemiAuto
		{
			reloadTime = RPM_600;
		};
		class Burst: Mode_Burst
		{
	    	reloadTime = RPM_1000;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = RPM_600;
		};
	};
	class arifle_AK12_GL_base_F: arifle_AK12_base_F
    {
		class WeaponSlotsInfo;
    };
	class arifle_AK12U_base_F: arifle_AK12_base_F
    {
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_762R
            {
				iconPosition[] =
                {
                    0.0,    // X
                    0.35    // Y
                };
				iconScale = 0.2;
            };
			class CowsSlot: asdg_OpticRail1913
            {
				iconPosition[] =
                {
                    0.4,    // X
                    0.25    // Y
                };
				iconScale = 0.2;
            };
			class UnderBarrelSlot: asdg_UnderSlot
            {
				iconPosition[] =
                {
                    0.24,   // X
                    0.7     // Y
                };
				iconScale = 0.3;
            };
        };
    };
	class arifle_RPK12_base_F: arifle_AK12_base_F
    {
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_762R
            {
				iconPosition[] =
                {
                    0.0,    // X
                    0.35    // Y
                };
				iconScale = 0.2;
            };
			class CowsSlot: asdg_OpticRail1913
            {
				iconPosition[] =
                {
                    0.57,   // X
                    0.31    // Y
                };
				iconScale = 0.17;
            };
        };
    };
	class arifle_AK12_545_base_F: arifle_AK12_base_F
	{
	  	descriptionShort = $STR_A3_A_CfgWeapons_arifle_AK12_545_base_F1;
		magazineWell[] = 
		{
			AK_545x39,
			CBA_545x39_AK,
			CBA_545x39_RPK
		};
	  	initSpeed = 900;
	  	recoil = recoil_ak12_545;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_545R
            {
				iconPosition[] =
                {
                    0.0,    // X
                    0.35    // Y
                };
				iconScale = 0.2;
            };
			class CowsSlot: asdg_OpticRail1913
            {
				iconPosition[] =
                {
                    0.5,    // X
                    0.25    // Y
                };
				iconScale = 0.2;
            };
			class PointerSlot: asdg_FrontSideRail
            {
				iconPosition[] =
                {
                    0.3,    // X
                    0.35    // Y
                };
				iconScale = 0.2;
            };
			class UnderBarrelSlot: asdg_UnderSlot
            {
				iconPosition[] =
                {
                    0.35,   // X
                    0.7     // Y
                };
				iconScale = 0.3;
            };
        };
		class Single: Single
		{
			reloadTime = RPM_700;
			dispersion = 0.00073;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.2;
		};
		class Burst: Burst
		{
			dispersion = 0.00073;
		};
		class Burst_medium: Burst{};
		class FullAuto: FullAuto
		{
			reloadTime = RPM_700;
			dispersion = 0.00073;
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1e-006;
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
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.1;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
	};
	class arifle_AK12_GL_545_base_F: arifle_AK12_GL_base_F
	{
	  	descriptionShort = $STR_A3_A_CfgWeapons_arifle_AK12_545_base_F1;
		magazineWell[] = 
		{
			AK_545x39,
			CBA_545x39_AK,
			CBA_545x39_RPK
		};
	  	initSpeed = 900;
	  	recoil = recoil_ak12_545;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_545R
            {
				iconPosition[] =
                {
                    0.0,    // X
                    0.35    // Y
                };
				iconScale = 0.2;
            };
			class CowsSlot: asdg_OpticRail1913
            {
				iconPosition[] =
                {
                    0.5,    // X
                    0.25    // Y
                };
				iconScale = 0.2;
            };
			class PointerSlot: asdg_FrontSideRail
            {
				iconPosition[] =
                {
                    0.3,    // X
                    0.35    // Y
                };
				iconScale = 0.2;
            };
        };
		class Single: Single
		{
			reloadTime = RPM_700;
			dispersion = 0.00073;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.69999999;
			maxRange = 250;
			maxRangeProbab=0.2;
		};
		class Burst: Burst
		{
			dispersion = 0.00073;
		};
		class Burst_medium: Burst{};
		class FullAuto: FullAuto
		{
			reloadTime = RPM_700;
			dispersion = 0.00073;
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1e-006;
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
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.1;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
	};
	class arifle_AK12U_545_base_F: arifle_AK12U_base_F
	{
	  	descriptionShort = $STR_A3_A_CfgWeapons_arifle_AK12_545_base_F1;
		magazineWell[] = 
		{
			AK_545x39,
			CBA_545x39_AK,
			CBA_545x39_RPK
		};
	  	initSpeed = 735;
	  	recoil = recoil_ak12u_545;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_545R
            {
				iconPosition[] =
                {
                    0.0,    // X
                    0.35    // Y
                };
				iconScale = 0.2;
            };
        };
		class Single: Single
		{
			reloadTime = RPM_700;
			dispersion = 0.00073;
		};
		class Burst: Burst
		{
			dispersion = 0.00073;
		};
		class Burst_medium: Burst{};
		class FullAuto: FullAuto
		{
			reloadTime = RPM_700;
			dispersion = 0.00073;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			burstRangeMax = 4;
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
			maxRangeProbab = 0.1;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
	};

    /* Weapons */
	class arifle_AK12_F: arifle_AK12_base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12_F_X_CA.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_762R
            {
				iconPosition[] =
                {
                    0.0,    // X
                    0.35    // Y
                };
				iconScale = 0.2;
            };
			class CowsSlot: asdg_OpticRail1913
            {
				iconPosition[] =
                {
                    0.5,    // X
                    0.25    // Y
                };
				iconScale = 0.2;
            };
			class UnderBarrelSlot: asdg_UnderSlot
            {
				iconPosition[] =
                {
                    0.35,   // X
                    0.7     // Y
                };
				iconScale = 0.3;
            };
        };
	};
	class arifle_AK12_lush_F: arifle_AK12_base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12_lush_F0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_762R
            {
				iconPosition[] =
                {
                    0.0,    // X
                    0.35    // Y
                };
				iconScale = 0.2;
            };
			class CowsSlot: asdg_OpticRail1913
            {
				iconPosition[] =
                {
                    0.5,    // X
                    0.25    // Y
                };
				iconScale = 0.2;
            };
			class UnderBarrelSlot: asdg_UnderSlot
            {
				iconPosition[] =
                {
                    0.35,   // X
                    0.7     // Y
                };
				iconScale = 0.3;
            };
        };
	};
	class arifle_AK12_arid_F: arifle_AK12_base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12_arid_F0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_762R
            {
				iconPosition[] =
                {
                    0.0,    // X
                    0.35    // Y
                };
				iconScale = 0.2;
            };
			class CowsSlot: asdg_OpticRail1913
            {
				iconPosition[] =
                {
                    0.5,    // X
                    0.25    // Y
                };
				iconScale = 0.2;
            };
			class UnderBarrelSlot: asdg_UnderSlot
            {
				iconPosition[] =
                {
                    0.35,   // X
                    0.7     // Y
                };
				iconScale = 0.3;
            };
        };
	};
	class arifle_AK12_GL_F: arifle_AK12_GL_base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12_GL_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_F_X_CA.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_762R
            {
				iconPosition[] =
                {
                    0.0,    // X
                    0.35    // Y
                };
				iconScale = 0.2;
            };
			class CowsSlot: asdg_OpticRail1913
            {
				iconPosition[] =
                {
                    0.5,    // X
                    0.25    // Y
                };
				iconScale = 0.2;
            };
        };
	};
	class arifle_AK12_GL_lush_F: arifle_AK12_GL_base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12_GL_lush_F0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_762R
            {
				iconPosition[] =
                {
                    0.0,    // X
                    0.35    // Y
                };
				iconScale = 0.2;
            };
			class CowsSlot: asdg_OpticRail1913
            {
				iconPosition[] =
                {
                    0.5,    // X
                    0.25    // Y
                };
				iconScale = 0.2;
            };
        };
	};
	class arifle_AK12_GL_arid_F: arifle_AK12_GL_base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12_GL_arid_F0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_762R
            {
				iconPosition[] =
                {
                    0.0,    // X
                    0.35    // Y
                };
				iconScale = 0.2;
            };
			class CowsSlot: asdg_OpticRail1913
            {
				iconPosition[] =
                {
                    0.5,    // X
                    0.25    // Y
                };
				iconScale = 0.2;
            };
        };
	};
	class arifle_AK12U_F: arifle_AK12U_base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12U_F0;
	};
	class arifle_AK12U_lush_F: arifle_AK12U_base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12U_lush_F0;
		hiddenSelectionsMaterials[] =
		{
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_khaki.rvmat",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_khaki.rvmat"
		};
	};
	class arifle_AK12U_arid_F: arifle_AK12U_base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12U_arid_F0;
	};
	class arifle_AK12_545_F: arifle_AK12_545_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12_545_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12_545_F_X_CA.paa";
		magazines[] =
		{
			30Rnd_545x39_AK12_Mag_F,
			30Rnd_545x39_AK12_Mag_Tracer_F
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_CO.paa",
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_1.rvmat",
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_2.rvmat"
		};
		baseWeapon = arifle_AK12_545_F;
	};
	class arifle_AK12_545_tan_F: arifle_AK12_545_F
	{
		author = $STR_A3_A_BranFlakes;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12_545_tan_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12_tan_F_X_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\arifle_ak12_1_tan_co.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\arifle_ak12_2_tan_co.paa"
		};
		baseWeapon = arifle_AK12_545_tan_F;
	};
	class arifle_AK12_545_lush_F: arifle_AK12_545_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12_545_lush_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12_545_lush_F_X_CA.paa";
		magazines[] =
		{
			30Rnd_545x39_AK12_Lush_Mag_F,
			30Rnd_545x39_AK12_Lush_Mag_Tracer_F
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_khaki_CO.paa",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_khaki.rvmat",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat"
		};
		baseWeapon = arifle_AK12_545_lush_F;
	};
	class arifle_AK12_545_arid_F: arifle_AK12_545_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12_545_arid_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12_545_arid_F_X_CA.paa";
		magazines[] =
		{
			30Rnd_545x39_AK12_Arid_Mag_F,
			30Rnd_545x39_AK12_Arid_Mag_Tracer_F
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_camo_CO.paa",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_camo.rvmat",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat"
		};
		baseWeapon = arifle_AK12_545_arid_F;
	};
	class arifle_AK12_GL_545_F: arifle_AK12_GL_545_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12_GL_545_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_545_F_X_CA.paa";
		magazines[] =
		{
			30Rnd_545x39_AK12_Mag_F,
			30Rnd_545x39_AK12_Mag_Tracer_F
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_CO.paa",
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_CO.paa",
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_gl_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_1.rvmat",
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_2.rvmat",
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_GL_F.rvmat"
		};
		baseWeapon = arifle_AK12_GL_545_F;
	};
	class arifle_AK12_GL_545_tan_F: arifle_AK12_GL_545_F
	{
		author = $STR_A3_A_BranFlakes;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12_GL_545_tan_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_tan_F_X_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\arifle_ak12_1_tan_co.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\arifle_ak12_2_tan_co.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\arifle_ak12_3_tan_co.paa"
		};
		baseWeapon = arifle_AK12_GL_545_tan_F;
	};
	class arifle_AK12_GL_545_lush_F: arifle_AK12_GL_545_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12_GL_545_lush_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_545_lush_F_X_CA.paa";
		magazines[] =
		{
			30Rnd_545x39_AK12_Lush_Mag_F,
			30Rnd_545x39_AK12_Lush_Mag_Tracer_F
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_khaki_CO.paa",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_CO.paa",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_gl_khaki_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_khaki.rvmat",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_GL_F_khaki.rvmat"
		};
		baseWeapon = arifle_AK12_GL_545_lush_F;
	};
	class arifle_AK12_GL_545_arid_F: arifle_AK12_GL_545_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12_GL_545_arid_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_545_arid_F_X_CA.paa";
		magazines[] =
		{
			30Rnd_545x39_AK12_Arid_Mag_F,
			30Rnd_545x39_AK12_Arid_Mag_Tracer_F
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_camo_CO.paa",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_CO.paa",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_gl_camo_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_camo.rvmat",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_GL_F_camo.rvmat"
		};
		baseWeapon = arifle_AK12_GL_545_arid_F;
	};
	class arifle_AK12U_545_F: arifle_AK12U_545_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12U_545_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12U_545_F_X_CA.paa";
		magazines[] =
		{
			30Rnd_545x39_AK12_Mag_F,
			30Rnd_545x39_AK12_Mag_Tracer_F
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_CO.paa",
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_CO.paa",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_1.rvmat",
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_2.rvmat",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12.rvmat"
		};
		baseWeapon = arifle_AK12U_545_F;
	};
	class arifle_AK12U_545_tan_F: arifle_AK12U_545_F
	{
		author = $STR_A3_A_BranFlakes;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12U_545_tan_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AKU12_tan_F_X_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\arifle_ak12_1_tan_co.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\arifle_ak12_2_tan_co.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\arifle_ak12_4_tan_co.paa"
		};
		baseWeapon = arifle_AK12U_545_tan_F;
	};
	class arifle_AK12U_545_lush_F: arifle_AK12U_545_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12U_545_lush_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12U_545_lush_F_X_CA.paa";
		magazines[] =
		{
			30Rnd_545x39_AK12_Lush_Mag_F,
			30Rnd_545x39_AK12_Lush_Mag_Tracer_F
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_khaki_CO.paa",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_CO.paa",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_khaki_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_khaki.rvmat",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_khaki.rvmat"
		};
		baseWeapon = arifle_AK12U_545_lush_F;
	};
	class arifle_AK12U_545_arid_F: arifle_AK12U_545_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12U_545_arid_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12U_545_arid_F_X_CA.paa";
		magazines[] =
		{
			30Rnd_545x39_AK12_Arid_Mag_F,
			30Rnd_545x39_AK12_Arid_Mag_Tracer_F
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_camo_CO.paa",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_CO.paa",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_camo.rvmat",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"
		};
		baseWeapon = arifle_AK12U_545_arid_F;
	};

	/*RPK-12 5.45 + RPK-15 7.62*/
	class arifle_RPK12_F: arifle_RPK12_base_F
	{
		displayName = $STR_A3_A_CfgWeapons_arifle_rpk12_f0;
	};
	class arifle_RPK12_lush_F: arifle_RPK12_base_F
	{
		displayName = $STR_A3_A_CfgWeapons_arifle_rpk12_lush_f0;
		hiddenSelectionsMaterials[] =
		{
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_khaki.rvmat",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_khaki.rvmat"
		};
	};
	class arifle_RPK12_arid_F: arifle_RPK12_base_F
	{
		displayName = $STR_A3_A_CfgWeapons_arifle_rpk12_arid_f0;
	};
	class Aegis_arifle_RPK12_545_base_F: arifle_RPK12_base_F
	{
		recoil = recoil_rpk12_545;
		descriptionShort = $STR_A3_A_CfgWeapons_arifle_AK12_545_base_F1;
		magazineWell[] = 
		{
			AK_545x39,
			CBA_545x39_RPK,
			CBA_545x39_AK,
		};
		initSpeed = 960;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_545R{};
			class CowsSlot: CowsSlot_Rail
			{
				iconPosition[] = {0.57,0.31};
				iconScale = 0.17;
			};
			class PointerSlot: PointerSlot
			{
				iconPosition[] = {0.44,0.39};
				iconScale = 0.17;
			};
			class UnderBarrelSlot{};
			mass = 170;
		};
		modes[]=
		{
			"FullAuto",
			"Burst",
			"Single",
			"FullAuto_Close",
			"FullAuto_medium",
			"far_optics1",
			"far_optics2"
		};
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AK74_Shot_SoundSet,
					AK74_Tail_SoundSet,
					AK74_InteriorTail_SoundSet
				};
			};
			dispersion = 0.00076;
			reloadTime = RPM_600;
			minRange = 2;
			minRangeProbab = 0.01;
			midRange = 200;
			midRangeProbab = 0.01;
			maxRange = 400;
			maxRangeProbab = 0.01;
		};
		class Burst: Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AK74_Shot_SoundSet,
					AK74_Tail_SoundSet,
					AK74_InteriorTail_SoundSet
				};
			};
			dispersion = 0.00076;
			reloadTime = RPM_600;
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AK74_Shot_SoundSet,
					AK74_Tail_SoundSet,
					AK74_InteriorTail_SoundSet
				};
			};
			dispersion = 0.00076;
			reloadTime = RPM_600;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
		};
		class FullAuto_close: FullAuto
		{
			burst = 10;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = false;
		};
		class FullAuto_medium: FullAuto_close
		{
			burst = 5;
			showToPlayer = false;
			minRange = 150;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.75;
			maxRange = 400;
			maxRangeProbab = 0.25;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
		};
		class far_optics1: FullAuto_close
		{
			burst = 5;
			requiredOpticType=1;
			showToPlayer=0;
			minRange=200;
			minRangeProbab=0.2;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=525;
			maxRangeProbab=0.30000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=525;
		};
		class far_optics2: far_optics1
		{
			burst = 3;
			requiredOpticType=2;
			minRange=300;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=750;
			maxRangeProbab=0.050000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=750;
		};
	};
	class Aegis_arifle_RPK12_545_F: Aegis_arifle_RPK12_545_base_F
	{
		author = $STR_A3_A_Ravenholme;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_rpk12_545_f0;
		magazines[] = 
		{
			Aegis_60Rnd_545x39_Mag_Green_F,
			Aegis_60Rnd_545x39_Mag_F,
			Aegis_60Rnd_545x39_Mag_Tracer_Green_F,
			Aegis_60Rnd_545x39_Mag_Tracer_F
		};
		picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_RPK12_F_CA.paa";
		hiddenSelectionsTextures[] = 
		{
			"a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_co.paa",
			"a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa",
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_CO.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_1.rvmat",
			"a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_2.rvmat",
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12.rvmat"
		};
		baseWeapon = "Aegis_arifle_RPK12_545_F";
	};
	class Aegis_arifle_RPK12_545_tan_F: Aegis_arifle_RPK12_545_F
	{
		author = $STR_A3_A_BranFlakes;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_rpk12_545_tan_f0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_RPK12_tan_F_X_CA.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\arifle_ak12_1_tan_co.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\arifle_ak12_2_tan_co.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\arifle_ak12_4_tan_co.paa"
		};
		baseWeapon = "Aegis_arifle_RPK12_545_tan_F";
	};
	class  Aegis_arifle_RPK12_545_lush_F: Aegis_arifle_RPK12_545_base_F
	{
		author = $STR_A3_A_Ravenholme;
		scope = public;
		displayName =  $STR_A3_A_CfgWeapons_arifle_rpk12_545_lush_F0;
		picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_RPK12_lush_F_CA.paa";
		magazines[] = 
		{
			Aegis_60Rnd_545x39_Mag_Green_F,
			Aegis_60Rnd_545x39_Mag_F,
			Aegis_60Rnd_545x39_Mag_Tracer_Green_F,
			Aegis_60Rnd_545x39_Mag_Tracer_F
		};
		hiddenSelectionsTextures[] = 
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_khaki_co.paa",
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_co.paa",
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_khaki_CO.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_khaki.rvmat",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_khaki.rvmat"
		};
		baseWeapon = "Aegis_arifle_RPK12_545_lush_F";
	};
	class  Aegis_arifle_RPK12_545_arid_F: Aegis_arifle_RPK12_545_base_F
	{
		author = $STR_A3_A_Ravenholme;
		scope = public;
		displayName =  $STR_A3_A_CfgWeapons_arifle_rpk12_545_arid_F0;
		picture = "a3\Weapons_F_Enoch\Rifles\AK12\Data\UI\icon_arifle_RPK12_arid_F_CA.paa";
		magazines[] = 
		{
			Aegis_60Rnd_545x39_Mag_Green_F,
			Aegis_60Rnd_545x39_Mag_F,
			Aegis_60Rnd_545x39_Mag_Tracer_Green_F,
			Aegis_60Rnd_545x39_Mag_Tracer_F
		};
		hiddenSelectionsTextures[] = 
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_camo_co.paa",
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_co.paa",
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_camo.rvmat",
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat",
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"
		};
		baseWeapon = "Aegis_arifle_RPK12_545_arid_F";
	};

    /* Accessorized Weapons */
	#include "cfgWeaponsAcc.hpp"
};