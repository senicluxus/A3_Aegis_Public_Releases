class Box_VZ_Wps_F: ReammoBox_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Box_VZ_Wps_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_VZ_Wps_F0;
	model = "\A3\Weapons_F\Ammoboxes\Proxy_UsBasicWeaponBox.p3d";
	icon = iconCrateWpns;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_VZ;
	class TransportMagazines
	{
		mag_xx(30Rnd_580x42_mag_F,8);
		mag_xx(200Rnd_556x45_Box_Red_F,2);
		mag_xx(20Rnd_762x51_Mag,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_NCAR15_F,4);
		weap_xx(arifle_NCAR15_GL_F,2);
		weap_xx(arifle_NCAR15B_F,2);
		weap_xx(LMG_03_F,2);
		weap_xx(srifle_DMR_06_black_F,2);
	};
	class TransportItems{};
};
class Box_VZ_Ammo_F: ReammoBox_F
{
	author = $STR_A3_A_Ravenholme;
	class SimpleObject
	{
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.21;
		verticalOffsetWorld = 0;
	};
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Box_VZ_Ammo_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_VZ_Ammo_F0;
	model = "\A3\Weapons_F\Ammoboxes\Proxy_UsBasicAmmoBox.p3d";
	icon = iconCrateAmmo;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_VZ;
	maximumLoad = 1000;
	class TransportMagazines
	{
		mag_xx(30Rnd_580x42_mag_F,48);
		mag_xx(200Rnd_556x45_Box_Red_F,6);
		mag_xx(20Rnd_762x51_Mag,12);
	};
	class TransportWeapons{};
	class TransportItems{};
};
class Box_VZ_WpsLaunch_F: ReammoBox_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Box_VZ_WpsLaunch_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_VZ_WpsLaunch_F0;
	model = "\A3\Weapons_F\Ammoboxes\Proxy_UsLouncherBox.p3d";
	icon = iconCrateLong;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_VZ;
	class TransportMagazines
	{
		mag_xx(DemoCharge_Remote_Mag,5);
		mag_xx(APERSMine_Range_Mag,3);
		mag_xx(MiniGrenade,5);
		mag_xx(HandGrenade,5);
		mag_xx(RPG7_F,8);
	};
	class TransportWeapons
	{
		weap_xx(launch_RPG7_F,2);
	};
	class TransportItems{};
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_owcamo,3);
	};
};
class O_VZ_supplyCrate_F: ReammoBox_F
{
	author = $STR_A3_A_Ravenholme;
	mapSize = 1.58;
	class SimpleObject
	{
		eden = true;
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.892;
		verticalOffsetWorld = 0;
		init = "''";
	};
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\VZ_supplyCrate_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_O_VZ_supplyCrate_F0;
	model = "\A3\Weapons_F\Ammoboxes\Supplydrop.p3d";
	maximumLoad = 4000;
	transportMaxWeapons = 12;
	transportMaxMagazines = 96;
	supplyRadius = -1;
	memoryPointSupply = doplnovani;
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Supplydrop_CO.paa"};
	slingLoadCargoMemoryPoints[] =
	{
		SlingLoadCargo1,
		SlingLoadCargo2,
		SlingLoadCargo3,
		SlingLoadCargo4
	};
    editorSubcategory = EdSubcat_Ammo_VZ;
	class TransportMagazines
	{
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(30Rnd_580x42_mag_F,24);
		mag_xx(200Rnd_556x45_Box_Red_F,3);
		mag_xx(20Rnd_762x51_Mag,6);
		mag_xx(17rnd_9x21_Mag,2);
		mag_xx(chemlight_red,2);
		mag_xx(UGL_FlareRed_F,2);
		mag_xx(UGL_FlareWhite_F,2);
		mag_xx(RPG7_F,6);
		mag_xx(MiniGrenade,6);
		mag_xx(HandGrenade,6);
		mag_xx(SmokeShellRed,2);
		mag_xx(SmokeShell,2);
		mag_xx(1Rnd_SmokeRed_Grenade_shell,2);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_NCAR15_F,2);
		weap_xx(arifle_NCAR15_GL_F,1);
		weap_xx(arifle_NCAR15B_F,1);
		weap_xx(LMG_03_F,1);
		weap_xx(srifle_DMR_06_black_F,1);
		weap_xx(launch_RPG7_F,1);
	};
	class TransportItems
	{
		item_xx(bipod_02_F_blk,2);
		item_xx(FirstAidKit,10);
		item_xx(acc_flashlight,5);
		item_xx(Binocular,1);
		item_xx(Medikit,1);
		item_xx(MineDetector,1);
		item_xx(ToolKit,1);
		item_xx(optic_Holosight_blk_F,2);
		item_xx(optic_ARCO_blk_F,2);
		item_xx(optic_KHS_blk,2);
	};
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_owcamo,2);
	};
};