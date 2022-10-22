class CfgVehicles
{
	class ThingX;
	class Land_FoldingTable_F: ThingX
	{
		author = $STR_A3_A_AveryTheKitty;
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_FoldingTable_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_FoldingTable_F0;
		model = "\A3_Aegis\Props_F_Aegis\Civilian\Camps\FoldingTable_F.p3d";
		icon = iconObject_3x1;
		editorCategory = EdCat_Furniture;
		editorSubcategory = EdSubcat_Camping;
		destrType = DestructNo;
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3\Structures_F\Civ\Camping\Data\tablechair_CO.paa"};
	};
	class Land_FoldingTable_white_F: Land_FoldingTable_F
	{
		author = $STR_A3_A_AveryTheKitty;
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_FoldingTable_white_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_FoldingTable_white_F0;
		hiddenSelectionsTextures[] = {"\A3\Props_F_Orange\Humanitarian\Camps\Data\tablechair_white_CO.paa"};
	};
	class Land_SmallTable_F: ThingX
	{
		author = $STR_A3_A_AveryTheKitty;
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_SmallTable_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_SmallTable_F0;
		model = "\A3_Aegis\Props_F_Aegis\Civilian\Camps\SmallTable_F.p3d";
		icon = iconObject_1x2;
		editorCategory = EdCat_Furniture;
		editorSubcategory = EdSubcat_Camping;
		destrType = DestructNo;
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Props_F_Aegis\Civilian\Camps\Data\smalltable_CO.paa"};
	};
};