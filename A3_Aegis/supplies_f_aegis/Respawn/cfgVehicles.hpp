class CfgVehicles
{
	class B_FieldPack_green_F;
	class B_Respawn_Sleeping_bag_F: B_FieldPack_green_F{};

    /* Solar Tents */
	class Land_TentSolar_01_olive_F;
    class B_Carryall_green_F;
	class Respawn_TentSolar_01_olive_F: Land_TentSolar_01_olive_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = protected;
		displayName = "Tent (Solar, Olive)";
		faction = Interactive_F;
		vehicleCategory = Interactive_F;
		vehicleClass = Respawn;
		respawnType = inf;
		respawnNearbyPlayers = true;
		class EventHandlers
		{
			init = "['init', _this] spawn BIS_fnc_respawnBackpack";
			deleted = "['deleted', _this] call BIS_fnc_respawnBackpack";
			disassembled = "['disassembled', _this] call BIS_fnc_respawnBackpack";
		};
		class assembleInfo
		{
			primary = true;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {B_Respawn_TentSolar_01_bag_olive_F};
		};
	};
	class B_Respawn_TentSolar_01_bag_olive_F: B_Carryall_green_F
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = "Camp (Olive Solar Tent)";
		faction = Interactive_F;
		vehicleCategory = Interactive_F;
		vehicleClass = Respawn;
		maximumLoad = 0;
		class assembleInfo
		{
			primary = true;
			base = "";
			assembleTo = Respawn_TentSolar_01_olive_F;
			displayName = "Tent (Solar, Olive)";
			dissasembleTo[] = {};
		};
	};
	class Land_TentSolar_01_sand_F;
    class B_Carryall_cbr;
	class Respawn_TentSolar_01_sand_F: Land_TentSolar_01_sand_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = protected;
		displayName = "Tent (Solar, Sand)";
		faction = Interactive_F;
		vehicleCategory = Interactive_F;
		vehicleClass = Respawn;
		respawnType = inf;
		respawnNearbyPlayers = true;
		class EventHandlers
		{
			init = "['init', _this] spawn BIS_fnc_respawnBackpack";
			deleted = "['deleted', _this] call BIS_fnc_respawnBackpack";
			disassembled = "['disassembled', _this] call BIS_fnc_respawnBackpack";
		};
		class assembleInfo
		{
			primary = true;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {B_Respawn_TentSolar_01_bag_sand_F};
		};
	};
	class B_Respawn_TentSolar_01_bag_sand_F: B_Carryall_cbr
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = "Camp (Sand Solar Tent)";
		faction = Interactive_F;
		vehicleCategory = Interactive_F;
		vehicleClass = Respawn;
		maximumLoad = 0;
		class assembleInfo
		{
			primary = true;
			base = "";
			assembleTo = Respawn_TentSolar_01_sand_F;
			displayName = "Tent (Solar, Sand)";
			dissasembleTo[] = {};
		};
	};

    /* Rally Points */
	class Camping_base_F;
	class Land_RallyPoint_01_base_F: Camping_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 3.07;
		scope = private;
		model = "\A3_Aegis\Supplies_F_Aegis\Respawn\RallyPoint_01_F.p3d";
		destrType = DestructTent;
		cost = 1000;
		attendant = true;
		hiddenSelections[] = {camo};
	};
	class B_TacticalPack_mcamo;
	class Respawn_RallyPoint_01_mtp_F: Land_RallyPoint_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = protected;
		displayName = $STR_A3_A_CfgVehicles_Land_RallyPoint_01_base_F0;
		faction = Interactive_F;
		vehicleCategory = Interactive_F;
		vehicleClass = Respawn;
		respawnType = inf;
		respawnNearbyPlayers = true;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_mcamo_CO.paa"};
		class EventHandlers
		{
			init = "['init', _this] spawn BIS_fnc_respawnBackpack";
			deleted = "['deleted', _this] call BIS_fnc_respawnBackpack";
			disassembled = "['disassembled', _this] call BIS_fnc_respawnBackpack";
		};
		class assembleInfo
		{
			primary = true;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {B_Respawn_RallyPoint_01_bag_F};
		};
	};
	class B_Respawn_RallyPoint_01_bag_F: B_TacticalPack_mcamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgVehicles_B_Respawn_RallyPoint_01_bag_F0;
		faction = Interactive_F;
		vehicleCategory = Interactive_F;
		vehicleClass = Respawn;
		maximumLoad = 0;
		class assembleInfo
		{
			primary = true;
			base = "";
			assembleTo = Respawn_RallyPoint_01_mtp_F;
			displayName = $STR_A3_A_CfgVehicles_Land_RallyPoint_01_base_F0;
			dissasembleTo[] = {};
		};
	};
	class B_TacticalPack_rgr;
	class Respawn_RallyPoint_01_grn_F: Land_RallyPoint_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = protected;
		displayName = $STR_A3_A_CfgVehicles_Land_RallyPoint_01_base_F0;
		faction = Interactive_F;
		vehicleCategory = Interactive_F;
		vehicleClass = Respawn;
		respawnType = inf;
		respawnNearbyPlayers = true;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_rgr_CO.paa"};
		class EventHandlers
		{
			init = "['init', _this] spawn BIS_fnc_respawnBackpack";
			deleted = "['deleted', _this] call BIS_fnc_respawnBackpack";
			disassembled = "['disassembled', _this] call BIS_fnc_respawnBackpack";
		};
		class assembleInfo
		{
			primary = true;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {B_Respawn_RallyPoint_01_bag_grn_F};
		};
	};
	class B_Respawn_RallyPoint_01_bag_grn_F: B_TacticalPack_rgr
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgVehicles_B_Respawn_RallyPoint_01_bag_grn_F0;
		faction = Interactive_F;
		vehicleCategory = Interactive_F;
		vehicleClass = Respawn;
		maximumLoad = 0;
		class assembleInfo
		{
			primary = true;
			base = "";
			assembleTo = Respawn_RallyPoint_01_grn_F;
			displayName = $STR_A3_A_CfgVehicles_Land_RallyPoint_01_base_F0;
			dissasembleTo[] = {};
		};
	};
	class B_TacticalPack_khk;
	class Respawn_RallyPoint_01_khaki_F: Land_RallyPoint_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = protected;
		displayName = $STR_A3_A_CfgVehicles_Land_RallyPoint_01_base_F0;
		faction = Interactive_F;
		vehicleCategory = Interactive_F;
		vehicleClass = Respawn;
		respawnType = inf;
		respawnNearbyPlayers = true;
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_CO.paa"};
		class EventHandlers
		{
			init = "['init', _this] spawn BIS_fnc_respawnBackpack";
			deleted = "['deleted', _this] call BIS_fnc_respawnBackpack";
			disassembled = "['disassembled', _this] call BIS_fnc_respawnBackpack";
		};
		class assembleInfo
		{
			primary = true;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {O_Respawn_RallyPoint_01_bag_F};
		};
	};
	class O_Respawn_RallyPoint_01_bag_F: B_TacticalPack_khk
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgVehicles_O_Respawn_RallyPoint_01_bag_F0;
		faction = Interactive_F;
		vehicleCategory = Interactive_F;
		vehicleClass = Respawn;
		maximumLoad = 0;
		class assembleInfo
		{
			primary = true;
			base = "";
			assembleTo = Respawn_RallyPoint_01_khaki_F;
			displayName = $STR_A3_A_CfgVehicles_Land_RallyPoint_01_base_F0;
			dissasembleTo[] = {};
		};
	};
	class B_TacticalPack_oli;
	class Respawn_RallyPoint_01_olive_F: Land_RallyPoint_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = protected;
		displayName = $STR_A3_A_CfgVehicles_Land_RallyPoint_01_base_F0;
		faction = Interactive_F;
		vehicleCategory = Interactive_F;
		vehicleClass = Respawn;
		respawnType = inf;
		respawnNearbyPlayers = true;
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_oli_CO.paa"};
		class EventHandlers
		{
			init = "['init', _this] spawn BIS_fnc_respawnBackpack";
			deleted = "['deleted', _this] call BIS_fnc_respawnBackpack";
			disassembled = "['disassembled', _this] call BIS_fnc_respawnBackpack";
		};
		class assembleInfo
		{
			primary = true;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {I_Respawn_RallyPoint_01_bag_F};
		};
	};
	class I_Respawn_RallyPoint_01_bag_F: B_TacticalPack_oli
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgVehicles_I_Respawn_RallyPoint_01_bag_F0;
		faction = Interactive_F;
		vehicleCategory = Interactive_F;
		vehicleClass = Respawn;
		maximumLoad = 0;
		class assembleInfo
		{
			primary = true;
			base = "";
			assembleTo = Respawn_RallyPoint_01_olive_F;
			displayName = $STR_A3_A_CfgVehicles_Land_RallyPoint_01_base_F0;
			dissasembleTo[] = {};
		};
	};
	class B_TacticalPack_eaf_F;
	class Respawn_RallyPoint_01_eaf_F: Land_RallyPoint_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = protected;
		displayName = $STR_A3_A_CfgVehicles_Land_RallyPoint_01_base_F0;
		faction = Interactive_F;
		vehicleCategory = Interactive_F;
		vehicleClass = Respawn;
		respawnType = inf;
		respawnNearbyPlayers = true;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_eaf_CO.paa"};
		class EventHandlers
		{
			init = "['init', _this] spawn BIS_fnc_respawnBackpack";
			deleted = "['deleted', _this] call BIS_fnc_respawnBackpack";
			disassembled = "['disassembled', _this] call BIS_fnc_respawnBackpack";
		};
		class assembleInfo
		{
			primary = true;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {I_E_Respawn_RallyPoint_01_bag_F};
		};
	};
	class I_E_Respawn_RallyPoint_01_bag_F: B_TacticalPack_eaf_F
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgVehicles_I_E_Respawn_RallyPoint_01_bag_F0;
		faction = Interactive_F;
		vehicleCategory = Interactive_F;
		vehicleClass = Respawn;
		maximumLoad = 0;
		class assembleInfo
		{
			primary = true;
			base = "";
			assembleTo = Respawn_RallyPoint_01_eaf_F;
			displayName = $STR_A3_A_CfgVehicles_Land_RallyPoint_01_base_F0;
			dissasembleTo[] = {};
		};
	};
	class O_R_Respawn_RallyPoint_01_bag_F: B_TacticalPack_rgr
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgVehicles_O_R_Respawn_RallyPoint_01_bag_F0;
		faction = Interactive_F;
		vehicleCategory = Interactive_F;
		vehicleClass = Respawn;
		maximumLoad = 0;
		class assembleInfo
		{
			primary = true;
			base = "";
			assembleTo = Respawn_RallyPoint_01_grn_F;
			displayName = $STR_A3_A_CfgVehicles_Land_RallyPoint_01_base_F0;
			dissasembleTo[] = {};
		};
	};
};