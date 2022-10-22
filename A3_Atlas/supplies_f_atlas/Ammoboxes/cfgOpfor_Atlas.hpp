class Box_TKA_Wps_F: ReammoBox_F
{
	author = $STR_A3_A_AveryTheKitty;
	mapSize = 1.23;
	class SimpleObject
	{
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.07;
		verticalOffsetWorld = 0;
	};
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Box_TKA_Wps_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_TKA_Wps_F0;
	model = "\A3\Weapons_F\Ammoboxes\Proxy_UsBasicWeaponBox.p3d";
	icon = iconCrateWpns;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_CSAT_Takistani;
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_AUG_Mag_Green_F,8);
		mag_xx(75Rnd_762x39_Mag_Green_F,2);
		mag_xx(10Rnd_762x54_Mag,2);
	};
	class TransportWeapons
	{
        weap_xx(arifle_AUG_black_F,4);
        weap_xx(arifle_AUG_GL_black_F,2);
        weap_xx(arifle_AUG_C_black_F,2);
		weap_xx(arifle_RPK_F,2);
		weap_xx(srifle_DMR_01_F,2);
	};
	class TransportItems{};
};
class Box_TKA_Ammo_F: ReammoBox_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.21;
		verticalOffsetWorld = 0;
	};
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Box_TKA_Ammo_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_TKA_Ammo_F0;
	model = "\A3\Weapons_F\Ammoboxes\Proxy_UsBasicAmmoBox.p3d";
	icon = iconCrateAmmo;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_CSAT_Takistani;
	maximumLoad = 1000;
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_AUG_Mag_Green_F,48);
		mag_xx(75Rnd_762x39_Mag_Green_F,16);
		mag_xx(10Rnd_762x54_Mag,12);
	};
	class TransportWeapons{};
	class TransportItems{};
};
class Box_TKA_WpsLaunch_F: ReammoBox_F
{
	author = $STR_A3_A_AveryTheKitty;
	mapSize = 1.76;
	class SimpleObject
	{
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.18;
		verticalOffsetWorld = 0;
	};
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Box_TKA_WpsLaunch_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_TKA_WpsLaunch_F0;
	model = "\A3\Weapons_F\Ammoboxes\Proxy_UsLouncherBox.p3d";
	icon = iconCrateLong;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_CSAT_Takistani;
	class TransportMagazines
	{
		mag_xx(DemoCharge_Remote_Mag,5);
		mag_xx(APERSMine_Range_Mag,3);
		mag_xx(MiniGrenade,5);
		mag_xx(HandGrenade_Guer,5);
		mag_xx(RPG32_F,3);
		mag_xx(RPG32_HE_F,3);
		mag_xx(Titan_AA,3);
		mag_xx(Titan_AT,3);
		mag_xx(Titan_AP,3);
	};
	class TransportWeapons
	{
		weap_xx(launch_RPG32_F,2);
		weap_xx(launch_O_Titan_F,1);
		weap_xx(launch_O_Titan_short_F,1);
	};
	class TransportItems{};
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_semiarid,4);
	};
};
class Atlas_O_T_supplyCrate_F: O_supplyCrate_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.892;
		verticalOffsetWorld = 0;
		init = "''";
	};
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_supplyCrate_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_O_TKA_supplyCrate_F0;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Supplydrop_OPFOR_CO.paa"};
    editorSubcategory = EdSubcat_Ammo_CSAT_Takistani;
	class TransportMagazines
	{
		mag_xx(30Rnd_9x21_Mag,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(30Rnd_545x39_AK12_Mag_F,24);
		mag_xx(30Rnd_556x45_AUG_Mag_Green_F,8);
		mag_xx(10Rnd_762x54_Mag,6);
		mag_xx(10Rnd_9x21_Mag,2);
		mag_xx(chemlight_red,2);
		mag_xx(O_IR_Grenade,2);
		mag_xx(Laserbatteries,1);
		mag_xx(UGL_FlareRed_F,2);
		mag_xx(UGL_FlareYellow_F,2);
		mag_xx(RPG32_F,3);
		mag_xx(RPG32_HE_F,3);
		mag_xx(MiniGrenade,6);
		mag_xx(HandGrenade_Guer,6);
		mag_xx(SmokeShellRed,2);
		mag_xx(SmokeShell,2);
		mag_xx(1Rnd_SmokeRed_Grenade_shell,2);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AUG_black_F,2);
		weap_xx(arifle_AUG_GL_black_F,1);
		weap_xx(arifle_AUG_C_black_F,1);
		weap_xx(arifle_RPK_F,1);
		weap_xx(srifle_DMR_01_F,1);
		weap_xx(launch_RPG32_F,1);
	};
	class TransportItems
	{
		item_xx(bipod_02_F_blk,2);
		item_xx(FirstAidKit,10);
		item_xx(acc_flashlight,5);
		item_xx(acc_pointer_IR,5);
		item_xx(Laserdesignator_02,1);
		item_xx(Binocular,1);
		item_xx(Medikit,1);
		item_xx(MineDetector,1);
		item_xx(ToolKit,1);
		item_xx(optic_ACO_grn,2);
		item_xx(optic_Arco_blk_F,2);
		item_xx(optic_DMS,2);
		item_xx(Rangefinder,1);
		item_xx(NVGoggles_OPFOR,5);
	};
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_semiarid,2);
	};
};