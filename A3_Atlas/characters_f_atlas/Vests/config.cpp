#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
class CfgWeapons
{
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
};