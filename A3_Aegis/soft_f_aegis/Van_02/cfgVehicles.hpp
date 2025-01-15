class CfgVehicles
{
	/* Bases */
	class Truck_F;
	class Van_02_base_F: Truck_F
	{
		class TextureSources;
	};
	class Van_02_transport_base_F: Van_02_Base_F
	{
		class TextureSources: TextureSources
		{
			class LDF_Arid
			{
				displayName = $STR_A3_A_CfgFactionClasses_IND_E_ard_F0;
				author = $STR_A3_A_Grave;
				textures[] = 
				{
					"A3_Aegis\soft_f_aegis\Van_02\Data\van_02_body_EAF_arid_CO.paa",
					"a3\Soft_F_enoch\Van_02\Data\van_wheel_ldf_MP_CO.paa",
					"a3\soft_f_enoch\van_02\data\van_glass_MP_CA.paa",
					"A3_Aegis\soft_f_aegis\Van_02\Data\van_02_body_EAF_arid_CO.paa",
				};
				materials[] = 
				{
					"\a3\Soft_F_Orange\Van_02\Data\van_body_dirty.rvmat",
					"\A3\Soft_F_Orange\Van_02\Data\van_wheel_dirty.rvmat",
					"",
					"",
					"\a3\Data_f\Lights\Car_Beacon_Blue_emit.rvmat"
				};
				factions[] = {};
			};
			class Malden_Bus
			{
				displayName = $STR_A3_A_TextureSources_MaldenBus0;
				author = $STR_A3_A_BranFlakes;
				textures[] = 
				{
        			"A3_Aegis\soft_f_aegis\Van_02\Data\van_body_malden_bus_co.paa",
        			"\A3\Soft_F_Orange\Van_02\Data\van_wheel_transport_CO.paa",
        			"\A3\Soft_F_Orange\Van_02\Data\van_glass_transport_CA.paa",
        			"A3_Aegis\soft_f_aegis\Van_02\Data\van_body_malden_bus_co.paa"
   				};
				factions[] = {};
			};
		};
	};
	class Van_02_medevac_base_F: Van_02_base_F
	{
		class TextureSources: TextureSources
		{
			class Argana_Ambulance
			{
				displayName = $STR_A3_A_TextureSources_van_02_medevac_arganaambulance0;
				author = $STR_A3_A_BranFlakes;
				textures[] = 
				{
					"A3_Aegis\soft_f_aegis\van_02\Data\van_body_argana_medevac_co.paa",
					"a3\soft_f_orange\van_02\data\van_wheel_transport_CO.paa",
					"A3_Aegis\soft_f_aegis\van_02\data\van_glass_argana_medevac_CA.paa",
					"a3\soft_f_orange\van_02\data\van_ambulance_monitors_co.paa",
					"A3_Aegis\soft_f_aegis\van_02\Data\van_body_argana_medevac_co.paa"
				};
				factions[] = {};
			};
			class Tanoa_Ambulance
			{
				displayName = $STR_A3_A_TextureSources_van_02_medevac_tanoaambulance0;
				author = $STR_A3_A_BranFlakes;
				textures[] = 
				{
					"A3_Aegis\soft_f_aegis\van_02\Data\van_body_tanoa_medevac_co.paa",
					"a3\soft_f_orange\van_02\data\van_wheel_transport_CO.paa",
					"\A3_Aegis\soft_f_aegis\van_02\data\van_glass_tanoa_medevac_CA.paa",
					"a3\soft_f_orange\van_02\data\van_ambulance_monitors_co.paa",
					"A3_Aegis\soft_f_aegis\van_02\Data\van_body_tanoa_medevac_co.paa"
				};
				factions[] = {};
			};
			class Livonia_Ambulance
			{
				displayName = $STR_A3_A_TextureSources_van_02_medevac_livoniaambulance0;
				author = $STR_A3_A_BranFlakes;
				textures[] = 
				{
					"A3_Aegis\soft_f_aegis\van_02\Data\van_body_livonia_medevac_co.paa",
					"a3\soft_f_orange\van_02\data\van_wheel_transport_CO.paa",
					"\A3_Aegis\soft_f_aegis\van_02\data\van_glass_livonia_medevac_CA.paa",
					"a3\soft_f_orange\van_02\data\van_ambulance_monitors_co.paa",
					"A3_Aegis\soft_f_aegis\van_02\Data\van_body_livonia_medevac_co.paa"
				};
				factions[] = {};
			};
			class LDF_Ambulance_Arid
			{
				displayName = $STR_A3_A_CfgFactionClasses_IND_E_ard_F0;
				author = $STR_A3_A_BranFlakes;
				textures[] = 
				{
					"A3_Aegis\soft_f_aegis\Van_02\Data\van_body_LdfAmbulance_arid_CO.paa",
					"a3\Soft_F_enoch\Van_02\Data\van_wheel_ldf_MP_CO.paa",
					"a3\Soft_F_Enoch\Van_02\Data\van_glass_medevac_ldf_CA.paa",
					"a3\soft_f_orange\van_02\data\van_ambulance_monitors_co.paa",
					"A3_Aegis\soft_f_aegis\Van_02\Data\van_body_LdfAmbulance_arid_CO.paa"
				};
				factions[] = {};
			};
			class Malden_Ambulance
			{
				displayName = $STR_A3_A_TextureSources_van_02_medevac_maldenambulance0;
				author = $STR_A3_A_BranFlakes;
				textures[] = 
				{
					"A3_Aegis\soft_f_aegis\van_02\Data\van_body_malden_medevac_co.paa",
					"\a3\soft_f_orange\van_02\data\van_wheel_transport_CO.paa",
					"\A3_Aegis\soft_f_aegis\van_02\data\van_glass_malden_medevac_CA.paa",
					"\a3\soft_f_orange\van_02\data\van_ambulance_monitors_co.paa",
					"A3_Aegis\soft_f_aegis\van_02\Data\van_body_malden_medevac_co.paa",
				};
				factions[] = {};
			};
		};
	};
	class Van_02_vehicle_base_F: Van_02_base_F
	{
		class TextureSources: TextureSources
		{
			class LDF_Arid
			{
				displayName = $STR_A3_A_CfgFactionClasses_IND_E_ard_F0;
				author = $STR_A3_A_Grave;
				textures[] = 
				{
					"A3_Aegis\soft_f_aegis\Van_02\Data\van_02_body_EAF_arid_CO.paa",
					"a3\Soft_F_enoch\Van_02\Data\van_wheel_ldf_MP_CO.paa",
					"a3\soft_f_orange\van_02\data\van_glass_utility_ca.paa",
					"A3_Aegis\soft_f_aegis\Van_02\Data\van_02_body_EAF_arid_CO.paa",
				};
				materials[] = 
				{
					"\a3\Soft_F_Orange\Van_02\Data\van_body_dirty.rvmat",
					"\A3\Soft_F_Orange\Van_02\Data\van_wheel_dirty.rvmat",
					"",
					"",
					"\a3\Data_f\Lights\Car_Beacon_Blue_emit.rvmat"
				};
				factions[] = {};
			};
		};
	};

	/* Civilian Base Classes */
	class C_Van_02_service_F;
	class C_Van_02_transport_F;
	class C_Van_02_vehicle_F;
	class C_Van_02_medevac_F;

    /* Factions */
	#include "cfgION.hpp"   // ION
	#include "cfgEAF.hpp"	// LDF - Arid & Blufor
	#include "cfgCivArgana.hpp"		//	Arganan Civilians
	#include "cfgCivMalden.hpp"		//	Malden Civilians
	#include "cfgCivTanoa.hpp"		//	Tanoan Civilians
	#include "cfgCivLivonia.hpp"	// Livonian Civilians
};