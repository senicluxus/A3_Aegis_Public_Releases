class Atlas_U_O_VZ_Officer_oli_CO_f: Uniform_Base
{
	author = $STR_A3_A_BranFlakes;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_officer_noInsignia_oli_F0;
	picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\Atlas_U_O_VZ_Officer_oli_CO_f_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_indep_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_O_VZ_Officer_oli_CO_F;
		containerClass = Supply40;
		mass = 40;
	};
};