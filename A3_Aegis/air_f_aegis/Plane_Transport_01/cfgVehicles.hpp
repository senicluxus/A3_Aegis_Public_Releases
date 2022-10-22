class CfgVehicles
{
    /* Inheritance Tree */
    #include "\A3_Aegis\cfgPlanes.hpp"

    /* Bases */
	class Plane_Transport_01_base_F: Plane_Base_F
	{
		scope = protected;
		vehicleClass = Air;
		displayName = $STR_A3_A_CfgVehicles_Plane_Transport_01_base_F0;
		author = $STR_A3_A_AveryTheKitty;
		simulation = airplaneX;
		crewVulnerable = true;
		driverAction = Pilot_Plane_Transport_01;
		driverLeftHandAnimName = Control_wheel_1;
		driverRightHandAnimName = Control_wheel_1;
		driverLeftLegAnimName = Pedals_left_1;
		driverRightLegAnimName = Pedals_right_1;
		precisegetinout = false;
		driverCanEject = true;
		cargoCanEject = true;
		ejectDeadGunner = false;
		ejectDeadCargo = false;
		ejectDeadDriver = false;
		disableInventory = false;
		hideWeaponsCargo = true;
		getInAction = GetInHigh;
		getOutAction = GetOutHigh;
		getInRadius = 2.5;
		supplyRadius = 9;
		transportSoldier = 54;
		picture = "\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\UI\Plane_Transport_01_CA.paa";
		icon = "\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\UI\Map_Plane_Transport_01_CA.paa";
		mapSize = 25;
		model = "\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Plane_Transport_01_F.p3d";
		animated = true;
		hiddenSelections[] =
		{
			camo1,
			camo2,
			camo3
		};
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_blue_CO.paa",
			"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_blue_CO.paa",
			"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_CO.paa"
		};
		weapons[] = {CMFlareLauncher_Quadruples};
		magazines[] = {240Rnd_CMFlare_Chaff_Magazine};
		driveOnComponent[] = {};
		cabinOpening = false;
		gearRetracting = true;
		geardowntime = 3;
		gearuptime = 4.5;
		lightOnGear = true;
		damperSize = 0.01;
		damperForce = 0.01;
		damperDamping = 0;
		canFloat = false;
		formationX = 100;
		formationZ = 100;
		fuelCapacity = 10000;
		availableForSupportTypes[] = {Drop};
		armor = 70;
		armorStructural = 1;
		armorLights = 1;
		damageResistance = 0.004;
		destrType = DestructWreck;
		epeImpulseDamageCoef = 50;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 3;
				explosionShielding = 5;
				name = HitHull;
				passThrough = 0.5;
				visual = zbytek;
				radius = 0.3;
				minimalHit = 0.02;
				depends = Total;
				material = -1;
			};
			class HitEngine: HitHull
			{
				armor = 1.5;
				explosionShielding = 2;
				name = HitEngine;
				passThrough = 0.5;
				visual = engine_1;
				radius = 0.55;
				minimalHit = 0.1;
			};
			class HitEngine2: HitEngine
			{
				armor = 1.5;
				explosionShielding = 2;
				name = HitEngine2;
				passThrough = 0.5;
				visual = engine_2;
				radius = 0.55;
				minimalHit = 0.1;
			};
			class HitEngine3: HitEngine
			{
				armor = 1.5;
				explosionShielding = 2;
				name = HitEngine3;
				passThrough = 0.5;
				visual = engine_3;
				radius = 0.55;
				minimalHit = 0.1;
			};
			class HitEngine4: HitEngine
			{
				armor = 1.5;
				explosionShielding = 2;
				name = HitEngine4;
				passThrough = 0.5;
				visual = engine_4;
				radius = 0.55;
				minimalHit = 0.1;
			};
			class HitAvionics: HitHull
			{
				armor = 3;
				explosionShielding = 1;
				name = HitAvionics;
				passThrough = 0.2;
				visual = "";
				radius = 0.2;
			};
			class HitAmmo: HitHull
			{
				armor = 3;
				explosionShielding = 1;
				name = HitAmmo;
				passThrough = 0;
				visual = "";
				radius = 0.3;
			};
			class HitFuel: HitHull
			{
				armor = 3;
				explosionShielding = 4;
				name = HitFuel;
				passThrough = 0.5;
				visual = "";
				radius = 0.3;
				minimalHit = 0.1;
			};
			class HitLAileron: HitHull
			{
				armor = 1.5;
				explosionShielding = 3;
				name = HitLAileron;
				passThrough = 0.1;
				visual = aileron_1_1;
				radius = 0.2;
				minimalHit = 0.1;
			};
			class HitRAileron: HitLAileron
			{
				armor = 1.5;
				explosionShielding = 3;
				name = HitRAileron;
				passThrough = 0.1;
				visual = aileron_1_2;
				radius = 0.2;
				minimalHit = 0.1;
			};
			class HitCRudder: HitHull
			{
				armor = 1.5;
				explosionShielding = 3;
				name = HitCRudder;
				passThrough = 0.1;
				visual = rudder;
				radius = 0.2;
				minimalHit = 0.1;
			};
			class HitLCElevator: HitHull
			{
				armor = 1.5;
				explosionShielding = 3;
				name = HitLCElevator;
				passThrough = 0.1;
				visual = elevator_l;
				radius = 0.2;
				minimalHit = 0.1;
			};
			class HitRElevator: HitLCElevator
			{
				armor = 1.5;
				explosionShielding = 3;
				name = HitRElevator;
				passThrough = 0.1;
				visual = elevator_r;
				radius = 0.2;
				minimalHit = 0.1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body.rvmat",
				"A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_damage.rvmat",
				"A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_destruct.rvmat",
				"A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings.rvmat",
				"A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_damage.rvmat",
				"A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_destruct.rvmat",
				"A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior.rvmat",
				"A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_damage.rvmat",
				"A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_destruct.rvmat",
				"A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_sklo.rvmat",
				"A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_sklo_damage.rvmat",
				"A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_sklo_damage.rvmat",
				"A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_sklo_in.rvmat",
				"A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_sklo_in_damage.rvmat",
				"A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_sklo_in_damage.rvmat"
			};
		};
		class UserActions
		{
			class Ramp_Open
			{
				userActionID = 60;
				displayName = $STR_ACTION_RAMP_OPEN0;
				textToolTip = $STR_ACTION_RAMP_OPEN0;
				displayNameDefault = "<img image='\A3\UI_F\Data\IGUI\Cfg\Actions\open_door_CA.paa' size='2.5' />";
				position = "";
				condition = "this doorPhase ""Door_1_source"" < 0.5 AND Alive(this) && ({player == _x} count [driver this, this turretUnit [0], this turretUnit [3], this turretUnit [4]] > 0) && ((this getVariable ['bis_disabled_Ramp',0]) != 1)";
				statement = "this animateDoor ['Door_1_source', 1] && this animateDoor ['ramp_top', 1]";
				priority = 1.5;
				radius = 15;
				radiusView = 0.2;
				showIn3D = 17;
				available = true;
				showWindow = false;
				onlyForPlayer = true;
				shortcut = "";
			};
			class Ramp_Close: Ramp_Open
			{
				userActionID = 61;
				displayName = $STR_ACTION_RAMP_CLOSE0;
				textToolTip = $STR_ACTION_RAMP_CLOSE0;
				condition = "this doorPhase ""Door_1_source"" > 0.5 AND Alive(this) && ({player == _x} count [driver this, this turretUnit [0], this turretUnit [3], this turretUnit [4]] > 0) && ((this getVariable ['bis_disabled_Ramp',0]) != 1)";
				statement = "this animateDoor ['Door_1_source', 0] && this animateDoor ['ramp_top', 0]";
			};
		};
		LockDetectionSystem = CM_Lock_Radar+CM_Lock_Laser;
		incomingMissileDetectionSystem = CM_Lock_Radar+CM_Missile;
		enableGPS = true;
		radarTargetSize = 2;
		visualTargetSize = 1.8;
		irTargetSize = 1.8;
		namesound = Plane;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 4000;
							maxRange = 4000;
							viewDistanceLimitCoef = -1;
							objectDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 4000;
							maxRange = 4000;
							viewDistanceLimitCoef = -1;
							objectDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 240;
						angleRangeHorizontal = 110;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						aimDown = 0;
					};
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
						range[] = {4000,2000,16000,8000};
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
						range[] = {4000,2000,16000,8000};
						resource = RscCustomInfoSensors;
					};
				};
			};
		};
		memoryPointLDust = "levy prach";
		memoryPointRDust = "pravy prach";
		memoryPointCM[] =
		{
			flare_launcher1,
			flare_launcher2,
			flare_launcher3,
			flare_launcher4
		};
		memoryPointCMDir[] =
		{
			flare_launcher1_dir,
			flare_launcher2_dir,
			flare_launcher3_dir,
			flare_launcher4_dir
		};
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		memoryPointDriverOptics = PilotCamera_pos;
		selectionClan = clan;
		selectionDashboard = display_off;
		selectionFireAnim = zasleh;
		selectionShowDamage = poskozeni;
		class TransportBackpacks
		{
			bag_xx(B_Parachute,3);
		};
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Toolkit,1);
			item_xx(Medikit,1);
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				commanding = -1;
				animationSourceBody = "";
				animationSourceGun = "";
				body = "";
				castGunnerShadow = true;
				gun = "";
				gunBeg = "";
				gunEnd = "";
				gunnerCompartments = Compartment1;
				gunnerForceOptics = false;
				gunnerAction = Pilot_Plane_Transport_01;
				gunnerInAction = Pilot_Plane_Transport_01;
				gunnerGetInAction = GetInHigh;
				gunnerGetOutAction = GetOutHigh;
				gunnerLeftHandAnimName = Control_wheel_2;
				gunnerRightHandAnimName = Control_wheel_2;
				gunnerLeftLegAnimName = Pedals_left_2;
				gunnerRightLegAnimName = Pedals_right_2;
				gunnerUsePilotView = true;
				gunnerOpticsModel = "";
				isCopilot = true;
				LODTurnedIn = 1100;
				LODTurnedOut = 1100;
				memoryPointsGetInGunner = "pos driver";
				memoryPointsGetInGunnerDir = "pos driver dir";
				proxyIndex = 1;
			};
			class PassengerTurret_01: NewTurret
			{
				animationSourceBody = "";
				animationSourceGun = "";
				body = "";
				castGunnerShadow = true;
				commanding = -2;
				gun = "";
				gunBeg = "";
				gunEnd = "";
				gunnerCompartments = Compartment1;
				gunnerForceOptics = false;
				gunnerAction = Passenger_Plane_Transport_01;
				gunnerInAction = Passenger_Plane_Transport_01;
				gunnerGetInAction = GetInHigh;
				gunnerGetOutAction = GetOutHigh;
				LODTurnedIn = 1100;
				LODTurnedOut = 1100;
				memoryPointsGetInGunner = "pos driver";
				memoryPointsGetInGunnerDir = "pos driver dir";
				gunnerName = "Passenger";
				gunnerUsesPilotView = true;
				primaryGunner = false;
				proxyIndex = 2;
				startEngine = false;
				inGunnerMayFire = false;
			};
		};
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
					initFov = (15 / 120);
					minFov = (15 / 120);
					maxFov = (15 / 120);
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName = "NFOV";
					initFov = (3.75 / 120);
					minFov = (3.75 / 120);
					maxFov = (3.75 / 120);
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics = true;
				showUAVViewInOptics = false;
				showSlingLoadManagerInOptics = false;
			};
			minTurn = -180;
			maxTurn = 180;
			initTurn = 0;
			minElev = -10;
			maxElev = 90;
			initElev = 0;
			maxXRotSpeed = 1.3;
			maxYRotSpeed = 1.3;
			pilotOpticsShowCursor = true;
			controllable = true;
		};
		class RenderTargets{};
		insideSoundCoef = 0.3;
		class AnimationSources
		{
			class door_2_2
			{
				source = door;
				initPhase = false;
				animPeriod = 1;
			};
			class door_2_1
			{
				source = door;
				initPhase = false;
				animPeriod = 1;
			};
			class door_1
			{
				source = door;
				initPhase = false;
				animPeriod = 1;
			};
			class Door_1_source
			{
				source = door;
				initPhase = false;
				animPeriod = 2.5;
				sound = ServoRampSound;
			};
			class Hide_Cargoseats_source
			{
				source = user;
				initPhase = false;
				animPeriod = 0.001;
			};
			class Never_source
			{
				source = door;
				initPhase = false;
				animPeriod = 1;
			};
			class Wheel_1_1_source
			{
				source = wheel;
				wheel = Wheel_1_1;
			};
			class Wheel_2_1_source
			{
				source = wheel;
				wheel = Wheel_2_1;
			};
			class Wheel_2_2_source
			{
				source = wheel;
				wheel = Wheel_2_2;
			};
			class Wheel_3_1_source
			{
				source = wheel;
				wheel = Wheel_3_1;
			};
			class Wheel_3_2_source
			{
				source = wheel;
				wheel = Wheel_3_2;
			};
			class Damper_1_1_source
			{
				source = damper;
				wheel = Wheel_1_1;
			};
			class Damper_2_1_source
			{
				source = damper;
				wheel = Wheel_2_1;
			};
			class Damper_2_2_source
			{
				source = damper;
				wheel = Wheel_3_1;
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
			class HitEngine2
			{
				source = Hit;
				hitpoint = HitEngine2;
				raw = true;
			};
			class HitEngine3
			{
				source = Hit;
				hitpoint = HitEngine3;
				raw = true;
			};
			class HitEngine4
			{
				source = Hit;
				hitpoint = HitEngine4;
				raw = true;
			};
		};
		class MarkerLights
		{
			class PositionRed
			{
				color[] = {0.8,0,0};
				ambient[] = {0.08,0,0};
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
			class PositionGreen: PositionRed
			{
				color[] = {0,0.8,0};
				ambient[] = {0,0.08,0};
				name = PositionLight_green_1_pos;
			};
			class PositionWhite1: PositionRed
			{
				color[] = {1.0,1.0,1.0};
				ambient[] = {0.1,0.1,0.1};
				name = PositionLight_white_1_pos;
			};
			class PositionWhite2: PositionWhite1
			{
				name = PositionLight_white_2_pos;
				blinking = true;
				blinkingStartsOn = true;
				blinkingPattern[] = {0.1,0.9};
				blinkingPatternGuarantee = true;
				drawLightSize = 0.35;
				drawLightCenterSize = 0.05;
			};
			class PositionWhite3: PositionWhite2
			{
				name = PositionLight_white_3_pos;
			};
		};
		class Reflectors
		{
			class Left
			{
				color[] = {7000,7500,10000};
				ambient[] = {70,75,100};
				intensity = 50;
				size = 1;
				innerAngle = 5;
				outerAngle = 65;
				coneFadeCoef = 10;
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				useFlare = true;
				flareSize = 10;
				flareMaxDistance = 250;
				dayLight = false;
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
			class Right: Left
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			class Left2: Left
			{
				position = "L2 svetlo";
				direction = "konec L2 svetla";
				hitpoint = "L2 svetlo";
				selection = "L2 svetlo";
			};
			class Right2: Left
			{
				position = "P2 svetlo";
				direction = "konec P2 svetla";
				hitpoint = "P2 svetlo";
				selection = "P2 svetlo";
			};
		};
		aggregateReflectors[] =
		{
			{
				Left,
				Left2
			},
			{
				Right,
				Right2
			}
		};
		#include "flightModel.hpp"
		class TextureSources
		{
			class Blue
			{
				displayName = $STR_A3_TEXTURESOURCES_BLUE0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_blue_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_blue_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_CO.paa"
				};
				factions[] = {};
			};
			class Olive
			{
				displayName = $STR_A3_TEXTURESOURCES_OLIVE0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_olive_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_olive_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_CO.paa"
				};
				factions[] = {};
			};
			class Hex
			{
				displayName = $STR_A3_TEXTURESOURCES_HEX0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_OPFOR_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_OPFOR_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_OPFOR_CO.paa"
				};
				factions[] = {};
			};
			class GreenHex
			{
				displayName = $STR_A3_TEXTURESOURCES_GREENHEX0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_OPFOR_CO.paa"
				};
				factions[] = {};
			};
			class Grey
			{
				displayName = $STR_A3_TEXTURESOURCES_GREY0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_grey_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_grey_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_OPFOR_CO.paa"
				};
				factions[] = {};
			};
			class Indep
			{
				displayName = $STR_A3_TEXTURESOURCES_INDEP0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_INDP_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_INDP_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_CO.paa"
				};
				factions[] = {};
			};
		};
		animationList[] = {};
		textureList[] =
		{
			Blue,1,
			Olive,0,
			Hex,0,
			GreenHex,0,
			Grey,0,
			Indep,0
		};
		#include "PhysX.hpp"
		extCameraPosition[] = {0,3,-40};
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
				position = exhaust1;
				direction = exhaust1_dir;
				effect = ExhaustsEffectPlaneBig;
				engineIndex = 0;
			};
			class Exhaust_2
			{
				position = exhaust2;
				direction = exhaust2_dir;
				effect = ExhaustsEffectPlaneBig;
				engineIndex = 1;
			};
			class Exhaust_3
			{
				position = exhaust3;
				direction = exhaust3_dir;
				effect = ExhaustsEffectPlaneBig;
				engineIndex = 2;
			};
			class Exhaust_4
			{
				position = exhaust4;
				direction = exhaust4_dir;
				effect = ExhaustsEffectPlaneBig;
				engineIndex = 3;
			};
		};
		class WingVortices
		{
			class WingTipLeft
			{
				effectName = WingVortices;
				position = body_vapour_L_E;
			};
			class WingTipRight
			{
				effectName = WingVortices;
				position = body_vapour_R_E;
			};
		};
		class Library
		{
			libEnable = true;
			libTextDesc = "";
		};
	};
	class Plane_Transport_01_infantry_base_F: Plane_Transport_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = private;
		scopeCurator = private;
		cargoCompartments[] = {Compartment2};
		cargoGetInAction[] = {GetInLow};
		cargoGetOutAction[] = {GetOutLow};
		getInProxyOrder[] =
		{
			3,
			4,
			5,
			6,
			7,
			8,
			9,
			10,
			11,
			12,
			13,
			14,
			15,
			16,
			17,
			18,
			19,
			20,
			21,
			22,
			23,
			24,
			25,
			26,
			27,
			28,
			29,
			30,
			31,
			32,
			33,
			34,
			35,
			36,
			37,
			38,
			39,
			40,
			41,
			42,
			43,
			44,
			45,
			46,
			47,
			48,
			49,
			50,
			51,
			52,
			53,
			54,
			55,
			56
		};
		cargoProxyIndexes[] =
		{
			30,
			26,
			9,
			15,
			23,
			7,
			42,
			35,
			17,
			53,
			55,
			51,
			44,
			49,
			32,
			6,
			13,
			21,
			4,
			11,
			19,
			29,
			36,
			43,
			27,
			34,
			41,
			10,
			16,
			25,
			8,
			24,
			14,
			33,
			39,
			47,
			31,
			46,
			37,
			18,
			22,
			5,
			12,
			20,
			3,
			45,
			38,
			56,
			52,
			54,
			50,
			40,
			48,
			28
		};
		cargoAction[] =
		{
			passenger_generic01_foldhands,
			passenger_generic01_foldhands,
			passenger_low01,
			passenger_generic01_leanright,
			passenger_apc_narrow_generic02,
			passenger_apc_generic01,
			passenger_apc_generic04,
			passenger_generic01_leanleft,
			passenger_apc_narrow_generic02,
			passenger_apc_generic01,
			passenger_apc_narrow_generic01,
			passenger_apc_narrow_generic03,
			passenger_apc_generic04,
			passenger_apc_generic01,
			passenger_apc_generic03,
			passenger_generic01_foldhands,
			passenger_apc_generic03,
			passenger_apc_narrow_generic03,
			passenger_apc_generic02,
			passenger_apc_generic03,
			passenger_apc_generic04,
			passenger_generic01_leanleft,
			passenger_apc_narrow_generic02,
			passenger_apc_generic01,
			passenger_generic01_foldhands,
			passenger_generic01_foldhands,
			passenger_low01,
			passenger_generic01_leanright,
			passenger_apc_narrow_generic02,
			passenger_apc_generic01,
			passenger_apc_generic04,
			passenger_generic01_leanleft,
			passenger_apc_narrow_generic02,
			passenger_apc_generic01,
			passenger_apc_narrow_generic01,
			passenger_apc_narrow_generic03,
			passenger_apc_generic04,
			passenger_apc_generic01,
			passenger_apc_generic03,
			passenger_generic01_foldhands,
			passenger_apc_generic03,
			passenger_apc_narrow_generic03,
			passenger_apc_generic02,
			passenger_apc_generic03,
			passenger_apc_generic04,
			passenger_generic01_leanleft,
			passenger_apc_narrow_generic02,
			passenger_apc_generic01,
			passenger_generic01_foldhands,
			passenger_generic01_foldhands,
			passenger_low01,
			passenger_generic01_leanright,
			passenger_apc_narrow_generic02,
			passenger_apc_generic01
		};
		class TransportBackpacks
		{
			bag_xx(B_Parachute,57);
		};
	};
	class Plane_Transport_01_vehicle_base_F: Plane_Transport_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = private;
		scopeCurator = private;
		cargoCompartments[] = {Compartment1};
		transportSoldier = 0;
		cargoGetInAction[] = {GetInLow};
		cargoGetOutAction[] = {GetOutLow};
		getInProxyOrder[] =
		{
			1,
			2
		};
		cargoProxyIndexes[] = {};
		cargoAction[] = {};
		class AnimationSources: AnimationSources
		{
			class Door_1_source: Door_1_source
			{
			};
			class Hide_Cargoseats_source: Hide_Cargoseats_source
			{
				initPhase = true;
			};
		};
		class VehicleTransport
		{
			class Cargo
			{
				canBeTransported = false;
			};
			class Carrier
			{
				cargoBayDimensions[] =
				{
					VVT_cargo_1,
					VVT_cargo_2
				};
				disableHeightLimit = false;
				maxLoadMass = 19000;
				cargoAlignment[] =
				{
					center,
					front
				};
				cargoSpacing[] = {0,0,0};
				exits[] = {VVT_exit};
				unloadingInterval = 2;
				loadingDistance = 5;
				loadingAngle = 60;
				parachuteClassDefault = B_Parachute_02_F;
				parachuteHeightLimitDefault = 5;
			};
		};
		class Library
		{
			libTextDesc = "";
		};
		class TransportBackpacks
		{
			bag_xx(B_Parachute,3);
		};
	};
	class Plane_Transport_01_Wreck_F: PlaneWreck
	{
		class SimpleObject
		{
			eden = false;
			animate[] = {};
			hide[] = {};
			verticalOffset = 1.5;
			verticalOffsetWorld = 0;
			init = "''";
		};
		author = $STR_A3_A_AveryTheKitty;
		scope = protected;
		displayName = "C-192 Samson wreck";
		class Armory
		{
			disabled = true;
		};
		model = "\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Plane_Transport_01_Wreck_F.p3d";
		typicalCargo[] = {};
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 0;
	};

    /* Factions */
    #include "cfgBLUFOR.hpp"    // US & BAF
    #include "cfgOPFOR.hpp"     // IAF & China
    #include "cfgIndep.hpp"     // AAF
};