/* SMGs */
class pdw2000_base_F: Rifle_Short_Base_F
{
    magazines[] =
    {
        30Rnd_9x21_Mag_v2,
        30Rnd_9x21_Red_Mag_v2,
        30Rnd_9x21_Yellow_Mag_v2,
        30Rnd_9x21_Green_Mag_v2,
        // Compatibility classes, these are hidden
        30Rnd_9x21_Mag,
        30Rnd_9x21_Red_Mag,
        30Rnd_9x21_Yellow_Mag,
        30Rnd_9x21_Green_Mag,
        16Rnd_9x21_Mag,
        16Rnd_9x21_Red_Mag,
        16Rnd_9x21_Yellow_Mag,
        16Rnd_9x21_Green_Mag
    };
    modes[] =
    {
        Single,
        FullAuto
    };
};
class hgun_PDW2000_F;
class hgun_PDW2000_Holo_F: hgun_PDW2000_F
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            item = optic_Holosight_smg_blk_F;
        };
    };
};
class hgun_PDW2000_Holo_snds_F: hgun_PDW2000_F
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            item = optic_Holosight_smg_blk_F;
        };
    };
};
class SMG_01_F;
class SMG_02_F;
class SMG_05_F;
class SMG_01_black_F: SMG_01_F
{
	author = $STR_A3_A_AveryTheKitty;
	baseWeapon = SMG_01_black_F;
	displayName = $STR_A3_A_CfgWeapons_SMG_01_black_F0;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_01\Data\SMG_01_black_CO.paa",
		"\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_01\Data\Vectoratt_black_CO.paa",
		"\A3\Weapons_F\Acc\Data\battlesight_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_01\Data\SMG_01_black.rvmat",
		"\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_01\Data\Vectoratt_black.rvmat",
		"\A3\Weapons_F\Acc\Data\battlesight.rvmat"
	};
	picture = "\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_01\Data\UI\icon_SMG_01_black_F_X_CA.paa";
};
class SMG_01_khk_F: SMG_01_F
{
	author = $STR_A3_A_AveryTheKitty;
	baseWeapon = SMG_01_khk_F;
	displayName = $STR_A3_A_CfgWeapons_SMG_01_khk_F0;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_01\Data\SMG_01_khk_F_1_CO.paa",
		"\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_01\Data\SMG_01_khk_F_2_CO.paa",
		"\A3\Weapons_F\Acc\Data\battlesight_CO.paa"
	};
	picture = "\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_01\Data\UI\icon_SMG_01_khk_F_X_CA.paa";
};