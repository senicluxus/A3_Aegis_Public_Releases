class CfgVehicles
{
    /* Definitions */
    #include "\A3_Aegis\macros_smokeShells.hpp"

    /* Inheritance Tree */
	class Bag_Base;

    /* Bases */
	class B_AssaultPack_Base;
	class B_Kitbag_Base;
	class B_TacticalPack_Base;
	class B_FieldPack_Base;
	class B_Carryall_Base;
	class B_Bergen_Base_F;
	class B_ViperHarness_base_F;
	class B_ViperLightHarness_base_F;
	class B_RadioBag_01_base_F;
	class B_Carryall_cbr;
	class B_AssaultPack_cbr;
	class B_AssaultPack_rgr;
	
    /* Arsenal */
    class B_RadioBag_01_aucamo_F: B_RadioBag_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_RadioBag_01_aucamo_F0;
		picture = "\a3\supplies_f_enoch\Bags\Data\UI\icon_B_RadioBag_01_wdl_F_ca.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\B_RadioBag_01_aucamo_CO.paa"};

		/* TFAR */
		tf_dialog = bussole_radio_dialog;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = tf_west_radio_code;
		tf_hasLRradio = true;
		tf_range = 20000;
		tf_subtype = digital_lr;
	};
	class B_RadioBag_01_whex_F: B_RadioBag_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_RadioBag_01_whex_F0;
		picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_RadioBag_01_whex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\B_RadioBag_01_whex_CO.paa"};

		/* TFAR */
		tf_dialog = bussole_radio_dialog;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = tf_east_radio_code;
		tf_hasLRradio = true;
		tf_range = 20000;
		tf_subtype = digital_lr;
	};
	class B_RadioBag_01_flecktarn_F: B_RadioBag_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_RadioBag_01_flecktarn_F0;
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_RadioBag_01_taiga_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\B_RadioBag_01_flecktarn_CO.paa"};

		/* TFAR */
		tf_dialog = bussole_radio_dialog;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = tf_west_radio_code;
		tf_hasLRradio = true;
		tf_range = 20000;
		tf_subtype = digital_lr;
	};
	class B_RadioBag_01_semiarid_F: B_RadioBag_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_RadioBag_01_semiarid_F0;
		picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_RadioBag_01_semiarid_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\B_RadioBag_01_semiarid_CO.paa"};
        
		/* TFAR */
		tf_dialog = bussole_radio_dialog;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = tf_east_radio_code;
		tf_hasLRradio = true;
		tf_range = 20000;
		tf_subtype = digital_lr;
	};
	class B_RadioBag_01_jungle_F: B_RadioBag_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_RadioBag_01_jungle_F0;
		picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_RadioBag_01_jungle_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\B_RadioBag_01_jungle_CO.paa"};
        
		/* TFAR */
		tf_dialog = rt1523g_radio_dialog;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = tf_west_radio_code;
		tf_hasLRradio = true;
		tf_range = 20000;
		tf_subtype = digital_lr;
	};
	class B_RadioBag_01_marar_F: B_RadioBag_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_RadioBag_01_Marar_F0;
		picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_RadioBag_01_semiarid_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\B_RadioBag_01_Marar_CO.paa"};

		/* TFAR */
		tf_dialog = bussole_radio_dialog;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = tf_west_radio_code;
		tf_hasLRradio = true;
		tf_range = 20000;
		tf_subtype = digital_lr;
	};
	class B_RadioBag_01_commando_F: B_RadioBag_01_base_F
	{
		author = "BranFlakes";
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_RadioBag_01_commandos_F0;
		picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_RadioBag_01_jungle_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\B_RadioBag_01_commando_CO.paa"};
        
		/* TFAR */
		tf_dialog = rt1523g_radio_dialog;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = tf_west_radio_code;
		tf_hasLRradio = true;
		tf_range = 20000;
		tf_subtype = digital_lr;
	};
	class B_AssaultPack_flecktarn: B_AssaultPack_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_AssaultPack_flecktarn0;
		//picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_AssaultPack_flecktarn_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\backpack_compact_flecktarn_CO.paa"};
	};
	class B_Kitbag_flecktarn: B_Kitbag_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_Kitbag_flecktarn0;
		//picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_Kitbag_flecktarn_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\backpack_fast_flecktarn_CO.paa"};
	};
	class B_Kitbag_aucamo_F: B_Kitbag_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_Kitbag_aucamo0;
		//picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_Kitbag_flecktarn_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\backpack_fast_aucamo_CO.paa"};
	};
	class B_Carryall_flecktarn: B_Carryall_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_Carryall_flecktarn0;
		//picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_Carryall_flecktarn_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\backpack_tortila_flecktarn_CO.paa"};
	};
	class B_Carryall_aucamo: B_Carryall_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_Carryall_aucamo0;
		//picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_Carryall_flecktarn_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\backpack_tortila_aucamo_CO.paa"};
	};
	class B_Carryall_owcamo: B_Carryall_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_Carryall_owcamo0;
		picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_Carryall_owcamo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\backpack_tortila_whex_CO.paa"};
	};
	class B_Carryall_semiarid: B_Carryall_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_Carryall_semiarid0;
		picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_Carryall_semiarid_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\backpack_tortila_semiarid_CO.paa"};
	};
	class B_Carryall_jungle: B_Carryall_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_Carryall_jungle0;
		picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_Carryall_jungle_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\backpack_tortila_jungle_CO.paa"};
	};
	class B_FieldPack_owcamo: B_FieldPack_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_FieldPack_owcamo0;
		picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_FieldPack_owcamo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\backpack_gorod_whex_CO.paa"};
	};
	class B_FieldPack_semiarid: B_FieldPack_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_FieldPack_semiarid0;
		picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_FieldPack_semiarid_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\backpack_gorod_semiarid_CO.paa"};
	};
	class B_ViperHarness_whex_F: B_ViperHarness_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = "Viper Harness (Woodland Hex)";
		picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_ViperHarness_whex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\Backpack_ViperOp_whex_CO.paa"};
	};
	class B_ViperLightHarness_whex_F: B_ViperLightHarness_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = "Viper Light Harness (Woodland Hex)";
		picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_ViperLightHarness_whex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\Backpack_ViperOp_whex_CO.paa"};
	};
	class B_AssaultPack_marar: B_AssaultPack_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = "Assault Pack [Marar]";
		//picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_AssaultPack_flecktarn_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\backpack_compact_marar_CO.paa"};
	};
	class B_AssaultPack_aucamo_F: B_AssaultPack_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = "Assault Pack [ADF]";
		//picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_B_AssaultPack_flecktarn_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\backpack_compact_aucamo_CO.paa"};
	};
	/* Factions */
    #include "cfgOPFOR.hpp"     // Belarus
	#include "cfgViper.hpp"     // Viper
	#include "cfgLegion.hpp"    // Legion
    #include "cfgGER.hpp"       // Bundeswehr
    #include "cfgTKA.hpp"       // Takistani Army
	#include "cfgHIMF.hpp"      // HIMF
	#include "cfgIDF.hpp"       // IDF
	#include "cfgVenezuela.hpp" //Venezuela
	#include "cfgMarar.hpp"		//Marar
	#include "cfgUNO.hpp"		//UNO
	#include "cfgADF.hpp"		//Australia
};