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
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	class APC_Tracked_02_base_F: Tank_F
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
	class O_APC_Tracked_02_base_F: APC_Tracked_02_base_F{};
	class O_APC_Tracked_02_cannon_F: O_APC_Tracked_02_base_F
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
		class TextureSources
		{
            /*
			class CDF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_CDF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\Data\APC_Tracked_02_ext_01_CDF_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\Data\APC_Tracked_02_ext_02_CDF_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\Data\RCWS30_CDF_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\Data\camonet_CDF_green_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\Data\cage_CDF_CO.paa"
				};
				factions[] = {Atlas_IND_C_F};
			};
            */
		};
	};
	class O_APC_Tracked_02_AA_F: O_APC_Tracked_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class TextureSources
		{
            /*
			class CDF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_CDF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\Data\APC_Tracked_02_ext_01_AA_CDF_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\Data\APC_Tracked_02_ext_02_CDF_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\Data\APC_Tracked_01_AA_Tower_CDF_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\Data\camonet_CDF_green_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\Data\cage_CDF_CO.paa"
				};
				factions[] = {Atlas_IND_C_F};
			};
            */
		};
	};
	// Arma 3 Aegis
	class APC_Tracked_02_medical_base_F: APC_Tracked_02_base_F
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
					"\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\Data\APC_Tracked_02_ext_01_medevac_CDF_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\APC_Tracked_02\Data\APC_Tracked_02_ext_02_CDF_CO.paa",
					"",
					"",
					""
				};
				factions[] = {Atlas_IND_C_F};
			};
            */
		};
	};
	// Arma 3 Atlas
	#include "cfgOpfor_Aegis.hpp"		// Belarus
	#include "cfgOpfor_Atlas.hpp"		// Takistani Army
    /*
	#include "cfgCDF.hpp"				// CDF
    */
    // Deprecated classes
    #include "deprecated.hpp"
};