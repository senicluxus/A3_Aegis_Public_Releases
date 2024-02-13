class CfgVehicles
{
    /* Inheritance Tree */
	class Car;
	class Car_F: Car
	{
		class NewTurret;
	};
	class Wheeled_APC_F: Car_F
	{
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
				class Components;
			};
		};
	};

    /* Bases */
	class AFV_Wheeled_01_base_F: Wheeled_APC_F
	{
		icon = "\A3_Aegis\Armor_F_Aegis\AFV_Wheeled_01\Data\UI\Map_AFV_Wheeled_01_CA.paa";
		editorSubcategory = EdSubcat_TankDestroyers;

        /* Turrets */
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
                        /* Sensors & Components */
						class Components
						{
							class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
							{
								class Components: Components
								{
									class VehicleMissileDisplay;
									class SensorDisplay
									{
										range[] =
                                        {
                                            1000,
                                            2000,
                                            4000,
                                            8000
                                        };
									};
								};
							};
							class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander
							{
								class Components: Components
								{
									class VehicleMissileDisplay;
									class SensorDisplay
									{
										range[] =
                                        {
                                            1000,
                                            2000,
                                            4000,
                                            8000
                                        };
									};
								};
							};
						};
                    };
                };

                /* Weapons & Ammunition */
				magazines[] =
				{
					12Rnd_120mm_APFSDS_shells_Tracer_Red,
					8Rnd_120mm_HE_shells_Tracer_Red,
					8Rnd_120mm_HEAT_MP_T_Red,
					mag_5(200Rnd_338_Mag),
					4Rnd_120mm_LG_cannon_missiles
				};

                /* Sensors & Components */
				class Components: Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
					{
						class Components: Components
						{
							class SensorDisplay
							{
                                range[] =
                                {
                                    1000,
                                    2000,
                                    4000,
                                    8000
                                };
                            };
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
					{
						class Components: Components
						{
							class SensorDisplay
							{
                                range[] =
                                {
                                    1000,
                                    2000,
                                    4000,
                                    8000
                                };
                            };
						};
					};
				};
			};
		};

        /* Inventory */
		class TransportBackpacks
		{
			bag_xx(B_AssaultPack_mcamo,2);
		};
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Toolkit,1);
			item_xx(Medikit,1);
		};

        /* Liveries */
		class TextureSources
		{
			class Sand
			{
				factions[] = {};
			};
			class Green
			{
				displayName = $STR_A3_TextureSources_Olive0;
				factions[] = {};
			};
			class SFIA
			{
				displayName = $STR_LXWS_FACTION_SFIA;
				factions[] = {};
				textures[] = 
				{
					"\lxws\vehicles_f_lxws\data\AFV_Wheeled_01\Rhino_Africa1_CO.paa",
					"\lxws\vehicles_f_lxws\data\AFV_Wheeled_01\Rhino_Africa2_CO.paa",
					"\A3\Armor_F_Tank\AFV_Wheeled_01\Data\AFV_Wheeled_01_wheel_CO.paa",
					"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
					"A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_sand_CO.paa"
				};
			};
		};
	};
	class AFV_Wheeled_01_up_base_F: AFV_Wheeled_01_base_F
    {
		icon = "\A3_Aegis\Armor_F_Aegis\AFV_Wheeled_01\Data\UI\Map_AFV_Wheeled_01_up_CA.paa";

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
                            HMG_127_AFV,
                            SmokeLauncher,
                            Laserdesignator_mounted
                        };

                        /* Sensors & Components */
						class Components
						{
							class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
							{
								class Components: Components
								{
									class VehicleMissileDisplay;
									class SensorDisplay
									{
										range[] =
                                        {
                                            1000,
                                            2000,
                                            4000,
                                            8000
                                        };
									};
								};
							};
							class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander
							{
								class Components: Components
								{
									class VehicleMissileDisplay;
									class SensorDisplay
									{
										range[] =
                                        {
                                            1000,
                                            2000,
                                            4000,
                                            8000
                                        };
									};
								};
							};
						};
                    };
                };
                /* Sensors & Components */
				class Components: Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
					{
						class Components: Components
						{
							class SensorDisplay
							{
                                range[] =
                                {
                                    1000,
                                    2000,
                                    4000,
                                    8000
                                };
                            };
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
					{
						class Components: Components
						{
							class SensorDisplay
							{
                                range[] =
                                {
                                    1000,
                                    2000,
                                    4000,
                                    8000
                                };
                            };
						};
					};
				};
			};
		};
		/* Liveries */
		class TextureSources
		{
			class SFIA{};
		};
    };

	/* Factions */
	#include "cfgBLUFOR.hpp"    // US
	#include "cfgSFIA.hpp"		// SFIA
};