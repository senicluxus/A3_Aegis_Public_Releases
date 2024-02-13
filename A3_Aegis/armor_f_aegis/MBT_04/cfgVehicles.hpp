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
		class AnimationSources;
	};

    /* Bases */
	class MBT_04_base_F: Tank_F
	{
        /* Animation Sources */
		class AnimationSources: AnimationSources
		{
			class muzzle_rot_coax
			{
				weapon = LMG_coax_ext;
			};
			class muzzle_hide_coax
			{
				weapon = LMG_coax_ext;
			};
        };

        /* Turrets */
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
                        /* Weapons & Ammunition
                        - Let's replace the generic machine gun with the NSVT used by the T-100 Varsuk
                        */
						weapons[] =
						{
							HMG_NSVT,
							SmokeLauncher
						};
						magazines[] =
						{
							mag_2(450Rnd_127x108_Ball),
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
                    cannon_125mm_advanced,
                    LMG_coax_ext
                };
				magazines[] =
				{
					20Rnd_125mm_APFSDS_T_Green,
					12Rnd_125mm_HEAT_T_Green,
					12Rnd_125mm_HE_T_Green,
					mag_2(2000Rnd_762x51_Belt_Green),
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

        /* Liveries */
		class TextureSources
		{
			class Hex
			{
				factions[] = {};
			};
			class GreenHex
			{
				factions[] = {};
			};
			class Jungle
			{
				factions[] = {};
			};
			class Grey
			{
				factions[] = {};
			};
			class Green
			{
				displayName = $STR_A3_TextureSources_Green0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_exterior_RUkhk_1_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_exterior_RUkhk_2_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_green_CO.paa"
				};
				factions[] = {};
			};
			/*class Rus
			{
				displayName = $STR_A3_A_TextureSources_Rus0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_exterior_RUcamo_1_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_exterior_RUcamo_2_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_green_CO.paa"
				};
				factions[] = {};
			};*/
		};
	};
	class MBT_04_cannon_base_F: MBT_04_base_F{};
	class MBT_04_command_base_F: MBT_04_base_F
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
							mag_2(60Rnd_30mm_MP_shells_Tracer_Green),
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
        /* Textures
        - Let's make the commander RCWS retexturable
        */
		hiddenSelections[] =
		{
			camo1,
			camo2,
			camo3,
			CamoNet
		};

        /* Liveries */
		class TextureSources: TextureSources
		{
			class Hex: Hex
			{
				textures[] =
				{
					"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_brown_hex_1_CO.paa",
					"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_brown_hex_2_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_command_hex_CO.paa",
					"\A3\Armor_F\Data\camonet_CSAT_Hex_Desert_CO.paa"
				};
			};
			class GreenHex: GreenHex
			{
				textures[] =
				{
					"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_green_hex_1_CO.paa",
					"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_green_hex_2_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_command_hex_CO.paa",
					"\A3\Armor_F\Data\camonet_CSAT_Hex_Green_CO.paa"
				};
			};
			class Jungle: Jungle
			{
				textures[] =
				{
					"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_jungle_1_CO.paa",
					"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_jungle_2_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_command_jungle_CO.paa",
					"\A3\Armor_F\Data\camonet_CSAT_Stripe_Green_CO.paa"
				};
			};
			class Grey: Grey
			{
				textures[] =
				{
					"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_1_CO.paa",
					"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_2_CO.paa",
					"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_command_CO.paa",
					"\A3\Armor_F\Data\camonet_CSAT_Stripe_Desert_CO.paa"
				};
			};
			class Green: Green
			{
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_exterior_RUkhk_1_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_exterior_RUkhk_2_CO.paa",
					"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_command_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_green_CO.paa"
				};
			};
			/*class Rus: Rus
			{
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_exterior_RUcamo_1_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_exterior_RUcamo_2_CO.paa",
					"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_command_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_green_CO.paa"
				};
			};*/
		};
	};

    /* Factions */
	class O_MBT_04_cannon_F: MBT_04_cannon_base_F
	{
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
	class O_MBT_04_command_F: MBT_04_command_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_brown_hex_1_CO.paa",
			"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_brown_hex_2_CO.paa",
			"\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_command_hex_CO.paa",
			"\A3\Armor_F\Data\camonet_CSAT_Hex_Desert_CO.paa"
		};
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
	class O_T_MBT_04_cannon_F: MBT_04_cannon_base_F
	{
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Toolkit,1);
			item_xx(Medikit,1);
		};
		class TransportBackpacks
		{
			bag_xx(B_FieldPack_ghex_F,2);
		};
	};
	class O_T_MBT_04_command_F: MBT_04_command_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_green_hex_1_CO.paa",
			"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_green_hex_2_CO.paa",
			"\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_command_hex_CO.paa",
			"\A3\Armor_F\Data\camonet_CSAT_Hex_Green_CO.paa"
		};
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Toolkit,1);
			item_xx(Medikit,1);
		};
		class TransportBackpacks
		{
			bag_xx(B_FieldPack_ghex_F,2);
		};
	};
    #include "cfgRUS.hpp"   // Russia
};