/* AAF */
class Atlas_U_I_CombatFatigues_aaf_F: Uniform_Base
{
	author = $STR_A3_A_Jamie;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_I_CombatFatigues_aaf_F0;
	picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\Atlas_U_I_CombatFatigues_aaf_F_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_I_CombatFatigues_aaf_F;
		containerClass = Supply40;
		mass = 60;
	};
};
class Atlas_U_I_CombatFatigues_02_aaf_F: Uniform_Base
{
	author = $STR_A3_A_Jamie;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_I_CombatFatigues_02_aaf_F0;
	picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\Atlas_U_I_CombatFatigues_02_aaf_F_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_I_CombatFatigues_02_aaf_F;
		containerClass = Supply40;
		mass = 60;
	};
};