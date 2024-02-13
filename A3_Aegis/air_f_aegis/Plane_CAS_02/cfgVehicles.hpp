class CfgVehicles
{
    /* Inheritance Tree */
    class Plane;
    class Plane_Base_F: Plane
    {
        class Components;
    };

    /* Bases */
	class Ejection_Seat_Plane_CAS_02_base_F;
	class Plane_CAS_02_base_F: Plane_Base_F
	{
        /* Sensors & Components */
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
                    {
                        /*
                        - Let's equip the To-199 Neophron with passive radar capability
                        - Source: https://en.wikipedia.org/wiki/Yakovlev_Yak-130#Variants
                        */
                    };
				};
			};
		};
        
        /* Liveries */
		class TextureSources
		{
			class Hex
			{
				displayName = $STR_A3_TextureSources_Hex0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_ext01_CO.paa",
					"\A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_ext02_CO.paa"
				};
				factions[] = {};
			};
			class Grey
			{
				displayName = $STR_A3_TextureSources_Grey0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Plane_CAS_02\Data\Fighter02_ext01_grey_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_CAS_02\Data\Fighter02_ext02_grey_CO.paa"
				};
				factions[] = {};
			};
			class RuBlue
			{
				displayName = "Blue (Star)";
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Plane_CAS_02\Data\Fighter02_ext01_rublue_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_CAS_02\Data\Fighter02_ext02_rublue_CO.paa"
				};
				factions[] = {};
			};
			class GreenHex
			{
				displayName = $STR_A3_TextureSources_GreenHex0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Plane_CAS_02\Data\Fighter02_ext01_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_CAS_02\Data\Fighter02_ext02_ghex_CO.paa"
				};
				factions[] = {};
			};
		};

		class EjectionSystem;
	};
	class Plane_CAS_02_dynamicLoadout_base_F: Plane_CAS_02_base_F{};

	/* Factions */
	#include "cfgOPFOR.hpp"     // IAF & China
	#include "cfgRUS.hpp"       // Russia
};