class CfgVehicles
{
	// Arma 3
	class Items_base_F;

	// Arma 3 Aegis
	class Aegis_Land_Portable_Radio_01_base_F: Items_base_F
	{
		icon = "iconObject_2x1";
		editorSubcategory = "EdSubcat_Military";
		hiddenSelections[]=
		{
			Camo
		};
		class EventHandlers;
		model = "A3_Aegis\structures_f_aegis\Military\Equipment\Portable_Radio_01_F.p3d";
	};
	class Aegis_Land_Portable_Radio_01_sand_F: Aegis_Land_Portable_Radio_01_base_F
	{
		author = $STR_A3_A_Grave;
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.164;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\editorpreviews_f_aegis\Data\CfgVehicles\Aegis_Land_Portable_Radio_01_sand_F.jpg";
		_generalMacro = "Aegis_Land_Portable_Radio_01_sand_F";
		scope = public;
		scopeCurator = public;
		displayName = "Rugged Portable Radio (Sand)";
		hiddenSelectionsTextures[]=
		{
			"A3_Aegis\structures_f_aegis\Military\Equipment\data\Portable_Radio_01_sand_CO.paa"
		};
	};
	class Aegis_Land_Portable_Radio_01_olive_F: Aegis_Land_Portable_Radio_01_base_F
	{
		author = $STR_A3_A_Grave;
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.164;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\editorpreviews_f_aegis\Data\CfgVehicles\Aegis_Land_Portable_Radio_01_olive_F.jpg";
		_generalMacro = "Aegis_Land_Portable_Radio_01_olive_F";
		scope = public;
		scopeCurator = public;
		displayName = "Rugged Portable Radio (Olive)";
		hiddenSelectionsTextures[]=
		{
			"A3_Aegis\structures_f_aegis\Military\Equipment\data\Portable_Radio_01_olive_CO.paa"
		};
	};
	class Aegis_Land_Portable_Radio_01_black_F: Aegis_Land_Portable_Radio_01_base_F
	{
		author = $STR_A3_A_Grave;
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.164;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\editorpreviews_f_aegis\Data\CfgVehicles\Aegis_Land_Portable_Radio_01_black_F.jpg";
		_generalMacro = "Aegis_Land_Portable_Radio_01_black_F";
		scope = public;
		scopeCurator = public;
		displayName = "Rugged Portable Radio (Black)";
		hiddenSelectionsTextures[]=
		{
			"A3_Aegis\structures_f_aegis\Military\Equipment\data\Portable_Radio_01_black_CO.paa"
		};
	};
};