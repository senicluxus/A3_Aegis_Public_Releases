class Box_ADF_Wps_F: Box_NATO_Wps_F
{
	author = $STR_A3_A_Ravenholme;
	mapSize = 1.23;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Box_ADF_Wps_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_ADF_Wps_F0;
	icon = iconCrateWpns;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_ADF;
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_AUG_Mag_F,8);
		mag_xx(200Rnd_556x45_Box_Red_F,2);
		mag_xx(20Rnd_762x51_Mag,2);
	};
	class TransportWeapons
	{
        weap_xx(arifle_AUG_F,4);
        weap_xx(arifle_AUG_GL_F,2);
        weap_xx(arifle_AUG_C_F,2);
		weap_xx(LMG_03_F,2);
		weap_xx(srifle_EBR_blk_F,2);
	};
	class TransportItems{};
};
class Box_ADF_Ammo_F: Box_NATO_Ammo_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Box_ADF_Ammo_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_ADF_Ammo_F0;
	icon = iconCrateAmmo;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_ADF;
	maximumLoad = 1000;
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_AUG_Mag_F,48);
		mag_xx(200Rnd_556x45_Box_Red_F,8);
		mag_xx(20Rnd_762x51_Mag,6);
	};
	class TransportWeapons{};
	class TransportItems{};
};
class Box_ADF_WpsLaunch_F: Box_NATO_WpsLaunch_F
{
	author = $STR_A3_A_Ravenholme;
	mapSize = 1.76;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Box_ADF_WpsLaunch_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_ADF_WpsLaunch_F0;
	icon = iconCrateLong;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_ADF;
	class TransportMagazines
	{
		mag_xx(DemoCharge_Remote_Mag,5);
		mag_xx(APERSMine_Range_Mag,3);
		mag_xx(MiniGrenade,5);
		mag_xx(HandGrenade,5);
		mag_xx(MRAWS_HEAT_F,3);
		mag_xx(MRAWS_HE_F,3);
		mag_xx(Titan_AA,3);
		mag_xx(Titan_AT,3);
		mag_xx(Titan_AP,3);
	};
	class TransportWeapons
	{
		weap_xx(launch_MRAWS_coyote_F,2);
		weap_xx(launch_B_Titan_coyote_F,1);
		weap_xx(launch_O_Titan_short_F,1);
	};
	class TransportItems{};
	class TransportBackpacks
	{
		bag_xx(B_Kitbag_aucamo_F,4);
	};
};
class Atlas_B_A_supplyCrate_F: O_supplyCrate_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_supplyCrate_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_B_A_supplyCrate_F0;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Supplydrop_CO.paa"};
    editorSubcategory = EdSubcat_Ammo_ADF;
	class TransportMagazines
	{
		mag_xx(30Rnd_9x21_Mag_v2,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(30Rnd_556x45_AUG_Mag_F,32);
		mag_xx(20Rnd_762x51_Mag,6);
		mag_xx(16Rnd_9x21_Mag_v2,2);
		mag_xx(chemlight_red,2);
		mag_xx(B_IR_Grenade,2);
		mag_xx(Laserbatteries,1);
		mag_xx(UGL_FlareWhite_F,2);
		mag_xx(UGL_FlareGreen_F,2);
		mag_xx(MRAWS_HEAT_F,3);
		mag_xx(MRAWS_HE_F,3);
		mag_xx(MiniGrenade,6);
		mag_xx(HandGrenade,6);
		mag_xx(SmokeShellGreen,2);
		mag_xx(SmokeShell,2);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AUG_F,2);
		weap_xx(arifle_AUG_GL_F,1);
		weap_xx(arifle_AUG_C_F,1);
		weap_xx(LMG_03_F,1);
		weap_xx(srifle_EBR_blk_F,1);
		weap_xx(launch_MRAWS_coyote_F,1);
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
		item_xx(optic_MRCO,2);
		item_xx(optic_AMS,2);
		item_xx(Rangefinder,1);
		item_xx(NVGoggles,5);
	};
	class TransportBackpacks
	{
		bag_xx(B_Kitbag_aucamo_F,2);
	};
};