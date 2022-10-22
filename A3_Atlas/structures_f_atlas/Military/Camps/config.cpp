#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
/*
class CfgVehicles
{
	// Arma 3
	class Camping_base_F;
	// Arma 3 Laws of War
	class Land_MedicalTent_01_base_F: Camping_base_F
	{
		class AnimationSources
		{
			class Door_Hide;
			class InnerTent_Hide;
			class OuterTent_Hide;
			class MedSign_Hide;
			class SolarPanel1_Hide;
			class SolarPanel2_Hide;
		};
		class Attributes
		{
			class Door_Hide;
			class MedSign_Hide;
			class SolarPanel1_Hide;
			class SolarPanel2_Hide;
		};
	};
	// Arma 3 Enoch
	class Land_DeconTent_01_base_F;
	class Land_ConnectorTent_01_base_F;
	class Land_ConnectorTent_01_closed_base_F;
	class Land_ConnectorTent_01_cross_base_F;
	// Arma 3 Atlas
	class Land_DeconTent_01_cdf_F: Land_DeconTent_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.364;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Land_DeconTent_01_cdf_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_DeconTent_01_cdf_F0;
		editorCategory = EdCat_Structures_Enoch;
		editorSubcategory = EdSubcat_Military;
		hiddenSelectionsTextures[] = {"\A3_Atlas\Structures_F_Atlas\Military\Camps\Data\MedicalTent_01_CDF_F_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01.rvmat"};
	};
	class Land_ConnectorTent_01_cdf_open_F: Land_ConnectorTent_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.298;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_ConnectorTent_01_cdf_open_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_ConnectorTent_01_cdf_open_F0;
		editorCategory = EdCat_Structures_Enoch;
		editorSubcategory = EdSubcat_Military;
		hiddenSelectionsTextures[] = {"\A3_Atlas\Structures_F_Atlas\Military\Camps\Data\MedicalTent_01_CDF_F_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01.rvmat"};
	};
	class Land_ConnectorTent_01_cdf_closed_F: Land_ConnectorTent_01_closed_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.298;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_ConnectorTent_01_cdf_closed_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_ConnectorTent_01_cdf_closed_F0;
		editorCategory = EdCat_Structures_Enoch;
		editorSubcategory = EdSubcat_Military;
		hiddenSelectionsTextures[] = {"\A3_Atlas\Structures_F_Atlas\Military\Camps\Data\MedicalTent_01_CDF_F_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01.rvmat"};
	};
	class Land_ConnectorTent_01_cdf_cross_F: Land_ConnectorTent_01_cross_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.262;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_ConnectorTent_01_cdf_cross_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_ConnectorTent_01_cdf_cross_F0;
		editorCategory = EdCat_Structures_Enoch;
		editorSubcategory = EdSubcat_Military;
		hiddenSelectionsTextures[] = {"\A3_Atlas\Structures_F_Atlas\Military\Camps\Data\MedicalTent_01_CDF_F_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F_Orange\Humanitarian\Camps\Data\MedicalTent_01.rvmat"};
	};
	class Land_MedicalTent_01_cdf_closed_F: Land_MedicalTent_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] =
			{
				{door1_hide,0},
				{door2_hide,0},
				{windows_hide,0},
				{roof_1_solar_hide,0},
				{roof_1_nosolar_unhide,0},
				{roof_2_solar_hide,0},
				{roof_2_nosolar_unhide,0}
			};
			hide[] = {};
			verticalOffset = 1.375;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_MedicalTent_01_cdf_closed_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_MedicalTent_01_cdf_closed_F0;
		editorCategory = EdCat_Structures_Enoch;
		editorSubcategory = EdSubcat_Military;
		hiddenSelectionsTextures[] = {"\A3_Atlas\Structures_F_Atlas\Military\Camps\Data\MedicalTent_01_CDF_F_CO.paa"};
	};
	class Land_MedicalTent_01_cdf_generic_inner_F: Land_MedicalTent_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] =
			{
				{door1_hide,1},
				{door2_hide,1},
				{windows_hide,1},
				{roof_1_solar_hide,0},
				{roof_1_nosolar_unhide,0},
				{roof_2_solar_hide,0},
				{roof_2_nosolar_unhide,0}
			};
			hide[] = {};
			verticalOffset = 1.375;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_MedicalTent_01_cdf_generic_inner_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_MedicalTent_01_cdf_generic_inner_F0;
		editorCategory = EdCat_Structures_Enoch;
		editorSubcategory = EdSubcat_Military;
		hiddenSelectionsTextures[] = {"\A3_Atlas\Structures_F_Atlas\Military\Camps\Data\MedicalTent_01_CDF_F_CO.paa"};
		attendant = false;
		class AnimationSources: AnimationSources
		{
			class OuterTent_Hide: OuterTent_Hide
			{
				initPhase = true;
			};
			class Door_Hide: Door_Hide
			{
				initPhase = true;
			};
			class MedSign_Hide: MedSign_Hide
			{
				initPhase = true;
			};
		};
		class Attributes: Attributes
		{
			class Door_Hide: Door_Hide
			{
				defaultValue = true;
			};
			class MedSign_Hide: MedSign_Hide
			{
				defaultValue = true;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide{};
			class SolarPanel2_Hide: SolarPanel2_Hide{};
		};
	};
	class Land_MedicalTent_01_cdf_generic_closed_F: Land_MedicalTent_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] =
			{
				{door1_hide,0},
				{door2_hide,0},
				{windows_hide,0},
				{roof_1_solar_hide,1},
				{roof_1_nosolar_unhide,1},
				{roof_2_solar_hide,0},
				{roof_2_nosolar_unhide,0}
			};
			hide[] = {};
			verticalOffset = 1.375;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_MedicalTent_01_cdf_generic_closed_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_MedicalTent_01_cdf_generic_closed_F0;
		editorCategory = EdCat_Structures_Enoch;
		editorSubcategory = EdSubcat_Military;
		hiddenSelectionsTextures[] = {"\A3_Atlas\Structures_F_Atlas\Military\Camps\Data\MedicalTent_01_CDF_F_CO.paa"};
		attendant = false;
		class AnimationSources: AnimationSources
		{
			class MedSign_Hide: MedSign_Hide
			{
				initPhase = true;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				initPhase = true;
			};
		};
		class Attributes: Attributes
		{
			class Door_Hide: Door_Hide{};
			class MedSign_Hide: MedSign_Hide
			{
				defaultValue = true;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				defaultValue = true;
			};
			class SolarPanel2_Hide: SolarPanel2_Hide{};
		};
	};
	class Land_MedicalTent_01_cdf_generic_open_F: Land_MedicalTent_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] =
			{
				{door1_hide,1},
				{door2_hide,1},
				{windows_hide,1},
				{roof_1_solar_hide,1},
				{roof_1_nosolar_unhide,1},
				{roof_2_solar_hide,0},
				{roof_2_nosolar_unhide,0}
			};
			hide[] = {};
			verticalOffset = 1.375;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_MedicalTent_01_cdf_generic_open_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_MedicalTent_01_cdf_generic_open_F0;
		editorCategory = EdCat_Structures_Enoch;
		editorSubcategory = EdSubcat_Military;
		hiddenSelectionsTextures[] = {"\A3_Atlas\Structures_F_Atlas\Military\Camps\Data\MedicalTent_01_CDF_F_CO.paa"};
		attendant = false;
		class AnimationSources: AnimationSources
		{
			class Door_Hide: Door_Hide
			{
				initPhase = true;
			};
			class MedSign_Hide: MedSign_Hide
			{
				initPhase = true;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				initPhase = true;
			};
		};
		class Attributes: Attributes
		{
			class Door_Hide: Door_Hide
			{
				defaultValue = true;
			};
			class MedSign_Hide: MedSign_Hide
			{
				defaultValue = true;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				defaultValue = true;
			};
			class SolarPanel2_Hide: SolarPanel2_Hide{};
		};
	};
	class Land_MedicalTent_01_cdf_generic_outer_F: Land_MedicalTent_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] = 
			{
				{door1_hide,0},
				{door2_hide,0},
				{windows_hide,0},
				{roof_1_solar_hide,1},
				{roof_1_nosolar_unhide,1},
				{roof_2_solar_hide,1},
				{roof_2_nosolar_unhide,1}
			};
			hide[] = {};
			verticalOffset = 1.375;
			verticalOffsetWorld = 0;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_MedicalTent_01_cdf_generic_outer_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Land_MedicalTent_01_cdf_generic_outer_F0;
		editorCategory = EdCat_Structures_Enoch;
		editorSubcategory = EdSubcat_Military;
		hiddenSelectionsTextures[] = {"\A3_Atlas\Structures_F_Atlas\Military\Camps\Data\MedicalTent_01_CDF_F_CO.paa"};
		attendant = false;
		class AnimationSources: AnimationSources
		{
			class InnerTent_Hide: InnerTent_Hide
			{
				initPhase = true;
			};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				initPhase = true;
			};
			class SolarPanel2_Hide: SolarPanel2_Hide
			{
				initPhase = true;
			};
		};
		class Attributes: Attributes
		{
			class Door_Hide: Door_Hide{};
			class MedSign_Hide: MedSign_Hide{};
			class SolarPanel1_Hide: SolarPanel1_Hide
			{
				defaultValue = true;
			};
			class SolarPanel2_Hide: SolarPanel2_Hide
			{
				defaultValue = true;
			};
		};
	};
};
*/