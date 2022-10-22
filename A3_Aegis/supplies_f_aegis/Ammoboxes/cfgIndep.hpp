/* AAF */
class Box_IND_Wps_F: IND_Box_Base
{
    editorSubcategory = EdSubcat_Ammo_AAF;

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,8);
		mag_xx(20Rnd_762x51_Mag,1);
		mag_xx(9Rnd_45ACP_Mag,1);
		mag_xx(30Rnd_9x21_Mag,1);
		mag_xx(200Rnd_65x39_cased_Box,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_Mk20C_F,2);
		weap_xx(arifle_Mk20_F,4);
		weap_xx(arifle_Mk20_GL_F,2);
		weap_xx(LMG_Mk200_F,2);
		weap_xx(srifle_EBR_F,1);
		weap_xx(hgun_PDW2000_F,1);
		weap_xx(hgun_ACPC2_F,1);
	};
	class TransportItems
    {
		item_xx(optic_ACO_grn,2);
		item_xx(optic_ACO_grn_smg,1);
		item_xx(optic_MRCO,2);
		item_xx(optic_Holosight_blk_F,2);
		item_xx(optic_Holosight_smg_blk_F,1);
		item_xx(optic_SOS,1);
    };
};
class Box_IND_WpsSpecial_F: IND_Box_Base
{
    editorSubcategory = EdSubcat_Ammo_AAF;

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(5Rnd_127x108_Mag,6);
        delete _xx_20Rnd_762x51_Mag;
		mag_xx(20Rnd_556x45_UW_mag,3);
		delete _xx_30Rnd_556x45_Stanag;
		mag_xx(20Rnd_556x45_Stanag,3);
		mag_xx(8Rnd_12Gauge_Pellets,3);
		mag_xx(8Rnd_12Gauge_Slug,3);
	};
	class TransportWeapons
	{
		weap_xx(srifle_GM6_F,1);
		weap_xx(arifle_SDAR_F,1);
		delete _xx_srifle_EBR_F;
		weap_xx(sgun_M4_F,1);
	};
	class TransportItems
	{
		delete _xx_optic_ACO_grn;
		delete _xx_optic_MRCO;
		delete _xx_optic_SOS;
		delete _xx_optic_Holosight;
		delete _xx_optic_Holosight_smg;
		item_xx(optic_NVS,1);
		item_xx(optic_tws,1);
		item_xx(optic_tws_mg,1);
		item_xx(optic_tws_sniper,1);
		item_xx(optic_DMS,1);
		item_xx(optic_LRPS,1);
	};
};
class Box_IND_WpsLaunch_F: IND_Box_Base
{
    editorSubcategory = EdSubcat_Ammo_AAF;

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
		weap_xx(launch_I_Titan_F,1);
		weap_xx(launch_I_Titan_short_F,1);
		weap_xx(launch_NLAW_F,1);
		weap_xx(launch_MRAWS_olive_rail_F,1);
	};
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_oli,4);
	};
};
class Box_IND_Ammo_F: IND_Box_Base
{
    editorSubcategory = EdSubcat_Ammo_AAF;

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,48);
		mag_xx(20Rnd_762x51_Mag,6);
		mag_xx(9Rnd_45ACP_Mag,2);
		mag_xx(30Rnd_9x21_Mag,6);
		mag_xx(200Rnd_65x39_cased_Box,6);
		delete _xx_1Rnd_HE_Grenade_shell;
		delete _xx_NLAW_F;
		delete _xx_HandGrenade;
		delete _xx_MiniGrenade;
	};
};
class Box_IND_AmmoOrd_F: IND_Box_Base
{
    editorSubcategory = EdSubcat_Ammo_AAF;

    /* Inventory */
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
class Box_IND_Grenades_F: IND_Box_Base
{
    editorSubcategory = EdSubcat_Ammo_AAF;

    /* Inventory */
	class TransportMagazines
	{
        mag_xx(1Rnd_HE_Grenade_shell,12);
        mag_xx(1Rnd_Smoke_Grenade_shell,2);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
        delete _xx_1Rnd_SmokeRed_Grenade_shell;
        delete _xx_1Rnd_SmokeYellow_Grenade_shell;
        mag_xx(1Rnd_SmokePurple_Grenade_shell,2);
        delete _xx_1Rnd_SmokeBlue_Grenade_shell;
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
        mag_xx(HandGrenade,12);
        mag_xx(MiniGrenade,12);
        mag_xx(SmokeShell,2);
        delete _xx_SmokeShellRed;
        mag_xx(SmokeShellGreen,2);
        delete _xx_SmokeShellYellow;
        mag_xx(SmokeShellPurple,2);
        delete _xx_SmokeShellBlue;
        mag_xx(SmokeShellOrange,2);
        mag_xx(UGL_FlareYellow_F,2);
        mag_xx(UGL_FlareGreen_F,2);
        mag_xx(I_IR_Grenade,8);
	};
};
class Box_IND_Support_F: IND_Box_Base
{
    editorSubcategory = EdSubcat_Ammo_AAF;

    /* Inventory */
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
		item_xx(muzzle_snds_M,5);
		item_xx(muzzle_snds_H,2);
		item_xx(muzzle_snds_b,5);
		item_xx(muzzle_mzls_acp,2);
		item_xx(muzzle_mzls_L,2);
		item_xx(muzzle_mzls_M,2);
		item_xx(muzzle_mzls_H,2);
		item_xx(muzzle_mzls_b,2);
		item_xx(Binocular,1);
		item_xx(Rangefinder,1);
		item_xx(Laserdesignator_03,1);
		item_xx(bipod_03_F_blk,5);
        delete _xx_bipod_03_F_oli;
		item_xx(NVGoggles_INDEP,5);
	};
	class TransportBackpacks
	{
		bag_xx(B_Carryall_oli,2);
		bag_xx(B_RadioBag_01_digi_F,2);
	};
};
class Box_IND_AmmoVeh_F: IND_Box_Base
{
    editorSubcategory = EdSubcat_Ammo_AAF;
};
class I_supplyCrate_F: B_supplyCrate_F
{
    editorSubcategory = EdSubcat_Ammo_AAF;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Supplydrop_INDP_CO.paa"};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(9Rnd_45ACP_Mag,2);
		mag_xx(30Rnd_9x21_Mag,6);
		mag_xx(20Rnd_762x51_Mag,6);
		mag_xx(30Rnd_556x45_Stanag,24);
		mag_xx(200Rnd_65x39_cased_Box,3);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
		mag_xx(chemlight_green,2);
		mag_xx(I_IR_Grenade,2);
		mag_xx(NLAW_F,3);
		mag_xx(Laserbatteries,1);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
		mag_xx(UGL_FlareYellow_F,2);
		mag_xx(UGL_FlareGreen_F,2);
	};
	class TransportWeapons
	{
		weap_xx(launch_NLAW_F,1);
		weap_xx(arifle_Mk20_F,2);
		weap_xx(LMG_Mk200_F,1);
		weap_xx(arifle_Mk20_GL_F,1);
		weap_xx(arifle_Mk20C_F,1);
		weap_xx(srifle_EBR_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Laserdesignator_03,1);
		item_xx(acc_flashlight,5);
		item_xx(bipod_03_F_blk,2);
		item_xx(Binocular,1);
		item_xx(optic_ACO_grn,2);
		item_xx(optic_ACO_grn_smg,1);
		item_xx(optic_MRCO,2);
		item_xx(optic_Holosight_blk_F,2);
		item_xx(optic_Holosight_smg_blk_F,1);
		item_xx(optic_SOS,1);
		item_xx(acc_pointer_IR,5);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
		item_xx(NVGoggles_INDEP,5);
	};
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_oli,2);
	};
};
// Arma 3 Apex
class Box_AAF_Equip_F: Box_NATO_Equip_F
{
    editorSubcategory = EdSubcat_Ammo_AAF;

    /* Inventory */
	class TransportItems
	{
		delete _xx_V_Rangemaster_belt;
		item_xx(V_Rangemaster_belt_oli,2);
		item_xx(V_BandollierB_oli,2);
		delete _xx_V_BandollierB_blk;
		item_xx(V_Chestrig_oli,1);
		item_xx(V_ChestrigF_oli,1);
		delete _xx_V_TacChestrig_oli_F;
		item_xx(V_TacVest_oli,2);
		delete _xx_V_TacVest_camo;
		item_xx(V_PlateCarrierIA1_dgtl,4);
		item_xx(V_PlateCarrierIA2_dgtl,2);
		item_xx(V_PlateCarrierIAGL_dgtl,2);
		delete _xx_V_PlateCarrierIAGL_oli;
		delete _xx_H_Booniehat_oli;
		item_xx(H_Booniehat_dgtl,1);
		item_xx(H_Booniehat_dgtl_hs,1);
		item_xx(H_Cap_blk_Raven,1);
		item_xx(H_Cap_blk_Raven_hs,1);
		item_xx(H_MilCap_dgtl,2);
		delete _xx_H_Shemag_olive;
		item_xx(H_Beret_grn,2);
		item_xx(H_HelmetIA,10);
		item_xx(H_HelmetCrew_I,2);
		item_xx(H_PilotHelmetFighter_I,2);
		item_xx(H_PilotHelmetHeli_I,2);
		item_xx(H_CrewHelmetHeli_I,2);
		item_xx(G_I_Diving,2);
		item_xx(V_RebreatherIA,2);
	};
};
class Box_AAF_Uniforms_F: Box_NATO_Uniforms_F
{
    editorSubcategory = EdSubcat_Ammo_AAF;

    /* Inventory */
	class TransportItems
	{
		item_xx(U_I_CombatUniform,4);
		item_xx(U_I_OfficerUniform,2);
		item_xx(U_I_CombatUniform_shortsleeve,4);
		item_xx(U_I_CombatUniform_tshirt,4);
		item_xx(U_I_HeliPilotCoveralls,4);
		item_xx(U_I_pilotCoveralls,2);
		item_xx(U_Tank_green_F,2);
		item_xx(U_I_GhillieSuit,2);
		item_xx(U_I_FullGhillie_ard,1);
		item_xx(U_I_FullGhillie_lsh,1);
		item_xx(U_I_FullGhillie_sard,1);
		item_xx(U_I_Wetsuit,2);
	};
};
