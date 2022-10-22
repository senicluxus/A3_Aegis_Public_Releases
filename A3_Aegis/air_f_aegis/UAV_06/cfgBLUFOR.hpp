/* US (Pacific) */
class B_T_UAV_06_F: UAV_06_base_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_UAV_06_F.jpg";
	displayName = $STR_A3_CfgVehicles_B_UAV_06_F0;
	scope = public;
	side = TWest;
	faction = BLU_T_F;
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
	hiddenSelectionsTextures[] = {"\A3_Aegis\Air_F_Aegis\UAV_06\Data\B_T_UAV_06_CO.paa"};
	class TextureSources: TextureSources
	{
		class Blufor: Blufor
		{
			textures[] = {"\A3_Aegis\Air_F_Aegis\UAV_06\Data\B_T_UAV_06_CO.paa"};
			factions[]= {BLU_T_F};
		};
	};
};
class B_T_UAV_06_medical_F: UAV_06_medical_base_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_UAV_06_medical_F.jpg";
	displayName = $STR_A3_CfgVehicles_B_UAV_06_medical_F0;
	scope = public;
	side = TWest;
	faction = BLU_T_F;
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
		"\A3_Aegis\Air_F_Aegis\UAV_06\Data\B_T_UAV_06_medical_CO.paa",
		"\A3_Aegis\Air_F_Aegis\UAV_06\Data\B_T_UAV_06_medical_CO.paa"
	};
	class TextureSources: TextureSources
	{
		class Blufor: Blufor
		{
			textures[] =
			{
				"\A3_Aegis\Air_F_Aegis\UAV_06\Data\B_T_UAV_06_medical_CO.paa",
				"\A3_Aegis\Air_F_Aegis\UAV_06\Data\B_T_UAV_06_medical_CO.paa"
			};
			factions[]= {BLU_T_F};
		};
	};
};
class Box_B_T_UAV_06_F: Box_UAV_06_base_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_B_T_UAV_06_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_Box_B_T_UAV_06_F0;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Air_F_Aegis\UAV_06\Data\B_T_UAV_06_CO.paa"};
};
class Box_B_T_UAV_06_medical_F: Box_UAV_06_medical_base_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Box_B_T_UAV_06_medical_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_Box_B_T_UAV_06_medical_F0;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\UAV_06\Data\B_T_UAV_06_medical_CO.paa",
		"\A3_Aegis\Air_F_Aegis\UAV_06\Data\B_T_UAV_06_medical_CO.paa"
	};
};

/* US (Woodland) */
class B_W_UAV_06_F: UAV_06_base_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_UAV_06_F.jpg";
	displayName = $STR_A3_CfgVehicles_B_UAV_06_F0;
	scope = public;
	side = TWest;
	faction = BLU_W_F;
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
	hiddenSelectionsTextures[] = {"\A3\Air_F_Orange\UAV_06\Data\B_UAV_06_CO.paa"};
};
class B_W_UAV_06_medical_F: UAV_06_medical_base_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_UAV_06_medical_F.jpg";
	displayName = $STR_A3_CfgVehicles_B_UAV_06_medical_F0;
	scope = public;
	side = TWest;
	faction = BLU_W_F;
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
		"\A3\Air_F_Orange\UAV_06\Data\B_UAV_06_medical_CO.paa",
		"\A3\Air_F_Orange\UAV_06\Data\B_UAV_06_medical_CO.paa"
	};
};

/* BAF */
class B_A_UAV_06_F: UAV_06_base_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UAV_06_F.jpg";
	displayName = $STR_A3_CfgVehicles_B_UAV_06_F0;
	scope = public;
	side = TWest;
	faction = BLU_A_F;
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
	hiddenSelectionsTextures[] = {"\A3\Air_F_Orange\UAV_06\Data\B_UAV_06_CO.paa"};
};
class B_A_UAV_06_medical_F: UAV_06_medical_base_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UAV_06_medical_F.jpg";
	displayName = $STR_A3_CfgVehicles_B_UAV_06_medical_F0;
	scope = public;
	side = TWest;
	faction = BLU_A_F;
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
		"\A3\Air_F_Orange\UAV_06\Data\B_UAV_06_medical_CO.paa",
		"\A3\Air_F_Orange\UAV_06\Data\B_UAV_06_medical_CO.paa"
	};
};

/* BAF (Pacific) */
class B_A_UAV_06_tna_F: B_A_UAV_06_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UAV_06_tna_F.jpg";
	faction = BLU_A_tna_F;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Air_F_Aegis\UAV_06\Data\B_T_UAV_06_CO.paa"};
};
class B_A_UAV_06_medical_tna_F: B_A_UAV_06_medical_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UAV_06_medical_tna_F.jpg";
	faction = BLU_A_tna_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\UAV_06\Data\B_T_UAV_06_medical_CO.paa",
		"\A3_Aegis\Air_F_Aegis\UAV_06\Data\B_T_UAV_06_medical_CO.paa"
	};
};

/* BAF (Woodland) */
class B_A_UAV_06_wdl_F: B_A_UAV_06_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UAV_06_wdl_F.jpg";
	faction = BLU_A_wdl_F;
};
class B_A_UAV_06_medical_wdl_F: B_A_UAV_06_medical_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UAV_06_medical_wdl_F.jpg";
	faction = BLU_A_wdl_F;
};