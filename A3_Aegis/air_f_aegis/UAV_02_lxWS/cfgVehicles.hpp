class CfgVehicles
{
    /* Inheritance Tree */
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Components;
	};
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};

    /* Bases */
	class UAV_02_Base_lxWS: Helicopter_Base_F
	{
        /* Liveries */
		class TextureSources
		{
			class Rus
			{
				displayName = $STR_A3_A_TextureSources_Rus0;
				author = "JustPeachy";
				textures[] = {"\A3_Aegis\air_f_aegis\UAV_02_lxWS\Data\O_R_Gun_Drone_CO.paa"};
				factions[] = {};
			};
			class EAF
			{
				displayName = "LDF";
				author = $STR_A3_A_BranFlakes;
				textures[] = {"\A3_Aegis\air_f_aegis\UAV_02_lxWS\Data\I_E_Gun_Drone_CO.paa"};
				factions[] = {};
			};
		};
	};
	class UAV_02_IED_Base_lxWS: UAV_02_Base_lxWS
	{
		/* Liveries */
		class TextureSources
		{
			class Rus
			{
				displayName = "Separatist";
				author = "JustPeachy";
				textures[] = 
				{
					"\A3_Aegis\air_f_aegis\UAV_02_lxWS\Data\O_R_Gun_Drone_CO.paa",
					"\lxWS\air_1_f_lxWS\Data\Gun_Drone_Adds_FIA_CO.paa"
				};
				factions[] = {};
			};
			class Tura
			{
				factions[] = {};
			};
			class FIA
			{
				factions[] = {};
			};
			class Guerrilla
			{
				displayName = "Guerrilla";
				author = $STR_LXWS_Author;
				textures[] = 
				{
					"\lxWS\air_f_lxWS\Data\Gun_Drone_CO.paa",
					"\lxWS\air_1_f_lxWS\Data\Gun_Drone_Adds_FIA_CO.paa"
				};
				factions[] = {};
			};
			class Rebel
			{
				displayName = "Rebel";
				author = $STR_LXWS_Author;
				textures[] = 
				{
					"\lxWS\air_f_lxWS\Data\O_Gun_Drone_CO.paa",
					"\lxWS\air_1_f_lxWS\Data\Gun_Drone_Adds_FIA_CO.paa"
				};
				factions[] = {};
			};
		};
	};
	class B_UAV_02_lxWS;

    /* Factions */
	#include "cfgBLUFOR.hpp"	// BLUFOR Factions (US, UK, CTRG)
	#include "cfgRUS.hpp"       // Russia
	#include "cfgRaven.hpp"		// Raven Security
	#include "cfgOpfor.hpp"		// CSAT
	#include "cfgEAF.hpp"		// LDF Factions
	#include "cfgSyndikat.hpp"	// Syndikat
};