/* Russia */
class O_R_UAV_06_F: UAV_06_base_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_UAV_06_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_O_R_UAV_06_F0;
	scope = public;
	side = TEast;
	faction = OPF_R_F;
	crew = O_UAV_AI;
	typicalCargo[] = {O_UAV_AI};
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {O_R_UAV_06_backpack_F};
	};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Air_F_Aegis\UAV_06\Data\O_R_UAV_06_CO.paa"};
};
class O_R_UAV_06_medical_F: UAV_06_medical_base_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_UAV_06_medical_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_O_R_UAV_06_medical_F0;
	scope = public;
	side = TEast;
	faction = OPF_R_F;
	crew = O_UAV_AI;
	typicalCargo[] = {O_UAV_AI};
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {O_R_UAV_06_medical_backpack_F};
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\UAV_06\Data\O_R_UAV_06_medical_CO.paa",
		"\A3_Aegis\Air_F_Aegis\UAV_06\Data\O_R_UAV_06_medical_CO.paa"
	};
};
class Box_O_R_UAV_06_F: Box_UAV_06_base_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_O_R_UAV_06_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_Box_O_R_UAV_06_F0;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Air_F_Aegis\UAV_06\Data\O_R_UAV_06_CO.paa"};
};
class Box_O_R_UAV_06_medical_F: Box_UAV_06_medical_base_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_O_R_UAV_06_medical_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_Box_O_R_UAV_06_medical_F0;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\UAV_06\Data\O_R_UAV_06_medical_CO.paa",
		"\A3_Aegis\Air_F_Aegis\UAV_06\Data\O_R_UAV_06_medical_CO.paa"
	};
};
class O_R_UAV_06_backpack_F: UAV_06_backpack_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_R_UAV_06_backpack_F0;
	faction = OPF_R_F;
	picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_O_R_UAV_06_backpack_F_CA.paa";
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Supplies_F_Aegis\Bags\Data\UAV_backpack_RUkhk_CO.paa",
		"\A3_Aegis\Air_F_Aegis\UAV_06\Data\O_R_UAV_06_CO.paa"
	};
	class assembleInfo: assembleInfo
	{
		displayName = $STR_A3_A_CfgVehicles_O_R_UAV_06_backpack_F_assembleInfo0;
		assembleTo = O_R_UAV_06_F;
	};
};
class O_R_UAV_06_medical_backpack_F: UAV_06_medical_backpack_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_R_UAV_06_medical_backpack_F0;
	faction = OPF_R_F;
	picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_O_R_UAV_06_medical_backpack_F_CA.paa";
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Supplies_F_Aegis\Bags\Data\UAV_backpack_RUkhk_CO.paa",
		"\A3_Aegis\Air_F_Aegis\UAV_06\Data\O_R_UAV_06_medical_CO.paa"
	};
	class assembleInfo: assembleInfo
	{
		displayName = $STR_A3_A_CfgVehicles_O_R_UAV_06_medical_backpack_F_assembleInfo0;
		assembleTo = O_R_UAV_06_medical_F;
	};
};

/* Russia (Mediterranean) */
class O_R_UAV_06_ard_F: O_R_UAV_06_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_UAV_06_ard_F.jpg";
	faction = OPF_R_ard_F;
};
class O_R_UAV_06_medical_ard_F: O_R_UAV_06_medical_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_UAV_06_medical_ard_F.jpg";
	faction = OPF_R_ard_F;
};