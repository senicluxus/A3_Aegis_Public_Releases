class CfgVehicles
{
	class NonStrategic;
	class Land_IRMaskingCover_01_F: NonStrategic
	{
		hiddenSelectionsMaterials[] = {"\A3_Aegis\Props_F_Aegis\Military\Camps\Data\IRMaskingCover_01_F.rvmat"};
	};
	class Land_IRMaskingCover_02_F: NonStrategic
	{
		hiddenSelectionsMaterials[] = {"\A3_Aegis\Props_F_Aegis\Military\Camps\Data\IRMaskingCover_02_F.rvmat"};
	};
	class Land_CanvasCover_01_F;
	class Land_CanvasCover_02_F;
	class Land_IRMaskingCover_01_alt_F: Land_IRMaskingCover_01_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.836;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_IRMaskingCover_01_alt_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_CfgVehicles_Land_IRMaskingCover_01_F0;
		editorCategory = EdCat_Structures_Altis;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Props_F_Aegis\Military\Camps\Data\IRMaskingCover_01_alt_F_CO.paa"};
	};
	class Land_IRMaskingCover_02_alt_F: Land_IRMaskingCover_02_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.16;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_IRMaskingCover_02_alt_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_CfgVehicles_Land_IRMaskingCover_02_F0;
		editorCategory = EdCat_Structures_Altis;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Props_F_Aegis\Military\Camps\Data\IRMaskingCover_02_alt_F_CO.paa"};
	};
	class Land_CanvasCover_01_green_F: Land_CanvasCover_01_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.836;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_CanvasCover_01_green_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_CfgVehicles_Land_CanvasCover_01_F0;
		editorCategory = EdCat_Structures_Tanoa;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Props_F_Aegis\Military\Camps\Data\CanvasCover_01_green_F_CO.paa"};
	};
	class Land_CanvasCover_02_green_F: Land_CanvasCover_02_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.16;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_CanvasCover_02_green_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_CfgVehicles_Land_CanvasCover_02_F0;
		editorCategory = EdCat_Structures_Tanoa;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Props_F_Aegis\Military\Camps\Data\CanvasCover_02_green_F_CO.paa"};
	};
};