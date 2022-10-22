class Atlas_B_L_Static_AA_F: B_static_AA_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_L_Static_AA_F.jpg";
	faction = Atlas_BLU_L_F;
	crew = Atlas_B_L_Soldier_F;
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