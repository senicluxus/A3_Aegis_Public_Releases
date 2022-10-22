class CfgVehicles
{
	class CamoNet_BLUFOR_F;
	class CamoNet_sand_F: CamoNet_BLUFOR_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.256;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\CamoNet_sand_F.jpg";
		scope = public;
		scopeCurator = private;
		displayName = $STR_A3_A_CfgVehicles_CamoNet_sand_F0;
		editorCategory = EdCat_Structures_Altis;
		faction = BLU_F;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Structures_F_Aegis\Military\Camonets\Data\CamoNet_sand_CA.paa"};
	};
	class CamoNet_sand_open_F: CamoNet_sand_F
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 21.58;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.123;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\CamoNet_sand_open_F.jpg";
		displayName = $STR_A3_A_CfgVehicles_CamoNet_sand_open_F0;
		model = "\A3\Structures_F\Mil\Shelters\CamoNet_open_F.p3d";
	};
	class CamoNet_sand_big_F: CamoNet_sand_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 2.07;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\CamoNet_sand_big_F.jpg";
		displayName = $STR_A3_A_CfgVehicles_CamoNet_sand_big_F0;
		model = "\A3\Structures_F\Mil\Shelters\CamoNet_Big_F.p3d";
		icon = "\A3\Structures_F\Mil\Shelters\Data\UI\Map_CamoNet_Big_CA.paa";
	};
	class CamoNet_East_F: CamoNet_BLUFOR_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.256;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\CamoNet_East_F.jpg";
		scope = public;
		scopeCurator = private;
		displayName = $STR_A3_A_CfgVehicles_CamoNet_East_F0;
		editorCategory = EdCat_Structures_Enoch;
		faction = OPF_R_F;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Structures_F_Aegis\Military\Camonets\Data\CamoNet_East_CA.paa"};
	};
	class CamoNet_East_open_F: CamoNet_East_F
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 21.58;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.123;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\CamoNet_East_open_F.jpg";
		displayName = $STR_A3_A_CfgVehicles_CamoNet_East_open_F0;
		model = "\A3\Structures_F\Mil\Shelters\CamoNet_open_F.p3d";
	};
	class CamoNet_East_big_F: CamoNet_East_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 2.07;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\CamoNet_East_big_F.jpg";
		displayName = $STR_A3_A_CfgVehicles_CamoNet_East_big_F0;
		model = "\A3\Structures_F\Mil\Shelters\CamoNet_Big_F.p3d";
		icon = "\A3\Structures_F\Mil\Shelters\Data\UI\Map_CamoNet_Big_CA.paa";
	};
	class CamoNet_sand_Curator_F: CamoNet_sand_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.256;
			verticalOffsetWorld = 0;
			init = "''";
		};
		scope = protected;
		scopeCurator = public;
		faction = Default;
	};
	class CamoNet_East_Curator_F: CamoNet_East_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.256;
			verticalOffsetWorld = 0;
			init = "''";
		};
		scope = protected;
		scopeCurator = public;
		faction = Default;
	};
	class CamoNet_sand_open_Curator_F: CamoNet_sand_open_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.123;
			verticalOffsetWorld = 0;
			init = "''";
		};
		scope = protected;
		scopeCurator = public;
		faction = Default;
	};
	class CamoNet_East_open_Curator_F: CamoNet_East_open_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.123;
			verticalOffsetWorld = 0;
			init = "''";
		};
		scope = protected;
		scopeCurator = public;
		faction = Default;
	};
	class CamoNet_sand_big_Curator_F: CamoNet_sand_big_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 2.07;
			verticalOffsetWorld = 0;
			init = "''";
		};
		scope = protected;
		scopeCurator = public;
		faction = Default;
	};
	class CamoNet_East_big_Curator_F: CamoNet_East_big_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 2.07;
			verticalOffsetWorld = 0;
			init = "''";
		};
		scope = protected;
		scopeCurator = public;
		faction = Default;
	};
};