class Atlas_B_G_UAV_06_F: UAV_06_base_F
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
			{cargo_bumpers_dam_hide,0},
			{bumpers_dam_hide,0},
			{minedetector_dam_hide,0},
			{mine_detector_hide,1},
			{cargo_hide,0},
			{bumpers_hide,0},
			{inventory_door,0},
			{propeller1_rotation,1},
			{propeller1_blur_rotation,1},
			{propeller2_rotation,0},
			{propeller2_blur_rotation,0},
			{propeller3_rotation,1},
			{propeller3_blur_rotation,1},
			{propeller4_rotation,0},
			{propeller4_blur_rotation,0},
			{propeller5_rotation,1},
			{propeller5_blur_rotation,1},
			{propeller6_rotation,1},
			{propeller6_blur_rotation,1},
			{propeller1_hide,0},
			{propeller1_blur_hide,0},
			{propeller2_hide,0},
			{propeller2_blur_hide,0},
			{propeller3_hide,0},
			{propeller3_blur_hide,0},
			{propeller4_hide,0},
			{propeller4_blur_hide,0},
			{propeller5_hide,0},
			{propeller5_blur_hide,0},
			{propeller6_hide,0},
			{propeller6_blur_hide,0},
			{lights_em_1,3160.6399},
			{lights_em_2,3160.6399},
			{lights_em_1_flash,3160.6399},
			{lights_em_2_flash,3160.6399}
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
		verticalOffset = 0.249;
		verticalOffsetWorld = 0;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_UAV_06_F.jpg";
	displayName = $STR_A3_CfgVehicles_B_UAV_06_F0;
	scope = public;
	side = TWest;
	faction = Atlas_BLU_G_F;
	crew = B_UAV_AI_F;
	typicalCargo[] = {B_UAV_AI_F};
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {B_UAV_06_backpack_F};
	};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Air_F_Atlas\UAV_06\Data\B_G_UAV_06_CO.paa"};
	class TextureSources: TextureSources
	{
		class Blufor: Blufor
		{
			textures[] = {"\A3_Atlas\Air_F_Atlas\UAV_06\Data\B_G_UAV_06_CO.paa"};
			factions[]= {Atlas_BLU_G_F};
		};
	};
};
class Atlas_B_G_UAV_06_medical_F: UAV_06_medical_base_F
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
			{cargo_bumpers_dam_hide,0},
			{bumpers_dam_hide,0},
			{minedetector_dam_hide,0},
			{mine_detector_hide,1},
			{cargo_hide,0},
			{bumpers_hide,0},
			{inventory_door,0},
			{propeller1_rotation,1},
			{propeller1_blur_rotation,1},
			{propeller2_rotation,0},
			{propeller2_blur_rotation,0},
			{propeller3_rotation,1},
			{propeller3_blur_rotation,1},
			{propeller4_rotation,0},
			{propeller4_blur_rotation,0},
			{propeller5_rotation,1},
			{propeller5_blur_rotation,1},
			{propeller6_rotation,1},
			{propeller6_blur_rotation,1},
			{propeller1_hide,0},
			{propeller1_blur_hide,0},
			{propeller2_hide,0},
			{propeller2_blur_hide,0},
			{propeller3_hide,0},
			{propeller3_blur_hide,0},
			{propeller4_hide,0},
			{propeller4_blur_hide,0},
			{propeller5_hide,0},
			{propeller5_blur_hide,0},
			{propeller6_hide,0},
			{propeller6_blur_hide,0},
			{lights_em_1,3160.6399},
			{lights_em_2,3160.6399},
			{lights_em_1_flash,3160.6399},
			{lights_em_2_flash,3160.6399}
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
		verticalOffset = 0.249;
		verticalOffsetWorld = 0;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_UAV_06_medical_F.jpg";
	displayName = $STR_A3_CfgVehicles_B_UAV_06_medical_F0;
	scope = public;
	side = TWest;
	faction = Atlas_BLU_G_F;
	crew = B_UAV_AI_F;
	typicalCargo[] = {B_UAV_AI_F};
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {B_UAV_06_medical_backpack_F};
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Air_F_Atlas\UAV_06\Data\B_G_UAV_06_medical_CO.paa",
		"\A3_Atlas\Air_F_Atlas\UAV_06\Data\B_G_UAV_06_medical_CO.paa"
	};
	class TextureSources: TextureSources
	{
		class Blufor: Blufor
		{
			textures[] =
			{
				"\A3_Atlas\Air_F_Atlas\UAV_06\Data\B_G_UAV_06_medical_CO.paa",
				"\A3_Atlas\Air_F_Atlas\UAV_06\Data\B_G_UAV_06_medical_CO.paa"
			};
			factions[]= {Atlas_BLU_G_F};
		};
	};
};