// Arma 3 Apex
class Box_NATO_Equip_F;
// Arma 3 Aegis
class Box_IR_Equip_F: Box_NATO_Equip_F
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
	//editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Box_IR_Equip_F.jpg";
	displayName = $STR_A3_O_CfgVehicles_Box_IR_Equip_F0;
    /*
	hiddenSelectionsTextures[] =
	{
		"\A3_Opf\Supplies_F_Opf\Ammoboxes\Data\equipment_box_RUS_CO.paa",
		"\A3_Opf\Supplies_F_Opf\Ammoboxes\Data\equipment_box_RUS_CA.paa"
	};
    */
	editorSubcategory = EdSubcat_Ammo_Raven;
	class TransportMagazines
	{
		mag_xx(30Rnd_9x21_Mag_SMG_02,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(30Rnd_65x39_case_mag,24);
		mag_xx(200Rnd_65x39_cased_Box_Green,3);
		mag_xx(10Rnd_762x54_mag,6);
		mag_xx(17Rnd_9x21_Mag,2);
		mag_xx(chemlight_red,2);
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
		weap_xx(SMG_02_F,1);
        weap_xx(arifle_Abakan_F,3);
        weap_xx(arifle_Abakan_GL_F,1);
        weap_xx(LMG_Mk200_black_F,1);
        weap_xx(srifle_DMR_01_black_F,1);
		weap_xx(hgun_Rook40_F,1);
        weap_xx(launch_RPG32_black_F,1);
	};
	class TransportItems
	{
		item_xx(U_O_E_Uniform_01_taiga_F,2);
		item_xx(U_O_R_CombatUniform_tshirt_taiga_F,2);
		item_xx(U_O_E_Uniform_01_sweater_F,1);
		item_xx(V_HarnessOSpec_blk,5);
		item_xx(H_Cap_grn_Raven,1);
		item_xx(H_HelmetSpecter_black_F,1);
		item_xx(H_HelmetSpecter_black_headset_F,1);
		item_xx(H_HelmetSpecter_paint_F,1);
		item_xx(H_HelmetSpecter_paint_headset_F,1);
		item_xx(bipod_02_F_blk,2);
		item_xx(FirstAidKit,10);
		item_xx(acc_flashlight,5);
		item_xx(I_R_UavTerminal,1);
		item_xx(Binocular,1);
		item_xx(Medikit,1);
		item_xx(MineDetector,1);
		item_xx(ToolKit,1);
		item_xx(optic_ACO_grn_AK_F,2);
		item_xx(optic_Arco_blk_F,2);
		item_xx(optic_DMS,2);
		item_xx(Rangefinder,1);
	};
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_green_F,2);
	};
};