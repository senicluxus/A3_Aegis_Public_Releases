class Opf_U_O_ParamilitaryBody: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_O_CfgWeapons_U_O_ParamilitaryBody0;
	picture = "\A3_Opf\Characters_F_Opf\Uniforms\Data\UI\icon_U_O_ParamilitaryBody_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\paramilitary_body_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Opf_O_P_soldier_1_F;
		containerClass = Supply40;
		mass = 40;
	};
};