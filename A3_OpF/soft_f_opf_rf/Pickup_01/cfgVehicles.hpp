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
		/*class TextureSources: TextureSources
		{
			
		};*/
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
	class Pickup_repair_ig_base_rf;
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
	#include "cfgPartisans.hpp"		// Partisans

};