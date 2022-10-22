class CfgVehicles
{
	// Arma 3
    class BagBunker_base_F;
	class Land_BagBunker_Large_F: BagBunker_base_F
	{
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_BagBunker_Large_F.jpg";
		model = "\A3_Aegis\Structures_F_Aegis\Military\Fortifications\BagBunker_Large_F.p3d";
	};
	class Land_BagBunker_Small_F: BagBunker_base_F
	{
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_BagBunker_Small_F.jpg";
		model = "\A3_Aegis\Structures_F_Aegis\Military\Fortifications\BagBunker_Small_F.p3d";
	};
	class Land_BagFence_Corner_F;
	class Land_BagFence_End_F;
	class Land_BagFence_Long_F;
	class Land_BagFence_Round_F;
	class Land_BagFence_Short_F;
	class Land_HBarrierBig_F;
	class Land_HBarrierTower_F;
	class Land_HBarrier_1_F;
	class Land_HBarrier_3_F;
	class Land_HBarrier_5_F;
	class Land_BagBunker_Tower_F: BagBunker_base_F
	{
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_BagBunker_Tower_F.jpg";
		model = "\A3_Aegis\Structures_F_Aegis\Military\Fortifications\BagBunker_Tower_F.p3d";
		hiddenSelections[] =
		{
			camo1,
			camo2,
			camo3
		};
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\CamoNet_BLUFOR_CO.paa",
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\CamoNet_BLUFOR_torn_CO.paa",
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\fort_watchtower_MLOD_CO.paa"
		};
	};
	class Land_HBarrierWall4_F;
	class Land_HBarrierWall6_F;
	class Land_HBarrierWall_corner_F;
	class Land_HBarrierWall_corridor_F;
	// Arma 3 Apex
	class Land_HBarrier_01_tower_green_F: Land_BagBunker_Tower_F
	{
		model = "\A3_Aegis\Structures_F_Aegis\Military\Fortifications\HBarrier_01_tower_green_F.p3d";
		hiddenSelections[] =
		{
			camo1,
			camo2,
			camo3
		};
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\CamoNet_BLUFOR_CO.paa",
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\CamoNet_BLUFOR_torn_CO.paa",
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\fort_watchtower_green_MLOD_CO.paa"
		};
	};
	class Land_BagFence_01_corner_green_F: Land_BagFence_Corner_F
	{
		editorCategory = EdCat_Walls;
	};
	class Land_BagFence_01_end_green_F: Land_BagFence_End_F
	{
		editorCategory = EdCat_Walls;
	};
	class Land_BagFence_01_long_green_F: Land_BagFence_Long_F
	{
		editorCategory = EdCat_Walls;
	};
	class Land_BagFence_01_round_green_F: Land_BagFence_Round_F
	{
		editorCategory = EdCat_Walls;
	};
	class Land_BagFence_01_short_green_F: Land_BagFence_Short_F
	{
		editorCategory = EdCat_Walls;
	};
	class Land_HBarrier_01_big_4_green_F: Land_HBarrierBig_F
	{
		editorCategory = EdCat_Walls;
	};
	class Land_HBarrier_01_line_1_green_F: Land_HBarrier_1_F
	{
		editorCategory = EdCat_Walls;
	};
	class Land_HBarrier_01_line_3_green_F: Land_HBarrier_3_F
	{
		editorCategory = EdCat_Walls;
	};
	class Land_HBarrier_01_line_5_green_F: Land_HBarrier_5_F
	{
		editorCategory = EdCat_Walls;
	};
	class Land_HBarrier_01_big_tower_green_F: Land_HBarrierTower_F
	{
		editorCategory = EdCat_Walls;
	};
	class Land_HBarrier_01_wall_4_green_F: Land_HBarrierWall4_F
	{
		editorCategory = EdCat_Walls;
	};
	class Land_HBarrier_01_wall_6_green_F: Land_HBarrierWall6_F
	{
		editorCategory = EdCat_Walls;
	};
	class Land_HBarrier_01_wall_corner_green_F: Land_HBarrierWall_corner_F
	{
		editorCategory = EdCat_Walls;
	};
	class Land_HBarrier_01_wall_corridor_green_F: Land_HBarrierWall_corridor_F
	{
		editorCategory = EdCat_Walls;
	};
	// Arma 3 Aegis
	class Land_BagBunker_Tower_OPFOR_F: Land_BagBunker_Tower_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 2.21;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_BagBunker_Tower_OPFOR_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_BagBunker_Tower_OPFOR_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3\Structures_F\Mil\Shelters\Data\CamoNet_OPFOR_CO.paa",
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\CamoNet_OPFOR_torn_CO.paa",
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\fort_watchtower_OPFOR_MLOD_CO.paa"
		};
	};
	class Land_BagBunker_Tower_INDP_F: Land_BagBunker_Tower_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 2.21;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_BagBunker_Tower_INDP_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_BagBunker_Tower_INDP_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3\Structures_F\Mil\Shelters\Data\CamoNet_INDP_CO.paa",
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\CamoNet_INDP_torn_CO.paa",
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\fort_watchtower_INDP_MLOD_CO.paa"
		};
	};
	class Land_BagBunker_Tower_sand_F: Land_BagBunker_Tower_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 2.21;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_BagBunker_Tower_sand_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_BagBunker_Tower_sand_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\CamoNet_sand_CO.paa",
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\CamoNet_sand_torn_CO.paa",
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\fort_watchtower_sand_MLOD_CO.paa"
		};
	};
	class Land_HBarrier_01_tower_ghex_F: Land_HBarrier_01_tower_green_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 2.21;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_HBarrier_01_tower_ghex_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_HBarrier_01_tower_ghex_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\CamoNet_ghex_CO.paa",
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\CamoNet_ghex_torn_CO.paa",
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\fort_watchtower_ghex_MLOD_CO.paa"
		};
	};
	class Land_BagBunker_Tower_wdl_F: Land_BagBunker_Tower_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 2.21;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_BagBunker_Tower_wdl_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_BagBunker_Tower_wdl_F0;
		editorCategory = EdCat_Structures_Enoch;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\CamoNet_wdl_CO.paa",
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\CamoNet_wdl_torn_CO.paa",
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\fort_watchtower_wdl_MLOD_CO.paa"
		};
	};
	class Land_BagBunker_Tower_East_F: Land_BagBunker_Tower_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 2.21;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_BagBunker_Tower_East_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_BagBunker_Tower_East_F0;
		editorCategory = EdCat_Structures_Enoch;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\CamoNet_East_CO.paa",
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\CamoNet_East_torn_CO.paa",
			"\A3_Aegis\Structures_F_Aegis\Military\Fortifications\Data\fort_watchtower_East_MLOD_CO.paa"
		};
	};
};