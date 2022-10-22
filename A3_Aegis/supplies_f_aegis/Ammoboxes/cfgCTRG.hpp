/* CTRG */
class C_supplyCrate_F: ReammoBox_F
{
    hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Supplydrop_CO.paa"};
    editorSubcategory = EdSubcat_Ammo_CTRG;

    /* Inventory */
	class TransportMagazines
	{
		delete _xx_30Rnd_65x39_caseless_mag;
		mag_xx(30Rnd_65x39_caseless_black_mag,30);
		delete _xx_100Rnd_65x39_caseless_mag;
		mag_xx(100Rnd_65x39_caseless_black_mag,6);
		delete _xx_20Rnd_762x51_Mag;
		delete _xx_7Rnd_408_mag;
		mag_xx(10Rnd_338_Mag,6);
		mag_xx(16Rnd_9x21_Mag,2);
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
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Binocular,1);
		item_xx(Laserdesignator,1);
		delete _xx_optic_Holosight;
		item_xx(optic_Holosight_blk_F,2);
		item_xx(optic_Hamr,2);
		item_xx(optic_SOS,2);
		item_xx(optic_NVS,2);
		item_xx(optic_tws,2);
		item_xx(optic_tws_mg,2);
		item_xx(optic_tws_sniper,2);
		item_xx(Rangefinder,1);
		item_xx(acc_flashlight,5);
		item_xx(acc_pointer_IR,5);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
		item_xx(bipod_01_F_blk,2);
		delete _xx_bipod_01_F_mtp;
		delete _xx_bipod_01_F_snd;
		item_xx(NVGogglesB_blk_F,5);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_Black_F,1);
		delete _xx_arifle_MX_F;
		weap_xx(arifle_MX_Black_F,2);
		delete _xx_arifle_MX_GL_F;
		weap_xx(arifle_MX_GL_Black_F,1);
		delete _xx_arifle_MX_SW_F;
		weap_xx(arifle_MX_SW_Black_F,1);
		weap_xx(arifle_MXM_Black_F,1);
		delete _xx_srifle_EBR_F;
		delete _xx_srifle_LRR_F;
		delete _xx_srifle_DMR_02_F;
		weap_xx(srifle_DMR_02_camo_F,1);
		weap_xx(launch_NLAW_F,1);
	};
	class TransportBackpacks
	{
		bag_xx(B_Kitbag_rgr,2);
	};
};

/* CTRG (Pacific) */
class C_T_supplyCrate_F: ReammoBox_F
{
    hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Data\Supplydrop_CO.paa"};
    editorSubcategory = EdSubcat_Ammo_CTRG_Pacific;

    /* Inventory */
	class TransportMagazines
	{
		delete _xx_30Rnd_556x45_Stanag;
		mag_xx(30Rnd_556x45_Stanag_red,24);
		mag_xx(150Rnd_556x45_Drum_Mag_F,6);
		mag_xx(20Rnd_762x51_Mag,6);
		delete _xx_7Rnd_408_mag;
		mag_xx(10Rnd_338_Mag,6);
		mag_xx(16Rnd_9x21_Mag,2);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		delete _xx_3Rnd_HE_Grenade_shell;
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
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Binocular,1);
		delete _xx_LaserDesignator;
		item_xx(Laserdesignator_01_khk_F,1);
		delete _xx_optic_Holosight;
		item_xx(optic_Holosight_blk_F,2);
		item_xx(optic_ERCO_blk_F,2);
		item_xx(optic_SOS,2);
		item_xx(optic_NVS,2);
		item_xx(optic_tws,2);
		item_xx(optic_tws_mg,2);
		item_xx(optic_tws_sniper,2);
		item_xx(Rangefinder,1);
		item_xx(acc_flashlight,5);
		item_xx(acc_pointer_IR,5);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
		item_xx(bipod_01_F_blk,2);
		delete _xx_bipod_01_F_mtp;
		delete _xx_bipod_01_F_snd;
		item_xx(NVGogglesB_grn_F,5);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SPAR_01_blk_F,3);
		weap_xx(arifle_SPAR_01_GL_blk_F,1);
		weap_xx(arifle_SPAR_02_blk_F,1);
		weap_xx(arifle_SPAR_03_blk_F,1);
		delete _xx_srifle_LRR_tna_F;
		delete _xx_srifle_DMR_02_F;
		weap_xx(srifle_DMR_02_tna_F,1);
		weap_xx(launch_NLAW_F,1);
	};
	class TransportBackpacks
	{
		delete _xx_B_AssaultPack_tna_F;
		bag_xx(B_Kitbag_rgr,2);
	};
};