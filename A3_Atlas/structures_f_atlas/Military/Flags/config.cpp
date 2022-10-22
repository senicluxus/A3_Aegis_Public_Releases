#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	class FlagCarrier;
	class FlagCarrier_Asym;
	class Flag_Belarus_F: FlagCarrier
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
		editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Flag_Belarus_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Flag_Belarus_F0;
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3_Atlas\Data_F_Atlas\Flags\flag_Belarus_CO.paa'";
		};
	};
	class Flag_CZ_F: FlagCarrier
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
		editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Flag_CZ_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = "Flag (Czech Republic)";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3_Atlas\Data_F_Atlas\Flags\flag_CZ_CO.paa'";
		};
	};
	class Flag_EU_F: FlagCarrier
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
		//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Flag_EU_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = "Flag (European Union)";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3_Atlas\Data_F_Atlas\Flags\flag_EU_CO.paa'";
		};
	};
	class Flag_France_F: FlagCarrier
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
		editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Flag_France_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = "Flag (France)";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3_Atlas\Data_F_Atlas\Flags\flag_France_CO.paa'";
		};
	};
	class Flag_Germany_F: FlagCarrier
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
		editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Flag_Germany_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Flag_Germany_F0;
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3_Atlas\Data_F_Atlas\Flags\flag_Germany_CO.paa'";
		};
	};
	class Flag_Takistan_F: FlagCarrier
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
		editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Flag_Takistan_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = "Flag (Takistan)";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3_Atlas\Data_F_Atlas\Flags\flag_Takistan_CO.paa'";
		};
	};
	class Flag_Australia_F: FlagCarrier
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
		editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Flag_Australia_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = "Flag (Australia)";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3_Atlas\Data_F_Atlas\Flags\flag_Australia_CO.paa'";
		};
	};
	class Flag_CDF_F: FlagCarrier
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
		editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Flag_CDF_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = "Flag (CDF)";
		hiddenSelectionsTextures[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"};
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3_Atlas\Data_F_Atlas\Flags\flag_CDF_CO.paa'";
		};
	};
	class Flag_Chernarus_F: FlagCarrier
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
		editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Flag_Chernarus_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = "Flag (Chernarus)";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3_Atlas\Data_F_Atlas\Flags\flag_Chernarus_CO.paa'";
		};
	};
	class Flag_IDF_F: FlagCarrier_Asym
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
		editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Flag_IDF_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Flag_IDF_F0;
		hiddenSelectionsTextures[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"};
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3_Atlas\Data_F_Atlas\Flags\flag_IDF_CO.paa'";
		};
	};
	class Flag_Israel_F: FlagCarrier
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
		editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Flag_Israel_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Flag_Israel_F0;
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3_Atlas\Data_F_Atlas\Flags\flag_Israel_CO.paa'";
		};
	};
	class Flag_Sahrani_F: FlagCarrier
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
		//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Flag_Sahrani_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Flag_Sahrani_F0;
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3_Atlas\Data_F_Atlas\Flags\flag_Sahrani_CO.paa'";
		};
	};
	class Banner_01_base_F;
	class Banner_01_CDF_F: Banner_01_base_F
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
		editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Banner_01_CDF_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = "Banner (CDF)";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Data_F_Atlas\Flags\flag_CDF_CO.paa"};
	};
	class Banner_01_IDF_F: Banner_01_base_F
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
		editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Banner_01_IDF_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = "Banner (IDF)";
		hiddenSelectionsTextures[] = {"\A3_Atlas\Data_F_Atlas\Flags\flag_IDF_CO.paa"};
	};
};