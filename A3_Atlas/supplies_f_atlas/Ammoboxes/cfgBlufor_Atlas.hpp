class Atlas_B_G_supplyCrate_F: B_supplyCrate_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_G_supplyCrate_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_B_G_supplyCrate_F0;
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Data\Supplydrop_CO.paa"};
    editorSubcategory = EdSubcat_Ammo_NATO_German;
	class TransportMagazines
	{
		mag_xx(40Rnd_460x30_Mag_F,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(30Rnd_65x39_caseless_msbs_mag,24);
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
		mag_xx(20Rnd_762x51_Mag,6);
		mag_xx(16Rnd_9x21_Mag,2);
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
		weap_xx(arifle_G36_F,2);
		weap_xx(arifle_G36_GL_F,1);
		weap_xx(arifle_G36C_F,1);
		weap_xx(LMG_Mk200_black_F,1);
		weap_xx(srifle_DMR_03_F,1);
		weap_xx(launch_NLAW_F,1);
	};
	class TransportItems
	{
		item_xx(bipod_01_F_blk,2);
		item_xx(FirstAidKit,10);
		item_xx(acc_flashlight,5);
		item_xx(acc_pointer_IR,5);
		item_xx(Laserdesignator_01_khk_F,1);
		item_xx(Binocular,1);
		item_xx(Medikit,1);
		item_xx(MineDetector,1);
		item_xx(ToolKit,1);
		item_xx(optic_ACO,2);
		item_xx(optic_LRCO_blk_F,2);
		item_xx(optic_SOS,2);
		item_xx(Rangefinder,1);
		item_xx(NVGoggles_INDEP,5);
	};
	class TransportBackpacks
	{
		bag_xx(B_TacticalPack_rgr,2);
	};
};