class CfgVehicles
{
	/* Inheritance Tree */
    class Helicopter_Base_H;

    /* Bases */
    class Heli_Light_01_base_F: Helicopter_Base_H
	{
        class Components;

        /* Liveries */
		class TextureSources
		{
			class Desert
			{
				displayName = $STR_A3_TEXTURESOURCES_DESERT0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"A3_Atlas\Air_F_Atlas\Heli_Light_01\Data\Heli_Light_01_ext_desert_CO.paa"};
				factions[] = {};
			};
		};
    };
    class Heli_Light_01_unarmed_base_F;
    class Heli_Light_01_armed_base_F: Heli_Light_01_base_F
    {
        /* Liveries */
		class TextureSources: TextureSources
		{
			class Desert: Desert
			{
				textures[] =
                {
                    "\A3_Atlas\Air_F_Atlas\Heli_Light_01\Data\Heli_Light_01_ext_desert_CO.paa",
                    "\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_dot_CA.paa"
                };
			};
		};
    };
    class Heli_Light_01_dynamicLoadout_base_F;
    class Heli_Light_01_recon_base_F;

	/* Factions */
    class B_Heli_Light_01_F;
    class B_Heli_Light_01_dynamicLoadout_F;
	#include "cfgIDF.hpp"   // IDF

    /* Deprecated */
    #include "deprecated.hpp"
};