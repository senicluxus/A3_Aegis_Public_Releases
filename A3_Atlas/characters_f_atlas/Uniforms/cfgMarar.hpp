class Atlas_U_B_M_CombatUniform_des: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_CombatUniform_marar0;
	picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_Atlas_U_B_M_CombatUniform_des_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_M_Soldier_01_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_B_M_CombatFatigues_01_des;
		containerClass = Supply40;
		mass = 40;
	};
};
class Atlas_U_B_M_CombatUniform_shortsleeve_des: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_CombatUniform_marar_vest0;
	picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_Atlas_U_B_M_CombatUniform_shortsleeve_des_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_M_Soldier_01_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_B_M_CombatFatigues_01_RolledUp_des;
		containerClass = Supply40;
		mass = 40;
	};
};
class Atlas_U_B_M_CombatUniform_tee_des: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_CombatUniform_marar_tshirt0;
	picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_Atlas_U_B_M_CombatUniform_tee_des_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_M_Soldier_01_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\basicbody_marar.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_B_M_CombatFatigues_01_Tshirt_des;
		containerClass = Supply40;
		mass = 40;
	};
};
class Atlas_U_B_M_Tank_Marar_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_Tank_Marar_F0;
	picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_Atlas_U_B_M_Tank_Marar_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] =
    {
        camo,
        insignia
    };
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_M_coveralls.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_B_M_Coveralls_01_F;
		containerClass = Supply30;
		mass = 30;
	};
};
class Atlas_U_B_M_CBRN_Suit_01_Marar_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_I_I_CBRN_Suit_01_Marar_F0;
	picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_Atlas_U_B_M_CBRN_Suit_01_Marar_F_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_M_cbrn.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_B_M_CBRN_Man_Oversuit_01_Marar_F;
		containerClass = Supply30;
		mass = 45;
	};
};