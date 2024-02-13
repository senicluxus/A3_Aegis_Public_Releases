class CfgVehicles
{
    /* Inheritance Tree */
	class Helicopter_Base_F;
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets;
	};
	class StaticWeapon;
	class Slingload_base_F;

    /* Bases */
	class Heli_Transport_04_base_F: Helicopter_Base_H
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class LoadmasterTurret;
		};
		class AnimationSources;

        /* Liveries */
		class TextureSources
		{
			class Black
			{
				factions[] = {};
			};
			class GreenHex
			{
				displayName = $STR_A3_TextureSources_GreenHex0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_01_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_02_ghex_CO.paa"
				};
				factions[] = {};
			};
			class Russian
			{
				displayName = $STR_A3_TEXTURESOURCES_RUSSIANSTAR0;
				author = $STR_A3_A_lilithsspawn;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_RUS2_01_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_RUS2_02_CO.paa"
				};
				factions[] = {};
			};
			class Russian2
			{
				displayName = $STR_A3_TEXTURESOURCES_RUSSIANSTARFLAG0;
				author = $STR_A3_A_lilithsspawn;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_RUS_01_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_RUS2_02_CO.paa"
				};
				factions[] = {};
			};
		};
	};
	class Pod_Heli_Transport_04_crewed_base_F: StaticWeapon
	{
        /* Liveries */
		class TextureSources
		{
			class Black
			{
				factions[] = {};
			};
			class GreenHex
			{
				displayName = $STR_A3_TextureSources_GreenHex0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_01_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_02_ghex_CO.paa"
				};
				factions[] = {};
			};
			class Russian
			{
				displayName = $STR_A3_TEXTURESOURCES_RUSSIANSTAR0;
				author = $STR_A3_A_lilithsspawn;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_RUS_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_RUS_CO.paa"
				};
				factions[] = {};
			};
			/*class Russian2
			{
				displayName = $STR_A3_TEXTURESOURCES_RUSSIANSTARFLAG0;
				author = $STR_A3_A_lilithsspawn;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_RUS2_01_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_RUS2_02_CO.paa"
				};
				factions[] = {};
			};*/
		};
	};
	class Pod_Heli_Transport_04_base_F: Slingload_base_F
	{
        /* Liveries */
		class TextureSources
		{
			class Black
			{
				factions[] = {};
			};
			class GreenHex
			{
				displayName = $STR_A3_TextureSources_GreenHex0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
				};
				factions[] = {};
			};
			class Russian
			{
				displayName = $STR_A3_TEXTURESOURCES_RUSSIANSTAR0;
				author = $STR_A3_A_lilithsspawn;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_RUS_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_RUS_CO.paa"
				};
				factions[] = {};
			};
		};
	};
	
    /* Factions */
	#include "cfgOPFOR.hpp"     // IAF & China
	#include "cfgRUS.hpp"       // Russia
};