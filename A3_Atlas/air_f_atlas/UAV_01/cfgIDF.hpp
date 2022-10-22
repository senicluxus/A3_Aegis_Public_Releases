class Atlas_I_I_UAV_01_F: UAV_01_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
			{damagehide,0},
			{rotorimpacthide,0},
			{tailrotorimpacthide,0},
			{propeller1_rotation,0},
			{propeller1_blur_rotation,0},
			{propeller2_rotation,0},
			{propeller2_blur_rotation,0},
			{propeller3_rotation,0},
			{propeller3_blur_rotation,0},
			{propeller4_rotation,0},
			{propeller4_blur_rotation,0},
			{propeller1_hide,0},
			{propeller1_blur_hide,0},
			{propeller2_hide,0},
			{propeller2_blur_hide,0},
			{propeller3_hide,0},
			{propeller3_blur_hide,0},
			{propeller4_hide,0},
			{propeller4_blur_hide,0},
			{mainturret,0},
			{maingun,-0.05}
		};
		hide[] =
		{
			zasleh,
			"tail rotor blur",
			"main rotor blur",
			"zadni svetlo",
			clan,
			"podsvit pristroju",
			poskozeni
		};
		verticalOffset = 0.15;
		verticalOffsetWorld = -0.001;
		init = "''";
	};
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_UAV_01_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TGuerrila;
	faction = Atlas_IND_I_F;
	crew = I_UAV_AI_F;
	typicalCargo[] = {I_UAV_AI_F};
	accuracy = 0.5;
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {Atlas_I_I_UAV_01_backpack_F};
	};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Air_F_Atlas\UAV_01\Data\UAV_01_IDF_CO.paa"};
	textureList[] = {IDF,1};
};
class Atlas_I_I_UAV_01_backpack_F: Weapon_Bag_Base
{
	author = $STR_A3_A_AveryTheKitty;
	mapSize = 0.6;
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_I_I_UAV_01_backpack_F0;
	model = "\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\UAV_backpack_F.p3d";
	editorCategory = EdCat_Equipment;
	editorSubcategory = EdSubcat_Backpacks;
	faction = Atlas_IND_I_F;
	picture = "\A3_Atlas\Supplies_F_Atlas\Bags\Data\UI\icon_I_I_UAV_01_backpack_F_CA.paa";
	hiddenSelectionsTextures[] = {"\A3_Atlas\Supplies_F_Atlas\Bags\Data\UAV_backpack_khk_CO.paa"};
	maximumLoad = 0;
	mass = 300;
	class assembleInfo: assembleInfo
	{
		base = "";
		displayName = $STR_A3_A_CfgVehicles_I_I_UAV_01_backpack_F_assembleInfo0;
		assembleTo = Atlas_I_I_UAV_01_F;
	};
};