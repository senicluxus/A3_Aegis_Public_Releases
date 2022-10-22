class Atlas_U_B_G_CombatUniform_wdl: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_G_CombatUniform_wdl0;
	picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_B_G_CombatUniform_wdl_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_G_Soldier_01_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_B_G_CombatFatigues_01_wdl_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class Atlas_U_B_G_CombatUniform_tshirt_wdl: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_G_CombatUniform_tshirt_wdl0;
	picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_B_G_CombatUniform_tshirt_wdl_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_G_Soldier_01_TankTop_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_B_G_CombatFatigues_01_Tshirt_wdl_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class Atlas_U_B_G_CombatUniform_vest_wdl: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_G_CombatUniform_vest_wdl0;
	picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_B_G_CombatUniform_vest_wdl_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_G_Soldier_01_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_B_G_CombatFatigues_01_RolledUp_wdl_F;
		containerClass = Supply40;
		mass = 40;
	};
};
class Atlas_U_B_G_HeliPilotCoveralls: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_B_G_HeliPilotCoveralls0;
	picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_B_G_HeliPilotCoveralls_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\coveralls_green_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_B_G_Coveralls_01_F;
		containerClass = Supply40;
		mass = 60;
	};
};
class Atlas_U_Tank_wdl_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_Tank_wdl_F0;
	picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_Tank_wdl_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] =
    {
        camo,
        insignia
    };
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Tank_wdl_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_B_G_TankerCoveralls_01_F;
		containerClass = Supply30;
		mass = 30;
	};
};