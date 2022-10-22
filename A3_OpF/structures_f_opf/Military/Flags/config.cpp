#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	class FlagCarrier;
	class Flag_ChDKZ_F: FlagCarrier
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] =
			{
				{flag,0}
			};
			hide[] = {};
			verticalOffset = 3.977;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Flag_ChDKZ_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_O_CfgVehicles_Flag_ChDKZ_F0;
		hiddenSelectionsTextures[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"};
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3_Opf\Data_F_Opf\Flags\flag_ChDKZ_CO.paa'";
		};
	};
	class Flag_TKM_F: FlagCarrier
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] =
			{
				{flag,0}
			};
			hide[] = {};
			verticalOffset = 3.977;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Flag_TKM_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_O_CfgVehicles_Flag_TKM_F0;
		hiddenSelectionsTextures[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"};
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3_Opf\Data_F_Opf\Flags\flag_TKM_CO.paa'";
		};
	};
	class Banner_01_base_F;
	class Banner_01_ChDKZ_F: Banner_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.469;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Banner_01_ChDKZ_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_O_CfgVehicles_Banner_01_ChDKZ_F0;
		hiddenSelectionsTextures[] = {"\A3_Opf\Data_F_Opf\Flags\flag_ChDKZ_CO.paa"};
	};
	class Banner_01_TKM_F: Banner_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.469;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Banner_01_TKM_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_O_CfgVehicles_Banner_01_TKM_F0;
		hiddenSelectionsTextures[] = {"\A3_Opf\Data_F_Opf\Flags\flag_TKM_CO.paa"};
	};
};