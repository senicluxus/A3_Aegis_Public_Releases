class Atlas_U_E_Reservist_Uniform_01_F: Uniform_Base
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
    displayName = $STR_A3_A_CfgWeapons_Atlas_U_E_Reservist_Uniform_01_F0;
	picture = "\A3_Atlas\Characters_F_Atlas\uniforms\data\UI\Atlas_U_I_E_Reservist_Uniform_01_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_indep_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_I_E_Reservist_Uniform_01_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class Atlas_U_E_Reservist_Uniform_01_shortsleeve_F: Uniform_Base
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_Atlas_U_E_Reservist_Uniform_01_shortsleeve_F0;
	picture = "\A3_Atlas\Characters_F_Atlas\uniforms\data\UI\Atlas_U_I_E_Reservist_Uniform_01_shortsleeve_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_indep_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_I_E_Reservist_Uniform_01_shortsleeve_F;
		containerClass = Supply40;
		mass = 40;
	};
};