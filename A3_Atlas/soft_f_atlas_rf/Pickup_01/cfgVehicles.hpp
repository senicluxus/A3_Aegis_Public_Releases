class CfgVehicles
{
	/* Inheritance Tree */
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
	};

    /* Bases */
	class Offroad_01_base_F: Car_F
	{
		class EventHandlers;
	};
	class Offroad_01_unarmed_base_F: Offroad_01_base_F
	{
		class TextureSources;
	};
    class Pickup_01_base_rf: Offroad_01_unarmed_base_F
    {
		class Turrets;
        class AnimationSources;
		class TextureSources
		{
			class KZG_01
			{
				displayName = $STR_A3_A_TEXTURESOURCES_KZG0;
				author = $STR_A3_A_BranFlakes;
				textures[] = 
				{
					"\A3_Atlas\Soft_F_Atlas_RF\pickup_01\Data\atlas_b_k_pickup_01_ext_co.paa",
					"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_nato_co.paa",
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa",
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_nato_co.paa",
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_tan_co.paa",
					"\A3_Atlas\Soft_F_Atlas_RF\pickup_01\Data\atlas_b_k_pickup_01_service_co.paa"
				};
				factions[] = {};
			};
			class Jungle
			{
				displayName = $STR_A3_TEXTURESOURCES_JUNGLE0;
				author = $STR_A3_A_BranFlakes;
				textures[] = 
				{
					"\A3_Atlas\Soft_F_Atlas_RF\pickup_01\Data\atlas_b_h_pickup_01_ext_co.paa",
					"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_co.paa",
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa",
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_AAT_olive_co.paa",
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa",
					"\A3_Atlas\Soft_F_Atlas_RF\pickup_01\Data\atlas_b_h_pickup_01_service_co.paa"
				};
				factions[] = {};
			};
			class IDF_01
			{
				displayName = $STR_A3_A_TEXTURESOURCES_Israel0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas_RF\pickup_01\Data\atlas_i_i_pickup_01_ext_co.paa",
					"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_co.paa", 
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa", 
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_AAT_olive_co.paa", 
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa", 
					"\A3_Atlas\Soft_F_Atlas_RF\pickup_01\Data\atlas_i_i_pickup_01_service_co.paa"
				};
				factions[] = {};
			};
			class Bundeswehr
			{
				displayName = $STR_A3_A_TEXTURESOURCES_BW0;
				author = $STR_A3_A_wsxcgy;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas_RF\pickup_01\Data\atlas_b_g_pickup_01_ext_co.paa",
					"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_gendarmerie_co.paa",
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa", 
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_AAT_olive_co.paa", 
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa", 
					"\A3_Atlas\Soft_F_Atlas_RF\pickup_01\Data\atlas_b_g_pickup_01_service_co.paa"
				};
				factions[] = {};
			};
			class Bundeswehr_Arid
			{
				displayName = $STR_A3_A_TEXTURESOURCES_BWArid0;
				author = $STR_A3_A_wsxcgy;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas_RF\pickup_01\Data\atlas_b_g_pickup_01_ext_ard_co.paa",
					"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_nato_co.paa",
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa",
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_nato_co.paa",
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_tan_co.paa",
					"\A3_Atlas\Soft_F_Atlas_RF\pickup_01\Data\atlas_b_g_pickup_01_service_ard_co.paa"
				};
				factions[] = {};
			};
			class Bundeswehr_MP
			{
				displayName = $STR_A3_A_TEXTURESOURCES_BWMP0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas_RF\pickup_01\Data\atlas_b_g_pickup_01_ext_mp_co.paa",
					"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_gendarmerie_co.paa",
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa", 
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_AAT_olive_co.paa", 
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa", 
					"\A3_Atlas\Soft_F_Atlas_RF\pickup_01\Data\atlas_b_g_pickup_01_service_mp_co.paa"
				};
				factions[] = {};
			};
			class UNO
			{
				displayName = $STR_A3_A_TEXTURESOURCES_UNO0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas_RF\pickup_01\Data\atlas_i_u_pickup_01_ext_co.paa",
					"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_co.paa", 
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa", 
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_AAT_olive_co.paa", 
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa", 
					"\A3_Atlas\Soft_F_Atlas_RF\pickup_01\Data\atlas_i_u_pickup_01_service_co.paa"
				};
				factions[] = {};
			};
		};
    };
	class Pickup_01_aat_base_rf: Pickup_01_base_rf
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class MFD;
	};
	class Pickup_repair_base_rf;
	class Pickup_01_mmg_base_rf;
	class Pickup_01_hmg_base_rf: Pickup_01_base_rf
	{
		class Turrets: Turrets
		{
			class M2_Turret;
		};
	};
	class Pickup_01_mrl_base_rf;
	class Pickup_covered_base_rf;
	class Pickup_fuel_base_rf;
	class Pickup_comms_base_rf;
	class Aegis_Pickup_01_AT_base_RF;

	/* Factions */
	#include "cfgGER.hpp"		// Germany
	#include "cfgIDF.hpp"		// Israel
	#include "cfgHIMF.hpp"		// Horizon Islands
	#include "cfgKZG.hpp"		// Karzeghistan
	#include "cfgUNO.hpp"		// United Nations

};