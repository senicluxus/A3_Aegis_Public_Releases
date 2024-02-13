/* BLUFOR LDF */
class Aegis_B_E_UAV_06_F: UAV_06_base_F
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
	editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\I_E_UAV_06_F.jpg";
	displayName = $STR_A3_CfgVehicles_I_UAV_06_F0;
	scope = public;
    scopeCurator = public;
	side = TWest;
	faction = BLU_EAF_F;
	crew = B_UAV_AI_F;
	typicalCargo[] = {B_UAV_AI_F};
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {Aegis_B_E_UAV_06_backpack_F};
	};
	hiddenSelectionsTextures[] = {"A3\Air_F_Enoch\UAV_06\Data\I_E_UAV_06_CO.paa"};
};
class Aegis_B_E_UAV_06_medical_F: UAV_06_medical_base_F
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
	editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\I_E_UAV_06_medical_F.jpg";
	displayName = $STR_A3_CfgVehicles_I_UAV_06_medical_F0;
	scope = public;
	side = TWest;
	faction = BLU_EAF_F;
	crew = B_UAV_AI_F;
	typicalCargo[] = {B_UAV_AI_F};
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {Aegis_B_E_UAV_06_medical_backpack_F};
	};
	hiddenSelectionsTextures[] =
	{
		"A3\Air_F_Enoch\UAV_06\Data\I_E_UAV_06_CO.paa",
        "A3\Air_F_Enoch\UAV_06\Data\I_E_UAV_06_CO.paa"
	};
};
class Aegis_Box_B_E_UAV_06_F: Box_UAV_06_base_F
{
	author = $STR_A3_A_Ravenholme;
	class SimpleObject
	{
		eden = true;
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.1;
		verticalOffsetWorld = 0;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Box_I_E_UAV_06_F.jpg";
	scope = protected;
	scopeCurator = protected;
	displayName = $STR_A3_C_CfgVehicles_Box_I_E_UAV_06_F0;
	hiddenSelectionsTextures[] = {"A3\Air_F_Enoch\UAV_06\Data\I_E_UAV_06_CO.paa"};
};
class Aegis_Box_B_E_UAV_06_medical_F: Box_UAV_06_medical_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.1;
		verticalOffsetWorld = 0;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Box_I_E_UAV_06_medical_F.jpg";
	scope = protected;
	scopeCurator = protected;
	displayName = $STR_A3_C_CfgVehicles_Box_I_E_UAV_06_medical_F0;
	hiddenSelectionsTextures[] =
	{
		"A3\Air_F_Enoch\UAV_06\Data\I_E_UAV_06_CO.paa",
        "A3\Air_F_Enoch\UAV_06\Data\I_E_UAV_06_CO.paa"
	};
};
class Aegis_B_E_UAV_06_backpack_F: UAV_06_backpack_base_F
{
	author = $STR_A3_A_Ravenholme;
	scope = protected;
	scopeCurator = protected;
	displayName = $STR_A3_C_CfgVehicles_I_E_UAV_06_backpack_F0;
	faction = BLU_EAF_F;
	picture = "\a3\Supplies_F_Enoch\Bags\Data\UI\icon_I_E_UAV_06_backpack_F_ca.paa";
	hiddenSelectionsTextures[] =
	{
		"\A3\Supplies_F_Enoch\Bags\Data\UAV_06_backpack_LDF_co.paa",
        "a3\air_f_enoch\uav_06\data\I_E_UAV_06_CO.paa"
	};
	class assembleInfo: assembleInfo
	{
		displayName = $STR_A3_C_CfgVehicles_I_E_UAV_06_backpack_F0;
		assembleTo = Aegis_B_E_UAV_06_F;
	};
};
class Aegis_B_E_UAV_06_medical_backpack_F: UAV_06_medical_backpack_base_F
{
	author = $STR_A3_A_Ravenholme;
	scope = protected;
	scopeCurator = protected;
	displayName = $STR_A3_C_CfgVehicles_I_E_UAV_06_medical_backpack_F0;
	faction = BLU_EAF_F;
	picture = "\A3\Supplies_F_Enoch\Bags\Data\UI\icon_I_E_UAV_06_backpack_F_ca.paa";
	hiddenSelectionsTextures[] =
	{
		"\A3\Supplies_F_Enoch\Bags\Data\UAV_06_backpack_LDF_co.paa",
        "a3\air_f_enoch\uav_06\data\I_E_UAV_06_CO.paa"
	};
	class assembleInfo: assembleInfo
	{
		displayName = $STR_A3_C_CfgVehicles_I_E_UAV_06_medical_backpack_F0;
		assembleTo = Aegis_B_E_UAV_06_medical_F;
	};
};