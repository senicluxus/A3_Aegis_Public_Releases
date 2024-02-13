class CfgVehicles
{
    /* Inheritance Tree */
	class Helicopter_Base_F;
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};

    /* Bases */
	class UAV_01_base_F: Helicopter_Base_F
	{
        /* Liveries */
		class TextureSources
		{
			class Opfor
			{
				factions[] = {};
			};
			class Blufor
			{
				factions[] = {};
			};
			class ION
			{
				displayName = $STR_A3_A_TextureSources_ION0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Aegis\Air_F_Aegis\UAV_01\Data\UAV_01_ION_CO.paa"};
				factions[] = {};
			};
			class Rus
			{
				displayName = $STR_A3_A_TextureSources_Rus0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Aegis\Air_F_Aegis\UAV_01\Data\UAV_01_RUgrey_CO.paa"};
				factions[] = {};
			};
		};
	};

    /* Factions */
	#include "cfgBLUFOR.hpp"    // US & BAF
	#include "cfgOPFOR.hpp"     // IAF & China
	#include "cfgRUS.hpp"       // Russia
	#include "cfgION.hpp"       // ION
	#include "cfgRaven.hpp"		// Raven
	#include "cfgBluEAF.hpp"	// BLUFOR LDF
};