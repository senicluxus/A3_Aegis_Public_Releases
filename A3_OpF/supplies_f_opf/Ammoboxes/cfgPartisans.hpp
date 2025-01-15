class Opf_Box_Partisan_Wps_F: ReammoBox_F
{
	author = $STR_A3_A_Ravenholme;
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
	displayName = $STR_A3_O_CfgVehicles_Box_Partisans_Wps_F0;
	model = "\A3\Weapons_F\Ammoboxes\Ammobox.p3d";
	icon = iconCrateWpns;
	editorCategory = EdCat_Supplies;
	editorSubcategory = EdSubcat_Ammo_Partisans;
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,10);
		mag_xx(30Rnd_556x45_Stanag_Tracer_Yellow,6);
		mag_xx(Atlas_150Rnd_762x51_Box_Yellow,2);
		mag_xx(20rnd_460x30_mag_F,2);
		mag_xx(20rnd_762x51_mag,6);
		mag_xx(9rnd_45acp_mag,2);
	};
	class TransportWeapons
	{
		weap_xx(Aegis_arifle_M4A1_F,4);
		weap_xx(Aegis_arifle_M4A1_GL_F,1);
		weap_xx(SMG_04_blk_F,2);
		weap_xx(Atlas_LMG_Negev_black_F,2);
		weap_xx(srifle_DMR_03_F,2);
		weap_xx(hgun_ACPC2_black_F,2);
	};
	class TransportItems
	{
		item_xx(V_TacVest_oli,6);
	};
};
class Opf_Box_Partisan_Ammo_F: ReammoBox_F
{
	author = $STR_A3_A_Ravenholme;
	class SimpleObject
	{
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.21;
		verticalOffsetWorld = 0;
	};
	//editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Box_ChDKZ_Ammo_F.jpg";
	scope = public;
	displayName = $STR_A3_O_CfgVehicles_Box_Partisans_Ammo_F0;
	model = "\A3\Weapons_F\Ammoboxes\Ammobox.p3d";
	icon = iconCrateAmmo;
	editorCategory = EdCat_Supplies;
	editorSubcategory = EdSubcat_Ammo_Partisans;
	maximumLoad = 1000;
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,24);
		mag_xx(30Rnd_556x45_Stanag_Tracer_Yellow,12);
		mag_xx(Atlas_150Rnd_762x51_Box_Yellow,8);
		mag_xx(20rnd_460x30_mag_F,12);
		mag_xx(20rnd_762x51_mag,12);
		mag_xx(9rnd_45acp_mag,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(MRAWS_HEAT55_F,1);
		mag_xx(HandGrenade,12);
	};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(V_TacChestrig_grn_F,6);
	};
};
class Opf_Box_Partisan_WpsLaunch_F: ReammoBox_F
{
	author = $STR_A3_A_Ravenholme;
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
	displayName = $STR_A3_O_CfgVehicles_Box_Partisans_WpsLaunch_F0;
	model = "\A3\Weapons_F\Ammoboxes\Ammobox.p3d";
	icon = iconCrateLong;
	editorCategory = EdCat_Supplies;
	editorSubcategory = EdSubcat_Ammo_Partisans;
	class TransportMagazines
	{
		mag_xx(MRAWS_HEAT55_F,10);
		mag_xx(MRAWS_HE_F,5);
		mag_xx(DemoCharge_Remote_Mag,5);
		mag_xx(SatchelCharge_Remote_Mag,5);
		mag_xx(APERSTripMine_Wire_Mag,5);
		mag_xx(APERSMine_Range_Mag,5);
	};
	class TransportWeapons
	{
		weap_xx(launch_MRAWS_Green_rail_F,3);
	};
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_green_F,3);
	};
};