/* Base Classes from A3 + DLC */
class I_sniper_F;
class I_G_Soldier_M_F;
class C_man_p_fugitive_F;
class I_E_Uniform_01_F;
class I_E_Uniform_01_tanktop_F;
class I_E_Uniform_01_shortsleeve_F;
class B_Soldier_04_f;
class I_Story_Crew_F;
class I_E_Uniform_01_officer_F;
class I_officer_F;
class I_diver_F;
class O_A_Soldier_lxWS;
class I_SFIA_soldier_TL_lxWS;
class B_CTRG_Soldier_F;
class B_CTRG_Soldier_3_F;

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
class Atlas_O_Fatigues_01_mhex_F: O_Soldier_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Atlas_U_O_CombatUniform_mhex;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_mhex_CO.paa",
		"\A3_Aegis\characters_f_aegis\Uniforms\Data\tech_blk_CO.paa"
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
class Aegis_O_Luchnik_01_taiga_F;
class Atlas_O_Luchnik_01_whex_F: Aegis_O_Luchnik_01_taiga_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Atlas_U_O_Luchnik_whex_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing2_whex_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_grn_CO.paa"
	};
};
class Aegis_O_Luchnik_01_shortsleeve_taiga_F;
class Atlas_O_Luchnik_01_shortsleeve_whex_F: Aegis_O_Luchnik_01_shortsleeve_taiga_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Atlas_U_O_Luchnik_RolledUp_whex_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing2_whex_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_grn_CO.paa"
	};
};
class Aegis_O_Luchnik_01_officer_taiga_F;
class Atlas_O_Luchnik_01_officer_whex_F: Aegis_O_Luchnik_01_officer_taiga_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Atlas_U_O_Luchnik_Officer_whex_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing2_officer_whex_CO.paa"
	};
};
class O_R_Fatigues_01_Tshirt_taiga_F;
class Atlas_O_Luchnik_01_Tshirt_whex_F: O_R_Fatigues_01_Tshirt_taiga_F
{
	scope = protected;
    scopeCurator = private;
	uniformClass = Atlas_U_O_Luchnik_Tshirt_whex_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\basicbody_CSAT_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_wdl_CO.paa"
	};
};
class Aegis_O_CombatFatigues_F;
class Aegis_O_CombatFatigues_02_F;
class Atlas_O_CombatFatigues_whex_F: Aegis_O_CombatFatigues_F
{
	scope = protected;
    scopeCurator = private;
	uniformClass = Atlas_U_O_CombatFatigues_whex_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\OCombatUniform_whex_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_wdl_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_grn_CO.paa"
		
	};
};
class Atlas_O_CombatFatigues_mhex_F: Aegis_O_CombatFatigues_F
{
	scope = protected;
    scopeCurator = private;
	uniformClass = Atlas_U_O_CombatFatigues_mhex_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\OCombatUniform_mhex_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_mhex_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_grn_CO.paa"
	};
};
class Atlas_O_CombatFatigues_mhex_02_F: Aegis_O_CombatFatigues_02_F
{
	scope = protected;
    scopeCurator = private;
	uniformClass = Atlas_U_O_CombatFatigues_mhex_02_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\OCombatUniform_mhex_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_mhex_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_grn_CO.paa"
	};
};
class Atlas_O_CombatFatigues_02_whex_F: Aegis_O_CombatFatigues_02_F
{
	scope = protected;
    scopeCurator = private;
	uniformClass = Atlas_U_O_CombatFatigues_02_whex_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\OCombatUniform_whex_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_wdl_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_grn_CO.paa"
	};
};
class Atlas_O_LightCombatFatigues_whex_F: O_A_Soldier_lxWS
{
	scope = protected;
    scopeCurator = private;
	uniformClass = Atlas_U_O_LightCombatFatigues_whex_F;
	hiddenSelectionsTextures[] = 
	{
		"\a3\characters_f_beta\INDEP\Data\ia_soldier_01_clothing_co.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Officer_noinsignia_whex_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_wdl_CO.paa"
	};
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
class Atlas_B_CombatFatigues_ffl_F: B_Soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_CombatUniform_ffl;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_france_CO.paa"};
	hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo.rvmat"};
};
class Atlas_B_CombatFatigues_01_Tshirt_ffl_F: B_Soldier_AR_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_CombatUniform_ffl_tshirt;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_france_CO.paa",
		"\A3\Characters_F_Enoch\Uniforms\Data\basicbody_wdl_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo.rvmat",
		"\A3\Characters_F\Common\Data\basicbody.rvmat"
	};
};
class Atlas_B_ReconFatigues_01_ffl_F: B_Soldier_SL_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_CombatUniform_ffl_vest;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_france_CO.paa"};
	hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo.rvmat"};
};

/* From "cfgGER.hpp" */
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
class Atlas_B_G_CombatFatigues_01_arid_F: I_soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_G_CombatUniform_arid;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_G_Soldier_01_Pants_Multitarn_CO.paa",
	};
};
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
class Atlas_B_G_CombatFatigues_01_Tshirt_arid_F: I_E_Uniform_01_tanktop_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_G_CombatUniform_tshirt_arid;
	hiddenSelectionsTextures[] =
	{
		// "\A3\Characters_F_Enoch\Uniforms\Data\basicbody_wdl_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_G_Soldier_01_TankTop_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_G_Soldier_01_Pants_Multitarn_CO.paa",
		// "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_mcam_wdl_CO.paa"
		"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
	};
};
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
class Atlas_B_G_CombatFatigues_01_RolledUp_arid_F: I_soldier_lite_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_G_CombatUniform_vest_arid;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_G_Soldier_01_Pants_Multitarn_CO.paa"
	};
};

class Atlas_B_G_Coveralls_01_F: B_Soldier_04_f
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_G_HeliPilotCoveralls;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\coveralls_green_CO.paa"};
};
class Atlas_B_K_Coveralls_01_F: B_Soldier_04_f
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_K_HeliPilotCoveralls;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Coveralls_kzg_CO.paa"};
};
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
class Atlas_O_Luchnik_01_semiarid_F: Aegis_O_Luchnik_01_taiga_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Atlas_U_O_Luchnik_semiarid_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing2_semiarid_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_khk_CO.paa"
	};
};
class Atlas_O_Luchnik_01_shortsleeve_semiarid_F: Aegis_O_Luchnik_01_shortsleeve_taiga_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = U_O_Luchnik_RolledUp_semiarid_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing2_semiarid_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_khk_CO.paa"
	};
};
class Atlas_O_Fatigues_01_Tshirt_semiarid_F: O_R_Fatigues_01_Tshirt_taiga_F
{
	scope = protected;
    scopeCurator = private;
	uniformClass = Atlas_U_O_Luchnik_Tshirt_semiarid_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\basicbody_CSAT_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_tka_CO.paa"
	};
};
class Atlas_O_CombatFatigues_semiarid_F: Aegis_O_CombatFatigues_F
{
	scope = protected;
    scopeCurator = private;
	uniformClass = Atlas_U_O_CombatFatigues_semiarid_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\OCombatUniform_semiarid_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_tka_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_grn_CO.paa"
		
	};
};
class Atlas_O_CombatFatigues_02_semiarid_F: Aegis_O_CombatFatigues_02_F
{
	scope = protected;
    scopeCurator = private;
	uniformClass = Atlas_U_O_CombatFatigues_02_semiarid_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\OCombatUniform_semiarid_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_tka_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_grn_CO.paa"
	};
};
class Atlas_O_LightCombatFatigues_semiarid_F: O_A_Soldier_lxWS
{
	scope = protected;
    scopeCurator = private;
	uniformClass = Atlas_U_O_LightCombatFatigues_semiarid_F;
	hiddenSelectionsTextures[] = 
	{
		"lxWS\characters_1_f_lxws\uniform\data\lxws_gloves_brown_co.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Officer_noInsignia_semiarid_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_tka_CO.paa"
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
class Atlas_B_A_GhillieSuit_01_F: I_sniper_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_A_GhillieSuit;
	hiddenSelections[] =
    {
		camo,
		camo3,
		insignia
    };
	hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_A_Soldier_01_CO.paa",
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\ghillie_olive_CO.paa"
    };
};
class Atlas_B_A_GhillieSuit_01_ard_F: I_sniper_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_A_GhillieSuit_arid;
	hiddenSelections[] =
    {
		camo,
		camo3,
		insignia
    };
	hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_A_Soldier_01_ard_CO.paa",
        "\A3\characters_f\Common\Data\ghillie_desert_CO.paa"
    };
};
class Atlas_B_A_GhillieSuit_01_trp_F: I_sniper_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_A_GhillieSuit_tropical;
	hiddenSelections[] =
    {
		camo,
		camo3,
		insignia
    };
	hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_A_Soldier_01_trp_CO.paa",
        "\A3\characters_f_Exp\BLUFOR\Data\U_BT_sniper_F_tna_co.paa"
    };
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
class Atlas_I_I_CombatFatigues_02_olive_F: B_Soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_I_I_SFUniform_olive ;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_idfsf_CO.paa"};
};
class Atlas_I_I_CombatFatigues_02_RolledUp_olive_F: B_Soldier_SL_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_I_I_CombatUniform_shortsleeve_olive;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_idfsf_CO.paa"};
};
class Atlas_I_I_CombatFatigues_02_Tshirt_olive_F: B_Soldier_AR_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_I_I_SFUniform_tee_olive;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_idfsf_CO.paa",
		"a3\Characters_F_Enoch\Uniforms\Data\basicbody_wdl_co.paa"
	};
};
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

/* AAF */
/*class Atlas_I_CombatFatigues_AAF_F: Aegis_O_CombatFatigues_F
{
	scope = protected;
    scopeCurator = private;
	uniformClass = Atlas_U_I_CombatFatigues_AAF_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\OCombatUniform_aaf_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_blk_CO.paa",
		"\a3\characters_f\OPFOR\Data\clothing_rus_CO.paa"
	};
};
class Atlas_I_CombatFatigues_02_AAF_F: Aegis_O_CombatFatigues_02_F
{
	scope = protected;
    scopeCurator = private;
	uniformClass = Atlas_U_I_CombatFatigues_02_AAF_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\OCombatUniform_aaf_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_blk_CO.paa",
		"\a3\characters_f\OPFOR\Data\clothing_rus_CO.paa"
	};
};*/
// Textures didn't get updated in rework ^
/* LDF */
class Atlas_I_E_Reservist_Uniform_01_F: I_SFIA_soldier_TL_lxWS
{
	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_E_Reservist_Uniform_01_F;
	hiddenSelectionsTextures[] = 
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\I_E_Reservist_01_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\I_E_Reservist_01_Pants_CO.paa"
	};
};
class Atlas_I_E_Reservist_Uniform_01_shortsleeve_F: I_E_Uniform_01_shortsleeve_F
{
	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_E_Reservist_Uniform_01_shortsleeve_F;
	hiddenSelectionsTextures[] = 
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\I_E_Reservist_01_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\I_E_Reservist_01_Pants_CO.paa"
	};
};

/* Morocco*/
class Atlas_B_Mo_CombatFatigues_01_north_F: I_soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_Mo_CombatUniform_north;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Uniform_Morocco_CombatFatigues.paa"};
};
class Atlas_B_Mo_CombatFatigues_01_RolledUp_north_F: I_soldier_lite_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_K_CombatUniform;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Uniform_Morocco_CombatFatigues.paa"};
};

/* Karzegistan */
class Atlas_B_K_CombatFatigues_F: I_E_Uniform_01_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_K_CombatUniform;
	hiddenSelectionsTextures[] = 
	{
		"\A3_Atlas\Characters_F_Atlas\uniforms\data\Uniform_KZG_CombatFatigues_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Uniform_KZG_CombatFatigues_Pants_CO.paa",
		"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
	};
};
class I_SFIA_Soldier_AR_lxWS;
class Atlas_B_K_CombatFatigues_RolledUp_F: I_SFIA_Soldier_AR_lxWS
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_K_CombatUniform_shortsleeve;
	hiddenSelectionsTextures[] = 
	{
		"\A3_Atlas\Characters_F_Atlas\uniforms\data\Uniform_KZG_CombatFatigues_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Uniform_KZG_CombatFatigues_Pants_CO.paa"
	};
};
class Atlas_B_K_CBRN_Man_Oversuit_01_KZG_F: B_CBRN_Man_Oversuit_01_MTP_F
{
	author = $STR_A3_A_BranFlakes;
	uniformClass = Atlas_U_B_K_CBRN_Suit_01_F;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\CBRN_Suit_01_KZG_CO.paa"};
};
class Atlas_B_K_GhillieSuit_01_F: I_sniper_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_K_GhillieSuit;
	hiddenSelections[] =
    {
		camo,
		camo3,
		insignia
    };
	hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Uniform_KZG_CombatFatigues_Pants_CO.paa",
        "\A3\characters_f\Common\Data\ghillie_desert_CO.paa"
    };
};
/* Afghanka / Gora Fatigues */
// Long Sleeves - No Gloves
class Atlas_O_Afghanka_01_base_F: O_A_officer_F
{
    scope = protected;
    scopeCurator = private;
	modelSides[] = {TFriendly};
	model = "\A3_Atlas\Characters_F_Atlas\Uniforms\U_Afghanka_01.p3d";
	hiddenSelections[] =
	{
		camo,
		insignia
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Afghanka_grn_CO.paa"
	};
	class Wounds
	{
		tex[] = {};
		mat[] =
        {
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Afghanka.rvmat",
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Afghanka_injury.rvmat",
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Afghanka_injury.rvmat",
            INJURY_PERSONALITY_MATERIALS
        };
	};
	armorstructural = 4;	// We use the short rod collider, so lets double check damage values are correct
};
// Rolled Sleeves - No Gloves
class Atlas_O_Afghanka_02_base_F: Atlas_O_Afghanka_01_base_F
{
    scope = protected;
    scopeCurator = private;
	modelSides[] = {TFriendly};
	model = "\A3_Atlas\Characters_F_Atlas\Uniforms\U_Afghanka_02.p3d";
	hiddenSelections[] =
	{
		camo,
		insignia
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Afghanka_grn_CO.paa"
	};
	class Wounds
	{
		tex[] = {};
		mat[] =
        {
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Afghanka.rvmat",
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Afghanka_injury.rvmat",
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Afghanka_injury.rvmat",
            INJURY_PERSONALITY_MATERIALS
        };
	};
};
// Long Sleeves - Gloves
class Atlas_O_Afghanka_03_base_F:  Atlas_O_Afghanka_01_base_F
{
    scope = protected;
    scopeCurator = private;
	modelSides[] = {TFriendly};
	model = "\A3_Atlas\Characters_F_Atlas\Uniforms\U_Afghanka_03.p3d";
	hiddenSelections[] =
	{
		camo,
		camo1,
		insignia
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Afghanka_grn_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_blk_CO.paa"
	};
	class Wounds
	{
		tex[] = {};
		mat[] =
        {
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Afghanka.rvmat",
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Afghanka_injury.rvmat",
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Afghanka_injury.rvmat",
            INJURY_PERSONALITY_MATERIALS
        };
	};
};
// Rolled Sleeves - Gloves
class Atlas_O_Afghanka_04_base_F:  Atlas_O_Afghanka_01_base_F
{
    scope = protected;
    scopeCurator = private;
	modelSides[] = {TFriendly};
	model = "\A3_Atlas\Characters_F_Atlas\Uniforms\U_Afghanka_04.p3d";
	hiddenSelections[] =
	{
		camo,
		camo1,
		insignia
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Afghanka_grn_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_blk_CO.paa"
	};
	class Wounds
	{
		tex[] = {};
		mat[] =
        {
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Afghanka.rvmat",
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Afghanka_injury.rvmat",
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Afghanka_injury.rvmat",
            INJURY_PERSONALITY_MATERIALS
        };
	};
};
// Uniform Variants
class Atlas_O_Afghanka_01_grn_F: Atlas_O_Afghanka_01_base_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_O_Afghanka_01_grn_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Afghanka_grn_CO.paa"
	};
};
class Atlas_O_Afghanka_02_grn_F: Atlas_O_Afghanka_02_base_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_O_Afghanka_02_grn_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Afghanka_grn_CO.paa"
	};
};
class Atlas_O_Afghanka_01_khk_F: Atlas_O_Afghanka_01_grn_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_O_Afghanka_01_khk_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Afghanka_khk_CO.paa"
	};
};
class Atlas_O_Afghanka_02_khk_F: Atlas_O_Afghanka_02_grn_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_O_Afghanka_02_khk_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Afghanka_khk_CO.paa"
	};
};
class Atlas_O_Afghanka_01_hex_F: Atlas_O_Afghanka_03_base_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_O_Afghanka_01_hex_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Afghanka_hex_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_blk_CO.paa"
	};
};
class Atlas_O_Afghanka_02_hex_F: Atlas_O_Afghanka_04_base_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_O_Afghanka_02_hex_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Afghanka_hex_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_blk_CO.paa"
	};
};
class Atlas_O_Afghanka_01_ghex_F: Atlas_O_Afghanka_03_base_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_O_Afghanka_01_ghex_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Afghanka_ghex_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_grn_CO.paa"
	};
};
class Atlas_O_Afghanka_02_ghex_F: Atlas_O_Afghanka_04_base_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_O_Afghanka_02_ghex_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Afghanka_ghex_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_grn_CO.paa"
	};
};
class Atlas_O_Afghanka_01_whex_F: Atlas_O_Afghanka_03_base_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_O_Afghanka_01_whex_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Afghanka_whex_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_grn_CO.paa"
	};
};
class Atlas_O_Afghanka_02_whex_F: Atlas_O_Afghanka_04_base_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_O_Afghanka_02_whex_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Afghanka_whex_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_grn_CO.paa"
	};
};
class Atlas_O_Afghanka_01_dst_F: Atlas_O_Afghanka_03_base_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_O_Afghanka_01_dst_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Afghanka_dst_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_khk_CO.paa"
	};
};
class Atlas_O_Afghanka_02_dst_F: Atlas_O_Afghanka_04_base_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_O_Afghanka_02_dst_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Afghanka_dst_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_khk_CO.paa"
	};
};
class Atlas_O_Afghanka_01_semiarid_F: Atlas_O_Afghanka_03_base_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_O_Afghanka_01_semiarid_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Afghanka_semiarid_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_khk_CO.paa"
	};
};
class Atlas_O_Afghanka_02_semiarid_F: Atlas_O_Afghanka_04_base_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_O_Afghanka_02_semiarid_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Afghanka_semiarid_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_khk_CO.paa"
	};
};
class Atlas_O_Afghanka_01_rutaiga_F: Atlas_O_Afghanka_01_grn_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_O_Afghanka_01_rutaiga_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Afghanka_rutaiga_CO.paa"
	};
};
class Atlas_O_Afghanka_02_rutaiga_F: Atlas_O_Afghanka_02_grn_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_O_Afghanka_02_rutaiga_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Afghanka_rutaiga_CO.paa"
	};
};
class Atlas_O_Afghanka_01_ruarid_F: Atlas_O_Afghanka_01_grn_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_O_Afghanka_01_ruarid_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Afghanka_ruarid_CO.paa"
	};
};
class Atlas_O_Afghanka_02_ruarid_F: Atlas_O_Afghanka_02_grn_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_O_Afghanka_02_ruarid_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Afghanka_ruarid_CO.paa"
	};
};
class Atlas_I_Afghanka_01_ardi_F: Atlas_O_Afghanka_03_base_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_I_Afghanka_01_ardi_half_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\M88_Ardi_Half_CO.paa"
	};
};
class Atlas_I_Afghanka_02_ardi_F: Atlas_O_Afghanka_04_base_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_I_Afghanka_02_ardi_half_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\M88_Ardi_Half_CO.paa"
	};
};
class Atlas_I_Afghanka_03_ardi_F: Atlas_O_Afghanka_03_base_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_I_Afghanka_01_ardi_full_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\M88_Ardi_Full_CO.paa"
	};
};
class Atlas_I_Afghanka_04_ardi_F: Atlas_O_Afghanka_04_base_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_I_Afghanka_02_ardi_full_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\M88_Ardi_Full_CO.paa"
	};
};
/* Afghanka / Gora Fatigues - End */

/* US JSOC Stealth Uniforms */
class Atlas_B_JSOC_StealthUniform_F: B_CTRG_Soldier_F
{
	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_JSOC_StealthUniform_F;
	hiddenSelectionsTextures[] = 
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Atlas_U_B_JSOC_Soldier_F_CO.paa"
	};
};
class Atlas_B_JSOC_StealthUniform_RolledUp_F: B_CTRG_Soldier_3_F
{
	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_JSOC_StealthUniform_RolledUp_F;
	hiddenSelectionsTextures[] = 
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Atlas_U_B_JSOC_Soldier_F_CO.paa"
	};
};
class Atlas_B_T_JSOC_StealthUniform_F: B_CTRG_Soldier_F
{
	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_T_JSOC_StealthUniform_F;
	hiddenSelectionsTextures[] = 
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Atlas_U_B_JSOC_Soldier_F_tna_CO.paa"
	};
};
class Atlas_B_T_JSOC_StealthUniform_RolledUp_F: B_CTRG_Soldier_3_F
{
	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_T_JSOC_StealthUniform_RolledUp_F;
	hiddenSelectionsTextures[] = 
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Atlas_U_B_JSOC_Soldier_F_tna_CO.paa"
	};
};
class Atlas_B_W_JSOC_StealthUniform_F: B_CTRG_Soldier_F
{
	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_W_JSOC_StealthUniform_F;
	hiddenSelectionsTextures[] = 
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Atlas_U_B_JSOC_Soldier_F_wdl_CO.paa"
	};
};
class Atlas_B_W_JSOC_StealthUniform_RolledUp_F: B_CTRG_Soldier_3_F
{
	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_W_JSOC_StealthUniform_RolledUp_F;
	hiddenSelectionsTextures[] = 
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Atlas_U_B_JSOC_Soldier_F_wdl_CO.paa"
	};
};
class Atlas_B_D_JSOC_StealthUniform_F: B_CTRG_Soldier_F
{
	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_D_JSOC_StealthUniform_F;
	hiddenSelectionsTextures[] = 
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Atlas_U_B_JSOC_Soldier_F_des_CO.paa"
	};
};
class Atlas_B_D_JSOC_StealthUniform_RolledUp_F: B_CTRG_Soldier_3_F
{
	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_D_JSOC_StealthUniform_RolledUp_F;
	hiddenSelectionsTextures[] = 
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Atlas_U_B_JSOC_Soldier_F_des_CO.paa"
	};
};
class Atlas_B_T_JSOC_StealthUniform_alt_F: B_CTRG_Soldier_F
{
	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_T_JSOC_StealthUniform_alt_F;
	hiddenSelectionsTextures[] = 
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Atlas_U_B_JSOC_Soldier_F_AOR_CO.paa"
	};
};
class Atlas_B_T_JSOC_StealthUniform_RolledUp_alt_F: B_CTRG_Soldier_3_F
{
	scope = protected;
  	scopeCurator = private;
	uniformClass = Atlas_U_B_T_JSOC_StealthUniform_RolledUp_alt_F;
	hiddenSelectionsTextures[] = 
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Atlas_U_B_JSOC_Soldier_F_AOR_CO.paa"
	};
};
/* JSOC - End */

/* Battledress Uniform */
class Atlas_UniformBDU_01_oli_F: I_soldier_F
{
    scope = protected;
    scopeCurator = private;
	modelSides[] = {TFriendly};
	model = "\A3_Atlas\Characters_F_Atlas\Uniforms\U_UniformBDU_01.p3d";
	hiddenSelections[] =
	{
		camo,
		camo1,
		insignia
	};
	uniformClass =  Atlas_U_UniformBDU_01_oli_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_UniformBDU_oli_CO.paa",
		""
	};
	class Wounds
	{
		tex[] = {};
		mat[] =
        {
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_UniformBDU.rvmat",
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_UniformBDU_injury.rvmat",
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_UniformBDU_injury.rvmat",
            INJURY_PERSONALITY_MATERIALS
        };
	};
	armorstructural = 4;	// We use the short rod collider, so lets double check damage values are correct
};
class Atlas_UniformBDU_02_oli_F: I_soldier_F
{
    scope = protected;
    scopeCurator = private;
	modelSides[] = {TFriendly};
	model = "\A3_Atlas\Characters_F_Atlas\Uniforms\U_UniformBDU_02.p3d";
	hiddenSelections[] =
	{
		camo,
		camo1,
		insignia
	};
	uniformClass =  Atlas_U_UniformBDU_02_oli_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_UniformBDU_oli_CO.paa",
		""
	};
	class Wounds
	{
		tex[] = {};
		mat[] =
        {
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_UniformBDU.rvmat",
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_UniformBDU_injury.rvmat",
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_UniformBDU_injury.rvmat",
            INJURY_PERSONALITY_MATERIALS
        };
	};
	armorstructural = 4;	// We use the short rod collider, so lets double check damage values are correct
};
class Atlas_UniformBDU_03_oli_F: I_soldier_F
{
    scope = protected;
    scopeCurator = private;
	modelSides[] = {TFriendly};
	model = "\A3_Atlas\Characters_F_Atlas\Uniforms\U_UniformBDU_03.p3d";
	hiddenSelections[] =
	{
		camo,
		camo1,
		camo2,
		insignia
	};
	uniformClass =  Atlas_U_UniformBDU_03_oli_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_UniformBDU_oli_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_UniformBDU_oli_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\combatgloves_blk_co.paa"
	};
	class Wounds
	{
		tex[] = {};
		mat[] =
        {
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_UniformBDU.rvmat",
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_UniformBDU_injury.rvmat",
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_UniformBDU_injury.rvmat",
            INJURY_PERSONALITY_MATERIALS
        };
	};
	armorstructural = 4;	// We use the short rod collider, so lets double check damage values are correct
};
class Atlas_UniformBDU_04_oli_F: I_soldier_F
{
    scope = protected;
    scopeCurator = private;
	modelSides[] = {TFriendly};
	model = "\A3_Atlas\Characters_F_Atlas\Uniforms\U_UniformBDU_04.p3d";
	hiddenSelections[] =
	{
		camo,
		camo1,
		camo2,
		insignia
	};
	uniformClass =  Atlas_U_UniformBDU_04_oli_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_UniformBDU_oli_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_UniformBDU_oli_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\combatgloves_blk_co.paa"
	};
	class Wounds
	{
		tex[] = {};
		mat[] =
        {
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_UniformBDU.rvmat",
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_UniformBDU_injury.rvmat",
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_UniformBDU_injury.rvmat",
            INJURY_PERSONALITY_MATERIALS
        };
	};
	armorstructural = 4;	// We use the short rod collider, so lets double check damage values are correct
};
class Atlas_UniformBDU_01_m81_F: Atlas_UniformBDU_01_oli_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_UniformBDU_01_m81_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_UniformBDU_m81_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_UniformBDU_m81_CO.paa"
	};
};
class Atlas_UniformBDU_02_m81_F: Atlas_UniformBDU_02_oli_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_UniformBDU_02_m81_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_UniformBDU_m81_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_UniformBDU_m81_CO.paa"
	};
};
class Atlas_UniformBDU_03_m81_F: Atlas_UniformBDU_03_oli_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_UniformBDU_03_oli_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_UniformBDU_m81_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_UniformBDU_m81_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\combatgloves_blk_co.paa"
	};
};
class Atlas_UniformBDU_04_m81_F: Atlas_UniformBDU_04_oli_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_UniformBDU_04_oli_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_UniformBDU_m81_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_UniformBDU_m81_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\combatgloves_blk_co.paa"
	};
};
class Atlas_UniformBDU_03_reservist_F: Atlas_UniformBDU_03_oli_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_UniformBDU_03_reservist_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_UniformBDU_reservist_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_UniformBDU_reservist_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\combatgloves_grn_co.paa"
	};
};
class Atlas_UniformBDU_04_reservist_F: Atlas_UniformBDU_04_oli_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_UniformBDU_04_reservist_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_UniformBDU_reservist_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_UniformBDU_reservist_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\combatgloves_grn_co.paa"
	};
};
class Atlas_UniformBDU_01_HI_F: Atlas_UniformBDU_01_oli_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_UniformBDU_01_HI_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_UniformBDU_himf_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_UniformBDU_himf_CO.paa"
	};
};
class Atlas_UniformBDU_02_HI_F: Atlas_UniformBDU_02_oli_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_UniformBDU_02_HI_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_UniformBDU_himf_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_UniformBDU_himf_CO.paa"
	};
};
/* Battledress Uniform - End */

/* Nordic Combat Uniform */
class Atlas_I_E_SF_CombatUniformNCU_01_F: I_soldier_F
{
    scope = protected;
    scopeCurator = private;
	modelSides[] = {TFriendly};
	model = "\A3_Atlas\Characters_F_Atlas\Uniforms\U_CombatUniformNCU_01.p3d";
	hiddenSelections[] =
	{
		camo,
		camo2,
		insignia
	};
	uniformClass =  Atlas_U_E_SF_CombatUniformNCU_01_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_ncu_ldf_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\CombatGloves_grn_CO.paa"
	};
	class Wounds
	{
		tex[] = {};
		mat[] =
        {
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_ncu.rvmat",
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_ncu_injury.rvmat",
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_ncu_injury.rvmat",
            INJURY_PERSONALITY_MATERIALS
        };
	};
	armorstructural = 4;	// We use the short rod collider, so lets double check damage values are correct
};
class Atlas_I_E_SF_CombatUniformNCU_02_F: I_soldier_F
{
    scope = protected;
    scopeCurator = private;
	modelSides[] = {TFriendly};
	model = "\A3_Atlas\Characters_F_Atlas\Uniforms\U_CombatUniformNCU_02.p3d";
	hiddenSelections[] =
	{
		camo,
		camo2,
		insignia
	};
	uniformClass =  Atlas_U_E_SF_CombatUniformNCU_02_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_ncu_ldf_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\CombatGloves_grn_CO.paa"
	};
	class Wounds
	{
		tex[] = {};
		mat[] =
        {
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_ncu.rvmat",
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_ncu_injury.rvmat",
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_ncu_injury.rvmat",
            INJURY_PERSONALITY_MATERIALS
        };
	};
	armorstructural = 4;	// We use the short rod collider, so lets double check damage values are correct
};
class Atlas_I_E_SF_CombatUniformNCU_01_ard_F: I_soldier_F
{
    scope = protected;
    scopeCurator = private;
	modelSides[] = {TFriendly};
	model = "\A3_Atlas\Characters_F_Atlas\Uniforms\U_CombatUniformNCU_01.p3d";
	hiddenSelections[] =
	{
		camo,
		camo2,
		insignia
	};
	uniformClass =  Atlas_U_E_SF_CombatUniformNCU_01_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_ncu_ldf_arid_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\CombatGloves_khk_CO.paa"
	};
	class Wounds
	{
		tex[] = {};
		mat[] =
        {
            "A3_Atlas\characters_f_atlas\Uniforms\Data\clothing_ncu.rvmat",
            "A3_Atlas\characters_f_atlas\Uniforms\Data\clothing_ncu_injury.rvmat",
            "A3_Atlas\characters_f_atlas\Uniforms\Data\clothing_ncu_injury.rvmat",
            INJURY_PERSONALITY_MATERIALS
        };
	};
	armorstructural = 4;	// We use the short rod collider, so lets double check damage values are correct
};
class Atlas_I_E_SF_CombatUniformNCU_02_ard_F: I_soldier_F
{
    scope = protected;
    scopeCurator = private;
	modelSides[] = {TFriendly};
	model = "\A3_Atlas\Characters_F_Atlas\Uniforms\U_CombatUniformNCU_02.p3d";
	hiddenSelections[] =
	{
		camo,
		camo2,
		insignia
	};
	uniformClass =  Atlas_U_E_SF_CombatUniformNCU_02_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_ncu_ldf_arid_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\CombatGloves_khk_CO.paa"
	};
	class Wounds
	{
		tex[] = {};
		mat[] =
        {
            "A3_Atlas\characters_f_atlas\Uniforms\Data\clothing_ncu.rvmat",
            "A3_Atlas\characters_f_atlas\Uniforms\Data\clothing_ncu_injury.rvmat",
            "A3_Atlas\characters_f_atlas\Uniforms\Data\clothing_ncu_injury.rvmat",
            INJURY_PERSONALITY_MATERIALS
        };
	};
	armorstructural = 4;	// We use the short rod collider, so lets double check damage values are correct
};
class Atlas_CombatUniformNCU_01_flecktarn_F: Atlas_I_E_SF_CombatUniformNCU_01_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_CombatUniformNCU_01_flecktarn_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_ncu_flecktarn_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\CombatGloves_grn_CO.paa"
	};
};
class Atlas_CombatUniformNCU_02_flecktarn_F: Atlas_I_E_SF_CombatUniformNCU_02_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_CombatUniformNCU_02_flecktarn_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_ncu_flecktarn_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\CombatGloves_grn_CO.paa"
	};
};
class Atlas_CombatUniformNCU_01_multitarn_F: Atlas_I_E_SF_CombatUniformNCU_01_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_CombatUniformNCU_01_multitarn_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_ncu_multitarn_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\CombatGloves_khk_CO.paa"
	};
};
class Atlas_CombatUniformNCU_02_multitarn_F: Atlas_I_E_SF_CombatUniformNCU_02_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_CombatUniformNCU_02_multitarn_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_ncu_multitarn_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\CombatGloves_khk_CO.paa"
	};
};
class Atlas_CombatUniformNCU_01_mcam_F: Atlas_I_E_SF_CombatUniformNCU_01_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_CombatUniformNCU_01_mcam_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_ncu_mcam_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\CombatGloves_khk_CO.paa"
	};
};
class Atlas_CombatUniformNCU_02_mcam_F: Atlas_I_E_SF_CombatUniformNCU_02_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_CombatUniformNCU_02_mcam_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_ncu_mcam_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\CombatGloves_khk_CO.paa"
	};
};
class Atlas_CombatUniformNCU_01_mcam_wdl_F: Atlas_I_E_SF_CombatUniformNCU_01_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_CombatUniformNCU_02_mcam_wdl_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_ncu_mcam_wdl_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\CombatGloves_grn_CO.paa"
	};
};
class Atlas_CombatUniformNCU_02_mcam_wdl_F: Atlas_I_E_SF_CombatUniformNCU_02_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_CombatUniformNCU_02_mcam_wdl_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_ncu_mcam_wdl_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\CombatGloves_grn_CO.paa"
	};
};
/* Nordic Combat Uniform - End */
/* European Field Uniform - Begin */
class Atlas_CombatUniformEURO_01_F: I_soldier_F
{
    scope = protected;
    scopeCurator = private;
	modelSides[] = {TFriendly};
	model = "\A3_Atlas\Characters_F_Atlas\Uniforms\U_CombatUniformEURO_01.p3d";
	hiddenSelections[] =
	{
		camo,
		camo1,
		camo2,
		insignia
	};
	uniformClass =  Atlas_U_E_SF_CombatUniformEURO_01_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_euro_flecktarn_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_ncu_flecktarn_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\CombatGloves_grn_CO.paa"
	};
	class Wounds
	{
		tex[] = {};
		mat[] =
        {
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_euro.rvmat",
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_euro_injury.rvmat",
			"A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_euro_injury.rvmat",
			"A3_Atlas\characters_f_atlas\Uniforms\Data\clothing_ncu.rvmat",
            "A3_Atlas\characters_f_atlas\Uniforms\Data\clothing_ncu_injury.rvmat",
            "A3_Atlas\characters_f_atlas\Uniforms\Data\clothing_ncu_injury.rvmat",
            INJURY_PERSONALITY_MATERIALS
        };
	};
	armorstructural = 4;	// We use the short rod collider, so lets double check damage values are correct
};
class Atlas_CombatUniformEURO_02_F: I_soldier_F
{
    scope = protected;
    scopeCurator = private;
	modelSides[] = {TFriendly};
	model = "\A3_Atlas\Characters_F_Atlas\Uniforms\U_CombatUniformEURO_02.p3d";
	hiddenSelections[] =
	{
		camo,
		camo1,
		camo2,
		insignia
	};
	uniformClass =  Atlas_U_E_SF_CombatUniformEURO_02_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_euro_flecktarn_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_ncu_flecktarn_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\CombatGloves_grn_CO.paa"
	};
	class Wounds
	{
		tex[] = {};
		mat[] =
        {
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_euro.rvmat",
            "A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_euro_injury.rvmat",
			"A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_euro_injury.rvmat",
			"A3_Atlas\characters_f_atlas\Uniforms\Data\clothing_ncu.rvmat",
            "A3_Atlas\characters_f_atlas\Uniforms\Data\clothing_ncu_injury.rvmat",
            "A3_Atlas\characters_f_atlas\Uniforms\Data\clothing_ncu_injury.rvmat",
            INJURY_PERSONALITY_MATERIALS
        };
	};
	armorstructural = 4;	// We use the short rod collider, so lets double check damage values are correct
};
class Atlas_CombatUniformEURO_01_multitarn_F: Atlas_CombatUniformEURO_01_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_CombatUniformEURO_01_multitarn_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_euro_multitarn_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_ncu_multitarn_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\CombatGloves_khk_CO.paa"
	};
};
class Atlas_CombatUniformEURO_02_multitarn_F: Atlas_CombatUniformEURO_02_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass =  Atlas_U_CombatUniformEURO_02_multitarn_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_euro_multitarn_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_ncu_multitarn_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\CombatGloves_khk_CO.paa"
	};
};
class Atlas_I_A_PilotCoveralls_01_F: O_Pilot_F
{
	scope = protected;
    scopeCurator = private;
	uniformClass = Atlas_U_I_A_PilotCoveralls;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Pilot_ardi_CO.paa"};
};