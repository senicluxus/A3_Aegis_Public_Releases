/* Russia */
class O_R_CargoNet_01_ammo_F: O_CargoNet_01_ammo_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_CargoNet_01_ammo_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_R_CargoNet_01_ammo_F0;
	hiddenSelections[] =
	{
		Camo_1,
		Camo_2,
		Camo_3,
		Camo_3_MLOD,
		Camo_4
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_RUS_CO.paa",
		"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\AmmoBox_signs_RUS_CA.paa",
		"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Cargo_stripes_RUS_CO.paa",
		"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Ammo_cargo_RUS_mlod_CO.paa",
		"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Pallet_MilBoxes_RUS_CO.paa"
	};
	editorSubcategory = EdSubcat_Ammo_RUS;

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
		mag_xx(Aegis_40Rnd_9x21_Gepard_Yellow_Mag_F,12);
		mag_xx(1Rnd_HE_Grenade_shell,24);
		mag_xx(30Rnd_545x39_AK12_Mag_F,96);
		mag_xx(Aegis_60Rnd_545x39_Mag_Green_F,32);
		mag_xx(10Rnd_127x54_Mag,12);
		mag_xx(10Rnd_762x54_Mag,12);
		mag_xx(10Rnd_93x64_DMR_05_Mag,6);
		mag_xx(5Rnd_127x108_APDS_Mag,4);
		mag_xx(5Rnd_127x108_Mag,8);
		mag_xx(4Rnd_12Gauge_Pellets,6);
		mag_xx(4Rnd_12Gauge_Slug,6);
		mag_xx(30Rnd_762x39_AK12_Lush_Mag_F,48);
		mag_xx(75Rnd_762x39_AK12_Lush_Mag_F,16);
		mag_xx(ATMine_Range_Mag,5);
		mag_xx(APERSBoundingMine_Range_Mag,5);
		mag_xx(APERSMine_Range_Mag,5);
		mag_xx(APERSTripMine_Wire_Mag,5);
		mag_xx(ClaymoreDirectionalMine_Remote_Mag,5);
		mag_xx(DemoCharge_Remote_Mag,5);
		mag_xx(SatchelCharge_Remote_Mag,2);
		mag_xx(O_R_IR_Grenade,8);
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
		weap_xx(arifle_AK12_545_F,8);
		weap_xx(arifle_AK12_GL_545_F,4);
		weap_xx(arifle_AK12U_545_F,4);
		weap_xx(arifle_RPK12_F,4);
		weap_xx(arifle_SDAR_F,2);
		weap_xx(hgun_Rook40_F,2);
		weap_xx(launch_RPG32_green_F,2);
		weap_xx(launch_O_Titan_camo_F,2);
		weap_xx(launch_O_Titan_short_camo_F,2);
		weap_xx(launch_O_Vorona_green_F,2);
		weap_xx(Aegis_SMG_Gepard_blk_F,2);
		weap_xx(srifle_DMR_04_F,2);
		weap_xx(srifle_DMR_01_black_F,2);
		weap_xx(srifle_DMR_05_blk_F,2);
		weap_xx(srifle_GM6_F,2);
		weap_xx(sgun_Mp153_black_F,2);
		weap_xx(arifle_AK12_lush_F,4);
		weap_xx(arifle_AK12_GL_lush_F,2);
		weap_xx(arifle_AK12U_lush_F,2);
		weap_xx(arifle_RPK12_lush_F,2);
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
		item_xx(optic_ACO_grn_AK_F,2);
		item_xx(Aegis_optic_1p87,2);
		item_xx(optic_ACO_grn_smg,2);
		item_xx(optic_Holosight_lush_F,2);
		item_xx(acc_flashlight,5);
		item_xx(acc_flashlight_pistol,2);
		item_xx(acc_pointer_IR,5);
		item_xx(Laserdesignator_02_grn_F,1);
		item_xx(muzzle_snds_b_lush_F,5);
		item_xx(muzzle_snds_L,5);
		item_xx(muzzle_snds_545,5);
		item_xx(muzzle_snds_93mmg,2);
		item_xx(muzzle_mzls_b,2);
		item_xx(muzzle_mzls_L,2);
		item_xx(muzzle_mzls_545,2);
		item_xx(bipod_02_F_blk,3);
		item_xx(bipod_02_F_lush,2);
		item_xx(optic_Arco_blk_F,1);
		item_xx(optic_Arco_AK_blk_F,1);
		item_xx(optic_Arco_AK_lush_F,2);
		item_xx(optic_DMS_weathered_F,1);
        item_xx(optic_DMS_weathered_Kir_F,1);
		item_xx(optic_LRPS,2);
		item_xx(optic_Nightstalker,5);
		item_xx(Rangefinder,1);
		item_xx(O_NVGoggles_grn_F,5);
	};
	class TransportBackpacks
    {
		bag_xx(B_FieldPack_taiga_F,5);
	};
};

/* Russia (Mediterranean) */
class O_R_CargoNet_01_ammo_arid_F: O_R_CargoNet_01_ammo_F
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
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_CargoNet_01_ammo_arid_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "Cargo Net [Russia Arid]";
	editorSubcategory = EdSubcat_Ammo_RUS_Mediterranean;

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
		mag_xx(30Rnd_9x21_Mag_SMG_02,12);
		mag_xx(1Rnd_HE_Grenade_shell,24);
		mag_xx(30Rnd_545x39_AK12_Mag_F,96);
		mag_xx(75Rnd_762x39_AK12_Mag_F,32);
		mag_xx(10Rnd_127x54_Mag,12);
		mag_xx(10Rnd_93x64_DMR_05_Mag,12);
		mag_xx(5Rnd_127x108_APDS_Mag,4);
		mag_xx(5Rnd_127x108_Mag,8);
		mag_xx(4Rnd_12Gauge_Pellets,6);
		mag_xx(4Rnd_12Gauge_Slug,6);
		mag_xx(30Rnd_762x39_AK12_Arid_Mag_F,48);
		mag_xx(75Rnd_762x39_AK12_Arid_Mag_F,16);
		mag_xx(ATMine_Range_Mag,5);
		mag_xx(APERSBoundingMine_Range_Mag,5);
		mag_xx(APERSMine_Range_Mag,5);
		mag_xx(APERSTripMine_Wire_Mag,5);
		mag_xx(ClaymoreDirectionalMine_Remote_Mag,5);
		mag_xx(DemoCharge_Remote_Mag,5);
		mag_xx(SatchelCharge_Remote_Mag,2);
		mag_xx(O_R_IR_Grenade,8);
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
		weap_xx(arifle_AK12_545_F,8);
		weap_xx(arifle_AK12_GL_545_F,4);
		weap_xx(arifle_AK12U_545_F,4);
		weap_xx(arifle_RPK12_F,4);
		weap_xx(arifle_SDAR_F,2);
		weap_xx(hgun_Rook40_F,2);
		weap_xx(launch_RPG32_green_F,2);
		weap_xx(launch_O_Titan_camo_F,2);
		weap_xx(launch_O_Titan_short_camo_F,2);
		weap_xx(launch_O_Vorona_green_F,2);
		weap_xx(SMG_02_F,2);
		weap_xx(srifle_DMR_04_F,2);
		weap_xx(srifle_DMR_05_blk_F,2);
		weap_xx(srifle_GM6_F,2);
		weap_xx(sgun_Mp153_black_F,2);
		weap_xx(arifle_AK12_arid_F,4);
		weap_xx(arifle_AK12_GL_arid_F,2);
		weap_xx(arifle_AK12U_arid_F,2);
		weap_xx(arifle_RPK12_arid_F,2);
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
		item_xx(optic_ACO_grn_AK_F,2);
		item_xx(optic_ACO_grn_smg,2);
		item_xx(optic_Holosight_arid_F,2);
		item_xx(acc_flashlight,5);
		item_xx(acc_flashlight_pistol,2);
		item_xx(acc_pointer_IR,5);
		item_xx(Laserdesignator_02_grn_F,1);
		item_xx(muzzle_snds_b_arid_F,5);
		item_xx(muzzle_snds_L,5);
		item_xx(muzzle_snds_545,5);
		item_xx(muzzle_snds_93mmg,2);
		item_xx(muzzle_mzls_b,2);
		item_xx(muzzle_mzls_L,2);
		item_xx(muzzle_mzls_545,2);
		item_xx(bipod_02_F_blk,3);
		item_xx(bipod_02_F_arid,2);
		item_xx(optic_Arco_blk_F,1);
		item_xx(optic_Arco_AK_blk_F,1);
		item_xx(optic_Arco_AK_arid_F,2);
		item_xx(optic_DMS_weathered_F,1);
        item_xx(optic_DMS_weathered_Kir_F,1);
		item_xx(optic_LRPS,2);
		item_xx(optic_Nightstalker,5);
		item_xx(Rangefinder,1);
		item_xx(O_NVGoggles_grn_F,5);
	};
	class TransportBackpacks
    {
		bag_xx(B_FieldPack_green_F,5);
	};
};