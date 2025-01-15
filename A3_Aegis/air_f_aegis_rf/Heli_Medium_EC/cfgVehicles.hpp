class CfgVehicles
{
    /* Inheritance Tree */
	class Helicopter_Base_H;

    /* RF + Aegis Compatibility */
	class Heli_EC_01_base_RF: Helicopter_Base_H
	{
		class TextureSources
		{
			class AAF
			{	
				factions[] = {};
			};
			class AAF_Olive
			{
				factions[] = {};
			};
			class ION
			{
				factions[] = {};
			};
				class EAF
			{
				factions[] = {};
			};
			class MARINE
			{
				factions[] = {};
			};
			class OLIVE
			{
				factions[] = {};
			};
			class GENDARMERIE
			{
				factions[] = {};
			};
			class IDAP
			{
				factions[] = {"CIV_IDAP_F"};
			};
				class ASTRA
			{
				factions[] = {};
			};
			class TAN
			{
				factions[] = {};
			};
			class UNA
			{
				factions[] = {};
			};
			class PALM
			{
				factions[] = {};
			};
				class YELLOW
			{
				factions[] = {};
			};
			class COASTGUARD
			{
				factions[] = {};
			};
			class MILGRAY
			{
				factions[] = {};
			};
			class CIV_BRWS
			{
				factions[] = {};
			};
			class CIV_OBW
			{
				factions[] = {};
			};
			class CIV_BLUEWHITE
			{
				factions[] = {};
			};
			class CIV_CYANWHITE
			{
				factions[] = {};
			};
			class CIV_TEALWHITE
			{
				factions[] = {};
			};
			class CIV_WHITE
			{
				factions[] = {};
			};
			class CIV_BLACKYELLOW
			{
				factions[] = {};
			};
			class CIV_OGW
			{
				factions[] = {};
			};
			class CIV_GRAYORANGE
			{
				factions[] = {};
			};
			class CAMO_SFIA
			{
				factions[] = {};
			};
			class CAMO_AFRICA
			{
				factions[] = {};
			};
			class CAMO_SNOW
			{
				factions[] = {};
			};
			class CAMO_DESERT
			{
				factions[] = {};
			};
			class CAMO_FRENCH
			{
				factions[] = {};
			};
			class CAMO_HELLENIC
			{
				factions[] = {};
			};
			class CAMO_SWISS
			{
				factions[] = {};
			};
			class CAMO_ROMANIA
			{
				factions[] = {};
			};
			class CIV_BLACK
			{
				factions[] = {};
			};
			class CIV_RED
			{
				factions[] = {};
			};
			class CSAT
			{
				author = $STR_A3_A_Jamie;
				dlc = "rf";
				displayName = $STR_A3_TextureSources_Hex0;
				textures[] = 
				{
					"\A3_Aegis\air_f_aegis_rf\Heli_Medium_EC\Data\as332_exterior_hex_co.paa",
					"\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa",
					"#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')",
					"\A3_Aegis\air_f_aegis_rf\Heli_Medium_EC\Data\as332_adds_hex_CO.paa", 
					"\A3_Aegis\air_f_aegis_rf\Heli_Medium_EC\Data\as332_exterior_hex_co.paa", 
					"\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa"
				};
				materials[] = 
				{
					"\lxrf\air_rf\heli_medium_ec\data\as332_exterior_01.rvmat", 
					"\lxrf\air_rf\heli_medium_ec\data\as332_int_cargo.rvmat"
				};
				factions[] = {};
			};
			class CSAT_Pacific
			{
				author = $STR_A3_A_Jamie;
				dlc = "rf";
				displayName = $STR_A3_TextureSources_GreenHex0;
				textures[] = 
				{
					"\A3_Aegis\air_f_aegis_rf\Heli_Medium_EC\Data\as332_exterior_ghex_co.paa",
					"\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa",
					"#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')",
					"\A3_Aegis\air_f_aegis_rf\Heli_Medium_EC\Data\as332_adds_ghex_CO.paa", 
					"\A3_Aegis\air_f_aegis_rf\Heli_Medium_EC\Data\as332_exterior_ghex_co.paa", 
					"\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa"
				};
				materials[] = 
				{
					"\lxrf\air_rf\heli_medium_ec\data\as332_exterior_01.rvmat", 
					"\lxrf\air_rf\heli_medium_ec\data\as332_int_cargo.rvmat"
				};
				factions[] = {};
			};
			class EAF_arid
			{
				author = $STR_A3_A_BranFlakes;
				displayName = $STR_A3_A_CfgFactionClasses_IND_E_ard_F0;
				textures[] = 
				{
					"\A3_Aegis\Air_F_Aegis_rf\Heli_Medium_EC\Data\as332_exterior_ldf_arid_co.paa",
					"\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa",
					"#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')",
					"\A3_Aegis\Air_F_Aegis_rf\Heli_Medium_EC\Data\as332_adds_ldf_arid_CO.paa",
					"\A3_Aegis\Air_F_Aegis_rf\Heli_Medium_EC\Data\as332_exterior_ldf_arid_co.paa",
					"\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa"
				};
				materials[] = 
				{
					"\lxrf\air_rf\heli_medium_ec\data\as332_exterior_01.rvmat",
					"\lxrf\air_rf\heli_medium_ec\data\as332_int_cargo.rvmat"
				};
				factions[] = {};
			};
		};
		class Turrets;
	};
	class Heli_EC_01_civ_base_RF;
	class Heli_EC_01A_base_RF;
	class Heli_EC_01A_civ_base_RF;
	class Heli_EC_01A_military_base_RF;
	class Heli_EC_02_base_RF: Heli_EC_01_base_RF
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
	};
	class Heli_EC_03_base_RF;
	class Heli_EC_04_base_RF;
	class Heli_EC_04_military_base_RF;

    /* Aegis Factions */
	#include "cfgBLUFOR.hpp"		// US Subfactions
	#include "cfgCivil.hpp"			// Civilian Rework factions
	#include "cfgEAF.hpp"			// LDF BLUFOR + Arid
	#include "cfgSFIA.hpp"			// SFIA
	#include "cfgOPFOR.hpp"			// Arganan CSAT
	#include "cfgIndep.hpp"			// AAF (Turret Magazine Update)

};