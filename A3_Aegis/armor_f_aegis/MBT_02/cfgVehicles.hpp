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
	};

    /* Bases */
	class MBT_02_base_F: Tank_F
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
						magazines[] =
						{
							mag_2(150Rnd_127x108_Ball),
							SmokeLauncherMag
						};

                        /* Sensors & Components */
                        class Components
						{
							class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
							{
								class Components: components
								{
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
				weapons[] =
				{
					cannon_125mm,
					LMG_coax
				};
				magazines[] =
				{
					16Rnd_125mm_APFSDS_T_Green,
					12Rnd_125mm_HEAT_T_Green,
					12Rnd_125mm_HE_T_Green,
					mag_20(200Rnd_762x51_Belt_Green),
					4Rnd_125mm_cannon_missiles
				};

                /* Sensors & Components */
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
					{
						class Components: components
						{
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

		animationList[] =
		{
			showCamonetHull,0,
			showCamonetCannon,0,
			showCamonetTurret,0,
			showLog,1
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
			bag_xx(B_FieldPack_ocamo,2);
		};
	};
	class MBT_02_arty_base_F: MBT_02_base_F
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
						magazines[] =
						{
							64Rnd_40mm_G_belt,
							mag_2(200Rnd_127x99_mag_Tracer_Green),
							SmokeLauncherMag
						};
					};
				};
			};
		};
	};

	/* T-100X Futura */
	class MBT_02_railgun_base_F;
	class O_MBT_02_railgun_base_F: MBT_02_railgun_base_F
	{
		class TextureSources
		{
			class Green
        	{
            	displayName = $STR_A3_TEXTURESOURCES_GREEN0;
            	author = $STR_A3_A_AveryTheKitty;
            	textures[] =
            	{
                	"\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_body_RUkhk_CO.paa",
                	"\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_turret_RUkhk_CO.paa",
                	"\A3_Aegis\Armor_F_Aegis\MBT_02\Data\MBT_02_RUkhk_CO.paa",
                	"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_green_CO.paa"
            	};
            	factions[] = {};
        	};
		};
		class TransportBackpacks
		{
			bag_xx(B_FieldPack_ocamo,2);
		};
	};

    /* Factions */
    #include "cfgOPFOR.hpp" // IAF, China & Argana
    #include "cfgRUS.hpp"   // Russia
};