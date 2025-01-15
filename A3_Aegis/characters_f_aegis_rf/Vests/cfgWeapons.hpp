class CfgWeapons
{
	/* Inheritance Tree */
	class ItemCore;
	class VestItem;

    /* Bases */
	class V_PlateCarrier1_rgr;
	class V_PlateCarrierL_CTRG: V_PlateCarrier1_rgr
	{
		class ItemInfo;
	};
	class V_PlateCarrierLite_Black_noFlag_RF;
	/* Reaction Forces Carrier Rig Variation */
	class Aegis_V_PlateCarrier_RF_base : V_PlateCarrierL_CTRG
	{
		author = "Rotators Collective";
		displayName = "Carrier Vest Rig";
		scope = protected;
		scopeArsenal = protected;
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_rgr_CO.paa"
		};
		picture = "\lxWS\characters_1_f_lxws\vests\data\ui\Icon_V_plate_carrier_lxws_ca.paa";
		model = "lxrf\characters_rf\vests\equip_b_vest02_rf.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "lxrf\characters_rf\vests\equip_b_vest02_rf.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class Aegis_V_PlateCarrier_RF_rgr: Aegis_V_PlateCarrier_RF_base
    {
		author = "Rotators Collective";
        scope = public;
		scopeArsenal = public;
        displayName  = $STR_A3_A_V_PlateCarrier_RF_rgr_F0; 
        picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier2_rgr_CA.paa"; 
        hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_rgr_CO.paa"};
    };
	class Aegis_V_PlateCarrier_RF_cbr: Aegis_V_PlateCarrier_RF_base
    {
		author = "Rotators Collective";
        scope = public;
		scopeArsenal = public;
        displayName  = $STR_A3_A_V_PlateCarrier_RF_cbr_F0; 
        picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier2_cbr_CA.paa"; 
        hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_cbr_CO.paa"};
    };
	class Aegis_V_PlateCarrier_RF_khk: Aegis_V_PlateCarrier_RF_base
    {
		author = "Rotators Collective";
        scope = public;
		scopeArsenal = public;
        displayName  = $STR_A3_A_V_PlateCarrier_RF_khk_F0; 
        picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier2_khk_CA.paa";  
        hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_khk_CO.paa"};
    };
	class Aegis_V_PlateCarrier_RF_mtp: Aegis_V_PlateCarrier_RF_base
    {
		author = "Rotators Collective";
        scope = public;
		scopeArsenal = public;
        displayName  = $STR_A3_A_V_PlateCarrier_RF_mtp_F0; 
        picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier2_mtp_CA.paa";  
        hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_mtp_CO.paa"};
    };
	class Aegis_V_PlateCarrier_RF_oli: Aegis_V_PlateCarrier_RF_base
    {
		author = "Rotators Collective";
        scope = public;
		scopeArsenal = public;
        displayName  = $STR_A3_A_V_PlateCarrier_RF_oli_F0; 
        picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier2_oli_CA.paa"; 
        hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_oli_CO.paa"};
    };
	class Aegis_V_PlateCarrier_RF_wdl: Aegis_V_PlateCarrier_RF_base
    {
		author = "Rotators Collective";
        scope = public;
		scopeArsenal = public;
        displayName  = $STR_A3_A_V_PlateCarrier_RF_wdl_F0; 
        picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier2_wdl_CA.paa";  
        hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_wdl_CO.paa"};
    };
	class Aegis_V_PlateCarrier_RF_tna: Aegis_V_PlateCarrier_RF_base
    {
		author = "Rotators Collective";
        scope = public;
		scopeArsenal = public;
        displayName  = $STR_A3_A_V_PlateCarrier_RF_tna_F0; 
        picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier2_wdl_CA.paa";  
        hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\V_PlateCarrier1_tna_F_CO"};
    };
	class Aegis_V_PlateCarrier_RF_blk: Aegis_V_PlateCarrier_RF_base
    {
		author = "Rotators Collective";
        scope = public;
		scopeArsenal = public;
        displayName  = $STR_A3_A_V_PlateCarrier_RF_blk_F0; 
        picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier2_wdl_CA.paa";  
        hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_blk_CO.paa"};
    };
	class Aegis_V_PlateCarrier_RF_desert: Aegis_V_PlateCarrier_RF_base
    {
		author = "Rotators Collective";
        scope = public;
		scopeArsenal = public; 
        displayName  = $STR_A3_A_V_PlateCarrier_RF_desert_F0; 
        picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_Aegis_V_PlateCarrier2_alt_desert_CA.paa";  
        hiddenSelectionsTextures[] = {"\lxws\characters_f_lxws\vests\data\vests_desert_CO.paa"};
    };
	class Aegis_V_PlateCarrierLite_rgr_RF: V_PlateCarrierLite_Black_noFlag_RF
	{
		author = "Rotators Collective";
		scope = protected;
		scopeArsenal = protected;
		displayName = "Carrier Lite Rig (Green)";
		picture="\A3\Characters_F_Mark\Data\UI\icon_carrier_spec_rig_grn.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Characters_F_Aegis\Vests\Data\Carrier_GL_Rig_grn_CO.paa"
		};
	};
	/*class Aegis_V_PlateCarrierLite_blk_RF: V_PlateCarrierLite_Black_noFlag_RF
	{
		author = "Rotators Collective";
		scope = public;
		scopeArsenal = public;
		displayName = "Carrier Lite Rig (Black)";
		picture="\A3\Characters_F_Mark\Data\UI\icon_carrier_spec_rig_grn.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Characters_F_Aegis\Vests\Data\Carrier_GL_Rig_blk_CO.paa"
		};
	};*/
	class Aegis_V_PlateCarrierLite_MTP_RF: V_PlateCarrierLite_Black_noFlag_RF
	{
		author = "Rotators Collective";
		scope = protected;
		scopeArsenal = protected;
		displayName = "Carrier Lite Rig (MTP)";
		picture="\A3\Characters_F_Mark\Data\UI\icon_carrier_spec_rig_grn.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Characters_F_Aegis\Vests\Data\Carrier_GL_Rig_mtp_CO.paa"
		};
	};
	class Aegis_V_PlateCarrierLite_tna_RF: V_PlateCarrierLite_Black_noFlag_RF
	{
		author = "Rotators Collective";
		scope = protected;
		scopeArsenal = protected;
		displayName = "Carrier Lite Rig (MTP-T)";
		picture="\A3\Characters_F_Mark\Data\UI\icon_carrier_spec_rig_grn.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Characters_F_Aegis\Vests\Data\V_PlateCarrierGL_tna_F_CO.paa"
		};
	};
	class Aegis_V_PlateCarrierLite_wdl_RF: V_PlateCarrierLite_Black_noFlag_RF
	{
		author = "Rotators Collective";
		scope = protected;
		scopeArsenal = protected;
		displayName = "Carrier Lite Rig (MTP-W)";
		picture="\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrierSpec_wdl_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Enoch\Vests\Data\carrier_gl_rig_wdl_co.paa"
		};
	};
	class Aegis_V_PlateCarrierLite_cbr_RF: V_PlateCarrierLite_Black_noFlag_RF
	{
		author = "Rotators Collective";
		scope = protected;
		scopeArsenal = protected;
		displayName = "Carrier Lite Rig (Coyote)";
		picture="\A3\Characters_F_Mark\Data\UI\icon_carrier_spec_rig_grn.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Characters_F_Aegis\Vests\Data\Carrier_GL_Rig_cbr_CO.paa"
		};
	};

	/* RF Tactical Vest Variants */
	class V_TacVest_khk;
	class V_TacVest_Rig_khk_RF: V_TacVest_khk
	{
		class ItemInfo;
	};
	class V_TacVest_rig_blk_RF: V_TacVest_rig_khk_RF
	{
		/* Update Texture to Aegis Black Tac Vest */
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Vests\Data\tacticalvest_black_CO.paa", 
			"\a3\characters_f\blufor\data\vests_blk_co.paa"
		};
		hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\tacticalvest.rvmat"};
	};
	class Aegis_V_TacVest_Rig_gry_RF: V_TacVest_rig_khk_RF
	{
		author = "Rotators Collective";
		displayName = $STR_A3_A_V_TacVest_Rig_gry_RF0;
		picture = "\A3_Aegis\Characters_F_Aegis_RF\Vests\Data\UI\icon_Aegis_V_TacVest_Rig_gry_RF_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3\Characters_F\Common\Data\tacticalvest_black_co.paa", 
			"\a3\characters_f\blufor\data\vests_blk_co.paa"
		};
	};
	class Aegis_V_TacVest_Rig_grn_RF: V_TacVest_rig_khk_RF
	{
		author = "Rotators Collective";
		displayName = $STR_A3_A_V_TacVest_Rig_grn_RF0;
		picture = "\A3_Aegis\Characters_F_Aegis_RF\Vests\Data\UI\icon_Aegis_V_TacVest_Rig_grn_RF_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Vests\Data\tacticalvest_RUkhk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_rgr_CO.paa"
		};
		hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\tacticalvest.rvmat"};
	};
	class Aegis_V_TacVest_Rig_camo_RF: V_TacVest_rig_khk_RF
	{
		author = "Rotators Collective";
		displayName = $STR_A3_A_V_TacVest_Rig_camo_RF0;
		picture = "\A3_Aegis\Characters_F_Aegis_RF\Vests\Data\UI\icon_Aegis_V_TacVest_Rig_camo_RF_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3\Characters_F_EPB\Common\Data\tacticalvest_camo_dark_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_rgr_CO.paa"
		};
		hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\tacticalvest.rvmat"};
	};
	class Aegis_V_TacVest_RigB_khk_RF: V_TacVest_Rig_khk_RF
	{
		author = "Rotators Collective";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_V_TacVest_RigB_khk_RF0;
		picture = "\A3_Aegis\Characters_F_Aegis_RF\Vests\Data\UI\icon_Aegis_V_TacVest_RigB_khk_RF_ca.paa";
		model = "\lxRF\characters_rf\vests\equip_tacticalvest_rig_holster_rf.p3d";
		hiddenSelections[] = {"camo", "camo1", "camo2"};
		hiddenSelectionsTextures[] = 
		{
			"\A3\Characters_F\Common\Data\tacticalvest_khaki_co.paa", 
			"\a3\characters_f\blufor\data\vests_khk_co.paa",
			"\a3\characters_f\blufor\data\vests_khk_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\lxRF\characters_rf\vests\equip_tacticalvest_rig_holster_rf.p3d";
			hiddenSelections[] = {"camo", "camo1", "camo2"};
		};
	};
	class Aegis_V_TacVest_RigB_blk_RF: Aegis_V_TacVest_RigB_khk_RF
	{
		author = "Rotators Collective";
		displayName = $STR_A3_A_V_TacVest_RigB_blk_RF0;
		picture = "\A3_Aegis\Characters_F_Aegis_RF\Vests\Data\UI\icon_Aegis_V_TacVest_RigB_blk_RF_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Vests\Data\tacticalvest_black_CO.paa",
			"\a3\characters_f\blufor\data\vests_blk_co.paa",
			"\a3\characters_f\blufor\data\vests_blk_co.paa"
		};
		hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\tacticalvest.rvmat"};
	};
	class Aegis_V_TacVest_RigB_oli_RF: Aegis_V_TacVest_RigB_khk_RF
	{
		author = "Rotators Collective";
		displayName = $STR_A3_A_V_TacVest_RigB_oli_RF0;
		picture = "\A3_Aegis\Characters_F_Aegis_RF\Vests\Data\UI\icon_Aegis_V_TacVest_RigB_oli_RF_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3\Characters_F\Common\Data\tacticalvest_olive_co.paa", 
			"\A3\Characters_F_Beta\INDEP\Data\armor1_oli_co.paa",
			"\A3\Characters_F_Beta\INDEP\Data\armor1_oli_co.paa"
		};
	};
	class Aegis_V_TacVest_RigB_gry_RF: Aegis_V_TacVest_RigB_khk_RF
	{
		author = "Rotators Collective";
		displayName = $STR_A3_A_V_TacVest_RigB_gry_RF0;
		picture = "\A3_Aegis\Characters_F_Aegis_RF\Vests\Data\UI\icon_Aegis_V_TacVest_RigB_gry_RF_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3\Characters_F\Common\Data\tacticalvest_black_co.paa",
			"\a3\characters_f\blufor\data\vests_blk_co.paa",
			"\a3\characters_f\blufor\data\vests_blk_co.paa"
		};
	};
	class Aegis_V_TacVest_RigB_grn_RF: Aegis_V_TacVest_RigB_khk_RF
	{
		author = "Rotators Collective";
		displayName = $STR_A3_A_V_TacVest_RigB_grn_RF0;
		picture = "\A3_Aegis\Characters_F_Aegis_RF\Vests\Data\UI\icon_Aegis_V_TacVest_RigB_grn_RF_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Characters_F_Aegis\Vests\Data\tacticalvest_RUkhk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_rgr_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_rgr_CO.paa"
		};
		hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\tacticalvest.rvmat"};
	};
	class Aegis_V_TacVest_RigB_camo_RF: Aegis_V_TacVest_RigB_khk_RF
	{
		author = "Rotators Collective";
		displayName = $STR_A3_A_V_TacVest_RigB_camo_RF0;
		picture = "\A3_Aegis\Characters_F_Aegis_RF\Vests\Data\UI\icon_Aegis_V_TacVest_RigB_camo_RF_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\A3\Characters_F_EPB\Common\Data\tacticalvest_camo_dark_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_rgr_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Vests\Data\vests_rgr_CO.paa"
		};
		hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Vests\Data\tacticalvest.rvmat"};
	};
};