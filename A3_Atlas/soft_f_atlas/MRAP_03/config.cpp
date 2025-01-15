#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
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
	class MRAP_03_base_F: Car_F
	{
		class Turrets: Turrets
		{
			class CommanderTurret: MainTurret{};
		};
		class TextureSources
		{
			class Woodland
			{
				displayName = $STR_A3_A_TEXTURESOURCES_BW0;
				author = $STR_A3_A_wsxcgy;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\MRAP_03\Data\MRAP_03_ext_wdl_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\MRAP_03\Data\Turret_wdl_CO.paa"
				};
				factions[] = {};
			};
			class Desert
			{
				displayName = $STR_A3_A_TEXTURESOURCES_BWarid0;
				author = $STR_A3_A_wsxcgy;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\MRAP_03\Data\MRAP_03_ext_desert_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\MRAP_03\Data\Turret_desert_CO.paa"
				};
				factions[] = {};
			};
			class Jagged
			{
				displayName = $STR_A3_A_TEXTURESOURCES_GreenFR0;
				author = $STR_A3_A_wsxcgy;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\MRAP_03\Data\MRAP_03_ext_jagged_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\MRAP_03\Data\Turret_jagged_CO.paa"
				};
				factions[] = {};
			};
			class ADF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ADF0;
				author = $STR_A3_A_wsxcgy;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\MRAP_03\Data\MRAP_03_ext_aus_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\MRAP_03\Data\Turret_aus_CO.paa"
				};
				factions[] = {};
			};
			/*class Ardistan
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ardi0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\MRAP_03\Data\MRAP_03_ext_ardi_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\MRAP_03\Data\Turret_ardi_CO.paa"
				};
				factions[] = {};
			};*/
		};
	};
	class MRAP_03_hmg_base_F: MRAP_03_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
			class CommanderTurret: CommanderTurret{};
		};
	};
	class MRAP_03_gmg_base_F;
	// Arma 3 Atlas
	#include "cfgLegion.hpp"            // Legionnaires
	#include "cfgBlufor_Atlas.hpp"      // Bundeswehr
	#include "cfgADF.hpp"				//ADF
	//#include "cfgArdistan.hpp"			//Ardistan
    // Deprecated classes
    #include "deprecated.hpp"
};