class CfgVehicles
{
	/* Inheritance Tree */
	class Helicopter_Base_H;

    /* Bases */
	class Heli_Transport_02_base_F: Helicopter_Base_H
	{
        /* Liveries */
		class TextureSources
		{
			class Woodland
			{
				displayName = $STR_A3_A_TEXTURESOURCES_BW0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Air_F_Atlas\Heli_Transport_02\Data\Heli_Transport_02_1_CO.paa",
					"\A3_Atlas\Air_F_Atlas\Heli_Transport_02\Data\Heli_Transport_02_2_CO.paa",
					"\A3_Atlas\Air_F_Atlas\Heli_Transport_02\Data\Heli_Transport_02_3_CO.paa",
					"\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
				};
				factions[] = {};
			};
			class Arid
			{
				displayName = $STR_A3_A_TEXTURESOURCES_BWArid0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Air_F_Atlas\Heli_Transport_02\Data\Heli_Transport_02_1_arid_CO.paa",
					"\A3_Atlas\Air_F_Atlas\Heli_Transport_02\Data\Heli_Transport_02_2_arid_CO.paa",
					"\A3_Atlas\Air_F_Atlas\Heli_Transport_02\Data\Heli_Transport_02_3_arid_CO.paa",
					"\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
				};
				factions[] = {};
			};
		};
	};

	/* TOH AW-101*/
	class Aegis_Heli_Transport_02_Heavy_base_F: Helicopter_Base_H
	{
		class TextureSources
		{
			class UNO
			{
				displayName = $STR_A3_A_TEXTURESOURCES_UNO0;
				author = $STR_A3_A_Ravenholme;
				textures[] =
				{
					"\A3_Atlas\Air_F_Atlas\Heli_Transport_02\Data\Heli_Transport_02_ext_01_UN_CO.paa",
					"\A3_Atlas\Air_F_Atlas\Heli_Transport_02\Data\Heli_Transport_02_ext_02_UN_CO.paa",
					"\A3_Atlas\Air_F_Atlas\Heli_Transport_02\Data\Heli_Transport_02_ext_02_UN_CO.paa",
					"lxWS\air_f_lxWS\Data\UN\Heli_Transport_02_int_02_UN_CO.paa"
				};
				factions[] = {};
			};
		};
	};
	class Aegis_Heli_Transport_02_VIP_base_F: Aegis_Heli_Transport_02_Heavy_base_F
	{
		class TextureSources
		{
			class UNO_VIP
			{
				displayName = $STR_A3_A_TEXTURESOURCES_UNO0;
				author = $STR_A3_A_Ravenholme;
				textures[] =
				{
					"\A3_Atlas\Air_F_Atlas\Heli_Transport_02\Data\Heli_Transport_02_ext_01_UN_VIP_CO.paa",
					"\A3_Atlas\Air_F_Atlas\Heli_Transport_02\Data\Heli_Transport_02_ext_02_UN_CO.paa",
					"\A3_Atlas\Air_F_Atlas\Heli_Transport_02\Data\Heli_Transport_02_ext_02_UN_CO",
					"lxWS\air_f_lxWS\Data\UN\Heli_Transport_02_int_02_UN_CO.paa"
				};
				factions[] = {};
			};
		};
	};
    /* Factions */
    #include "cfgGER.hpp"   // Bundeswehr
	#include "cfgUNO.hpp"	// UNO

    /* Deprecated */
    #include "deprecated.hpp"
};