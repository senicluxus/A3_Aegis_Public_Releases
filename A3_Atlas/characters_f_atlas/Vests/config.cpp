#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
class CfgWeapons
{
	/* Inheritance Tree */
	class ItemCore;
	class VestItem;

    /* Bases */
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class Vest_NoCamo_Base: ItemCore
	{
		class ItemInfo;
	};
	// Arma 3
	class V_TacVest_khk;
	class V_HarnessO_brn;
	class V_HarnessOGL_brn: V_HarnessO_brn
	{
		class ItemInfo;
	};
	class V_HarnessO_gry;
	class V_HarnessOSpec_brn;
	class V_PlateCarrierIA1_dgtl;
	class V_PlateCarrierIA2_dgtl;
	class V_PlateCarrierIAGL_dgtl;
	class V_RebreatherB;
	class V_PlateCarrierGL_rgr;
	class V_PlateCarrier1_rgr;
	class V_PlateCarrier2_rgr;
	// Arma 3 Enoch
	class V_CarrierRigKBT_01_base_F;
	class V_CarrierRigKBT_01_light_base_F;
	class V_CarrierRigKBT_01_heavy_base_F;
	class V_SmershVest_01_base_F;
	class V_SmershVest_01_radio_base_F;
	// Arma 3 Aegis
	class Aegis_V_CarrierRigKBT_01_cqb_base_F;
	class Aegis_V_CarrierRigKBT_01_recon_base_F;
	class Aegis_V_CarrierRigKBT_01_tactical_base_F;
	// Arma 3 Atlas
	class V_HarnessO_tan: V_HarnessO_gry
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_HarnessO_tan_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_V_HarnessO_tan0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_tka_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\tech_tka_CO.paa"
		};
	};
	class V_CarrierRigKBT_01_light_idfsf_F: V_CarrierRigKBT_01_light_base_F
	{
		author = $STR_A3_A_BranFlakes;
		scope = private;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigKBT_01_light_idfsf_F0;
		//picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\V_CarrierRigKBT_01_light_ctrg_F_CA.paa";
		hiddenSelectionsMaterials[] = {"\A3_Atlas\Characters_F_Atlas\vests\Data\vest_idfsf.rvmat"};
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\CarrierRigKBT_01_flag_CO.paa"};
    };
	class Atlas_V_CarrierRigKBT_01_recon_idfsf_F: Aegis_V_CarrierRigKBT_01_recon_base_F
	{
		author = $STR_A3_A_BranFlakes;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigKBT_01_recon_idfsf_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Icon_CarrierRigKBT_01_recon_flag_F_CA.paa";
		hiddenSelectionsMaterials[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\vests\Data\vest_idfsf.rvmat",
			"\A3_Aegis\characters_f_aegis\Vests\Data\nametag.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\CarrierRigKBT_01_flag_CO.paa",
			""
		};
    };
    class V_CarrierRigKBT_01_france_F: V_CarrierRigKBT_01_base_F
	{
		author = $STR_A3_A_BranFlakes;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigKBT_01_French_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Icon_CarrierRigKBT_01_vest_france_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\CarrierRigKBT_01_france_CO.paa"};
    };
    class V_CarrierRigKBT_01_light_france_F: V_CarrierRigKBT_01_light_base_F
	{
		author = $STR_A3_A_BranFlakes;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigKBT_01_light_French_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Icon_CarrierRigKBT_01_light_france_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\CarrierRigKBT_01_france_CO.paa"};
    };
    class V_CarrierRigKBT_01_heavy_france_F: V_CarrierRigKBT_01_heavy_base_F
	{
		author = $STR_A3_A_BranFlakes;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigKBT_01_heavy_French_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Icon_CarrierRigKBT_01_heavy_france_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\CarrierRigKBT_01_france_CO.paa"};
    };
	class Atlas_V_CarrierRigKBT_01_CQB_france_F: Aegis_V_CarrierRigKBT_01_cqb_base_F
	{
		author = $STR_A3_A_BranFlakes;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigKBT_01_cqb_French_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Icon_CarrierRigKBT_01_CQB_france_F_CA.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\CarrierRigKBT_01_france_CO.paa",
			""
		};
    };
	class V_HarnessOGL_tan: V_HarnessOGL_brn
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_HarnessOGL_tan0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_HarnessOGL_tan_CA.paa";
		hiddenSelections[] =
		{
			camo1,
			camo2
		};
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_tka_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\tech_tka_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] =
			{
				camo1,
				camo2
			};
		};
	};
	class V_HarnessO_whex_F: V_HarnessO_gry
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_HarnessO_whex_F_CA.paa";
		displayName = "LBV Harness (Woodland Hex)";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_wdl_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\tech_wdl_CO.paa"
		};
	};
	class V_HarnessOGL_whex_F: V_HarnessOGL_brn
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = "LBV Grenadier Harness (Woodland Hex)";
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_HarnessOGL_whex_F_CA.paa";
		hiddenSelections[] =
		{
			camo1,
			camo2
		};
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_wdl_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\tech_wdl_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] =
			{
				camo1,
				camo2
			};
		};
	};
	class V_HarnessOSpec_tan: V_HarnessOSpec_brn
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_HarnessOSpec_tan_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_V_HarnessOSpec_tan0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_tka_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\tech_tka_CO.paa"
		};
	};
	class V_HarnessOSpec_whex_F: V_HarnessOSpec_brn
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_HarnessOSpec_whex_F_CA.paa";
		displayName = "ELBV Harness (Woodland Hex)";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_wdl_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\tech_wdl_CO.paa"
		};
	};
	class V_PlateCarrierIA1_grn: V_PlateCarrierIA1_dgtl
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrierIA1_grn0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_PlateCarrierIA1_grn_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\equip_IA_Vest01_grn_CO.paa"};
	};
	class V_PlateCarrierIA1_whex: V_PlateCarrierIA1_dgtl
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = protected;
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrierIA1_whex0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_PlateCarrierIA1_grn_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\equip_IA_Vest01_whex_CO.paa"};
	};
	class V_PlateCarrierIA2_whex: V_PlateCarrierIA2_dgtl
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = protected;
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrierIA2_whex0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_PlateCarrierIA2_grn_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\equip_IA_Vest01_whex_CO.paa"};
	};
	class V_PlateCarrierIA2_rhex: V_PlateCarrierIA2_dgtl
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = protected;
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrierIA2_rhex0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_PlateCarrierIA2_grn_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\equip_IA_Vest01_rhex_CO.paa"};
	};
	class V_PlateCarrierIA2_grn: V_PlateCarrierIA2_dgtl
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrierIA2_grn0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_PlateCarrierIA2_grn_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\equip_IA_Vest01_grn_CO.paa"};
	};
	class V_PlateCarrierIAGL_grn: V_PlateCarrierIAGL_dgtl
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrierIAGL_grn0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_PlateCarrierIAGL_grn_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\equip_IA_Vest01_grn_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\GA_Carrier_GL_Rig_grn_CO.paa"
		};
	};
	class V_PlateCarrierIAGL_whex: V_PlateCarrierIAGL_dgtl
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = protected;
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrierIAGL_whex0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_PlateCarrierIAGL_grn_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\equip_IA_Vest01_whex_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\GA_Carrier_GL_Rig_whex_CO.paa"
		};
	};
	class V_TacVest_tan: V_TacVest_khk
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_TacVest_tan0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_TacVest_tan_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\tacticalvest_tan_CO.paa"};
	};
	class V_SmershVest_01_khaki_F: V_SmershVest_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_SmershVest_01_khaki_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_SmershVest_01_khaki_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\Smersh_khk_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\Smersh_miscellaneous_khk_CO.paa"
		};
	};
	class V_SmershVest_01_radio_khaki_F: V_SmershVest_01_radio_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_SmershVest_01_radio_khaki_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_SmershVest_01_radio_khaki_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\Smersh_khk_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\Smersh_miscellaneous_khk_CO.paa"
		};
	};
	class V_SmershVest_01_olive_F: V_SmershVest_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_SmershVest_01_olive_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_SmershVest_01_olive_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\Smersh_oli_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\Smersh_miscellaneous_oli_CO.paa"
		};
	};
	class V_SmershVest_01_radio_olive_F: V_SmershVest_01_radio_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_SmershVest_01_radio_olive_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_SmershVest_01_radio_olive_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\Smersh_oli_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\Smersh_miscellaneous_oli_CO.paa"
		};
	};
	class V_PlateCarrier2_snd: V_PlateCarrier2_rgr
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_PlateCarrier2_snd_F_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrier2_sand0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\vests_sand_CO.paa"
		};
	};
	class V_PlateCarrierGL_aucamo_F: V_PlateCarrierGL_rgr
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_PlateCarrierGL_aucamo_F_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrierGL_aucamo_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\Carrier_Rig_GL_aucamo_CO.paa"
		};
	};
	class V_PlateCarrier1_aucamo_F: V_PlateCarrier1_rgr
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_PlateCarrier1_aucamo_F_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrier1_aucamo_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\vests_aucamo_CO.paa"
		};
	};
	class V_PlateCarrier2_aucamo_F: V_PlateCarrier2_rgr
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_PlateCarrier2_aucamo_F_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrier2_aucamo_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\vests_aucamo_CO.paa"
		};
	};
	class V_PlateCarrierGL_aucamo_ard_F: V_PlateCarrierGL_rgr
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_PlateCarrierGL_aucamo_ard_F_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrierGL_aucamo_ard_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\Carrier_Rig_GL_aucamo_arid_CO.paa"
		};
	};
	class V_PlateCarrier1_aucamo_ard_F: V_PlateCarrier1_rgr
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_PlateCarrier1_aucamo_ard_F_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrier1_aucamo_ard_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\vests_aucamo_arid_CO.paa"
		};
	};
	class V_PlateCarrier2_aucamo_ard_F: V_PlateCarrier2_rgr
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_PlateCarrier2_aucamo_ard_F_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrier2_aucamo_ard_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\vests_aucamo_arid_CO.paa"
		};
	};
	class V_PlateCarrierGL_aucamo_trp_F: V_PlateCarrierGL_rgr
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_PlateCarrierGL_aucamo_trp_F_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrierGL_aucamo_trp_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\Carrier_Rig_GL_aucamo_tropic_CO.paa"
		};
	};
	class V_PlateCarrier1_aucamo_trp_F: V_PlateCarrier1_rgr
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_PlateCarrier1_aucamo_trp_F_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrier1_aucamo_trp_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\vests_aucamo_tropic_CO.paa"
		};
	};
	class V_PlateCarrier2_aucamo_trp_F: V_PlateCarrier2_rgr
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_PlateCarrier2_aucamo_trp_F_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrier2_aucamo_trp_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\vests_aucamo_tropic_CO.paa"
		};
	};
    /*
	class V_RebreatherB_O: V_RebreatherB
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_RebreatherB_O0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_RebreatherB_O_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\diver_equip_aucamo_CO.paa"};
		hiddenUnderwaterSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\diver_equip_aucamo_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\diver_equip_aucamo_CO.paa",
			"\A3\Characters_F\Data\visors_CA.paa"
		};
	};
    */
	class V_RebreatherI_I: V_RebreatherB
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_V_RebreatherI_I0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_RebreatherI_I_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\diver_equip_olive_CO.paa"};
		hiddenUnderwaterSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\diver_equip_olive_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\diver_equip_olive_CO.paa",
			"\A3\Characters_F\Data\visors_CA.paa"
		};
	};
	class V_CarrierRigKBT_01_CDF_F: V_CarrierRigKBT_01_base_F
	{
		author = $STR_A3_A_BranFlakes;
		scope = public;
		displayName = "Modular Carrier Vest [CDF]";
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Icon_CarrierRigKBT_01_vest_france_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\CarrierRigKBT_01_CDF_CO.paa"};
    };
    class V_CarrierRigKBT_01_light_CDF_F: V_CarrierRigKBT_01_light_base_F
	{
		author = $STR_A3_A_BranFlakes;
		scope = public;
		displayName = "Modular Carrier Lite [CDF]";
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Icon_CarrierRigKBT_01_light_france_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\CarrierRigKBT_01_CDF_CO.paa"};
    };
    class V_CarrierRigKBT_01_heavy_CDF_F: V_CarrierRigKBT_01_heavy_base_F
	{
		author = $STR_A3_A_BranFlakes;
		scope = public;
		displayName = "Modular Carrier GL Rig [CDF]";
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Icon_CarrierRigKBT_01_heavy_france_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\CarrierRigKBT_01_CDF_CO.paa"};
    };
	class Atlas_V_CarrierRigKBT_01_CQB_CDF_F: Aegis_V_CarrierRigKBT_01_cqb_base_F
	{
		author = $STR_A3_A_BranFlakes;
		scope = public;
		displayName = "Modular Carrier CQB Rig [CDF]";
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Icon_CarrierRigKBT_01_CQB_france_F_CA.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\CarrierRigKBT_01_CDF_CO.paa",
			""
		};
    };
	/* Sahrani Carrier Rigs*/
    class Atlas_V_CarrierRigKBT_01_RACS_F: V_CarrierRigKBT_01_base_F
	{
		author = $STR_A3_A_BranFlakes;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigKBT_01_RACS_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Icon_CarrierRigKBT_01_vest_RACS_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\CarrierRigKBT_01_Sahrani_CO.paa"};
    };
    class Atlas_V_CarrierRigKBT_01_light_RACS_F: V_CarrierRigKBT_01_light_base_F
	{
		author = $STR_A3_A_BranFlakes;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigKBT_01_light_RACS_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Icon_CarrierRigKBT_01_light_RACS_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\CarrierRigKBT_01_Sahrani_CO.paa"};
    };
    class Atlas_V_CarrierRigKBT_01_heavy_RACS_F: V_CarrierRigKBT_01_heavy_base_F
	{
		author = $STR_A3_A_BranFlakes;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigKBT_01_heavy_RACS_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Icon_CarrierRigKBT_01_heavy_RACS_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\CarrierRigKBT_01_Sahrani_CO.paa"};
    };
	class Atlas_V_CarrierRigKBT_01_CQB_RACS_F: Aegis_V_CarrierRigKBT_01_cqb_base_F
	{
		author = $STR_A3_A_BranFlakes;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigKBT_01_cqb_RACS_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Icon_CarrierRigKBT_01_CQB_RACS_F_CA.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\CarrierRigKBT_01_Sahrani_CO.paa",
			""
		};
    };
    class Atlas_V_CarrierRigKBT_01_tac_UNRACS_F: Aegis_V_CarrierRigKBT_01_tactical_base_F
	{
		author = $STR_A3_A_Grave;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigKBT_01_tac_UNRACS_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Icon_CarrierRigKBT_01_Tactical_UNRACS_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\CarrierRigKBT_01_SahraniUN_CO.paa",
			""
		};
	};
	class Atlas_V_CarrierRigKBT_01_heavy_UNRACS_F: V_CarrierRigKBT_01_heavy_base_F
	{
		author = $STR_A3_A_BranFlakes;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigKBT_01_heavy_UNRACS_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Icon_CarrierRigKBT_01_heavy_UNRACS_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\CarrierRigKBT_01_SahraniUN_CO.paa"};
    };
	/* Sahrani Carrier Rigs - End*/
	/*class V_EastCarrierRig_F: V_PlateCarrier1_rgr 
	{
		author = "Jamie";
		scope = public;
		scopeArsenal = public;
		displayName = "Punisher Rig (Olive)";
		//picture = "\jam_cdf_core\data\icon_ca.paa";
        hiddenSelections[] = {camo}; 
		hiddenSelectionsTextures[] = { "\A3_Atlas\Characters_F_Atlas\Vests\data\VZ_6B43_CO.paa"};
		model = "\A3_Atlas\Characters_F_Atlas\Vests\v_bel_vest_6b43_empty.p3d"; 
		class ItemInfo : VestItem
		{
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Vests\v_bel_vest_6b43_empty.p3d";
			hiddenSelections[] = {camo};
			hiddenSelectionsTextures[] = { "\A3_Atlas\Characters_F_Atlas\Vests\data\VZ_6B43_CO.paa"};
			containerClass = Supply60;
			mass = 25;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName	= "HitChest";
					armor			= 12;
					passThrough		= 0.1;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough		= 0.1;
				};
			};
		};
	};
	class V_EastCarrierRig_Lite_F: V_PlateCarrier1_rgr 
	{
		author = "Jamie";
		scope = public;
		scopeArsenal = public;
		displayName = "Punisher Lite Rig (Olive)";
		//picture = "\jam_cdf_core\data\icon_ca.paa";
        hiddenSelections[] = {camo,camo1}; 
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\VZ_6B43_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\VZ_Pouches_CO.paa"
		};
		model = "\A3_Atlas\Characters_F_Atlas\Vests\v_bel_vest_6b43_rifleman.p3d";
		class ItemInfo : VestItem
		{
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Vests\v_bel_vest_6b43_rifleman.p3d";
			hiddenSelections[] = {camo,camo1};
			hiddenSelectionsTextures[] = 
			{
				"\A3_Atlas\Characters_F_Atlas\Vests\data\VZ_6B43_CO.paa",
				"\A3_Atlas\Characters_F_Atlas\Vests\data\VZ_Pouches_CO.paa"
			};
			containerClass = Supply140;
			mass = 35;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName	= "HitChest";
					armor			= 12;
					passThrough		= 0.1;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough		= 0.1;
				};
			};
		};
	};
	class V_EastCarrierRig_MG_F : V_PlateCarrier1_rgr 
	{
		author = "Jamie";
		scope = public;
		scopeArsenal = public;
		displayName = "Punisher MG Rig (Olive)";
		//picture = "\jam_cdf_core\data\icon_ca.paa";
        hiddenSelections[] = {camo,camo1}; 
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\VZ_6B43_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\VZ_Pouches_CO.paa"
		};
		model = "\A3_Atlas\Characters_F_Atlas\Vests\v_bel_vest_6b43_autorifleman.p3d";
		class ItemInfo : VestItem
		{
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Vests\v_bel_vest_6b43_autorifleman.p3d";
			hiddenSelections[] = {camo,camo1};
			hiddenSelectionsTextures[] = 
			{
				"\A3_Atlas\Characters_F_Atlas\Vests\data\VZ_6B43_CO.paa",
				"\A3_Atlas\Characters_F_Atlas\Vests\data\VZ_Pouches_CO.paa"
			};
			containerClass = Supply160;
			mass = 40;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName	= "HitChest";
					armor			= 12;
					passThrough		= 0.1;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough		= 0.1;
				};
			};
		};
	};
	class V_EastCarrierRig_GL_F: V_PlateCarrier1_rgr 
	{
		author = "Jamie";
		scope = public;
		scopeArsenal = public;
		displayName = "Punisher GL Rig (Woodland Hex)";
		//picture = "\jam_cdf_core\data\icon_ca.paa";
        hiddenSelections[] = {camo,camo1}; 
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\VZ_6B43_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\VZ_Pouches_CO.paa"
		};
		model = "\A3_Atlas\Characters_F_Atlas\Vests\v_bel_vest_6b43_rifleman_gl.p3d";
		class ItemInfo : VestItem
		{
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Vests\v_bel_vest_6b43_rifleman_gl.p3d";
			hiddenSelections[] = {camo,camo1};
			hiddenSelectionsTextures[] = 
			{
				"\A3_Atlas\Characters_F_Atlas\Vests\data\VZ_6B43_CO.paa",
				"\A3_Atlas\Characters_F_Atlas\Vests\data\VZ_Pouches_CO.paa"
			};
			containerClass = Supply140;
			mass = 35;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName	= "HitChest";
					armor			= 12;
					passThrough		= 0.1;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough		= 0.1;
				};
			};
		};
	};*/

	/* Atlas Luchnik Rig Variants*/
	class Aegis_V_OCarrierLuchnik_F;
	class Aegis_V_OCarrierLuchnik_Lite_F;
	class Aegis_V_OCarrierLuchnik_GL_F;
	class Aegis_V_OCarrierLuchnik_CQB_F;

	class Atlas_V_OCarrierLuchnik_whex_F: Aegis_V_OCarrierLuchnik_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierLuchnik_whex_F0;
		//picture = "";
        hiddenSelections[] = {camo}; 
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierLuchnik_Whex_CO.paa"
		};
	};
	class Atlas_V_OCarrierLuchnik_Lite_whex_F: Aegis_V_OCarrierLuchnik_Lite_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierLuchnik_Lite_whex_F0;
		//picture = "";
        hiddenSelections[] = {camo,camo1}; 
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierLuchnik_Whex_CO.paa"
			//"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierLuchnik_Pouches_Whex_CO.paa"
		};
	};
	class Atlas_V_OCarrierLuchnik_GL_whex_F: Aegis_V_OCarrierLuchnik_GL_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierLuchnik_GL_whex_F0;
		//picture = "";
        hiddenSelections[] = {camo,camo1,camo2}; 
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierLuchnik_Whex_CO.paa",
			//"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierLuchnik_Pouches_Whex_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierLuchnik_GL_Whex_CO.paa"
		};
	};
	class Atlas_V_OCarrierLuchnik_CQB_whex_F: Aegis_V_OCarrierLuchnik_CQB_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierLuchnik_CQB_whex_F0;
		//picture = "";
        hiddenSelections[] = {camo,camo1,camo2}; 
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierLuchnik_Whex_CO.paa",
			//"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierLuchnik_Pouches_Whex_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierLuchnik_GL_Whex_CO.paa"
		};
	};

	
	/* Odin Rig */
	/*class V_CarrierRigBW_CQB_F: V_PlateCarrier1_rgr 
	{
		author = "Jamie";
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigBW_CQB0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\V_CarrierRigBW_CQB_F_ca.paa";
        hiddenSelections[] = {camo,camo1,camo2};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_flk_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_Pouches_flk_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_GL_flk_CO.paa"
		};
		model = "\A3_Atlas\Characters_F_Atlas\Vests\V_CarrierRigBW_CQB_F.p3d";
		class ItemInfo : VestItem
		{
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Vests\V_CarrierRigBW_CQB_F.p3d";
			hiddenSelections[] = {camo,camo1,camo2};
			hiddenSelectionsTextures[] = 
			{
				"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_flk_CO.paa",
				"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_Pouches_flk_CO.paa",
				"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_GL_flk_CO.paa"
			};
			containerClass = Supply140;
			mass = 35;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 0.5;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName	= "HitChest";
					armor			= 12;
					passThrough		= 0.1;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough		= 0.1;
				};
			};
		};
	};
	class V_CarrierRigBW_CQB_rgr_F: V_CarrierRigBW_CQB_F 
	{
		author = "Jamie";
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigBW_CQB_rgr0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\V_CarrierRigBW_CQB_rgr_F_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_rgr_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_Pouches_rgr_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_GL_rgr_CO.paa"
		};
	};
	class V_CarrierRigBW_CQB_khk_F: V_CarrierRigBW_CQB_F 
	{
		author = "Jamie";
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigBW_CQB_khk0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\V_CarrierRigBW_CQB_khk_F_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_khk_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_Pouches_khk_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_GL_khk_CO.paa"
		};
	};
	class V_CarrierRigBW_CQB_blk_F: V_CarrierRigBW_CQB_F 
	{
		author = "Jamie";
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigBW_CQB_blk0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\V_CarrierRigBW_CQB_blk_F_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_blk_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_Pouches_blk_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_GL_blk_CO.paa"
		};
	};
	class V_CarrierRigBW_CQB_multitarn_F: V_CarrierRigBW_CQB_F 
	{
		author = "Jamie";
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigBW_CQB_multitarn0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\V_CarrierRigBW_CQB_multitarn_F_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_Multitarn_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_Pouches_Multitarn_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_GL_Multitarn_CO.paa"
		};
	};
	class V_CarrierRigBW_F: V_PlateCarrier1_rgr 
	{
		author = "Jamie";
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigBW0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\V_CarrierRigBW_F_ca.paa";
        hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_flk_CO.paa"
		};
		model = "\A3_Atlas\Characters_F_Atlas\Vests\V_CarrierRigBW_F.p3d";
		class ItemInfo : VestItem
		{
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Vests\V_CarrierRigBW_F.p3d";
			hiddenSelections[] = {camo};
			hiddenSelectionsTextures[] = 
			{
				"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_flk_CO.paa"
			};
			containerClass = Supply60;
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName	= "HitChest";
					armor			= 12;
					passThrough		= 0.1;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough		= 0.1;
				};
			};
		};
	};
	class V_CarrierRigBW_rgr_F: V_CarrierRigBW_F 
	{
		author = "Jamie";
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigBW_rgr0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\V_CarrierRigBW_rgr_F_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_rgr_CO.paa"
		};
	};
	class V_CarrierRigBW_khk_F: V_CarrierRigBW_F 
	{
		author = "Jamie";
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigBW_khk0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\V_CarrierRigBW_khk_F_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_khk_CO.paa"
		};
	};
	class V_CarrierRigBW_blk_F: V_CarrierRigBW_F 
	{
		author = "Jamie";
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigBW_blk0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\V_CarrierRigBW_khk_F_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_blk_CO.paa"
		};
	};
	class V_CarrierRigBW_multitarn_F: V_CarrierRigBW_F 
	{
		author = "Jamie";
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigBW_multitarn0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\V_CarrierRigBW_multitarn_F_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_Multitarn_CO.paa"
		};
	};
	class V_CarrierRigBW_GL_F: V_PlateCarrier1_rgr 
	{
		author = "Jamie";
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigBW_GL0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\V_CarrierRigBW_GL_F_ca.paa";
        hiddenSelections[] = {camo,camo1,camo2};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_flk_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_Pouches_flk_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_GL_flk_CO.paa"
		};
		model = "\A3_Atlas\Characters_F_Atlas\Vests\V_CarrierRigBW_GL_F.p3d";
		class ItemInfo : VestItem
		{
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Vests\V_CarrierRigBW_GL_F.p3d";
			hiddenSelections[] = {camo,camo1,camo2};
			hiddenSelectionsTextures[] = 
			{
				"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_flk_CO.paa",
				"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_Pouches_flk_CO.paa",
				"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_GL_flk_CO.paa"
			};
			containerClass = Supply140;
			mass = 40;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 0.5;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 8;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName	= "HitChest";
					armor			= 12;
					passThrough		= 0.1;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough		= 0.1;
				};
			};
		};
	};
	class V_CarrierRigBW_GL_rgr_F: V_CarrierRigBW_GL_F 
	{
		author = "Jamie";
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigBW_GL_rgr0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\V_CarrierRigBW_GL_rgr_F_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_rgr_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_Pouches_rgr_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_GL_rgr_CO.paa"
		};
	};
	class V_CarrierRigBW_GL_khk_F: V_CarrierRigBW_GL_F 
	{
		author = "Jamie";
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigBW_GL_khk0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\V_CarrierRigBW_GL_khk_F_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_khk_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_Pouches_khk_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_GL_khk_CO.paa"
		};
	};
	class V_CarrierRigBW_GL_blk_F: V_CarrierRigBW_GL_F 
	{
		author = "Jamie";
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigBW_GL_blk0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\V_CarrierRigBW_GL_blk_F_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_blk_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_Pouches_blk_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_GL_blk_CO.paa"
		};
	};
	class V_CarrierRigBW_GL_multitarn_F: V_CarrierRigBW_GL_F 
	{
		author = "Jamie";
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigBW_GL_multitarn0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\V_CarrierRigBW_GL_multitarn_F_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_Multitarn_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_Pouches_Multitarn_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_GL_Multitarn_CO.paa"
		};
	};
	class V_CarrierRigBW_Lite_F: V_PlateCarrier1_rgr 
	{
		author = "Jamie";
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigBW_Lite0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\V_CarrierRigBW_Lite_F_ca.paa";
        hiddenSelections[] = {camo,camo1};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_flk_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_Pouches_flk_CO.paa"
		};
		model = "\A3_Atlas\Characters_F_Atlas\Vests\V_CarrierRigBW_Lite_F.p3d";
		class ItemInfo : VestItem
		{
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Vests\V_CarrierRigBW_Lite_F.p3d";
			hiddenSelections[] = {camo,camo1};
			hiddenSelectionsTextures[] = 
			{
				"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_flk_CO.paa",
				"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_Pouches_flk_CO.paa"
			};
			containerClass = Supply140;
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName	= "HitChest";
					armor			= 12;
					passThrough		= 0.1;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough		= 0.1;
				};
			};
		};
	};
	class V_CarrierRigBW_Lite_rgr_F: V_CarrierRigBW_Lite_F 
	{
		author = "Jamie";
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigBW_Lite_rgr0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\V_CarrierRigBW_Lite_rgr_F_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_rgr_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_Pouches_rgr_CO.paa"
		};
	};
	class V_CarrierRigBW_Lite_khk_F: V_CarrierRigBW_Lite_F 
	{
		author = "Jamie";
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigBW_Lite_khk0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\V_CarrierRigBW_Lite_khk_F_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_khk_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_Pouches_khk_CO.paa"
		};
	};
	class V_CarrierRigBW_Lite_blk_F: V_CarrierRigBW_Lite_F 
	{
		author = "Jamie";
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigBW_Lite_blk0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\V_CarrierRigBW_Lite_blk_F_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_blk_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_Pouches_blk_CO.paa"
		};
	};
	class V_CarrierRigBW_Lite_multitarn_F: V_CarrierRigBW_Lite_F 
	{
		author = "Jamie";
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_V_CarrierRigBW_Lite_multitarn0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\V_CarrierRigBW_Lite_multitarn_F_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_Multitarn_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\CarrierRigBW_Pouches_Multitarn_CO.paa"
		};
	};*/

	/* Type 27 Carrier Rigs*/
    class Atlas_V_OCarrierRig_CQB_Hex_F: V_PlateCarrier1_rgr 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_Hex_CQB0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_CQB_Hex_F_ca.paa";
        hiddenSelections[] = {camo,camo1,camo2};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_hex_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\ORigLBV_hex_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_GL_hex_CO.paa"
		};
		model = "\A3_Atlas\Characters_F_Atlas\Vests\Atlas_V_OCarrierRig_CQB_F.p3d";
		class ItemInfo : VestItem
		{
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Vests\Atlas_V_OCarrierRig_CQB_F.p3d";
			hiddenSelections[] = {camo,camo1,camo2};
			hiddenSelectionsTextures[] = 
			{
				"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_hex_CO.paa",
				"\A3_Atlas\Characters_F_Atlas\Vests\data\ORigLBV_hex_CO.paa",
				"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_GL_hex_CO.paa"
			};
			containerClass = Supply140;
			mass = 35;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 0.5;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName	= "HitChest";
					armor			= 12;
					passThrough		= 0.1;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough		= 0.1;
				};
			};
		};
	};
	class Atlas_V_OCarrierRig_CQB_GHex_F: Atlas_V_OCarrierRig_CQB_Hex_F 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_GHex_CQB0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_CQB_GHex_F_ca.paa";
        hiddenSelections[] = {camo,camo1,camo2};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_ghex_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\ORigLBV_ghex_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_GL_ghex_CO.paa"
		};
	};
	class Atlas_V_OCarrierRig_CQB_Dst_F: Atlas_V_OCarrierRig_CQB_Hex_F 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_dst_CQB0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_CQB_dst_F_ca.paa";
        hiddenSelections[] = {camo,camo1,camo2};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_dst_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\ORigLBV_dst_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_GL_dst_CO.paa"
		};
	};
	class Atlas_V_OCarrierRig_CQB_semiarid_F: Atlas_V_OCarrierRig_CQB_Hex_F 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_semiarid_CQB0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_CQB_semiarid_F_ca.paa";
        hiddenSelections[] = {camo,camo1,camo2};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_semiarid_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\ORigLBV_semiarid_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_GL_semiarid_CO.paa"
		};
	};
	class Atlas_V_OCarrierRig_CQB_WHex_F: Atlas_V_OCarrierRig_CQB_Hex_F 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_whex_CQB0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_CQB_whex_F_ca.paa";
        hiddenSelections[] = {camo,camo1,camo2};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_whex_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\ORigLBV_whex_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_GL_whex_CO.paa"
		};
	};
	class Atlas_V_OCarrierRig_CQB_blk_F: Atlas_V_OCarrierRig_CQB_Hex_F 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_blk_CQB0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_CQB_blk_F_ca.paa";
        hiddenSelections[] = {camo,camo1,camo2};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_blk_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\ORigLBV_blk_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_GL_blk_CO.paa"
		};
	};
	class Atlas_V_OCarrierRig_CQB_khk_F: Atlas_V_OCarrierRig_CQB_Hex_F 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_khk_CQB0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_CQB_khk_F_ca.paa";
        hiddenSelections[] = {camo,camo1,camo2};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_khk_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\ORigLBV_khk_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_GL_khk_CO.paa"
		};
	};
	class Atlas_V_OCarrierRig_CQB_oli_F: Atlas_V_OCarrierRig_CQB_Hex_F 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_oli_CQB0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_CQB_oli_F_ca.paa";
        hiddenSelections[] = {camo,camo1,camo2};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_oli_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\ORigLBV_oli_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_GL_oli_CO.paa"
		};
	};
	class Atlas_V_OCarrierRig_Hex_F: V_PlateCarrier1_rgr 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_Hex0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_Hex_F_ca.paa";
        hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_hex_CO.paa"
		};
		model = "\A3_Atlas\Characters_F_Atlas\Vests\Atlas_V_OCarrierRig_F.p3d";
		class ItemInfo : VestItem
		{
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Vests\Atlas_V_OCarrierRig_F.p3d";
			hiddenSelections[] = {camo};
			hiddenSelectionsTextures[] = 
			{
				"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_hex_CO.paa"
			};
			containerClass = Supply60;
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 0.5;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName	= "HitChest";
					armor			= 12;
					passThrough		= 0.1;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough		= 0.1;
				};
			};
		};
	};
	class Atlas_V_OCarrierRig_GHex_F: Atlas_V_OCarrierRig_Hex_F 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_GHex0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_GHex_F_ca.paa";
        hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_ghex_CO.paa"
		};
	};
	class Atlas_V_OCarrierRig_dst_F: Atlas_V_OCarrierRig_Hex_F 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_dst0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_dst_F_ca.paa";
        hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_dst_CO.paa"
		};
	};
	class Atlas_V_OCarrierRig_semiarid_F: Atlas_V_OCarrierRig_Hex_F 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_semiarid0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_semiarid_F_ca.paa";
        hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_semiarid_CO.paa"
		};
	};
	class Atlas_V_OCarrierRig_whex_F: Atlas_V_OCarrierRig_Hex_F 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_whex0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_whex_F_ca.paa";
        hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_whex_CO.paa"
		};
	};
	class Atlas_V_OCarrierRig_blk_F: Atlas_V_OCarrierRig_Hex_F 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_blk0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_blk_F_ca.paa";
        hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_blk_CO.paa"
		};
	};
	class Atlas_V_OCarrierRig_khk_F: Atlas_V_OCarrierRig_Hex_F 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_khk0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_khk_F_ca.paa";
        hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_khk_CO.paa"
		};
	};
	class Atlas_V_OCarrierRig_oli_F: Atlas_V_OCarrierRig_Hex_F 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_oli0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_oli_F_ca.paa";
        hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_oli_CO.paa"
		};
	};
	class Atlas_V_OCarrierRig_GL_Hex_F: V_PlateCarrier1_rgr 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_Hex_GL0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_GL_Hex_F_ca.paa";
        hiddenSelections[] = {camo,camo1,camo2};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_hex_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\ORigLBV_hex_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_GL_hex_CO.paa"
		};
		model = "\A3_Atlas\Characters_F_Atlas\Vests\Atlas_V_OCarrierRig_GL_F.p3d";
		class ItemInfo : VestItem
		{
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Vests\Atlas_V_OCarrierRig_GL_F.p3d";
			hiddenSelections[] = {camo,camo1,camo2};
			hiddenSelectionsTextures[] = 
			{
				"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_hex_CO.paa",
				"\A3_Atlas\Characters_F_Atlas\Vests\data\ORigLBV_hex_CO.paa",
				"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_GL_hex_CO.paa"
			};
			containerClass = Supply140;
			mass = 40;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 0.5;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 8;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName	= "HitChest";
					armor			= 12;
					passThrough		= 0.1;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough		= 0.1;
				};
			};
		};
	};
	class Atlas_V_OCarrierRig_GL_GHex_F: Atlas_V_OCarrierRig_GL_Hex_F 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_GHex_GL0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_GL_GHex_F_ca.paa";
        hiddenSelections[] = {camo,camo1,camo2};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_ghex_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\ORigLBV_ghex_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_GL_ghex_CO.paa"
		};
	};
	class Atlas_V_OCarrierRig_GL_dst_F: Atlas_V_OCarrierRig_GL_Hex_F 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_dst_GL0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_GL_dst_F_ca.paa";
        hiddenSelections[] = {camo,camo1,camo2};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_dst_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\ORigLBV_dst_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_GL_dst_CO.paa"
		};
	};
	class Atlas_V_OCarrierRig_GL_semiarid_F: Atlas_V_OCarrierRig_GL_Hex_F 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_semiarid_GL0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_GL_semiarid_F_ca.paa";
        hiddenSelections[] = {camo,camo1,camo2};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_semiarid_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\ORigLBV_semiarid_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_GL_semiarid_CO.paa"
		};
	};
	class Atlas_V_OCarrierRig_GL_whex_F: Atlas_V_OCarrierRig_GL_Hex_F 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_whex_GL0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_GL_whex_F_ca.paa";
        hiddenSelections[] = {camo,camo1,camo2};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_whex_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\ORigLBV_whex_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_GL_whex_CO.paa"
		};
	};
	class Atlas_V_OCarrierRig_GL_blk_F: Atlas_V_OCarrierRig_GL_Hex_F 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_blk_GL0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_GL_blk_F_ca.paa";
        hiddenSelections[] = {camo,camo1,camo2};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_blk_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\ORigLBV_blk_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_GL_blk_CO.paa"
		};
	};
	class Atlas_V_OCarrierRig_GL_khk_F: Atlas_V_OCarrierRig_GL_Hex_F 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_khk_GL0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_GL_khk_F_ca.paa";
        hiddenSelections[] = {camo,camo1,camo2};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_khk_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\ORigLBV_khk_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_GL_khk_CO.paa"
		};
	};
	class Atlas_V_OCarrierRig_GL_oli_F: Atlas_V_OCarrierRig_GL_Hex_F 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_oli_GL0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_GL_oli_F_ca.paa";
        hiddenSelections[] = {camo,camo1,camo2};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_oli_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\ORigLBV_oli_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_GL_oli_CO.paa"
		};
	};
	class Atlas_V_OCarrierRig_Lite_Hex_F: V_PlateCarrier1_rgr 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_Hex_lite0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_Lite_Hex_F_ca.paa";
        hiddenSelections[] = {camo,camo1};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_hex_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\ORigLBV_hex_CO.paa"
		};
		model = "\A3_Atlas\Characters_F_Atlas\Vests\Atlas_V_OCarrierRig_Lite_F.p3d";
		class ItemInfo : VestItem
		{
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Vests\Atlas_V_OCarrierRig_Lite_F.p3d";
			hiddenSelections[] = {camo,camo1};
			hiddenSelectionsTextures[] = 
			{
				"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_hex_CO.paa",
				"\A3_Atlas\Characters_F_Atlas\Vests\data\ORigLBV_hex_CO.paa"
			};
			containerClass = Supply140;
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 0.5;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName	= "HitChest";
					armor			= 12;
					passThrough		= 0.1;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough		= 0.1;
				};
			};
		};
	};
	class Atlas_V_OCarrierRig_Lite_gHex_F: Atlas_V_OCarrierRig_Lite_Hex_F 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_GHex_lite0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_Lite_GHex_F_ca.paa";
        hiddenSelections[] = {camo,camo1};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_ghex_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\ORigLBV_ghex_CO.paa"
		};
	};
	class Atlas_V_OCarrierRig_Lite_dst_F: Atlas_V_OCarrierRig_Lite_Hex_F 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_dst_lite0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_Lite_dst_F_ca.paa";
        hiddenSelections[] = {camo,camo1};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_dst_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\ORigLBV_dst_CO.paa"
		};
	};
	class Atlas_V_OCarrierRig_Lite_semiarid_F: Atlas_V_OCarrierRig_Lite_Hex_F 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_semiarid_lite0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_Lite_semiarid_F_ca.paa";
        hiddenSelections[] = {camo,camo1};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_semiarid_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\ORigLBV_semiarid_CO.paa"
		};
	};
	class Atlas_V_OCarrierRig_Lite_whex_F: Atlas_V_OCarrierRig_Lite_Hex_F 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_whex_lite0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_Lite_WHex_F_ca.paa";
        hiddenSelections[] = {camo,camo1};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_whex_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\ORigLBV_whex_CO.paa"
		};
	};
	class Atlas_V_OCarrierRig_Lite_blk_F: Atlas_V_OCarrierRig_Lite_Hex_F 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_blk_lite0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_Lite_blk_F_ca.paa";
        hiddenSelections[] = {camo,camo1};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_blk_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\ORigLBV_blk_CO.paa"
		};
	};
	class Atlas_V_OCarrierRig_Lite_khk_F: Atlas_V_OCarrierRig_Lite_Hex_F 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_khk_lite0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_Lite_khk_F_ca.paa";
        hiddenSelections[] = {camo,camo1};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_khk_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\ORigLBV_khk_CO.paa"
		};
	};
	class Atlas_V_OCarrierRig_Lite_oli_F: Atlas_V_OCarrierRig_Lite_Hex_F 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_oli_lite0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_Lite_oli_F_ca.paa";
        hiddenSelections[] = {camo,camo1};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_oli_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\ORigLBV_oli_CO.paa"
		};
	};

	/* Type 27 Alt Rig*/
	 class Atlas_V_OCarrierRig_CQB_alt_oli_F: Atlas_V_OCarrierRig_CQB_Hex_F 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_Oli_CQB_alt0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_CQB_oli_F_ca.paa";
        hiddenSelections[] = {camo,camo1,camo2};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_oli_CO.paa",
			"\a3\characters_f_enoch\vests\data\CarrierRigKBT_01_olive_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_GL_oli_CO.paa"
		};
		model = "\A3_Atlas\Characters_F_Atlas\Vests\Atlas_V_OCarrierRig_CQB_alt_F.p3d";
		class ItemInfo : VestItem
		{
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Vests\Atlas_V_OCarrierRig_CQB_alt_F.p3d";
			hiddenSelections[] = {camo,camo1,camo2};
			hiddenSelectionsTextures[] = 
			{
				"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_oli_CO.paa",
				"\a3\characters_f_enoch\vests\data\CarrierRigKBT_01_olive_CO.paa",
				"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_GL_oli_CO.paa"
			};
			containerClass = Supply120;
			mass = 35;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 0.5;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName	= "HitChest";
					armor			= 12;
					passThrough		= 0.1;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough		= 0.1;
				};
			};
		};
	};
	class Atlas_V_OCarrierRig_CQB_alt_blk_F: Atlas_V_OCarrierRig_CQB_alt_oli_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_blk_CQB_alt0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_CQB_blk_F_ca.paa";
        hiddenSelections[] = {camo,camo1,camo2};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_blk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Vests\Data\CarrierRigKBT_01_Black_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_GL_blk_CO.paa"
		};
	};
	class Atlas_V_OCarrierRig_CQB_alt_khk_F: Atlas_V_OCarrierRig_CQB_alt_oli_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_khk_CQB_alt0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_CQB_khk_F_ca.paa";
        hiddenSelections[] = {camo,camo1,camo2};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_khk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Vests\Data\CarrierRigKBT_01_khaki_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_GL_khk_CO.paa"
		};
	};
	class Atlas_V_OCarrierRig_GL_alt_Oli_F: Atlas_V_OCarrierRig_GL_Hex_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_oli_GL_alt0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_GL_oli_F_ca.paa";
        hiddenSelections[] = {camo,camo1,camo2};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_oli_CO.paa",
			"\a3\characters_f_enoch\vests\data\CarrierRigKBT_01_olive_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_GL_oli_CO.paa"
		};
		model = "\A3_Atlas\Characters_F_Atlas\Vests\Atlas_V_OCarrierRig_GL_alt_F.p3d";
		class ItemInfo : VestItem
		{
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Vests\Atlas_V_OCarrierRig_GL_alt_F.p3d";
			hiddenSelections[] = {camo,camo1,camo2};
			hiddenSelectionsTextures[] = 
			{
				"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_oli_CO.paa",
				"\a3\characters_f_enoch\vests\data\CarrierRigKBT_01_olive_CO.paa",
				"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_GL_oli_CO.paa"
			};
			containerClass = Supply120;
			mass = 40;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 0.5;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 8;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName	= "HitChest";
					armor			= 12;
					passThrough		= 0.1;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough		= 0.1;
				};
			};
		};
	};
	class Atlas_V_OCarrierRig_GL_alt_blk_F: Atlas_V_OCarrierRig_GL_alt_oli_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_blk_GL_alt0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_GL_blk_F_ca.paa";
        hiddenSelections[] = {camo,camo1,camo2};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_blk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Vests\Data\CarrierRigKBT_01_Black_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_GL_blk_CO.paa"
		};
	};
	class Atlas_V_OCarrierRig_GL_alt_khk_F: Atlas_V_OCarrierRig_GL_alt_oli_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_khk_GL_alt0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_GL_khk_F_ca.paa";
        hiddenSelections[] = {camo,camo1,camo2};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_khk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Vests\Data\CarrierRigKBT_01_khaki_CO.paa",
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_GL_khk_CO.paa"
		};
	};
	class Atlas_V_OCarrierRig_Lite_Alt_Oli_F: Atlas_V_OCarrierRig_Lite_Hex_F 
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_Oli_lite_alt0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_Lite_oli_F_ca.paa";
        hiddenSelections[] = {camo,camo1};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_oli_CO.paa",
			"\a3\characters_f_enoch\vests\data\CarrierRigKBT_01_olive_CO.paa",
		};
		model = "\A3_Atlas\Characters_F_Atlas\Vests\Atlas_V_OCarrierRig_Lite_alt_F.p3d";
		class ItemInfo : VestItem
		{
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Vests\Atlas_V_OCarrierRig_Lite_alt_F.p3d";
			hiddenSelections[] = {camo,camo1};
			hiddenSelectionsTextures[] = 
			{
				"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_oli_CO.paa",
				"\a3\characters_f_enoch\vests\data\CarrierRigKBT_01_olive_CO.paa",
			};
			containerClass = Supply120;
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 0.5;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName	= "HitChest";
					armor			= 12;
					passThrough		= 0.1;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough		= 0.1;
				};
			};
		};
	};
	class Atlas_V_OCarrierRig_Lite_alt_blk_F: Atlas_V_OCarrierRig_Lite_alt_oli_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_blk_Lite_alt0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_Lite_blk_F_ca.paa";
        hiddenSelections[] = {camo,camo1};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_blk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Vests\Data\CarrierRigKBT_01_Black_CO.paa"
		};
	};
	class Atlas_V_OCarrierRig_Lite_alt_khk_F: Atlas_V_OCarrierRig_Lite_alt_oli_F
	{
		author = $STR_A3_A_JC980_Jamie;
		scope = public;
		scopeArsenal = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_OCarrierRig_khk_Lite_alt0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_OCarrierRig_Lite_khk_F_ca.paa";
        hiddenSelections[] = {camo,camo1};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\data\OCarrierRig_khk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Vests\Data\CarrierRigKBT_01_khaki_CO.paa"
		};
	};

	/* Type 25 LBV*/
	class Atlas_V_ORigLBV_Hex_F: Vest_Camo_Base
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_ORigLBV_Hex_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_ORigLBV_Hex_F_ca.paa";
		model = "\A3_Atlas\Characters_F_Atlas\Vests\Atlas_V_ORigLBV_F.p3d";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\ORigLBV_hex_CO.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3_Atlas\Characters_F_Atlas\Vests\Atlas_V_ORigLBV_F.p3d";
			containerClass = Supply140;
			mass = 10;
			hiddenSelections[] = {camo};
		};
	};
	class Atlas_V_ORigLBV_GHex_F: Atlas_V_ORigLBV_Hex_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_ORigLBV_GHex_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_ORigLBV_GHex_F_ca.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\ORigLBV_Ghex_CO.paa"};
	};
	class Atlas_V_ORigLBV_Whex_F: Atlas_V_ORigLBV_Hex_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_ORigLBV_WHex_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_ORigLBV_WHex_F_ca.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\ORigLBV_whex_CO.paa"};
	};
	class Atlas_V_ORigLBV_dst_F: Atlas_V_ORigLBV_Hex_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_ORigLBV_dst_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_ORigLBV_dst_F_ca.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\ORigLBV_dst_CO.paa"};
	};
	class Atlas_V_ORigLBV_semiarid_F: Atlas_V_ORigLBV_Hex_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_ORigLBV_semiarid_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_ORigLBV_semiarid_F_ca.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\ORigLBV_semiarid_CO.paa"};
	};
	class Atlas_V_ORigLBV_oli_F: Atlas_V_ORigLBV_Hex_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_ORigLBV_oli_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_ORigLBV_oli_F_ca.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\ORigLBV_oli_CO.paa"};
	};
	class Atlas_V_ORigLBV_khk_F: Atlas_V_ORigLBV_Hex_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_ORigLBV_khk_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_ORigLBV_khk_F_ca.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\ORigLBV_khk_CO.paa"};
	};
	class Atlas_V_ORigLBV_blk_F: Atlas_V_ORigLBV_Hex_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_Atlas_V_ORigLBV_blk_F0;
		picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\Atlas_V_ORigLBV_blk_F_ca.paa";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\ORigLBV_blk_CO.paa"};
	};


	/* Atlas Lifchik-M Variants*/
	class Aegis_V_ChestrigEast_RUtaiga_F;
	class Atlas_V_ChestRigEast_semiarid_F: Aegis_V_ChestrigEast_RUtaiga_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_ChestRigEast_semiarid0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\Aegis_V_ChestrigEast_RUarid_F_ca.paa";
		model = "\A3_Aegis\Characters_F_Aegis\Vests\Aegis_VChestrigEast_F.p3d";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\VChestrigEast_semiarid_CO.paa"};
	};
	class Atlas_V_ChestRigEast_whex_F: Aegis_V_ChestrigEast_RUtaiga_F
	{
		author = $STR_A3_A_Jamie;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_V_ChestRigEast_whex0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\Aegis_V_ChestrigEast_RUtaiga_F_ca.paa";
		model = "\A3_Aegis\Characters_F_Aegis\Vests\Aegis_VChestrigEast_F.p3d";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Vests\Data\VChestrigEast_whex_CO.paa"};
	};


	/* West Sahara Carrier Rig Variants */
	class V_PlateCarrier_CTRG_lxWS;
    class Atlas_V_PlateCarrier2_alt_snd: V_PlateCarrier_CTRG_lxWS
    {
		author = $STR_LXWS_Author;
        scope = public; 
        picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_PlateCarrier2_snd_F_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrier2_alt_sand0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\vests_sand_CO.paa"
		};
    };
	class Atlas_V_PlateCarrier2_alt_aucamo: V_PlateCarrier_CTRG_lxWS
    {
		author = $STR_LXWS_Author;
        scope = public; 
        picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_PlateCarrier2_snd_F_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrier2_alt_aucamo_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\vests_aucamo_CO.paa"
		};
    };
	class Atlas_V_PlateCarrier2_alt_aucamo_ard: V_PlateCarrier_CTRG_lxWS
    {
		author = $STR_LXWS_Author;
        scope = public; 
        picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_PlateCarrier2_snd_F_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrier2_alt_aucamo_ard_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\vests_aucamo_arid_CO.paa"
		};
    };
	class Atlas_V_PlateCarrier2_alt_aucamo_trp: V_PlateCarrier_CTRG_lxWS
    {
		author = $STR_LXWS_Author;
        scope = public; 
        picture = "\A3_Atlas\Characters_F_Atlas\Vests\Data\UI\icon_V_PlateCarrier2_snd_F_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_V_PlateCarrier2_alt_aucamo_trp_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Vests\Data\vests_aucamo_tropic_CO.paa"
		};
    };
};

