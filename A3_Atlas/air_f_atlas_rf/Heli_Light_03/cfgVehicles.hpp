class CfgVehicles
{
    /* Inheritance Tree */
	class Heli_light_03_base_F;
    class Heli_light_03_dynamicLoadout_base_F: Heli_Light_03_base_F
	{
		class TextureSources;
	};
    class Heli_light_03_unarmed_base_F: Heli_Light_03_base_F
	{
		class TextureSources;
	};

    /* RF + Aegis Compatibility */
    class B_Heli_Light_03_dynamicLoadout_RF: Heli_Light_03_dynamicLoadout_base_F
    {
        /* Texture Sources */
		class TextureSources: TextureSources
		{
            class Green_FR
			{
				displayName = $STR_A3_A_TEXTURESOURCES_GreenFR0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Air_F_Atlas\Heli_Light_03\Data\Heli_Light_03_base_CO.paa",
                    "\lxRF\air_rf\Heli_Light_03\data\wildcat_addons_green_co.paa"
				};
				factions[] = {};
			};
			class Jagged
			{
				displayName = $STR_A3_A_TEXTURESOURCES_JAGGED0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Air_F_Atlas\Heli_Light_03\Data\Heli_Light_03_base_jagged_CO.paa",
                    "\A3_Atlas\Air_F_Atlas_RF\Heli_Light_03\Data\Heli_Light_03_addons_jagged_CO.paa"
				};
				factions[] = {};
			};
			class KZG
			{
				displayName = $STR_A3_A_CfgFactionClasses_BLU_K_F0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Air_F_Atlas\Heli_Light_03\Data\Heli_Light_03_base_kzg_CO.paa",
                    "\A3_Atlas\Air_F_Atlas_RF\Heli_Light_03\Data\Heli_Light_03_addons_kzg_CO.paa"
				};
				factions[] = {};
			};
        };
    };
    class B_Heli_Light_03_unarmed_RF: Heli_Light_03_unarmed_base_F
    {
        /* Texture Sources */
		class TextureSources: TextureSources
		{
            class Green_FR
			{
				displayName = $STR_A3_A_TEXTURESOURCES_GreenFR0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Air_F_Atlas\Heli_Light_03\Data\Heli_Light_03_base_CO.paa",
                    "\lxRF\air_rf\Heli_Light_03\data\wildcat_addons_green_co.paa"
				};
				factions[] = {};
			};
			class Jagged
			{
				displayName = $STR_A3_A_TEXTURESOURCES_JAGGED0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Air_F_Atlas\Heli_Light_03\Data\Heli_Light_03_base_jagged_CO.paa",
                    "\A3_Atlas\Air_F_Atlas_RF\Heli_Light_03\Data\Heli_Light_03_addons_jagged_CO.paa",
				};
				factions[] = {};
			};
			class KZG
			{
				displayName = $STR_A3_A_TEXTURESOURCES_KZG0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Air_F_Atlas\Heli_Light_03\Data\Heli_Light_03_base_kzg_CO.paa",
                    "\A3_Atlas\Air_F_Atlas_RF\Heli_Light_03\Data\Heli_Light_03_addons_kzg_CO.paa"
				};
				factions[] = {};
			};
        };
    };
    /* Atlas Factions */
    #include "cfgKarzeghistan.hpp"		//Karzeghistan
};