/* IAF */
class O_HMG_01_F;
class O_HMG_01_A_F;
class O_HMG_01_high_F;

/* China */
class O_T_HMG_01_F: O_HMG_01_F
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
            {charging_handle_reload_begin,0},
            {charging_handle_reload_end,0},
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
		verticalOffset = 1.209;
		verticalOffsetWorld = 0.077;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_HMG_01_F.jpg";
	faction = OPF_T_F;
	crew = O_T_Soldier_F;
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] =
		{
            O_HMG_01_weapon_F,
            O_HMG_01_support_F
		};
	};
};
class O_T_HMG_01_high_F: O_HMG_01_high_F
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
            {charging_handle_reload_begin,0},
            {charging_handle_reload_end,0},
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
        verticalOffset = 1.649;
        verticalOffsetWorld = -0.012;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_HMG_01_high_F.jpg";
	faction = OPF_T_F;
	crew = O_T_Soldier_F;
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] =
		{
            O_HMG_01_high_weapon_F,
            O_HMG_01_support_high_F
		};
	};
};
class O_T_HMG_01_A_F: O_HMG_01_A_F
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
            {charging_handle_reload_begin,0},
            {charging_handle_reload_end,0},
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
		verticalOffset = 1.209;
		verticalOffsetWorld = 0.074;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_HMG_01_A_F.jpg";
	scopeArsenal = private;
	forceInGarage = false;
	faction = OPF_T_F;
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] =
		{
            O_HMG_01_A_weapon_F,
            O_HMG_01_support_F
		};
	};
};

/* Argana */
class O_A_HMG_01_F: O_HMG_01_F
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
            {charging_handle_reload_begin,0},
            {charging_handle_reload_end,0},
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
		verticalOffset = 1.209;
		verticalOffsetWorld = 0.077;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_HMG_01_F.jpg";
	faction = OPF_A_F;
	crew = O_A_soldier_F;
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] =
		{
            O_HMG_01_weapon_F,
            O_HMG_01_support_F
		};
	};
};
class O_A_HMG_01_high_F: O_HMG_01_high_F
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
            {charging_handle_reload_begin,0},
            {charging_handle_reload_end,0},
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
        verticalOffset = 1.649;
        verticalOffsetWorld = -0.012;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_HMG_01_high_F.jpg";
	faction = OPF_A_F;
	crew = O_A_soldier_F;
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] =
		{
            O_HMG_01_high_weapon_F,
            O_HMG_01_support_high_F
		};
	};
};