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
/*class NVGogglesB_blk_F: NVGoggles
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
};*/
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

/* NVG Slot Goggles */
class Goggles: NVGoggles
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgWeapons_Goggles0;
	modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";
	model = "\A3_Aegis\Weapons_F_Aegis\Binocular\Goggles.p3d";
	picture = "\A3_Aegis\weapons_f_aegis\Binocular\Data\UI\Goggles_ca.paa";
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
	picture = "\A3_Aegis\weapons_f_aegis\Binocular\Data\UI\Goggles_tna_F_ca.paa";
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
	picture = "\A3_Aegis\weapons_f_aegis\Binocular\Data\UI\Goggles_grn_F_ca.paa";
	class ItemInfo: ItemInfo
	{
		uniformModel = "\A3_Aegis\Weapons_f_aegis\Binocular\Goggles_grn_F.p3d";
		modelOff = "\A3_Aegis\Weapons_f_aegis\Binocular\Goggles_grn_F.p3d";
	};
};
class Aegis_Goggles_Cover_F: NVGoggles
{
	author = $STR_A3_A_Jamie;
	displayName = $STR_A3_A_CfgWeapons_Goggles_Cover0;
	modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";
	model = "\A3_Aegis\Weapons_F_Aegis\Binocular\Goggles_cover_snd_F.p3d";
	picture = "\A3_Aegis\weapons_f_aegis\Binocular\Data\UI\Aegis_Goggles_Cover_F_ca.paa";
	visionMode[] = {Normal};
	descriptionShort = $STR_A3_A_CfgWeapons_Goggles1;
	class ItemInfo: ItemInfo
	{
		uniformModel = "\A3_Aegis\Weapons_F_Aegis\Binocular\Goggles_cover_snd_F.p3d";
		modelOff = "\A3_Aegis\Weapons_F_Aegis\Binocular\Goggles_cover_snd_F.p3d";
		mass = 6;
	};
};
class Aegis_Goggles_Cover_grn_F: Aegis_Goggles_Cover_F
{
	author = $STR_A3_A_Jamie;
	displayName = $STR_A3_A_CfgWeapons_Goggles_Cover_grn0;
	model = "\A3_Aegis\Weapons_F_Aegis\Binocular\Goggles_cover_grn_F.p3d";
	picture = "\A3_Aegis\weapons_f_aegis\Binocular\Data\UI\Aegis_Goggles_Cover_grn_F_ca.paa";
	class ItemInfo: ItemInfo
	{
		uniformModel = "\A3_Aegis\Weapons_f_aegis\Binocular\Goggles_cover_grn_F.p3d";
		modelOff = "\A3_Aegis\Weapons_f_aegis\Binocular\Goggles_cover_grn_F.p3d";
	};
};

/* IVAS */
class Aegis_nvg_IVAS_01_base: NVGoggles
{
	scope = Protected;
	scopeArsenal = Protected;
	author = $STR_A3_A_BranFlakes;
	displayName = "IVAS";
	model = "\A3_Aegis\Weapons_F_Aegis\Binocular\IVAS_off.p3d";
	hiddenSelections[] =
	{
		Camo1,	// Frames component
		Camo2,	// Tight straps
		Camo3	// Wide straps
	};

	//--- Vision
	modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";
	visionMode[] =
	{
		Normal,
		NVG,
		TI
	};
	thermalMode[] = {0};
	class ItemInfo: ItemInfo
	{
		uniformModel = "\A3_Aegis\Weapons_F_Aegis\Binocular\IVAS_on.p3d";
		modelOff = "\A3_Aegis\Weapons_F_Aegis\Binocular\IVAS_off.p3d";
		hiddenSelections[] =
		{
			Camo1,	// Frames component
			Camo2,	// Tight straps
			Camo3	// Wide straps
		};
		mass = 30;
	};
};
class Aegis_NVG_IVAS_01_tan_F: Aegis_nvg_IVAS_01_base
{
	scope = public;
	scopeArsenal = public;
	author = $STR_A3_A_AveryTheKitty_and_Defcon;
	picture = "\A3_Aegis\Weapons_F_Aegis\Binocular\Data\UI\icon_Aegis_nvg_IVAS_01_tan_CA.paa";
	displayName = $STR_A3_A_CfgWeapons_Aegis_NVG_IVAS_tan_F0;
	hiddenSelectionsTextures[] = 
	{
		"\A3_Aegis\Weapons_F_Aegis\Binocular\Data\IVAS_tan_CO.paa",
		"\A3_Aegis\Weapons_F_Aegis\Binocular\Data\IVAS_tan_CO.paa"
	};
};
class Aegis_NVG_IVAS_01_blk_F: Aegis_nvg_IVAS_01_base
{
	scope = public;
	scopeArsenal = public;
	author = $STR_A3_A_AveryTheKitty_and_Defcon;
	picture = "\A3_Aegis\Weapons_F_Aegis\Binocular\Data\UI\icon_Aegis_nvg_IVAS_01_black_CA.paa";
	displayName = $STR_A3_A_CfgWeapons_Aegis_NVG_IVAS_blk_F0;
	hiddenSelectionsTextures[] = 
	{
		"\A3_Aegis\Weapons_F_Aegis\Binocular\Data\IVAS_black_CO.paa",
		"\A3_Aegis\Weapons_F_Aegis\Binocular\Data\IVAS_black_CO.paa"
	};
};
class Aegis_NVG_IVAS_01_grn_F: Aegis_nvg_IVAS_01_base
{
	scope = public;
	scopeArsenal = public;
	author = $STR_A3_A_AveryTheKitty_and_Defcon;
	picture = "\A3_Aegis\Weapons_F_Aegis\Binocular\Data\UI\icon_Aegis_nvg_IVAS_01_green_CA.paa";
	displayName = $STR_A3_A_CfgWeapons_Aegis_NVG_IVAS_grn_F0;
	hiddenSelectionsTextures[] = 
	{
		"\A3_Aegis\Weapons_F_Aegis\Binocular\Data\IVAS_green_CO.paa",
		"\A3_Aegis\Weapons_F_Aegis\Binocular\Data\IVAS_green_CO.paa"
	};
};

/* NVG Slot Armbands */
class Aegis_NV_G_Armband_Blu_F: NVGoggles
{
	author = $STR_A3_A_Jamie;
	displayName = $STR_A3_A_CfgGlasses_G_Armband_BLU_F0;
	modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";
	model = "\A3_Aegis\Characters_F_Aegis\Facewear\G_Armband.p3d";
	picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_BLU_F_CA.paa";
	hiddenSelections[] =
	{
		camo
	};
	hiddenSelectionsTextures[] = 
	{
		"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_blu_CO.paa"
	};
	visionMode[] = {Normal};
	descriptionShort = $STR_A3_A_CfgGlasses_G_Armband1;
	class ItemInfo: ItemInfo
	{
		uniformModel = "\A3_Aegis\Characters_F_Aegis\Facewear\G_Armband.p3d";
		modelOff = "\A3_Aegis\Characters_F_Aegis\Facewear\G_Armband.p3d";
		mass = 2;
		hiddenSelections[] =
		{
			camo
		};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_blu_CO.paa"
		};
	};
};
class Aegis_NV_G_Armband_IND_F: Aegis_NV_G_Armband_Blu_F
{
	author = $STR_A3_A_Jamie;
	displayName = $STR_A3_A_CfgGlasses_G_Armband_IND_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_IND_F_CA.paa";
	hiddenSelectionsTextures[] = 
	{
		"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_indep_CO.paa"
	};
	class ItemInfo: ItemInfo
	{
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_indep_CO.paa"
		};
	};
};
class Aegis_NV_G_Armband_OPF_F: Aegis_NV_G_Armband_Blu_F
{
	author = $STR_A3_A_Jamie;
	displayName = $STR_A3_A_CfgGlasses_G_Armband_OPF_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_OPF_F_CA.paa";
	hiddenSelectionsTextures[] = 
	{
		"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_opf_CO.paa"
	};
	class ItemInfo: ItemInfo
	{
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_opf_CO.paa"
		};
	};
};
class Aegis_NV_G_Armband_Medic_F: Aegis_NV_G_Armband_Blu_F
{
	author = $STR_A3_A_Jamie;
	displayName = $STR_A3_A_CfgGlasses_G_Armband_Medic_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_Medic_F_CA.paa";
	hiddenSelectionsTextures[] = 
	{
		"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_Medic_CO.paa"
	};
	class ItemInfo: ItemInfo
	{
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_Medic_CO.paa"
		};
	};
};
class Aegis_NV_G_Armband_CSAT_F: Aegis_NV_G_Armband_Blu_F
{
	author = $STR_A3_A_Jamie;
	displayName = $STR_A3_A_CfgGlasses_G_Armband_CSAT_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_CSAT_F_CA.paa";
	hiddenSelectionsTextures[] = 
	{
		"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_CSAT_CO.paa"
	};
	class ItemInfo: ItemInfo
	{
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_CSAT_CO.paa"
		};
	};
};
class Aegis_NV_G_Armband_FIA_F: Aegis_NV_G_Armband_Blu_F
{
	author = $STR_A3_A_Jamie;
	displayName = $STR_A3_A_CfgGlasses_G_Armband_FIA_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_FIA_F_CA.paa";
	hiddenSelectionsTextures[] = 
	{
		"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_FIA_CO.paa"
	};
	class ItemInfo: ItemInfo
	{
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_FIA_CO.paa"
		};
	};
};
class Aegis_NV_G_Armband_IDAP_F: Aegis_NV_G_Armband_Blu_F
{
	author = $STR_A3_A_Jamie;
	displayName = $STR_A3_A_CfgGlasses_G_Armband_IDAP_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_IDAP_F_CA.paa";
	hiddenSelectionsTextures[] = 
	{
		"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_IDAP_CO.paa"
	};
	class ItemInfo: ItemInfo
	{
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_IDAP_CO.paa"
		};
	};
};
class Aegis_NV_G_Armband_Blu_Alt_F: Aegis_NV_G_Armband_Blu_F
{
	author = $STR_A3_A_Jamie;
	displayName = $STR_A3_A_CfgGlasses_G_Armband_BLU_alt_F0;
	model = "\A3_Aegis\Characters_F_Aegis\Facewear\G_Armband_alt.p3d";
	picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_BLU_F_CA.paa";
	class ItemInfo: ItemInfo
	{
		uniformModel = "\A3_Aegis\Characters_F_Aegis\Facewear\G_Armband_alt.p3d";
		modelOff = "\A3_Aegis\Characters_F_Aegis\Facewear\G_Armband_alt.p3d";
		mass = 2;
	};
};
class Aegis_NV_G_Armband_IND_alt_F: Aegis_NV_G_Armband_Blu_Alt_F
{
	author = $STR_A3_A_Jamie;
	displayName = $STR_A3_A_CfgGlasses_G_Armband_IND_alt_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_IND_F_CA.paa";
	hiddenSelectionsTextures[] = 
	{
		"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_indep_CO.paa"
	};
	class ItemInfo: ItemInfo
	{
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_indep_CO.paa"
		};
	};
};
class Aegis_NV_G_Armband_OPF_alt_F: Aegis_NV_G_Armband_Blu_Alt_F
{
	author = $STR_A3_A_Jamie;
	displayName = $STR_A3_A_CfgGlasses_G_Armband_OPF_alt_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_OPF_F_CA.paa";
	hiddenSelectionsTextures[] = 
	{
		"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_opf_CO.paa"
	};
	class ItemInfo: ItemInfo
	{
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_opf_CO.paa"
		};
	};
};
class Aegis_NV_G_Armband_Medic_alt_F: Aegis_NV_G_Armband_Blu_Alt_F
{
	author = $STR_A3_A_Jamie;
	displayName = $STR_A3_A_CfgGlasses_G_Armband_Medic_alt_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_Medic_F_CA.paa";
	hiddenSelectionsTextures[] = 
	{
		"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_Medic_CO.paa"
	};
	class ItemInfo: ItemInfo
	{
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_Medic_CO.paa"
		};
	};
};
class Aegis_NV_G_Armband_CSAT_alt_F: Aegis_NV_G_Armband_Blu_Alt_F
{
	author = $STR_A3_A_Jamie;
	displayName = $STR_A3_A_CfgGlasses_G_Armband_CSAT_alt_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_CSAT_F_CA.paa";
	hiddenSelectionsTextures[] = 
	{
		"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_CSAT_CO.paa"
	};
	class ItemInfo: ItemInfo
	{
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_CSAT_CO.paa"
		};
	};
};
class Aegis_NV_G_Armband_FIA_alt_F: Aegis_NV_G_Armband_Blu_Alt_F
{
	author = $STR_A3_A_Jamie;
	displayName = $STR_A3_A_CfgGlasses_G_Armband_FIA_alt_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_FIA_F_CA.paa";
	hiddenSelectionsTextures[] = 
	{
		"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_FIA_CO.paa"
	};
	class ItemInfo: ItemInfo
	{
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_FIA_CO.paa"
		};
	};
};
class Aegis_NV_G_Armband_IDAP_alt_F: Aegis_NV_G_Armband_Blu_Alt_F
{
	author = $STR_A3_A_Jamie;
	displayName = $STR_A3_A_CfgGlasses_G_Armband_IDAP_alt_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_IDAP_F_CA.paa";
	hiddenSelectionsTextures[] = 
	{
		"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_IDAP_CO.paa"
	};
	class ItemInfo: ItemInfo
	{
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Facewear\Data\G_Armband_IDAP_CO.paa"
		};
	};
};

/* NVG Slot Scrim Netting */
class Aegis_NV_G_scrimNet_olive_F: NVGoggles
{
	author = $STR_A3_A_POLPOX;
	displayName = $STR_A3_A_CfgGlasses_G_ScrimNet_olive_F0;
	modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";
	model = "A3_Aegis\characters_f_aegis\Facewear\G_scrimNet_overHelmet.p3d";
	picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_scrimNet_olive_F_CA.paa";
	hiddenSelections[] =
	{
		camo
	};
	hiddenSelectionsTextures[] = 
	{
		"\A3_Aegis\characters_f_aegis\Facewear\Data\scrimNet_olive_ca.paa"
	};
	visionMode[] = {Normal};
	descriptionShort = $STR_A3_A_CfgGlasses_G_ScrimNet1;
	class ItemInfo: ItemInfo
	{
		uniformModel = "A3_Aegis\characters_f_aegis\Facewear\G_scrimNet_overHelmet.p3d";
		modelOff = "A3_Aegis\characters_f_aegis\Facewear\G_scrimNet_overHelmet.p3d";
		mass = 2;
		hiddenSelections[] =
		{
			camo
		};
		hiddenSelectionsTextures[] = 
		{
			"A3_Aegis\characters_f_aegis\Facewear\Data\scrimNet_olive_ca.paa"
		};
	};
};
class Aegis_NV_G_scrimNet_sand_F: Aegis_NV_G_scrimNet_olive_F
{
	author = $STR_A3_A_POLPOX;
	displayName = $STR_A3_A_CfgGlasses_G_ScrimNet_sand_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_scrimNet_sand_F_CA.paa";
	hiddenSelectionsTextures[] = 
	{
		"\A3_Aegis\characters_f_aegis\Facewear\Data\scrimNet_sand_ca.paa"
	};
	class ItemInfo: ItemInfo
	{
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\characters_f_aegis\Facewear\Data\scrimNet_sand_ca.paa"
		};
	};
};
class Aegis_NV_G_scrimNet_black_F: Aegis_NV_G_scrimNet_olive_F
{
	author = $STR_A3_A_POLPOX;
	displayName = $STR_A3_A_CfgGlasses_G_ScrimNet_black_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_scrimNet_black_F_CA.paa";
	hiddenSelectionsTextures[] = 
	{
		"\A3_Aegis\characters_f_aegis\Facewear\Data\scrimNet_black_ca.paa"
	};
	class ItemInfo: ItemInfo
	{
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\characters_f_aegis\Facewear\Data\scrimNet_black_ca.paa"
		};
	};
};
class Aegis_NV_G_scrimNet_under_olive_F: Aegis_NV_G_scrimNet_olive_F
{
	author = $STR_A3_A_POLPOX;
	displayName = $STR_A3_A_CfgGlasses_G_ScrimNet_under_olive_F0;
	model = "\A3_Aegis\characters_f_aegis\Facewear\G_scrimNet_underHelmet.p3d";
	picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_scrimNet_under_olive_F_CA.paa";
	class ItemInfo: ItemInfo
	{
		uniformModel = "A3_Aegis\characters_f_aegis\Facewear\G_scrimNet_underHelmet.p3d";
		modelOff = "A3_Aegis\characters_f_aegis\Facewear\G_scrimNet_underHelmet.p3d";
		mass = 2;
	};
};
class Aegis_NV_G_scrimNet_under_sand_F: Aegis_NV_G_scrimNet_under_olive_F
{
	author = $STR_A3_A_POLPOX;
	displayName = $STR_A3_A_CfgGlasses_G_ScrimNet_under_sand_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_scrimNet_under_sand_F_CA.paa";
	hiddenSelectionsTextures[] = 
	{
		"\A3_Aegis\characters_f_aegis\Facewear\Data\scrimNet_sand_ca.paa"
	};
	class ItemInfo: ItemInfo
	{
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\characters_f_aegis\Facewear\Data\scrimNet_sand_ca.paa"
		};
	};
};
class Aegis_NV_G_scrimNet_under_black_F: Aegis_NV_G_scrimNet_under_olive_F
{
	author = $STR_A3_A_POLPOX;
	displayName = $STR_A3_A_CfgGlasses_G_ScrimNet_under_black_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_scrimNet_under_black_F_CA.paa";
	hiddenSelectionsTextures[] = 
	{
		"\A3_Aegis\characters_f_aegis\Facewear\Data\scrimNet_black_ca.paa"
	};
	class ItemInfo: ItemInfo
	{
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\characters_f_aegis\Facewear\Data\scrimNet_black_ca.paa"
		};
	};
};

/* NVG Slot Ammo Bandolier */
/*class Aegis_NV_G_Ammo_Bandolier_F: NVGoggles
{
	author = $STR_A3_A_POLPOX;
	displayName = $STR_A3_A_CfgWeapons_V_Ammo_Bandolier_F0;;
	modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";
	picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_Aegis_V_Ammo_Bandolier_F_ca.paa";
	model = "\A3_Aegis\Characters_F_Aegis\Vests\Aegis_Ammobelt.p3d";
	visionMode[] = {Normal};
	descriptionShort = $STR_A3_A_CfgGlasses_G_ScrimNet1;
	class ItemInfo: ItemInfo
	{
		uniformModel = "\A3_Aegis\Characters_F_Aegis\Vests\Aegis_Ammobelt.p3d";
		modelOff = "\A3_Aegis\Characters_F_Aegis\Vests\Aegis_Ammobelt.p3d";
		mass = 2;
	};
};*/