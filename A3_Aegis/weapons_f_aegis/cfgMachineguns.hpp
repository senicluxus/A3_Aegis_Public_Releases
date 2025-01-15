/* Machine Guns */
class LMG_Mk200_F: Rifle_Long_Base_F
{
    displayName = $STR_A3_A_CfgWeapons_LMG_Mk200_F0;
    class Library
    {
        libTextDesc = $STR_A3_A_CfgWeapons_LMG_Mk200_F_Library0;
    };
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: asdg_MuzzleSlot_65
        {
            /*compatibleItems[] =
            {
                muzzle_snds_h,
                muzzle_snds_h_khk_F,
                muzzle_snds_h_snd_F,
                muzzle_snds_65_TI_blk_F,
                muzzle_snds_65_TI_hex_F,
                muzzle_snds_65_TI_ghex_F,
                muzzle_mzls_H,
				suppressor_m_lxWS,
				suppressor_m_arid_lxWS,
				suppressor_m_khaki_lxWS,
				suppressor_m_lush_lxWS,
				suppressor_m_sand_lxWS,
				suppressor_m_snake_lxWS
            };*/
        };
    };
    class GunParticles: GunParticles
    {
        class SecondEffect
        {
            positionName = Nabojnicestart;
            directionName = Nabojniceend;
            effectName = CaselessAmmoCloud;
        };
    };
};
class LMG_Zafir_F: Rifle_Long_Base_F
{
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: asdg_MuzzleSlot_762R_PK
        {
            iconPosition[] =
            {
                0.05,   // X
                0.38    // Y
            };
            iconScale = 0.2;
        };
    };
    class Single: Mode_SemiAuto
    {
        sounds[] =
        {
            StandardSound,
            SilencedSound
        };
        reloadTime = 0.08;
    };
    class FullAuto: Mode_FullAuto
    {
        sounds[] =
        {
            StandardSound,
            SilencedSound
        };
        reloadTime = 0.08;
    };
};
class MMG_01_hex_F;
class MMG_01_tan_f;
class MMG_02_camo_F;
class MMG_02_black_F;
class LMG_Mk200_black_F: LMG_Mk200_F
{
    displayName = $STR_A3_A_CfgWeapons_LMG_Mk200_black_F0;
};
class LMG_Mk200_plain_F: LMG_Mk200_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgWeapons_LMG_Mk200_plain_F0;
	picture = "\A3_Aegis\Weapons_F_Aegis\Machineguns\M200\Data\UI\icon_LMG_Mk200_plain_F_X_CA.paa";
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Weapons_F_Aegis\Machineguns\M200\Data\1st_person_sand_CO.paa",
		"\A3_Aegis\Weapons_F_Aegis\Machineguns\M200\Data\Body_sand_CO.paa",
		"\A3\Weapons_F\Machineguns\M200\Data\grip_CO.paa"
	};
	baseWeapon = LMG_Mk200_plain_F;
};
class LMG_Mk200_khk_F: LMG_Mk200_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgWeapons_LMG_Mk200_khk_F0;
	picture = "\A3_Aegis\Weapons_F_Aegis\Machineguns\M200\Data\UI\icon_LMG_Mk200_khk_F_X_CA.paa";
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Weapons_F_Aegis\Machineguns\M200\Data\LMG_Mk200_khk_F_1_CO.paa",
		"\A3_Aegis\Weapons_F_Aegis\Machineguns\M200\Data\LMG_Mk200_khk_F_2_CO.paa",
		"\A3_Aegis\Weapons_F_Aegis\Machineguns\M200\Data\LMG_Mk200_khk_F_3_CO.paa"
	};
	baseWeapon = LMG_Mk200_khk_F;
};
class LMG_Zafir_black_F: LMG_Zafir_F
{
	author = $STR_A3_A_AveryTheKitty;
	baseWeapon = LMG_Zafir_black_F;
	displayName = $STR_A3_A_CfgWeapons_LMG_Zafir_black_F0;
	descriptionShort = $STR_A3_A_CfgWeapons_LMG_Zafir_black_F1;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Weapons_F_Aegis\Machineguns\Zafir\Data\Zafir01_black_CO.paa",
		"\A3_Aegis\Weapons_F_Aegis\Machineguns\Zafir\Data\Zafir02_black_CO.paa"
	};
	picture = "\A3_Aegis\Weapons_F_Aegis\Machineguns\Zafir\Data\UI\icon_LMG_Zafir_black_F_X_CA.paa";
};
class LMG_Zafir_ghex_F: LMG_Zafir_F
{
	author = $STR_A3_A_AveryTheKitty;
	baseWeapon = LMG_Zafir_ghex_F;
	displayName = $STR_A3_A_CfgWeapons_LMG_Zafir_ghex_F0;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Weapons_F_Aegis\Machineguns\Zafir\Data\LMG_Zafir_ghex_F_1_CO.paa",
		"\A3_Aegis\Weapons_F_Aegis\Machineguns\Zafir\Data\LMG_Zafir_ghex_F_2_CO.paa"
	};
	picture = "\A3_Aegis\Weapons_F_Aegis\Machineguns\Zafir\Data\UI\icon_LMG_Zafir_ghex_F_X_CA.paa";
};
class MMG_01_black_F: MMG_01_hex_F
{
	author = $STR_A3_A_AveryTheKitty;
	baseWeapon = MMG_01_black_F;
	displayName = $STR_A3_A_CfgWeapons_MMG_01_black_F0;
	picture = "\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_01\Data\UI\icon_MMG_01_black_F_X_CA.paa";
	UIPicture = "\A3\Weapons_F\Data\UI\icon_MG_CA.paa";
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_01_black_CO.paa",
		"\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_02_black_CO.paa",
		"\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_03_black_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_01_black.rvmat",
		"\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_02_black.rvmat",
		"\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_03_black.rvmat"
	};
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_02_F_blk;
		};
	};
};
class MMG_01_ghex_F: MMG_01_hex_F
{
	author = $STR_A3_A_AveryTheKitty;
	baseWeapon = MMG_01_ghex_F;
	displayName = $STR_A3_A_CfgWeapons_MMG_01_ghex_F0;
	picture = "\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_01\Data\UI\icon_MMG_01_ghex_F_X_CA.paa";
	UIPicture = "\A3\Weapons_F\Data\UI\icon_MG_CA.paa";
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_01_ghex_CO.paa",
		"\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_02_ghex_CO.paa",
		"\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_03_ghex_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_01_ghex.rvmat",
		"\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_02_ghex.rvmat",
		"\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_01\Data\MMG_01_03_ghex.rvmat"
	};
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_02_F_hex;
		};
	};
};
class MMG_02_khaki_F: MMG_02_black_F
{
	author = $STR_A3_A_AveryTheKitty;
	baseWeapon = MMG_02_khaki_F;
	displayName = $STR_A3_A_CfgWeapons_MMG_02_khaki_F0;
	picture = "\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_02\Data\UI\icon_MMG_02_khaki_F_X_CA.paa";
	UIPicture = "\A3\Weapons_F\Data\UI\icon_MG_CA.paa";
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_02\Data\MMG_02_01_khaki_CO.paa",
		"\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_02\Data\MMG_02_02_khaki_CO.paa",
		"\A3_Aegis\Weapons_F_Aegis\Machineguns\MMG_02\Data\MMG_02_03_khaki_CO.paa"
	};
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_01_F_khk;
		};
	};
};

/* Western Sahara SA-77s */
class LMG_S77_LxWS;
class LMG_S77_AAF_LxWS;
class LMG_S77_Desert_LxWS;
class LMG_S77_GHex_LxWS;
class LMG_S77_Hex_LxWS;
class LMG_S77_Compact_LxWS;
class LMG_S77_Compact_Snakeskin_LxWS;