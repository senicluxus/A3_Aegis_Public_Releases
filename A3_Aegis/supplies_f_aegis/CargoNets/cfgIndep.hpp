/* AAF */
class I_CargoNet_01_ammo_F: CargoNet_01_ammo_base_F
{
    editorSubcategory = EdSubcat_Ammo_AAF;

    /* Inventory */
    class TransportMagazines
    {
        mag_xx(1Rnd_HE_Grenade_shell,24);
        delete _xx_1Rnd_SmokeBlue_Grenade_shell;
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
        mag_xx(1Rnd_SmokePurple_Grenade_shell,2);
        delete _xx_1Rnd_SmokeRed_Grenade_shell;
        delete _xx_1Rnd_SmokeYellow_Grenade_shell;
        mag_xx(1Rnd_Smoke_Grenade_shell,2);
        mag_xx(200Rnd_65x39_cased_Box,12);
        mag_xx(20Rnd_556x45_UW_mag,6);
        mag_xx(20Rnd_762x51_Mag,12);
        mag_xx(20Rnd_556x45_Stanag,6);
        mag_xx(30Rnd_556x45_Stanag,96);
        mag_xx(30Rnd_9x21_Mag,12);
        mag_xx(5Rnd_127x108_Mag,12);
        mag_xx(9Rnd_45ACP_Mag,4);
        mag_xx(8Rnd_12Gauge_Pellets,6);
        mag_xx(8Rnd_12Gauge_Slug,6);
        mag_xx(APERSBoundingMine_Range_Mag,5);
        mag_xx(APERSMine_Range_Mag,5);
        mag_xx(APERSTripMine_Wire_Mag,5);
        mag_xx(ATMine_Range_Mag,5);
        mag_xx(ClaymoreDirectionalMine_Remote_Mag,5);
        mag_xx(DemoCharge_Remote_Mag,5);
        mag_xx(HandGrenade,24);
        mag_xx(I_IR_Grenade,8);
        mag_xx(Laserbatteries,5);
        mag_xx(MiniGrenade,24);
        mag_xx(NLAW_F,8);
        mag_xx(MRAWS_HEAT_F,6);
        mag_xx(MRAWS_HE_F,6);
        mag_xx(SatchelCharge_Remote_Mag,2);
        mag_xx(SLAMDirectionalMine_Wire_Mag,5);
        mag_xx(APERSMineDispenser_Mag,1);
        mag_xx(chemlight_green,2);
        mag_xx(SmokeShell,2);
        class _xx_SmokeShellBlue;
        mag_xx(SmokeShellGreen,2);
        mag_xx(SmokeShellOrange,2);
        mag_xx(SmokeShellPurple,2);
        class _xx_SmokeShellRed;
        class _xx_SmokeShellYellow;
        mag_xx(Titan_AA,6);
        mag_xx(Titan_AP,4);
        mag_xx(Titan_AT,6);
        mag_xx(UGL_FlareGreen_F,2);
        mag_xx(UGL_FlareYellow_F,2);
    };
    class TransportWeapons
    {
        weap_xx(arifle_Mk20C_F,4);
        weap_xx(arifle_Mk20_F,8);
        weap_xx(arifle_Mk20_GL_F,4);
        weap_xx(arifle_SDAR_F,2);
        weap_xx(hgun_ACPC2_F,2);
        weap_xx(hgun_PDW2000_F,2);
        weap_xx(launch_NLAW_F,2);
        weap_xx(launch_I_Titan_F,2);
        weap_xx(launch_I_Titan_short_F,2);
        weap_xx(launch_MRAWS_olive_rail_F,2);
        weap_xx(LMG_Mk200_F,4);
        weap_xx(srifle_EBR_F,2);
        weap_xx(srifle_GM6_F,2);
        weap_xx(sgun_M4_F,2);
    };
    class TransportItems
    {
        item_xx(acc_flashlight,5);
        item_xx(acc_flashlight_pistol,2);
        item_xx(acc_pointer_IR,5);
        item_xx(Binocular,1);
        item_xx(FirstAidKit,10);
        item_xx(ItemGPS,5);
        item_xx(I_UavTerminal,2);
        item_xx(Laserdesignator_03,1);
        item_xx(Medikit,1);
        item_xx(MineDetector,1);
        item_xx(muzzle_snds_acp,5);
        item_xx(muzzle_snds_b,5);
        delete _xx_muzzle_snds_H_MG;
        item_xx(muzzle_snds_H,2);
        item_xx(muzzle_snds_L,5);
        item_xx(muzzle_snds_M,5);
        item_xx(muzzle_mzls_acp,2);
        item_xx(muzzle_mzls_b,2);
        item_xx(muzzle_mzls_H,2);
        item_xx(muzzle_mzls_L,2);
        item_xx(muzzle_mzls_M,2);
        item_xx(bipod_03_F_blk,5);
        item_xx(optic_ACO_grn,2);
        item_xx(optic_ACO_grn_smg,2);
        item_xx(optic_DMS,2);
        delete _xx_optic_Holosight;
        item_xx(optic_Holosight_blk_F,2);
        delete _xx_optic_Holosight_smg;
        item_xx(optic_Holosight_smg_blk_F,2);
        item_xx(optic_LRPS,2);
        item_xx(optic_MRCO,2);
        item_xx(optic_NVS,2);
        item_xx(optic_SOS,2);
        item_xx(optic_tws,2);
        item_xx(optic_tws_mg,2);
        item_xx(optic_tws_sniper,2);
        item_xx(Rangefinder,1);
        item_xx(ToolKit,1);
        item_xx(NVGoggles_INDEP,5);
    };
    class TransportBackpacks
    {
        bag_xx(B_FieldPack_oli,5);
    };
};