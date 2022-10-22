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
		magazineWell[] = {AK_545x39};
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
		};
		class Burst: Burst
		{
			dispersion = 0.00073;
		};
		class FullAuto: FullAuto
		{
			reloadTime = RPM_700;
			dispersion = 0.00073;
		};
	};
	class arifle_AK12_GL_545_base_F: arifle_AK12_GL_base_F
	{
	  	descriptionShort = $STR_A3_A_CfgWeapons_arifle_AK12_545_base_F1;
		magazineWell[] = {AK_545x39};
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
		};
		class Burst: Burst
		{
			dispersion = 0.00073;
		};
		class FullAuto: FullAuto
		{
			reloadTime = RPM_700;
			dispersion = 0.00073;
		};
	};
	class arifle_AK12U_545_base_F: arifle_AK12U_base_F
	{
	  	descriptionShort = $STR_A3_A_CfgWeapons_arifle_AK12_545_base_F1;
		magazineWell[] = {AK_545x39};
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
		class FullAuto: FullAuto
		{
			reloadTime = RPM_700;
			dispersion = 0.00073;
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
	class arifle_RPK12_F;
	class arifle_RPK12_lush_F: arifle_RPK12_base_F
	{
		hiddenSelectionsMaterials[] =
		{
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_khaki.rvmat",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_khaki.rvmat"
		};
	};
	class arifle_RPK12_arid_F;
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

    /* Accessorized Weapons */
	#include "cfgWeaponsAcc.hpp"
};