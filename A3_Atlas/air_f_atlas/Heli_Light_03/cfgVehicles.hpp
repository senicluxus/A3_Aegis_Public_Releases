class CfgVehicles
{
	/* Inheritance Tree */
	class Helicopter_Base_F;

    /* Bases */
	class Heli_light_03_base_F: Helicopter_Base_F
	{
        /* Liveries */
		class TextureSources
		{
			class Green_FR
			{
				displayName = $STR_A3_A_TEXTURESOURCES_GreenFR0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Air_F_Atlas\Heli_Light_03\Data\Heli_Light_03_base_CO.paa",
                    "\A3\Supplies_F_Enoch\Ammoboxes\Data\AmmoBox_EAF_CO.paa",
                    "\A3_Atlas\Supplies_F_Atlas\Ammoboxes\Data\AmmoBox_signs_CA.paa"
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
                    "\A3\Supplies_F_Enoch\Ammoboxes\Data\AmmoBox_EAF_CO.paa",
                    "\A3_Atlas\Supplies_F_Atlas\Ammoboxes\Data\AmmoBox_signs_CA.paa"
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
                    "\A3\Supplies_F_Enoch\Ammoboxes\Data\AmmoBox_EAF_CO.paa",
                    "\A3_Atlas\Supplies_F_Atlas\Ammoboxes\Data\AmmoBox_signs_CA.paa"
				};
				factions[] = {};
			};
		};
	};
	class Heli_light_03_dynamicLoadout_base_F: Heli_light_03_base_F{};
	class Heli_light_03_unarmed_base_F: Heli_light_03_base_F{};

    /* Factions */
    #include "cfgLegion.hpp"    // Legionnaires
    #include "cfgKarzeghistan.hpp"	// Karzeghistan
};