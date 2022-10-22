class Atlas_O_W_supplyCrate_F: O_supplyCrate_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_supplyCrate_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_O_W_supplyCrate_F0;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Supplydrop_Viper_CO.paa"};
    editorSubcategory = EdSubcat_Ammo_CSAT_Woodland;
	class TransportMagazines
	{
		mag_xx(30Rnd_9x21_Mag_SMG_02,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(30Rnd_545x39_AK12_Mag_F,24);
		mag_xx(75Rnd_762x39_AK12_Mag_F,8);
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
		mag_xx(HandGrenade_East,6);
		mag_xx(SmokeShellRed,2);
		mag_xx(SmokeShell,2);
		mag_xx(1Rnd_SmokeRed_Grenade_shell,2);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
	};
	class TransportWeapons
	{
        weap_xx(arifle_AK12_545_F,2);
        weap_xx(arifle_AK12_GL_545_F,1);
        weap_xx(arifle_AK12U_545_F,1);
        weap_xx(arifle_RPK12_F,1);
		weap_xx(srifle_DMR_01_black_F,1);
		weap_xx(launch_RPG32_F,1);
	};
	class TransportItems
	{
		item_xx(bipod_02_F_blk,2);
		item_xx(FirstAidKit,10);
		item_xx(acc_flashlight,5);
		item_xx(acc_pointer_IR,5);
		item_xx(Laserdesignator_02_ghex_F,1);
		item_xx(Binocular,1);
		item_xx(Medikit,1);
		item_xx(MineDetector,1);
		item_xx(ToolKit,1);
		item_xx(optic_ACO_grn_AK_F,2);
		item_xx(optic_Arco_blk_F,1);
		item_xx(optic_Arco_AK_blk_F,1);
		item_xx(optic_DMS,2);
		item_xx(Rangefinder,1);
		item_xx(NVGoggles_OPFOR,5);
	};
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_owcamo,2);
	};
};