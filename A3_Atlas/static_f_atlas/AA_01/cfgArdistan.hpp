/* Ardistan */
class Atlas_I_AR_Static_AA_F: O_R_Static_AA_F
{
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
    side = TGuerrila;
	faction = Atlas_IND_AR_F;
	crew = Atlas_I_AR_Soldier_F;
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