/* LDF */
class I_E_CargoNet_01_ammo_F: I_CargoNet_01_ammo_F
{
    editorSubcategory = EdSubcat_Ammo_EAF;

    /* Inventory */
    class TransportMagazines
    {
        mag_xx(chemlight_green,2);
        mag_xx(SmokeShell,2);
        mag_xx(SmokeShellBlue,2);
        mag_xx(SmokeShellGreen,2);
        mag_xx(SmokeShellOrange,2);
        delete _xx_SmokeShellPurple;
        delete _xx_SmokeShellRed;
        delete _xx_SmokeShellYellow;
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,2);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
        delete _xx_1Rnd_SmokePurple_Grenade_shell;
        delete _xx_1Rnd_SmokeRed_Grenade_shell;
        delete _xx_1Rnd_SmokeYellow_Grenade_shell;
        mag_xx(1Rnd_Smoke_Grenade_shell,2);
        mag_xx(UGL_FlareGreen_F,2);
        mag_xx(UGL_FlareWhite_F,2);
        delete _xx_9Rnd_45ACP_Mag;
        mag_xx(11Rnd_45ACP_Mag,4);
        mag_xx(50Rnd_570x28_SMG_03,12);
        mag_xx(1Rnd_HE_Grenade_shell,24);
        mag_xx(30Rnd_65x39_caseless_msbs_mag,108);
        mag_xx(200Rnd_65x39_cased_Box,12);
        mag_xx(6Rnd_12Gauge_Pellets,6);
        mag_xx(6Rnd_12Gauge_Slug,6);
        mag_xx(7Rnd_408_Mag,12);
        mag_xx(ATMine_Range_Mag,5);
        mag_xx(APERSBoundingMine_Range_Mag,5);
        mag_xx(APERSMine_Range_Mag,5);
        mag_xx(APERSTripMine_Wire_Mag,5);
        mag_xx(ClaymoreDirectionalMine_Remote_Mag,5);
        mag_xx(DemoCharge_Remote_Mag,5);
        mag_xx(SatchelCharge_Remote_Mag,2);
        mag_xx(I_E_IR_Grenade,8);
        mag_xx(SLAMDirectionalMine_Wire_Mag,5);
        mag_xx(APERSMineDispenser_Mag,1);
        mag_xx(NLAW_F,8);
        mag_xx(MRAWS_HEAT_F,6);
        mag_xx(MRAWS_HE_F,6);
        mag_xx(HandGrenade,24);
        mag_xx(MiniGrenade,24);
        mag_xx(Titan_AA,6);
        mag_xx(Titan_AP,4);
        mag_xx(Titan_AT,6);
        mag_xx(Laserbatteries,1);
    };
    class TransportWeapons
    {
        weap_xx(arifle_MSBS65_F,8);
        weap_xx(arifle_MSBS65_GL_F,4);
        weap_xx(arifle_MSBS65_UBS_F,4);
        weap_xx(arifle_MSBS65_Mark_F,2);
        weap_xx(LMG_Mk200_black_F,4);
        weap_xx(hgun_Pistol_heavy_01_green_F,2);
        weap_xx(launch_NLAW_F,2);
        weap_xx(launch_I_Titan_eaf_F,2);
        weap_xx(launch_I_Titan_short_F,2);
        weap_xx(launch_MRAWS_green_F,2);
        delete _xx_SMG_03_black;
        weap_xx(SMG_03C_black,2);
        weap_xx(srifle_LRR_F,2);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,10);
        item_xx(Medikit,1);
        item_xx(Binocular,1);
        item_xx(ItemGPS,5);
        item_xx(I_UavTerminal,2);
        item_xx(MineDetector,1);
        item_xx(ToolKit,1);
        item_xx(optic_ACO,2);
        delete _xx_optic_ACO_smg;
        item_xx(acc_flashlight,5);
        item_xx(acc_flashlight_pistol,2);
        item_xx(acc_pointer_IR,5);
        delete _xx_Laserdesignator_03;
        item_xx(Laserdesignator_01_khk_F,1);
        delete _xx_muzzle_snds_338_black;
        item_xx(muzzle_snds_acp,2);
        item_xx(muzzle_snds_H,5);
        delete _xx_muzzle_snds_b;
        item_xx(muzzle_snds_570,2);
        item_xx(muzzle_mzls_acp,2);
        item_xx(muzzle_mzls_H,2);
        item_xx(bipod_01_F_blk,5);
        item_xx(optic_ico_01_f,4);
        item_xx(optic_Hamr,2);
        item_xx(optic_LRPS,2);
        item_xx(optic_MRD_black,2);
        item_xx(optic_NVS,2);
        item_xx(optic_SOS,2);
        item_xx(optic_tws,2);
        item_xx(optic_tws_mg,2);
        item_xx(optic_tws_sniper,2);
        item_xx(Rangefinder,1);
        item_xx(NVGoggles_INDEP,5);
    };
    class TransportBackpacks
    {
        bag_xx(B_Kitbag_eaf_F,5);
    };
};