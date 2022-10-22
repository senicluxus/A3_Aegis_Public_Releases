class Box_TKM_Wps_F: ReammoBox_F
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
	//editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Box_TKM_Wps_F.jpg";
	scope = public;
	displayName = $STR_A3_O_CfgVehicles_Box_TKM_Wps_F0;
	model = "\A3\Weapons_F\Ammoboxes\Proxy_UsBasicWeaponBox.p3d";
	icon = iconCrateWpns;
	editorCategory = EdCat_Supplies;
	editorSubcategory = EdSubcat_Ammo_Insurgents;
	class TransportMagazines
	{
		mag_xx(30Rnd_762x39_Mag_F,6);
		mag_xx(30Rnd_65x39_caseless_green,6);
		mag_xx(30Rnd_545x39_Mag_F,6);
		mag_xx(75Rnd_762x39_Mag_F,2);
		mag_xx(10Rnd_Mk14_762x51_Mag,2);
		mag_xx(10Rnd_9x21_Mag,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AKM_F,2);
		weap_xx(arifle_AKS_F,2);
		weap_xx(arifle_RPK_F,2);
		weap_xx(arifle_Katiba_F,1);
		weap_xx(arifle_Katiba_GL_F,2);
		weap_xx(arifle_Katiba_C_F,1);
		weap_xx(srifle_DMR_06_hunter_F,2);
		weap_xx(hgun_Pistol_01_F,2);
	};
	class TransportItems
	{
		item_xx(V_BandollierB_khk,6);
	};
};
class Box_TKM_Ammo_F: ReammoBox_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.21;
		verticalOffsetWorld = 0;
	};
	//editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Box_TKM_Ammo_F.jpg";
	scope = public;
	displayName = $STR_A3_O_CfgVehicles_Box_TKM_Ammo_F0;
	model = "\A3\Weapons_F\Ammoboxes\Proxy_UsBasicAmmoBox.p3d";
	icon = iconCrateAmmo;
	editorCategory = EdCat_Supplies;
	editorSubcategory = EdSubcat_Ammo_Insurgents;
	maximumLoad = 1000;
	class TransportMagazines
	{
		mag_xx(30Rnd_762x39_Mag_F,24);
		mag_xx(30Rnd_65x39_caseless_green,24);
		mag_xx(30Rnd_545x39_Mag_F,12);
		mag_xx(75Rnd_762x39_Mag_F,16);
		mag_xx(10Rnd_Mk14_762x51_Mag,12);
		mag_xx(10Rnd_9x21_Mag,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(RPG7_F,1);
		mag_xx(HandGrenade_Guer,12);
	};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(V_Pocketed_wdl_F,6);
	};
};
class Box_TKM_WpsLaunch_F: ReammoBox_F
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
	//editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Box_TKM_WpsLaunch_F.jpg";
	scope = public;
	displayName = $STR_A3_O_CfgVehicles_Box_TKM_WpsLaunch_F0;
	model = "\A3\Weapons_F\Ammoboxes\Proxy_UsLouncherBox.p3d";
	icon = iconCrateLong;
	editorCategory = EdCat_Supplies;
	editorSubcategory = EdSubcat_Ammo_Insurgents;
	class TransportMagazines
	{
		mag_xx(RPG7_F,15);
		mag_xx(DemoCharge_Remote_Mag,5);
		mag_xx(SatchelCharge_Remote_Mag,5);
		mag_xx(APERSTripMine_Wire_Mag,5);
		mag_xx(APERSMine_Range_Mag,5);
	};
	class TransportWeapons
	{
		weap_xx(launch_RPG7_F,3);
	};
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_cbr,3);
	};
};