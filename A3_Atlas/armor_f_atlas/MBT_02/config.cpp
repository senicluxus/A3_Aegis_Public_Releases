#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets;
			};
		};
	};
	class MBT_02_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
    class O_MBT_02_base_F: MBT_02_base_F
	{
		class TextureSources
		{
			/*
			class CDF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_CDF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Armor_F_Atlas\MBT_02\Data\MBT_02_body_CDF_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\MBT_02\Data\MBT_02_turret_CDF_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\MBT_02\Data\MBT_02_CDF_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\Data\camonet_CDF_Green_CO.paa"
				};
				factions[] = {Atlas_IND_C_F};
			};
			*/
			class WoodlandHex
			{
				displayName = $STR_A3_A_TEXTURESOURCES_WHEX0;
				author = $STR_A3_A_BranFlakes;
				textures[] = 
				{
					"\A3_Atlas\Armor_F_Atlas\MBT_02\Data\MBT_02_Body_WHEX_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\MBT_02\Data\MBT_02_Turret_WHEX_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\MBT_02\Data\MBT_02_WHEX_CO.paa",
					"\A3\Armor_F\Data\camonet_CSAT_Hex_Green_CO.paa"
				};
				faction[] = {};
			};
		};
	};
    class O_MBT_02_cannon_F: O_MBT_02_base_F{};
	// Arma 3 Atlas
    #include "cfgOpfor_Aegis.hpp"       // Belarus
    #include "cfgOpfor_Atlas.hpp"       // Takistani Army
    #include "cfgVenezuela.hpp"			// Venezuela
    /*
	#include "cfgCDF.hpp"               // CDF
    */
    // Deprecated classes
    #include "deprecated.hpp"
};