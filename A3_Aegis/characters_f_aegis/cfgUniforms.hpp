/* US (Woodland) */
class B_CombatFatigues_01_wdl_F: B_Soldier_F
{
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_mcam_wdl_CO.paa"};
};
class B_ReconFatigues_01_wdl_F: B_Soldier_SL_F
{
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_mcam_wdl_CO.paa"};
};
class B_CombatFatigues_01_Tshirt_wdl_F: B_soldier_AR_F
{
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_mcam_wdl_CO.paa",
		"\A3\Characters_F_Enoch\Uniforms\Data\basicbody_wdl_CO.paa"
	};
};

/* BAF */
class B_A_CBRN_Man_Oversuit_01_MTP_F: B_CBRN_Man_Oversuit_01_MTP_F
{
	author = $STR_A3_A_AveryTheKitty;
	uniformClass = U_B_A_CBRN_Suit_01_MTP_F;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\CBRN_Suit_01_MTP_CO.paa"};
};
class B_UBACSCombatFatigues_01_mtp_F: B_Soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_UBACS_mtp_f;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo_mtp_CO.paa"};
	hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo.rvmat"};
};
class B_UBACSCombatFatigues_01_Tshirt_mtp_F: B_soldier_AR_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_UBACS_tshirt_mtp_f;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo_mtp_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\basicbody_green_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo.rvmat",
		"\A3\Characters_F\Common\Data\basicbody.rvmat"
	};
};
class B_UBACSReconFatigues_01_mtp_F: B_Soldier_SL_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_UBACS_vest_mtp_f;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo_mtp_CO.paa"};
	hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo.rvmat"};
};
class B_UBACSCombatFatigues_01_blk_F: B_Soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_UBACS_blk_f;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo_blk_CO.paa"};
	hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo.rvmat"};
};
class B_UBACSCombatFatigues_01_Tshirt_blk_F: B_soldier_AR_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_UBACS_tshirt_blk_f;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo_blk_CO.paa",
		"\A3\Characters_F\Common\Data\basicbody_black_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo.rvmat",
		"\A3\Characters_F\Common\Data\basicbody.rvmat"
	};
};
class B_UBACSReconFatigues_01_blk_F: B_Soldier_SL_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_UBACS_vest_blk_f;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo_blk_CO.paa"};
	hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo.rvmat"};
};

/* BAF (Pacific) */
class B_UBACSCombatFatigues_01_tna_F: B_Soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_UBACS_tna_f;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo_tna_CO.paa"};
	hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo.rvmat"};
};
class B_UBACSCombatFatigues_01_Tshirt_tna_F: B_soldier_AR_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_UBACS_tshirt_tna_f;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo_tna_CO.paa",
		"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_01_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo.rvmat",
		"\A3\Characters_F\Common\Data\basicbody.rvmat"
	};
};
class B_UBACSReconFatigues_01_tna_F: B_Soldier_SL_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_UBACS_vest_tna_f;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo_tna_CO.paa"};
	hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo.rvmat"};
};

/* BAF (Woodland) */
class B_UBACSCombatFatigues_01_wdl_F: B_Soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_UBACS_wdl_f;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo_wdl_CO.paa"};
	hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo.rvmat"};
};
class B_UBACSCombatFatigues_01_Tshirt_wdl_F: B_soldier_AR_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_UBACS_tshirt_wdl_f;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo_wdl_CO.paa",
		"\A3\Characters_F_Enoch\Uniforms\Data\basicbody_wdl_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo.rvmat",
		"\A3\Characters_F\Common\Data\basicbody.rvmat"
	};
};
class B_UBACSReconFatigues_01_wdl_F: B_Soldier_SL_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_UBACS_vest_wdl_f;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo_wdl_CO.paa"};
	hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo.rvmat"};
};

/* IAF */
class O_Fatigues_01_blk_F: O_Soldier_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = U_O_SpecopsUniform_blk;
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_blk_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\tech_blk_CO.paa"
    };
};
class O_Fatigues_01_oicamo_F: O_Soldier_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = U_O_CombatUniform_oicamo;
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_oicamo_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\tech_oicamo_CO.paa"
    };
};
class O_OfficerFatigues_01_oicamo_F: O_officer_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = U_O_OfficerUniform_oicamo;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\officer_oicamo_CO.paa"};
};
class O_LightFatigues_01_urb_F: O_A_officer_F
{
	scope = protected;
    scopeCurator = private;
	uniformClass = U_O_officer_noInsignia_urb_F;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_noinsignia_urb_CO.paa"};
};
class O_LightFatigues_01_oicamo_F: O_A_officer_F
{
	scope = protected;
    scopeCurator = private;
	uniformClass = U_O_officer_noInsignia_oicamo_F;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_noinsignia_oicamo_CO.paa"};
};

/* China */
class O_LightFatigues_01_ghex_F: O_A_officer_F
{
	scope = protected;
    scopeCurator = private;
	uniformClass = U_O_T_officer_noInsignia_ghex_F;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_noinsignia_tna_CO.paa"};
};

/* Civilians */
class B_CBRN_Man_Base_F: B_Soldier_F
{
    modelSides[] = {TFriendly};
};
class C_E_Man_Base_F: Civilian_F
{
    modelSides[] = {TFriendly};
};
class C_E_LooterJacket_01_F: C_E_Man_Base_F
{
    modelSides[] = {TFriendly};
    hideProxySelections[] = {ghillie_hide};
};
class C_Uniform_Formal_01_base_F: Civilian_F
{
	hiddenSelections[] =
    {
        camo1,
        id,
        badge
    };
	class Wounds
	{
		tex[] = {};
		mat[] =
        {
            "A3\Characters_F_Enoch\Uniforms\Data\scientist_01.rvmat",
            "A3\Characters_F_Enoch\Uniforms\Data\scientist_01_injury.rvmat",
            "A3\Characters_F_Enoch\Uniforms\Data\scientist_01_injury.rvmat",
            "A3\Characters_F\Common\Data\basicbody.rvmat",
            "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
            "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
            INJURY_PERSONALITY_MATERIALS
        };
	};
};
class C_Uniform_Formal_01_striped_F: C_Uniform_Formal_01_base_F
{
    author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	model = "\A3\Characters_F\Civil\Scientist_01_F.p3d";
	uniformClass = U_C_Uniform_Formal_01_striped_F;
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Formal_01_striped_CO.paa",
        "",
        ""
    };
};
class C_Uniform_Formal_01_white_F: C_Uniform_Formal_01_base_F
{
    author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	model = "\A3\Characters_F\Civil\Scientist_01_F.p3d";
	uniformClass = U_C_Uniform_Formal_01_white_F;
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Formal_01_white_CO.paa",
        "",
        ""
    };
};
class C_Uniform_Formal_01_blue_F: C_Uniform_Formal_01_base_F
{
    author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	model = "\A3\Characters_F\Civil\Scientist_01_F.p3d";
	uniformClass = U_C_Uniform_Formal_01_blue_F;
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Formal_01_blue_CO.paa",
        "",
        ""
    };
};
class C_CBRN_Man_Oversuit_01_Black_F: B_CBRN_Man_Oversuit_01_MTP_F
{
	author = $STR_A3_A_AveryTheKitty;
	uniformClass = U_C_CBRN_Suit_01_Black_F;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\CBRN_Suit_01_Black_CO.paa"};
};
class C_CBRN_Man_Oversuit_01_Yellow_F: B_CBRN_Man_Oversuit_01_MTP_F
{
	author = $STR_A3_A_AveryTheKitty;
	uniformClass = U_C_CBRN_Suit_01_Yellow_F;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\CBRN_Suit_01_Yellow_CO.paa"};
};
class C_Jayholder: C_man_1
{
	scope = protected;
	scopeCurator = private;
	model = "\A3\Characters_F\Civil\I_C_Soldier_Bandit_2_F.p3d";
	uniformClass = U_Jayholder;
	hiddenSelections[] =
	{
		camo1,
		camo2
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\c_cloth1_jayholder_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\c_cloth1_jayholder_CO.paa"
	};
};

/* Viper */
class U_O_V_SpecialPurposeSuit_01_oicamo_F: O_V_Soldier_hex_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_O_V_Soldier_Viper_oicamo_F;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ViperOp_Suit_oicamo_CO.paa"};
};

/* Russia */
class O_R_Gorka_F;
class O_R_Gorka_black_F: O_R_Gorka_F
{
    modelSides[] = {TFriendly};
};
class O_R_Fatigues_01_taiga_F: O_Soldier_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = U_O_R_CombatUniform_taiga_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_RUtaiga_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\tech_rus_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_RUtaiga.rvmat",
		"\A3\Characters_F\OPFOR\Data\tech.rvmat"
	};
};
class O_R_GhillieSuit_01_taiga_F: O_sniper_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = U_O_R_GhillieSuit_taiga_F;
	hiddenSelections[] =
	{
		camo1,
		camo2,
		camo3,
		insignia
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_RUtaiga_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\tech_rus_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_RUtaiga_CO.paa"
	};
};
class O_R_PilotCoveralls_01_F: O_Pilot_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = U_O_R_PilotCoveralls;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\pilot_suit_rus_co.paa"};
};
class O_R_Wetsuit_01_F: O_diver_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = U_O_R_Wetsuit;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\diver_suit_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\diver_equip_CO.paa"
	};
	hiddenSelectionsMaterials[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\diver_suit.rvmat",
        "\A3\Characters_F\Common\Data\diver_equip.rvmat"
    };
	hiddenUnderwaterSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\diver_equip_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\diver_equip_CO.paa",
		"\A3\Characters_F\Data\visors_CA.paa"
	};
};
class O_R_OfficerFatigues_01_taiga_F: O_officer_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = U_O_R_OfficerUniform_taiga_F;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_RUtaiga_CO.paa"};
	hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_RUtaiga.rvmat"};
};
class O_R_LightFatigues_01_taiga_F: O_A_officer_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = U_O_R_officer_noInsignia_taiga_F;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_noInsignia_RUtaiga_CO.paa"};
	hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_noInsignia_RUtaiga.rvmat"};
};
class O_R_Fatigues_01_arid_F: O_R_Fatigues_01_taiga_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = U_O_R_CombatUniform_arid_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_RUarid_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\tech_rus_CO.paa"
	};
};
class O_R_GhillieSuit_01_arid_F: O_R_GhillieSuit_01_taiga_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = U_O_R_GhillieSuit_arid_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_RUarid_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\tech_rus_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_RUarid_CO.paa"
	};
};
class O_R_OfficerFatigues_01_arid_F: O_R_OfficerFatigues_01_taiga_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = U_O_R_OfficerUniform_arid_F;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_RUarid_CO.paa"};
};
class O_R_LightFatigues_01_arid_F: O_R_LightFatigues_01_taiga_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = U_O_R_officer_noInsignia_arid_F;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_noInsignia_RUarid_CO.paa"};
};

/* LDF */
class I_E_Uniform_01_F: I_E_Man_Base_F
{
	hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\I_E_Soldier_01_Pants_CO.paa",
        "\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_camo_CO.paa"
    };
};
class I_E_Uniform_01_tanktop_F;
class I_E_Uniform_01_shortsleeve_F: I_E_Man_Base_F
{
	hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\I_E_Soldier_01_Pants_CO.paa"
    };
};
class I_E_Uniform_01_officer_F;
class I_E_Uniform_01_coveralls_F;
class I_E_Uniform_01_sweater_F: I_E_Man_Base_F
{
	model = "\A3\Characters_F_Exp\Gendarmerie\B_GEN_Commander_F.p3d";
};
class I_E_Uniform_01_pilot_F: I_pilot_F
{
	author = $STR_A3_A_AveryTheKitty;
    scope = protected;
	model = "\A3\Characters_F\Common\Pilot_F.p3d";
	uniformClass = U_I_E_Uniform_01_pilot_F;
	hiddenSelections[] =
    {
        camo,
        insignia
    };
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\pilot_suit_eaf_CO.paa"};
	class Wounds
	{
		tex[] = {};
		mat[] =
        {
            "A3\Characters_F\Common\Data\pilot_suit.rvmat",
            "A3\Characters_F\Common\Data\W1_pilot_suit.rvmat",
            "A3\Characters_F\Common\Data\W1_pilot_suit.rvmat"
        };
	};
};
class I_E_Uniform_01_arid_F: I_E_Uniform_01_F
{
	author = $STR_A3_A_AveryTheKitty;
    scope = protected;
	uniformClass = U_I_E_Uniform_01_arid_F;
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\I_E_Soldier_01_arid_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\I_E_Soldier_01_Pants_arid_CO.paa",
        "\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
    };
};
class I_E_Uniform_01_arid_tanktop_F: I_E_Uniform_01_tanktop_F
{
	author = $STR_A3_A_AveryTheKitty;
    scope = protected;
	uniformClass = U_I_E_Uniform_01_arid_tanktop_F;
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\I_E_Soldier_01_TankTop_arid_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\I_E_Soldier_01_Pants_arid_CO.paa",
        "\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
    };
};
class I_E_Uniform_01_arid_shortsleeve_F: I_E_Uniform_01_shortsleeve_F
{
	author = $STR_A3_A_AveryTheKitty;
    scope = protected;
	uniformClass = U_I_E_Uniform_01_arid_shortsleeve_F;
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\I_E_Soldier_01_arid_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\I_E_Soldier_01_Pants_arid_CO.paa"
    };
};
class I_E_Uniform_01_arid_officer_F: I_E_Uniform_01_officer_F
{
	author = $STR_A3_A_AveryTheKitty;
    scope = protected;
	uniformClass = U_I_E_Uniform_01_arid_officer_F;
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\I_E_Officer_01_arid_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\I_E_Soldier_01_Pants_arid_CO.paa"
    };
};

/* Looters */
class I_L_Uniform_01_camo_F: I_G_Soldier_LAT_F
{
    scopeCurator = private;
    modelSides[] = {TFriendly};
};
class I_L_Uniform_01_deserter_F: I_G_Soldier_F
{
    scopeCurator = private;
    modelSides[] = {TFriendly};
};
class I_L_Uniform_01_tshirt_skull_F: I_L_Soldier_Base_F
{
    modelSides[] = {TFriendly};
};
class I_L_Uniform_01_tshirt_black_F: I_L_Uniform_01_tshirt_skull_F
{
    modelSides[] = {TFriendly};
};
class I_L_Uniform_01_tshirt_sport_F: I_L_Uniform_01_tshirt_skull_F
{
    modelSides[] = {TFriendly};
};
class I_L_Uniform_01_tshirt_olive_F: I_L_Uniform_01_tshirt_skull_F
{
    modelSides[] = {TFriendly};
};

/* ION */
class B_ION_Uniform_01_poloshirt_wdl_F: B_GEN_Soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_ION_Uniform_01_poloshirt_wdl_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\B_ION_Uniform_01_poloshirt_wdl_1_CO.paa",
		"\A3\Characters_F\BLUFOR\Data\clothing_wdl_CO.paa"
	};
};
class B_ION_Uniform_01_poloshirt_blue_F: I_C_Soldier_Para_3_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_ION_Uniform_01_poloshirt_blue_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\B_ION_Uniform_01_poloshirt_blue_1_CO.paa",
		"\A3\Characters_F_Beta\INDEP\Data\IA_Soldier_01_clothing_CO.paa"
	};
};
class B_ION_Uniform_01_tshirt_black_F: I_G_resistanceLeader_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_ION_Uniform_01_tshirt_black_F;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\B_ION_Uniform_01_tshirt_black_CO.paa"};
};

/* Raven Security */
class O_R_Fatigues_01_Tshirt_taiga_F: O_A_officer_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = U_O_R_CombatUniform_tshirt_taiga_F;
	model = "\A3_Aegis\Characters_F_Aegis\Uniforms\O_Soldier_02.p3d";
	hiddenSelections[] =
	{
		camo1,
		camo2,
		insignia
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Characters_F\Common\Data\basicbody_black_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_RUtaiga_CO.paa"
	};
};
class O_R_Fatigues_01_Tshirt_arid_F: O_R_Fatigues_01_Tshirt_taiga_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = U_O_R_CombatUniform_tshirt_arid_F;
	hiddenSelectionsTextures[] =
	{
		"\A3\Characters_F\Common\Data\basicbody_black_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_RUarid_CO.paa"
	};
};

/* AAF */
class I_Uniform_01_tanktop_F: I_E_Uniform_01_tanktop_F
{
	author = $STR_A3_A_Ravenholme;
    scope = protected;
	model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_4_F.p3d";
	uniformClass = U_I_Uniform_01_tanktop_F;
	hiddenSelectionsTextures[] =
    {
        "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_CO.paa",
        "A3\Characters_F_Beta\INDEP\Data\IA_Soldier_01_clothing_co.paa"
    };
	class Wounds
	{
		tex[] = {};
		mat[] =
		{
			"A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1.rvmat",
			"A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_injury.rvmat",
			"A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_injury.rvmat",
			"A3\Characters_F_Beta\INDEP\Data\IA_Soldier_01_clothing.rvmat",
			"A3\Characters_F_Beta\INDEP\Data\IA_Soldier_01_clothing_injury.rvmat",
			"A3\Characters_F_Beta\INDEP\Data\IA_Soldier_01_clothing_injury.rvmat",
			INJURY_PERSONALITY_MATERIALS
		};
	};
};