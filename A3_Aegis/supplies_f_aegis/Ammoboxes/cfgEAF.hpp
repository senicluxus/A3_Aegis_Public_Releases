/* LDF */
class Box_EAF_Wps_F: Box_IND_Wps_F
{
    editorSubcategory = EdSubcat_Ammo_EAF;

    /* Inventory */
    class TransportMagazines
    {
        delete _xx_30Rnd_65x39_caseless_msbs_mag_Tracer;
        mag_xx(30Rnd_65x39_caseless_msbs_mag,9);
        mag_xx(200Rnd_65x39_cased_Box_Red,2);
        mag_xx(50Rnd_570x28_SMG_03,1);
        mag_xx(6Rnd_12Gauge_Pellets,1);
        mag_xx(6Rnd_12Gauge_Slug,1);
        delete _xx_9Rnd_45ACP_Mag;
        mag_xx(11Rnd_45ACP_Mag,1);
    };
    class TransportWeapons
    {
        weap_xx(arifle_MSBS65_F,4);
        weap_xx(arifle_MSBS65_GL_F,2);
        weap_xx(arifle_MSBS65_UBS_F,2);
		weap_xx(arifle_MSBS65_Mark_F,1);
        delete _xx_LMG_Mk200_black_BI_F;
        weap_xx(LMG_Mk200_black_F,2);
        delete _xx_SMG_03_black;
        weap_xx(SMG_03C_black,1);
        weap_xx(hgun_Pistol_heavy_01_green_F,1);
    };
	class TransportItems
	{
		item_xx(optic_ACO,1);
		item_xx(optic_Hamr,1);
		item_xx(optic_ico_01_f,2);
		item_xx(optic_SOS,1);
	};
};
class Box_EAF_WpsSpecial_F: Box_IND_WpsSpecial_F
{
    editorSubcategory = EdSubcat_Ammo_EAF;

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(7Rnd_408_mag,8);
        delete _xx_10Rnd_338_Mag;
        delete _xx_200Rnd_338_Mag;
        delete _xx_30Rnd_65x39_caseless_msbs_mag_Tracer;
        delete _xx_20Rnd_762x51_Mag;
	};
	class TransportWeapons
	{
        delete _xx_arifle_MSBS65_F;
        delete _xx_srifle_DMR_02_F;
        delete _xx_srifle_DMR_03_F;
        delete _xx_MMG_02_black_RCO_BI_F;
		weap_xx(srifle_LRR_F,1);
	};
	class TransportItems
	{
        delete _xx_optic_ACO;
        delete _xx_optic_AMS;
		item_xx(optic_SOS,1);
        delete _xx_optic_Hamr;
        delete _xx_optic_ico_01_f;
		item_xx(optic_NVS,1);
		item_xx(optic_tws,1);
		item_xx(optic_tws_mg,1);
		item_xx(optic_tws_sniper,1);
        item_xx(optic_LRPS,1);
	};
};
class Box_EAF_WpsLaunch_F: Box_IND_WpsLaunch_F
{
    editorSubcategory = EdSubcat_Ammo_EAF;

    /* Inventory */
	class TransportBackpacks
	{
        delete _xx_B_FieldPack_oli;
		bag_xx(B_AssaultPack_eaf_F,4);
	};
};
class Box_EAF_Ammo_F: Box_IND_Ammo_F
{
    editorSubcategory = EdSubcat_Ammo_EAF;

    /* Inventory */
	class TransportMagazines
	{
		delete _xx_9Rnd_45ACP_Mag;
        mag_xx(11Rnd_45ACP_Mag,6);
        delete _xx_1Rnd_HE_Grenade_shell;
        mag_xx(30Rnd_65x39_caseless_msbs_mag,54);
        delete _xx_100Rnd_65x39_caseless_black_mag;
        mag_xx(200Rnd_65x39_cased_Box_Red,6);
        mag_xx(6Rnd_12Gauge_Pellets,6);
        mag_xx(6Rnd_12Gauge_Slug,6);
        delete _xx_20Rnd_762x51_Mag;
        mag_xx(50Rnd_570x28_SMG_03,6);
        delete _xx_NLAW_F;
        delete _xx_HandGrenade;
        delete _xx_MiniGrenade;
	};
};
class Box_EAF_Equip_F: Box_AAF_Equip_F
{
    editorSubcategory = EdSubcat_Ammo_EAF;

    /* Inventory */
    class TransportItems
    {
        item_xx(H_Cap_eaf_F,1);
        item_xx(H_Cap_eaf_hs_F,1);
        item_xx(H_Booniehat_eaf,1);
        item_xx(H_Booniehat_eaf_hs,1);
        item_xx(H_MilCap_eaf,2);
        item_xx(H_Beret_eaf_F,2);
        delete _xx_V_Chestrig_blk;
        item_xx(V_Chestrig_oli,1);
        item_xx(V_ChestrigF_oli,1);
        item_xx(V_CarrierRigKBT_01_EAF_F,2);
        item_xx(V_CarrierRigKBT_01_heavy_EAF_F,2);
        item_xx(V_CarrierRigKBT_01_light_EAF_F,4);
        delete _xx_H_HelmetCrew_I_E;
        item_xx(H_Tank_black_F,2);
        item_xx(H_CrewHelmetHeli_I_E,2);
        item_xx(H_PilotHelmetHeli_I_E,2);
        item_xx(H_PilotHelmetFighter_I_E,2);
        item_xx(H_HelmetHBK_F,4);
        item_xx(H_HelmetHBK_headset_F,4);
        item_xx(H_HelmetHBK_chops_F,2);
        item_xx(H_HelmetHBK_ear_F,2);
        delete _xx_H_Shemag_olive;
        delete _xx_H_Bandanna_khk;
        delete _xx_H_Bandanna_camo;
        item_xx(V_BandollierB_oli,2);
		item_xx(V_Rangemaster_belt_oli,2);
        delete _xx_V_TacChestrig_grn_F;
        item_xx(V_TacVest_oli,2);
    };
	class TransportBackpacks{};
};
class Box_EAF_Grenades_F: Box_IND_Grenades_F
{
    editorSubcategory = EdSubcat_Ammo_EAF;

    /* Inventory */
	class TransportMagazines
	{
        mag_xx(1Rnd_HE_Grenade_shell,12);
        mag_xx(UGL_FlareGreen_F,2);
        mag_xx(UGL_FlareWhite_F,2);
        mag_xx(I_E_IR_Grenade,8);
        mag_xx(MiniGrenade,12);
        mag_xx(HandGrenade,12);
        mag_xx(SmokeShellBlue,2);
        mag_xx(SmokeShellGreen,2);
        mag_xx(SmokeShellOrange,2);
        delete _xx_SmokeShellPurple;
        delete _xx_SmokeShellRed;
        mag_xx(SmokeShell,2);
        delete _xx_SmokeShellYellow;
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,2);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
        delete _xx_1Rnd_SmokeRed_Grenade_shell;
        delete _xx_1Rnd_SmokePurple_Grenade_shell;
        mag_xx(1Rnd_Smoke_Grenade_shell,2);
        delete _xx_1Rnd_SmokeYellow_Grenade_shell;
	};
};
class Box_EAF_AmmoOrd_F: Box_IND_AmmoOrd_F
{
    editorSubcategory = EdSubcat_Ammo_EAF;

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
};
class Box_EAF_Support_F: Box_IND_Support_F
{
    editorSubcategory = EdSubcat_Ammo_EAF;

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(Laserbatteries,1);
	};
	class TransportItems
	{
		item_xx(Binocular,1);
		item_xx(bipod_01_F_blk,5);
		item_xx(FirstAidKit,10);
		item_xx(acc_flashlight,5);
		item_xx(acc_flashlight_pistol,2);
		item_xx(ItemGPS,5);
		item_xx(I_UavTerminal,2);
		item_xx(acc_pointer_IR,5);
        delete _xx_Laserdesignator_03;
		item_xx(Laserdesignator_01_khk_F,1);
		item_xx(Medikit,1);
		item_xx(MineDetector,1);
		item_xx(NVGoggles_INDEP,5);
		item_xx(Rangefinder,1);
        delete _xx_muzzle_snds_338_black;
		item_xx(muzzle_snds_acp,2);
		item_xx(muzzle_snds_H,5);
		delete _xx_muzzle_snds_b;
		item_xx(muzzle_snds_408_black,2);
		item_xx(muzzle_snds_570,2);
		item_xx(muzzle_mzls_acp,2);
		item_xx(muzzle_mzls_H,2);
		item_xx(ToolKit,1);
	};
	class TransportBackpacks
	{
		bag_xx(B_Carryall_eaf_F,2);
		bag_xx(B_RadioBag_01_eaf_F,2);
	};
};
class Box_EAF_AmmoVeh_F: Box_IND_AmmoVeh_F
{
    editorSubcategory = EdSubcat_Ammo_EAF;
};
class Box_EAF_Uniforms_F: Box_AAF_Uniforms_F
{
    displayName = $STR_A3_A_CfgVehicles_Box_EAF_Uniforms_F0;
    editorSubcategory = EdSubcat_Ammo_EAF;

    /* Inventory */
    class TransportItems
    {
        item_xx(U_I_E_Uniform_01_F,4);
        item_xx(U_I_E_Uniform_01_officer_F,2);
        item_xx(U_I_E_Uniform_01_shortsleeve_F,4);
        item_xx(U_I_E_Uniform_01_tanktop_F,4);
        item_xx(U_I_E_Uniform_01_coveralls_F,4);
        item_xx(U_I_E_Uniform_01_pilot_F,2);
        item_xx(U_I_E_FullGhillie_wdl_F,2);
    };
};
class I_EAF_supplyCrate_F: I_supplyCrate_F
{
    editorSubcategory = EdSubcat_Ammo_EAF;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Supplydrop_EAF_CO.paa"};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(50Rnd_570x28_SMG_03,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(30Rnd_65x39_caseless_msbs_mag,30);
        delete _xx_100Rnd_65x39_caseless_black_mag;
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
        delete _xx_20Rnd_762x51_Mag;
        delete _xx_9Rnd_45ACP_Mag;
		mag_xx(11Rnd_45ACP_Mag,6);
        mag_xx(6Rnd_12Gauge_Pellets,3);
        mag_xx(6Rnd_12Gauge_Slug,3);
        delete _xx_Chemlight_blue;
		mag_xx(chemlight_green,2);
		mag_xx(Laserbatteries,1);
		mag_xx(I_E_IR_Grenade,1);
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
		weap_xx(arifle_MSBS65_F,2);
		weap_xx(arifle_MSBS65_GL_F,1);
		weap_xx(arifle_MSBS65_Mark_F,1);
		weap_xx(arifle_MSBS65_UBS_F,1);
		weap_xx(LMG_Mk200_black_F,1);
		weap_xx(launch_NLAW_F,1);
	};
	class TransportItems
	{
		item_xx(bipod_01_F_blk,2);
		item_xx(FirstAidKit,10);
		item_xx(acc_flashlight,5);
        delete _xx_Laserdesignator_03;
		item_xx(Laserdesignator_01_khk_F,1);
		item_xx(acc_pointer_IR,5);
		item_xx(Binocular,1);
		item_xx(Medikit,1);
		item_xx(MineDetector,1);
		item_xx(ToolKit,1);
		item_xx(optic_ACO,2);
		item_xx(optic_ico_01_f,2);
		item_xx(optic_Hamr,1);
		item_xx(optic_SOS,1);
		item_xx(Rangefinder,1);
		item_xx(NVGoggles_INDEP,5);
	};
	class TransportBackpacks
	{
        delete _xx_B_FieldPack_oli;
		bag_xx(B_AssaultPack_eaf_F,2);
	};
};