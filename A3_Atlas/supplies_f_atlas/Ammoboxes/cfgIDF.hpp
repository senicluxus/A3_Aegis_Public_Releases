class Atlas_I_I_supplyCrate_F: I_supplyCrate_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_supplyCrate_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_I_I_supplyCrate_F0;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Supplydrop_CO.paa"};
    editorSubcategory = EdSubcat_Ammo_IDF;
	class TransportMagazines
	{
		mag_xx(30Rnd_9x21_Mag_SMG_02,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(30Rnd_556x45_Stanag,24);
		mag_xx(Atlas_150Rnd_762x51_Box_Yellow,3);
		mag_xx(9Rnd_45ACP_Mag,2);
		mag_xx(chemlight_green,2);
		mag_xx(I_IR_Grenade,2);
		mag_xx(Laserbatteries,1);
		mag_xx(UGL_FlareGreen_F,2);
		mag_xx(UGL_FlareYellow_F,2);
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
		weap_xx(arifle_TRG21_black_F,2);
		weap_xx(arifle_TRG20_black_F,1);
		weap_xx(arifle_TRG21_GL_black_F,1);
		weap_xx(Atlas_LMG_Negev_black_F,1);
		weap_xx(Aegis_arifle_M4A1_F,1);
		weap_xx(launch_MRAWS_olive_rail_F,1);
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
		item_xx(Aegis_optic_ICO,2);
		item_xx(Aegis_optic_ACOG,2);
		item_xx(optic_SOS,2);
		item_xx(Rangefinder,1);
		item_xx(NVGoggles_INDEP,5);
	};
	class TransportBackpacks
	{
		bag_xx(B_Kitbag_sgg,2);
	};
};