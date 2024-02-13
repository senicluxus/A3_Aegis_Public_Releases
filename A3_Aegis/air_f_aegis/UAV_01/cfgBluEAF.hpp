/* BLUFOR LDF */
class Aegis_B_E_UAV_01_F: UAV_01_base_F
{
	author = $STR_A3_A_Ravenholme;
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
	editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\I_E_UAV_01_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_EAF_F;
	crew = B_UAV_AI_F;
	typicalCargo[] = {B_UAV_AI_F};
	accuracy = 0.5;
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {Aegis_B_E_UAV_01_backpack_F};
	};
	hiddenSelectionsTextures[] = {"a3\Air_F_Enoch\UAV_01\Data\UAV_01_EAF_CO.paa"};
	textureList[] = {EAF,1};
};
class Aegis_B_E_UAV_01_backpack_F: Weapon_Bag_Base
{
	author = $STR_A3_A_Ravenholme;
	mapSize = 0.6;
	scope = protected;
	scopeCurator = protected;
	displayName = $STR_A3_C_CfgVehicles_I_E_UAV_01_backpack_F0;
	model = "\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\UAV_backpack_F.p3d";
	editorCategory = EdCat_Equipment;
	editorSubcategory = EdSubcat_Backpacks;
	faction = BLU_EAF_F;
	picture = "\A3\Supplies_F_Enoch\Bags\Data\UI\icon_I_E_UAV_01_backpack_F_ca";
	hiddenSelectionsTextures[] = {"\A3\Supplies_F_Enoch\Bags\Data\UAV_backpack_EAF_co.paa"};
	maximumLoad = 0;
	mass = 300;
	class assembleInfo: assembleInfo
	{
		base = "";
		displayName = $STR_A3_C_CfgVehicles_I_E_UAV_01_backpack_F_assembleInfo0;
		assembleTo = Aegis_B_E_UAV_01_F;
	};
};