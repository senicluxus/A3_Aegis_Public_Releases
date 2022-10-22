/* US */
class B_static_AA_F: AA_01_base_F
{
    displayName = $STR_A3_A_CfgVehicles_B_static_AA_F0;
};
class B_AA_01_weapon_F: Weapon_Bag_Base
{
    hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_mcamo_CO.paa"};
    class assembleInfo: assembleInfo
    {
        base[] = {SUPPORT_BAGS_HMG_01};
    };
};

/* US (Pacific) */
class B_T_Static_AA_F: B_static_AA_F
{
    class assembleInfo
    {
        displayName = "";
        assembleTo = "";
        base = "";
        primary = false;
        dissasembleTo[] =
        {
            B_AA_01_Weapon_grn_F,
            B_HMG_01_support_grn_F
        };
    };
};
class B_AA_01_Weapon_grn_F: Weapon_Bag_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	editorCategory = EdCat_Equipment;
	editorSubcategory = EdSubcat_DismantledWeapons;
	faction = BLU_T_F;
	displayName = $STR_A3_A_CfgVehicles_B_AA_01_Weapon_grn_F0;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_rgr_CO.paa"};
	picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_rgr_CA.paa";
	mass = 380;
	class assembleInfo: assembleInfo
	{
		displayName = $STR_A3_A_CfgVehicles_B_AA_01_Weapon_grn_F_assembleInfo0;
		assembleTo = B_T_Static_AA_F;
		base[] = {SUPPORT_BAGS_HMG_01};
	};
};

/* US (Woodland) */
class B_W_Static_AA_F: B_static_AA_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
            {mainturret,0},
            {maingun,0},
            {mainturret_destructx,0},
            {mainturret_destructy,0},
            {mainturret_destructz,0},
            {maingun_destructx,0},
            {maingun_destructy,0},
            {maingun_destructz,0},
            {magazine_destruct,0},
            {ammo_belt_destruct,0},
            {bolt_destruct,0},
            {charging_handle_destruct,0},
            {damagehidevez_destruct,0},
            {damagehidehlaven_destruct,0},
            {damagehiderecoil_destruct,0},
            {turret_shake,0},
            {turret_shake_aside,0},
            {magazine_hide,0},
            {ammo_belt_hide,0},
            {muzzleflash,0},
            {addautonomous_unhide,0},
            {bullet001_reload_hide,0},
            {bullet002_reload_hide,0},
            {bullet003_reload_hide,0},
            {bullet004_reload_hide,0},
            {bullet005_reload_hide,0},
            {bullet006_reload_hide,0},
            {bullet007_reload_hide,0},
            {bullet008_reload_hide,0}
		};
		hide[] =
		{
            light_back,
            "brzdove svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 0.988;
		verticalOffsetWorld = 0.005;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Static_AA_F.jpg";
	faction = BLU_W_F;
	crew = B_W_Soldier_F;
	hiddenSelections[] =
	{
		camo_launcher,
		camo_tube
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_INDP_CO.paa",
		"\A3\Weapons_F_Enoch\Launchers\Titan\Data\launch_B_Titan_olive_F_02_CO.paa"
	};
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] =
		{
            B_AA_01_Weapon_grn_F,
            B_HMG_01_support_grn_F
		};
	};
};

/* BAF */
class B_A_Static_AA_F: B_static_AA_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
            {mainturret,0},
            {maingun,0},
            {mainturret_destructx,0},
            {mainturret_destructy,0},
            {mainturret_destructz,0},
            {maingun_destructx,0},
            {maingun_destructy,0},
            {maingun_destructz,0},
            {magazine_destruct,0},
            {ammo_belt_destruct,0},
            {bolt_destruct,0},
            {charging_handle_destruct,0},
            {damagehidevez_destruct,0},
            {damagehidehlaven_destruct,0},
            {damagehiderecoil_destruct,0},
            {turret_shake,0},
            {turret_shake_aside,0},
            {magazine_hide,0},
            {ammo_belt_hide,0},
            {muzzleflash,0},
            {addautonomous_unhide,0},
            {bullet001_reload_hide,0},
            {bullet002_reload_hide,0},
            {bullet003_reload_hide,0},
            {bullet004_reload_hide,0},
            {bullet005_reload_hide,0},
            {bullet006_reload_hide,0},
            {bullet007_reload_hide,0},
            {bullet008_reload_hide,0}
		};
		hide[] =
		{
            light_back,
            "brzdove svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 0.988;
		verticalOffsetWorld = 0.005;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Static_AA_F.jpg";
	faction = BLU_A_F;
	crew = B_A_Soldier_F;
	hiddenSelections[] =
	{
		camo_launcher,
		camo_tube
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_CO.paa",
		"\A3\Weapons_F_Beta\Launchers\Titan\Data\TubeL_CO.paa"
	};
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] =
		{
            B_AA_01_weapon_F,
            B_HMG_01_support_F
		};
	};
};

/* BAF (Pacific) */
class B_A_Static_AA_tna_F: B_A_Static_AA_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
            {mainturret,0},
            {maingun,0},
            {mainturret_destructx,0},
            {mainturret_destructy,0},
            {mainturret_destructz,0},
            {maingun_destructx,0},
            {maingun_destructy,0},
            {maingun_destructz,0},
            {magazine_destruct,0},
            {ammo_belt_destruct,0},
            {bolt_destruct,0},
            {charging_handle_destruct,0},
            {damagehidevez_destruct,0},
            {damagehidehlaven_destruct,0},
            {damagehiderecoil_destruct,0},
            {turret_shake,0},
            {turret_shake_aside,0},
            {magazine_hide,0},
            {ammo_belt_hide,0},
            {muzzleflash,0},
            {addautonomous_unhide,0},
            {bullet001_reload_hide,0},
            {bullet002_reload_hide,0},
            {bullet003_reload_hide,0},
            {bullet004_reload_hide,0},
            {bullet005_reload_hide,0},
            {bullet006_reload_hide,0},
            {bullet007_reload_hide,0},
            {bullet008_reload_hide,0}
		};
		hide[] =
		{
            light_back,
            "brzdove svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 0.988;
		verticalOffsetWorld = 0.005;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Static_AA_tna_F.jpg";
	faction = BLU_A_tna_F;
	crew = B_A_Soldier_tna_F;
	hiddenSelectionsTextures[] =
	{
		"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_B_Titan_tna_F_01_CO.paa",
		"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_B_Titan_tna_F_02_CO.paa"
	};
	class assembleInfo: assembleInfo
	{
		dissasembleTo[] =
		{
            B_AA_01_Weapon_grn_F,
            B_HMG_01_support_grn_F
		};
	};
};

/* BAF (Woodland) */
class B_A_Static_AA_wdl_F: B_A_Static_AA_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
            {mainturret,0},
            {maingun,0},
            {mainturret_destructx,0},
            {mainturret_destructy,0},
            {mainturret_destructz,0},
            {maingun_destructx,0},
            {maingun_destructy,0},
            {maingun_destructz,0},
            {magazine_destruct,0},
            {ammo_belt_destruct,0},
            {bolt_destruct,0},
            {charging_handle_destruct,0},
            {damagehidevez_destruct,0},
            {damagehidehlaven_destruct,0},
            {damagehiderecoil_destruct,0},
            {turret_shake,0},
            {turret_shake_aside,0},
            {magazine_hide,0},
            {ammo_belt_hide,0},
            {muzzleflash,0},
            {addautonomous_unhide,0},
            {bullet001_reload_hide,0},
            {bullet002_reload_hide,0},
            {bullet003_reload_hide,0},
            {bullet004_reload_hide,0},
            {bullet005_reload_hide,0},
            {bullet006_reload_hide,0},
            {bullet007_reload_hide,0},
            {bullet008_reload_hide,0}
		};
		hide[] =
		{
            light_back,
            "brzdove svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 0.988;
		verticalOffsetWorld = 0.005;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Static_AA_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	crew = B_A_Soldier_wdl_F;
	hiddenSelectionsTextures[] =
	{
		"\A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_INDP_CO.paa",
		"\A3\Weapons_F_Enoch\Launchers\Titan\Data\launch_B_Titan_olive_F_02_CO.paa"
	};
	class assembleInfo: assembleInfo
	{
		dissasembleTo[] =
		{
            B_AA_01_Weapon_grn_F,
            B_HMG_01_support_grn_F
		};
	};
};