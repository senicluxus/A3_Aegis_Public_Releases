class Atlas_U_B_Mo_CombatUniform_north: Uniform_Base
{
	author = $STR_A3_A_BranFlakes;
	scope = private;
	displayName = "Combat Uniform [Morocco]";
	picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_Atlas_U_B_A_CombatUniform_aucamo_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_A_Soldier_01_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_B_Mo_CombatFatigues_01_north_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class Atlas_U_B_Mo_CombatUniform_shortsleeve_north: Uniform_Base
{
	author = $STR_A3_A_BranFlakes;
	scope = private;
	displayName = "Combat Uniform [Morocco] (Rolled-Up)";
	picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_Atlas_U_B_A_CombatUniform_shortsleeve_aucamo_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_A_Soldier_01_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_B_Mo_CombatFatigues_01_RolledUp_north_F;
		containerClass = Supply40;
		mass = 40;
	};
};