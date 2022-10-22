class L_supplyCrate_F: ReammoBox_F
{
	author = $STR_A3_A_AveryTheKitty;
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\L_supplyCrate_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_L_supplyCrate_F0;
	model = "\A3\Weapons_F\Ammoboxes\Supplydrop.p3d";
	maximumLoad = 4000;
	transportMaxWeapons = 12;
	transportMaxMagazines = 96;
	supplyRadius = -1;
	memoryPointSupply = doplnovani;
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Data\Supplydrop_CO.paa"};
	slingLoadCargoMemoryPoints[] =
	{
		SlingLoadCargo1,
		SlingLoadCargo2,
		SlingLoadCargo3,
		SlingLoadCargo4
	};
    editorSubcategory = EdSubcat_Ammo_Legion;
	class TransportMagazines
	{
		mag_xx(50Rnd_570x28_SMG_03,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(30Rnd_65x39_caseless_msbs_mag,30);
		mag_xx(200Rnd_556x45_Box_Red_F,3);
		mag_xx(17Rnd_9x21_Mag,2);
        mag_xx(6Rnd_12Gauge_Pellets,3);
        mag_xx(6Rnd_12Gauge_Slug,3);
		mag_xx(chemlight_green,2);
		mag_xx(B_IR_Grenade,2);
		mag_xx(Laserbatteries,1);
		mag_xx(UGL_FlareGreen_F,2);
		mag_xx(UGL_FlareWhite_F,2);
		mag_xx(NLAW_F,3);
		mag_xx(MiniGrenade,6);
		mag_xx(HandGrenade,6);
		mag_xx(SmokeShellGreen,2);
		mag_xx(SmokeShell,2);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MSBS65_black_F,2);
		weap_xx(arifle_MSBS65_Mark_black_F,1);
		weap_xx(arifle_MSBS65_GL_black_F,1);
		weap_xx(arifle_MSBS65_UBS_black_F,1);
		weap_xx(LMG_03_F,1);
		weap_xx(launch_NLAW_F,1);
	};
	class TransportItems
	{
		item_xx(bipod_01_F_blk,2);
		item_xx(FirstAidKit,10);
		item_xx(acc_flashlight,5);
		item_xx(acc_pointer_IR,5);
		item_xx(Laserdesignator_03,1);
		item_xx(Binocular,1);
		item_xx(Medikit,1);
		item_xx(MineDetector,1);
		item_xx(ToolKit,1);
		item_xx(optic_ACO,2);
		item_xx(optic_ico_01_black_f,2);
		item_xx(optic_SOS,2);
		item_xx(Rangefinder,1);
		item_xx(NVGoggles_INDEP,5);
	};
	class TransportBackpacks
	{
		bag_xx(B_Kitbag_sgg,2);
	};
};