/* Viper */
class U_O_V_Soldier_Viper_oicamo_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_V_Soldier_Viper_oicamo_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_O_V_Soldier_Viper_oicamo_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ViperOp_Suit_oicamo_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = U_O_V_SpecialPurposeSuit_01_oicamo_F;
		containerClass = Supply20;
		mass = 120;
	};
};