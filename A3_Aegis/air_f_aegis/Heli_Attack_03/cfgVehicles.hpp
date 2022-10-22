class CfgVehicles
{
    /* Inheritance Tree */
    #include "\A3_Aegis\cfgHelis.hpp"

    /* Bases */
	class Heli_Attack_03_base_F: Helicopter_Base_F
    {
        author = $STR_A3_A_AveryTheKitty;
		mapSize = 15.5;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {veh_air_gunship_s};
				speechPlural[] = {veh_air_gunship_p};
			};
		};
		textSingular = $STR_A3_nameSound_veh_air_gunship_s;
		textPlural = $STR_A3_nameSound_veh_air_gunship_p;
		nameSound = veh_air_gunship_s;
		scope = private;
		displayName = $STR_A3_A_CfgVehicles_Heli_Attack_03_base_F0;
		model = "\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Heli_Attack_03_F.p3d";
		icon = "\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\UI\Map_Heli_Attack_03_CA.paa";
		picture = "\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\UI\Heli_Attack_03_CA.paa";
		vehicleClass = Air;
		editorSubcategory = EdSubcat_Helicopters;
		accuracy = 0.5;
		cost = 3000000;
		threat[] =
        {
            0.8,    // Soft
            1.0,    // Armor
            0.8     // Air
        };
        availableForSupportTypes[] = {CAS_Heli};
        class Library
        {
            libTextDesc = $STR_A3_A_CfgVehicles_Heli_Attack_03_base_F_Library0;
        };
        
        /* RTD */
        //#include "rtd.hpp"

        /* Handling */
		fuelCapacity = 1400;
		fuelConsumptionRate = 0.0366;
        #include "flightModel.hpp"
        maxFordingDepth = 0.5;
		numberPhysicalWheels = 3;

        /* Crew */
		crewVulnerable = false;
		castDriverShadow = true;
		viewCargoShadow = true;
		driverAction = Heli_Attack_03_pilot;
		driverInAction = Heli_Attack_03_pilot;
		driverCanEject = false;
        driverLeftHandAnimName = lever_pilot;
        driverRightHandAnimName = stick_pilot;
        driverLeftLegAnimName = "";
        driverRightLegAnimName = "";

        /* Enter & Exit Animations */
		preciseGetInOut = false;
		getInRadius = 1.5;
		getinAction = GetInHigh;
		getoutaction = GetOutHigh;

        /* View */
		class ViewPilot: ViewPilot
		{
			initAngleX = -4;
		};
		class ViewOptics: ViewOptics
		{
			initAngleX = 0;
			minAngleX = 0;
			maxAngleX = 0;
			initAngleY = 0;
			minAngleY = 0;
			maxAngleY = 0;
			initFov = 0.1;
			minFov = 0.1;
			maxFov = 1.2;
		};

        /* Damage */
		armor = 60;
		damageResistance = 0.00593;
        destrType = DestructWreck;
		class HitPoints: HitPoints
        {
			class HitHull: HitHull
			{
				armor = 999;
				visual = zbytek;
				depends = Total;
				radius = 0.01;
			};
			class HitFuel: HitFuel
			{
				armor = 1;
				radius = 0.25;
				minimalHit = 0.05;
			};
			class HitAvionics: HitAvionics
			{
				armor = 2;
				radius = 0.4;
				minimalHit = 0.05;
				visual = elektronika;
			};
			class HitMissiles: HitMissiles
			{
				armor = 1;
				radius = 0.15;
				minimalHit = 0.05;
			};
			class HitEngine1
			{
				armor = 2.5;
				radius = 0.4;
				name = engine_1_hit;
				explosionShielding = 3;
				minimalHit = 0.1;
				visual = motor;
				passThrough = 1;
				convexComponent = engine_1_hit;
				material = 51;
			};
			class HitEngine2: HitEngine1
			{
				name = engine_2_hit;
				convexComponent = engine_2_hit;
			};
			class HitEngine: HitEngine
			{
				armor = 999;
				radius = 0.05;
				minimalHit = 1;
				depends = 0.5 * (HitEngine1 + HitEngine2);
			};
			class HitHRotor: HitHRotor
			{
				armor = 4;
				radius = 0.3;
				minimalHit = 0.1;
				explosionShielding = 4;
			};
			class HitVRotor: HitVRotor
			{
				armor = 3;
				radius = 0.2;
				minimalHit = 0.1;
				explosionShielding = 4;
			};
			class HitGlass1: HitGlass1
			{
				name = glass1;
				visual = glass1;
				armor = 4.5;
				radius = 0.4;
				explosionShielding = 1.5;
				minimalHit = 0.05;
			};
			class HitGlass2: HitGlass1
			{
				name = glass2;
				visual = glass2;
				armor = 4.5;
				radius = 0.4;
				explosionShielding = 1.5;
				minimalHit = 0.05;
			};
			class HitGlass3: HitGlass1
			{
				name = glass3;
				visual = glass3;
				armor = 4.5;
				radius = 0.4;
				explosionShielding = 1.5;
				minimalHit = 0.05;
			};
			class HitGlass4: HitGlass1
			{
				name = glass4;
				visual = glass4;
				armor = 4.5;
				radius = 0.4;
				explosionShielding = 1.5;
				minimalHit = 0.05;
			};
			class HitGlass5: HitGlass1
			{
				name = glass5;
				visual = glass5;
				armor = 4.5;
				radius = 0.4;
				explosionShielding = 2;
				minimalHit = 0.05;
			};
			class HitGlass6: HitGlass1
			{
				name = glass6;
				visual = glass6;
				armor = 4.5;
				radius = 0.4;
				explosionShielding = 1;
				minimalHit = 0.05;
			};
			class HitGlass7: HitGlass1
			{
				name = glass7;
				visual = glass7;
				armor = 4.5;
				radius = 0.4;
				explosionShielding = 1;
				minimalHit = 0.05;
			};
			class HitWinch: HitWinch
			{
				class DestructionEffects{};
			};
        };
        class Damage
		{
			tex[] = {};
			mat[] =
            {
                "A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_body.rvmat",
                "A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_body_damage.rvmat",
                "A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_body_destruct.rvmat",

                "A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_details.rvmat",
                "A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_details_damage.rvmat",
                "A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_details_destruct.rvmat",

                "A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_adds.rvmat",
                "A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_adds_damage.rvmat",
                "A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_adds_destruct.rvmat",

                "A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_glass.rvmat",
                "A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_glass_damage.rvmat",
                "A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_glass_damage.rvmat",

                "A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_glass_in.rvmat",
                "A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_glass_in_damage.rvmat",
                "A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_glass_in_damage.rvmat",

                "A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_inter.rvmat",
                "A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_inter_damage.rvmat",
                "A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_inter_destruct.rvmat"
            };
		};

        /* Sensors & Components */
		lockDetectionSystem = CM_Lock_Radar + CM_Lock_Laser;
		incomingMissileDetectionSystem = CM_Radar_Missiles + CM_All_Missiles;
		laserScanner = true;
		showAllTargets = LockLaser;
		radarTargetSize = 1.1;
		irTargetSize = 1.2;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 70;
						animDirection = mainGun;
						angleRangeHorizontal = 34;
						angleRangeVertical = 34;
                        aimDown = 27;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 2000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 70;
						animDirection = mainGun;
						angleRangeHorizontal = 34;
						angleRangeVertical = 34;
                        aimDown = 27;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 7000;
							maxRange = 7000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 6000;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 125;
						angleRangeHorizontal = 360;
						angleRangeVertical = 90;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar{};
					class LaserSensorComponent: SensorTemplateLaser{};
					class NVSensorComponent: SensorTemplateNV{};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: components
				{
					class EmptyDisplay
					{
						componentType = EmptyDisplayComponent;
					};
					class MinimapDisplay
					{
						componentType = MinimapDisplayComponent;
						resource = RscCustomInfoAirborneMiniMap;
					};
					class CrewDisplay
					{
						componentType = CrewDisplayComponent;
						resource = RscCustomInfoCrew;
					};
					class UAVDisplay
					{
						componentType = UAVFeedDisplayComponent;
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = TransportFeedDisplayComponent;
						source = PrimaryGunner;
					};
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
                            4000,
                            2000,
                            16000,
                            8000
                        };
						resource = RscCustomInfoSensors;
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = SensorDisplay;
				class Components: components
				{
					class EmptyDisplay
					{
						componentType = EmptyDisplayComponent;
					};
					class MinimapDisplay
					{
						componentType = MinimapDisplayComponent;
						resource = RscCustomInfoAirborneMiniMap;
					};
					class CrewDisplay
					{
						componentType = CrewDisplayComponent;
						resource = RscCustomInfoCrew;
					};
					class UAVDisplay
					{
						componentType = UAVFeedDisplayComponent;
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = TransportFeedDisplayComponent;
						source = PrimaryGunner;
					};
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
                            4000,
                            2000,
                            16000,
                            8000
                        };
						resource = RscCustomInfoSensors;
					};
				};
			};
			class TransportPylonsComponent
			{
				uiPicture = "\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\UI\Heli_Attack_03_EDEN_CA.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment = PylonMissile_1Rnd_AAA_missiles;
						priority = 5;
						hardpoints[] = {B_ASRAAM};
						turret[] = {0};
						UIposition[] =
                        {
                            0.06,   // X
                            0.4     // Y
                        };
					};
					class PylonLeft2: PylonLeft1
					{
						attachment = PylonRack_12Rnd_missiles;
						priority = 4;
						hardpoints[] =
                        {
                            DAR,
                            DAGR,
                            B_SHIEKER,
                            UNI_SCALPEL,
                            20MM_TWIN_CANNON,
                            B_ASRRAM_EJECTOR
                        };
						UIposition[] =
                        {
                            0.08,   // X
                            0.35    // Y
                        };
					};
					class PylonLeft3: PylonLeft1
					{
						attachment = PylonRack_4Rnd_LG_scalpel;
						priority = 3;
						hardpoints[] =
                        {
                            DAR,
                            DAGR,
                            B_SHIEKER,
                            UNI_SCALPEL,
                            20MM_TWIN_CANNON,
                            B_ASRRAM_EJECTOR
                        };
						UIposition[] =
                        {
                            0.1,    // X
                            0.3     // Y
                        };
					};
					class PylonRight3: PylonLeft3
					{
						mirroredMissilePos = 3;
						UIposition[] =
                        {
                            0.59,   // X
                            0.3     // Y
                        };
					};
					class PylonRight2: PylonLeft2
					{
						mirroredMissilePos = 2;
						UIposition[] =
                        {
                            0.62,   // X
                            0.35    // Y
                        };
					};
					class PylonRight1: PylonLeft1
					{
						mirroredMissilePos = 1;
						UIposition[] =
                        {
                            0.64,   // X
                            0.4     // Y
                        };
					};
				};
				class Presets
				{
					class Empty
					{
						displayName = $STR_empty;
						attachment[] = {};
					};
					class Default
					{
						displayName = $STR_vehicle_default;
						attachment[] =
                        {
                            PylonMissile_1Rnd_AAA_missiles,
                            PylonRack_12Rnd_missiles,
                            PylonRack_4Rnd_LG_scalpel,
                            PylonRack_4Rnd_LG_scalpel,
                            PylonRack_12Rnd_missiles,
                            PylonMissile_1Rnd_AAA_missiles
                        };
					};
					class AT
					{
						displayName = $STR_A3_cfgmagazines_titan_at_dns;
						attachment[] =
                        {
                            PylonMissile_1Rnd_AAA_missiles,
                            PylonRack_4Rnd_LG_scalpel,
                            PylonRack_4Rnd_LG_scalpel,
                            PylonRack_4Rnd_LG_scalpel,
                            PylonRack_4Rnd_LG_scalpel,
                            PylonMissile_1Rnd_AAA_missiles
                        };
					};
					class CAS
					{
						displayName = $STR_A3_CAS_PRESET_DISPLAYNAME;
						attachment[] =
                        {
                            PylonMissile_1Rnd_AAA_missiles,
                            PylonRack_12Rnd_missiles,
                            PylonRack_12Rnd_PG_missiles,
                            PylonRack_12Rnd_PG_missiles,
                            PylonRack_12Rnd_missiles,
                            PylonMissile_1Rnd_AAA_missiles
                        };
					};
				};
			};
		};

        /* Pilot Camera */
		driverWeaponsInfoType = RscOptics_Heli_Attack_01_pilot;
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "WFOV";
					initAngleX = 0;
					minAngleX = 0;
					maxAngleX = 0;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					initFov = (30 / 120);
					minFov = (30 / 120);
					maxFov = (30 / 120);
					directionStabilized = true;
					visionMode[] =
                    {
                        Normal,
                        NVG,
                        Ti
                    };
					thermalMode[] =
                    {
                        TiWHot,
                        TiBHot
                    };
					gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Generic_wide_F.p3d";
				};
				class Medium: Wide
				{
					opticsDisplayName = "MFOV";
					initFov = (6 / 120);
					minFov = (6 / 120);
					maxFov = (6 / 120);
					gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Generic_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName = "NFOV";
					initFov = (2 / 120);
					minFov = (2 / 120);
					maxFov = (2 / 120);
					gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Generic_narrow_F.p3d";
				};
			};
			minTurn = -110;
			maxTurn = 110;
			initTurn = 0;
			minElev = -15;
			maxElev = 60;
			initElev = 5;
			maxXRotSpeed = 1.0;
			maxYRotSpeed = 1.0;
			maxMouseXRotSpeed = 0.5;
			maxMouseYRotSpeed = 0.5;
			pilotOpticsShowCursor = true;
			controllable = true;
		};
        
        /* MFD */
		defaultUserMFDvalues[] =
        {
            0.0,    // R
            1.0,    // B
            0.3,    // G
            1       // A
        };
        #include "mfd_driver.hpp"

        /* Weapons & Ammunition */
		weapons[] = {CMFlareLauncher};
		magazines[] = {192Rnd_CMFlare_Chaff_Magazine};

        /* Turrets */
		enableManualFire = true;
		#include "turrets.hpp"

        /* Liveries */
		class TextureSources
		{
			class BAF
			{
				displayName = $STR_A3_A_TextureSources_BAF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
                    "\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_body_CO.paa",
                    "\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_details_CO.paa",
                    "\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_adds_CO.paa"
				};
				factions[] = {};
			};
            /*
			class Grey
			{
				displayName = $STR_A3_TextureSources_Grey0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
                    "\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_body_grey_CO.paa",
                    "\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_details_grey_CO.paa",
                    "\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_adds_grey_CO.paa"
				};
				factions[] = {};
			};
            */
			class Indep
			{
				displayName = $STR_A3_TextureSources_Indep0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
                    "\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_body_INDP_CO.paa",
                    "\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_details_INDP_CO.paa",
                    "\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_adds_INDP_CO.paa"
				};
				factions[] = {};
			};
        };

        /* Textures */
		hiddenSelections[] =
		{
			camo1,
			camo2,
			camo3
		};
		hiddenSelectionsTextures[] =
        {
            "\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_body_CO.paa",
            "\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_details_CO.paa",
            "\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_adds_CO.paa"
        };

        /* Lights */
        class MarkerLights
        {
            class PositionLight_red_1
            {
				color[] =
				{
					0.8,    // R
					0.0,    // G
					0.0     // B
				};
				ambient[] =
				{
					0.08,   // R
					0.0,    // G
					0.0     // B
				};
				intensity = 75;
				name = PositionLight_red_1_pos;
				drawLight = 1;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = false;
				blinking = false;
				dayLight = false;
				useFlare = true;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 25;
					quadratic = 50;
					hardLimitStart = 0.75;
					hardLimitEnd = 1;
				};
            };
			class PositionLight_green_1: PositionLight_red_1
			{
				color[] =
				{
					0.0,    // R
					0.8,    // G
					0.0     // B
				};
				ambient[] =
				{
					0.0,    // R
					0.08,   // G
					0.0     // B
				};
				name = PositionLight_green_1_pos;
			};
			class PositionLight_white_1: PositionLight_red_1
			{
				color[] =
				{
					1.0,    // R
					1.0,    // G
					1.0     // B
				};
				ambient[] =
				{
					0.1,    // R
					0.1,    // G
					0.1     // B
				};
				name = PositionLight_white_1_pos;
			};
			class CollisionLight_white_1: PositionLight_red_1
			{
				color[] =
				{
					1.0,    // R
					1.0,    // G
					1.0     // B
				};
				ambient[] =
				{
					0.1,    // R
					0.1,    // G
					0.1     // B
				};
				name = CollisionLight_white_1_pos;
				blinking = true;
				blinkingStartsOn = true;
				blinkingPattern[] = {0.1,0.9};
				blinkingPatternGuarantee = true;
				drawLightSize = 0.35;
				drawLightCenterSize = 0.05;
			};
			class CollisionLight_red_1: CollisionLight_white_1
			{
				color[] =
				{
					0.8,    // R
					0.0,    // G
					0.0     // B
				};
				ambient[] =
				{
					0.08,   // R
					0.0,    // G
					0.0     // B
				};
				name = CollisionLight_red_1_pos;
			};
        };
        class Reflectors
        {
            class Light_R
            {
                color[] =
                {
                    7000,   // R
                    7500,   // G
                    10000,  // B
                    1       // A
                };
                ambient[] =
                {
                    70,     // R
                    75,     // G
                    100,    // B
                    0       // A
                };
                position = Light_R_pos;
                direction = Light_R_dir;
                hitpoint = Light_R_hitpoint;
                selection = Light_R;
                size = 1;
                innerAngle = 15;
                outerAngle = 65;
                coneFadeCoef = 10;
                intensity = 50;
                useFlare = true;
                dayLight = false;
                FlareSize = 10;
                flareMaxDistance = 250;
                class Attenuation
                {
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 1;
					hardLimitStart = 100;
					hardLimitEnd = 200;
                };
            };
        };

        /* Selections & Memory Points */
		selectionClan = clan;
		selectionFireAnim = zasleh;
        selectionHRotorStill = "main rotor static";
        selectionHRotorMove = "main rotor blur";
        selectionVRotorStill = "tail rotor static";
        selectionVRotorMove = "tail rotor blur";
		selectionShowDamage = poskozeni;
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		memoryPointLMissile = Missile_1;
		memoryPointRMissile = Missile_2;
		memoryPointLRocket = Rocket_1;
		memoryPointRRocket = Rocket_2;
		memoryPointTaskMarker = TaskMarker_1_pos;
        memoryPointDriverOptics = PilotCamera_pos;

        /* Animation Sources */
		class AnimationSources: AnimationSources
        {
			class HitGlass1
			{
				source = Hit;
				hitpoint = HitGlass1;
				raw = true;
			};
			class HitGlass2: HitGlass1
			{
				hitpoint = HitGlass2;
			};
			class HitGlass3: HitGlass1
			{
				hitpoint = HitGlass3;
			};
			class HitGlass4: HitGlass1
			{
				hitpoint = HitGlass4;
			};
			class HitGlass5: HitGlass1
			{
				hitpoint = HitGlass5;
			};
			class HitGlass6: HitGlass1
			{
				hitpoint = HitGlass6;
			};
			class HitGlass7: HitGlass1
			{
				hitpoint = HitGlass7;
			};
			class Muzzle_flash
			{
				source = ammorandom;
				weapon = Gatling_30mm_Heli_Attack_03_F;
			};
        };

        /* Particles */
        class Exhausts
		{
			class Exhaust1
			{
				position = exhaust1;
				direction = exhaust1_dir;
				effect = ExhaustsEffectHeliCom;
			};
			class Exhaust2
			{
				position = exhaust2;
				direction = exhaust2_dir;
				effect = ExhaustsEffectHeliCom;
			};
		};

        /* Inventory */
        class TransportBackpacks
		{
            bag_xx(B_Parachute,2);
		};
		class TransportMagazines
		{
            mag_xx(SmokeShell,2);
            mag_xx(SmokeShellGreen,2);
            mag_xx(30Rnd_556x45_Stanag,4);
		};
		class TransportWeapons
		{
            weap_xx(arifle_Mk20C_F,2);
		};
		class TransportItems
		{
            item_xx(FirstAidKit,2);
            item_xx(Toolkit,1);
            item_xx(ItemGPS,1);
		};

        /* Scripts */
        class EventHandlers: EventHandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
    };

    /* Factions */
    #include "cfgBLUFOR.hpp"    // BAF
    #include "cfgIndep.hpp"     // AAF
};