/* Binoculars */
class Binocular;
class NVGoggles: Binocular
{
    class ItemInfo;
};
class Integrated_NVG_F: NVGoggles
{
    modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";
};
class Integrated_NVG_TI_0_F: NVGoggles
{
    modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";
};
class Integrated_NVG_TI_1_F: NVGoggles
{
    modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";
};
class Laserdesignator;
class Laserdesignator_02;
class O_NVGoggles_hex_F: NVGoggles
{
    modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";
    picture = "\A3\Weapons_F_Exp\Binocular\Data\UI\icon_O_NVGoggles_hex_F_CA.paa";
};
class O_NVGoggles_urb_F: O_NVGoggles_hex_F
{
    modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";
};
class O_NVGoggles_ghex_F: O_NVGoggles_hex_F
{
    modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";
};
class NVGogglesB_blk_F: NVGoggles
{
    modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";
};
class NVGogglesB_grn_F: NVGoggles
{
    modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";
};
class NVGogglesB_gry_F: NVGoggles
{
    modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";
};
class Laserdesignator_02_blk_F: Laserdesignator_02
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	displayName = $STR_A3_A_CfgWeapons_Laserdesignator_02_blk_F0;
	model = /*"\A3_Aegis\Weapons_F_Aegis\Binocular\Laserdesignator_02_blk_F.p3d"*/ "\A3\Weapons_F\Binocular\Laserdesignator_02_F.p3d";
	picture = /*"\A3_Aegis\Weapons_F_Aegis\Binocular\Data\UI\icon_Laserdesignator_02_blk_F_X_CA.paa"*/ "\A3\Weapons_F\Data\Placeholder_CO.paa";
};
class Laserdesignator_02_grn_F: Laserdesignator_02
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	displayName = $STR_A3_A_CfgWeapons_Laserdesignator_02_grn_F0;
	model = /*"\A3_Aegis\Weapons_F_Aegis\Binocular\Laserdesignator_02_grn_F.p3d"*/ "\A3\Weapons_F\Binocular\Laserdesignator_02_F.p3d";
	picture = /*"\A3_Aegis\Weapons_F_Aegis\Binocular\Data\UI\icon_Laserdesignator_02_grn_F_X_CA.paa"*/ "\A3\Weapons_F\Data\Placeholder_CO.paa";
};
class Laserdesignator_04: Laserdesignator
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgWeapons_Laserdesignator_040;
	model = "\A3\Weapons_F_Beta\Binocular\LTLM.p3d";
	picture = "\A3\Weapons_F\Data\UI\gear_Lasermarker_CA.paa";
};
class O_NVGoggles_blk_F: O_NVGoggles_hex_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgWeapons_O_NVGoggles_blk_F0;
	modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";
	model = "\A3\Weapons_F_Exp\Binocular\O_NVGoggles_blk_F.p3d";
	picture = "\A3\Weapons_F_Exp\Binocular\Data\UI\icon_O_NVGoggles_blk_F_CA.paa";
	class ItemInfo: ItemInfo
	{
		uniformModel = "\A3\Weapons_F_Exp\Binocular\O_NVGoggles_blk_F.p3d";
		modelOff = "\A3\Weapons_F_Exp\Binocular\O_NVGoggles_blk_off_F.p3d";
	};
};
class Goggles: NVGoggles
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgWeapons_Goggles0;
	modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";
	model = "\A3_Aegis\Weapons_F_Aegis\Binocular\Goggles.p3d";
	picture = "\A3\Characters_F\Data\UI\icon_G_Combat_CA.paa";
	visionMode[] = {Normal};
	descriptionShort = $STR_A3_A_CfgWeapons_Goggles1;
	class ItemInfo: ItemInfo
	{
		uniformModel = "\A3_Aegis\Weapons_F_Aegis\Binocular\Goggles.p3d";
		modelOff = "\A3_Aegis\Weapons_F_Aegis\Binocular\Goggles.p3d";
		mass = 6;
	};
};
class Goggles_tna_F: Goggles
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgWeapons_Goggles_tna_F0;
	model = "\A3_Aegis\Weapons_F_Aegis\Binocular\Goggles_tna_F.p3d";
	picture = "\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Combat_Goggles_tna_F_CA.paa";
	class ItemInfo: ItemInfo
	{
		uniformModel = "\A3_Aegis\Weapons_F_Aegis\Binocular\Goggles_tna_F.p3d";
		modelOff = "\A3_Aegis\Weapons_F_Aegis\Binocular\Goggles_tna_F.p3d";
	};
};
class Goggles_grn_F: Goggles
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgWeapons_Goggles_grn_F0;
	model = "\A3_Aegis\Weapons_F_Aegis\Binocular\Goggles_grn_F.p3d";
	picture = "\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Combat_Goggles_tna_F_CA.paa";
	class ItemInfo: ItemInfo
	{
		uniformModel = "\A3_Aegis\Weapons_F_Aegis\Binocular\Goggles_grn_F.p3d";
		modelOff = "\A3_Aegis\Weapons_F_Aegis\Binocular\Goggles_grn_F.p3d";
	};
};