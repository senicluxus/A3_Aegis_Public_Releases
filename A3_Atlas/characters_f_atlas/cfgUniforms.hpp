/* From "cfgCivil.hpp" */
class Atlas_C_Uniform_01_shirt_base_F: Civilian_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	model = "\A3\Characters_F\Civil\C_Citizen2.p3d";
	hiddenSelections[] =
    {
        camo2,
        camo1
    };
	class Wounds
	{
		tex[] = {};
		mat[] =
        {
            "A3\Characters_F\Civil\Data\c_cloth2.rvmat",
            "A3\Characters_F\Civil\Data\c_cloth2_injury.rvmat",
            "A3\Characters_F\Civil\Data\c_cloth2_injury.rvmat",
            "A3\Characters_F\Civil\Data\c_cloth3.rvmat",
            "A3\Characters_F\Civil\Data\c_cloth3_injury.rvmat",
            "A3\Characters_F\Civil\Data\c_cloth3_injury.rvmat",
            INJURY_PERSONALITY_MATERIALS
        };
	};
};
class Atlas_C_Uniform_01_shirt_pattern_F: Atlas_C_Uniform_01_shirt_base_F
{
	uniformClass = Atlas_U_C_Uniform_01_shirt_pattern_F;
	hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_C_Uniform_01_shirt_pattern_F_1_CO.paa",
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_C_Uniform_01_shirt_pattern_F_2_CO.paa"
    };
};
class Atlas_C_Uniform_01_shirt_striped_F: Atlas_C_Uniform_01_shirt_base_F
{
	uniformClass = Atlas_U_C_Uniform_01_shirt_striped_F;
	hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_C_Uniform_01_shirt_striped_F_1_CO.paa",
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_C_Uniform_01_shirt_striped_F_2_CO.paa"
    };
};
class Atlas_C_Uniform_01_shirt_white_F: Atlas_C_Uniform_01_shirt_base_F
{
	uniformClass = Atlas_U_C_Uniform_01_shirt_white_F;
	hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_C_Uniform_01_shirt_white_F_1_CO.paa",
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_C_Uniform_01_shirt_white_F_2_CO.paa"
    };
};
class I_G_Soldier_M_F;
class Atlas_C_CommonerJacket_01_marroon_F: I_G_Soldier_M_F
{
	scope = protected;
	scopeCurator = private;
	uniformClass = Atlas_U_C_CommonerJacket_01_marroon_F;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_C_CommonerJacket_01_marroon_F_CO.paa"};
};
class Atlas_C_CommonerJacket_01_blue_F: Atlas_C_CommonerJacket_01_marroon_F
{
	uniformClass = Atlas_U_C_CommonerJacket_01_blue_F;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_C_CommonerJacket_01_blue_F_CO.paa"};
};
class Atlas_C_CommonerJacket_01_grey_F: Atlas_C_CommonerJacket_01_marroon_F
{
	uniformClass = Atlas_U_C_CommonerJacket_01_grey_F;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_C_CommonerJacket_01_grey_F_CO.paa"};
};
class C_man_p_fugitive_F;
class Atlas_C_Uniform_01_tshirt_white_F: C_man_p_fugitive_F
{
	scope = protected;
	scopeCurator = private;
	uniformClass = Atlas_U_C_Uniform_01_tshirt_white_F;
	hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_C_Uniform_01_tshirt_white_F_CO.paa",
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_C_Uniform_01_tshirt_white_F_CO.paa"
    };
};

/* From "cfgViper.hpp" */
class Atlas_U_O_V_SpecialPurposeSuit_01_whex_F: O_V_Soldier_hex_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_O_V_Soldier_Viper_whex_F;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\ViperOp_Suit_whex_CO.paa"};
};

/* From "cfgOPFOR.hpp" */
class Atlas_O_Fatigues_01_whex_F: O_Soldier_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Atlas_U_O_W_CombatUniform_owcamo;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_wdl_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\tech_wdl_CO.paa"
	};
};
class Atlas_O_PilotCoveralls_01_whex_F: O_Pilot_F
{
	scope = protected;
    scopeCurator = private;
	uniformClass = Atlas_U_O_W_PilotCoveralls;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\pilot_suit_wdl_CO.paa"};
};
class Atlas_O_OfficerFatigues_01_whex_F: O_officer_F
{
	scope = protected;
    scopeCurator = private;
	uniformClass = Atlas_U_O_W_OfficerUniform;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Officer_whex_CO.paa"};
};
class Atlas_O_LightFatigues_01_whex_F: O_A_officer_F
{
	scope = protected;
    scopeCurator = private;
	uniformClass = Atlas_U_O_W_officer_noInsignia_whex_F;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Officer_noinsignia_whex_CO.paa"};
};

/* From "cfgLegion.hpp" */
class Atlas_B_CombatFatigues_sage_F: B_Soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_CombatUniform_sgg;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_sage_CO.paa"};
	hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo.rvmat"};
};
class Atlas_B_CombatFatigues_01_Tshirt_sage_F: B_Soldier_AR_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_CombatUniform_sgg_tshirt;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_sage_CO.paa",
		"\A3\Characters_F_Enoch\Uniforms\Data\basicbody_wdl_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo.rvmat",
		"\A3\Characters_F\Common\Data\basicbody.rvmat"
	};
};
class Atlas_B_ReconFatigues_01_sage_F: B_Soldier_SL_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_CombatUniform_sgg_vest;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_sage_CO.paa"};
	hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo.rvmat"};
};

/* From "cfgGER.hpp" */
class I_E_Uniform_01_F;
class Atlas_B_G_CombatFatigues_01_wdl_F: I_E_Uniform_01_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_G_CombatUniform_wdl;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_G_Soldier_01_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_G_Soldier_01_Pants_CO.paa",
		// "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_mcam_wdl_CO.paa"
		"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
	};
};
class I_E_Uniform_01_tanktop_F;
class Atlas_B_G_CombatFatigues_01_Tshirt_wdl_F: I_E_Uniform_01_tanktop_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_G_CombatUniform_tshirt_wdl;
	hiddenSelectionsTextures[] =
	{
		// "\A3\Characters_F_Enoch\Uniforms\Data\basicbody_wdl_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_G_Soldier_01_TankTop_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_G_Soldier_01_Pants_CO.paa",
		// "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_mcam_wdl_CO.paa"
		"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
	};
};
class I_E_Uniform_01_shortsleeve_F;
class Atlas_B_G_CombatFatigues_01_RolledUp_wdl_F: I_E_Uniform_01_shortsleeve_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_G_CombatUniform_vest_wdl;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_G_Soldier_01_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_G_Soldier_01_Pants_CO.paa"
		// "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_mcam_wdl_CO.paa"
	};
};
class B_Soldier_04_f;
class Atlas_B_G_Coveralls_01_F: B_Soldier_04_f
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_G_HeliPilotCoveralls;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\coveralls_green_CO.paa"};
};
class I_Story_Crew_F;
class Atlas_B_G_TankerCoveralls_01_F: I_Story_Crew_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_Tank_wdl_F;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Tank_wdl_CO.paa"};
};

/* From "cfgTKA.hpp" */
class Atlas_O_Fatigues_01_semiarid_F: O_Soldier_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = Atlas_U_O_CombatUniform_semiarid;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_tka_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\tech_tka_CO.paa"
	};
};

//From "cfgADF.hpp"
class Atlas_B_A_CombatFatigues_01_aucamo_F: I_soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_A_Soldier_01_CO.paa"};
};
class Atlas_B_A_CombatFatigues_01_RolledUp_aucamo_F: I_soldier_lite_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_A_CombatUniform_shortsleeve_aucamo;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_A_Soldier_01_CO.paa"};
};

class Atlas_B_A_CombatFatigues_01_aucamo_ard_F: Atlas_B_A_CombatFatigues_01_aucamo_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_ard;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_A_Soldier_01_ard_CO.paa"};
};
class Atlas_B_A_CombatFatigues_01_RolledUp_aucamo_ard_F: Atlas_B_A_CombatFatigues_01_RolledUp_aucamo_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_A_CombatUniform_shortsleeve_aucamo_ard;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_A_Soldier_01_ard_CO.paa"};
};
class Atlas_B_A_CombatFatigues_01_aucamo_trp_F: Atlas_B_A_CombatFatigues_01_aucamo_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_trp;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_A_Soldier_01_trp_CO.paa"};
};
class Atlas_B_A_CombatFatigues_01_RolledUp_aucamo_trp_F: Atlas_B_A_CombatFatigues_01_RolledUp_aucamo_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_A_CombatUniform_shortsleeve_aucamo_trp;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_A_Soldier_01_trp_CO.paa"};
};

class Atlas_B_A_PilotCoveralls_01_F: B_Pilot_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_A_PilotCoveralls;
	hiddenSelections[] =
	{
		camo,
		insignia
	};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\pilot_suit_aucamo_CO.paa"};
};
class Atlas_B_A_Wetsuit_01_F: B_diver_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_A_Wetsuit;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\diver_suit_aucamo_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\diver_equip_aucamo_CO.paa"
	};
	hiddenUnderwaterSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\diver_equip_aucamo_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\diver_equip_aucamo_CO.paa",
		"\A3\Characters_F\Data\visors_CA.paa"
	};
};
class Atlas_B_A_CBRN_Man_Oversuit_01_Aucamo_F: B_CBRN_Man_Oversuit_01_MTP_F
{
	author = $STR_A3_A_AveryTheKitty;
	uniformClass = Atlas_U_B_A_CBRN_Suit_01_Aucamo_F;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\CBRN_Suit_01_Aucamo_CO.paa"};
};

/* From "cfgHIMF.hpp" */
class Atlas_B_H_CombatFatigues_01_jungle_F: I_E_Uniform_01_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_H_Soldier_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_B_H_Soldier_F_01_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_B_H_Soldier_F_02_CO.paa",
		"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_B_H_Officer_F.rvmat",
		"\A3\Characters_F_Beta\INDEP\Data\IA_Soldier_01_clothing.rvmat",
		"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves.rvmat"
	};
};
class Atlas_B_H_CombatFatigues_01_TankTop_jungle_F: I_E_Uniform_01_tanktop_F
{
  	scope = protected;
  	scopeCurator = private;
	model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_4_F.p3d";
	uniformClass = Atlas_U_B_H_Soldier_3_F;
	hiddenSelectionsTextures[] =
	{
		"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_1_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_B_H_Soldier_F_02_CO.paa"
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
class Atlas_B_H_CombatFatigues_01_RolledUp_jungle_F: I_E_Uniform_01_shortsleeve_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_H_Soldier_2_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_B_H_Soldier_F_01_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_B_H_Soldier_F_02_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_B_H_Officer_F.rvmat",
		"\A3\Characters_F_Beta\INDEP\Data\IA_Soldier_01_clothing.rvmat"
	};
};
class I_E_Uniform_01_officer_F;
class Atlas_B_H_OfficerFatigues_01_jungle_F: I_E_Uniform_01_officer_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_H_Officer_F;
	hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_B_H_Officer_F_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_B_H_Soldier_F_02_CO.paa"
    };
	hiddenSelectionsMaterials[] =
    {
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_B_H_Officer_F.rvmat",
		"\A3\Characters_F_Beta\INDEP\Data\IA_Soldier_01_clothing.rvmat"
    };
};

/* From "cfgIDF.hpp" */
class Atlas_I_I_CombatFatigues_01_olive_F: I_soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_I_I_CombatUniform_olive;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\I_I_Soldier_01_CO.paa"};
};
class Atlas_I_I_CombatFatigues_01_RolledUp_olive_F: I_soldier_lite_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_I_I_CombatUniform_shortsleeve_olive;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\I_I_Soldier_01_CO.paa"};
};
class I_sniper_F;
class Atlas_I_I_GhillieSuit_01_F: I_sniper_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_I_I_GhillieSuit;
	hiddenSelections[] =
    {
		camo,
		camo3,
		insignia
    };
	hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\I_I_Soldier_01_CO.paa",
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\ghillie_olive_CO.paa"
    };
};
class I_officer_F;
class Atlas_I_I_OfficerFatigues_01_F: I_officer_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_I_I_OfficerUniform;
	hiddenSelections[] =
    {
		camo1,
		camo2,
		insignia
    };
	hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\I_I_Officer_01_CO.paa",
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\I_I_Soldier_01_CO.paa"
    };
	hiddenSelectionsMaterials[] =
    {
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\I_I_Officer_01.rvmat",
        "\A3\Characters_F_Beta\INDEP\Data\IA_Soldier_01_clothing.rvmat"
    };
};
class Atlas_I_I_Coveralls_01_olive_F: I_Story_Crew_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_Tank_olive_F;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Tank_olive_CO.paa"};
};
class I_diver_F;
class Atlas_I_I_Wetsuit_01_F: I_diver_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_I_I_Wetsuit;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\diver_suit_olive_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\diver_equip_olive_CO.paa"
	};
	hiddenUnderwaterSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\diver_equip_olive_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\diver_equip_olive_CO.paa",
		"\A3\Characters_F\Data\visors_CA.paa"
	};
};
class Atlas_I_I_CBRN_Man_Oversuit_01_Olive_F: B_CBRN_Man_Oversuit_01_MTP_F
{
	author = $STR_A3_A_AveryTheKitty;
	uniformClass = Atlas_U_I_I_CBRN_Suit_01_Olive_F;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\CBRN_Suit_01_Olive_CO.paa"};
};
//UNO
class Atlas_I_U_CombatFatigues_01_UNO_F: I_soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_I_U_CombatUniform_UNO;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Uniform_Sahrani_CombatFatigues_Pants.paa"};
};
class Atlas_I_U_CombatFatigues_01_RolledUp_UNO_F: I_soldier_lite_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_I_U_CombatUniform_shortsleeve_UNO;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Uniform_Sahrani_CombatFatigues_Pants.paa"};
};
class Atlas_I_UW_CombatFatigues_01_UNO_F: I_E_Uniform_01_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_I_UW_CombatUniform_UNO;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Uniform_CDF_CombatFatigues.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Uniform_CDF_CombatFatigues_Pants.paa",
		"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
	};
};
class Atlas_I_UW_CombatFatigues_01_RolledUp_UNO_F: I_E_Uniform_01_shortsleeve_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_I_UW_CombatUniform_shortsleeve_UNO;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Uniform_CDF_CombatFatigues.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Uniform_CDF_CombatFatigues_Pants.paa",
	};
};
/* Venezuela */
class Atlas_O_VZ_Officer_oli_CO_F: O_A_Soldier_Base_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_O_VZ_Officer_oli_CO_F;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Officer_oli_CO.paa"};
};
/*Marar*/
class Atlas_B_M_CombatFatigues_01_des: B_Soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_M_CombatUniform_des;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_M_Soldier_01_CO.paa"};
};
class Atlas_B_M_CombatFatigues_01_RolledUp_des: B_Soldier_SL_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_M_CombatUniform_shortsleeve_des;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_M_Soldier_01_CO.paa"};
};
class Atlas_B_M_CombatFatigues_01_Tshirt_des: B_Soldier_AR_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_M_CombatUniform_tee_des;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_M_Soldier_01_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\basicbody_marar.paa"
	};
};
class Atlas_B_M_CBRN_Man_Oversuit_01_Marar_F: B_CBRN_Man_Oversuit_01_MTP_F
{
	author = "BranFlakes";
	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_M_CBRN_Suit_01_Marar_F;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_M_cbrn.paa"};
};
class Atlas_B_M_Coveralls_01_F: I_Story_Crew_F
{
	author = "BranFlakes";
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_M_Tank_Marar_F;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_M_coveralls.paa"};
};
class Atlas_B_H_CombatFatigues_01_Commando_F: I_soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_B_H_CombatFatigues_01_Commando_F;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_B_H_Commando_F_CO.paa"};
};
class Atlas_B_H_CombatFatigues_01_RolledUp_Commando_F: I_soldier_lite_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_H_Soldier_commando_shortsleeve_F;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_B_H_Commando_F_CO.paa"};
};