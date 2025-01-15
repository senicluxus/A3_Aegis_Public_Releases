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
        faction = BLU_A_F;
	    crew = B_A_Helipilot_F;
		textureList[] = {BAF,1};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Air_F_Aegis\Heli_Light_03\Data\Heli_Light_03_base_BAF_CO.paa",
			"\A3_Aegis\Air_F_Aegis_RF\Heli_Light_03\Data\Heli_Light_03_addons_BAF_CO.paa"
		};

        /* Inventory */
	    class TransportMagazines
	    {
		    mag_xx(SmokeShell,2);
		    mag_xx(SmokeShellBlue,2);
		    mag_xx(30Rnd_65x39_caseless_mag,4);
	    };
	    class TransportWeapons
	    {
		    weap_xx(arifle_SA80_C_snd_F,2);
	    };
		/* Texture Sources */
		class TextureSources: TextureSources
		{
			class NAVY
			{
				factions[] = {};
			};
			class NAVY_CAMO
			{
				factions[] = {};
			};
			class Green
			{
				factions[] = {};
			};
			class Indep
			{
				factions[] = {};
			};
			class EAF
			{
				factions[] = {};
			};
			class Olive
			{
				factions[] = {};
			};
			class Tan
			{
				factions[] = {};
			};
			class BAF
			{
				displayName = $STR_A3_A_TextureSources_BAF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Light_03\Data\Heli_Light_03_base_BAF_CO.paa",
					"\A3_Aegis\Air_F_Aegis_RF\Heli_Light_03\Data\Heli_Light_03_addons_BAF_CO.paa"
				};
				factions[] = {};
			};
			class EAF_arid
			{
				displayName = $STR_A3_A_CfgFactionClasses_IND_E_ard_F0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Light_03\Data\Heli_Light_03_base_eaf_arid_co.paa",
					"\A3_Aegis\Air_F_Aegis_RF\Heli_Light_03\Data\Heli_Light_03_addons_ldf_arid_CO.paa"
				};
				factions[] = {};
			};
			class Grey
			{
				displayName = $STR_A3_TextureSources_Grey0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Light_03\Data\Heli_Light_03_base_grey_CO.paa",
					"\A3_Aegis\Air_F_Aegis_RF\Heli_Light_03\Data\Heli_Light_03_addons_grey_CO.paa"
				};
				factions[] = {};
			};
		};
    };
    class B_Heli_Light_03_unarmed_RF: Heli_Light_03_unarmed_base_F
    {
        faction = BLU_A_F;
	    crew = B_A_Helipilot_F;
		textureList[] = {BAF,1};
		hiddenSelectionsTextures[] = 
		{
			"\A3_Aegis\Air_F_Aegis\Heli_Light_03\Data\Heli_Light_03_base_BAF_CO.paa",
			"\A3_Aegis\Air_F_Aegis_RF\Heli_Light_03\Data\Heli_Light_03_addons_BAF_CO.paa"
		};

        /* Inventory */
	    class TransportMagazines
	    {
		    mag_xx(SmokeShell,2);
		    mag_xx(SmokeShellBlue,2);
		    mag_xx(30Rnd_65x39_caseless_mag,4);
	    };
	    class TransportWeapons
	    {
		    weap_xx(arifle_SA80_C_snd_F,2);
	    };

		/* Texture Sources */
		class TextureSources: TextureSources
		{
			class NAVY
			{
				factions[] = {};
			};
			class NAVY_CAMO
			{
				factions[] = {};
			};
			class Green
			{
				factions[] = {};
			};
			class Indep
			{
				factions[] = {};
			};
			class EAF
			{
				factions[] = {};
			};
			class Olive
			{
				factions[] = {};
			};
			class Tan
			{
				factions[] = {};
			};
			class BAF
			{
				displayName = $STR_A3_A_TextureSources_BAF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Light_03\Data\Heli_Light_03_base_BAF_CO.paa",
					"\A3_Aegis\Air_F_Aegis_RF\Heli_Light_03\Data\Heli_Light_03_addons_BAF_CO.paa"
				};
				factions[] = {};
			};
			class Grey
			{
				displayName = $STR_A3_TextureSources_Grey0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Light_03\Data\Heli_Light_03_base_grey_CO.paa",
					"\A3_Aegis\Air_F_Aegis_RF\Heli_Light_03\Data\Heli_Light_03_addons_grey_CO.paa"
				};
				factions[] = {};
			};
			class EAF_arid
			{
				displayName = $STR_A3_A_CfgFactionClasses_IND_E_ard_F0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Light_03\Data\Heli_Light_03_base_eaf_arid_co.paa",
					"\A3_Aegis\Air_F_Aegis_RF\Heli_Light_03\Data\Heli_Light_03_addons_ldf_arid_CO.paa"
				};
				factions[] = {};
			};
		};
    };

    /* Aegis Factions */
    #include "cfgBLUFOR.hpp"    // BAF Subfactions
	#include "cfgEAF.hpp"		// BLUFOR LDF and Arid LDF
};