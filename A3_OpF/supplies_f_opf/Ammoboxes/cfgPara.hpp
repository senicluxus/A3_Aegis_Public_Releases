class Box_Para_Wps_F: ReammoBox_F
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
	//editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Box_Para_Wps_F.jpg";
	scope = public;
	displayName = $STR_A3_O_CfgVehicles_Box_Para_Wps_F0;
	model = "\A3\Weapons_F\Ammoboxes\Ammobox.p3d";
	icon = iconCrateWpns;
	editorCategory = EdCat_Supplies;
	editorSubcategory = EdSubcat_Ammo_Paramilitary;
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_green,12);
		mag_xx(30Rnd_556x45_Stanag_green,12);
		mag_xx(150Rnd_762x54_Box,2);
		mag_xx(30Rnd_9x21_Mag_SMG_02_Tracer_Green,6);
		mag_xx(10Rnd_Mk14_762x51_Mag,6);
		mag_xx(17Rnd_9x21_Mag,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_Katiba_F,2);
		weap_xx(arifle_Katiba_GL_F,1);
		weap_xx(arifle_Katiba_C_F,1);
		weap_xx(arifle_TRG21_black_F,2);
		weap_xx(arifle_TRG20_black_F,1);
		weap_xx(arifle_TRG21_GL_black_F,1);
		weap_xx(LMG_Zafir_F,2);
		weap_xx(SMG_02_F,2);
		weap_xx(srifle_DMR_06_hunter_F,2);
		weap_xx(hgun_Rook40_F,2);
	};
	class TransportItems
	{
		item_xx(V_TacVest_gry,6);
	};
};
class Box_Para_Ammo_F: ReammoBox_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.21;
		verticalOffsetWorld = 0;
	};
	//editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Box_Para_Ammo_F.jpg";
	scope = public;
	displayName = $STR_A3_O_CfgVehicles_Box_Para_Ammo_F0;
	model = "\A3\Weapons_F\Ammoboxes\Ammobox.p3d";
	icon = iconCrateAmmo;
	editorCategory = EdCat_Supplies;
	editorSubcategory = EdSubcat_Ammo_Paramilitary;
	maximumLoad = 1000;
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_green,24);
		mag_xx(30Rnd_556x45_Stanag_green,24);
		mag_xx(150Rnd_762x54_Box,8);
		mag_xx(30Rnd_9x21_Mag_SMG_02_Tracer_Green,12);
		mag_xx(10Rnd_Mk14_762x51_Mag,12);
		mag_xx(17Rnd_9x21_Mag,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(RPG32_F,1);
		mag_xx(HandGrenade_Guer,12);
	};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(V_ChestrigF_rgr,6);
	};
};
class Box_Para_WpsLaunch_F: ReammoBox_F
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
	//editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Box_Para_WpsLaunch_F.jpg";
	scope = public;
	displayName = $STR_A3_O_CfgVehicles_Box_Para_WpsLaunch_F0;
	model = "\A3\Weapons_F\Ammoboxes\Ammobox.p3d";
	icon = iconCrateLong;
	editorCategory = EdCat_Supplies;
	editorSubcategory = EdSubcat_Ammo_Paramilitary;
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
		weap_xx(launch_RPG32_F,3);
	};
	class TransportBackpacks
	{
		bag_xx(B_TacticalPack_blk,3);
	};
};