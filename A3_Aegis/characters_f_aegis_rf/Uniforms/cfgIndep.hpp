class Aegis_U_I_Uniform_01_sweater_02_f: Uniform_Base
{
	author = $STR_A3_A_Branflakes;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_u_i_uniform_01_sweater_shortsleeve_f0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_Aegis_U_I_Uniform_01_sweater_02_f_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Aegis_I_Soldier_01_sweater_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Aegis_I_Soldier_Sweater_02_F;
		containerClass = Supply40;
		mass = 40;
	};
};