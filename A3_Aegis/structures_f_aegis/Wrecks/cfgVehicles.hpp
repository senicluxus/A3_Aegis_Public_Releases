class CfgVehicles
{
	// Arma 3
	class Wreck_base_F;
	class Land_Wreck_Heli_Attack_01_F: Wreck_base_F
	{
		hiddenSelections[] = {DamT_1};
		hiddenSelectionsTextures[] = {"\A3\Air_F_Beta\Heli_Attack_01\Data\Heli_Attack_01_CO.paa"};
	};
	// Arma 3 Aegis
	class Land_Wreck_datsun01T_F: Wreck_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 7;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.843;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Wreck_datsun01T_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_Wreck_datsun01T_F0;
		model = "\A3_Aegis\Structures_F_Aegis\Wrecks\Wreck_datsun01T_F.p3d";
		icon = iconObject_1x2;
		editorSubcategory = EdSubcat_Cars;
	};
	class Land_Wreck_datsun02T_F: Wreck_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 7;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.843;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Wreck_datsun02T_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_Wreck_datsun02T_F0;
		model = "\A3_Aegis\Structures_F_Aegis\Wrecks\Wreck_datsun02T_F.p3d";
		icon = iconObject_1x2;
		editorSubcategory = EdSubcat_Cars;
	};
	class Land_Wreck_hiluxT_F: Wreck_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 7;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.843;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Wreck_hiluxT_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_Wreck_hiluxT_F0;
		model = "\A3_Aegis\Structures_F_Aegis\Wrecks\Wreck_hiluxT_F.p3d";
		icon = iconObject_1x2;
		editorSubcategory = EdSubcat_Cars;
	};
	class Land_Wreck_Plane_Transport_01_crashed_F: Wreck_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 30.04;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.923;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Wreck_Plane_Transport_01_crashed_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_Wreck_Plane_Transport_01_crashed_F0;
		model = "\A3_Aegis\Structures_F_Aegis\Wrecks\Wreck_Plane_Transport_01_crashed_F.p3d";
		icon = iconObject_1x2;
		editorSubcategory = EdSubcat_Planes;
	};
};