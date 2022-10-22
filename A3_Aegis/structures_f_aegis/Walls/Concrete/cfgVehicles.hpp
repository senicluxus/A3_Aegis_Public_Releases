class CfgVehicles
{
	class Wall_F;
	class Land_CncBarrier_dam_F: Wall_F
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 2.62;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.385;
			verticalOffsetWorld = 0;
			init = "''";
		};
		//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Land_CncBarrier_dam_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_CncBarrier_dam_F0;
		model = "\A3_Aegis\Structures_F_Aegis\Walls\Concrete\CncBarrier_dam_F.p3d";
		icon = iconObject_7x1;
		editorSubcategory = EdSubcat_Obstacles;
		vehicleClass = Fortifications;
		destrType = DestructNo;
		keepHorizontalPlacement = false;
	};
};