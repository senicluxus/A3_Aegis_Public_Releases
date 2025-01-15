class U_B_CTRG_Soldier_F: Uniform_Base
{
	displayName = $STR_A3_A_CfgWeapons_U_B_CTRG_Soldier_F0;
};
class U_B_CTRG_Soldier_2_F: Uniform_Base
{
	displayName = $STR_A3_A_CfgWeapons_U_B_CTRG_Soldier_2_F0;
};
class U_B_CTRG_Soldier_3_F: Uniform_Base
{
	displayName = $STR_A3_A_CfgWeapons_U_B_CTRG_Soldier_3_F0;
};
class U_B_CTRG_Soldier_Arid_F: Uniform_Base
{
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_B_CTRG_Soldier_arid_F_CO.paa"};
};
class U_B_CTRG_Soldier_2_Arid_F: Uniform_Base
{
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_B_CTRG_Soldier_arid_F_CO.paa"};
};
class U_B_CTRG_Soldier_3_Arid_F: Uniform_Base
{
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_B_CTRG_Soldier_arid_F_CO.paa"};
};
class U_B_CTRG_Soldier_Black_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_CTRG_Soldier_Black_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_CTRG_Soldier_Black_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_B_CTRG_Soldier_black_F_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = B_CTRG_Soldier_Black_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class U_B_CTRG_Soldier_2_Black_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_CTRG_Soldier_2_Black_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_CTRG_Soldier_2_Black_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_B_CTRG_Soldier_black_F_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = B_CTRG_Soldier_2_Black_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class U_B_CTRG_Soldier_3_Black_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_CTRG_Soldier_3_Black_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_B_CTRG_Soldier_3_Black_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_B_CTRG_Soldier_black_F_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = B_CTRG_Soldier_3_Black_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class Aegis_U_B_SurvivalFatigues_CTRG_F : Uniform_Base
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_B_SurvivalFatigues_CTRG_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_Aegis_U_B_SurvivalFatigues_ctrg_F_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"a3\characters_f\common\data\diver_suit_nato_co.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Aegis_B_SurvivalFatigues_CTRG_F;
		containerClass = Supply40;
		uniformType = Neopren;
		mass=60;
	};
};
class Aegis_U_B_Sniper_Fatigues_CTRG_F : Uniform_Base
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_Sniper_Fatigues_CTRG_F0;
	//picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_Aegis_U_B_SurvivalFatigues_ctrg_F_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"a3\characters_f\common\data\diver_suit_nato_co.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Aegis_B_Sniper_Fatigues_CTRG_F;
		containerClass = Supply40;
		mass = 60;
	};
};