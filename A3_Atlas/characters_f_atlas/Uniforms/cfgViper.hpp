class Atlas_U_O_V_Soldier_Viper_whex_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_V_Soldier_Viper_whex_F0;
	picture = "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\UI\icon_U_O_V_Soldier_Viper_whex_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\ViperOp_Suit_whex_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Atlas_U_O_V_SpecialPurposeSuit_01_whex_F;
		containerClass = Supply20;
		mass = 120;
	};
};