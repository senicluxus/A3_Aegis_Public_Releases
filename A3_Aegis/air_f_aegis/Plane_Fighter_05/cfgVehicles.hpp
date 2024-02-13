class CfgVehicles
{
    /* Inheritance Tree */
    #include "\A3_Aegis\cfgPlanes.hpp"
    #include "\A3_Aegis\cfgEjectionSeats.hpp"

    /* Bases */
	class Plane_Fighter_05_Base_F: Plane_Base_F
	{
		author = $STR_A3_A_AveryTheKitty_and_OlliKoskelainen;
		scope = private;
		vehicleClass = Air;
		side = TWest;
		faction = BLU_F;
		displayName = $STR_A3_A_CfgVehicles_Plane_Fighter_05_Base_F0;
		simulation = airplaneX;
		crew = B_Fighter_Pilot_F;
		typicalCargo[] = {B_Fighter_Pilot_F};
		crewVulnerable = true;
		driverAction = Pilot_Plane_Fighter_05;
		driverLeftHandAnimName = throttle_pilot;
		driverRightHandAnimName = stick_pilot;
		precisegetinout = true;
		driverCanEject = false;
		cargoCanEject = false;
		ejectDeadGunner = false;
		ejectDeadCargo = false;
		ejectDeadDriver = false;
		disableInventory = true;
		getInAction = Pilot_Plane_Fighter_05_Enter;
		getOutAction = Pilot_Plane_Fighter_05_Exit;
		getInRadius = 5.5;
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Plane_Fighter_05_F.jpg";
		picture = "\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\UI\Plane_Fighter_05_CA.paa";
		icon = "\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\UI\Map_Plane_Fighter_05_CA.paa";
		mapSize = 15.5;
		model = "\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Plane_Fighter_05_F.p3d";
		animated = true;
		hiddenSelections[] =
		{
			Camo1,
			Camo2,
			Camo3,
			Camo4,
			CamoGlass,
			camo_cockpit_1,
			camo_cockpit_2
		};
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext1_CO.paa",
			"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext2_CO.paa",
			"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext3_CO.paa",
			"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_pylon_CO.paa",
			"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext_glass_CA.paa",
			"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int1_CO.paa",
			"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int2_CO.paa"
		};
		weapons[] =
		{
			Laserdesignator_pilotCamera,
			CMFlareLauncher_Singles
		};
		magazines[] =
		{
			Laserbatteries,
			240Rnd_CMFlare_Chaff_Magazine
		};
		driveOnComponent[] = {};
		cabinOpening = true;
		gearRetracting = true;
		geardowntime = 3;
		gearuptime = 4.5;
		lightOnGear = true;
		damperSize = 0.01;
		damperForce = 0.01;
		damperDamping = 0;
		canFloat = false;
		formationX = 30;
		formationZ = 30;
		fuelCapacity = 1500;
		availableForSupportTypes[] = {CAS_Bombing};
		armor = 40;
		armorStructural = 1;
		armorLights = 1;
		damageResistance = 0.01096;
		destrType = DestructWreck;
		epeImpulseDamageCoef = 150;
		waterLeakiness = 2.5;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 3;
				explosionShielding = 5;
				name = HitHull;
				passThrough = 1;
				visual = Hit_Hull;
				radius = 0.3;
				minimalHit = 0.02;
				depends = false;
				material = -1;
			};
			class HitEngine: HitHull
			{
				armor = 1.5;
				explosionShielding = 2;
				name = HitEngine;
				passThrough = 0.5;
				visual = Hit_Engine;
				radius = 0.55;
				minimalHit = 0.1;
			};
			class HitAvionics: HitHull
			{
				armor = 1.5;
				explosionShielding = 4;
				name = HitAvionics;
				passThrough = 0.4;
				visual = "";
				radius = 0.3;
				minimalHit = 0.05;
			};
			class HitFuel: HitHull
			{
				armor = 3;
				explosionShielding = 4;
				name = HitFuel;
				passThrough = 0.5;
				visual = Hit_Hull;
				radius = 0.3;
				minimalHit = 0.1;
			};
			class HitFuel2: HitFuel
			{
				armor = 3;
				explosionShielding = 4;
				name = HitFuel2;
				passThrough = 0.5;
				visual = Hit_Hull;
				radius = 0.3;
				minimalHit = 0.1;
			};
			class HitGlass1: HitHull
			{
				armor = 1.5;
				explosionShielding = 3;
				name = HitGlass1;
				passThrough = 0;
				visual = glass1;
				radius = 0.2;
				minimalHit = 0.1;
			};
			class HitLAileron: HitHull
			{
				armor = 1.5;
				explosionShielding = 3;
				name = HitLAileron;
				passThrough = 0.1;
				visual = Hit_AileronL;
				radius = 0.2;
				minimalHit = 0.1;
			};
			class HitRAileron: HitLAileron
			{
				armor = 1.5;
				explosionShielding = 3;
				name = HitRAileron;
				passThrough = 0.1;
				visual = Hit_AileronR;
				radius = 0.2;
				minimalHit = 0.1;
			};
			class HitLCRudder: HitHull
			{
				armor = 1.5;
				explosionShielding = 3;
				name = HitLCRudder;
				passThrough = 0.1;
				visual = Hit_RudderL;
				radius = 0.2;
				minimalHit = 0.1;
			};
			class HitRRudder: HitLCRudder
			{
				armor = 1.5;
				explosionShielding = 3;
				name = HitRRudder;
				passThrough = 0.1;
				visual = Hit_RudderR;
				radius = 0.2;
				minimalHit = 0.1;
			};
			class HitLCElevator: HitHull
			{
				armor = 1.5;
				explosionShielding = 3;
				name = HitLCElevator;
				passThrough = 0.1;
				visual = Hit_ElevatorL;
				radius = 0.2;
				minimalHit = 0.1;
			};
			class HitRElevator: HitLCElevator
			{
				armor = 1.5;
				explosionShielding = 3;
				name = HitRElevator;
				passThrough = 0.1;
				visual = Hit_ElevatorR;
				radius = 0.2;
				minimalHit = 0.1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext1.rvmat",
				"A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext1_damage.rvmat",
				"A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext1_destruct.rvmat",
                
				"A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext2.rvmat",
				"A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext2_damage.rvmat",
				"A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext2_destruct.rvmat",

				"A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext3.rvmat",
				"A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext3_damage.rvmat",
				"A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext3_destruct.rvmat",

				"A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_pylon.rvmat",
				"A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_pylon_damage.rvmat",
				"A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_pylon_destruct.rvmat",

				"A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext_glass.rvmat",
				"A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext_glass_damage.rvmat",
				"A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext_glass_damage.rvmat",

				"A3\Air_F_Jets\Plane_Fighter_01\Data\Fighter_01_glass_in.rvmat",
				"A3\Air_F_Jets\Plane_Fighter_01\Data\Fighter_01_glass_in_damage.rvmat",
				"A3\Air_F_Jets\Plane_Fighter_01\Data\Fighter_01_glass_in_damage.rvmat"
			};
		};
		LockDetectionSystem = CM_Lock_Radar;
		incomingMissileDetectionSystem = CM_Lock_Radar + CM_Missile;
		enableGPS = true;
		radarTarget = true;
		visualTarget = true;
		radarTargetSize = 0.8;
		visualTargetSize = 1.0;
		irTargetSize = 1.0;
		reportRemoteTargets = true;
		reportOwnPosition = true;
		receiveRemoteTargets = 1;
		namesound = veh_air_plane_s;
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
						angleRangeHorizontal = 360;
						angleRangeVertical = 90;
						maxTrackableSpeed = 400;
						aimDown = 0;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 26;
						angleRangeVertical = 20;
						maxTrackableSpeed = 100;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar{};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 14000;
							maxRange = 14000;
							viewDistanceLimitCoef = -1;
							objectDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							viewDistanceLimitCoef = -1;
							objectDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 7000;
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
						groundNoiseDistanceCoef = 0.2;
					};
					class AntiRadiationSensorComponent: SensorTemplateAntiRadiation
					{
						class AirTarget
						{
							minRange = 16000;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 16000;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableATL = 100;
						maxTrackableSpeed = 60;
						angleRangeHorizontal = 60;
						angleRangeVertical = 180;
					};
					class LaserSensorComponent: SensorTemplateLaser{};
					class NVSensorComponent: SensorTemplateNV{};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType = EmptyDisplayComponent;
					};
					class MinimapDisplay
					{
						componentType = MinimapDisplayComponent;
						resource = RscCustomInfoMiniMap;
					};
					class UAVDisplay
					{
						componentType = UAVFeedDisplayComponent;
					};
					class VehicleDriverDisplay
					{
						componentType = TransportFeedDisplayComponent;
						source = Driver;
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
							16000,
							8000,
							4000,
							2000
						};
						resource = RscCustomInfoSensors;
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = SensorDisplay;
				class Components
				{
					class EmptyDisplay
					{
						componentType = EmptyDisplayComponent;
					};
					class MinimapDisplay
					{
						componentType = MinimapDisplayComponent;
						resource = RscCustomInfoMiniMap;
					};
					class UAVDisplay
					{
						componentType = UAVFeedDisplayComponent;
					};
					class VehicleDriverDisplay
					{
						componentType = TransportFeedDisplayComponent;
						source = Driver;
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
							16000,
							8000,
							4000,
							2000
						};
						resource = RscCustomInfoSensors;
					};
				};
			};
			class TransportPylonsComponent
			{
				UIPicture = "\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\UI\Plane_Fighter_05_3DEN_CA.paa";
				class pylons
				{
					class pylons1
					{
						hardpoints[] = {B_BIM9X_RAIL};
						attachment = PylonRack_Missile_BIM9X_x1;
						priority = 10;
						maxweight = 300;
						UIposition[] = {0.6,0.45};
					};
					class pylons2: pylons1
					{
						UIposition[] = {0.05,0.45};
						mirroredMissilePos = 1;
					};
					class pylons3: pylons1
					{
						hardpoints[] =
						{
							B_BIM9X_RAIL,
							B_BIM9X_DUAL_RAIL,
							B_AMRAAM_D_RAIL,
							B_AMRAAM_D_DUAL_RAIL,
							B_AGM65_RAIL,
							B_GBU12
						};
						attachment = PylonMissile_Bomb_GBU12_x1;
						priority = 9;
						maxweight = 2500;
						UIposition[] = {0.55,0.35};
					};
					class pylons4: pylons3
					{
						UIposition[] = {0.1,0.35};
						mirroredMissilePos = 3;
					};
					class pylons5: pylons1
					{
						hardpoints[] =
						{
							B_BIM9X_RAIL,
							B_BIM9X_DUAL_RAIL,
							B_AMRAAM_D_RAIL,
							B_AMRAAM_D_DUAL_RAIL,
							B_AGM65_RAIL,
							B_AGM65_DUAL_RAIL,
							B_GBU12,
							B_GBU12_DUAL_RAIL,
							B_HARM_RAIL,
							B_AGM_154,
							B_SDB_QUAD_RAIL
						};
						attachment = PylonRack_Missile_AMRAAM_D_x2;
						priority = 7;
						maxweight = 5000;
						UIposition[] = {0.5,0.25};
					};
					class pylons6: pylons5
					{
						UIposition[] = {0.15,0.25};
						mirroredMissilePos = 5;
					};
					class pylonBayRight1: pylons1
					{
						hardpoints[] =
						{
							B_AMRAAM_D_INT,
							B_GBU12
						};
						priority = 4;
						maxweight = 2500;
						attachment = PylonMissile_Missile_AMRAAM_D_INT_x1;
						UIposition[] = {0.33,0.35};
						bay = 2;
					};
					class pylonBayLeft1: pylonBayRight1
					{
						UIposition[] = {0.33,0.15};
						mirroredMissilePos = 7;
						bay = 1;
					};
					class pylonBayRight2: pylonBayRight1
					{
						hardpoints[] =
						{
							B_AMRAAM_D_INT,
							B_SDB_QUAD_RAIL,
							B_AGM_154,
							B_GBU12
						};
						priority = 2;
						attachment = PylonRack_Bomb_SDB_x4;
						UIposition[] = {0.33,0.3};
					};
					class pylonBayLeft2: pylonBayLeft1
					{
						hardpoints[] =
						{
							B_AMRAAM_D_INT,
							B_SDB_QUAD_RAIL,
							B_AGM_154,
							B_GBU12
						};
						attachment = PylonRack_Bomb_SDB_x4;
						UIposition[] = {0.33,0.2};
						mirroredMissilePos = 9;
					};
					class pylonCenter1
					{
						hardpoints[] = {B_F38_CENTER_PYLON};
						attachment = PylonWeapon_220Rnd_25mm_shells;
						priority = 11;
						maxweight = 1000;
						UIposition[] = {0.33,0.25};
					};
				};
				class Bays
				{
					class BayLeft1
					{
						bayOpenTime = 0.5;
						openBayWhenWeaponSelected = 0.0;
						autoCloseWhenEmptyDelay = 2.0;
					};
					class BayRight1
					{
						bayOpenTime = 0.5;
						openBayWhenWeaponSelected = 0.0;
						autoCloseWhenEmptyDelay = 2.0;
					};
				};
				class presets
				{
					class empty
					{
						displayName = $STR_empty;
						attachment[] = {};
					};
					class default
					{
						displayName = $STR_vehicle_default;
						attachment[] =
						{
							PylonRack_Missile_BIM9X_x1,
							PylonRack_Missile_BIM9X_x1,
							PylonRack_Missile_AMRAAM_D_x2,
							PylonRack_Missile_AMRAAM_D_x2,
							PylonMissile_Bomb_GBU12_x1,
							PylonMissile_Bomb_GBU12_x1,
							PylonMissile_Missile_AMRAAM_D_INT_x1,
							PylonMissile_Missile_AMRAAM_D_INT_x1,
							PylonRack_Bomb_SDB_x4,
							PylonRack_Bomb_SDB_x4,
							PylonWeapon_220Rnd_25mm_shells
						};
					};
					class AA
					{
						displayName = $STR_A3_Cfgmagazines_titan_aa_dns;
						attachment[] =
						{
							PylonRack_Missile_BIM9X_x1,
							PylonRack_Missile_BIM9X_x1,
							PylonRack_Missile_BIM9X_x2,
							PylonRack_Missile_BIM9X_x2,
							PylonRack_Missile_AMRAAM_D_x2,
							PylonRack_Missile_AMRAAM_D_x2,
							PylonMissile_Missile_AMRAAM_D_INT_x1,
							PylonMissile_Missile_AMRAAM_D_INT_x1,
							PylonMissile_Missile_AMRAAM_D_INT_x1,
							PylonMissile_Missile_AMRAAM_D_INT_x1,
							PylonWeapon_220Rnd_25mm_shells
						};
					};
					class CAS
					{
						displayName = $STR_A3_SHOWCASE_FIXEDWINGS_BIS_TSKAAF_WP;
						attachment[] =
						{
							PylonRack_Missile_BIM9X_x1,
							PylonRack_Missile_BIM9X_x1,
							PylonRack_Missile_AGM_02_x1,
							PylonRack_Missile_AGM_02_x1,
							PylonMissile_Bomb_AGM_154_x1,
							PylonMissile_Bomb_AGM_154_x1,
							PylonMissile_Missile_AMRAAM_D_INT_x1,
							PylonMissile_Missile_AMRAAM_D_INT_x1,
							PylonRack_Bomb_SDB_x4,
							PylonRack_Bomb_SDB_x4,
							PylonWeapon_220Rnd_25mm_shells
						};
					};
					class Cluster
					{
						displayName = $STR_A3_CfgVehicles_Pylons_Presets_Cluster0;
						attachment[] =
						{
							PylonRack_Missile_BIM9X_x1,
							PylonRack_Missile_BIM9X_x1,
							PylonRack_Missile_AGM_02_x1,
							PylonRack_Missile_AGM_02_x1,
							PylonRack_2Rnd_BombCluster_01_F,
							PylonRack_2Rnd_BombCluster_01_F,
							PylonMissile_Missile_AMRAAM_D_INT_x1,
							PylonMissile_Missile_AMRAAM_D_INT_x1,
							PylonMissile_1Rnd_BombCluster_01_F,
							PylonMissile_1Rnd_BombCluster_01_F,
							PylonWeapon_220Rnd_25mm_shells
						};
					};
				};
			};
		};
		memoryPointLDust = "levy prach";
		memoryPointRDust = "pravy prach";
		memoryPointGun = "";
		memoryPointLMissile = "l strela";
		memoryPointRMissile = "p strela";
		memoryPointLRocket = "l raketa";
		memoryPointRRocket = "p raketa";
		memoryPointCM[] = {flare_launcher1};
		memoryPointCMDir[] = {flare_launcher1_dir};
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		memoryPointDriverOptics = PilotCamera_pos;
		slingLoadCargoMemoryPoints[] =
		{
			SlingLoadCargo1,
			SlingLoadCargo2,
			SlingLoadCargo3,
			SlingLoadCargo4
		};
		selectionClan = clan;
		selectionDashboard = autobacklit;
		selectionShowDamage = poskozeni;
		class TransportItems{};
		class Turrets{};
		unitInfoType = RscOptics_CAS_Pilot;
		driverWeaponsInfoType = RscOptics_CAS_01_TGP;
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
					initFov = (75 / 120);
					minFov = (75 / 120);
					maxFov = (75 / 120);
					directionStabilized = true;
					visionMode[] =
					{
						Normal,
						NVG,
						Ti
					};
					thermalMode[] = {0,1};
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[] =
					{
						OpticsCHAbera2,
						OpticsBlur2
					};
				};
				class Medium: Wide
				{
					opticsDisplayName = "MFOV";
					initFov = (14.4 / 120);
					minFov = (14.4 / 120);
					maxFov = (14.4 / 120);
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName = "NFOV";
					initFov = (4.8 / 120);
					minFov = (4.8 / 120);
					maxFov = (4.8 / 120);
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
			};
			minTurn = -180;
			maxTurn = 180;
			initTurn = 0;
			minElev = -10;
			maxElev = 90;
			initElev = 0;
			maxXRotSpeed = 1.0;
			maxYRotSpeed = 1.0;
			maxMouseXRotSpeed = 0.5;
			maxMouseYRotSpeed = 0.5;
			pilotOpticsShowCursor = true;
			controllable = true;
		};
		#include "pip.hpp"
		#include "mfd.hpp"
		class AnimationSources
		{
			class canopy_hide
			{
				source = user;
				animPeriod = 0.001;
				initPhase = false;
			};
			class ejection_seat_hide
			{
				source = user;
				animPeriod = 0.001;
				initPhase = false;
			};
			class ejection_seat_motion
			{
				source = user;
				animPeriod = 0.25;
				initPhase = false;
			};
			class tailhook
			{
				source = user;
				animPeriod = 1.5;
				initPhase = true;
			};
			class gear_1_hook_down
			{
				source = user;
				animPeriod = 1.5;
				initPhase = false;
			};
			class tailhook_door_1
			{
				source = user;
				animPeriod = 1.5;
				initPhase = true;
			};
			class tailhook_door_2
			{
				source = user;
				animPeriod = 1.5;
				initPhase = true;
			};
			class tailhook_door_3
			{
				source = user;
				animPeriod = 1.5;
				initPhase = true;
			};
			class pylon_1_hide
			{
				source = user;
				animPeriod = 0.001;
				initPhase = false;
			};
			class pylon_2_hide
			{
				source = user;
				animPeriod = 0.001;
				initPhase = false;
			};
			class pylon_3_hide
			{
				source = user;
				animPeriod = 0.001;
				initPhase = false;
			};
			class pylon_4_hide
			{
				source = user;
				animPeriod = 0.001;
				initPhase = false;
			};
			class pylon_5_hide
			{
				source = user;
				animPeriod = 0.001;
				initPhase = false;
			};
			class pylon_6_hide
			{
				source = user;
				animPeriod = 0.001;
				initPhase = false;
			};
			class throttle_pilot
			{
				source = user;
				animPeriod = 0.5;
				initPhase = false;
			};
			class wing_fold_L
			{
				source = user;
				animPeriod = 2.5;
				initPhase = false;
				displayName = $STR_A3_action_wings_fold;
				mass = 0;
				forceAnimatePhase = true;
				forceAnimatePhase2 = false;
				forceAnimate[] =
				{
					wing_fold_L,1,
					wing_fold_R,1,
					wing_fold_cover_L,1,
					wing_fold_cover_R,1,
					wing_fold_hinge_L_1,1,
					wing_fold_hinge_L_2,1,
					wing_fold_hinge_R_1,1,
					wing_fold_hinge_R_2,1
				};
				forceAnimate2[] =
				{
					wing_fold_L,0,
					wing_fold_R,0,
					wing_fold_cover_L,0,
					wing_fold_cover_R,0,
					wing_fold_hinge_L_1,0,
					wing_fold_hinge_L_2,0,
					wing_fold_hinge_R_1,0,
					wing_fold_hinge_R_2,0
				};
			};
			class wing_fold_R
			{
				source = user;
				animPeriod = 2.5;
				initPhase = false;
			};
			class wing_fold_cover_L
			{
				source = user;
				animPeriod = 2.5;
				initPhase = false;
			};
			class wing_fold_cover_R
			{
				source = user;
				animPeriod = 2.5;
				initPhase = false;
			};
			class wing_fold_hinge_L_1
			{
				source = user;
				animPeriod = 2.5;
				initPhase = false;
			};
			class wing_fold_hinge_L_2
			{
				source = user;
				animPeriod = 2.5;
				initPhase = false;
			};
			class wing_fold_hinge_R_1
			{
				source = user;
				animPeriod = 2.5;
				initPhase = false;
			};
			class wing_fold_hinge_R_2
			{
				source = user;
				animPeriod = 2.5;
				initPhase = false;
			};
			class HitAvionics
			{
				source = Hit;
				hitpoint = HitAvionics;
				raw = true;
			};
			class HitLCRudder
			{
				source = Hit;
				hitpoint = HitLCRudder;
				raw = true;
			};
			class HitRRudder
			{
				source = Hit;
				hitpoint = HitRRudder;
				raw = true;
			};
			class HitLCElevator
			{
				source = Hit;
				hitpoint = HitLCElevator;
				raw = true;
			};
			class HitRElevator
			{
				source = Hit;
				hitpoint = HitRElevator;
				raw = true;
			};
			class HitEngine
			{
				source = Hit;
				hitpoint = HitEngine;
				raw = true;
			};
			class Damper_1_source
			{
				source = damper;
				wheel = Wheel_1;
			};
			class Damper_2_source
			{
				source = damper;
				wheel = Wheel_2;
			};
			class Damper_3_source
			{
				source = damper;
				wheel = Wheel_3;
			};
			class Wheel_1_source
			{
				source = wheel;
				wheel = Wheel_1;
			};
			class Wheel_2_source
			{
				source = wheel;
				wheel = Wheel_2;
			};
			class Wheel_3_source
			{
				source = wheel;
				wheel = Wheel_3;
			};
			class FakeCollisionLight_White_1_source
			{
				source = MarkerLight;
				markerLight = FakeCollisionLight_White_1;
			};
			class FakeCollisionLight_White_2_source
			{
				source = MarkerLight;
				markerLight = FakeCollisionLight_White_2;
			};
		};
		class MarkerLights
		{
			/*
			class PositionLight_Red_1
			{
				color[] =
				{
					0.8, // R
					0.0, // G
					0.0 // B
				};
				ambient[] =
				{
					0.08, // R
					0.0, // G
					0.0 // B
				};
				intensity = 75;
				name = PositionLight_Red_1_pos;
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
			class PositionLight_Green_1: PositionLight_Red_1
			{
				color[] =
				{
					0.0, // R
					0.8, // G
					0.0 // B
				};
				ambient[] =
				{
					0.0, // R
					0.08, // G
					0.0 // B
				};
				name = PositionLight_Green_1_pos;
			};
			class CollisionLight_White_1: PositionLight_Red_1
			{
				color[] =
				{
					1.0, // R
					1.0, // G
					1.0 // B
				};
				ambient[] =
				{
					0.1, // R
					0.1, // G
					0.1 // B
				};
				name = CollisionLight_White_1_pos;
				blinking = true;
				blinkingStartsOn = true;
				blinkingPattern[] = {0.1,0.9};
				blinkingPatternGuarantee = true;
				drawLightSize = 0.35;
				drawLightCenterSize = 0.05;
			};
			class CollisionLight_White_2: CollisionLight_White_1
			{
				name = CollisionLight_White_2_pos;
			};
			*/
			class FakeCollisionLight_White_1
			{
				color[] =
				{
					0.8, // R
					0.0, // G
					0.0 // B
				};
				ambient[] =
				{
					0.08, // R
					0.0, // G
					0.0 // B
				};
				intensity = 1;
				name = FakeCollisionLight_White_1_pos;
				drawLight = 0;
				drawLightSize = 0;
				drawLightCenterSize = 0;
				activeLight = false;
				blinking = true;
				blinkingStartsOn = true;
				blinkingPattern[] = {0.1,0.9};
				blinkingPatternGuarantee = true;
				dayLight = false;
				useFlare = false;
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
			class FakeCollisionLight_White_2: FakeCollisionLight_White_1
			{
				name = FakeCollisionLight_White_2_pos;
			};
		};
		class Reflectors
		{
			class Light
			{
				position = Light_pos;
				direction = Light_dir;
				hitpoint = Light;
				selection = Light;
				color[] =
				{
					0.85, // R
					0.95, // G
					1 // B
				};
				ambient[] =
				{
					0.0085, // R
					0.0095, // G
					0.01 // B
				};
				intensity = 500000;
				size = 1;
				innerAngle = 15;
				outerAngle = 50;
				coneFadeCoef = 1;
				useFlare = true;
				dayLight = false;
				FlareSize = 2;
				flareMaxDistance = 500;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 4;
					hardLimitStart = 350;
					hardLimitEnd = 650;
				};
			};
		};
		#include "flightModel.hpp"
		class UserActions
		{
			class Plane_Fighter_05_Eject
			{
				priority = 0.05;
				shortcut = Eject;
				displayName = $STR_A3_action_eject;
				condition = "player in this && {speed this > 1}";
				statement = "[this] spawn BIS_fnc_planeEjection";
				position = pilotcontrol;
				radius = 10;
				onlyforplayer = true;
				showWindow = false;
				hideOnUse = true;
			};
			class Plane_Fighter_05_tailhook_down: Plane_Fighter_05_Eject
			{
				displayName = $STR_A3_action_tailhook_down;
				shortcut = "";
				condition = "this animationPhase 'tailhook' > 0.1  and {speed this > 100}";
				statement = "this animate ['tailhook',0]; this animate ['tailhook_door_1',0]; this animate ['tailhook_door_2',0]; this animate ['tailhook_door_3',0]; this say 'Plane_Fighter_01_tailhook_down_sound'; this say3D 'Plane_Fighter_01_tailhook_down_sound'; this SetUserMFDvalue [4,1]; [this] spawn BIS_fnc_AircraftTailhook;";
			};
			class Plane_Fighter_05_tailhook_up: Plane_Fighter_05_tailhook_down
			{
				displayName = $STR_A3_action_tailhook_up;
				condition = "this animationPhase 'tailhook' < 0.1";
				statement = "this animate ['tailhook',1]; this animate ['tailhook_door_1',1]; this animate ['tailhook_door_2',1]; this animate ['tailhook_door_3',1]; this say 'Plane_Fighter_01_tailhook_up_sound'; this say3D 'Plane_Fighter_01_tailhook_up_sound'; this SetUserMFDvalue [4,0];";
			};
			class Plane_Fighter_05_fold_wings: Plane_Fighter_05_Eject
			{
				displayName = $STR_A3_action_wings_fold;
				shortcut = "";
				condition = "this animationPhase 'wing_fold_L' < 0.1 and (speed this) < 40 and player in this";
				statement = "this animate ['wing_fold_L',1]; this animate ['wing_fold_R',1]; this animate ['wing_fold_cover_L',1]; this animate ['wing_fold_cover_R',1]; this animate ['wing_fold_hinge_L_1',1]; this animate ['wing_fold_hinge_L_2',1]; this animate ['wing_fold_hinge_R_1',1]; this animate ['wing_fold_hinge_R_2',1]; this say3D 'Plane_Fighter_01_foldwing_sound'";
			};
			class Plane_Fighter_05_unfold_wings: Plane_Fighter_05_fold_wings
			{
				displayName = $STR_A3_action_wings_unfold;
				condition = "this animationPhase 'wing_fold_L' > 0.9 and (speed this) < 40 and player in this";
				statement = "this animate ['wing_fold_L',0]; this animate ['wing_fold_R',0]; this animate ['wing_fold_cover_L',0]; this animate ['wing_fold_cover_R',0]; this animate ['wing_fold_hinge_L_1',0]; this animate ['wing_fold_hinge_L_2',0]; this animate ['wing_fold_hinge_R_1',0]; this animate ['wing_fold_hinge_R_2',0]; this say3D 'Plane_Fighter_01_foldwing_sound'";
			};
		};
		class TextureSources
		{
			class DarkGrey
			{
				displayName = $STR_A3_A_TEXTURESOURCES_DARKGREY0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext1_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext2_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext3_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_pylon_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext_glass_CA.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int1_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int2_CO.paa"
				};
				factions[] =
				{
					BLU_F,
					BLU_T_F,
					BLU_W_F
				};
			};
			class DarkGreyCamo
			{
				displayName = $STR_A3_A_TEXTURESOURCES_DARKGREYCAMO0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext1_Camo_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext2_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext3_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_pylon_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext_glass_CA.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int1_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int2_CO.paa"
				};
				factions[] =
				{
					BLU_F,
					BLU_T_F,
					BLU_W_F
				};
			};
		};
		animationList[] = {};
		textureList[] =
		{
			DarkGrey,1,
			DarkGreyCamo,0
		};
		#include "physX.hpp"
		extCameraPosition[] =
		{
			0.0, // X
			3.0, // Y
			-20.0 // Z
		};
		class ViewPilot: ViewPilot
		{
			initFov = 0.9;
			initAngleX = 0;
			minAngleX = -40;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -130;
			maxAngleY = 130;
			minMoveX = -0.1;
			maxMoveX = 0.1;
			minMoveY = -0.025;
			maxMoveY = 0.05;
			minMoveZ = -0.1;
			maxMoveZ = 0.1;
		};
		class Exhausts
		{
			class Exhaust_1
			{
				position = exhaust_pos;
				direction = exhaust_dir;
				effect = ExhaustsEffectPlaneHP;
				engineIndex = 0;
			};
		};
		class WingVortices
		{
			class WingTipLeft
			{
				effectName = FX_WingVortices_FighterJet;
				position = body_vapour_L_E;
			};
			class WingTipRight
			{
				effectName = FX_WingVortices_FighterJet;
				position = body_vapour_R_E;
			};
			class BodyLeft
			{
				effectName = FX_FuselageVapour_FighterJet;
				position = body_vapour_L_S;
			};
			class BodyRight
			{
				effectName = FX_FuselageVapour_FighterJet;
				position = body_vapour_R_S;
			};
		};
		class Library
		{
			libEnable = true;
			libTextDesc = "";
		};
		tailHook = true;
		class CarrierOpsCompatability
		{
			ArrestHookAnimationList[] =
			{
				tailhook,
				tailhook_door_1,
				tailhook_door_2,
				tailhook_door_3
			};
			ArrestHookAnimationStates[] =
			{
				0,
				0.53,
				1
			};
			ArrestHookMemoryPoint = tailhook_pos;
			ArrestMaxAllowedSpeed = 295;
			ArrestSlowDownStep = 0.7;
			ArrestVelocityReduction = -12;
			LaunchVelocity = 300;
			LaunchVelocityIncrease = 10;
			LaunchAccelerationStep = 0.001;
			LaunchBarMemoryPoint = gear_1_hook_pos;
		};
		class AircraftAutomatedSystems
		{
			wingStateControl = true;
			wingFoldAnimations[] =
			{
				wing_fold_L,
				wing_fold_R,
				wing_fold_cover_L,
				wing_fold_cover_R,
				wing_fold_hinge_L_1,
				wing_fold_hinge_L_2,
				wing_fold_hinge_R_1,
				wing_fold_hinge_R_2
			};
			wingStateFolded = true;
			wingStateUnFolded = false;
			wingAutoUnFoldSpeed = 40;
		};
		class EjectionSystem
		{
			EjectionSeatEnabled = true;
			EjectionDual = false;
			EjectionSeatClass = B_Ejection_Seat_Plane_Fighter_05_F;
			CanopyClass = Plane_Fighter_05_Canopy_F;
			EjectionSeatHideAnim = ejection_seat_hide;
			EjectionSeatRailAnim = ejection_seat_motion;
			CanopyHideAnim = canopy_hide;
			EjectionSeatPos = pos_eject;
			CanopyPos = pos_eject_canopy;
			EjectionSoundExt = Plane_Fighter_01_ejection_ext_sound;
			EjectionSoundInt = Plane_Fighter_01_ejection_in_sound;
			EjectionParachute = Steerable_Parachute_F;
			EjectionSeatForce = 50;
			CanopyForce = 30;
		};
		class Eventhandlers: Eventhandlers
		{
			hit = "_this call BIS_fnc_PlaneAiEject";
			landing = "[_this,true] call bis_fnc_aircraftTailhookAi";
			landingcanceled = "[_this,false] call bis_fnc_aircraftTailhookAi";
			engine = "_this call bis_fnc_aircraftFoldingWings";
			gear = "_this call bis_fnc_aircraftFoldingWings";
		};
	};
	class Plane_Fighter_05_wreck_F: PlaneWreck
	{
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.855;
			verticalOffsetWorld = 0;
			init = "''";
		};
		author = $STR_A3_A_AveryTheKitty_and_OlliKoskelainen;
		scope = protected;
		class Armory
		{
			disabled = true;
		};
		model = "\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Plane_Fighter_05_wreck_F.p3d";
		typicalCargo[] = {};
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 0;
	};
	class Plane_Fighter_05_Canopy_F: Plane_Canopy_Base_F
	{
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.284;
			verticalOffsetWorld = 0;
			init = "''";
		};
		author = $STR_A3_A_AveryTheKitty_and_OlliKoskelainen;
		scope = protected;
		displayName = $STR_A3_Fighter_01_Canopy_name;
		model = "\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Plane_Fighter_05_Canopy_F.p3d";
	};
	class Ejection_Seat_Plane_Fighter_05_base_F: Ejection_Seat_Base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = private;
		displayName = $STR_A3_Ejection_Seat_01_name;
		model = "\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Plane_Fighter_05_Ejection_Seat_F.p3d";
		icon = iconParachute;
		picture = "\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";
		driverAction = Pilot_Plane_Fighter_Ejection;
		cargoAction[] = {Pilot_Plane_Fighter_Ejection};
	};

    /* Factions */
    #include "cfgBLUFOR.hpp"    // US & BAF
};