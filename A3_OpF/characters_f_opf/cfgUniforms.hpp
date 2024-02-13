// Arma 3
class I_G_Soldier_SL_F;
class I_G_Soldier_M_F;
class O_G_Soldier_SL_F;
class O_G_Soldier_LAT_F;
// Arma 3 Apex
class I_C_Soldier_Bandit_3_F;
// Arma 3 Tacops
class O_A_officer_F;
// Arma 3 Enoch
class O_R_Gorka_F;
class I_E_Uniform_01_shortsleeve_F;
// Arma 3 West Sahara
class I_SFIA_soldier_TL_lxWS;
// Arma 3 Aegis
class O_R_LightFatigues_01_taiga_F;
// Arma 3 Opposing Forces
// Raven
class Opf_O_R_Fatigues_01_Tshirt_taiga_F: O_A_officer_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Opf_U_O_R_CombatUniform_tshirt_taiga_F;
	model = "\A3_Opf\Characters_F_Opf\Uniforms\O_Soldier_02.p3d";
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
class Opf_O_R_Fatigues_01_Tshirt_arid_F: Opf_O_R_Fatigues_01_Tshirt_taiga_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Opf_U_O_R_CombatUniform_tshirt_arid_F;
	hiddenSelectionsTextures[] =
	{
		"\A3\Characters_F\Common\Data\basicbody_black_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_RUarid_CO.paa"
	};
};
// Separatists
class Opf_O_S_Gorka_autumn_F: O_R_Gorka_F
{
	uniformClass = Opf_U_O_S_Gorka_01_autumn_F;
	hiddenSelectionsTextures[] = {"\A3_Opf\Characters_F_Opf\Uniforms\Data\Gorka_01_Autumn_CO.paa"};
};
class Opf_O_S_Gorka_summer_F: O_R_Gorka_F
{
	uniformClass = Opf_U_O_S_Gorka_01_summer_F;
	hiddenSelectionsTextures[] = {"\A3_Opf\Characters_F_Opf\Uniforms\Data\Gorka_01_Summer_CO.paa"};
};
class Opf_O_S_Uniform_01_taiga_F: O_G_Soldier_SL_F
{
	scope = protected;
    scopeCurator = private;
	uniformClass = Opf_U_O_S_Uniform_01_taiga_F;
	hiddenSelections[] =
	{
		camo1,
		camo2
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Opf\Characters_F_Opf\Uniforms\Data\Officer_RUtaiga_CO.paa",
		"\A3_Opf\Characters_F_Opf\Uniforms\Data\O_S_Uniform_01_taiga_2_CO.paa"
	};
};
class Opf_O_S_Uniform_01_arid_F: Opf_O_S_Uniform_01_taiga_F
{
	scope = protected;
    scopeCurator = private;
	uniformClass = Opf_U_O_S_Uniform_01_arid_F;
	hiddenSelectionsTextures[] =
    {
        "\A3_Opf\Characters_F_Opf\Uniforms\Data\Officer_RUarid_CO.paa",
		"\A3\Characters_F\Civil\Data\c_cloth1_kabeiroi_CO.paa"
	};
};
class Opf_O_S_Uniform_01_sweater_F: O_G_Soldier_LAT_F
{
	scope = protected;
    scopeCurator = private;
	uniformClass = Opf_U_O_S_Uniform_01_sweater_F;
	hiddenSelectionsTextures[] = {"\A3_Opf\Characters_F_Opf\Uniforms\Data\O_S_Uniform_01_sweater_CO.paa"};
};
class Opf_O_S_Uniform_01_sweater_flora_F: O_G_Soldier_LAT_F
{
	scope = protected;
    scopeCurator = private;
	uniformClass = Opf_U_O_S_Uniform_01_sweater_flora_F;
	hiddenSelectionsTextures[] = {"\A3_Opf\Characters_F_Opf\Uniforms\Data\O_S_Uniform_01_sweater_flora_CO.paa"};
};
// Insurgents
class Opf_I_I_Guerilla3_3_F: I_G_Soldier_M_F
{
	scope = protected;
	scopeCurator = private;
	model = "\A3\Characters_F\Civil\C_Hunter_F.p3d";
	uniformClass = Opf_U_IG_Guerilla3_3_F;
    hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\hunter_bushman_CO.paa"};
};
class Opf_I_I_Uniform_01_hex_F: I_G_Soldier_SL_F
{
	scope = protected;
	scopeCurator = private;
	uniformClass = Opf_U_I_I_Uniform_01_hex_F;
	hiddenSelections[] =
	{
		camo1,
		camo2
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Opf\Characters_F_Opf\Uniforms\Data\officer_hex_CO.paa",
		"\A3\Characters_F_Gamma\Civil\Data\c_cloth1_black.paa"
	};
    hiddenSelectionsMaterials[] =
    {
        "\A3\Characters_F\OPFOR\Data\Officer_noInsignia.rvmat",
        "\A3\Characters_F\Civil\Data\c_cloth1.rvmat"
    };
};
class Opf_I_I_Uniform_01_urb_F: Opf_I_I_Uniform_01_hex_F
{
	uniformClass = Opf_U_I_I_Uniform_01_urb_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Opf\Characters_F_Opf\Uniforms\Data\officer_urb_CO.paa",
		"\A3\Characters_F_Gamma\Civil\Data\c_cloth1_black.paa"
	};
};
class Opf_I_I_Uniform_01_ghex_F: Opf_I_I_Uniform_01_hex_F
{
	uniformClass = Opf_U_I_I_Uniform_01_ghex_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Opf\Characters_F_Opf\Uniforms\Data\officer_tna_CO.paa",
		"\A3\Characters_F\Civil\Data\c_cloth1_kabeiroi_CO.paa"
	};
};
class Opf_I_I_Uniform_01_tshirt_black_F: I_C_Soldier_Bandit_3_F
{
	scope = protected;
	scopeCurator = private;
	uniformClass = Opf_U_I_I_Uniform_01_tshirt_black_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Opf\Characters_F_Opf\Uniforms\Data\c_cloth1_black_CO.paa",
		"\A3\Characters_F_Orange\Uniforms\Data\C_Mechanic_01_camo2_CO.paa"
	};
};

// African Militia
class I_C_Soldier_Camo_F;
class Opf_I_M_FieldJacket_gabon_F: I_C_Soldier_Camo_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Opf_U_I_M_FieldJacket_01_F;
	identityTypes[] = {};
	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"insignia"
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Opf\Characters_F_Opf\Uniforms\Data\Uniform_CombatFatigues_Militia1_CO.paa",
		"\A3_Opf\Characters_F_Opf\Uniforms\Data\Uniform_CombatFatigues_Pants_Militia1_CO.paa",
	};
};
class I_E_Uniform_01_sweater_F;
class Opf_I_M_Sweater_gabon_F: I_E_Uniform_01_sweater_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Opf_U_I_M_Sweater_01_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Opf\Characters_F_Opf\Uniforms\Data\Uniform_Sweater_Militia1_CO.paa",
	};
};
class I_E_Uniform_01_tanktop_F;
class Opf_I_M_FieldJacket_tanktop_F: I_E_Uniform_01_tanktop_F
{
	author = $STR_A3_A_Ravenholme;
    scope = protected;
	model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_4_F.p3d";
	uniformClass = Opf_U_I_M_FieldJacket_tanktop_F;
	hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_TankTop_CO.paa",
        "\A3_Opf\Characters_F_Opf\Uniforms\Data\Uniform_CombatFatigues_Pants_Militia1_CO.paa"
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
class Opf_I_M_FieldJacket_jigsaw_F: I_C_Soldier_Camo_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Opf_U_I_M_FieldJacket_02_F;
	identityTypes[] = {};
	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"insignia"
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Opf\Characters_F_Opf\Uniforms\Data\Uniform_CombatFatigues_Militia2_CO.paa",
		"\A3_Opf\Characters_F_Opf\Uniforms\Data\Uniform_CombatFatigues_Pants_Militia1_CO.paa",
	};
};

// Partisans
class B_ION_soldier_UAV_01_lxWS;
class Opf_B_P_Uniform_Advisor_F: B_ION_soldier_UAV_01_lxWS
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Opf_U_B_P_Uniform_Advisor_F;
	hiddenSelectionsTextures[] =
	{
		"\a3\characters_f_epb\Guerrilla\Data\ig_guerrilla5_1_co.paa",
      	"\A3_Atlas\characters_f_atlas\Uniforms\Data\clothing_france_CO.paa"
	};
};
class Opf_B_P_Uniform_01_F: I_SFIA_soldier_TL_lxWS
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Opf_U_B_P_Uniform_01_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\characters_f_atlas\Uniforms\Data\B_G_Soldier_01_CO.paa",
		"\A3_OpF\characters_f_opf\Uniforms\Data\B_P_Soldier_01_Pants_CO.paa"
	};
};
class Opf_B_P_Uniform_01_Shortsleeve_F: I_E_Uniform_01_shortsleeve_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Opf_U_B_P_Uniform_01_Shortsleeve_F;
	hiddenSelectionsTextures[] =
	{
		"\A3\characters_f_enoch\uniforms\data\i_e_soldier_01_co.paa",
		"\A3_OpF\characters_f_opf\Uniforms\Data\B_P_Soldier_02_Pants_CO.paa"
	};
};
class Opf_B_P_FieldJacket_alpenflage_F: I_C_Soldier_Camo_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Opf_U_B_P_FieldJacket_01_F;
	identityTypes[] = {};
	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"insignia"
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Opf\Characters_F_Opf\Uniforms\Data\Uniform_CombatFatigues_Alpenflage_CO.paa",
		"\A3_Atlas\characters_f_atlas\Uniforms\Data\B_G_Soldier_01_Pants_CO.paa",
	};
};
class Opf_B_P_FieldJacket_cce_F: I_C_Soldier_Camo_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Opf_U_B_P_FieldJacket_02_F;
	identityTypes[] = {};
	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"insignia"
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Opf\Characters_F_Opf\Uniforms\Data\Uniform_CombatFatigues_CCE_CO.paa",
		"\A3_Atlas\characters_f_atlas\Uniforms\Data\Uniform_CDF_CombatFatigues_Pants.paa",
	};
};
class Opf_B_P_FieldJacket_dpm_F: I_C_Soldier_Camo_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Opf_U_B_P_FieldJacket_03_F;
	identityTypes[] = {};
	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"insignia"
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Opf\Characters_F_Opf\Uniforms\Data\Uniform_CombatFatigues_DPM_CO.paa",
		"\A3_Opf\Characters_F_Opf\Uniforms\Data\Uniform_CombatFatigues_Pants_Olive_CO.paa",
	};
};
class I_soldier_F;
class Opf_B_PLR_Uniform_01_F: I_soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Opf_U_Uniform_01_PLR_F;
	hiddenSelectionsTextures[] = {"\A3_Opf\Characters_F_Opf\Uniforms\Data\Uniform_CombatFatigues_PLR_CO.paa"};
};
class I_Soldier_lite_F;
class Opf_B_PLR_Uniform_01_shortsleeve_F: I_Soldier_lite_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Opf_U_Uniform_02_PLR_F;
	hiddenSelectionsTextures[] = {"\A3_Opf\Characters_F_Opf\Uniforms\Data\Uniform_CombatFatigues_PLR_CO.paa"};
};
class I_Support_MG_F;
class Opf_B_PLR_Uniform_01_tee_F: I_Support_MG_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Opf_U_Uniform_03_PLR_F;
	hiddenSelections[] = 
	{
		camo1,
		camo2,
		camo3
	};
	hiddenSelectionsTextures[] = 
	{
		"\A3\Characters_F_Orange\Uniforms\Data\c_cloth1_olive_co.paa",
		"\A3_Opf\Characters_F_Opf\Uniforms\Data\Uniform_CombatFatigues_PLR_CO.paa"
	};
};