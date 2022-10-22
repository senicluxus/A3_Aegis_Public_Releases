class CfgVehicles
{
    /* Definitions */
    #include "\A3_Aegis\macros_itemHolders.hpp"
    
    /* Bases */
	class Item_Base_F;

    /* Items */

    /* From "cfgBLUFOR.hpp" */
	class Item_U_B_CombatUniform_mcam_tshirt: Item_Base_F
	{
		displayName = $STR_A3_A_CfgWeapons_U_B_CombatUniform_mcam_tshirt0;
	};
	class Item_U_B_CombatUniform_mcam_vest: Item_Base_F
	{
		displayName = $STR_A3_A_CfgWeapons_U_B_CombatUniform_mcam_vest0;
	};
	class Item_U_B_T_Soldier_SL_F: Item_Base_F
	{
		displayName = $STR_A3_A_CfgWeapons_U_B_T_Soldier_SL_F0;
	};
	class Item_U_B_CombatUniform_vest_mcam_wdl_f: Item_Base_F
	{
    	displayName = $STR_A3_A_CfgWeapons_U_B_CombatUniform_vest_mcam_wdl_f0;
	};
	UNIFORM_HOLDER(U_B_GhillieSuit_wdl_f,$STR_A3_A_CfgWeapons_U_B_GhillieSuit_wdl_f0);
	UNIFORM_HOLDER(U_B_W_FullGhillie_wdl_F,$STR_A3_A_CfgWeapons_U_B_W_FullGhillie_wdl_F0);
	UNIFORM_HOLDER(U_B_UBACS_mtp_f,$STR_A3_A_CfgWeapons_U_B_UBACS_mtp_f0);
	UNIFORM_HOLDER(U_B_UBACS_tshirt_mtp_f,$STR_A3_A_CfgWeapons_U_B_UBACS_tshirt_mtp_f0);
	UNIFORM_HOLDER(U_B_UBACS_vest_mtp_f,$STR_A3_A_CfgWeapons_U_B_UBACS_vest_mtp_f0);
	UNIFORM_HOLDER(U_B_UBACS_tna_f,$STR_A3_A_CfgWeapons_U_B_UBACS_tna_f0);
	UNIFORM_HOLDER(U_B_UBACS_tshirt_tna_f,$STR_A3_A_CfgWeapons_U_B_UBACS_tshirt_tna_f0);
	UNIFORM_HOLDER(U_B_UBACS_vest_tna_f,$STR_A3_A_CfgWeapons_U_B_UBACS_vest_tna_f0);
	UNIFORM_HOLDER(U_B_UBACS_wdl_f,$STR_A3_A_CfgWeapons_U_B_UBACS_wdl_f0);
	UNIFORM_HOLDER(U_B_UBACS_tshirt_wdl_f,$STR_A3_A_CfgWeapons_U_B_UBACS_tshirt_wdl_f0);
	UNIFORM_HOLDER(U_B_UBACS_vest_wdl_f,$STR_A3_A_CfgWeapons_U_B_UBACS_vest_wdl_f0);
	UNIFORM_HOLDER(U_B_UBACS_blk_f,$STR_A3_A_CfgWeapons_U_B_UBACS_blk_f0);
	UNIFORM_HOLDER(U_B_UBACS_tshirt_blk_f,$STR_A3_A_CfgWeapons_U_B_UBACS_tshirt_blk_f0);
	UNIFORM_HOLDER(U_B_UBACS_vest_blk_f,$STR_A3_A_CfgWeapons_U_B_UBACS_vest_blk_f0);
	UNIFORM_HOLDER(U_B_A_CBRN_Suit_01_MTP_F,$STR_A3_A_CfgWeapons_U_B_A_CBRN_Suit_01_MTP_F0);

	/* From "cfgOPFOR.hpp" */
	class Item_U_O_OfficerUniform_ocamo: Item_Base_F
	{
		displayName = $STR_A3_A_CfgWeapons_U_O_OfficerUniform_ocamo0;
	};
	class Item_U_O_SpecopsUniform_blk: Item_Base_F
	{
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgWeapons_U_O_SpecopsUniform_blk0;
	};
	UNIFORM_HOLDER(U_O_CombatUniform_oicamo,$STR_A3_A_CfgWeapons_U_O_CombatUniform_oicamo0);
	UNIFORM_HOLDER(U_O_OfficerUniform_oicamo,$STR_A3_A_CfgWeapons_U_O_OfficerUniform_oicamo0);
	UNIFORM_HOLDER(U_O_T_Pilot_F,$STR_A3_A_CfgWeapons_U_O_T_Pilot_F0);
	UNIFORM_HOLDER(U_O_officer_noInsignia_urb_F,$STR_A3_A_CfgWeapons_U_O_officer_noInsignia_urb_F0);
	UNIFORM_HOLDER(U_O_T_officer_noInsignia_ghex_F,$STR_A3_A_CfgWeapons_U_O_T_officer_noInsignia_ghex_F0);
	UNIFORM_HOLDER(U_O_officer_noInsignia_oicamo_F,$STR_A3_A_CfgWeapons_U_O_officer_noInsignia_oicamo_F0);

	/* From "cfgIndep.hpp" */
	UNIFORM_HOLDER(U_I_CombatUniform_tshirt,$STR_A3_A_CfgWeapons_U_I_CombatUniform_tshirt0);
	UNIFORM_HOLDER(U_I_Uniform_01_tanktop_F,$STR_A3_A_CfgWeapons_U_I_Uniform_01_tanktop_F0);

	/* From "cfgCivil.hpp" */
	class Item_U_C_Commoner1_1: Item_Base_F
	{
		scope = public;
		scopeCurator = public;
    	displayName = $STR_A3_Scavenger_Clothes;
	};
	class Item_U_C_Commoner1_2: Item_Base_F
	{
		scope = public;
		scopeCurator = public;
    	displayName = "Leisure Suit";
	};
	class Item_U_C_Commoner1_3: Item_Base_F
	{
		scope = public;
		scopeCurator = public;
    	displayName = "Workout Clothes";
	};
	class Item_U_NikosBody: Item_Base_F
	{
		scope = public;
		scopeCurator = public;
    	displayName = $STR_A3_A_CfgWeapons_U_NikosBody0;
	};
	class Item_U_OrestesBody: Item_Base_F
	{
    	displayName = $STR_A3_A_CfgWeapons_U_OrestesBody0;
	};
	class Item_U_C_Poor_2: Item_Base_F
	{
		scope = public;
		scopeCurator = public;
   		displayName = $STR_A3_A_CfgWeapons_U_C_Poor_20;
	};
	class Item_U_C_PriestBody: Item_Base_F
	{
		scope = public;
		scopeCurator = public;
	};
	UNIFORM_HOLDER(U_NikosAgedBody,$STR_A3_A_CfgWeapons_U_NikosAgedBody0);
	UNIFORM_HOLDER(U_Jayholder,$STR_A3_A_CfgWeapons_U_Jayholder0);
	UNIFORM_HOLDER(U_C_Man_casual_7_F,$STR_A3_A_CfgWeapons_U_C_Man_casual_7_F0);
	UNIFORM_HOLDER(U_C_Man_casual_8_F,$STR_A3_A_CfgWeapons_U_C_Man_casual_8_F0);
	UNIFORM_HOLDER(U_C_Man_casual_9_F,$STR_A3_A_CfgWeapons_U_C_Man_casual_9_F0);
	UNIFORM_HOLDER(U_C_Uniform_Formal_01_striped_F,$STR_A3_A_CfgWeapons_U_C_Uniform_Formal_01_striped_F0);
	UNIFORM_HOLDER(U_C_Uniform_Formal_01_white_F,$STR_A3_A_CfgWeapons_U_C_Uniform_Formal_01_white_F0);
	UNIFORM_HOLDER(U_C_Uniform_Formal_01_blue_F,$STR_A3_A_CfgWeapons_U_C_Uniform_Formal_01_blue_F0);
	UNIFORM_HOLDER(U_C_CBRN_Suit_01_Black_F,$STR_A3_A_CfgWeapons_U_C_CBRN_Suit_01_Black_F0);
	UNIFORM_HOLDER(U_C_CBRN_Suit_01_Yellow_F,$STR_A3_A_CfgWeapons_U_C_CBRN_Suit_01_Yellow_F0);

	/* From "cfgGuerrilla.hpp" */
	class Item_U_BG_Guerilla3_2: Item_Base_F
	{
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgWeapons_U_IG_Guerilla3_20;
	};
	UNIFORM_HOLDER(U_BG_Guerilla1_3,$STR_A3_A_CfgWeapons_U_BG_Guerilla1_30);

    /* From "cfgCTRG.hpp" */
	class Item_U_B_CTRG_Soldier_F: Item_Base_F
	{
		displayName = $STR_A3_A_CfgWeapons_U_B_CTRG_Soldier_F0;
	};
	class Item_U_B_CTRG_Soldier_2_F: Item_Base_F
	{
		displayName = $STR_A3_A_CfgWeapons_U_B_CTRG_Soldier_2_F0;
	};
	class Item_U_B_CTRG_Soldier_3_F: Item_Base_F
	{
		displayName = $STR_A3_A_CfgWeapons_U_B_CTRG_Soldier_3_F0;
	};
    class Item_U_B_CTRG_Soldier_Arid_F;
    class Item_U_B_CTRG_Soldier_2_Arid_F;
    class Item_U_B_CTRG_Soldier_3_Arid_F;
	UNIFORM_HOLDER(U_B_CTRG_Soldier_Black_F,$STR_A3_A_CfgWeapons_U_B_CTRG_Soldier_Black_F0);
	UNIFORM_HOLDER(U_B_CTRG_Soldier_2_Black_F,$STR_A3_A_CfgWeapons_U_B_CTRG_Soldier_2_Black_F0);
	UNIFORM_HOLDER(U_B_CTRG_Soldier_3_Black_F,$STR_A3_A_CfgWeapons_U_B_CTRG_Soldier_3_Black_F0);

    /* From "cfgViper.hpp" */
	UNIFORM_HOLDER(U_O_V_Soldier_Viper_oicamo_F,$STR_A3_A_CfgWeapons_U_O_V_Soldier_Viper_oicamo_F0);
    
    /* From "cfgRUS.hpp" */
	UNIFORM_HOLDER(U_O_R_CombatUniform_taiga_F,$STR_A3_A_CfgWeapons_U_O_R_CombatUniform_taiga_F0);
	UNIFORM_HOLDER(U_O_R_GhillieSuit_taiga_F,$STR_A3_A_CfgWeapons_U_O_R_GhillieSuit_taiga_F0);
	UNIFORM_HOLDER(U_O_R_PilotCoveralls,$STR_A3_A_CfgWeapons_U_O_R_PilotCoveralls0);
	UNIFORM_HOLDER(U_O_R_Wetsuit,$STR_A3_A_CfgWeapons_U_O_R_Wetsuit0);
	UNIFORM_HOLDER(U_O_R_FullGhillie_wdl_F,$STR_A3_A_CfgWeapons_U_O_R_FullGhillie_wdl_F0);
	UNIFORM_HOLDER(U_O_R_OfficerUniform_taiga_F,$STR_A3_A_CfgWeapons_U_O_R_OfficerUniform_taiga_F0);
	UNIFORM_HOLDER(U_O_R_officer_noInsignia_taiga_F,$STR_A3_A_CfgWeapons_U_O_R_officer_noInsignia_taiga_F0);
	UNIFORM_HOLDER(U_O_R_CombatUniform_arid_F,$STR_A3_A_CfgWeapons_U_O_R_CombatUniform_arid_F0);
	UNIFORM_HOLDER(U_O_R_GhillieSuit_arid_F,$STR_A3_A_CfgWeapons_U_O_R_GhillieSuit_arid_F0);
	UNIFORM_HOLDER(U_O_R_FullGhillie_ard_F,$STR_A3_A_CfgWeapons_U_O_R_FullGhillie_ard_F0);
	UNIFORM_HOLDER(U_O_R_FullGhillie_lsh_F,$STR_A3_A_CfgWeapons_U_O_R_FullGhillie_lsh_F0);
	UNIFORM_HOLDER(U_O_R_FullGhillie_sard_F,$STR_A3_A_CfgWeapons_U_O_R_FullGhillie_sard_F0);
	UNIFORM_HOLDER(U_O_R_OfficerUniform_arid_F,$STR_A3_A_CfgWeapons_U_O_R_OfficerUniform_arid_F0);
	UNIFORM_HOLDER(U_O_R_officer_noInsignia_arid_F,$STR_A3_A_CfgWeapons_U_O_R_officer_noInsignia_arid_F0);
    
    /* From "cfgEAF.hpp" */
	UNIFORM_HOLDER(U_I_E_Uniform_01_pilot_F,$STR_A3_A_CfgWeapons_U_I_E_Uniform_01_pilot_F0);
	UNIFORM_HOLDER(U_I_E_FullGhillie_wdl_F,$STR_A3_A_CfgWeapons_U_I_E_FullGhillie_wdl_F0);
    
    /* From "cfgION.hpp" */
	UNIFORM_HOLDER(U_B_ION_Uniform_01_poloshirt_wdl_F,$STR_A3_A_CfgWeapons_U_B_ION_Uniform_01_poloshirt_wdl_F0);
	UNIFORM_HOLDER(U_B_ION_Uniform_01_poloshirt_blue_F,$STR_A3_A_CfgWeapons_U_B_ION_Uniform_01_poloshirt_blue_F0);
	UNIFORM_HOLDER(U_B_ION_Uniform_01_tshirt_black_F,$STR_A3_A_CfgWeapons_U_B_ION_Uniform_01_tshirt_black_F0);

	/* From "cfgRaven.hpp" */
	UNIFORM_HOLDER(U_O_R_CombatUniform_tshirt_taiga_F,$STR_A3_O_CfgWeapons_U_O_R_CombatUniform_tshirt_taiga_F0);
	UNIFORM_HOLDER(U_O_R_CombatUniform_tshirt_arid_F,$STR_A3_O_CfgWeapons_U_O_R_CombatUniform_tshirt_arid_F0);
    
    /* Deprecated */
    DEPRECATED_CLASS(Item_U_B_CombatUniform_mcam_worn,Item_Base_F);;
    DEPRECATED_CLASS(Item_U_O_SpecopsUniform_ocamo,Item_Base_F);;
    DEPRECATED_CLASS(Item_U_B_CTRG_Soldier_alt_1_F,Item_U_B_CTRG_Soldier_Arid_F);;
    DEPRECATED_CLASS(Item_U_B_CTRG_Soldier_alt_2_F,Item_U_B_CTRG_Soldier_2_Arid_F);;
    DEPRECATED_CLASS(Item_U_B_CTRG_Soldier_alt_3_F,Item_U_B_CTRG_Soldier_3_Arid_F);;
};