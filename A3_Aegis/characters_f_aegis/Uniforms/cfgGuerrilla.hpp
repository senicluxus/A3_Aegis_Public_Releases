/* FIA */
class U_IG_Guerilla3_2: Uniform_Base
{
	displayName = $STR_A3_A_CfgWeapons_U_IG_Guerilla3_20;
	class ItemInfo: UniformItem
	{
		uniformClass = I_G_Sharpshooter_F;
	};
};
class U_BG_Guerilla3_2: Uniform_Base
{
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_IG_Guerilla3_20;
	class ItemInfo: UniformItem
	{
		uniformClass = B_G_Sharpshooter_F;
	};
};
class U_OG_Guerilla3_2: Uniform_Base
{
	displayName = $STR_A3_A_CfgWeapons_U_IG_Guerilla3_20;
	class ItemInfo: UniformItem
	{
		uniformClass = O_G_Sharpshooter_F;
	};
};
class U_IG_Guerilla1_2_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	displayName = $STR_A3_CfgWeapons_U_BG_Guerilla1_2_F0;
	picture = "\A3\Characters_F_Orange\Uniforms\Data\UI\icon_U_G_guerrilla1_2_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F_Orange\Uniforms\Data\C_Cloth1_olive_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = I_G_Soldier_A_F;
		containerClass = Supply30;
		mass = 30;
	};
};
class U_OG_Guerilla1_2_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	displayName = $STR_A3_CfgWeapons_U_BG_Guerilla1_2_F0;
	picture = "\A3\Characters_F_Orange\Uniforms\Data\UI\icon_U_G_guerrilla1_2_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F_Orange\Uniforms\Data\C_Cloth1_olive_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = O_G_Soldier_A_F;
		containerClass = Supply30;
		mass = 30;
	};
};
class U_BG_Guerilla1_3: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_BG_Guerilla1_30;
	picture = "\A3\Characters_F_Gamma\Guerrilla\Data\UI\icon_U_G_guerrilla1_1_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\C_cloth1_kabeiroi_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = B_G_Soldier_lite_F;
		containerClass = Supply30;
		mass = 30;
	};
};
class U_IG_Guerilla1_3: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	displayName = $STR_A3_A_CfgWeapons_U_BG_Guerilla1_30;
	picture = "\A3\Characters_F_Gamma\Guerrilla\Data\UI\icon_U_G_guerrilla1_1_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\c_cloth1_kabeiroi_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = I_G_Soldier_lite_F;
		containerClass = Supply30;
		mass = 30;
	};
};
class U_OG_Guerilla1_3: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	displayName = $STR_A3_A_CfgWeapons_U_BG_Guerilla1_30;
	picture = "\A3\Characters_F_Gamma\Guerrilla\Data\UI\icon_U_G_guerrilla1_1_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\c_cloth1_kabeiroi_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = O_G_Soldier_lite_F;
		containerClass = Supply30;
		mass = 30;
	};
};