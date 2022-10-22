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