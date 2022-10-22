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
				displayName = $STR_A3_A_TEXTURESOURCES_WOODLAND0;
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
		};
	};

    /* Factions */
    #include "cfgGER.hpp"   // Bundeswehr

    /* Deprecated */
    #include "deprecated.hpp"
};