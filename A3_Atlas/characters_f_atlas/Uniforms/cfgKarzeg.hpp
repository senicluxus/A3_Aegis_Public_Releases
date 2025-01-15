class Atlas_U_B_K_CombatUniform: Uniform_Base
{
	author = $STR_A3_A_BranFlakes;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_K_CombatUniform0;
	picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_Atlas_U_B_K_CombatUniform_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Uniform_KZG_CombatFatigues_Pants_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_B_K_CombatFatigues_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class Atlas_U_B_K_CombatUniform_shortsleeve: Uniform_Base
{
	author = $STR_A3_A_BranFlakes;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_K_CombatUniform_shortsleeve0;
	picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_Atlas_U_B_K_CombatUniform_shortsleeve_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Uniform_KZG_CombatFatigues_Pants_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_B_K_CombatFatigues_RolledUp_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class Atlas_U_B_K_CBRN_Suit_01_F: Uniform_Base
{
	author = $STR_A3_A_BranFlakes;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_K_CBRN_Suit_01_F0;
	picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_Atlas_U_B_K_CBRN_Suit_01_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\CBRN_Suit_01_KZG_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_B_K_CBRN_Man_Oversuit_01_KZG_F;
		containerClass = Supply30;
		mass = 45;
	};
};
// Bran: Officer Uniform string is: $STR_A3_A_CfgWeapons_U_B_K_Uniform_officer_f0
class Atlas_U_B_K_GhillieSuit: Uniform_Base
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_K_GhillieSuit0;
	picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_Atlas_U_B_K_GhillieSuit_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\Uniform_KZG_CombatFatigues_Pants_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_B_K_GhillieSuit_01_F;
		containerClass = Supply60;
		mass = 60;
	};
};
class Atlas_U_B_K_HeliPilotCoveralls: Uniform_Base
{
	author = $STR_A3_A_BranFlakes;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_K_HeliPilotCoveralls0;
	picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_Atlas_U_B_K_HeliPilotCoveralls_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Coveralls_kzg_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_B_K_Coveralls_01_F;
		containerClass = Supply40;
		mass = 60;
	};
};