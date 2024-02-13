class CfgVehicles
{
    /* Definitions */
    #include "\A3_Aegis\macros_smokeShells.hpp"

    /* Inheritance Tree */
	class Bag_Base;

    /* Bases */
	class B_AssaultPack_Base;
	class B_Kitbag_Base;
	class B_FieldPack_Base;
	class B_Carryall_Base;
	class B_Bergen_Base_F;
	class B_ViperHarness_base_F: Bag_Base
	{
		hiddenSelectionsMaterials[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\Backpack_ViperOp.rvmat"};
	};
	class B_ViperLightHarness_base_F: Bag_Base
	{
		hiddenSelectionsMaterials[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\Backpack_ViperOp.rvmat"};
	};
	class B_RadioBag_01_base_F;
	class B_Rangemaster_belt_Base: Bag_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = private;
		model = "\A3\Characters_F\BLUFOR\eqUIp_b_belt.p3d";
		hiddenSelections[] = {camo};
		maximumLoad = 40;
		mass = 5;
	};
	class B_AssaultPackSpec_Base: Bag_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 0.45;
		model = "\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
		hiddenSelections[] =
		{
			camo1,
			camo2
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_compact_rgr_CO.paa",
			"\A3_Aegis\Supplies_F_Aegis\Bags\Data\vests_rgr_CO.paa"
		};
		maximumLoad = 180;
		mass = 25;
	};

    /* Arsenal */
	class B_AssaultPack_dgtl;
	class B_AssaultPack_rgr;
	class B_AssaultPack_blk: B_AssaultPack_Base
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_compact_blk_CO.paa"};
	};
	class B_AssaultPack_mcamo: B_AssaultPack_Base
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_compact_mcamo_CO.paa"};
	};
	class B_AssaultPack_ocamo: B_AssaultPack_Base
	{
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_AssaultPack_ocamo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_compact_ocamo_CO.paa"};
	};
	class B_Kitbag_rgr;
	class B_Kitbag_mcamo;
	class B_TacticalPack_Base;
	class B_TacticalPack_rgr: B_TacticalPack_Base
	{
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_rgr_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_rgr_CO.paa"};
	};
	class B_TacticalPack_mcamo: B_TacticalPack_Base
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_mcamo_CO.paa"};
	};
	class B_TacticalPack_ocamo: B_TacticalPack_Base
	{
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_ocamo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_hex_CO.paa"};
	};
	class B_FieldPack_ocamo: B_FieldPack_Base
	{
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_FieldPack_ocamo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_gorod_hex_CO.paa"};
	};
	class B_FieldPack_blk: B_FieldPack_Base
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_gorod_blk_CO.paa"};
	};
	class B_Carryall_ocamo: B_Carryall_Base
	{
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_Carryall_ocamo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_tortila_hex_CO.paa"};
	};
	class B_Carryall_mcamo: B_Carryall_Base
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_tortila_mcamo_CO.paa"};
	};
	class B_Carryall_khk;
	class B_Carryall_cbr;
	class B_Fieldpack_oli;
	class B_Carryall_oli;
	class B_AssaultPack_Kerry: B_AssaultPack_mcamo
	{
		hiddenSelectionsTextures[] =
		{
			"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_compact_rgr_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_rgr_CO.paa"
		};
		maximumLoad = 180;
		mass = 25;
	};
	class B_Bergen_tna_F: B_Bergen_Base_F
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\Bergen_tna_CO.paa"};
	};
	class B_AssaultPack_tna_F: B_AssaultPack_Base
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\B_AssaultPack_tna_F_CO.paa"};
	};
	class B_Carryall_ghex_F: B_Carryall_Base
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\B_Carryall_ghex_F_CO.paa"};
	};
	class B_ViperHarness_ghex_F;
	class B_ViperHarness_hex_F: B_ViperHarness_base_F
	{
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_ViperHarness_hex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\Backpack_ViperOp_hex_CO.paa"};
	};
	class B_ViperLightHarness_ghex_F;
	class B_ViperLightHarness_hex_F: B_ViperLightHarness_base_F
	{
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_ViperLightHarness_hex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\Backpack_ViperOp_hex_CO.paa"};
	};
	class B_RadioBag_01_wdl_F: B_RadioBag_01_base_F
	{
		/* TFAR */
		tf_dialog = rt1523g_radio_dialog;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = tf_west_radio_code;
		tf_hasLRradio = true;
		tf_range = 20000;
		tf_subtype = digital_lr;
	};
	class B_RadioBag_01_mtp_F: B_RadioBag_01_base_F
	{
		/* TFAR */
		tf_dialog = rt1523g_radio_dialog;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = tf_west_radio_code;
		tf_hasLRradio = true;
		tf_range = 20000;
		tf_subtype = digital_lr;
	};
	class B_RadioBag_01_tropic_F: B_RadioBag_01_base_F
	{
		/* TFAR */
		tf_dialog = rt1523g_radio_dialog;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = tf_west_radio_code;
		tf_hasLRradio = true;
		tf_range = 20000;
		tf_subtype = digital_lr;
	};
	class B_RadioBag_01_black_F: B_RadioBag_01_base_F
	{
		/* TFAR */
		tf_dialog = anprc155_radio_dialog;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = tf_independent_radio_code;
		tf_hasLRradio = true;
		tf_range = 20000;
		tf_subtype = digital_lr;
	};
	class B_RadioBag_01_hex_F: B_RadioBag_01_base_F
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\B_RadioBag_01_Hex_CO.paa"};

		/* TFAR */
		tf_dialog = bussole_radio_dialog;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = tf_east_radio_code;
		tf_hasLRradio = true;
		tf_range = 20000;
		tf_subtype = digital_lr;
	};
	class B_RadioBag_01_oucamo_F: B_RadioBag_01_base_F
	{
		/* TFAR */
		tf_dialog = bussole_radio_dialog;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = tf_east_radio_code;
		tf_hasLRradio = true;
		tf_range = 20000;
		tf_subtype = digital_lr;
	};
	class B_RadioBag_01_ghex_F: B_RadioBag_01_base_F
	{
		/* TFAR */
		tf_dialog = bussole_radio_dialog;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = tf_east_radio_code;
		tf_hasLRradio = true;
		tf_range = 20000;
		tf_subtype = digital_lr;
	};
	class B_RadioBag_01_digi_F: B_RadioBag_01_base_F
	{
		/* TFAR */
		tf_dialog = anprc155_radio_dialog;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = tf_independent_radio_code;
		tf_hasLRradio = true;
		tf_range = 20000;
		tf_subtype = digital_lr;
	};
	class B_RadioBag_01_eaf_F: B_RadioBag_01_base_F
	{
		/* TFAR */
		tf_dialog = anprc155_radio_dialog;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = tf_independent_radio_code;
		tf_hasLRradio = true;
		tf_range = 20000;
		tf_subtype = digital_lr;
	};
	class B_Carryall_green_F;
	class B_Carryall_taiga_F;
	class B_Carryall_wdl_F;
	class B_Carryall_eaf_F;
	class B_FieldPack_green_F;
	class B_FieldPack_taiga_F;
	class B_AssaultPack_wdl_F;
	class B_AssaultPack_eaf_F;
	class B_AssaultPack_tan: B_AssaultPack_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_AssaultPack_tan0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_AssaultPack_tan_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_compact_tan_CO.paa"};
	};
	class B_AssaultPack_oicamo: B_AssaultPack_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_AssaultPack_oicamo0;
		picture = "\A3\Weapons_F\Ammoboxes\Bags\Data\UI\icon_B_AssaultPack_ocamo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_compact_oicamo_CO.paa"};
	};
	class B_Kitbag_khk: B_Kitbag_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_Kitbag_khk0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_Kitbag_khk_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_fast_khk_CO.paa"};
	};
	class B_Kitbag_dgtl: B_Kitbag_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_Kitbag_dgtl0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_Kitbag_dgtl_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_fast_digi_CO.paa"};
	};
	class B_Kitbag_blk: B_Kitbag_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_Kitbag_blk0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_Kitbag_blk_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_fast_blk_CO.paa"};
	};
	class B_TacticalPack_khk: B_TacticalPack_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_TacticalPack_khk0;
		picture = "\A3\Weapons_F\Ammoboxes\Bags\Data\UI\icon_B_C_Small_khk.paa";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_CO.paa"};
	};
	class B_TacticalPack_sgg: B_TacticalPack_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_TacticalPack_sgg0;
		picture = "\A3\Weapons_F\Ammoboxes\Bags\Data\UI\icon_B_C_Small_rgr.paa";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_rgr_CO.paa"};
	};
	class B_TacticalPack_oicamo: B_TacticalPack_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_TacticalPack_oicamo0;
		picture = "\A3\Weapons_F\Ammoboxes\Bags\Data\UI\icon_B_C_Small_hex.paa";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_hex_CO.paa"};
	};
	class B_FieldPack_oicamo: B_FieldPack_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_FieldPack_oicamo0;
		picture = "\A3\Weapons_F\Ammoboxes\Bags\Data\UI\icon_B_C_Gorod_hex_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_gorod_hex_CO.paa"};
	};
	class B_Carryall_blk: B_Carryall_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_Carryall_blk0;
		picture = "\A3\Weapons_F\Ammoboxes\Bags\Data\UI\icon_B_C_Tortila_blk.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_tortila_blk_CO.paa"};
	};
	class B_Carryall_oicamo: B_Carryall_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_Carryall_oicamo0;
		picture = "\A3\Weapons_F\Ammoboxes\Bags\Data\UI\icon_B_C_Tortila_hex.paa";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_tortila_hex_CO.paa"};
	};
	class B_ViperHarness_oicamo_F: B_ViperHarness_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_ViperHarness_oicamo_F0;
		picture = "\A3\Supplies_F_Exp\Bags\Data\UI\icon_B_ViperHarness_hex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Supplies_F_Exp\Bags\Data\Backpack_ViperOp_hex_CO.paa"};
	};
	class B_ViperLightHarness_oicamo_F: B_ViperLightHarness_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_ViperLightHarness_oicamo_F0;
		picture = "\A3\Supplies_F_Exp\Bags\Data\UI\icon_B_ViperLightHarness_hex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Supplies_F_Exp\Bags\Data\Backpack_ViperOp_hex_CO.paa"};
	};
	class B_Rangemaster_belt: B_Rangemaster_belt_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = protected;
		displayName = $STR_A3_A_CfgWeapons_V_Rangemaster_belt0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_Rangemaster_belt_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_rgr_CO.paa"};
	};
	class B_Rangemaster_belt_khk: B_Rangemaster_belt_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = protected;
		displayName = $STR_A3_A_CfgWeapons_V_Rangemaster_belt_khk0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_Rangemaster_belt_khk_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_khk_CO.paa"};
	};
	class B_Rangemaster_belt_cbr: B_Rangemaster_belt_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = protected;
		displayName = $STR_A3_A_CfgWeapons_V_Rangemaster_belt_cbr0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_Rangemaster_belt_cbr_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_cbr_CO.paa"};
	};
	class B_Rangemaster_belt_blk: B_Rangemaster_belt_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = protected;
		displayName = $STR_A3_A_CfgWeapons_V_Rangemaster_belt_blk0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_Rangemaster_belt_blk_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_blk_CO.paa"};
	};
	class B_Rangemaster_belt_oli: B_Rangemaster_belt_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = protected;
		displayName = $STR_A3_A_CfgWeapons_V_Rangemaster_belt_oli0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_Rangemaster_belt_oli_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_oli_CO.paa"};
	};
	class B_Bergen_ghex_F: B_Bergen_Base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_Bergen_ghex_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_Bergen_ghex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\Bergen_ghex_CO.paa"};
	};
	class B_AssaultPack_ghex_F: B_AssaultPack_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_AssaultPack_ghex_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_AssaultPack_ghex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\B_AssaultPack_ghex_F_CO.paa"};
	};
	class B_Carryall_tna_F: B_Carryall_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_Carryall_tna_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_Carryall_tna_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\B_Carryall_tna_F_CO.paa"};
	};
	class B_Kitbag_tna_F: B_Kitbag_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_Kitbag_tna_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_Kitbag_tna_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\B_Kitbag_tna_F_CO.paa"};
	};
	class B_TacticalPack_tna_F: B_TacticalPack_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_TacticalPack_tna_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_tna_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\B_TacticalPack_tna_F_CO.paa"};
	};
	class B_RadioBag_01_coyote_F: B_RadioBag_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_RadioBag_01_coyote_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_RadioBag_01_coyote_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\B_RadioBag_01_Coyote_CO.paa"};

		/* TFAR */
		tf_dialog = rt1523g_radio_dialog;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = tf_west_radio_code;
		tf_hasLRradio = true;
		tf_range = 20000;
		tf_subtype = digital_lr;
	};
	class B_RadioBag_01_sage_F: B_RadioBag_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_RadioBag_01_sage_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_RadioBag_01_sage_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\B_RadioBag_01_Sage_CO.paa"};
        
		/* TFAR */
		tf_dialog = anprc155_radio_dialog;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = tf_independent_radio_code;
		tf_hasLRradio = true;
		tf_range = 20000;
		tf_subtype = digital_lr;
	};
	class B_RadioBag_01_green_F: B_RadioBag_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_RadioBag_01_green_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_RadioBag_01_green_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\B_RadioBag_01_RUkhk_CO.paa"};
        
		/* TFAR */
		tf_dialog = rt1523g_radio_dialog;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = tf_west_radio_code;
		tf_hasLRradio = true;
		tf_range = 20000;
		tf_subtype = digital_lr;
	};
	class B_RadioBag_01_taiga_F: B_RadioBag_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_RadioBag_01_taiga_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_RadioBag_01_taiga_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\B_RadioBag_01_RUtaiga_CO.paa"};
        
		/* TFAR */
		tf_dialog = bussole_radio_dialog;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = tf_east_radio_code;
		tf_hasLRradio = true;
		tf_range = 20000;
		tf_subtype = digital_lr;
	};
	class B_RadioBag_01_arid_F: B_RadioBag_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_RadioBag_01_arid_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_RadioBag_01_arid_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\B_RadioBag_01_RUarid_CO.paa"};
        
		/* TFAR */
		tf_dialog = bussole_radio_dialog;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = tf_east_radio_code;
		tf_hasLRradio = true;
		tf_range = 20000;
		tf_subtype = digital_lr;
	};
	class B_RadioBag_01_oicamo_F: B_RadioBag_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_RadioBag_01_oicamo_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_RadioBag_01_oicamo_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\B_RadioBag_01_oicamo_CO.paa"};
        
		/* TFAR */
		tf_dialog = bussole_radio_dialog;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = tf_east_radio_code;
		tf_hasLRradio = true;
		tf_range = 20000;
		tf_subtype = digital_lr;
	};
	class Aegis_B_RadioBag_01_des_lxWS: B_RadioBag_01_base_F
	{
		author = $STR_A3_A_Ravenholme;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_RadioBag_01_des_lxWS0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_Aegis_B_RadioBag_01_des_lxWS_CA.paa";
		hiddenSelectionsTextures[] = {"\lxws\characters_f_lxws\data\NATO\B_RadioBag_01_desert_CO.paa"};
		/* TFAR */
		tf_dialog = rt1523g_radio_dialog;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = tf_west_radio_code;
		tf_hasLRradio = true;
		tf_range = 20000;
		tf_subtype = digital_lr;
	};
	class B_Bergen_taiga_F: B_Bergen_Base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_Bergen_taiga_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_Bergen_taiga_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\Bergen_RUtaiga_CO.paa"};
	};
	class B_Bergen_wdl_F: B_Bergen_Base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_Bergen_wdl_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_Bergen_wdl_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\Bergen_wdl_CO.paa"};
	};
	class B_Bergen_eaf_F: B_Bergen_Base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_Bergen_eaf_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_Bergen_eaf_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\Bergen_eaf_CO.paa"};
	};
	class B_AssaultPack_taiga_F: B_AssaultPack_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_AssaultPack_taiga_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_AssaultPack_taiga_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_compact_RUtaiga_CO.paa"};
	};
	class B_Kitbag_wdl_F: B_Kitbag_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_Kitbag_wdl_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_Kitbag_wdl_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_fast_wdl_CO.paa"};
	};
	class B_Kitbag_eaf_F: B_Kitbag_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_Kitbag_eaf_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_Kitbag_eaf_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_fast_eaf_CO.paa"};
	};
	class B_TacticalPack_eaf_F: B_TacticalPack_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_TacticalPack_eaf_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_eaf_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_eaf_CO.paa"};
	};
	class B_AssaultPackSpec_rgr: B_AssaultPackSpec_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_AssaultPackSpec_rgr_CA.paa";
		displayName = $STR_A3_A_CfgVehicles_B_AssaultPackSpec_rgr0;
		hiddenSelectionsTextures[] =
		{
			"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_compact_rgr_CO.paa",
			"\A3_Aegis\Supplies_F_Aegis\Bags\Data\vests_rgr_CO.paa"
		};
	};
	class B_AssaultPackSpec_blk: B_AssaultPackSpec_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_AssaultPackSpec_blk_CA.paa";
		displayName = $STR_A3_A_CfgVehicles_B_AssaultPackSpec_blk0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_compact_blk_CO.paa",
			"\A3_Aegis\Supplies_F_Aegis\Bags\Data\vests_blk_CO.paa"
		};
	};
	class B_AssaultPackSpec_cbr: B_AssaultPackSpec_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_AssaultPackSpec_cbr_CA.paa";
		displayName = $STR_A3_A_CfgVehicles_B_AssaultPackSpec_cbr0;
		hiddenSelectionsTextures[] =
		{
			"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_compact_cbr_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_cbr_CO.paa"
		};
	};
	class B_AssaultPackSpec_mcamo: B_AssaultPackSpec_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_AssaultPackSpec_mcamo_CA.paa";
		displayName = $STR_A3_A_CfgVehicles_B_AssaultPackSpec_mcamo0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_compact_mcamo_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_mtp_CO.paa"
		};
	};
	class B_AssaultPack_Enh_tna_F: B_AssaultPackSpec_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_AssaultPack_Enh_tna_F_CA.paa";
		displayName = $STR_A3_A_CfgVehicles_B_AssaultPack_Enh_tna_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Supplies_F_Aegis\Bags\Data\B_AssaultPack_tna_F_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Vests\Data\V_PlateCarrier1_tna_F_CO.paa"
		};
	};
	class B_AssaultPackSpec_wdl_F: B_AssaultPackSpec_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_AssaultPackSpec_wdl_F_CA.paa";
		displayName = $STR_A3_A_CfgVehicles_B_AssaultPackSpec_wdl_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3\Supplies_F_Enoch\Bags\Data\backpack_compact_wdl_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_wdl_CO.paa"
		};
	};
	class Aegis_B_AssaultPackSpec_des_lxWS: B_AssaultPackSpec_Base
	{
		author = $STR_A3_A_Ravenholme;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_AssaultPackSpec_desert_lxWS0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_Aegis_B_AssaultPackSpec_des_lxWS_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\lxws\characters_f_lxws\data\NATO\backpack_compact_desert_CO.paa",
			"\lxws\characters_f_lxws\vests\data\vests_desert_CO.paa"
		};
	};
	/*Patrol Backpack*/
	class Aegis_B_patrolBackpack_blk_F: B_Kitbag_Base
	{
		author = $STR_A3_A_Lowaltitude;
		mapSize = 0.6;
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_B_patrolBackpack_blk_F0;
		model = "\A3\Drones_F\air_f_gamma\uav_01\uav_01_backpack_f.p3d";
		editorCategory = EdCat_Equipment;
		editorSubcategory = EdSubcat_Backpacks;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_Aegis_B_patrolBackpack_blk_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\UAV_backpack_patrol_blk_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Drones_F\Air_F_Gamma\UAV_01\data\uav_01_backpack_fab.rvmat"};
		maximumLoad = 400;
	};
	class Aegis_B_patrolBackpack_aaf_F: Aegis_B_patrolBackpack_blk_F
	{
		author = $STR_A3_A_Lowaltitude;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_patrolBackpack_aaf_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_Aegis_B_patrolBackpack_aaf_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\UAV_backpack_patrol_digi_CO.paa"};
	};
	class Aegis_B_patrolBackpack_cbr_F: Aegis_B_patrolBackpack_blk_F
	{
		author = $STR_A3_A_Lowaltitude;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_patrolBackpack_cbr_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_Aegis_B_patrolBackpack_cbr_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\UAV_backpack_patrol_cbr_CO.paa"};
	};
	class Aegis_B_patrolBackpack_grn_F: Aegis_B_patrolBackpack_blk_F
	{
		author = $STR_A3_A_Lowaltitude;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_patrolBackpack_grn_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_Aegis_B_patrolBackpack_grn_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\UAV_backpack_patrol_rgr_CO.paa"};
	};
	class Aegis_B_patrolBackpack_hex_F: Aegis_B_patrolBackpack_blk_F
	{
		author = $STR_A3_A_Lowaltitude;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_patrolBackpack_hex_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_Aegis_B_patrolBackpack_hex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\UAV_backpack_patrol_hex_CO.paa"};
	};
	class Aegis_B_patrolBackpack_dhex_F: Aegis_B_patrolBackpack_blk_F
	{
		author = $STR_A3_A_Lowaltitude;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_patrolBackpack_dhex_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_Aegis_B_patrolBackpack_dhex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\UAV_backpack_patrol_dhex_CO.paa"};
	};
	class Aegis_B_patrolBackpack_ghex_F: Aegis_B_patrolBackpack_blk_F
	{
		author = $STR_A3_A_Lowaltitude;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_patrolBackpack_ghex_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_Aegis_B_patrolBackpack_ghex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\UAV_backpack_patrol_ghex_CO.paa"};
	};
	class Aegis_B_patrolBackpack_uhex_F: Aegis_B_patrolBackpack_blk_F
	{
		author = $STR_A3_A_Lowaltitude;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_patrolBackpack_uhex_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_Aegis_B_patrolBackpack_uhex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\UAV_backpack_patrol_uhex_CO.paa"};
	};
	class Aegis_B_patrolBackpack_khk_F: Aegis_B_patrolBackpack_blk_F
	{
		author = $STR_A3_A_Lowaltitude;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_patrolBackpack_khk_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_Aegis_B_patrolBackpack_khk_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\UAV_backpack_patrol_khk_CO.paa"};
	};
	class Aegis_B_patrolBackpack_eaf_F: Aegis_B_patrolBackpack_blk_F
	{
		author = $STR_A3_A_Lowaltitude;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_patrolBackpack_eaf_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_Aegis_B_patrolBackpack_eaf_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\UAV_backpack_patrol_geometric_CO.paa"};
	};
	class Aegis_B_patrolBackpack_mcu_F: Aegis_B_patrolBackpack_blk_F
	{
		author = $STR_A3_A_Lowaltitude;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_patrolBackpack_mcu_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_Aegis_B_patrolBackpack_mcu_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\UAV_backpack_patrol_mcu_CO.paa"};
	};
	class Aegis_B_patrolBackpack_mcamo_F: Aegis_B_patrolBackpack_blk_F
	{
		author = $STR_A3_A_Lowaltitude;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_patrolBackpack_mcamo_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_Aegis_B_patrolBackpack_mcamo_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\UAV_backpack_patrol_mcamo_CO.paa"};
	};
	class Aegis_B_patrolBackpack_tna_F: Aegis_B_patrolBackpack_blk_F
	{
		author = $STR_A3_A_Lowaltitude;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_patrolBackpack_tna_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_Aegis_B_patrolBackpack_tna_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\UAV_backpack_patrol_tna_CO.paa"};
	};
	class Aegis_B_patrolBackpack_wdl_F: Aegis_B_patrolBackpack_blk_F
	{
		author = $STR_A3_A_Lowaltitude;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_patrolBackpack_wdl_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_Aegis_B_patrolBackpack_wdl_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\UAV_backpack_patrol_wdl_CO.paa"};
	};
	class Aegis_B_patrolBackpack_oli_F: Aegis_B_patrolBackpack_blk_F
	{
		author = $STR_A3_A_Lowaltitude;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_patrolBackpack_oli_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_Aegis_B_patrolBackpack_oli_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\UAV_backpack_patrol_oli_CO.paa"};
	};	
	class Aegis_B_patrolBackpack_RUtaiga_F: Aegis_B_patrolBackpack_blk_F
	{
		author = $STR_A3_A_Lowaltitude;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_patrolBackpack_rutaiga_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_Aegis_B_patrolBackpack_RUtaiga_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\UAV_backpack_patrol_RUtaiga_CO.paa"};
	};
	class Aegis_B_patrolBackpack_RUarid_F: Aegis_B_patrolBackpack_blk_F
	{
		author = $STR_A3_A_Lowaltitude;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_patrolBackpack_ruarid_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_Aegis_B_patrolBackpack_RUarid_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\UAV_backpack_patrol_RUarid_CO.paa"};
	};

    /* Factions */
    #include "cfgBLUFOR.hpp"        // US & BAF
    #include "cfgOPFOR.hpp"         // Argana
    #include "cfgIndep.hpp"         // AAF
    #include "cfgCTRG.hpp"          // CTRG
    #include "cfgViper.hpp"         // Viper
    #include "cfgGendarmerie.hpp"   // Gendarmerie
    #include "cfgRUS.hpp"           // Russia
    #include "cfgEAF.hpp"           // LDF
    #include "cfgION.hpp"           // ION
	#include "cfgGuerrilla.hpp"		// FIA

	/* Patreon */
	#include "patreon.hpp"
};