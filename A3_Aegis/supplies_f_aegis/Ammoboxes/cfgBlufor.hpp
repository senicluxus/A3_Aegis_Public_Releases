/* US */
class Box_NATO_Wps_F: NATO_Box_Base
{
    editorSubcategory = EdSubcat_Ammo_US;
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_mag,9);
		mag_xx(16Rnd_9x21_Mag,1);
		mag_xx(11Rnd_45ACP_Mag,1);
		mag_xx(200Rnd_65x39_cased_Box_Red,1);
		mag_xx(30Rnd_45ACP_Mag_SMG_01,1);
		mag_xx(100Rnd_65x39_caseless_mag,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MX_F,4);
		weap_xx(arifle_MX_GL_F,2);
		weap_xx(arifle_MX_SW_F,2);
		weap_xx(arifle_MXC_F,2);
		weap_xx(arifle_MXM_F,1);
		weap_xx(LMG_Mk200_plain_F,1);
		delete _xx_SMG_01_F;
		weap_xx(SMG_01_black_F,1);
		weap_xx(hgun_P07_F,1);
		weap_xx(hgun_Pistol_heavy_01_F,1);
	};
	class TransportItems
    {
		item_xx(optic_ACO,2);
		item_xx(optic_ACO_smg,1);
		item_xx(optic_Hamr,2);
		item_xx(optic_Holosight,2);
		item_xx(optic_Holosight_smg,1);
		item_xx(optic_SOS,1);
		item_xx(optic_MRD,1);
    };
};
class Box_NATO_WpsSpecial_F: NATO_Box_Base
{
    editorSubcategory = EdSubcat_Ammo_US;
	class TransportMagazines
	{
		delete _xx_30Rnd_65x39_caseless_mag;
		mag_xx(7Rnd_408_mag,8);
		mag_xx(20Rnd_762x51_Mag,18);
		mag_xx(20Rnd_556x45_UW_mag,3);
		delete _xx_30Rnd_556x45_Stanag_red;
		mag_xx(20Rnd_556x45_Stanag_red,3);
		delete _xx_10Rnd_338_Mag;
		mag_xx(130Rnd_338_Mag,3);
		mag_xx(8Rnd_12Gauge_Pellets,3);
		mag_xx(8Rnd_12Gauge_Slug,3);
		mag_xx(30Rnd_556x45_Stanag_Sand_red,24);
		mag_xx(150Rnd_556x45_Drum_Sand_Mag_F,6);
        mag_xx(5Rnd_25x40mm_HE,3);
        mag_xx(5Rnd_25x40mm_Airburst,3);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SDAR_F,1);
		weap_xx(arifle_MXM_F,1);
		delete _xx_srifle_LRR_F;
		weap_xx(srifle_LRR_camo_F,1);
		delete _xx_srifle_DMR_03_F;
		weap_xx(srifle_DMR_03_tan_F,1);
		delete _xx_srifle_DMR_02_F;
		weap_xx(srifle_EBR_F,1);
		delete _xx_MMG_02_black_F;
		weap_xx(MMG_02_sand_F,1);
		weap_xx(sgun_KSG_F,1);
		weap_xx(arifle_SPAR_01_snd_F,3);
		weap_xx(arifle_SPAR_01_GL_snd_F,1);
		weap_xx(arifle_SPAR_02_snd_F,1);
		weap_xx(arifle_SPAR_03_snd_F,1);
		weap_xx(GL_XM25_F,1);
	};
	class TransportItems
	{
        delete _xx_optic_ACO;
        delete _xx_optic_ACO_smg;
		item_xx(optic_Hamr,2);
        delete _xx_optic_SOS;
		item_xx(optic_Holosight,2);
		item_xx(optic_NVS,1);
		item_xx(optic_tws,1);
		item_xx(optic_tws_mg,1);
		item_xx(optic_tws_sniper,1);
        delete _xx_optic_MRD;
		item_xx(optic_DMS,1);
		item_xx(optic_LRPS,1);
		delete _xx_optic_AMS;
		delete _xx_optic_AMS_khk;
		item_xx(optic_AMS_snd,1);
	};
};
class Box_NATO_Ammo_F: NATO_Box_Base
{
    editorSubcategory = EdSubcat_Ammo_US;
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_mag,54);
		mag_xx(16Rnd_9x21_Mag,2);
		mag_xx(11Rnd_45ACP_Mag,2);
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
		mag_xx(30Rnd_45ACP_Mag_SMG_01,6);
		delete _xx_20Rnd_762x51_Mag;
		mag_xx(100Rnd_65x39_caseless_mag,12);
		delete _xx_1Rnd_HE_Grenade_shell;
		delete _xx_3Rnd_HE_Grenade_shell;
		delete _xx_NLAW_F;
		delete _xx_HandGrenade;
		delete _xx_MiniGrenade;
	};
};
class Box_NATO_AmmoOrd_F: NATO_Box_Base
{
    editorSubcategory = EdSubcat_Ammo_US;
    class TransportMagazines
    {
        mag_xx(ATMine_Range_Mag,5);
        mag_xx(APERSMine_Range_Mag,5);
        mag_xx(APERSBoundingMine_Range_Mag,5);
        mag_xx(SLAMDirectionalMine_Wire_Mag,5);
        mag_xx(APERSTripMine_Wire_Mag,5);
        mag_xx(ClaymoreDirectionalMine_Remote_Mag,5);
        mag_xx(DemoCharge_Remote_Mag,5);
        mag_xx(SatchelCharge_Remote_Mag,2);
        mag_xx(APERSMineDispenser_Mag,1);
    };
};
class Box_NATO_Grenades_F: NATO_Box_Base
{
    editorSubcategory = EdSubcat_Ammo_US;
	class TransportMagazines
	{
        mag_xx(1Rnd_HE_Grenade_shell,6);
        mag_xx(3Rnd_HE_Grenade_shell,2);
        mag_xx(1Rnd_Smoke_Grenade_shell,2);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
        delete _xx_1Rnd_SmokeRed_Grenade_shell;
        delete _xx_1Rnd_SmokeYellow_Grenade_shell;
        delete _xx_1Rnd_SmokePurple_Grenade_shell;
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,2);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
        mag_xx(HandGrenade,12);
        mag_xx(MiniGrenade,12);
        mag_xx(SmokeShell,2);
        delete _xx_SmokeShellRed;
        mag_xx(SmokeShellGreen,2);
        delete _xx_SmokeShellYellow;
        delete _xx_SmokeShellPurple;
        mag_xx(SmokeShellBlue,2);
        mag_xx(SmokeShellOrange,2);
        mag_xx(UGL_FlareWhite_F,2);
        mag_xx(UGL_FlareGreen_F,2);
        mag_xx(B_IR_Grenade,8);
	};
};
class Box_NATO_Support_F: NATO_Box_Base
{
    editorSubcategory = EdSubcat_Ammo_US;
	class TransportMagazines
	{
		mag_xx(Laserbatteries,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
		item_xx(ItemGPS,5);
		item_xx(B_UavTerminal,2);
		item_xx(acc_flashlight,5);
		item_xx(acc_flashlight_pistol,2);
		item_xx(acc_pointer_IR,5);
		item_xx(muzzle_snds_acp,2);
		item_xx(muzzle_snds_L,2);
		item_xx(muzzle_snds_M_snd_F,5);
		delete _xx_muzzle_snds_H;
		item_xx(muzzle_snds_H_snd_F,5);
		delete _xx_muzzle_snds_b;
		item_xx(muzzle_snds_b_snd_F,5);
        delete _xx_muzzle_snds_338_black;
        delete _xx_muzzle_snds_338_green;
		item_xx(muzzle_snds_338_sand,2);
		item_xx(muzzle_snds_408_sand,2);
		item_xx(muzzle_mzls_acp,2);
		item_xx(muzzle_mzls_L,2);
		item_xx(muzzle_mzls_M,2);
		item_xx(muzzle_mzls_H,2);
		item_xx(muzzle_mzls_b,2);
		item_xx(Binocular,1);
		item_xx(Rangefinder,1);
		item_xx(Laserdesignator,1);
        delete _xx_bipod_01_F_blk;
        delete _xx_bipod_01_F_mtp;
		item_xx(bipod_01_F_snd,5);
		delete _xx_muzzle_snds_H_khk_F;
		delete _xx_bipod_01_F_khk;
		item_xx(NVGoggles,5);
		delete _xx_NVGoggles_tna_F;
		delete _xx_NVGogglesB_blk_F;
		delete _xx_NVGogglesB_grn_F;
		delete _xx_NVGogglesB_gry_F;
	};
	class TransportBackpacks
	{
		bag_xx(B_Carryall_mcamo,2);
		bag_xx(B_RadioBag_01_mtp_F,2);
	};
};
class Box_NATO_WpsLaunch_F: NATO_Box_Base
{
    editorSubcategory = EdSubcat_Ammo_US;
	class TransportMagazines
	{
		mag_xx(Titan_AA,3);
		mag_xx(Titan_AT,3);
		mag_xx(Titan_AP,3);
		mag_xx(NLAW_F,3);
		mag_xx(MRAWS_HEAT_F,3);
		mag_xx(MRAWS_HE_F,3);
	};
	class TransportWeapons
	{
		weap_xx(launch_B_Titan_F,1);
		weap_xx(launch_B_Titan_short_F,1);
		weap_xx(launch_NLAW_F,1);
		weap_xx(launch_MRAWS_sand_F,1);
	};
	class TransportBackpacks
	{
		bag_xx(B_Kitbag_rgr,4);
	};
};
class Box_NATO_AmmoVeh_F: NATO_Box_Base
{
    editorSubcategory = EdSubcat_Ammo_US;
};
class B_supplyCrate_F: ReammoBox_F
{
    editorSubcategory = EdSubcat_Ammo_US;
    hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Supplydrop_CO.paa"};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_mag,30);
		mag_xx(16Rnd_9x21_Mag,2);
		mag_xx(30Rnd_45ACP_Mag_SMG_01,6);
		delete _xx_20Rnd_762x51_Mag;
		mag_xx(100Rnd_65x39_caseless_mag,6);
		mag_xx(1Rnd_HE_Grenade_shell,3);
		mag_xx(3Rnd_HE_Grenade_shell,1);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
		mag_xx(chemlight_green,2);
		mag_xx(B_IR_Grenade,2);
		mag_xx(NLAW_F,3);
		mag_xx(Laserbatteries,1);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
		mag_xx(UGL_FlareWhite_F,2);
		mag_xx(UGL_FlareGreen_F,2);
	};
	class TransportWeapons
	{
		weap_xx(launch_NLAW_F,1);
		weap_xx(arifle_MX_F,2);
		weap_xx(arifle_MX_SW_F,1);
		weap_xx(arifle_MX_GL_F,1);
		weap_xx(arifle_MXC_F,1);
		weap_xx(arifle_MXM_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Laserdesignator,1);
		item_xx(acc_flashlight,5);
        delete _xx_bipod_01_F_blk;
		item_xx(Binocular,1);
		item_xx(optic_ACO,2);
		item_xx(optic_ACO_smg,1);
		item_xx(optic_Hamr,2);
		item_xx(optic_Holosight,2);
		item_xx(optic_Holosight_smg,1);
		item_xx(optic_SOS,1);
		item_xx(acc_pointer_IR,5);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
		item_xx(bipod_01_F_snd,2);
		item_xx(NVGoggles,5);
	};
	class TransportBackpacks
	{
        delete _xx_B_Kitbag_mcamo;
		bag_xx(B_AssaultPack_mcamo,2);
	};
};
// Arma 3 Apex
class Box_NATO_Equip_F: ReammoBox_F
{
    editorSubcategory = EdSubcat_Ammo_US;
	class TransportItems
	{
		item_xx(V_Rangemaster_belt,2);
		delete _xx_V_BandollierB_blk;
		item_xx(V_BandollierB_rgr,2);
		delete _xx_V_Chestrig_blk;
		item_xx(V_Chestrig_rgr,1);
		item_xx(V_ChestrigF_rgr,1);
		item_xx(V_TacVest_blk,4);
		item_xx(V_TacVest_oli,2);
		delete _xx_V_PlateCarrier1_blk;
		item_xx(V_PlateCarrier1_rgr,2);
		item_xx(V_PlateCarrier1_mtp,2);
		item_xx(V_PlateCarrier2_rgr,2);
		delete _xx_V_PlateCarrier2_blk;
		item_xx(V_PlateCarrier2_mtp,2);
		delete _xx_V_PlateCarrierGL_blk;
		item_xx(V_PlateCarrierGL_rgr,2);
		item_xx(V_PlateCarrierGL_mtp,2);
		delete _xx_V_PlateCarrierSpec_blk;
		item_xx(V_PlateCarrierSpec_rgr,2);
		item_xx(V_PlateCarrierSpec_mtp,2);
		item_xx(H_Cap_tan_specops_US,1);
		item_xx(H_Cap_tan_specops_US_hs,1);
		item_xx(H_MilCap_mcamo,2);
		item_xx(H_Booniehat_mcamo,1);
		item_xx(H_Booniehat_mcamo_hs,1);
		delete _xx_H_Booniehat_tan;
		item_xx(H_Beret_02,2);
		delete _xx_H_HelmetB_light_black;
		delete _xx_H_HelmetB_light_desert;
		delete _xx_H_HelmetB_light_grass;
		item_xx(H_HelmetB_light_mcamo,1);
		delete _xx_H_HelmetB_light_sand;
		item_xx(H_HelmetB_light_snakeskin,1);
		item_xx(H_HelmetSpecB_light_mcamo,1);
		item_xx(H_HelmetSpecB_light_snakeskin,1);
		delete _xx_H_HelmetB;
		delete _xx_H_HelmetB_black;
		delete _xx_H_HelmetB_camo;
		delete _xx_H_HelmetB_desert;
		delete _xx_H_HelmetB_grass;
		item_xx(H_HelmetB_mcamo,3);
		item_xx(H_HelmetB_sand,2);
		delete _xx_H_HelmetB_snakeskin;
		delete _xx_H_HelmetSpecB;
		delete _xx_H_HelmetSpecB_blk;
		item_xx(H_HelmetSpecB_mcamo,3);
		delete _xx_H_HelmetSpecB_paint2;
		delete _xx_H_HelmetSpecB_paint1;
		item_xx(H_HelmetSpecB_sand,2);
		delete _xx_H_HelmetSpecB_snakeskin;
		item_xx(H_HelmetCrew_B,2);
		item_xx(H_PilotHelmetFighter_B,2);
		item_xx(H_PilotHelmetHeli_B,2);
		item_xx(H_CrewHelmetHeli_B,2);
		delete _xx_V_TacChestrig_grn_F;
		delete _xx_V_PlateCarrier1_tna_F;
		delete _xx_V_PlateCarrier2_tna_F;
		delete _xx_V_PlateCarrierSpec_tna_F;
		delete _xx_V_PlateCarrierGL_tna_F;
		delete _xx_V_BandollierB_ghex_F;
		delete _xx_V_PlateCarrier1_rgr_noflag_F;
		delete _xx_V_PlateCarrier2_rgr_noflag_F;
		delete _xx_H_HelmetB_TI_tna_F;
		delete _xx_H_HelmetB_tna_F;
		delete _xx_H_HelmetB_Enh_tna_F;
		delete _xx_H_HelmetB_Light_tna_F;
		delete _xx_H_Booniehat_tna_F;
		item_xx(G_B_Diving,2);
		item_xx(V_RebreatherB,2);
	};
};
class Box_NATO_Uniforms_F: ReammoBox_F
{
    editorSubcategory = EdSubcat_Ammo_US;
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(U_B_CombatUniform_mcam,4);
		item_xx(U_B_CombatUniform_mcam_tshirt,4);
		item_xx(U_B_CombatUniform_mcam_vest,4);
		delete _xx_U_B_CTRG_1;
		delete _xx_U_B_CTRG_3;
		delete _xx_U_B_CTRG_2;
		item_xx(U_B_HeliPilotCoveralls,4);
		item_xx(U_B_PilotCoveralls,2);
		item_xx(U_B_GhillieSuit,2);
		item_xx(U_B_FullGhillie_ard,1);
		item_xx(U_B_FullGhillie_lsh,1);
		item_xx(U_B_FullGhillie_sard,1);
		item_xx(U_B_Wetsuit,2);
		delete _xx_U_B_T_Soldier_F;
		delete _xx_U_B_T_Soldier_AR_F;
		delete _xx_U_B_T_Soldier_SL_F;
		delete _xx_U_B_T_Sniper_F;
		delete _xx_U_B_T_FullGhillie_tna_F;
		delete _xx_U_B_CTRG_Soldier_F;
		delete _xx_U_B_CTRG_Soldier_2_F;
		delete _xx_U_B_CTRG_Soldier_3_F;
	};
};
/* US (Pacific) */
class Box_T_NATO_Wps_F: Box_NATO_Wps_F
{
    editorSubcategory = EdSubcat_Ammo_US_Pacific;
    hiddenSelectionsMaterials[] =
    {
        "\A3\Data_F\default_alpha.rvmat",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Box_T_NATO_Wps_F.rvmat"
    };

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_khaki_mag,9);
		mag_xx(16Rnd_9x21_Mag,1);
		mag_xx(11Rnd_45ACP_Mag,1);
		mag_xx(200Rnd_65x39_cased_Box_Red,1);
		mag_xx(30Rnd_45ACP_Mag_SMG_01,1);
		mag_xx(100Rnd_65x39_caseless_khaki_mag,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MX_khk_F,4);
		weap_xx(arifle_MX_GL_khk_F,2);
		weap_xx(arifle_MX_SW_khk_F,2);
		weap_xx(arifle_MXC_khk_F,2);
		weap_xx(arifle_MXM_khk_F,1);
		weap_xx(LMG_Mk200_khk_F,1);
		delete _xx_SMG_01_F;
		weap_xx(SMG_01_khk_F,1);
		weap_xx(hgun_P07_khk_F,1);
		delete _xx_hgun_Pistol_heavy_01_F;
		weap_xx(hgun_Pistol_heavy_01_black_F,1);
	};
    class TransportItems
    {
		item_xx(optic_ACO,2);
		item_xx(optic_ACO_smg,1);
		item_xx(optic_Hamr_khk_F,2);
		item_xx(optic_Holosight_khk_F,2);
		item_xx(optic_Holosight_smg_khk_F,1);
		item_xx(optic_SOS_khk_F,1);
		item_xx(optic_MRD_black,1);
    };
};
class Box_T_NATO_WpsSpecial_F: Box_NATO_WpsSpecial_F
{
    editorSubcategory = EdSubcat_Ammo_US_Pacific;
    hiddenSelectionsMaterials[] =
    {
        "\A3\Data_F\default_alpha.rvmat",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Box_T_NATO_Wps_F.rvmat"
    };

    /* Inventory */
	class TransportMagazines
	{
		delete _xx_30Rnd_65x39_caseless_khaki_mag;
		mag_xx(7Rnd_408_mag,8);
		mag_xx(20Rnd_762x51_Mag,18);
		mag_xx(20Rnd_556x45_UW_mag,3);
		mag_xx(30Rnd_556x45_Stanag_red,24);
		mag_xx(20Rnd_556x45_Stanag_red,3);
		delete _xx_10Rnd_338_Mag;
		mag_xx(130Rnd_338_Mag,3);
		mag_xx(8Rnd_12Gauge_Pellets,3);
		mag_xx(8Rnd_12Gauge_Slug,3);
		mag_xx(150Rnd_556x45_Drum_Green_Mag_F,24);
        mag_xx(5Rnd_25x40mm_HE,3);
        mag_xx(5Rnd_25x40mm_Airburst,3);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SDAR_F,1);
        delete _xx_arifle_MXM_khk_F;
		weap_xx(srifle_LRR_tna_F,1);
		delete _xx_srifle_DMR_03_woodland_F;
		weap_xx(srifle_DMR_03_khaki_F,1);
		delete _xx_srifle_DMR_02_camo_F;
		weap_xx(srifle_EBR_khk_F,1);
        delete _xx_MMG_02_black_F;
		weap_xx(MMG_02_khaki_F,1);
		weap_xx(sgun_KSG_F,1);
		weap_xx(arifle_SPAR_01_khk_F,3);
		weap_xx(arifle_SPAR_01_GL_khk_F,1);
		weap_xx(arifle_SPAR_02_khk_F,1);
		weap_xx(arifle_SPAR_03_khk_F,1);
		weap_xx(GL_XM25_F,1);
	};
	class TransportItems
	{
        delete _xx_optic_ACO;
        delete _xx_optic_ACO_smg;
		item_xx(optic_Hamr_khk_F,2);
        delete _xx_optic_SOS_khk_F;
		item_xx(optic_Holosight_khk_F,2);
		item_xx(optic_NVS,1);
		item_xx(optic_tws,1);
		item_xx(optic_tws_mg,1);
		item_xx(optic_tws_sniper,1);
    	delete _xx_optic_MRD;
		item_xx(optic_DMS,1);
    	item_xx(optic_LRPS_tna_F,1);
    	delete _xx_optic_AMS;
		item_xx(optic_AMS_khk,1);
    	delete _xx_optic_AMS_snd;
	};
};
class Box_T_NATO_Equip_F: Box_NATO_Equip_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.382;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_T_NATO_Equip_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Box_T_NATO_Equip_F0;
    editorSubcategory = EdSubcat_Ammo_US_Pacific;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\equipment_box_BLUFOR_CO.paa",
		"\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_BLUFOR_CA.paa"
	};

    /* Inventory */
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(V_Rangemaster_belt_tna_F,2);
		item_xx(V_BandollierB_tna_F,2);
        item_xx(V_Chestrig_rgr,1);
        item_xx(V_ChestrigF_rgr,1);
        item_xx(V_TacVest_oli,2);
        item_xx(V_TacVest_blk,4);
		item_xx(V_PlateCarrier1_tna_F,2);
		item_xx(V_PlateCarrier2_tna_F,2);
		item_xx(V_PlateCarrierGL_tna_F,2);
		item_xx(V_PlateCarrierSpec_tna_F,2);
		item_xx(H_Cap_tna_F,1);
		item_xx(H_Cap_tna_hs_F,1);
		item_xx(H_MilCap_tna_F,2);
		item_xx(H_Booniehat_tna_F,1);
		item_xx(H_Booniehat_tna_hs_F,1);
		item_xx(H_Beret_02,2);
		item_xx(H_HelmetB_Light_tna_F,2);
		item_xx(H_HelmetB_Enh_Light_tna_F,2);
		item_xx(H_HelmetB_tna_F,5);
		item_xx(H_HelmetB_Enh_tna_F,5);
		item_xx(H_HelmetCrew_B_oli_F,2);
		item_xx(H_PilotHelmetFighter_B,2);
		item_xx(H_PilotHelmetHeli_B,2);
		item_xx(H_CrewHelmetHeli_B,2);
		item_xx(G_B_Diving,2);
		item_xx(V_RebreatherB,2);
	};
	class TransportBackpacks{};
};
class Box_T_NATO_Uniforms_F: Box_NATO_Uniforms_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.382;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_T_NATO_Uniforms_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Box_T_NATO_Uniforms_F0;
    editorSubcategory = EdSubcat_Ammo_US_Pacific;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\uniforms_box_BLUFOR_CO.paa",
		"\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_BLUFOR_CA.paa"
	};

    /* Inventory */
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(U_B_T_Soldier_F,4);
		item_xx(U_B_T_Soldier_AR_F,4);
		item_xx(U_B_T_Soldier_SL_F,4);
		item_xx(U_B_HeliPilotCoveralls,4);
		item_xx(U_B_PilotCoveralls,2);
		item_xx(U_B_T_Sniper_F,2);
		item_xx(U_B_T_FullGhillie_tna_F,2);
		item_xx(U_B_Wetsuit,2);
	};
};
class Box_T_NATO_Ammo_F: Box_NATO_Ammo_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
			{ammo_hide,0},
			{ammoord_hide,1},
			{grenades_hide,1},
			{support_hide,1}
		};
		hide[] = {};
		verticalOffset = 0.284;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_T_NATO_Ammo_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_T_NATO_Ammo_F0;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_US_Pacific;
	hiddenSelectionsTextures[] =
	{
		"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
		"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_NATO_Wps_F_CO.paa"
	};
    hiddenSelectionsMaterials[] =
    {
        "\A3\Data_F\default_alpha.rvmat",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Box_T_NATO_Wps_F.rvmat"
    };

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_khaki_mag,54);
		mag_xx(16Rnd_9x21_Mag,2);
		mag_xx(11Rnd_45ACP_Mag,2);
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
		mag_xx(30Rnd_45ACP_Mag_SMG_01,6);
		mag_xx(100Rnd_65x39_caseless_khaki_mag,12);
	};
	class TransportWeapons{};
	class TransportItems{};
};
class Box_T_NATO_AmmoOrd_F: Box_NATO_AmmoOrd_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
			{ammo_hide,1},
			{ammoord_hide,0},
			{grenades_hide,1},
			{support_hide,1}
		};
		hide[] = {};
		verticalOffset = 0.284;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_T_NATO_AmmoOrd_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_T_NATO_AmmoOrd_F0;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_US_Pacific;
	hiddenSelectionsTextures[] =
	{
		"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
		"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_NATO_Wps_F_CO.paa"
	};
    hiddenSelectionsMaterials[] =
    {
        "\A3\Data_F\default_alpha.rvmat",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Box_T_NATO_Wps_F.rvmat"
    };

    /* Inventory */
	class TransportMagazines
	{
        mag_xx(APERSBoundingMine_Range_Mag,5);
        mag_xx(APERSMine_Range_Mag,5);
        mag_xx(APERSTripMine_Wire_Mag,5);
        mag_xx(ATMine_Range_Mag,5);
        mag_xx(ClaymoreDirectionalMine_Remote_Mag,5);
        mag_xx(DemoCharge_Remote_Mag,5);
        mag_xx(SatchelCharge_Remote_Mag,2);
        mag_xx(SLAMDirectionalMine_Wire_Mag,5);
        mag_xx(APERSMineDispenser_Mag,1);
	};
	class TransportWeapons{};
	class TransportItems{};
};
class Box_T_NATO_Grenades_F: Box_NATO_Grenades_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
			{ammo_hide,1},
			{ammoord_hide,1},
			{grenades_hide,0},
			{support_hide,1}
		};
		hide[] = {};
		verticalOffset = 0.284;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_T_NATO_Grenades_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_T_NATO_Grenades_F0;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_US_Pacific;
	hiddenSelectionsTextures[] =
	{
		"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
		"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_NATO_Wps_F_CO.paa"
	};
    hiddenSelectionsMaterials[] =
    {
        "\A3\Data_F\default_alpha.rvmat",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Box_T_NATO_Wps_F.rvmat"
    };

    /* Inventory */
	class TransportMagazines
	{
        mag_xx(1Rnd_HE_Grenade_shell,6);
        mag_xx(3Rnd_HE_Grenade_shell,2);
        mag_xx(1Rnd_Smoke_Grenade_shell,2);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,2);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
        mag_xx(HandGrenade,12);
        mag_xx(MiniGrenade,12);
        mag_xx(SmokeShell,2);
        mag_xx(SmokeShellGreen,2);
        mag_xx(SmokeShellBlue,2);
        mag_xx(SmokeShellOrange,2);
        mag_xx(UGL_FlareWhite_F,2);
        mag_xx(UGL_FlareGreen_F,2);
        mag_xx(B_IR_Grenade,8);
	};
	class TransportWeapons{};
	class TransportItems{};
};
class Box_T_NATO_Support_F: Box_NATO_Support_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
			{ammo_hide,1},
			{ammoord_hide,1},
			{grenades_hide,1},
			{support_hide,0}
		};
		hide[] = {};
		verticalOffset = 0.284;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_T_NATO_Support_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_T_NATO_Support_F0;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_US_Pacific;
	hiddenSelectionsTextures[] =
	{
		"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
		"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_NATO_Wps_F_CO.paa"
	};
    hiddenSelectionsMaterials[] =
    {
        "\A3\Data_F\default_alpha.rvmat",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Box_T_NATO_Wps_F.rvmat"
    };

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(Laserbatteries,1);
	};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
		item_xx(ItemGPS,5);
		item_xx(B_UavTerminal,2);
		item_xx(acc_flashlight,5);
		item_xx(acc_flashlight_pistol,2);
		item_xx(acc_pointer_IR,5);
		item_xx(muzzle_snds_acp,2);
		item_xx(muzzle_snds_b_khk_F,5);
		item_xx(muzzle_snds_H_khk_F,5);
		item_xx(muzzle_snds_L,2);
		item_xx(muzzle_snds_M_khk_F,5);
		item_xx(muzzle_snds_338_green,2);
		item_xx(muzzle_snds_408_green,2);
		item_xx(muzzle_snds_460,2);
		item_xx(muzzle_mzls_acp,2);
		item_xx(muzzle_mzls_b,2);
		item_xx(muzzle_mzls_H,2);
		item_xx(muzzle_mzls_L,2);
		item_xx(muzzle_mzls_M,2);
		item_xx(Binocular,1);
		item_xx(Rangefinder,1);
		item_xx(Laserdesignator_01_khk_F,1);
		item_xx(bipod_01_F_khk,5);
		item_xx(NVGoggles_tna_F,5);
	};
	class TransportBackpacks
	{
		bag_xx(B_Carryall_tna_F,2);
		bag_xx(B_RadioBag_01_tropic_F,2);
	};
};
class Box_T_NATO_WpsLaunch_F: Box_NATO_WpsLaunch_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.15;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_T_NATO_WpsLaunch_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_T_NATO_WpsLaunch_F0;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_US_Pacific;
	hiddenSelectionsTextures[] =
	{
		"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
		"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_NATO_Wps_F_CO.paa"
	};
    hiddenSelectionsMaterials[] =
    {
        "\A3\Data_F\default_alpha.rvmat",
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Box_T_NATO_Wps_F.rvmat"
    };

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(Titan_AA,3);
		mag_xx(Titan_AT,3);
		mag_xx(Titan_AP,3);
		mag_xx(NLAW_F,3);
		mag_xx(MRAWS_HEAT_F,3);
		mag_xx(MRAWS_HE_F,3);
	};
	class TransportWeapons
	{
		weap_xx(launch_B_Titan_tna_F,1);
		weap_xx(launch_B_Titan_short_tna_F,1);
		weap_xx(launch_NLAW_F,1);
		weap_xx(launch_MRAWS_green_F,1);
	};
	class TransportItems{};
	class TransportBackpacks
	{
		bag_xx(B_Kitbag_tna_F,4);
	};
};
class Box_T_NATO_AmmoVeh_F: Box_NATO_AmmoVeh_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.79;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_T_NATO_AmmoVeh_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Box_T_NATO_AmmoVeh_F0;
	editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_US_Pacific;
	hiddenSelectionsTextures[] =
	{
		"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
		"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Box_T_NATO_AmmoVeh_F_CO.paa"
	};

    /* Inventory */
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems{};
};
class B_T_supplyCrate_F: B_supplyCrate_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_supplyCrate_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_B_T_supplyCrate_F0;
    editorSubcategory = EdSubcat_Ammo_US_Pacific;
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Data\Supplydrop_CO.paa"};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_khaki_mag,30);
		mag_xx(16Rnd_9x21_Mag,2);
		mag_xx(30Rnd_45ACP_Mag_SMG_01,6);
		mag_xx(100Rnd_65x39_caseless_khaki_mag,6);
		mag_xx(1Rnd_HE_Grenade_shell,3);
		mag_xx(3Rnd_HE_Grenade_shell,1);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
		mag_xx(chemlight_green,2);
		mag_xx(B_IR_Grenade,2);
		mag_xx(NLAW_F,3);
		mag_xx(Laserbatteries,1);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
		mag_xx(UGL_FlareWhite_F,2);
		mag_xx(UGL_FlareGreen_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MX_khk_F,2);
		weap_xx(arifle_MX_GL_khk_F,1);
		weap_xx(arifle_MX_SW_khk_F,1);
		weap_xx(arifle_MXC_khk_F,1);
		weap_xx(arifle_MXM_khk_F,1);
		weap_xx(launch_NLAW_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Binocular,1);
		item_xx(Laserdesignator_01_khk_F,1);
		item_xx(optic_ACO,2);
		item_xx(optic_ACO_smg,1);
		item_xx(optic_Hamr_khk_F,2);
		item_xx(optic_Holosight_khk_F,2);
		item_xx(optic_Holosight_smg_khk_F,1);
		item_xx(optic_SOS_khk_F,1);
		item_xx(acc_flashlight,5);
		item_xx(acc_pointer_IR,5);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
		item_xx(bipod_01_F_khk,2);
		item_xx(NVGoggles_tna_F,5);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_tna_F,2);
	};
};

/* US (Woodland) */
class Box_W_NATO_Equip_F: Box_NATO_Equip_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] = {};
        hide[] = {};
        verticalOffset = 0.382;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_W_NATO_Equip_F.jpg";
    displayName = $STR_A3_A_CfgVehicles_Box_W_NATO_Equip_F0;
    editorSubcategory = EdSubcat_Ammo_US_Woodland;
    hiddenSelectionsTextures[] =
    {
        "\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_BLUFOR_CO.paa",
        "\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_BLUFOR_CA.paa"
    };

    /* Inventory */
    class TransportMagazines{};
    class TransportWeapons{};
    class TransportItems
    {
		item_xx(V_Rangemaster_belt_rgr,2);
        item_xx(V_BandollierB_rgr,2);
        item_xx(V_Chestrig_rgr,1);
        item_xx(V_ChestrigF_rgr,1);
        item_xx(V_TacVest_grn,2);
        item_xx(V_TacVest_blk,4);
        item_xx(V_PlateCarrier1_wdl,2);
        item_xx(V_PlateCarrier2_wdl,2);
        item_xx(V_PlateCarrierGL_wdl,2);
        item_xx(V_PlateCarrierSpec_wdl,2);
        item_xx(H_Cap_usblack,1);
        item_xx(H_Cap_usblack_hs,1);
        item_xx(H_MilCap_wdl,2);
        item_xx(H_Booniehat_wdl,1);
        item_xx(H_Booniehat_wdl_hs,1);
        item_xx(H_Beret_02,2);
		item_xx(H_HelmetB_light_wdl,2);
		item_xx(H_HelmetSpecB_light_wdl,2);
		item_xx(H_HelmetB_wdl,5);
		item_xx(H_HelmetSpecB_wdl,5);
        item_xx(H_HelmetCrew_B_oli_F,2);
        item_xx(H_PilotHelmetFighter_B,2);
        item_xx(H_PilotHelmetHeli_B,2);
        item_xx(H_CrewHelmetHeli_B,2);
    };
	class TransportBackpacks{};
};
class Box_W_NATO_Uniforms_F: Box_NATO_Uniforms_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] = {};
        hide[] = {};
        verticalOffset = 0.382;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_W_NATO_Uniforms_F.jpg";
    displayName = $STR_A3_A_CfgVehicles_Box_W_NATO_Uniforms_F0;
    editorSubcategory = EdSubcat_Ammo_US_Woodland;
    hiddenSelectionsTextures[] =
    {
        "\A3\Supplies_F_Exp\Ammoboxes\Data\uniforms_box_BLUFOR_CO.paa",
        "\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_BLUFOR_CA.paa"
    };

    /* Inventory */
    class TransportMagazines{};
    class TransportWeapons{};
    class TransportItems
    {
        item_xx(U_B_CombatUniform_mcam_wdl_f,4);
        item_xx(U_B_CombatUniform_tshirt_mcam_wdL_f,4);
        item_xx(U_B_CombatUniform_vest_mcam_wdl_f,4);
        item_xx(U_B_HeliPilotCoveralls,4);
        item_xx(U_B_PilotCoveralls,2);
        item_xx(U_B_GhillieSuit_wdl_f,2);
		item_xx(U_B_W_FullGhillie_wdl_F,2);
    };
};
class Box_W_NATO_Wps_F: Box_NATO_Wps_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] = {};
        hide[] = {};
        verticalOffset = 0.189;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_W_NATO_Wps_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_W_NATO_Wps_F0;
    editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_US_Woodland;
    hiddenSelectionsTextures[] =
    {
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa"
    };

    /* Inventory */
    class TransportMagazines
    {
		mag_xx(30Rnd_65x39_caseless_black_mag,9);
		mag_xx(16Rnd_9x21_Mag,1);
		mag_xx(11Rnd_45ACP_Mag,1);
		mag_xx(200Rnd_65x39_cased_Box_Red,1);
		mag_xx(30Rnd_45ACP_Mag_SMG_01,1);
		mag_xx(100Rnd_65x39_caseless_black_mag,2);
    };
    class TransportWeapons
    {
        weap_xx(arifle_MX_Black_F,4);
        weap_xx(arifle_MX_GL_Black_F,2);
        weap_xx(arifle_MX_SW_Black_F,2);
        weap_xx(arifle_MXC_Black_F,2);
		weap_xx(arifle_MXM_Black_F,1);
		weap_xx(LMG_Mk200_black_F,1);
        weap_xx(SMG_01_black_F,1);
        weap_xx(hgun_P07_blk_F,1);
        weap_xx(hgun_Pistol_heavy_01_black_F,1);
    };
    class TransportItems
    {
		item_xx(optic_ACO,2);
		item_xx(optic_ACO_smg,1);
		item_xx(optic_Hamr,2);
		item_xx(optic_Holosight_blk_F,2);
		item_xx(optic_Holosight_smg_blk_F,1);
		item_xx(optic_SOS,1);
		item_xx(optic_MRD_black,1);
    };
};
class Box_W_NATO_WpsSpecial_F: Box_NATO_WpsSpecial_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] = {};
        hide[] = {};
        verticalOffset = 0.187;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_W_NATO_WpsSpecial_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_W_NATO_WpsSpecial_F0;
    editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_US_Woodland;
    hiddenSelectionsTextures[] =
    {
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa"
    };

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(7Rnd_408_mag,6);
		mag_xx(20Rnd_762x51_Mag,18);
		mag_xx(130Rnd_338_Mag,3);
		mag_xx(8Rnd_12Gauge_Pellets,3);
		mag_xx(8Rnd_12Gauge_Slug,3);
		mag_xx(30Rnd_556x45_Stanag_red,24);
		mag_xx(150Rnd_556x45_Drum_Mag_F,6);
        mag_xx(5Rnd_25x40mm_HE,3);
        mag_xx(5Rnd_25x40mm_Airburst,3);
	};
	class TransportWeapons
	{
		weap_xx(srifle_LRR_F,1);
		weap_xx(srifle_DMR_03_F,1);
		weap_xx(srifle_EBR_blk_F,1);
		weap_xx(MMG_02_black_F,1);
		weap_xx(sgun_KSG_F,1);
        weap_xx(arifle_SPAR_01_blk_F,3);
        weap_xx(arifle_SPAR_01_GL_blk_F,1);
        weap_xx(arifle_SPAR_02_blk_F,1);
		weap_xx(arifle_SPAR_03_blk_F,1);
		weap_xx(GL_XM25_F,1);
	};
	class TransportItems
	{
		item_xx(optic_Hamr,2);
		item_xx(optic_Holosight_blk_F,2);
		item_xx(optic_NVS,1);
		item_xx(optic_tws,1);
		item_xx(optic_tws_mg,1);
		item_xx(optic_tws_sniper,1);
		item_xx(optic_DMS,1);
        item_xx(optic_LRPS,1);
		item_xx(optic_AMS,1);
	};
};
class Box_W_NATO_Ammo_F: Box_NATO_Ammo_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] =
        {
            {ammo_hide,0},
            {ammoord_hide,1},
            {grenades_hide,1},
            {support_hide,1}
        };
        hide[] = {};
        verticalOffset = 0.284;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_W_NATO_Ammo_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_W_NATO_Ammo_F0;
    editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_US_Woodland;
    hiddenSelectionsTextures[] =
    {
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa"
    };

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,54);
		mag_xx(16Rnd_9x21_Mag,2);
		mag_xx(11Rnd_45ACP_Mag,2);
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
		mag_xx(30Rnd_45ACP_Mag_SMG_01,6);
		mag_xx(100Rnd_65x39_caseless_black_mag,12);
	};
	class TransportWeapons{};
	class TransportItems{};
};
class Box_W_NATO_Support_F: Box_NATO_Support_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] =
        {
            {ammo_hide,1},
            {ammoord_hide,1},
            {grenades_hide,1},
            {support_hide,0}
        };
        hide[] = {};
        verticalOffset = 0.284;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_W_NATO_Support_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_W_NATO_Support_F0;
    editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_US_Woodland;
    hiddenSelectionsTextures[] =
    {
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa"
    };

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(Laserbatteries,1);
	};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
		item_xx(ItemGPS,5);
		item_xx(B_UavTerminal,2);
		item_xx(acc_flashlight,5);
		item_xx(acc_flashlight_pistol,2);
		item_xx(acc_pointer_IR,5);
		item_xx(muzzle_snds_acp,2);
		item_xx(muzzle_snds_b,5);
		item_xx(muzzle_snds_H,5);
		item_xx(muzzle_snds_L,2);
		item_xx(muzzle_snds_M,5);
		item_xx(muzzle_snds_338_black,2);
		item_xx(muzzle_snds_408_black,2);
		item_xx(muzzle_snds_460,2);
		item_xx(muzzle_mzls_acp,2);
		item_xx(muzzle_mzls_b,2);
		item_xx(muzzle_mzls_H,2);
		item_xx(muzzle_mzls_L,2);
		item_xx(muzzle_mzls_M,2);
		item_xx(Binocular,1);
		item_xx(Rangefinder,1);
		item_xx(Laserdesignator_01_khk_F,1);
		item_xx(bipod_01_F_blk,5);
		item_xx(NVGoggles_INDEP,5);
	};
	class TransportBackpacks
	{
		bag_xx(B_Carryall_wdl_F,2);
		bag_xx(B_RadioBag_01_wdl_F,2);
	};
};
class Box_W_NATO_WpsLaunch_F: Box_NATO_WpsLaunch_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] = {};
        hide[] = {};
        verticalOffset = 0.15;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_W_NATO_WpsLaunch_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_W_NATO_WpsLaunch_F0;
    editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_US_Woodland;
    hiddenSelectionsTextures[] =
    {
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa"
    };

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(Titan_AA,3);
		mag_xx(Titan_AT,3);
		mag_xx(Titan_AP,3);
		mag_xx(NLAW_F,3);
		mag_xx(MRAWS_HEAT_F,3);
		mag_xx(MRAWS_HE_F,3);
	};
	class TransportWeapons
	{
		weap_xx(launch_B_Titan_olive_F,1);
		weap_xx(launch_I_Titan_short_F,1);
		weap_xx(launch_NLAW_F,1);
		weap_xx(launch_MRAWS_green_F,1);
	};
	class TransportItems{};
	class TransportBackpacks
	{
		bag_xx(B_Kitbag_wdl_F,4);
	};
};
class B_W_supplyCrate_F: B_supplyCrate_F
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
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_supplyCrate_F.jpg";
    displayName = $STR_A3_A_CfgVehicles_B_W_supplyCrate_F0;
    editorSubcategory = EdSubcat_Ammo_US_Woodland;
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Data\Supplydrop_CO.paa"};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,30);
		mag_xx(16Rnd_9x21_Mag,2);
		mag_xx(30Rnd_45ACP_Mag_SMG_01,6);
		mag_xx(100Rnd_65x39_caseless_black_mag,6);
		mag_xx(1Rnd_HE_Grenade_shell,3);
		mag_xx(3Rnd_HE_Grenade_shell,1);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
		mag_xx(chemlight_green,2);
		mag_xx(B_IR_Grenade,2);
		mag_xx(NLAW_F,3);
		mag_xx(Laserbatteries,1);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
		mag_xx(UGL_FlareWhite_F,2);
		mag_xx(UGL_FlareGreen_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MX_Black_F,2);
		weap_xx(arifle_MX_GL_Black_F,1);
		weap_xx(arifle_MX_SW_Black_F,1);
		weap_xx(arifle_MXC_Black_F,1);
		weap_xx(arifle_MXM_Black_F,1);
		weap_xx(launch_NLAW_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Binocular,1);
		item_xx(Laserdesignator_01_khk_F,1);
		item_xx(optic_ACO,2);
		item_xx(optic_ACO_smg,1);
		item_xx(optic_Hamr,2);
		item_xx(optic_Holosight_blk_F,2);
		item_xx(optic_Holosight_smg_blk_F,1);
		item_xx(optic_SOS,1);
		item_xx(acc_flashlight,5);
		item_xx(acc_pointer_IR,5);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
		item_xx(bipod_01_F_blk,2);
		item_xx(NVGoggles_INDEP,5);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_wdl_F,2);
	};
};

/* BAF */
class Box_A_NATO_Equip_F: Box_NATO_Equip_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.382;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Equip_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_Equip_F0;
    editorSubcategory = EdSubcat_Ammo_BAF;
	hiddenSelectionsTextures[] =
	{
        "\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_BLUFOR_CO.paa",
        "\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_BLUFOR_CA.paa"
	};

    /* Inventory */
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(V_Rangemaster_belt_cbr,2);
		item_xx(V_BandollierB_cbr,2);
		item_xx(V_TacChestrig_cbr_F,2);
		item_xx(V_CarrierRigKBT_01_Coyote_F,2);
		item_xx(V_CarrierRigKBT_01_heavy_Coyote_F,2);
		item_xx(V_CarrierRigKBT_01_light_Coyote_F,4);
		item_xx(V_PlateCarrierH_CTRG,2);
		item_xx(V_PlateCarrierL_CTRG,2);
		item_xx(H_Cap_khaki_specops_UK,1);
		item_xx(H_Cap_khaki_specops_UK_hs,1);
		item_xx(H_Booniehat_mcamo,1);
		item_xx(H_Booniehat_mcamo_hs,1);
		item_xx(H_Beret_red,2);
		item_xx(H_HelmetB_light_desert,1);
		item_xx(H_HelmetB_light_snakeskin,1);
		item_xx(H_HelmetSpecB_light_desert,1);
		item_xx(H_HelmetSpecB_light_snakeskin,1);
		item_xx(H_HelmetB_sand,2);
		item_xx(H_HelmetSpecB_sand,2);
		item_xx(H_HelmetB_camo_mcamo,8);
		item_xx(H_HelmetCrew_B,2);
		item_xx(H_PilotHelmetFighter_B,2);
		item_xx(H_PilotHelmetHeli_O,2);
		item_xx(H_CrewHelmetHeli_O,2);
		item_xx(G_B_Diving,2);
		item_xx(V_RebreatherB,2);
  	};
	class TransportBackpacks{};
};
class Box_A_NATO_Uniforms_F: Box_NATO_Uniforms_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.382;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Uniforms_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_Uniforms_F0;
    editorSubcategory = EdSubcat_Ammo_BAF;
	hiddenSelectionsTextures[] =
	{
        "\A3\Supplies_F_Exp\Ammoboxes\Data\uniforms_box_BLUFOR_CO.paa",
        "\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_BLUFOR_CA.paa"
	};

    /* Inventory */
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(U_B_UBACS_mtp_f,8);
		item_xx(U_B_UBACS_tshirt_mtp_f,4);
		item_xx(U_B_UBACS_vest_mtp_f,4);
		item_xx(U_B_PilotCoveralls,2);
		item_xx(U_B_FullGhillie_ard,1);
		item_xx(U_B_FullGhillie_lsh,1);
		item_xx(U_B_FullGhillie_sard,1);
		item_xx(U_B_Wetsuit,2);
  	};
};
class Box_A_NATO_Wps_F: Box_NATO_Wps_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] = {};
        hide[] = {};
        verticalOffset = 0.189;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Wps_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_Wps_F0;
    editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_BAF;
    hiddenSelectionsTextures[] =
    {
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa",
    };

    /* Inventory */
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_mag,8);
        mag_xx(200Rnd_65x39_cased_Box_Red,2);
		mag_xx(20Rnd_762x51_Mag,2);
		mag_xx(10Rnd_338_Mag,1);
        mag_xx(40Rnd_460x30_Mag_F,1);
        mag_xx(17Rnd_9x21_Mag,1);
    };
    class TransportWeapons
    {
		weap_xx(arifle_SA80_snd_F,4);
		weap_xx(arifle_SA80_C_snd_F,2);
		weap_xx(arifle_SA80_GL_snd_F,2);
		weap_xx(LMG_Mk200_plain_F,2);
		weap_xx(arifle_SPAR_03_snd_F,1);
		weap_xx(srifle_DMR_02_sniper_F,1);
		weap_xx(SMG_04_snd_F,1);
		weap_xx(hgun_G17_F,1);
    };
	class TransportItems
	{
		item_xx(optic_ACO,2);
		item_xx(optic_ACO_smg,1);
		item_xx(optic_Hamr,2);
		item_xx(optic_Holosight,2);
		item_xx(optic_Holosight_smg,1);
		item_xx(optic_AMS_snd,1);
	};
};
class Box_A_NATO_WpsSpecial_F: Box_NATO_WpsSpecial_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] = {};
        hide[] = {};
        verticalOffset = 0.187;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_WpsSpecial_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_WpsSpecial_F0;
    editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_BAF;
    hiddenSelectionsTextures[] =
    {
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa",
    };

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(20Rnd_556x45_UW_mag,3);
		mag_xx(20Rnd_556x45_Stanag_red,3);
		mag_xx(7Rnd_408_Mag,6);
		mag_xx(8Rnd_12Gauge_Pellets,3);
		mag_xx(8Rnd_12Gauge_Slug,3);
        mag_xx(30Rnd_65x39_caseless_mag,30);
        mag_xx(100Rnd_65x39_caseless_mag,6);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SDAR_F,1);
		weap_xx(srifle_LRR_camo_F,1);
		weap_xx(sgun_M4_F,1);
		weap_xx(arifle_MX_F,2);
		weap_xx(arifle_MX_GL_F,1);
		weap_xx(arifle_MXC_F,1);
		weap_xx(arifle_MXM_F,1);
		weap_xx(arifle_MX_SW_F,1);
	};
	class TransportItems
	{
		item_xx(optic_Hamr,2);
		item_xx(optic_Holosight,2);
		item_xx(optic_NVS,1);
		item_xx(optic_TWS,1);
		item_xx(optic_TWS_MG,1);
		item_xx(optic_TWS_Sniper,1);
		item_xx(optic_DMS,1);
		item_xx(optic_LRPS,1);
	};
};
class Box_A_NATO_Ammo_F: Box_NATO_Ammo_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] =
        {
            {ammo_hide,0},
            {ammoord_hide,1},
            {grenades_hide,1},
            {support_hide,1}
        };
        hide[] = {};
        verticalOffset = 0.284;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Ammo_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_Ammo_F0;
    editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_BAF;
    hiddenSelectionsTextures[] =
    {
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa",
    };

    /* Inventory */
	class TransportMagazines
	{
        mag_xx(30Rnd_65x39_caseless_mag,48);
        mag_xx(200Rnd_65x39_cased_Box_Red,6);
		mag_xx(20Rnd_762x51_Mag,6);
		mag_xx(10Rnd_338_Mag,2);
        mag_xx(40Rnd_460x30_Mag_F,6);
        mag_xx(17Rnd_9x21_Mag,2);
	};
	class TransportWeapons{};
	class TransportItems{};
};
class B_A_supplyCrate_F: B_supplyCrate_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_supplyCrate_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_B_A_supplyCrate_F0;
    editorSubcategory = EdSubcat_Ammo_BAF;

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_mag,24);
		mag_xx(17Rnd_9x21_Mag,2);
		mag_xx(40Rnd_460x30_Mag_F,6);
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
		mag_xx(20Rnd_762x51_Mag,6);
		mag_xx(10Rnd_338_Mag,2);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
		mag_xx(chemlight_green,2);
		mag_xx(B_IR_Grenade,2);
		mag_xx(NLAW_F,3);
		mag_xx(Laserbatteries,1);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
		mag_xx(UGL_FlareWhite_F,2);
		mag_xx(UGL_FlareGreen_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_snd_F,2);
		weap_xx(arifle_SA80_C_snd_F,1);
		weap_xx(arifle_SA80_GL_snd_F,1);
		weap_xx(LMG_Mk200_plain_F,1);
		weap_xx(srifle_DMR_02_sniper_F,1);
		weap_xx(arifle_SPAR_03_snd_F,1);
		weap_xx(launch_NLAW_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Binocular,1);
		item_xx(Laserdesignator,1);
		item_xx(optic_ACO,2);
		item_xx(optic_ACO_smg,1);
		item_xx(optic_Hamr,2);
		item_xx(optic_Holosight,2);
		item_xx(optic_Holosight_smg,1);
		item_xx(optic_AMS_snd,1);
		item_xx(acc_flashlight,5);
		item_xx(acc_pointer_IR,5);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
		item_xx(bipod_01_F_snd,2);
		item_xx(NVGoggles,5);
	};
	class TransportBackpacks
	{
		bag_xx(B_TacticalPack_mcamo,2);
	};
};

/* BAF (Pacific) */
class Box_A_NATO_Equip_tropic_F: Box_A_NATO_Equip_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.382;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Equip_tropic_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_Equip_tropic_F0;
    editorSubcategory = EdSubcat_Ammo_BAF_Pacific;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\equipment_box_BLUFOR_CO.paa",
		"\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_BLUFOR_CA.paa"
	};

    /* Inventory */
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(V_Rangemaster_belt_tna_F,2);
		item_xx(V_BandollierB_tna_F,2);
		item_xx(V_TacChestrig_grn_F,2);
		item_xx(V_CarrierRigKBT_01_Olive_F,2);
		item_xx(V_CarrierRigKBT_01_heavy_Olive_F,2);
		item_xx(V_CarrierRigKBT_01_light_Olive_F,4);
		item_xx(V_PlateCarrierH_CTRG_grn_F,2);
		item_xx(V_PlateCarrierL_CTRG_grn_F,2);
		item_xx(H_Cap_khaki_specops_UK,1);
		item_xx(H_Cap_khaki_specops_UK_hs,1);
		item_xx(H_Booniehat_tna_F,1);
		item_xx(H_Booniehat_tna_hs_F,1);
		item_xx(H_Beret_red,2);
		item_xx(H_HelmetB_Light_tna_F,2);
		item_xx(H_HelmetB_Enh_Light_tna_F,2);
		item_xx(H_HelmetB_tna_F,2);
		item_xx(H_HelmetB_Enh_tna_F,2);
		item_xx(H_HelmetB_Camo_tna_F,8);
		item_xx(H_HelmetCrew_B_oli_F,2);
		item_xx(H_PilotHelmetFighter_B,2);
		item_xx(H_PilotHelmetHeli_B,2);
		item_xx(H_CrewHelmetHeli_B,2);
		item_xx(G_B_Diving,2);
		item_xx(V_RebreatherB,2);
  	};
	class TransportBackpacks{};
};
class Box_A_NATO_Uniforms_tropic_F: Box_A_NATO_Uniforms_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.382;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Uniforms_tropic_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_Uniforms_tropic_F0;
    editorSubcategory = EdSubcat_Ammo_BAF_Pacific;
	hiddenSelectionsTextures[] =
	{
        "\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\uniforms_box_BLUFOR_CO.paa",
        "\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_BLUFOR_CA.paa"
	};

    /* Inventory */
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(U_B_UBACS_tna_f,8);
		item_xx(U_B_UBACS_tshirt_tna_f,4);
		item_xx(U_B_UBACS_vest_tna_f,4);
		item_xx(U_B_PilotCoveralls,2);
		item_xx(U_B_T_FullGhillie_tna_F,2);
		item_xx(U_B_Wetsuit,2);
  	};
};
class Box_A_NATO_Wps_tropic_F: Box_A_NATO_Wps_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] = {};
        hide[] = {};
        verticalOffset = 0.189;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Wps_tropic_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_Wps_tropic_F0;
    editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_BAF_Pacific;
    hiddenSelectionsTextures[] =
    {
		"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
		"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_NATO_Wps_F_CO.paa"
    };

    /* Inventory */
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_khaki_mag,8);
        mag_xx(200Rnd_65x39_cased_Box_Red,2);
		mag_xx(20Rnd_762x51_Mag,2);
        mag_xx(40Rnd_460x30_Mag_F,1);
        mag_xx(17Rnd_9x21_Mag,1);
    };
    class TransportWeapons
    {
		weap_xx(arifle_SA80_khk_F,4);
		weap_xx(arifle_SA80_C_khk_F,2);
		weap_xx(arifle_SA80_GL_khk_F,2);
		weap_xx(LMG_Mk200_khk_F,2);
		weap_xx(arifle_SPAR_03_khk_F,1);
		weap_xx(SMG_04_khk_F,1);
		weap_xx(hgun_G17_khaki_F,1);
    };
	class TransportItems
	{
		item_xx(optic_ACO,2);
		item_xx(optic_ACO_smg,1);
		item_xx(optic_Hamr,2);
		item_xx(optic_Holosight_khk_F,2);
		item_xx(optic_Holosight_smg_khk_F,1);
		item_xx(optic_AMS_khk,1);
	};
};
class Box_A_NATO_WpsSpecial_tropic_F: Box_A_NATO_WpsSpecial_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] = {};
        hide[] = {};
        verticalOffset = 0.187;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_WpsSpecial_tropic_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_WpsSpecial_tropic_F0;
    editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_BAF_Pacific;
    hiddenSelectionsTextures[] =
    {
		"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
		"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_NATO_Wps_F_CO.paa"
    };

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(20Rnd_556x45_UW_mag,3);
		mag_xx(20Rnd_556x45_Stanag_red,3);
		mag_xx(7Rnd_408_Mag,6);
		mag_xx(8Rnd_12Gauge_Pellets,3);
		mag_xx(8Rnd_12Gauge_Slug,3);
        mag_xx(30Rnd_65x39_caseless_khaki_mag,30);
        mag_xx(100Rnd_65x39_caseless_khaki_mag,6);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SDAR_F,1);
		weap_xx(srifle_LRR_tna_F,1);
		weap_xx(sgun_M4_F,1);
		weap_xx(arifle_MX_khk_F,2);
		weap_xx(arifle_MX_GL_khk_F,1);
		weap_xx(arifle_MXC_khk_F,1);
		weap_xx(arifle_MXM_khk_F,1);
		weap_xx(arifle_MX_SW_khk_F,1);
	};
	class TransportItems
	{
		item_xx(optic_Hamr_khk_F,2);
		item_xx(optic_Holosight_khk_F,2);
		item_xx(optic_NVS,1);
		item_xx(optic_TWS,1);
		item_xx(optic_TWS_MG,1);
		item_xx(optic_TWS_Sniper,1);
		item_xx(optic_DMS,1);
		item_xx(optic_LRPS_tna_F,1);
	};
};
class Box_A_NATO_Ammo_tropic_F: Box_A_NATO_Ammo_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] =
        {
            {ammo_hide,0},
            {ammoord_hide,1},
            {grenades_hide,1},
            {support_hide,1}
        };
        hide[] = {};
        verticalOffset = 0.284;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Ammo_tropic_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_Ammo_tropic_F0;
    editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_BAF_Pacific;
    hiddenSelectionsTextures[] =
    {
		"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
		"\A3\Supplies_F_Exp\Ammoboxes\Data\Box_T_NATO_Wps_F_CO.paa"
    };

    /* Inventory */
	class TransportMagazines
	{
        mag_xx(30Rnd_65x39_caseless_khaki_mag,48);
        mag_xx(200Rnd_65x39_cased_Box_Red,6);
		mag_xx(20Rnd_762x51_Mag,6);
		mag_xx(10Rnd_338_Mag,2);
        mag_xx(40Rnd_460x30_Mag_F,6);
        mag_xx(17Rnd_9x21_Mag,2);
	};
	class TransportWeapons{};
	class TransportItems{};
};
class B_A_supplyCrate_tropic_F: B_A_supplyCrate_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_supplyCrate_tropic_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_B_A_supplyCrate_tropic_F0;
    editorSubcategory = EdSubcat_Ammo_BAF_Pacific;
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Data\Supplydrop_CO.paa"};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_khaki_mag,24);
		mag_xx(17Rnd_9x21_Mag,2);
		mag_xx(40Rnd_460x30_Mag_F,6);
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
		mag_xx(20Rnd_762x51_Mag,6);
		mag_xx(10Rnd_338_Mag,2);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
		mag_xx(chemlight_green,2);
		mag_xx(B_IR_Grenade,2);
		mag_xx(NLAW_F,3);
		mag_xx(Laserbatteries,1);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
		mag_xx(UGL_FlareWhite_F,2);
		mag_xx(UGL_FlareGreen_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_khk_F,2);
		weap_xx(arifle_SA80_C_khk_F,1);
		weap_xx(arifle_SA80_GL_khk_F,1);
		weap_xx(LMG_Mk200_khk_F,1);
		weap_xx(arfile_SPAR_03_khk_F,1);
		weap_xx(srifle_DMR_02_F,1);
		weap_xx(launch_NLAW_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Binocular,1);
		item_xx(Laserdesignator_01_khk_F,1);
		item_xx(optic_ACO,2);
		item_xx(optic_ACO_smg,1);
		item_xx(optic_Hamr_khk_F,2);
		item_xx(optic_Holosight_khk_F,2);
		item_xx(optic_Holosight_smg_khk_F,1);
		item_xx(optic_AMS_khk,1);
		item_xx(acc_flashlight,5);
		item_xx(acc_pointer_IR,5);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
		item_xx(bipod_01_F_khk,2);
		item_xx(NVGoggles_tna_F,5);
	};
	class TransportBackpacks
	{
		bag_xx(B_TacticalPack_tna_F,2);
	};
};

/* BAF (Woodland) */
class Box_A_NATO_Equip_wdl_F: Box_A_NATO_Equip_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.382;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Equip_wdl_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_Equip_wdl_F0;
    editorSubcategory = EdSubcat_Ammo_BAF_Woodland;
	hiddenSelectionsTextures[] =
	{
		"\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_BLUFOR_CO.paa",
		"\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_BLUFOR_CA.paa"
	};

    /* Inventory */
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(V_Rangemaster_belt_rgr,2);
		item_xx(V_BandollierB_rgr,2);
		item_xx(V_TacChestrig_grn_F,2);
		item_xx(V_CarrierRigKBT_01_Olive_F,2);
		item_xx(V_CarrierRigKBT_01_heavy_Olive_F,2);
		item_xx(V_CarrierRigKBT_01_light_Olive_F,4);
		item_xx(V_PlateCarrierH_CTRG_grn_F,2);
		item_xx(V_PlateCarrierL_CTRG_grn_F,2);
		item_xx(H_Cap_khaki_specops_UK,1);
		item_xx(H_Cap_khaki_specops_UK_hs,1);
		item_xx(H_Booniehat_wdl,1);
		item_xx(H_Booniehat_wdl_hs,1);
		item_xx(H_Beret_red,2);
		item_xx(H_HelmetB_light_wdl,2);
		item_xx(H_HelmetSpecB_light_wdl,2);
		item_xx(H_HelmetB_plain_wdl,2);
		item_xx(H_HelmetSpecB_wdl,2);
		item_xx(H_HelmetB_camo_wdl,8);
		item_xx(H_HelmetCrew_B_oli_F,2);
		item_xx(H_PilotHelmetFighter_B,2);
		item_xx(H_PilotHelmetHeli_B,2);
		item_xx(H_CrewHelmetHeli_B,2);
  	};
	class TransportBackpacks{};
};
class Box_A_NATO_Uniforms_wdl_F: Box_A_NATO_Uniforms_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.382;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Uniforms_wdl_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_Uniforms_wdl_F0;
    editorSubcategory = EdSubcat_Ammo_BAF_Woodland;
	hiddenSelectionsTextures[] =
	{
        "\A3\Supplies_F_Exp\Ammoboxes\Data\uniforms_box_BLUFOR_CO.paa",
        "\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_BLUFOR_CA.paa"
	};

    /* Inventory */
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(U_B_UBACS_wdl_f,8);
		item_xx(U_B_UBACS_tshirt_wdl_f,4);
		item_xx(U_B_UBACS_vest_wdl_f,4);
		item_xx(U_B_PilotCoveralls,2);
		item_xx(U_B_W_FullGhillie_wdl_F,2);
  	};
};
class Box_A_NATO_Wps_wdl_F: Box_A_NATO_Wps_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] = {};
        hide[] = {};
        verticalOffset = 0.189;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Wps_wdl_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_Wps_wdl_F0;
    editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_BAF_Woodland;
    hiddenSelectionsTextures[] =
    {
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa",
    };

    /* Inventory */
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_black_mag,8);
        mag_xx(200Rnd_65x39_cased_Box_Red,2);
		mag_xx(20Rnd_762x51_Mag,2);
        mag_xx(40Rnd_460x30_Mag_F,1);
        mag_xx(17Rnd_9x21_Mag,1);
    };
    class TransportWeapons
    {
		weap_xx(arifle_SA80_blk_F,4);
		weap_xx(arifle_SA80_C_blk_F,2);
		weap_xx(arifle_SA80_GL_blk_F,2);
		weap_xx(LMG_Mk200_black_F,2);
		weap_xx(arifle_SPAR_03_blk_F,1);
		weap_xx(SMG_04_blk_F,1);
		weap_xx(hgun_G17_black_F,1);
    };
	class TransportItems
	{
		item_xx(optic_ACO,2);
		item_xx(optic_ACO_smg,1);
		item_xx(optic_Hamr,2);
		item_xx(optic_Holosight_blk_F,2);
		item_xx(optic_Holosight_smg_blk_F,1);
		item_xx(optic_AMS,1);
	};
};
class Box_A_NATO_WpsSpecial_wdl_F: Box_A_NATO_WpsSpecial_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] = {};
        hide[] = {};
        verticalOffset = 0.187;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_WpsSpecial_wdl_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_WpsSpecial_wdl_F0;
    editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_BAF_Woodland;
    hiddenSelectionsTextures[] =
    {
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa",
    };

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(20Rnd_556x45_UW_mag,3);
		mag_xx(20Rnd_556x45_Stanag_red,3);
		mag_xx(7Rnd_408_Mag,6);
		mag_xx(8Rnd_12Gauge_Pellets,3);
		mag_xx(8Rnd_12Gauge_Slug,3);
        mag_xx(30Rnd_65x39_caseless_black_mag,30);
        mag_xx(100Rnd_65x39_caseless_black_mag,6);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SDAR_F,1);
		weap_xx(srifle_LRR_F,1);
		weap_xx(sgun_M4_F,1);
		weap_xx(arifle_MX_Black_F,2);
		weap_xx(arifle_MX_GL_Black_F,1);
		weap_xx(arifle_MXC_Black_F,1);
		weap_xx(arifle_MXM_Black_F,1);
		weap_xx(arifle_MX_SW_Black_F,1);
	};
	class TransportItems
	{
		item_xx(optic_Hamr,2);
		item_xx(optic_Holosight_blk_F,2);
		item_xx(optic_NVS,1);
		item_xx(optic_TWS,1);
		item_xx(optic_TWS_MG,1);
		item_xx(optic_TWS_Sniper,1);
		item_xx(optic_DMS,1);
		item_xx(optic_LRPS,1);
	};
};
class Box_A_NATO_Ammo_wdl_F: Box_A_NATO_Ammo_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
    {
        eden = true;
        animate[] =
        {
            {ammo_hide,0},
            {ammoord_hide,1},
            {grenades_hide,1},
            {support_hide,1}
        };
        hide[] = {};
        verticalOffset = 0.284;
        verticalOffsetWorld = 0;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_A_NATO_Ammo_wdl_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_Box_A_NATO_Ammo_wdl_F0;
    editorCategory = EdCat_Supplies;
    editorSubcategory = EdSubcat_Ammo_BAF_Woodland;
    hiddenSelectionsTextures[] =
    {
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa",
        "\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa",
    };

    /* Inventory */
	class TransportMagazines
	{
        mag_xx(30Rnd_65x39_caseless_black_mag,48);
        mag_xx(200Rnd_65x39_cased_Box_Red,6);
		mag_xx(20Rnd_762x51_Mag,6);
		mag_xx(10Rnd_338_Mag,2);
        mag_xx(40Rnd_460x30_Mag_F,6);
        mag_xx(17Rnd_9x21_Mag,2);
	};
	class TransportWeapons{};
	class TransportItems{};
};
class B_A_supplyCrate_wdl_F: B_A_supplyCrate_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_supplyCrate_wdl_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_B_A_supplyCrate_wdl_F0;
    editorSubcategory = EdSubcat_Ammo_BAF_Woodland;
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Data\Supplydrop_CO.paa"};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,24);
		mag_xx(17Rnd_9x21_Mag,2);
		mag_xx(40Rnd_460x30_Mag_F,6);
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
		mag_xx(20Rnd_762x51_Mag,6);
		mag_xx(10Rnd_338_Mag,2);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
		mag_xx(chemlight_green,2);
		mag_xx(B_IR_Grenade,2);
		mag_xx(NLAW_F,3);
		mag_xx(Laserbatteries,1);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
		mag_xx(UGL_FlareWhite_F,2);
		mag_xx(UGL_FlareGreen_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_blk_F,2);
		weap_xx(arifle_SA80_C_blk_F,1);
		weap_xx(arifle_SA80_GL_blk_F,1);
		weap_xx(LMG_Mk200_black_F,1);
		weap_xx(srifle_DMR_02_F,1);
		weap_xx(arifle_SPAR_03_blk_F,1);
		weap_xx(launch_NLAW_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Binocular,1);
		item_xx(Laserdesignator_01_khk_F,1);
		item_xx(optic_ACO,2);
		item_xx(optic_ACO_smg,1);
		item_xx(optic_Hamr,2);
		item_xx(optic_Holosight_blk_F,2);
		item_xx(optic_Holosight_smg_blk_F,1);
		item_xx(optic_AMS,1);
		item_xx(acc_flashlight,5);
		item_xx(acc_pointer_IR,5);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
		item_xx(bipod_01_F_blk,2);
		item_xx(NVGoggles_INDEP,5);
	};
	class TransportBackpacks
	{
		bag_xx(B_TacticalPack_rgr,2);
	};
};