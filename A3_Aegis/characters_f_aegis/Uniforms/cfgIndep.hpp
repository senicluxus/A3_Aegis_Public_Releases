/* AAF */
class U_I_CombatUniform_tshirt: Uniform_Base
{
	scope = public;
    displayName = $STR_A3_A_CfgWeapons_U_I_CombatUniform_tshirt0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_I_CombatUniform_tshirt_CA.paa";
	class ItemInfo: UniformItem
	{
		uniformClass = I_support_MG_F;
	};
};
class U_I_pilotCoveralls: Uniform_Base
{  
    picture = "\A3\Characters_F\Data\UI\icon_U_IR_PilotCoveralls_CA.paa";
};
class U_I_Uniform_01_tanktop_F: Uniform_Base
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_I_Uniform_01_tanktop_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_I_Uniform_01_tanktop_F_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_indep_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = I_Uniform_01_tanktop_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class Aegis_U_I_Uniform_01_sweater_f: Uniform_Base
{
	author = $STR_A3_A_Branflakes;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_u_i_uniform_01_sweater_f0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_Aegis_U_I_Uniform_01_sweater_f_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Aegis_I_Soldier_01_sweater_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Aegis_I_Soldier_Sweater_F;
		containerClass = Supply40;
		mass = 40;
	};
};