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
			class Blufor
			{
				factions[] += {Atlas_BLU_G_F};
			};
			class Olive
			{
				factions[] += {Atlas_BLU_G_F};
			};
			class Woodland
			{
				displayName = $STR_A3_A_TEXTURESOURCES_WOODLAND0;
				author = $STR_A3_A_wsxcgy;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\MRAP_03\Data\MRAP_03_ext_wdl_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\MRAP_03\Data\Turret_wdl_CO.paa"
				};
				factions[] = {Atlas_BLU_G_F};
			};
			class Desert
			{
				displayName = $STR_A3_A_TEXTURESOURCES_DESERT0;
				author = $STR_A3_A_wsxcgy;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\MRAP_03\Data\MRAP_03_ext_desert_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\MRAP_03\Data\Turret_desert_CO.paa"
				};
				factions[] = {Atlas_BLU_G_ard_F};
			};
			class Jagged
			{
				displayName = $STR_A3_A_TEXTURESOURCES_JAGGED0;
				author = $STR_A3_A_wsxcgy;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\MRAP_03\Data\MRAP_03_ext_jagged_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\MRAP_03\Data\Turret_jagged_CO.paa"
				};
				factions[] = {Atlas_BLU_L_F};
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
				factions[] = {Atlas_BLU_A_F};
			};
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
    // Deprecated classes
    #include "deprecated.hpp"
};