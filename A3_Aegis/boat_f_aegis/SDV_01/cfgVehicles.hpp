class CfgVehicles
{
	/* Inheritance Tree */
	class Boat_F;

    /* Bases */
	class SDV_01_base_F: Boat_F
	{
        /* Liveries */
		class TextureSources
		{
			class Blu
			{
				displayName = $STR_A3_TextureSources_Blu0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3\Boat_F_Beta\SDV_01\Data\SDV_ext_CO.paa"};
				factions[] = {};
			};
			class Opfor
			{
				displayName = $STR_A3_TextureSources_Opfor0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3\Boat_F_Beta\SDV_01\Data\SDV_ext_OPFOR_CO.paa"};
				factions[] = {};
			};
			class Indep
			{
				displayName = $STR_A3_TextureSources_Indep0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3\Boat_F_Beta\SDV_01\Data\SDV_ext_INDP_CO.paa"};
				factions[] = {};
			};
			class Rus
			{
				displayName = $STR_A3_A_TextureSources_Rus0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Aegis\Boat_F_Aegis\SDV_01\Data\SDV_ext_RUgrey_CO.paa"};
				factions[] = {};
			};
		};
	};
    
    /* Factions */
    #include "cfgBLUFOR.hpp"    // US & BAF
    #include "cfgOPFOR.hpp"     // IAF & China
	class I_SDV_01_F: SDV_01_base_F
	{
		textureList[] = {Indep,1};
	};
    #include "cfgRUS.hpp"       // Russia
};