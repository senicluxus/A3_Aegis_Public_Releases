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
class Aegis_O_CombatFatigues_F: O_A_officer_F
{
    scope = protected;
    scopeCurator = private;
	modelSides[] = {TFriendly};
	uniformClass = Aegis_U_O_CombatFatigues_F;
	model = "\A3_Aegis\Characters_F_Aegis\Uniforms\Aegis_OCombatUniform_F.p3d";
	hiddenSelections[] =
	{
		camo,
		camo1,
		camo2,
		insignia
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\OCombatUniform_hex_CO.paa",
		"\A3\characters_f\OPFOR\Data\clothing_co.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_blk_CO.paa"
	};
	class Wounds
	{
		tex[]={};
		mat[]=
		{
			"A3_Aegis\Characters_F_Aegis\Uniforms\Data\OCombatUniform.rvmat",
			"A3_Aegis\Characters_F_Aegis\Uniforms\Data\OCombatUniform_injury.rvmat",
			"A3_Aegis\Characters_F_Aegis\Uniforms\Data\OCombatUniform_injury.rvmat",
			"A3\Characters_F\OPFOR\Data\clothing.rvmat",
			"A3\Characters_F\OPFOR\Data\clothing_injury.rvmat",
			"A3\Characters_F\OPFOR\Data\clothing_injury.rvmat",
			"a3\characters_f\heads\data\m_white_01.rvmat",
			"a3\characters_f\heads\data\m_white_01_injury.rvmat",
			"a3\characters_f\heads\data\m_white_01_injury.rvmat",
			"A3\Characters_F\Common\Data\basicbody.rvmat",
			"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
			"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
			"a3\characters_f\heads\data\hl_white.rvmat",
			"a3\characters_f\heads\data\hl_white_injury.rvmat",
			"a3\characters_f\heads\data\hl_white_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
			"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
			"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
			"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
			"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
			"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
			"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
		};
	};
	armorstructural = 4;	// We use the short rod collider, so lets double check damage values are correct
};
class Aegis_O_CombatFatigues_02_F: O_A_officer_F
{
    scope = protected;
    scopeCurator = private;
	modelSides[] = {TFriendly};
	uniformClass = Aegis_U_O_CombatFatigues_02_F;
	model = "\A3_Aegis\Characters_F_Aegis\Uniforms\Aegis_OCombatUniform_02_F.p3d";
	hiddenSelections[] =
	{
		camo,
		camo1,
		camo2,
		insignia
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\OCombatUniform_hex_CO.paa",
		"\A3\characters_f\OPFOR\Data\clothing_co.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_blk_CO.paa"
		
	};
	class Wounds
	{
		tex[]={};
		mat[]=
		{
			"A3_Aegis\Characters_F_Aegis\Uniforms\Data\OCombatUniform.rvmat",
			"A3_Aegis\Characters_F_Aegis\Uniforms\Data\OCombatUniform_injury.rvmat",
			"A3_Aegis\Characters_F_Aegis\Uniforms\Data\OCombatUniform_injury.rvmat",
			"A3\Characters_F\OPFOR\Data\clothing.rvmat",
			"A3\Characters_F\OPFOR\Data\clothing_injury.rvmat",
			"A3\Characters_F\OPFOR\Data\clothing_injury.rvmat",
			"a3\characters_f\heads\data\m_white_01.rvmat",
			"a3\characters_f\heads\data\m_white_01_injury.rvmat",
			"a3\characters_f\heads\data\m_white_01_injury.rvmat",
			"A3\Characters_F\Common\Data\basicbody.rvmat",
			"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
			"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
			"a3\characters_f\heads\data\hl_white.rvmat",
			"a3\characters_f\heads\data\hl_white_injury.rvmat",
			"a3\characters_f\heads\data\hl_white_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
			"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
			"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
			"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
			"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
			"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
			"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
		};
	};
	armorstructural = 4;	// We use the short rod collider, so lets double check damage values are correct
};
class Aegis_O_LightCombatFatigues_hex_F: O_A_Soldier_lxWS
{
	scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_LightCombatFatigues_hex_F;
	hiddenSelectionsTextures[] = 
	{
		"lxWS\characters_1_f_lxws\uniform\data\lxws_gloves_brown_co.paa",
		"\A3\characters_f\OPFOR\Data\Officer_noinsignia_hex_CO.paa",
		"\a3\characters_f\OPFOR\Data\clothing_CO.paa"
	};
};
class Aegis_O_LightCombatFatigues_urb_F: O_A_Soldier_lxWS
{
	scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_LightCombatFatigues_urb_F;
	hiddenSelectionsTextures[] = 
	{
		"\a3\characters_f_beta\INDEP\Data\ia_soldier_01_clothing_co.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_noinsignia_urb_CO.paa",
		"\a3\characters_f\OPFOR\Data\clothing_oucamo_CO.paa"
	};
};

/* China */
class O_LightFatigues_01_ghex_F: O_A_officer_F
{
	scope = protected;
    scopeCurator = private;
	uniformClass = U_O_T_officer_noInsignia_ghex_F;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_noinsignia_tna_CO.paa"};
};
class O_C_D_Sniper_oicamo_F: Aegis_O_C_D_Sniper_F
{
	scope = protected;
    scopeCurator = private;
	uniformClass = U_O_C_D_Sniper_oicamo_F;
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_oicamo_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\tech_oicamo_CO.paa",
        "\A3\characters_f\Common\Data\ghillie_desert_CO.paa"
    };
};
class Aegis_O_CombatFatigues_ghex_F: Aegis_O_CombatFatigues_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_CombatFatigues_ghex_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\OCombatUniform_ghex_CO.paa",
		"\A3\characters_f_exp\OPFOR\Data\clothing_tna_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_grn_CO.paa"
		
	};
};
class Aegis_O_CombatFatigues_02_ghex_F: Aegis_O_CombatFatigues_02_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_CombatFatigues_02_ghex_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\OCombatUniform_ghex_CO.paa",
		"\A3\characters_f_exp\OPFOR\Data\clothing_tna_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_grn_CO.paa"
	};
};
class Aegis_O_CombatFatigues_dst_F: Aegis_O_CombatFatigues_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_CombatFatigues_dst_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\OCombatUniform_dst_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_oicamo_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_khk_CO.paa"
	};
};
class Aegis_O_CombatFatigues_02_dst_F: Aegis_O_CombatFatigues_02_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_CombatFatigues_02_dst_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\OCombatUniform_dst_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_oicamo_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_khk_CO.paa"
	};
};
class Aegis_O_LightCombatFatigues_ghex_F: O_A_Soldier_lxWS
{
	scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_LightCombatFatigues_ghex_F;
	hiddenSelectionsTextures[] = 
	{
		"\a3\characters_f_beta\INDEP\Data\ia_soldier_01_clothing_co.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_noinsignia_tna_CO.paa",
		"\A3\characters_f_exp\OPFOR\Data\clothing_tna_CO.paa"
	};
};
class Aegis_O_LightCombatFatigues_dst_F: O_A_Soldier_lxWS
{
	scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_LightCombatFatigues_dst_F;
	hiddenSelectionsTextures[] = 
	{
		"lxWS\characters_1_f_lxws\uniform\data\lxws_gloves_brown_co.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_noinsignia_oicamo_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_oicamo_CO.paa"
	};
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
// Luchniks
class Aegis_O_Luchnik_01_taiga_F: O_A_officer_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_Luchnik_taiga_F;
	modelSides[] = {TFriendly};
	model = "\A3_Aegis\Characters_F_Aegis\Uniforms\U_UniformLuchnik_F.p3d";
	hiddenSelections[] =
	{
		camo,
		camo2,
		insignia
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing2_rutaiga_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_blk_CO.paa",
	};
	class Wounds
	{
		tex[] = {};
		mat[] =
        {
            "A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing2.rvmat",
            "A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing2_injury.rvmat",
            "A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing2_injury.rvmat",
            INJURY_PERSONALITY_MATERIALS
        };
	};
	armorstructural = 4;	// We use the short rod collider, so lets double check damage values are correct
};
class Aegis_O_Luchnik_01_shortsleeve_taiga_F: O_A_officer_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_Luchnik_RolledUp_taiga_F;
	modelSides[] = {TFriendly};
	model = "\A3_Aegis\Characters_F_Aegis\Uniforms\U_UniformLuchnik_02_F.p3d";
	hiddenSelections[] =
	{
		camo,
		camo2,
		insignia
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing2_rutaiga_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_blk_CO.paa"
	};
	class Wounds
	{
		tex[] = {};
		mat[] =
        {
            "A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing2.rvmat",
            "A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing2_injury.rvmat",
            "A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing2_injury.rvmat",
            INJURY_PERSONALITY_MATERIALS
        };
	};
	armorstructural = 4;	// We use the short rod collider, so lets double check damage values are correct
};
class Aegis_O_Luchnik_01_officer_taiga_F: O_A_officer_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_Luchnik_officer_taiga_F;
	modelSides[] = {TFriendly};
	model = "\A3_Aegis\Characters_F_Aegis\Uniforms\U_UniformLuchnik_Officer_F.p3d";
	hiddenSelections[] =
	{
		camo,
		insignia
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing2_officer_rutaiga_CO.paa"
	};
	class Wounds
	{
		tex[] = {};
		mat[] =
        {
            "A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing2.rvmat",
            "A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing2_injury.rvmat",
            "A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing2_injury.rvmat",
            INJURY_PERSONALITY_MATERIALS
        };
	};
	armorstructural = 4;	// We use the short rod collider, so lets double check damage values are correct
};
class Aegis_O_Luchnik_01_arid_F: Aegis_O_Luchnik_01_taiga_F

{
    scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_Luchnik_taiga_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing2_ruarid_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_grn_CO.paa"
	};
};
class Aegis_O_Luchnik_01_shortsleeve_arid_F: Aegis_O_Luchnik_01_shortsleeve_taiga_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_Luchnik_RolledUp_taiga_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing2_ruarid_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_grn_CO.paa"
	};
};
class Aegis_O_Luchnik_01_officer_arid_F: Aegis_O_Luchnik_01_officer_taiga_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_Luchnik_officer_taiga_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing2_officer_ruarid_CO.paa"
	};
};
class Aegis_O_Luchnik_01_hex_F: Aegis_O_Luchnik_01_taiga_F

{
    scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_Luchnik_hex_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing2_hex_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_blk_CO.paa"
	};
};
class Aegis_O_Luchnik_01_shortsleeve_hex_F: Aegis_O_Luchnik_01_shortsleeve_taiga_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_Luchnik_RolledUp_hex_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing2_hex_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_blk_CO.paa"
	};
};
class Aegis_O_Luchnik_01_ghex_F: Aegis_O_Luchnik_01_taiga_F

{
    scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_Luchnik_ghex_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing2_ghex_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_grn_CO.paa"
	};
};
class Aegis_O_Luchnik_01_shortsleeve_ghex_F: Aegis_O_Luchnik_01_shortsleeve_taiga_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_Luchnik_RolledUp_ghex_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing2_ghex_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_grn_CO.paa"
	};
};
class Aegis_O_Luchnik_01_dst_F: Aegis_O_Luchnik_01_taiga_F

{
    scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_Luchnik_dst_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing2_dst_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_khk_CO.paa"
	};
};
class Aegis_O_Luchnik_01_shortsleeve_dst_F: Aegis_O_Luchnik_01_shortsleeve_taiga_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_Luchnik_RolledUp_dst_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing2_dst_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_khk_CO.paa"
	};
};
// Russian LCFs
class Aegis_O_LightCombatFatigues_rutaiga_F: O_A_Soldier_lxWS
{
	scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_LightCombatFatigues_rutaiga_F;
	hiddenSelectionsTextures[] = 
	{
		"\a3\characters_f_enoch\Uniforms\Data\I_E_Soldier_01_Pants_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_noInsignia_RUtaiga_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_RUtaiga_CO.paa"
	};
	hiddenSelectionsMaterials[] = 
	{
		"\lxws\characters_1_f_lxws\uniform\data\ia_soldier_01_gloves.rvmat",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_noInsignia_RUtaiga.rvmat",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_RUtaiga.rvmat"
	};
};
class Aegis_O_LightCombatFatigues_ruarid_F: O_A_Soldier_lxWS
{
	scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_LightCombatFatigues_ruarid_F;
	hiddenSelectionsTextures[] = 
	{
		"\a3\characters_f_enoch\Uniforms\Data\I_E_Soldier_01_Pants_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_noInsignia_RUarid_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_RUArid_CO.paa"
	};
	hiddenSelectionsMaterials[] = 
	{
		"\lxws\characters_1_f_lxws\uniform\data\ia_soldier_01_gloves.rvmat",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_noInsignia_RUtaiga.rvmat",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_RUtaiga.rvmat"
	};
};
// Russian CSAT Combat Fatigues
class Aegis_O_CombatFatigues_rutaiga_F: Aegis_O_CombatFatigues_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_CombatFatigues_rutaiga_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\OCombatUniform_rutaiga_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_RUtaiga_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_blk_CO.paa"
	};
};
class Aegis_O_CombatFatigues_02_rutaiga_F: Aegis_O_CombatFatigues_02_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_CombatFatigues_02_rutaiga_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\OCombatUniform_rutaiga_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_RUtaiga_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_blk_CO.paa"
	};
};
class Aegis_O_CombatFatigues_ruarid_F: Aegis_O_CombatFatigues_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_CombatFatigues_ruarid_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\OCombatUniform_ruarid_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_RUarid_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_grn_CO.paa"
	};
};
class Aegis_O_CombatFatigues_02_ruarid_F: Aegis_O_CombatFatigues_02_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_CombatFatigues_02_ruarid_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\OCombatUniform_ruarid_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_RUarid_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_grn_CO.paa"
	};
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
	modelSides[] = {TFriendly};
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
class Aegis_I_Soldier_Sweater_F: O_G_Soldier_LAT_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Aegis_U_I_Uniform_01_sweater_f;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Aegis_I_Soldier_01_sweater_co.paa"
	};
};

/* Opfor Light Fatigues (tee) */
class Aegis_O_Fatigues_01_Tshirt_hex_F: O_R_Fatigues_01_Tshirt_taiga_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_CombatUniform_tshirt_hex_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\basicbody_CSAT_CO.paa",
		"\A3\characters_f\OPFOR\Data\clothing_co.paa"
	};
};
class Aegis_O_Fatigues_01_Tshirt_dst_F: O_R_Fatigues_01_Tshirt_taiga_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_CombatUniform_tshirt_dst_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\basicbody_CSAT_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_oicamo_CO.paa"
	};
};
class Aegis_O_Fatigues_01_Tshirt_ghex_F: O_R_Fatigues_01_Tshirt_taiga_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_CombatUniform_tshirt_ghex_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\basicbody_CSAT_CO.paa",
		"\A3\characters_f_exp\OPFOR\Data\clothing_tna_CO.paa"
	};
};
class Aegis_O_Fatigues_01_Tshirt_urb_F: O_R_Fatigues_01_Tshirt_taiga_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_CombatUniform_urb_ghex_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\basicbody_CSAT_CO.paa",
		"\A3\characters_f\OPFOR\Data\clothing_oucamo_co.paa"
	};
};

/* Generic CSAT Combat Fatigues*/
class Aegis_O_CombatFatigues_oli_F: Aegis_O_CombatFatigues_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_CombatFatigues_oli_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\OCombatUniform_oli_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_oli_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_blk_CO.paa"
		
	};
};
class Aegis_O_CombatFatigues_02_oli_F: Aegis_O_CombatFatigues_02_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_CombatFatigues_02_oli_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\OCombatUniform_oli_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_oli_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_blk_CO.paa"
	};
};
class Aegis_O_CombatFatigues_khk_F: Aegis_O_CombatFatigues_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_CombatFatigues_khk_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\OCombatUniform_khk_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_khk_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_khk_CO.paa"
		
	};
};
class Aegis_O_CombatFatigues_02_khk_F: Aegis_O_CombatFatigues_02_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_CombatFatigues_02_khk_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\OCombatUniform_khk_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_khk_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_khk_CO.paa"
	};
};
class B_ION_Helipilot_lxWS;
class Aegis_B_ION_Helipilot_F: B_ION_Helipilot_lxWS
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Aegis_U_lxWS_ION_Casual_Hawaiian_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ig_poloshirt_1_hawaiian_co.paa"
	};
};
class Aegis_B_ION_Helipilot_2_F: B_ION_Helipilot_lxWS
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Aegis_U_lxWS_ION_Casual_Hawaiian_2_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ig_poloshirt_1_hawaiian_2_co.paa"
	};
};
class Aegis_B_ION_TL_tna_F: B_ION_soldier_AR_lxWS
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Aegis_U_lxWS_ION_Casualtna_F;
	hiddenSelectionsTextures[] = {"\A3\characters_f_enoch\Uniforms\Data\clothing_mcam_wdl_co.paa","\lxWS\characters_1_f_lxws\uniform\data\pmc_watch_co.paa","\a3\characters_f\common\data\basicbody_black_co.paa","lxWS\characters_f_lxws\data\SFIA\c_cloth1_green_co.paa"};
};
class Aegis_B_ION_Shot_F: B_ION_shot_lxWS
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Aegis_U_lxWS_ION_Flanneltna_F;
	hiddenSelectionsTextures[] = {"\lxws\characters_f_lxws\data\clothes\B_ION_Soldier_poloRed_CO.paa","\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_mcam_olive_co.paa"};
};

/* Survival Fatigue Expansion */
class Aegis_B_SurvivalFatigues_wdl_F: b_soldier_survival_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Aegis_U_B_SurvivalFatigues_wdl_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_mcam_wdl_CO.paa",
        "\A3\Characters_F\Common\Data\diver_suit_nato_CO.paa",
        "\A3\Characters_F\Common\Data\diver_equip_nato_CO.paa",
        "\A3\Characters_F_Enoch\Uniforms\Data\basicbody_wdl_CO.paa"
	};
};
class Aegis_B_SurvivalFatigues_tna_F: b_soldier_survival_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Aegis_U_B_SurvivalFatigues_tna_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_AR_F_tna_02_CO.paa",
        "\A3\Characters_F\Common\Data\diver_suit_nato_CO.paa",
        "\A3\Characters_F\Common\Data\diver_equip_nato_CO.paa",
        "\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_01_CO.paa"
	};
};
class Aegis_B_SurvivalFatigues_des_F: b_soldier_survival_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Aegis_U_B_SurvivalFatigues_des_F;
	hiddenSelectionsTextures[] =
	{
		"\lxws\characters_f_lxws\data\NATO\clothing1_desert_CO.paa",
        "\A3\Characters_F\Common\Data\diver_suit_nato_CO.paa",
        "\A3\Characters_F\Common\Data\diver_equip_nato_CO.paa",
        "\lxws\characters_f_lxws\data\NATO\basicbody_sand_co.paa"
	};
};
class Aegis_B_SurvivalFatigues_CTRG_F: b_soldier_survival_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Aegis_U_B_SurvivalFatigues_ctrg_F;
	hiddenSelectionsTextures[] =
	{
		"\A3\Characters_F_EPA\BLUFOR\Data\clothing1_mtp_co.paa",
        "\A3\Characters_F\Common\Data\diver_suit_nato_CO.paa",
        "\A3\Characters_F\Common\Data\diver_equip_nato_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\basicbody_green_CO.paa"
	};
};

/* Half Ghillie Expansion */
class Aegis_B_Sniper_Fatigues_CTRG_F: B_Sniper_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Aegis_U_B_Sniper_Fatigues_CTRG_F;
	hiddenSelectionsTextures[]=
	{
		"\A3\characters_f_epa\BLUFOR\Data\clothing1_mtp_co.paa",
		"\A3\characters_f\Common\Data\ghillie_mcamo_co.paa"
	};
};

/* RU Urban */
class Aegis_O_R_Fatigues_01_urban_F: O_R_Fatigues_01_taiga_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = Aegis_U_O_R_CombatUniform_urban_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_ruUrban_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\tech_rus_CO.paa"
	};
};
class Aegis_O_Luchnik_01_urban_F: Aegis_O_Luchnik_01_taiga_F

{
    scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_Luchnik_urban_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing2_ruUrban_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_blk_CO.paa"
	};
};
class Aegis_O_Luchnik_01_shortsleeve_urban_F: Aegis_O_Luchnik_01_shortsleeve_taiga_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = Aegis_U_O_Luchnik_RolledUp_urban_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing2_ruUrban_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\TacGloves_blk_CO.paa"
	};
};