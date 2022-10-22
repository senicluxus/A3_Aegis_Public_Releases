class CfgVehicles
{
	/* Inheritance Tree */
	class Boat_F;

    /* Bases */
	class Rubber_duck_base_F: Boat_F
	{
        /* Liveries */
		class TextureSources
		{
			class Black
			{
				factions[] = {};
			};
			class Hex
			{
				factions[] = {};
			};
			class Rescue
			{
				factions[] = {};
			};
			class Rus
			{
				displayName = $STR_A3_A_TextureSources_Rus0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Aegis\Boat_F_Aegis\Boat_Transport_01\Data\Boat_Transport_01_RUkhk_CO.paa"};
				factions[] = {};
			};
		};
	};
	class Rescue_duck_base_F;

    /* Factions */
    #include "cfgBLUFOR.hpp"    // US
    #include "cfgRUS.hpp"       // Russia
};