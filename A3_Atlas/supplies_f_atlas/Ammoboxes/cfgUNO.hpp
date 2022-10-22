class Atlas_I_UNO_supplyCrate_F: I_supplyCrate_F
{
	author = $STR_A3_A_Ravenholme;
	class SimpleObject
	{
		eden = true;
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.892;
		verticalOffsetWorld = 0;
		init = "''";
	};
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_UNO_supplyCrate_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_I_UNO_supplyCrate_F0;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Supplydrop_CO.paa"};
    editorSubcategory = EdSubcat_Ammo_UNO;
	class TransportMagazines
	{
		mag_xx(30Rnd_9x21_Mag_SMG_02,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(30Rnd_65x39_caseless_msbs_mag,24);
		mag_xx(200rnd_65x39_cased_box,3);
        mag_xx(20Rnd_762x51_Mag,6);
		mag_xx(9Rnd_45ACP_Mag,2);
		mag_xx(chemlight_blue,2);
		mag_xx(I_IR_Grenade,2);
		mag_xx(Laserbatteries,1);
		mag_xx(UGL_FlareGreen_F,2);
		mag_xx(UGL_FlareWhite_F,2);
		mag_xx(NLAW_F,6);
		mag_xx(MiniGrenade,6);
		mag_xx(HandGrenade,6);
		mag_xx(SmokeShellBlue,2);
		mag_xx(SmokeShell,2);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,2);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36_F,2);
		weap_xx(arifle_G36_GL_F,1);
		weap_xx(arifle_G36C_F,1);
		weap_xx(LMG_03_F,1);
		weap_xx(srifle_EBR_blk_F,1);
		weap_xx(launch_NLAW_F,1);
	};
	class TransportItems
	{
		item_xx(bipod_01_F_blk,2);
		item_xx(FirstAidKit,10);
		item_xx(acc_flashlight,5);
		item_xx(acc_pointer_IR,5);
		item_xx(Binocular,1);
		item_xx(Medikit,1);
		item_xx(MineDetector,1);
		item_xx(ToolKit,1);
		item_xx(optic_Holosight_blk_F,2);
		item_xx(optic_MRCO,2);
		item_xx(optic_AMS,2);
		item_xx(Rangefinder,1);
		item_xx(NVGoggles_INDEP,5);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_cbr,2);
	};
};

class Atlas_I_UNO_wdl_supplyCrate_F: I_supplyCrate_F
{
	author = $STR_A3_A_Ravenholme;
	class SimpleObject
	{
		eden = true;
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.892;
		verticalOffsetWorld = 0;
		init = "''";
	};
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_UNO_wdl_supplyCrate_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_I_UNO_wdl_supplyCrate_F0;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Supplydrop_CO.paa"};
    editorSubcategory = EdSubcat_Ammo_UNO;
	class TransportMagazines
	{
		mag_xx(30Rnd_9x21_Mag_SMG_02,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(30Rnd_556x45_Stanag,24);
		mag_xx(200Rnd_556x45_Box_F,3);
        mag_xx(10Rnd_93x64_dmr_05_Mag,6);
		mag_xx(10Rnd_9x21_Mag,2);
		mag_xx(chemlight_blue,2);
		mag_xx(I_IR_Grenade,2);
		mag_xx(UGL_FlareWhite_F,2);
		mag_xx(UGL_FlareYellow_F,2);
		mag_xx(RPG32_F,3);
		mag_xx(RPG32_HE_F,3);
		mag_xx(MiniGrenade,6);
		mag_xx(HandGrenade_Guer,6);
		mag_xx(SmokeShellBlue,2);
		mag_xx(SmokeShell,2);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,2);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_TRG21_F,2);
		weap_xx(arifle_TRG20_F,1);
		weap_xx(arifle_TRG21_GL_F,1);
		weap_xx(LMG_03_F,1);
		weap_xx(srifle_DMR_05_blk_F,1);
		weap_xx(launch_RPG32_Green_F,1);
	};
	class TransportItems
	{
		item_xx(bipod_01_F_blk,2);
		item_xx(FirstAidKit,10);
		item_xx(acc_flashlight,5);
		item_xx(acc_pointer_IR,5);
		item_xx(Binocular,1);
		item_xx(Medikit,1);
		item_xx(MineDetector,1);
		item_xx(ToolKit,1);
		item_xx(optic_ACO,2);
		item_xx(optic_MRCO,2);
		item_xx(optic_AMS,2);
		item_xx(Rangefinder,1);
		item_xx(NVGoggles_INDEP,5);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_rgr,2);
	};
};