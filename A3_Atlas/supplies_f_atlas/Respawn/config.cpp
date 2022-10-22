#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class B_TacticalPack_sgg;
	class B_TacticalPack_oli;
	// Arma 3 Aegis
	class Land_RallyPoint_01_base_F;
	// Arma 3 Atlas
    /*
	class B_TacticalPack_aucamo;
    */
	class B_H_Respawn_RallyPoint_01_bag_F: B_TacticalPack_oli
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgVehicles_B_H_Respawn_RallyPoint_01_bag_F0;
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
	class Respawn_RallyPoint_01_sgg_F: Land_RallyPoint_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = protected;
		displayName = $STR_A3_A_CfgVehicles_Land_RallyPoint_01_base_F0;
		faction = Interactive_F;
		vehicleCategory = Interactive_F;
		vehicleClass = Respawn;
		respawnType = inf;
		respawnNearbyPlayers = true;
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_rgr_CO.paa"};
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
			dissasembleTo[] = {B_H_Respawn_RallyPoint_01_bag_F};
		};
	};
	class I_I_Respawn_RallyPoint_01_bag_F: B_TacticalPack_sgg
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgVehicles_I_I_Respawn_RallyPoint_01_bag_F0;
		faction = Interactive_F;
		vehicleCategory = Interactive_F;
		vehicleClass = Respawn;
		maximumLoad = 0;
		class assembleInfo
		{
			primary = true;
			base = "";
			assembleTo = Respawn_RallyPoint_01_sgg_F;
			displayName = $STR_A3_A_CfgVehicles_Land_RallyPoint_01_base_F0;
			dissasembleTo[] = {};
		};
	};
};