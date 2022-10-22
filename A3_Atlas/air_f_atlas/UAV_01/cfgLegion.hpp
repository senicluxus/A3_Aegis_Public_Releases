class Atlas_B_L_UAV_01_F: UAV_01_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_L_UAV_01_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Atlas_BLU_L_F;
	crew = B_UAV_AI_F;
	typicalCargo[] = {B_UAV_AI_F};
	accuracy = 0.5;
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {B_UAV_01_backpack_F};
	};
	hiddenSelectionsTextures[] = {"\A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_CO.paa"};
	textureList[] = {Blufor,1};
};