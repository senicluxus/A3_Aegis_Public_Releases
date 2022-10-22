class Atlas_I_I_Static_AT_F: I_static_AT_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Static_AT_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_I_I_Static_AT_F0;
	faction = Atlas_IND_I_F;
	crew = Atlas_I_I_Soldier_F;
	hiddenSelections[] =
	{
		camo_launcher,
		camo_tube
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_CO.paa",
		"\A3\Weapons_F_Beta\Launchers\Titan\Data\TubeM_CO.paa"
	};
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] =
		{
            Atlas_I_I_AT_01_weapon_F,
            Atlas_I_I_HMG_01_support_F
		};
	};
};
class Atlas_I_I_AT_01_weapon_F: Weapon_Bag_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	editorCategory = EdCat_Equipment;
	editorSubcategory = EdSubcat_DismantledWeapons;
	faction = Atlas_IND_I_F;
	displayName = $STR_A3_A_CfgVehicles_I_I_AT_01_weapon_F0;
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_rgr_CO.paa"};
	picture = "\A3\Weapons_F\Ammoboxes\Bags\Data\UI\icon_B_C_Small_rgr.paa";
	mass = 380;
	class assembleInfo: assembleInfo
	{
        displayName = $STR_A3_A_CfgVehicles_I_I_AT_01_weapon_F_assembleInfo0;
        assembleTo = Atlas_I_I_Static_AT_F;
        base[] = {STATIC_SUPPORT_BAGS};
	};
};