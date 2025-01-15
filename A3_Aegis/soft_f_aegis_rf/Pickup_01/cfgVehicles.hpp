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
	class Offroad_01_unarmed_base_F: Offroad_01_base_F{};
    class Pickup_01_base_rf: Offroad_01_unarmed_base_F
    {
		class Turrets;
        class AnimationSources;
		class TextureSources
		{
			class Black
			{
				factions[] = {};
			};
			class EAF
			{
				factions[] = {};
			};
			class ParkRanger
			{
				factions[] = {};
			};
			class Guerilla_01
			{
				factions[] = {};
			};
			class Guerilla_02
			{
				factions[] = {};
			};
			class Guerilla_03
			{
				factions[] = {};
			};
			class Guerilla_04
			{
				factions[] = {};
			};
			class Guerilla_05
			{
				factions[] = {};
			};
			class Guerilla_06
			{
				factions[] = {};
			};
			class Guerilla_07
			{
				factions[] = {};
			};
			class Guerilla_08
			{
				factions[] = {};
			};
			class Guerilla_09
			{
				factions[] = {};
			};
			class AAF
			{
				factions[] = {};
			};
			class Dazzle
			{
				factions[] = {};
			};
			class Dazzle_Arid
			{
				factions[] = {};
			};
			class Urban
			{
				factions[] = {};
			};
			class ION
			{
				factions[] = {};
			};
			class GENDARMERIE
			{
				factions[] = {};
			};
			class Argana_Royal
			{
				factions[] = {};
			};
			class NATO
			{
				factions[] = {};
			};
			class NATO_P
			{
				factions[] = {};
			};
			class CSAT
			{
				factions[] = {};
			};
			class CSAT_Pacific
			{
				factions[] = {};
			};
			class Brown
			{
				factions[] = {};
			};
			class Olive
			{
				factions[] = {};
			};
			class UNA
			{
				factions[] = {};
			};
			class EAF_Arid
			{
				displayName = $STR_A3_A_CfgFactionClasses_IND_E_ard_F0;
				author = $STR_A3_A_BranFlakes;
				textures[] = 
				{
					"\A3_Aegis\Soft_F_Aegis_RF\pickup_01\Data\pickup_01_ext_eaf_arid_CO.paa",
					"\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_nato_co.paa",
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa",
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_nato_co.paa",
					"\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_tan_co.paa",
					"\A3_Aegis\Soft_F_Aegis_RF\pickup_01\Data\pickup_01_service_eaf_arid_CO.paa"
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

	/* AT Pickup */
	#include "cfgPickupAT.hpp"

	/* Factions */
	#include "cfgBLUFOR.hpp"	// US
	#include "cfgCTRG.hpp"		// CTRG
	#include "cfgEAF.hpp"		// LDF BLUFOR and Arid LDF
	#include "cfgCivil.hpp"		// Civilian Subfactions
	#include "cfgION.hpp"		// ION
	#include "cfgOPFOR.hpp"		// Argana

};