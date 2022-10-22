class Atlas_B_G_GMG_01_F: B_GMG_01_F
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
			{ammo_belt_rotation,0},
			{barrel_recoil,0},
			{bolt_recoil,0},
			{turret_shake,0},
			{turret_shake_backside,0},
			{turret_shake_aside,0},
			{bolt_reload_begin,0},
			{bolt_reload_end,0},
			{magazine_hide,0},
			{ammo_belt_hide,0},
			{muzzleflash,0},
			{zaslehrot,0},
			{addautonomous_unhide,0},
			{bullet001_reload_hide,1},
			{bullet002_reload_hide,1},
			{bullet003_reload_hide,1},
			{bullet004_reload_hide,1},
			{bullet005_reload_hide,1},
			{bullet006_reload_hide,1},
			{bullet007_reload_hide,1},
			{bullet008_reload_hide,1}
		};
		hide[] =
		{
			light_back,
			"brzdove svetlo",
			clan,
			"podsvit pristroju",
			poskozeni
		};
		verticalOffset = 1.191;
		verticalOffsetWorld = 0.103;
		init = "''";
	};
	editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_GMG_01_F.jpg";
	faction = Atlas_BLU_G_F;
	crew = Atlas_B_G_Soldier_F;
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] =
		{
			B_GMG_01_Weapon_grn_F,
			B_HMG_01_support_grn_F
		};
	};
};
class Atlas_B_G_GMG_01_high_F: B_GMG_01_high_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_GMG_01_high_F.jpg";
	faction = Atlas_BLU_G_F;
	crew = Atlas_B_G_Soldier_F;
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] =
		{
			B_GMG_01_high_Weapon_grn_F,
			B_HMG_01_support_high_grn_F
		};
	};
};
class Atlas_B_G_GMG_01_A_F: B_GMG_01_A_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_GMG_01_A_F.jpg";
	scopeArsenal = private;
	forceInGarage = false;
	faction = Atlas_BLU_G_F;
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] =
		{
            B_GMG_01_A_Weapon_grn_F,
            B_HMG_01_support_grn_F
		};
	};
};