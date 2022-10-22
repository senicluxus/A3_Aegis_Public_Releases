/* Russia */
class O_R_Static_AA_F: O_static_AA_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Static_AA_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_R_Static_AA_F0;
	faction = OPF_R_F;
	crew = O_R_Soldier_F;
	hiddenSelections[] =
	{
		camo_launcher,
		camo_tube
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Weapons_F_Aegis\Launchers\Titan\Data\launcher_RUcamo_CO.paa",
		"\A3_Aegis\Weapons_F_Aegis\Launchers\Titan\Data\tubeL_RUcamo_CO.paa"
	};
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] =
		{
            O_R_AA_01_weapon_F,
            O_R_HMG_01_support_F
		};
	};
};
class O_R_AA_01_weapon_F: Weapon_Bag_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	editorCategory = EdCat_Equipment;
	editorSubcategory = EdSubcat_DismantledWeapons;
	faction = OPF_R_F;
	displayName = $STR_A3_A_CfgVehicles_O_R_AA_01_weapon_F0;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_rgr_CO.paa"};
	picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_rgr_CA.paa";
	mass = 380;
	class assembleInfo: assembleInfo
	{
        displayName = $STR_A3_A_CfgVehicles_O_R_AA_01_weapon_F_assembleInfo0;
        assembleTo = O_R_Static_AA_F;
		base[] = {SUPPORT_BAGS_HMG_01};
	};
};

/* Russia (Mediterranean) */
class O_R_Static_AA_ard_F: O_R_Static_AA_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Static_AA_ard_F.jpg";
	faction = OPF_R_ard_F;
	crew = O_R_Soldier_ard_F;
};