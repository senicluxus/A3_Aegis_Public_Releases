#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	class Cemetery_base_F;
	class Land_Grave_mass_F: Cemetery_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 9.72;
		class SimpleObject
		{
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = -0.114;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Land_Grave_mass_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_O_CfgVehicles_Land_Grave_mass_F0;
		model = "\A3_Opf\Structures_F_Opf\Civilian\Dead\Grave_mass_F.p3d";
		icon = iconObject_circle;
        vehicleClass = Dead_bodies;
		editorCategory = EdCat_Structures_Altis;
		keepHorizontalPlacement = false;
		class EventHandlers
		{
			init = "[getPos (_this#0)] call Opf_fnc_flies";
            deleted = "exit Opf_fnc_flies";
		};
	};
};