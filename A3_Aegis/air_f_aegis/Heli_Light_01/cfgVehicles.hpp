class CfgVehicles
{
    /* Inheritance Tree */
	class Helicopter_Base_F;
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets;
		class AnimationSources;
	};

    /* Bases */
	class Heli_Light_01_base_F: Helicopter_Base_H
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
		class AnimationSources: AnimationSources
		{
			class AddBenches;
			class AddBackseats;
			class AddDoors;
			class AddGunHolder;
			class AddHoldingFrame;
			class AddTread_Short;
			class AddTread;
			class AddScreen1;
			class AddCivilian_hide;
			class AddMusicUnit;
			class BenchL_Up;
			class BenchL_Up_instant;
			class BenchR_Up;
			class BenchR_Up_instant;
			class FLIR_HRot;
			class FLIR_VRot;
		};
		class Components;

        /* Liveries */
		class TextureSources
		{
			class Blu
			{
				displayName = $STR_A3_TextureSources_Blu0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_BLUFOR_CO.paa"};
				factions[] = {};
			};
			class Black
			{
				displayName = $STR_A3_TextureSources_BLACK0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_ION_CO.paa"};
				factions[] = {};
			};
			class Indep
			{
				displayName = $STR_A3_TextureSources_INDEP0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_INDP_CO.paa"};
				factions[] = {};
			};
			class Sand
			{
				displayName = $STR_A3_TEXTURESOURCES_SAND0;
				author = $STR_A3_A_Ravenholme;
				textures[] = {"\lxWS\air_f_lxWS\Data\NATO\lxWS_Heli_Light_01_ext_sand_CO.paa"};
				factions[] = {};
			};
		};
	};
    class Heli_Light_01_unarmed_base_F: Heli_Light_01_base_F{};
    class Heli_Light_01_armed_base_F: Heli_Light_01_base_F
    {
        /* Liveries */
		class TextureSources: TextureSources
		{
			class Blu: Blu
			{
				textures[] =
                {
                    "\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_BLUFOR_CO.paa",
                    "\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_dot_CA.paa"
                };
			};
			class Black: Black
			{
				textures[] =
                {
                    "\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_ION_CO.paa",
                    "\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_dot_CA.paa"
                };
			};
			class Indep: Indep
			{
				textures[] =
                {
                    "\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_INDP_CO.paa",
                    "\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_dot_CA.paa"
                };
			};
			class Sand: Sand
			{
				textures[] = 
				{
					"\lxWS\air_f_lxWS\Data\NATO\lxWS_Heli_Light_01_ext_sand_CO.paa",
					"a3\air_f\heli_light_01\data\heli_light_01_dot_ca.paa"
				};
			};
		};
    };
	class Heli_Light_01_dynamicLoadout_base_F;
	class Heli_Light_01_civil_base_F: Heli_Light_01_unarmed_base_F
	{
        /* Liveries */
		class TextureSources
		{
			class Ion
			{
				displayName = $STR_A3_A_TextureSources_ION0;
				factions[] = {};
			};
		};
		textureList[] =
		{
			Red,1,
			Blue,1,
			BlueLine,1,
			Digital,1,
			Elliptical,1,
			Furious,1,
			Graywatcher,1,
			Jeans,1,
			Light,1,
			Shadow,1,
			Sheriff,1,
			Speedy,1,
			Sunset,1,
			Vrana,1,
			Wasp,1,
			Wave,1
		};

		class AnimationSources: AnimationSources
		{
			class AddMusicUnit: AddMusicUnit{};
			class FLIR_HRot: FLIR_HRot{};
			class FLIR_VRot: FLIR_VRot{};
			class AddBenches: AddBenches
			{
				initPhase = false;
			};
			class AddHoldingFrame: AddHoldingFrame{};
			class BenchL_Up: BenchL_Up{};
			class BenchR_Up: BenchR_Up{};
			class BenchL_Up_instant: BenchL_Up_instant{};
			class BenchR_Up_instant: BenchR_Up_instant{};
			class AddDoors: AddDoors{};
			class AddBackseats: AddBackseats{};
			class AddTread: AddTread{};
			class DoorL_Front_Open{};
			class DoorR_Front_Open{};
			class DoorL_Back_Open{};
			class DoorR_Back_Open{};
		};
	};
	class Heli_Light_01_recon_base_F: Heli_Light_01_unarmed_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgVehicles_Heli_Light_01_recon_base_F0;
        /*
		icon = "\A3\Air_F\Heli_Light_01\Data\UI\Map_Heli_Light_01_CIV_CA.paa";
		accuracy = 1;
		hiddenSelectionsTextures[] = {"A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_BLUFOR_CO.paa"};
		transportSoldier = 2;
		hideWeaponsCargo = true;
		cargoProxyIndexes[] = {10,11};
		ejectDeadCargo = false;
		cost = 9000000;
		weapons[] = {Laserdesignator_pilotCamera};
		magazines[] = {Laserbatteries};
		class AnimationSources: AnimationSources
		{
			class AddBenches: AddBenches
			{
				initPhase = false;
			};
			class AddDoors: AddDoors
			{
				initPhase = false;
			};
			class AddBackseats: AddBackseats
			{
				initPhase = true;
			};
			class AddTread: AddTread
			{
				initPhase = true;
			};
		};
		showAllTargets = 4;
		reportRemoteTargets = true;
		reportOwnPosition = true;
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
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 50;
						angleRangeHorizontal = 90;
						angleRangeVertical = 90;
						aimDown = 0;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 50;
						angleRangeHorizontal = 90;
						angleRangeVertical = 90;
						aimDown = 0;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						class AirTarget
						{
							minRange = 6000;
							maxRange = 6000;
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
					};
					class LaserSensorComponent: SensorTemplateLaser{};
					class NVSensorComponent: SensorTemplateNV{};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot{};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot{};
		};
		LockDetectionSystem = CM_Lock_Radar + CM_Lock_Laser;
		incomingMissileDetectionSystem = CM_Lock_Radar + CM_Missile;
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
		class RotorLibHelicopterProperties: RotorLibHelicopterProperties
		{
			defaultCollective = 0.5;
		};
		memoryPointDriverOptics = light_dir;
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
			minTurn = -90;
			maxTurn = 90;
			initTurn = 0;
			minElev = -10;
			maxElev = 90;
			initElev = 0;
			maxXRotSpeed = 1.3;
			maxYRotSpeed = 1.3;
			pilotOpticsShowCursor = true;
			controllable = true;
		};
        */
    };

    /* Factions */
	#include "cfgBLUFOR.hpp"    // US
	#include "cfgIndep.hpp"     // AAF
	#include "cfgION.hpp"       // ION
};