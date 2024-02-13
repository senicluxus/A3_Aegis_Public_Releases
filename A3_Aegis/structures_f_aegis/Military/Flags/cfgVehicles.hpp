class CfgVehicles
{
	// Arma 3
	class FlagCarrier;
	class FlagCarrier_Asym;
	class Flag_ION_F: FlagCarrier_Asym
	{
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3_Aegis\Data_F_Aegis\Flags\flag_ION_CO.paa'";
		};
	};
	class Flag_US_F: FlagCarrier
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden = 0;
			animate[] = {{"flag",0}};
			hide[] = {};
			verticalOffset = 3.977;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Flag_US_F.jpg";
		_generalMacro = "Flag_US_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgVehicles_Flag_US_F0";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3_Aegis\data_f_aegis\Flags\flag_USA_51_CO.paa'";
		};
	};
	// Arma 3 Enoch
	class Flag_EAF_F: FlagCarrier_Asym
	{
		hiddenSelectionsTextures[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"};
	};
	class Flag_Enoch_F: FlagCarrier{};
	// Arma 3 Aegis
	class Flag_Iran_F: FlagCarrier
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
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Flag_Iran_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Flag_Iran_F0;
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3_Aegis\Data_F_Aegis\Flags\flag_Iran_CO.paa'";
		};
	};
	class Flag_IranArmy_F: FlagCarrier
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
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Flag_IranArmy_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Flag_IranArmy_F0;
		hiddenSelectionsTextures[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"};
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3_Aegis\Data_F_Aegis\Flags\flag_IranArmy_CO.paa'";
		};
	};
	class Flag_RedLion_F: FlagCarrier
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
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Flag_RedLion_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Flag_RedLion_F0;
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3_Aegis\Data_F_Aegis\Flags\flag_rlion_CO.paa'";
		};
	};
	class Flag_USArmy_F: FlagCarrier_Asym
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
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Flag_USArmy_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Flag_USArmy_F0;
		hiddenSelectionsTextures[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"};
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3_Aegis\Data_F_Aegis\Flags\flag_USArmy_CO.paa'";
		};
	};
	class Flag_USNavyJack_F: FlagCarrier_Asym
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
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Flag_USNavyJack_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Flag_USNavyJack_F0;
		hiddenSelectionsTextures[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"};
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3_Aegis\Data_F_Aegis\Flags\flag_USNavyJack_CO.paa'";
		};
	};
	class Flag_TFAegis_F: FlagCarrier_Asym
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
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Flag_TFAegis_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Flag_TFAegis_F0;
		hiddenSelectionsTextures[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"};
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3_Aegis\Data_F_Aegis\Flags\flag_TFAegis_CO.paa'";
		};
	};
	class Flag_China_F: FlagCarrier
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
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Flag_China_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Flag_China_F0;
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3_Aegis\Data_F_Aegis\Flags\flag_China_CO.paa'";
		};
	};
	class Flag_EnochLooters_F: FlagCarrier
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
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Flag_EnochLooters_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Flag_EnochLooters_F0;
		hiddenSelectionsTextures[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"};
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3_Aegis\Data_F_Aegis\Flags\flag_Looters_CO.paa'";
		};
	};
	class Flag_Russia_F: FlagCarrier
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
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Flag_Russia_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Flag_Russia_F0;
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3_Aegis\Data_F_Aegis\Flags\flag_RUS_CO.paa'";
		};
	};
	class Flag_Argana_F: FlagCarrier
	{
		author = $STR_A3_A_Kydoimos;
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
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Flag_Argana_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Flag_Argana_F0;
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3_Aegis\Data_F_Aegis\Flags\flag_Argana_CO.paa'";
		};
	};
	class Flag_Bocano_F: FlagCarrier
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
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Flag_Bocano_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Flag_Bocano_F0;
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3_Aegis\Data_F_Aegis\Flags\flag_Bocano_CO.paa'";
		};
	};
	class Banner_01_base_F;
	class Banner_01_TFAegis_F: Banner_01_base_F
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
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Banner_01_TFAegis_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Banner_01_TFAegis_F0;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Data_F_Aegis\Flags\flag_TFAegis_CO.paa"};
	};
	class Banner_01_Russia_F: Banner_01_base_F
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
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Banner_01_Russia_F.jpg";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_Banner_01_Russia_F0;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Data_F_Aegis\Flags\flag_RUS_CO.paa"};
	};
};