class Opf_B_P_UAV_02_IED_lxWS: UAV_02_IED_Base_lxWS
{
	class SimpleObject{};
	editorPreview = "\A3_OpF\editorpreviews_f_opf\Data\CfgVehicles\Opf_B_P_UAV_02_IED_lxWS.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Opf_BLU_P_F;
	crew = B_UAV_AI;
	typicalCargo[] = {B_UAV_AI};
	hiddenSelectionsTextures[] = 
	{
		"\lxWS\air_f_lxWS\Data\Gun_Drone_CO.paa",
		"\lxWS\air_1_f_lxWS\Data\Gun_Drone_Adds_FIA_CO.paa"
	};
	hiddenSelectionsMaterials[] = 
	{
		"lxWS\air_f_lxWS\Data\drone_mat.rvmat",
		"lxWS\air_1_f_lxWS\Data\gun_drone_adds_FIA.rvmat"
	};
	textureList[] = {Guerrilla,1};
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {Opf_B_P_UAV_02_IED_backpack_lxWS};
	};
};
class Opf_B_P_UAV_02_IED_backpack_lxWS: Weapon_Bag_Base
{
	mapSize = 0.6;
	scope = protected;
	scopeCurator = protected;
	displayName = $STR_A3_A_CfgVehicles_Opf_B_P_UAV_IED_lxWS_backpack_F0;
	model = "\lxWS\air_f_lxWS\Bags\UAV_backpack_lxWS.p3d";
	editorCategory = EdCat_Equipment;
	editorSubcategory = EdSubcat_Backpacks;
	faction = Opf_BLU_P_F;
	picture = "\lxWS\air_f_lxWS\Data\UI\icon_I_UAV_02_backpack_lxWS_CA.paa";
	hiddenSelections[] = {"camo","camo2"};
	hiddenSelectionsTextures[] = {"\lxWS\air_f_lxWS\Bags\Data\UAV_backpack_NATO_CO.paa","lxWS\air_1_f_lxWS\Data\T_Gun_Drone_CO.paa"};
	maximumLoad = 0;
	mass = 400;
	class assembleInfo: assembleInfo
	{
		base = "";
		displayName = $STR_LXWS_UAV_02_IED;
		assembleTo = Opf_B_P_UAV_02_IED_lxWS;
	};
};