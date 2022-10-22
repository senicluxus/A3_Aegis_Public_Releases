class CfgVehicles
{
	/* Inheritance Tree */
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

    /* Bases */
	class MBT_03_base_F: Tank_F
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
			class Sand_01
			{
				displayName = $STR_A3_TEXTURESOURCES_SAND0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext01_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext02_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_rcws_CO.paa",
					"\A3\Armor_f\Data\camonet_CSAT_Stripe_Desert_CO.paa"
				};
				factions[] = {};
			};
			class Olive_01
			{
				displayName = $STR_A3_TEXTURESOURCES_OLIVE0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext01_olive_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext02_olive_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_rcws_olive_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
				};
				factions[] = {};
			};
			class Woodland_01
			{
				displayName = $STR_A3_A_TEXTURESOURCES_WOODLAND0;
				author = $STR_A3_A_wsxcgy;
				textures[] =
				{
					"\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext01_wdl_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext02_wdl_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_rcws_wdl_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
				};
				factions[] = {};
			};
			class Desert_01
			{
				displayName = $STR_A3_A_TEXTURESOURCES_DESERT0;
				author = $STR_A3_A_wsxcgy;
				textures[] =
				{
					"\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext01_desert_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext02_desert_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_rcws_desert_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
				};
				factions[] = {Atlas_BLU_A_F};
			};
			class ADF_01
			{
				displayName = $STR_A3_A_CfgFactionClasses_BLU_A_F1;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext01_ADF_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext02_ADF_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_rcws_ADF_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
				};
				factions[] = {};
			};
		};
	};

	/* Factions */
	#include "cfgGER.hpp"   // Germany
	#include "cfgADF.hpp"	//ADF

    /* Deprecated */
    #include "deprecated.hpp"
};