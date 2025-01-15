/* Long Range Rifles */
class GM6_base_F: Rifle_Long_Base_F{};
class srifle_GM6_F: GM6_base_F
{
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class PointerSlot: asdg_FrontSideRail
        {
            iconPosition[] =
            {
                0.05,   // X
                0.38    // Y
            };
            iconScale = 0.2;
        };
    };
};
class LRR_base_F: Rifle_Long_Base_F
{
    class Single: Mode_SemiAuto
    {
        sounds[] =
        {
            StandardSound,
            SilencedSound
        };
    };
};
class srifle_LRR_F: LRR_base_F
{
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: MuzzleSlot
        {
            linkProxy = "\A3\Data_F\proxies\weapon_slots\MUZZLE";
            compatibleItems[] =
            {
                muzzle_snds_408_black,
                muzzle_snds_408_green,
                muzzle_snds_408_sand
            };
            iconPosition[] =
            {
                0.05,   // X
                0.38    // Y
            };
            iconScale = 0.2;
        };
    };
};
class EBR_base_F: Rifle_Long_Base_F{};
class srifle_EBR_F: EBR_base_F
{
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: asdg_MuzzleSlot_762
        {
            iconPosition[] =
            {
                0.05,    // X
                0.38    // Y
            };
            iconScale = 0.2;
        };
        mass = 110;
    };
};
class DMR_01_base_F: Rifle_Long_Base_F
{
    class WeaponSlotsInfo;
};
class srifle_DMR_01_F: DMR_01_base_F
{
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: asdg_MuzzleSlot_762R_SVD
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
class srifle_DMR_02_F;
class srifle_DMR_02_sniper_F: srifle_DMR_02_F
{
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_02\Data\DMR_02_01_tan_CO.paa",
        "\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_02\Data\DMR_02_02_tan_CO.paa"
    };
};
class DMR_03_base_F: Rifle_Long_Base_F
{
    class WeaponSlotsInfo;
};
class srifle_DMR_03_F: DMR_03_base_F
{
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: asdg_MuzzleSlot_762
        {
            iconPosition[] =
            {
                0.12,   // X
                0.431   // Y
            };
            iconScale = 0.15;
        };
    };
};
class srifle_DMR_03_khaki_F;
class srifle_DMR_03_tan_F: srifle_DMR_03_F
{
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_03\Data\DMR_03_01_tan_CO.paa",
        "\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_03\Data\DMR_03_02_tan_CO.paa"
    };
};
class srifle_DMR_05_blk_F;
class srifle_DMR_05_hex_F;
class DMR_06_base_F: Rifle_Long_Base_F
{
    class WeaponSlotsInfo;
};
class srifle_DMR_06_camo_F: DMR_06_base_F
{
    magazines[] = {20Rnd_Mk14_762x51_Mag};
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: asdg_MuzzleSlot_762
        {
            iconPosition[] =
            {
                0.06,   // X
                0.4     // Y
            };
            iconScale = 0.15;
        };
        class CowsSlot: asdg_OpticRail1913_short
        {
            iconPosition[] =
            {
                0.52,   // X
                0.36    // Y
            };
            iconScale = 0.15;
        };
        class UnderBarrelSlot: asdg_UnderSlot
        {
            iconPosition[] =
            {
                0.32,   // X
                0.8     // Y
            };
            iconScale = 0.3;
        };
    };
};
class DMR_07_base_F: Rifle_Long_Base_F
{
    UiPicture = "\A3\Weapons_F\Data\UI\icon_sniper_CA.paa";
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class PointerSlot{};
    };
};
class DMR_06_hunter_base_F: DMR_06_base_F
{
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: asdg_MuzzleSlot_762
        {
            iconPosition[] =
            {
                0.06,   // X
                0.4     // Y
            };
            iconScale = 0.15;
        };
        class CowsSlot: asdg_OpticRail1913_short
        {
            iconPosition[] =
            {
                0.52,   // X
                0.36    // Y
            };
            iconScale = 0.15;
        };
        class UnderBarrelSlot: asdg_UnderSlot
        {
            iconPosition[] =
            {
                0.32,   // X
                0.8     // Y
            };
            iconScale = 0.3;
        };
    };
};
class srifle_EBR_blk_F: srifle_EBR_F
{
	author = $STR_A3_A_AveryTheKitty;
	baseWeapon = srifle_EBR_blk_F;
	displayName = $STR_A3_A_CfgWeapons_srifle_EBR_blk_F0;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\EBR\Data\srifle_EBR_blk_F_1_CO.paa",
		"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\EBR\Data\srifle_EBR_blk_F_2_CO.paa"
	};
	picture = "\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\EBR\Data\UI\icon_srifle_EBR_blk_F_X_CA.paa";
};
class srifle_EBR_khk_F: srifle_EBR_F
{
	author = $STR_A3_A_AveryTheKitty;
	baseWeapon = srifle_EBR_khk_F;
	displayName = $STR_A3_A_CfgWeapons_srifle_EBR_khk_F0;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\EBR\Data\srifle_EBR_khk_F_1_CO.paa",
		"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\EBR\Data\srifle_EBR_khk_F_2_CO.paa"
	};
	picture = "\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\EBR\Data\UI\icon_srifle_EBR_khk_F_X_CA.paa";
};
class srifle_DMR_01_black_F: srifle_DMR_01_F
{
	author = $STR_A3_A_PlusUltra;
	baseWeapon = srifle_DMR_01_black_F;
	displayName = $STR_A3_A_CfgWeapons_srifle_DMR_01_black_F0;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_01\Data\DMR_01_black_CO.paa",
		"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_01\Data\DMR_02_black_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_01\Data\DMR_01_black.rvmat",
		"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_01\Data\DMR_02_black.rvmat"
	};
	picture = "\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_01\Data\UI\icon_srifle_DMR_01_black_F_X_CA.paa";
};
class srifle_DMR_02_tna_F: srifle_DMR_02_F
{
	author = $STR_A3_A_AveryTheKitty;
	baseWeapon = srifle_DMR_02_tna_F;
	displayName = $STR_A3_A_CfgWeapons_srifle_DMR_02_tna_F0;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_02\Data\DMR_02_01_tna_CO.paa",
		"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_02\Data\DMR_02_02_tna_CO.paa"
	};
	picture = "\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_02\Data\UI\icon_srifle_DMR_02_tna_F_X_CA.paa";
};
class srifle_DMR_05_ghex_F: srifle_DMR_05_blk_F
{
	author = $STR_A3_A_AveryTheKitty;
	baseWeapon = srifle_DMR_05_ghex_F;
	displayName = $STR_A3_A_CfgWeapons_srifle_DMR_05_ghex_F0;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_05\Data\DMR_05_01_ghex_CO.paa",
		"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_05\Data\DMR_05_02_ghex_CO.paa"
	};
	picture = "\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_05\Data\UI\icon_srifle_DMR_05_ghex_F_X_CA.paa";
};
class srifle_DMR_06_black_F: srifle_DMR_06_camo_F
{
	author = $STR_A3_A_AveryTheKitty;
	baseWeapon = srifle_DMR_06_black_F;
	displayName = $STR_A3_A_CfgWeapons_srifle_DMR_06_black_F0;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_06\Data\DMR_06_01_black_CO.paa",
		"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_06\Data\DMR_06_02_black_CO.paa"
	};
	magazines[] = {20Rnd_762x51_Mag};
	picture = "\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_06\Data\UI\icon_srifle_DMR_06_black_F_X_CA.paa";
};
class Aegis_srifle_GM6B_F;
class Aegis_srifle_GM6B_sand_F;
class Aegis_srifle_GM6B_khaki_F;