class Box_Marar_Wps_F: Box_East_Wps_F
{
	author = $STR_A3_A_Ravenholme;
	mapSize = 1.23;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Box_Marar_Wps_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_Marar_Wps_F0;
	icon = iconCrateWpns;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_Marar;
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag_red,8);
		mag_xx(200Rnd_556x45_Box_Red_F,2);
		mag_xx(20Rnd_762x51_Mag,2);
	};
	class TransportWeapons
	{
        weap_xx(arifle_MK20_plain_F,4);
        weap_xx(arifle_MK20_GL_plain_F,2);
        weap_xx(arifle_MK20C_plain_F,2);
		weap_xx(LMG_03_snd_F,2);
		weap_xx(arifle_SCAR_F,2);
	};
	class TransportItems{};
};
class Box_Marar_Ammo_F: Box_East_Ammo_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Box_Marar_Ammo_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_Marar_Ammo_F0;
	icon = iconCrateAmmo;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_Marar;
	maximumLoad = 1000;
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag_red,48);
		mag_xx(200Rnd_556x45_Box_Red_F,8);
		mag_xx(20Rnd_762x51_Mag,8);
	};
	class TransportWeapons{};
	class TransportItems{};
};
class Box_Marar_WpsLaunch_F: Box_East_WpsLaunch_F
{
	author = $STR_A3_A_Ravenholme;
	mapSize = 1.76;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Box_Marar_WpsLaunch_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_Marar_WpsLaunch_F0;
	icon = iconCrateLong;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_Marar;
	class TransportMagazines
	{
		mag_xx(DemoCharge_Remote_Mag,5);
		mag_xx(APERSMine_Range_Mag,3);
		mag_xx(MiniGrenade,5);
		mag_xx(HandGrenade_East,5);
		mag_xx(MRAWS_HEAT55_F,3);
		mag_xx(MRAWS_HE_F,3);
		mag_xx(Titan_AA,3);
		mag_xx(Titan_AT,3);
		mag_xx(Titan_AP,3);
	};
	class TransportWeapons
	{
		weap_xx(launch_MRAWS_sand_rail_F,2);
		weap_xx(launch_B_Titan_F,1);
		weap_xx(launch_B_Titan_short_F,1);
	};
	class TransportItems{};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_marar,4);
	};
};
class Atlas_B_M_supplyCrate_F: O_supplyCrate_F
{
	author = $STR_A3_A_Ravenholme;
	class SimpleObject
	{
		eden = true;
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.892;
		verticalOffsetWorld = 0;
		init = "''";
	};
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_M_supplyCrate_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_B_M_supplyCrate_F0;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Supplydrop_CO.paa"};
    editorSubcategory = EdSubcat_Ammo_Marar;
	class TransportMagazines
	{
		mag_xx(40Rnd_460x30_Mag_F,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(30Rnd_556x45_Stanag_red,24);
		mag_xx(30Rnd_556x45_AUG_Mag_Green_F,8);
		mag_xx(20Rnd_762x51_Mag,6);
		mag_xx(17Rnd_9x21_Mag,2);
		mag_xx(chemlight_green,2);
		mag_xx(B_IR_Grenade,2);
		mag_xx(Laserbatteries,1);
		mag_xx(UGL_FlareGreen_F,2);
		mag_xx(UGL_FlareWhite_F,2);
		mag_xx(MRAWS_Heat55_F,3);
		mag_xx(MRAWS_HE_F,3);
		mag_xx(MiniGrenade,6);
		mag_xx(HandGrenade_East,6);
		mag_xx(SmokeShellGreen,2);
		mag_xx(SmokeShell,2);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MK20_plain_F,2);
		weap_xx(arifle_MK20_GL_plain_F,1);
		weap_xx(arifle_MK20C_plain_F,1);
		weap_xx(LMG_03_snd_F,1);
		weap_xx(arifle_SCAR_F,1);
		weap_xx(launch_MRAWS_sand_rail_F,1);
	};
	class TransportItems
	{
		item_xx(bipod_01_F_blk,2);
		item_xx(FirstAidKit,10);
		item_xx(acc_flashlight,5);
		item_xx(acc_pointer_IR,5);
		item_xx(Laserdesignator,1);
		item_xx(Binocular,1);
		item_xx(Medikit,1);
		item_xx(MineDetector,1);
		item_xx(ToolKit,1);
		item_xx(optic_Holosight,2);
		item_xx(optic_Arco_blk_F,2);
		item_xx(optic_AMS,2);
		item_xx(Rangefinder,1);
		item_xx(NVGoggles,5);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_marar,2);
	};
};