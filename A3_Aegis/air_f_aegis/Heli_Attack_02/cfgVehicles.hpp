class CfgVehicles
{
    /* Inheritance Tree */
    class Helicopter_Base_F;

    /* Bases */
	class Heli_Attack_02_base_F: Helicopter_Base_F
	{
		class Components;

        /* Liveries */
		class TextureSources
		{
			class Black
			{
				factions[] = {};
			};
			class Opfor
			{
				displayName = $STR_A3_TextureSources_Hex0;
				factions[] = {};
			};
			class GreenHex
			{
				displayName = $STR_A3_TextureSources_GreenHex0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Attack_02\Data\Heli_Attack_02_body1_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Attack_02\Data\Heli_Attack_02_body2_ghex_CO.paa"
				};
				factions[] = {};
			};
			class Russian
			{
				displayName = $STR_A3_TEXTURESOURCES_RUSSIANSTAR0;
				author = $STR_A3_A_lilithsspawn;
				textures[] = 
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Attack_02\Data\Heli_Attack_02_body1_RUS_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Attack_02\Data\Heli_Attack_02_body2_RUS_CO.paa"
				};
				faction[] = {};
			};
			class Russian2
			{
				displayName = $STR_A3_TEXTURESOURCES_RUSSIANSTARFLAG0;
				author = $STR_A3_A_lilithsspawn;
				textures[] = 
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Attack_02\Data\Heli_Attack_02_body1_RUS2_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Attack_02\Data\Heli_Attack_02_body2_RUS_CO.paa"
				};
				faction[] = {};
			};
		};
	};
	class Heli_Attack_02_dynamicLoadout_base_F: Heli_Attack_02_base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				class Pylons
				{
					class PylonLeft1;
					class PylonLeft2;
					class PylonRight2;
					class PylonRight1;
				};
				class Presets
				{
					class Empty;
					class Default;
					class AT;
					class HAT;
					class CAS;
				};
			};
		};
	};

    /* Factions */
	#include "cfgOPFOR.hpp"     // IAF, China, & Argana
	#include "cfgRUS.hpp"       // Russia
};