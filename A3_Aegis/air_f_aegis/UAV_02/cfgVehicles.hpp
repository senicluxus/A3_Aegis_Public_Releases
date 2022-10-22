class CfgVehicles
{
    /* Inheritance Tree */
	class UAV;

    /* Bases */
	class UAV_02_base_F: UAV
	{
		class Components;

        /* Liveries */
		class TextureSources
		{
			class Blufor
			{
				factions[] = {};
			};
			class Rus
			{
				displayName = $STR_A3_A_TextureSources_Rus0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Aegis\Air_F_Aegis\UAV_02\Data\UAV_02_RUgrey_CO.paa"};
				factions[] = {};
			};
			class BAF
			{
				displayName = $STR_A3_A_TextureSources_BAF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Aegis\Air_F_Aegis\UAV_02\Data\UAV_02_CO.paa"};
				factions[] = {};
			};
		};
	};
	class UAV_02_dynamicLoadout_base_F: UAV_02_base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				class pylons
				{
					class pylons1;
					class pylons2;
				};
				class presets
				{
					class empty;
					class default;
					class CAS;
				};
			};
		};
	};

	/* Factions */
	#include "cfgBLUFOR.hpp"    // US & BAF
    class O_UAV_02_dynamicLoadout_F: UAV_02_dynamicLoadout_base_F{};
	#include "cfgRUS.hpp"       // Russia
};