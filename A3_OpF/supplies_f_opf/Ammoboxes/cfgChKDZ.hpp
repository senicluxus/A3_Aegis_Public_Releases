class Box_ChDKZ_Wps_F: ReammoBox_F
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
	//editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Box_ChDKZ_Wps_F.jpg";
	scope = public;
	displayName = $STR_A3_O_CfgVehicles_Box_ChDKZ_Wps_F0;
	model = "\A3\Weapons_F\Ammoboxes\Ammobox.p3d";
	icon = iconCrateWpns;
	editorCategory = EdCat_Supplies;
	editorSubcategory = EdSubcat_Ammo_Separatists;
	class TransportMagazines
	{
		mag_xx(30Rnd_762x39_Mag_Green_F,6);
		mag_xx(30Rnd_545x39_Mag_Green_F,6);
		mag_xx(75Rnd_762x39_Mag_F,2);
		//mag_xx(30Rnd_762x39_SKS_Mag_F,2);
		mag_xx(30Rnd_545x39_AK12_Mag_F,2);
		mag_xx(10Rnd_762x54_Mag,6);
		mag_xx(10Rnd_9x21_Mag,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AKM_F,2);
		weap_xx(arifle_AKS_F,2);
		weap_xx(arifle_RPK_F,2);
		//weap_xx(arifle_SKS_F,2);
		weap_xx(arifle_AK12_545_F,1);
		weap_xx(arifle_AK12_GL_545_F,1);
		weap_xx(srifle_DMR_01_black_F,2);
		weap_xx(hgun_Pistol_01_F,2);
	};
	class TransportItems
	{
		item_xx(V_BandollierB_taiga_F,6);
	};
};
class Box_ChDKZ_Ammo_F: ReammoBox_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.21;
		verticalOffsetWorld = 0;
	};
	//editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Box_ChDKZ_Ammo_F.jpg";
	scope = public;
	displayName = $STR_A3_O_CfgVehicles_Box_ChDKZ_Ammo_F0;
	model = "\A3\Weapons_F\Ammoboxes\Ammobox.p3d";
	icon = iconCrateAmmo;
	editorCategory = EdCat_Supplies;
	editorSubcategory = EdSubcat_Ammo_Separatists;
	maximumLoad = 1000;
	class TransportMagazines
	{
		mag_xx(30Rnd_762x39_Mag_Green_F,24);
		mag_xx(30Rnd_545x39_Mag_Green_F,12);
		mag_xx(75Rnd_762x39_Mag_F,16);
		//mag_xx(30Rnd_762x39_SKS_Mag_F,12);
		mag_xx(30Rnd_545x39_AK12_Mag_F,12);
		mag_xx(10Rnd_762x54_Mag,12);
		mag_xx(10Rnd_9x21_Mag,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(RPG32_F,1);
		mag_xx(HandGrenade_Guer,12);
	};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(V_TacChestrig_oli_F,6);
	};
};
class Box_ChDKZ_WpsLaunch_F: ReammoBox_F
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
	//editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Box_ChDKZ_WpsLaunch_F.jpg";
	scope = public;
	displayName = $STR_A3_O_CfgVehicles_Box_ChDKZ_WpsLaunch_F0;
	model = "\A3\Weapons_F\Ammoboxes\Ammobox.p3d";
	icon = iconCrateLong;
	editorCategory = EdCat_Supplies;
	editorSubcategory = EdSubcat_Ammo_Separatists;
	class TransportMagazines
	{
		mag_xx(RPG32_F,10);
		mag_xx(RPG32_HE_F,5);
		mag_xx(DemoCharge_Remote_Mag,5);
		mag_xx(SatchelCharge_Remote_Mag,5);
		mag_xx(APERSTripMine_Wire_Mag,5);
		mag_xx(APERSMine_Range_Mag,5);
	};
	class TransportWeapons
	{
		weap_xx(launch_RPG32_camo_F,3);
	};
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_green_F,3);
	};
};