class CfgVehicles
{
	/* Inheritance Tree */
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class Components;
	};

    /* Bases */
	class MBT_01_base_F: Tank_F
	{
        /* Turrets */
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
                    {
                        /* Weapons & Ammunition */
						weapons[] =
                        {
                            SmokeLauncher,
                            Laserdesignator_mounted
                        };
						magazines[] =
                        {
                            SmokeLauncherMag,
                            Laserbatteries
                        };

                        /* Sensors & Components */
						class Components
						{
							class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
							{
								class Components: components
								{
									class VehicleMissileDisplay
									{
										componentType = TransportFeedDisplayComponent;
										source = Missile;
									};
									class SensorDisplay
									{
										componentType = SensorsDisplayComponent;
										range[] =
                                        {
                                            1000,
                                            2000,
                                            4000,
                                            8000
                                        };
										resource = RscCustomInfoSensors;
									};
								};
							};
							class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander
							{
								defaultDisplay = SensorDisplay;
								class Components: components
								{
									class VehicleMissileDisplay
									{
										componentType = TransportFeedDisplayComponent;
										source = Missile;
									};
									class SensorDisplay
									{
										componentType = SensorsDisplayComponent;
										range[] =
                                        {
                                            1000,
                                            2000,
                                            4000,
                                            8000
                                        };
										resource = RscCustomInfoSensors;
									};
								};
							};
						};
                    };
				};
                
                /* Weapons & Ammunition */
				weapons[] = {"cannon_120mm","MMG_02_coax"};
				magazines[] =
				{
					24Rnd_120mm_APFSDS_shells_Tracer_Red,
					12Rnd_120mm_HE_shells_Tracer_Red,
					12Rnd_120mm_HEAT_MP_T_Red,
					mag_20(200Rnd_338_Mag),
					4Rnd_120mm_LG_cannon_missiles
				};

                /* Sensors & Components */
				class Components: Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
					{
						class Components: components
						{
							class VehicleMissileDisplay
							{
								componentType = TransportFeedDisplayComponent;
								source = Missile;
							};
							class SensorDisplay
							{
								componentType = SensorsDisplayComponent;
								range[] =
                                {
                                    1000,
                                    2000,
                                    4000,
                                    8000
                                };
								resource = RscCustomInfoSensors;
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
					{
						defaultDisplay = SensorDisplay;
						class Components: components
						{
							class VehicleMissileDisplay
							{
								componentType = TransportFeedDisplayComponent;
								source = Missile;
							};
							class SensorDisplay
							{
								componentType = SensorsDisplayComponent;
								range[] =
                                {
                                    1000,
                                    2000,
                                    4000,
                                    8000
                                };
								resource = RscCustomInfoSensors;
							};
						};
					};
				};
			};
		};

        /* Inventory */
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Toolkit,1);
			item_xx(Medikit,1);
		};
		class TransportBackpacks
		{
			bag_xx(B_AssaultPack_mcamo,2);
		};

        /* Sensors & Components */
        radarType = VehicleRadar;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						animDirection = mainTurret;
					};
				};
			};
		};
	};
	class MBT_01_arty_base_F: MBT_01_base_F
	{
        /* Turrets */
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						magazines[] =
						{
							64Rnd_40mm_G_belt,
							mag_2(200Rnd_127x99_mag_Tracer_Red),
							SmokeLauncherMag
						};
					};
				};
			};
		};
		animationList[] =
		{
			showCamonetCannon,0,
			showCamonetPlates1,0,
			showCamonetPlates2,0,
			showCamonetTurret,0,
			showCamonetHull,0,
			showCanisters,0.33,
			showAmmobox,0.17
		};
	};
	class MBT_01_mlrs_base_F;

    /* Factions */
	#include "cfgBLUFOR.hpp"    // US
};