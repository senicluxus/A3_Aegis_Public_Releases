class CfgVehicles
{
	// Arma 3
    class Items_base_F;
	class Furniture_base_F;
	class Land_HeatPump_F: Furniture_base_F
	{
		scope = public;
		scopeCurator = public;
	};
	class Land_Metal_wooden_rack_F;
	// Arma 3 Aegis
	class Land_Basin_01_F: Furniture_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 0.72;
		class SimpleObject
		{
			eden = true;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.1;
			verticalOffsetWorld = 0;
			init = "''";
		};
		//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Basin_01_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_Basin_01_F0;
		model = "\A3\Structures_F_Enoch\Furniture\Bathroom\Basin_A\Basin_A.p3d";
		icon = iconObject_1x1;
		editorSubcategory = EdSubcat_Utilities;
	};
	class Land_Sink_01_F: Furniture_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 0.7;
		class SimpleObject
		{
			eden = true;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.1;
			verticalOffsetWorld = 0;
			init = "''";
		};
		//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Sink_01_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_Sink_01_F0;
		model = "\A3\Structures_F_Enoch\Furniture\Bathroom\Sink\Sink.p3d";
		icon = iconObject_1x1;
		editorSubcategory = EdSubcat_Utilities;
	};
	class Land_Toilet_01_F: Furniture_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 0.74;
		class SimpleObject
		{
			eden = true;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.1;
			verticalOffsetWorld = 0;
			init = "''";
		};
		//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Toilet_01_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_Toilet_01_F0;
		model = "\A3\Structures_F_Enoch\Furniture\Bathroom\Toilet_B_02\Toilet_B_02.p3d";
		icon = iconObject_1x1;
		editorSubcategory = EdSubcat_Utilities;
	};
	class Land_Locker_01_closed_F: Items_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 0.72;
		class SimpleObject
		{
			eden = true;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.518;
			verticalOffsetWorld = 0;
			init = "''";
		};
		//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Locker_01_closed_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_Locker_01_closed_F0;
		model = "\A3\Structures_F_Enoch\Furniture\Cases\Locker\locker_closed_v1.p3d";
		icon = iconObject_1x1;
		editorSubcategory = EdSubcat_Storage;
		maximumLoad = 50;
		transportMaxMagazines = 3;
	};
	class Land_Locker_01_closed_blue_F: Land_Locker_01_closed_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = true;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.518;
			verticalOffsetWorld = 0;
			init = "''";
		};
		//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Locker_01_closed_blue_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_locker_closed_blue_v10;
		model = "\A3\Structures_F_Enoch\Furniture\Cases\Locker\locker_closed_blue_v1.p3d";
	};
	class Land_Locker_01_open_F: Items_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = true;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.518;
			verticalOffsetWorld = 0;
			init = "''";
		};
		//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Locker_01_open_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_Locker_01_open_F0;
		model = "\A3\Structures_F_Enoch\Furniture\Cases\Locker\locker_open_v2.p3d";
		icon = iconObject_1x1;
		editorSubcategory = EdSubcat_Storage;
	};
	class Land_Locker_01_open_blue_F: Land_Locker_01_open_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = true;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.518;
			verticalOffsetWorld = 0;
			init = "''";
		};
		//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Locker_01_open_blue_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_Locker_01_open_blue_F0;
		model = "\A3\Structures_F_Enoch\Furniture\Cases\Locker\locker_open_blue_v2.p3d";
	};
	class Land_Workbench_02_F: Furniture_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 2.62;
		class SimpleObject
		{
			eden = true;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.497;
			verticalOffsetWorld = 0;
			init = "''";
		};
		//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Workbench_02_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_Workbench_02_F0;
		model = "\A3\Structures_F_Enoch\Furniture\Various\Workbench.p3d";
		icon = iconObject_3x1;
		editorSubcategory = EdSubcat_ConstructionSites;
	};
	class Land_Metal_wooden_table_F: Furniture_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 2.62;
		class SimpleObject
		{
			eden = true;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.497;
			verticalOffsetWorld = 0;
			init = "''";
		};
		//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Metal_wooden_table_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_Metal_wooden_table_F0;
		model = "\A3_Aegis\Structures_F_Aegis\Furniture\Metal_wooden_table_F.p3d";
		icon = iconObject_3x1;
		editorSubcategory = EdSubcat_Shops;
	};
	class Land_Folding_ladder_big_F: Items_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 1.18;
		class SimpleObject
		{
			eden = true;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.518;
			verticalOffsetWorld = 0;
			init = "''";
		};
		//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Folding_ladder_big_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_Folding_ladder_big_F0;
		model = "\A3_Aegis\Structures_F_Aegis\Furniture\Folding_ladder_big_F.p3d";
		icon = iconObject_1x1;
		editorSubcategory = EdSubcat_ConstructionSites;
	};
	class Land_Lab_beaker_F: Items_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 0.06;
		class SimpleObject
		{
			eden = true;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.1;
			verticalOffsetWorld = 0;
			init = "''";
		};
		//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Lab_beaker_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_Lab_beaker_F0;
		model = "\A3\Structures_F_Enoch\Furniture\School_Equipment\lab_beaker.p3d";
		icon = iconObject_circle;
		editorSubcategory = EdSubcat_Laboratory;
	};
	class Land_Lab_bunsen_F: Items_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 0.08;
		class SimpleObject
		{
			eden = true;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.1;
			verticalOffsetWorld = 0;
			init = "''";
		};
		//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Lab_bunsen_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_Lab_bunsen_F0;
		model = "\A3\Structures_F_Enoch\Furniture\School_Equipment\lab_bunsen.p3d";
		icon = iconObject_circle;
		editorSubcategory = EdSubcat_Laboratory;
	};
	class Land_Lab_cylinder_beaker_F: Items_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 0.06;
		class SimpleObject
		{
			eden = true;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.1;
			verticalOffsetWorld = 0;
			init = "''";
		};
		//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Lab_cylinder_beaker_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_Lab_cylinder_beaker_F0;
		model = "\A3\Structures_F_Enoch\Furniture\School_Equipment\lab_cylinder_beaker.p3d";
		icon = iconObject_circle;
		editorSubcategory = EdSubcat_Laboratory;
	};
	class Land_Lab_dropper_F: Items_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 0.06;
		class SimpleObject
		{
			eden = true;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.1;
			verticalOffsetWorld = 0;
			init = "''";
		};
		//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Lab_dropper_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_Lab_dropper_F0;
		model = "\A3\Structures_F_Enoch\Furniture\School_Equipment\lab_dropper.p3d";
		icon = iconObject_1x1;
		editorSubcategory = EdSubcat_Laboratory;
	};
	class Land_Lab_erlenmeyer_flask_F: Items_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 0.06;
		class SimpleObject
		{
			eden = true;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.1;
			verticalOffsetWorld = 0;
			init = "''";
		};
		//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Lab_erlenmeyer_flask_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_Lab_erlenmeyer_flask_F0;
		model = "\A3\Structures_F_Enoch\Furniture\School_Equipment\lab_erlenmeyer_flask.p3d";
		icon = iconObject_circle;
		editorSubcategory = EdSubcat_Laboratory;
	};
	class Land_Lab_microscope_F: Items_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 0.1;
		class SimpleObject
		{
			eden = true;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.1;
			verticalOffsetWorld = 0;
			init = "''";
		};
		//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Lab_microscope_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_Lab_microscope_F0;
		model = "\A3\Structures_F_Enoch\Furniture\School_Equipment\lab_microscope.p3d";
		icon = iconObject_1x1;
		editorSubcategory = EdSubcat_Laboratory;
	};
	class Land_Lab_petri_dish_F: Items_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 0.1;
		class SimpleObject
		{
			eden = true;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.1;
			verticalOffsetWorld = 0;
			init = "''";
		};
		//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Lab_microscope_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_Lab_petri_dish_F0;
		model = "\A3\Structures_F_Enoch\Furniture\School_Equipment\lab_petri_dish.p3d";
		icon = iconObject_circle;
		editorSubcategory = EdSubcat_Laboratory;
	};
	class Land_Lab_bench_F: Furniture_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 2.62;
		class SimpleObject
		{
			eden = true;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.497;
			verticalOffsetWorld = 0;
			init = "''";
		};
		//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Lab_bench_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_Lab_bench_F0;
		model = "\A3\Structures_F_Enoch\Furniture\School_Equipment\lab_teacher_bench.p3d";
		icon = iconObject_3x1;
		editorSubcategory = EdSubcat_Laboratory;
	};
	class Land_Lab_triplebeam_F: Items_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 0.1;
		class SimpleObject
		{
			eden = true;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.1;
			verticalOffsetWorld = 0;
			init = "''";
		};
		//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Lab_triplebeam_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_Lab_triplebeam_F0;
		model = "\A3\Structures_F_Enoch\Furniture\School_Equipment\lab_triplebeam.p3d";
		icon = iconObject_1x3;
		editorSubcategory = EdSubcat_Laboratory;
	};
	class Land_Lab_vial_F: Items_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 0.1;
		class SimpleObject
		{
			eden = true;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.1;
			verticalOffsetWorld = 0;
			init = "''";
		};
		//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Lab_vial_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_Lab_vial_F0;
		model = "\A3\Structures_F_Enoch\Furniture\School_Equipment\lab_vial.p3d";
		icon = iconObject_circle;
		editorSubcategory = EdSubcat_Laboratory;
	};
	class Land_Lab_volume_beaker_F: Items_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 0.1;
		class SimpleObject
		{
			eden = true;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.1;
			verticalOffsetWorld = 0;
			init = "''";
		};
		//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_Lab_volume_beaker_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_Lab_volume_beaker_F0;
		model = "\A3\Structures_F_Enoch\Furniture\School_Equipment\lab_volume_beaker.p3d";
		icon = iconObject_circle;
		editorSubcategory = EdSubcat_Laboratory;
	};
};