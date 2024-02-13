/* IAF */
class O_CargoNet_01_ammo_F: CargoNet_01_ammo_base_F
{
    editorSubcategory = EdSubcat_Ammo_IAF;

    /* Inventory */
    class TransportMagazines
    {
        mag_xx(10Rnd_762x54_Mag,12);
        mag_xx(150Rnd_762x54_Box,16);
        delete _xx_16Rnd_9x21_Mag;
        mag_xx(17Rnd_9x21_Mag,4);
        mag_xx(1Rnd_HE_Grenade_shell,24);
        delete _xx_1Rnd_SmokeBlue_Grenade_shell;
        delete _xx_1Rnd_SmokeGreen_Grenade_shell;
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
        delete _xx_1Rnd_SmokePurple_Grenade_shell;
        mag_xx(1Rnd_SmokeRed_Grenade_shell,2);
        mag_xx(1Rnd_SmokeYellow_Grenade_shell,2);
        mag_xx(1Rnd_Smoke_Grenade_shell,2);
        mag_xx(20Rnd_556x45_UW_mag,6);
        delete _xx_30Rnd_556x45_Stanag_green;
        mag_xx(20Rnd_556x45_Stanag_green,6);
        mag_xx(30Rnd_65x39_caseless_green,144);
        delete _xx_30Rnd_9x21_Mag;
        mag_xx(30Rnd_9x21_Mag_SMG_02,12);
        mag_xx(10Rnd_127x54_Mag,12);
        mag_xx(10Rnd_93x64_DMR_05_Mag,12);
        mag_xx(5Rnd_127x108_APDS_Mag,4);
        mag_xx(5Rnd_127x108_Mag,8);
        mag_xx(150Rnd_93x64_Mag,6);
        mag_xx(6Rnd_45ACP_Cylinder,4);
        mag_xx(8Rnd_12Gauge_AA40_Pellets_lxWS,6);
        mag_xx(8Rnd_12Gauge_AA40_Slug_lxWS,6);
        mag_xx(10Rnd_50BW_Mag_F,24);
        mag_xx(APERSBoundingMine_Range_Mag,5);
        mag_xx(APERSMine_Range_Mag,5);
        mag_xx(APERSTripMine_Wire_Mag,5);
        mag_xx(ATMine_Range_Mag,5);
        mag_xx(ClaymoreDirectionalMine_Remote_Mag,5);
        mag_xx(DemoCharge_Remote_Mag,5);
        delete _xx_HandGrenade;
        mag_xx(HandGrenade_East,24);
        mag_xx(Laserbatteries,1);
        mag_xx(MiniGrenade,24);
        mag_xx(O_IR_Grenade,8);
        mag_xx(RPG32_F,6);
        mag_xx(RPG32_HE_F,6);
        mag_xx(SatchelCharge_Remote_Mag,2);
        mag_xx(SLAMDirectionalMine_Wire_Mag,5);
        mag_xx(APERSMineDispenser_Mag,1);
        mag_xx(chemlight_red,2);
        mag_xx(SmokeShell,2);
        delete _xx_SmokeShellBlue;
        delete _xx_SmokeShellGreen;
        mag_xx(SmokeShellOrange,2);
        delete _xx_SmokeShellPurple;
        mag_xx(SmokeShellRed,2);
        mag_xx(SmokeShellYellow,2);
        mag_xx(Titan_AA,6);
        mag_xx(Titan_AP,4);
        mag_xx(Titan_AT,6);
        mag_xx(Vorona_HEAT,2);
        mag_xx(Vorona_HE,2);
        mag_xx(UGL_FlareRed_F,2);
        mag_xx(UGL_FlareYellow_F,2);
    };
    class TransportWeapons
    {
        weap_xx(arifle_Katiba_C_F,4);
        weap_xx(arifle_Katiba_F,8);
        weap_xx(arifle_Katiba_GL_F,4);
        weap_xx(arifle_SDAR_F,2);
        weap_xx(hgun_Pistol_heavy_02_F,2);
        weap_xx(hgun_Rook40_F,2);
        weap_xx(launch_RPG32_F,2);
        delete _xx_launch_Titan_F;
        weap_xx(launch_O_Titan_F,2);
        delete _xx_launch_Titan_short_F;
        weap_xx(launch_O_Titan_short_F,2);
        weap_xx(launch_O_Vorona_brown_F,2);
        weap_xx(LMG_Zafir_F,4);
        weap_xx(SMG_02_F,2);
        weap_xx(srifle_DMR_01_F,2);
        weap_xx(srifle_DMR_04_F,2);
        weap_xx(srifle_DMR_05_blk_F,2);
        weap_xx(srifle_GM6_camo_F,2);
        delete _xx_srifle_GM6_F;
        weap_xx(MMG_01_hex_F,2);
        weap_xx(sgun_aa40_lxWS,2);
        weap_xx(arifle_ARX_hex_F,8);
    };
    class TransportItems
    {
        item_xx(acc_flashlight,5);
        item_xx(acc_pointer_IR,5);
        item_xx(acc_flashlight_pistol,2);
        item_xx(Binocular,1);
        item_xx(FirstAidKit,10);
        item_xx(ItemGPS,5);
        item_xx(O_UavTerminal,2);
        item_xx(Laserdesignator_02,1);
        item_xx(Medikit,1);
        item_xx(MineDetector,1);
        delete _xx_muzzle_snds_acp;
        item_xx(muzzle_snds_b,5);
        delete _xx_muzzle_snds_H;
        item_xx(muzzle_snds_65_TI_blk_F,5);
        item_xx(muzzle_snds_65_TI_hex_F,5);
        item_xx(muzzle_snds_L,5);
        item_xx(muzzle_snds_93mmg,2);
        item_xx(muzzle_mzls_b,2);
        item_xx(muzzle_mzls_H,2);
        item_xx(muzzle_mzls_L,2);
        item_xx(bipod_02_F_blk,3);
        item_xx(bipod_02_F_hex,2);
        item_xx(optic_ACO_grn,2);
        item_xx(optic_ACO_grn_smg,2);
        item_xx(optic_Arco_,1);
        item_xx(optic_Arco_blk_F,1);
        item_xx(optic_KHS_blk,1);
        item_xx(optic_KHS_hex,1);
        item_xx(optic_DMS,2);
        item_xx(optic_LRPS,2);
        delete _xx_optic_MRCO;
        item_xx(optic_Nightstalker,5);
        delete _xx_optic_SOS;
        delete _xx_optic_TWS;
        delete _xx_optic_TWS_MG;
        item_xx(optic_Yorris,2);
        item_xx(Rangefinder,1);
        item_xx(ToolKit,1);
        delete _xx_NVGoggles_OPFOR;
        item_xx(O_NVGoggles_blk_F,2);
        item_xx(O_NVGoggles_hex_F,2);
        item_xx(O_NVGoggles_urb_F,1);
    };
    class TransportBackpacks
    {
        bag_xx(B_FieldPack_ocamo,5);
    };
};

/* China */
class O_T_CargoNet_01_ammo_F: O_CargoNet_01_ammo_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.825;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_CargoNet_01_ammo_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_T_CargoNet_01_ammo_F0;
	hiddenSelectionsTextures[] =
	{
		"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_East_Wps_F_CO.paa",
		"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_signs_OPFOR_CA.paa"
	};
	editorSubcategory = EdSubcat_Ammo_China;

    /* Inventory */
    class TransportMagazines
	{
		mag_xx(chemlight_red,2);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellOrange,2);
		mag_xx(SmokeShellRed,2);
		mag_xx(SmokeShellYellow,2);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
		mag_xx(1Rnd_SmokeRed_Grenade_shell,2);
		mag_xx(1Rnd_SmokeYellow_Grenade_shell,2);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
		mag_xx(UGL_FlareRed_F,2);
		mag_xx(UGL_FlareYellow_F,2);
		mag_xx(20Rnd_556x45_UW_mag,6);
		mag_xx(20Rnd_556x45_Stanag_green,6);
		mag_xx(17Rnd_9x21_Mag,4);
		mag_xx(6Rnd_45ACP_Cylinder,4);
		mag_xx(30Rnd_9x21_Mag_SMG_02,12);
		mag_xx(1Rnd_HE_Grenade_shell,24);
		mag_xx(30Rnd_580x42_Mag_F,96);
		mag_xx(100Rnd_580x42_Mag_F,32);
		mag_xx(20Rnd_650x39_Cased_Mag_F,12);
		mag_xx(10Rnd_127x54_Mag,12);
		mag_xx(10Rnd_93x64_DMR_05_Mag,12);
		mag_xx(5Rnd_127x108_APDS_Mag,4);
		mag_xx(5Rnd_127x108_Mag,8);
		mag_xx(8Rnd_12Gauge_AA40_Pellets_lxWS,6);
        mag_xx(8Rnd_12Gauge_AA40_Slug_lxWS,6);
		mag_xx(30Rnd_65x39_caseless_green,48);
		mag_xx(10Rnd_50BW_Mag_F,24);
		mag_xx(ATMine_Range_Mag,5);
		mag_xx(APERSBoundingMine_Range_Mag,5);
		mag_xx(APERSMine_Range_Mag,5);
		mag_xx(APERSTripMine_Wire_Mag,5);
		mag_xx(ClaymoreDirectionalMine_Remote_Mag,5);
		mag_xx(DemoCharge_Remote_Mag,5);
		mag_xx(SatchelCharge_Remote_Mag,2);
		mag_xx(O_IR_Grenade,8);
		mag_xx(SLAMDirectionalMine_Wire_Mag,5);
		mag_xx(APERSMineDispenser_Mag,1);
		mag_xx(RPG32_F,6);
		mag_xx(RPG32_HE_F,6);
        mag_xx(HandGrenade_East,24);
		mag_xx(MiniGrenade,24);
		mag_xx(Titan_AA,6);
		mag_xx(Titan_AP,4);
		mag_xx(Titan_AT,6);
		mag_xx(Vorona_HEAT,2);
		mag_xx(Vorona_HE,2);
		mag_xx(Laserbatteries,1);
	};
	class TransportWeapons
	{
		weap_xx(arifle_CTAR_blk_F,12);
		weap_xx(arifle_CTAR_GL_blk_F,4);
		weap_xx(arifle_CTARS_blk_F,4);
		weap_xx(srifle_DMR_07_blk_F,2);
		weap_xx(arifle_SDAR_F,2);
		weap_xx(hgun_Rook40_F,2);
		weap_xx(hgun_Pistol_heavy_02_F,2);
		weap_xx(launch_RPG32_ghex_F,2);
		weap_xx(launch_O_Titan_ghex_F,2);
		weap_xx(launch_O_Titan_short_ghex_F,2);
		weap_xx(launch_O_Vorona_green_F,2);
		weap_xx(SMG_02_F,2);
		weap_xx(srifle_DMR_04_F,2);
		weap_xx(srifle_DMR_05_blk_F,2);
		weap_xx(srifle_GM6_ghex_F,2);
		weap_xx(sgun_aa40_lxWS,2);
		weap_xx(arifle_ARX_ghex_F,8);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Medikit,1);
		item_xx(Binocular,1);
		item_xx(ItemGPS,5);
		item_xx(O_UavTerminal,2);
		item_xx(MineDetector,1);
		item_xx(ToolKit,1);
		item_xx(optic_ACO_grn,2);
		item_xx(optic_ACO_grn_smg,2);
		item_xx(acc_flashlight,5);
		item_xx(acc_flashlight_pistol,2);
		item_xx(acc_pointer_IR,5);
		item_xx(Laserdesignator_02_ghex_F,1);
		item_xx(muzzle_snds_65_TI_blk_F,5);
		item_xx(muzzle_snds_65_TI_ghex_F,5);
		item_xx(muzzle_snds_L,5);
		item_xx(muzzle_snds_58_blk_F,5);
		item_xx(muzzle_snds_93mmg,2);
		item_xx(muzzle_mzls_b,2);
		item_xx(muzzle_mzls_H,2);
		item_xx(muzzle_mzls_L,2);
		item_xx(muzzle_mzls_58_F,5);
		item_xx(bipod_02_F_blk,3);
		item_xx(bipod_02_F_hex,2);
		item_xx(optic_Arco_blk_F,1);
		item_xx(optic_Arco_ghex_F,1);
		item_xx(optic_KHS_blk,2);
		item_xx(optic_DMS,2);
		item_xx(optic_LRPS_ghex_F,2);
		item_xx(optic_Nightstalker,5);
		item_xx(Rangefinder,1);
		item_xx(O_NVGoggles_blk_F,2);
		item_xx(O_NVGoggles_ghex_F,3);
	};
	class TransportBackpacks
    {
		bag_xx(B_FieldPack_ghex_F,5);
	};
};