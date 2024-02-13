#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Apex
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
	};
	class LSV_02_base_F: Car_F
	{
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret{};
			class CargoTurret_02: CargoTurret_01{};
			class CargoTurret_03: CargoTurret_01{};
			class CargoTurret_04: CargoTurret_01{};
			class CargoTurret_05: CargoTurret_01{};
		};
		/* Liveries */
		class TextureSources
		{
			class WoodlandHex
			{
				displayName = $STR_A3_A_TEXTURESOURCES_WHEX0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\LSV_02\Data\CSAT_LSV_01_WHEX_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\LSV_02\Data\CSAT_LSV_02_WHEX_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\LSV_02\Data\CSAT_LSV_03_WHEX_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"
				};
				factions[] = {};
			};
		};
    };
	class LSV_02_armed_base_F: LSV_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
			class CargoTurret_03: CargoTurret_03{};
			class CargoTurret_04: CargoTurret_04{};
			class CargoTurret_05: CargoTurret_05{};
		};
	};
	class LSV_02_unarmed_base_F;
	class LSV_02_AT_base_F;
	// Arma 3 Atlas
	#include "cfgViper.hpp"				// Viper
	#include "cfgOpfor_Aegis.hpp"       // Belarus
	#include "cfgOpfor_Atlas.hpp"       // Takistani Army
	#include "cfgVenezuela.hpp"  		//Venezuela
    /*
	#include "cfgCDF.hpp"               // CDF
    */
    // Deprecated classes
    #include "deprecated.hpp"
};