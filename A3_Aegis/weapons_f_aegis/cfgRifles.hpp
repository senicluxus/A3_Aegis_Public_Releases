/* Rifles */
class arifle_Katiba_Base_F: Rifle_Base_F
{
    class WeaponSlotsInfo;
};
class arifle_Katiba_F: arifle_Katiba_Base_F
{
    INITSPEED_RIFLE;
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: asdg_MuzzleSlot_65
        {
            iconPosition[] =
            {
                0.0,    // X
                0.45    // Y
            };
            iconScale = 0.2;
        };
    };
};
class arifle_Katiba_C_F: arifle_Katiba_Base_F
{
    INITSPEED_CARBINE;
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: asdg_MuzzleSlot_65
        {
            iconPosition[] =
            {
                0.1,    // X
                0.45    // Y
            };
            iconScale = 0.2;
        };
    };
};
class arifle_Katiba_GL_F: arifle_Katiba_Base_F
{
    INITSPEED_RIFLE;
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: asdg_MuzzleSlot_65
        {
            iconPosition[] =
            {
                0.0,    // X
                0.45    // Y
            };
            iconScale = 0.2;
        };
    };
};
class arifle_Katiba_GL_ACO_pointer_snds_F: arifle_Katiba_GL_F
{
    class LinkedItems
    {
        class LinkedItemsMuzzle
        {
            item = muzzle_snds_65_TI_blk_F;
        };
    };
};
class arifle_Katiba_C_ACO_pointer_snds_F: arifle_Katiba_C_F
{
    class LinkedItems
    {
        class LinkedItemsMuzzle
        {
            item = muzzle_snds_65_TI_blk_F;
        };
    };
};
class arifle_Katiba_ACO_pointer_snds_F: arifle_Katiba_F
{
    class LinkedItems
    {
        class LinkedItemsMuzzle
        {
            item = muzzle_snds_65_TI_blk_F;
        };
    };
};
class arifle_Katiba_ARCO_pointer_snds_F: arifle_Katiba_F
{
    class LinkedItems
    {
        class LinkedItemsMuzzle
        {
            item = muzzle_snds_65_TI_blk_F;
        };
    };
};
class mk20_base_F: Rifle_Base_F
{
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class CowsSlot: CowsSlot_F2000
		{
			iconPosition[] =
			{// X       Y
				0.45,   0.25
			};
			iconScale = 0.2;
		};
    };
};
class arifle_Mk20_F: mk20_base_F
{
    INITSPEED_RIFLE;
    displayName = $STR_A3_A_CfgWeapons_arifle_Mk20_F0;
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: asdg_MuzzleSlot_556
        {
            iconPosition[] =
            {
                0,      // X
                0.36    // Y
            };
            iconScale = 0.2;
        };
        class CowsSlot: CowsSlot_F2000
		{
			iconPosition[] =
			{// X       Y
				0.45,   0.25
			};
			iconScale = 0.2;
		};
    };
};
class arifle_Mk20_plain_F: arifle_Mk20_F
{
    displayName = $STR_A3_A_CfgWeapons_arifle_Mk20_plain_F0;
};
class arifle_Mk20C_F: mk20_base_F
{
    INITSPEED_CARBINE;
    displayName = $STR_A3_A_CfgWeapons_arifle_Mk20C_F0;
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: asdg_MuzzleSlot_556
        {
            iconPosition[] =
            {
                0.1,    // X
                0.36    // Y
            };
            iconScale = 0.2;
        };
        class CowsSlot: CowsSlot_F2000
		{
			iconPosition[] =
			{// X       Y
				0.45,   0.25
			};
			iconScale = 0.2;
		};
    };
};
class arifle_Mk20C_plain_F: arifle_Mk20C_F
{
    displayName = $STR_A3_A_CfgWeapons_arifle_Mk20C_plain_F0;
};
class arifle_Mk20_GL_F: mk20_base_F
{
    INITSPEED_RIFLE;
    displayName = $STR_A3_A_CfgWeapons_arifle_Mk20_GL_F0;
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: asdg_MuzzleSlot_556
        {
            iconPosition[] =
            {
                0.1,    // X
                0.36    // Y
            };
            iconScale = 0.2;
        };
        class CowsSlot: CowsSlot_F2000
		{
			iconPosition[] =
			{// X       Y
				0.45,   0.25
			};
			iconScale = 0.2;
		};
    };
};
class arifle_Mk20_GL_plain_F: arifle_Mk20_GL_F
{
    displayName = $STR_A3_A_CfgWeapons_arifle_Mk20_GL_plain_F0;
    hiddenSelectionsTextures[] =
    {
        "\A3\Weapons_F_Beta\Rifles\MK20\Data\MK20_CO.paa",
        "\A3_Aegis\Weapons_F_Aegis\Rifles\MK20\Data\MK20_utilities_black_CO.paa"
    };
};
class arifle_MX_Base_F: Rifle_Base_F
{
    class WeaponSlotsInfo;
};
class arifle_MXC_F: arifle_MX_Base_F
{
    INITSPEED_CARBINE;
    hiddenSelections[] = {camo1};
    hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Short_CO.paa"};
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: asdg_MuzzleSlot_65
        {
            iconPosition[] =
            {
                0.0,    // X
                0.4     // Y
            };
            iconScale = 0.2;
        };
        class PointerSlot: asdg_FrontSideRail
        {
            iconPosition[] =
            {
                0.2,    // X
                0.4     // Y
            };
            iconScale = 0.25;
        };
    };
};
class arifle_MX_F: arifle_MX_Base_F
{
    INITSPEED_RIFLE;
    hiddenSelections[] =
    {
        camo1,
        camo2
    };
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Base_CO.paa",
        "\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Short_CO.paa"
    };
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: asdg_MuzzleSlot_65
        {
            iconPosition[] =
            {
                0.0,    // X
                0.45    // Y
            };
            iconScale = 0.2;
        };
        class PointerSlot: asdg_FrontSideRail
        {
            iconPosition[] =
            {
                0.2,    // X
                0.45    // Y
            };
            iconScale = 0.25;
        };
    };
};
class arifle_MX_GL_F: arifle_MX_Base_F
{
    INITSPEED_RIFLE;
    hiddenSelections[] =
    {
        camo1,
        camo2
    };
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Base_CO.paa",
        "\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\GLX_CO.paa"
    };
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: asdg_MuzzleSlot_65
        {
            iconPosition[] =
            {
                0.0,    // X
                0.45    // Y
            };
            iconScale = 0.2;
        };
        class PointerSlot: asdg_FrontSideRail
        {
            iconPosition[] =
            {
                0.2,    // X
                0.45    // Y
            };
            iconScale = 0.25;
        };
    };
};
class arifle_MX_SW_F: arifle_MX_Base_F
{
    INITSPEED_AR;
    UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
    cursor = arifle;
    hiddenSelections[] = {camo1};
    hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_LMG_CO.paa"};
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: asdg_MuzzleSlot_65
        {
            iconPosition[] =
            {
                0.0,    // X
                0.45    // Y
            };
            iconScale = 0.2;
        };
        class PointerSlot: asdg_FrontSideRail
        {
            iconPosition[] =
            {
                0.2,    // X
                0.45    // Y
            };
            iconScale = 0.25;
        };
    };
};
class arifle_MXM_F: arifle_MX_Base_F
{
    INITSPEED_MR;
    hiddenSelections[] = {camo1};
    hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Long_CO.paa"};
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: asdg_MuzzleSlot_65
        {
            iconPosition[] =
            {
                0.0,    // X
                0.4     // Y
            };
            iconScale = 0.2;
        };
        class PointerSlot: asdg_FrontSideRail
        {
            iconPosition[] =
            {
                0.2,    // X
                0.45    // Y
            };
            iconScale = 0.25;
        };
    };
};
class arifle_MX_SW_Hamr_pointer_F: arifle_MX_SW_F
{
    class LinkedItems
    {
        LINKED_UNDERBARREL(bipod_01_F_snd);
    };
};
class arifle_MXC_Holo_pointer_snds_F: arifle_MXC_F
{
    class LinkedItems
    {
        class LinkedItemsMuzzle
        {
            item = muzzle_snds_H_snd_F;
        };
    };
};
class arifle_MXC_ACO_pointer_snds_F: arifle_MXC_F
{
    class LinkedItems
    {
        class LinkedItemsMuzzle
        {
            item = muzzle_snds_H_snd_F;
        };
    };
};
class arifle_MX_ACO_pointer_snds_F: arifle_MX_F
{
    class LinkedItems
    {
        class LinkedItemsMuzzle
        {
            item = muzzle_snds_H_snd_F;
        };
    };
};
class arifle_MX_RCO_pointer_snds_F: arifle_MX_F
{
    class LinkedItems
    {
        class LinkedItemsMuzzle
        {
            item = muzzle_snds_H_snd_F;
        };
    };
};
class arifle_MX_GL_Holo_pointer_snds_F: arifle_MX_GL_F
{
    class LinkedItems
    {
        class LinkedItemsMuzzle
        {
            item = muzzle_snds_H_snd_F;
        };
    };
};
class arifle_MXM_DMS_LP_BI_snds_F: arifle_MXM_F
{
    class LinkedItems
    {
        class LinkedItemsMuzzle
        {
            item = muzzle_snds_H_snd_F;
        };
    };
};
class arifle_MXC_Black_F;
class arifle_MX_Black_F;
class arifle_MX_Black_Hamr_Pointer_Snds_F: arifle_MX_Black_F
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            item = optic_Hamr;
        };
    };
};
class arifle_MX_GL_Black_F;
class arifle_MX_SW_Black_F;
class arifle_MX_SW_Black_Hamr_pointer_F: arifle_MX_SW_Black_F
{
    class LinkedItems
    {
        LINKED_UNDERBARREL(bipod_01_F_blk);
    };
};
class arifle_MX_SW_Black_Rifle_F: arifle_MX_SW_Black_F
{
    class manual;
    class close: manual
    {
        burst = 5;
        aiBurstTerminable = 1;
        aiRateOfFire = 0.5;
        aiRateOfFireDistance = 50;
        minRange = 0;
        minRangeProbab = 0.05;
        midRange = 20;
        midRangeProbab = 0.7;
        maxRange = 50;
        maxRangeProbab = 0.04;
        showToPlayer = 0;
    };
    class short: close
    {
        burst = 3;
        aiBurstTerminable = 1;
        aiRateOfFire = 2;
        aiRateOfFireDistance = 300;
        minRange = 50;
        minRangeProbab = 0.05;
        midRange = 150;
        midRangeProbab = 0.7;
        maxRange = 300;
        maxRangeProbab = 0.04;
    };
    class medium: close
    {
        burst = 3;
        aiRateOfFire = 4;
        aiRateOfFireDistance = 600;
        minRange = 200;
        minRangeProbab = 0.05;
        midRange = 300;
        midRangeProbab = 0.7;
        maxRange = 500;
        maxRangeProbab = 0.1;
    };
};
class arifle_MXM_Black_F;
class SDAR_base_F: Rifle_Base_F
{
    magazineWell[] = {STANAG_556x45_SDAR};
};
class Tavor_base_F: Rifle_Base_F
{
    class WeaponSlotsInfo;
    class Single: Mode_SemiAuto
    {
        reloadTime = RPM_910;
    };
    class FullAuto: Mode_FullAuto
    {
        reloadTime = RPM_910;
    };
};
class arifle_TRG21_F: Tavor_base_F
{
    INITSPEED_RIFLE;
    hiddenSelections[] = {camo};
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: asdg_MuzzleSlot_556
        {
            iconPosition[] =
            {
                0.0,    // X
                0.4     // Y
            };
            iconScale = 0.2;
        };
    };
};
class arifle_TRG20_F: Tavor_base_F
{
    INITSPEED_CARBINE;
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: asdg_MuzzleSlot_556
        {
            iconPosition[] =
            {
                0.0,    // X
                0.4     // Y
            };
            iconScale = 0.2;
        };
    };
    class Single: Single
    {
        reloadTime = RPM_890;
    };
    class FullAuto: FullAuto
    {
        reloadTime = RPM_890;
    };
};
class arifle_TRG21_GL_F: Tavor_base_F
{
    INITSPEED_RIFLE;
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: asdg_MuzzleSlot_556
        {
            iconPosition[] =
            {
                0.0,    // X
                0.4     // Y
            };
            iconScale = 0.2;
        };
    };
};
class arifle_MX_khk_F;
class arifle_MX_GL_khk_F;
class arifle_MX_SW_khk_F;
class arifle_MXC_khk_F;
class arifle_MXM_khk_F;
class arifle_AKM_base_F;
class arifle_AKM_F;
class arifle_AKS_base_F: Rifle_Base_F
{
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        mass = 60;
    };
};
class arifle_ARX_ghex_F;
class arifle_ARX_hex_F;
class arifle_ARX_hex_DMS_Pointer_Snds_Bipod_F: arifle_ARX_hex_F
{
    class LinkedItems
    {
        class LinkedItemsMuzzle
        {
            item = muzzle_snds_65_TI_hex_F;
        };
    };
};
class arifle_ARX_ghex_DMS_Pointer_Snds_Bipod_F: arifle_ARX_ghex_F
{
    class LinkedItems
    {
        class LinkedItemsUnder
        {
            item = bipod_02_F_hex;
        };
    };
};
class arifle_CTAR_GL_blk_F;
class arifle_CTARS_blk_F;
class arifle_SPAR_01_base_F;
class arifle_SPAR_01_blk_F: arifle_SPAR_01_base_F
{
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_CO.paa",
        "\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_02_CO.paa"
    };
};
class arifle_SPAR_01_khk_F: arifle_SPAR_01_base_F
{
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_01_CO.paa",
        "\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_02_CO.paa"
    };
};
class arifle_SPAR_01_snd_F: arifle_SPAR_01_base_F
{
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_01_CO.paa",
        "\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_02_CO.paa"
    };
};
class arifle_SPAR_01_GL_base_F;
class arifle_SPAR_01_GL_blk_F: arifle_SPAR_01_GL_base_F
{
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_CO.paa",
        "\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_02_CO.paa",
        "\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_GL_blk_F_01_CO.paa"
    };
};
class arifle_SPAR_01_GL_khk_F: arifle_SPAR_01_GL_base_F
{
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_01_CO.paa",
        "\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_02_CO.paa",
        "\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_GL_khk_F_01_CO.paa"
    };
};
class arifle_SPAR_01_GL_snd_F: arifle_SPAR_01_GL_base_F
{
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_01_CO.paa",
        "\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_02_CO.paa",
        "\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_GL_snd_F_01_CO.paa"
    };
};
class arifle_SPAR_02_base_F: Rifle_Base_F
{
    cursor = arifle;
};
class arifle_SPAR_02_blk_F: arifle_SPAR_02_base_F 
{
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_CO.paa",
        "\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_02_CO.paa"
    };
};
class arifle_SPAR_02_khk_F: arifle_SPAR_02_base_F 
{
    magazines[] =
    {
        150Rnd_556x45_Drum_Green_Mag_F,
        150Rnd_556x45_Drum_Green_Mag_Tracer_F
    };
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_01_CO.paa",
        "\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_02_CO.paa"
    };
};
class arifle_SPAR_02_snd_F: arifle_SPAR_02_base_F 
{
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_01_CO.paa",
        "\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_02_CO.paa"
    };
};
class arifle_SPAR_03_base_F: Rifle_Base_F
{
    UiPicture = "\A3\Weapons_F\Data\UI\icon_sniper_CA.paa";
};
class arifle_SPAR_03_blk_F: arifle_SPAR_03_base_F
{
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_03\Data\arifle_SPAR_03_blk_F_01_CO.paa",
        "\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_03\Data\arifle_SPAR_03_blk_F_02_CO.paa",
        "\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_CO.paa"
    };
};
class arifle_SPAR_03_khk_F: arifle_SPAR_03_base_F
{
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_03\Data\arifle_SPAR_03_khk_F_01_CO.paa",
        "\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_03\Data\arifle_SPAR_03_khk_F_02_CO.paa",
        "\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_01_CO.paa"
    };
};
class arifle_SPAR_03_snd_F: arifle_SPAR_03_base_F
{
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_03\Data\arifle_SPAR_03_snd_F_01_CO.paa",
        "\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_03\Data\arifle_SPAR_03_snd_F_02_CO.paa",
        "\A3_Aegis\Weapons_F_Aegis\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_01_CO.paa"
    };
};
class arifle_MSBS65_base_F: Rifle_Base_F
{
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot;
        class CowsSlot;
        class PointerSlot;
        class UnderBarrelSlot;
    };
};
class arifle_MSBS65_Mark_base_F: arifle_MSBS65_base_F
{
    UiPicture = "\A3\Weapons_F\Data\UI\icon_sniper_CA.paa";
};
class arifle_MSBS65_GL_base_F: arifle_MSBS65_base_F
{
    UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
};
class arifle_MSBS65_UBS_base_F: arifle_MSBS65_base_F{};
class arifle_MSBS65_base_black_F: arifle_MSBS65_base_F{};
class arifle_MSBS65_Mark_base_black_F: arifle_MSBS65_Mark_base_F{};
class arifle_MSBS65_GL_base_black_F: arifle_MSBS65_GL_base_F{};
class arifle_MSBS65_UBS_base_black_F: arifle_MSBS65_UBS_base_F{};
class arifle_MSBS65_base_sand_F: arifle_MSBS65_base_F{};
class arifle_MSBS65_Mark_base_sand_F: arifle_MSBS65_Mark_base_F{};
class arifle_MSBS65_GL_base_sand_F: arifle_MSBS65_GL_base_F{};
class arifle_MSBS65_UBS_base_sand_F: arifle_MSBS65_UBS_base_F{};
class arifle_MSBS65_base_camo_F: arifle_MSBS65_base_F{};
class arifle_MSBS65_Mark_base_camo_F: arifle_MSBS65_Mark_base_F{};
class arifle_MSBS65_GL_base_camo_F: arifle_MSBS65_GL_base_F{};
class arifle_MSBS65_UBS_base_camo_F: arifle_MSBS65_UBS_base_F{};
class arifle_MSBS65_F: arifle_MSBS65_base_F{};
class arifle_MSBS65_Mark_F: arifle_MSBS65_Mark_base_F{};
class arifle_MSBS65_GL_F: arifle_MSBS65_GL_base_F{};
class arifle_MSBS65_UBS_F;
class arifle_MSBS65_black_F: arifle_MSBS65_base_black_F{};
class arifle_MSBS65_Mark_black_F: arifle_MSBS65_Mark_base_black_F{};
class arifle_MSBS65_GL_black_F: arifle_MSBS65_GL_base_black_F{};
class arifle_MSBS65_UBS_black_F: arifle_MSBS65_UBS_base_black_F{};
class arifle_MSBS65_sand_F: arifle_MSBS65_base_sand_F{};
class arifle_MSBS65_Mark_sand_F: arifle_MSBS65_Mark_base_sand_F{};
class arifle_MSBS65_GL_sand_F: arifle_MSBS65_GL_base_sand_F{};
class arifle_MSBS65_UBS_sand_F: arifle_MSBS65_UBS_base_sand_F{};
class arifle_MSBS65_camo_F: arifle_MSBS65_base_camo_F{};
class arifle_MSBS65_Mark_camo_F: arifle_MSBS65_Mark_base_camo_F{};
class arifle_MSBS65_GL_camo_F: arifle_MSBS65_GL_base_camo_F{};
class arifle_MSBS65_UBS_camo_F: arifle_MSBS65_UBS_base_camo_F{};
class arifle_MSBS65_UBS_snds_ico_pointer_F: arifle_MSBS65_UBS_F
{
    class LinkedItems
    {
        class LinkedItemsMuzzle
        {
            item = muzzle_snds_H;
        };
    };
};
class arifle_Mk20_black_F: arifle_Mk20_plain_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgWeapons_arifle_Mk20_black_F0;
	picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\MK20\Data\UI\icon_arifle_Mk20_black_F_X_CA.paa";
	hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Rifles\MK20\Data\MK20_black_CO.paa"};
	baseWeapon = arifle_Mk20_black_F;
};
class arifle_Mk20_hex_F: arifle_Mk20_plain_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgWeapons_arifle_Mk20_hex_F0;
	picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\MK20\Data\UI\icon_arifle_Mk20_hex_F_X_CA.paa";
	hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Rifles\MK20\Data\MK20_OPFOR_CO.paa"};
	baseWeapon = arifle_Mk20_hex_F;
};
class arifle_Mk20C_black_F: arifle_Mk20C_plain_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgWeapons_arifle_Mk20C_black_F0;
	picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\MK20\Data\UI\icon_arifle_Mk20C_black_F_X_CA.paa";
	hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Rifles\MK20\Data\MK20_black_CO.paa"};
	baseWeapon = arifle_Mk20C_black_F;
};
class arifle_Mk20C_hex_F: arifle_Mk20C_plain_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgWeapons_arifle_Mk20C_hex_F0;
	picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\MK20\Data\UI\icon_arifle_Mk20C_hex_F_X_CA.paa";
	hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Rifles\MK20\Data\MK20_OPFOR_CO.paa"};
	baseWeapon = arifle_Mk20C_hex_F;
};
class arifle_Mk20_GL_black_F: arifle_Mk20_GL_plain_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgWeapons_arifle_Mk20_GL_black_F0;
	picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\MK20\Data\UI\icon_arifle_Mk20_GL_black_F_X_CA.paa";
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Weapons_F_Aegis\Rifles\MK20\Data\MK20_black_CO.paa",
		"\A3_Aegis\Weapons_F_Aegis\Rifles\MK20\Data\MK20_utilities_black_CO.paa"
	};
	baseWeapon = arifle_Mk20_GL_black_F;
};
class arifle_Mk20_GL_hex_F: arifle_Mk20_GL_plain_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgWeapons_arifle_Mk20_GL_hex_F0;
	picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\MK20\Data\UI\icon_arifle_Mk20_GL_hex_F_X_CA.paa";
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Weapons_F_Aegis\Rifles\MK20\Data\MK20_OPFOR_CO.paa",
		"\A3_Aegis\Weapons_F_Aegis\Rifles\MK20\Data\MK20_utilities_black_CO.paa"
	};
	baseWeapon = arifle_Mk20_GL_hex_F;
};
class arifle_TRG21_black_F: arifle_TRG21_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgWeapons_arifle_TRG21_black_F0;
	picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\TRG20\Data\UI\icon_arifle_TRG21_black_F_X_CA.paa";
	hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Rifles\TRG20\Data\TAR21_black_CO.paa"};
	baseWeapon = arifle_TRG21_black_F;
};
class arifle_TRG20_black_F: arifle_TRG20_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgWeapons_arifle_TRG20_black_F0;
	picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\TRG20\Data\UI\icon_arifle_TRG20_black_F_X_CA.paa";
	hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Rifles\TRG20\Data\TAR21_black_CO.paa"};
	baseWeapon = arifle_TRG20_black_F;
};
class arifle_TRG21_GL_black_F: arifle_TRG21_GL_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgWeapons_arifle_TRG21_GL_black_F0;
	picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\TRG20\Data\UI\icon_arifle_TRG21_GL_black_F_X_CA.paa";
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Weapons_F_Aegis\Rifles\TRG20\Data\TAR21_black_CO.paa",
		"\A3\Weapons_F\Rifles\TRG20\Data\TAR21_EGLM_CO.paa",
		"\A3\Weapons_F\Data\GL_holo_CO.paa"
	};
	baseWeapon = arifle_TRG21_GL_black_F;
};