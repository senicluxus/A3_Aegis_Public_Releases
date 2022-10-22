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
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
	};
	class UGV_01_base_F: Car_F
	{
		class TextureSources
		{
			class Brown
			{
				DisplayName = $STR_A3_TEXTURESOURCES_BROWN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\UGV_01\Data\UGV_01_ext_brown_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\UGV_01\Data\UGV_01_int_brown_CO.paa",
					"\A3_Atlas\Data_F_Atlas\Vehicles\Turret_brown_CO.paa"
				};
				factions[] = {Atlas_IND_I_F};
			};
		};
	};
	class UGV_01_rcws_base_F: UGV_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: NewTurret{};
			class CargoTurret_01;
		};
	};
	// Arma 3 Aegis
	class UGV_01_medical_base_F: UGV_01_base_F
	{
		class TextureSources: TextureSources
		{
			class Brown: Brown
			{
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\UGV_01\Data\UGV_01_ext_medevac_brown_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\UGV_01\Data\UGV_01_int_brown_CO.paa",
					"\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
				};
			};
		};
	};
	// Arma 3 Atlas
	#include "cfgLegion.hpp"            // Legionnaires
	#include "cfgBlufor_Atlas.hpp"      // Germany
    /*
	#include "cfgADF.hpp"               // ADF
	#include "cfgCDF.hpp"               // CDF
    */
	#include "cfgIDF.hpp"               // IDF
    // Deprecated classes
    #include "deprecated.hpp"
};