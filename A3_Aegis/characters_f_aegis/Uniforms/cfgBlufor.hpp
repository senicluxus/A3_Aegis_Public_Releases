/* US */
class U_B_CombatUniform_mcam_tshirt: Uniform_Base
{
    displayName = $STR_A3_A_CfgWeapons_U_B_CombatUniform_mcam_tshirt0;
};
class U_B_CombatUniform_mcam_vest: Uniform_Base
{
    displayName = $STR_A3_A_CfgWeapons_U_B_CombatUniform_mcam_vest0;
};
class U_B_GhillieSuit: Uniform_Base
{
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_GhillieSuit_CA.paa";
};
class U_Rangemaster: Uniform_Base
{
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_Rangemaster_CA.paa";
};

/* US (Pacific) */
class U_B_T_Soldier_SL_F: Uniform_Base
{
	displayName = $STR_A3_A_CfgWeapons_U_B_T_Soldier_SL_F0;
};

/* US (Woodland) */
class U_B_CombatUniform_vest_mcam_wdl_f: Uniform_Base
{
    displayName = $STR_A3_A_CfgWeapons_U_B_CombatUniform_vest_mcam_wdl_f0;
};
class U_B_GhillieSuit_wdl_f: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_GhillieSuit_wdl_f0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_GhillieSuit_wdl_f_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F_Enoch\Uniforms\Suitpacks\Data\suitpack_soldier_B_W_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = B_GhillieSuit_01_wdl_F;
		containerClass = Supply60;
		mass = 60;
	};
};
class U_B_W_FullGhillie_wdl_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_W_FullGhillie_wdl_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_W_FullGhillie_wdl_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_coverall_NATO_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = B_W_ghillie_wdl_F;
        containerClass = Supply60;
        mass = 80;
	};
};

/* BAF */
class U_B_UBACS_mtp_f: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_UBACS_mtp_f0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_UBACS_mtp_f_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo_mtp_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = B_UBACSCombatFatigues_01_mtp_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class U_B_UBACS_tshirt_mtp_f: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_UBACS_tshirt_mtp_f0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_UBACS_tshirt_mtp_f_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo_mtp_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = B_UBACSCombatFatigues_01_tshirt_mtp_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class U_B_UBACS_vest_mtp_f: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_UBACS_vest_mtp_f0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_UBACS_vest_mtp_f_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo_mtp_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = B_UBACSReconFatigues_01_mtp_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class U_B_UBACS_blk_f: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_UBACS_blk_f0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_UBACS_blk_f_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo_blk_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = B_UBACSCombatFatigues_01_blk_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class U_B_UBACS_tshirt_blk_f: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_UBACS_tshirt_blk_f0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_UBACS_tshirt_blk_f_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo_blk_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = B_UBACSCombatFatigues_01_tshirt_blk_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class U_B_UBACS_vest_blk_f: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_UBACS_vest_blk_f0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_UBACS_vest_blk_f_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo_blk_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = B_UBACSReconFatigues_01_blk_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class U_B_A_CBRN_Suit_01_MTP_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_A_CBRN_Suit_01_MTP_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_A_CBRN_Suit_01_MTP_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\CBRN_Suit_01_MTP_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = B_A_CBRN_Man_Oversuit_01_MTP_F;
		containerClass = Supply30;
		mass = 45;
	};
};

/* BAF (Pacific) */
class U_B_UBACS_tna_f: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_UBACS_tna_f0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_UBACS_tna_f_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo_tna_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = B_UBACSCombatFatigues_01_tna_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class U_B_UBACS_tshirt_tna_f: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_UBACS_tshirt_tna_f0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_UBACS_tshirt_tna_f_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo_tna_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = B_UBACSCombatFatigues_01_tshirt_tna_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class U_B_UBACS_vest_tna_f: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_UBACS_vest_tna_f0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_UBACS_vest_tna_f_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo_tna_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = B_UBACSReconFatigues_01_tna_F;
		containerClass = Supply40;
		mass = 40;
	};
};

/* BAF (Woodland) */
class U_B_UBACS_wdl_f: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_UBACS_wdl_f0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_UBACS_wdl_f_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo_wdl_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = B_UBACSCombatFatigues_01_wdl_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class U_B_UBACS_tshirt_wdl_f: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_UBACS_tshirt_wdl_f0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_UBACS_tshirt_wdl_f_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo_wdl_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = B_UBACSCombatFatigues_01_tshirt_wdl_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class U_B_UBACS_vest_wdl_f: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_UBACS_vest_wdl_f0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_UBACS_vest_wdl_f_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\camo_wdl_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = B_UBACSReconFatigues_01_wdl_F;
		containerClass = Supply40;
		mass = 40;
	};
};