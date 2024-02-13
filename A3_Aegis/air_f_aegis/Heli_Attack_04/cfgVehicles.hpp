class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class Turrets;
		class HitPoints;
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class HitPoints: HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitMissiles;
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
		};
		class AnimationSources;
		class Eventhandlers;
		class ViewOptics;
		class CargoTurret;
		class RotorLibHelicopterProperties;
		class Reflectors
		{
			class Right;
		};
	};
	class Heli_Attack_02_base_F: Helicopter_Base_F
	{
		class RotorLibHelicopterProperties;
		class Sounds;
		class HitPoints: HitPoints
		{
			class HitEngine1;
		};
		class Components;
	};
	class Aegis_Heli_Attack_04_base_F: Heli_Attack_02_base_F
	{
		author = $STR_A3_A_Grave;
		mapSize = 16;
		displayName = $STR_A3_A_CfgVehicles_Heli_Attack_04_base_F0;
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
		nameSound ="veh_air_gunship_s";
		scope = protected;
		model = "\A3_Aegis\air_f_Aegis\Heli_Attack_04\Heli_Attack_04_F.p3d";
		icon = "\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\UI\Map_Heli_Attack_04_CA.paa";
		picture = "\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\UI\Heli_Attack_04_CA.paa";
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
		hideWeaponsCargo = 0;
		driveOnComponent[]=
		{
			"wheels"
		};
		class Wheels
		{
			disableWheelsWhenDestroyed=1;
			class wheel_1_1
			{
				steering=1;
				side="left";
				boneName="gear_1_1_damper";
				suspForceAppPointOffset="gear_1_1_wheel_axis";
				tireForceAppPointOffset="gear_1_1_wheel_axis";
				center="gear_1_1_wheel_axis";
				boundary="gear_1_1_wheel_bound";
				suspTravelDirection[]={0,-1,0};
				width=0.43700001;
				mass=15;
				MOI=0.76800001;
				dampingRate=0.25;
				dampingRateDamaged=2;
				dampingRateDestroyed=1000;
				maxBrakeTorque=2000;
				maxHandBrakeTorque=0;
				maxCompression=1.2;
				maxDroop=0;
				sprungMass=13;
				springStrength=1200;
				springDamperRate=1280;
				longitudinalStiffnessPerUnitGravity=5000;
				latStiffX=2.5;
				latStiffY=18;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class wheel_2_1: wheel_1_1
			{
				steering=0;
				side="left";
				boneName="gear_2_1_damper";
				suspForceAppPointOffset="gear_2_1_wheel_hub";
				tireForceAppPointOffset="gear_2_1_wheel_hub";
				center="gear_2_1_wheel_hub";
				boundary="gear_2_1_wheel_bound";
				sprungMass=2856;
				width=0.237;
				maxCompression=1.6;
				maxDroop=0.191;
			};
			class wheel_2_2: wheel_2_1
			{
				side="right";
				boneName="gear_2_2_damper";
				suspForceAppPointOffset="gear_2_2_wheel_hub";
				tireForceAppPointOffset="gear_2_2_wheel_hub";
				center="gear_2_2_wheel_hub";
				boundary="gear_2_2_wheel_bound";
			};
		};
		gearRetracting=1;
		availableForSupportTypes[]=
		{
			CAS_Heli,
			Drop,
			Transport
		};
		class Library
		{
			libTextDesc = $STR_A3_A_CfgVehicles_Heli_Attack_04_base_F_Library0;
		};
		fuelCapacity=2130;
		fuelConsumptionRate=0.5;
		altFullForce=4000;
		altNoForce=6000;
		maxSpeed=585;
		mainBladeCenter="rotor_center";
		mainBladeRadius=7;
		tailBladeCenter="mala osa";
		tailBladeRadius=1.5;
		tailBladeVertical=1;
		liftForceCoef=2;
		bodyFrictionCoef=0.51999998;
		cyclicAsideForceCoef=1.2;
		cyclicForwardForceCoef=1;
		backRotorForceCoef=1;
		mainRotorSpeed=1;
		backrotorspeed=1;
		maxFordingDepth=0.5;
		numberPhysicalWheels=3;
		crewVulnerable=0;
		castDriverShadow=1;
		viewCargoShadow=1;
		driverAction="Heli_Attack_04_pilot";
		driverInAction="Heli_Attack_04_pilot";
		driverCanEject=0;
		driverLeftHandAnimName="Stick_pilot";
		driverRightHandAnimName="Stick_pilot";
		driverLeftLegAnimName="";
		driverRightLegAnimName="";
		precisegetinout=1;
		getInRadius=2;
		getInAction="GetInHigh";
		getOutAction="GetOutHigh";
		slingLoadMaxCargoMass=2400;
		visualTarget=1;
		visualTargetSize=1.2;
		armor=55;
		armorStructural=20;
		damageresistance=0.00034500001;
		hullDamageCauseExplosion=1;
		hullExplosionDelay[]={10,20};
		weaponsGroup1=128;
		weaponsGroup4=64;
		destrType="DestructWreck";
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				simulation="Hull_Helicopter";
				armor=-200;
				minimalHit=-0.15000001;
				radius=0.2;
				name="hull_hit";
				armorComponent="Hit_Hull";
				visual="zbytek";
				passThrough=1;
			};
			class HitFuel: HitFuel
			{
				armor=1.3;
				radius=0.125;
				minimalHit=0.050000001;
				explosionShielding=2;
			};
			class HitAvionics: HitAvionics
			{
				armor=1.6;
				radius=0.40000001;
				minimalHit=0.15000001;
				explosionShielding=1.5;
				visual="podsvit pristroju";
			};
			class HitEngine1
			{
				armor=1.63;
				radius=0.34999999;
				explosionShielding=3;
				minimalHit=0.1;
				name="engine_1_hit";
				visual="motor";
				passThrough=1;
				convexComponent="engine_1_hit";
				material=51;
			};
			class HitEngine2: HitEngine1
			{
				name="engine_2_hit";
			};
			class HitEngine: HitEngine2
			{
				armor=999;
				visual="camo2";
				name="engine_hit";
				convexComponent="engine_hit";
				depends="0.5 * (HitEngine1 + HitEngine2)";
			};
			class HitTail
			{
				armor=-150;
				explosionShielding=0.2;
				passThrough=0.5;
				minimalHit=-0.2;
				radius=0.13;
				armorComponent="Hit_Tail";
				name="Hit_Tail";
				visual="-";
			};
			class HitVRotor
			{
				armor=0.5;
				explosionShielding=1;
				passThrough=0.30000001;
				name="tail_rotor_hit";
				visual="mala vrtule staticka";
				depends="HitTail";
			};
			class HitHRotor
			{
				armor=0.5;
				explosionShielding=1;
				material=51;
				passThrough=0.1;
				name="main_rotor_hit";
				visual="velka vrtule staticka";
			};
			class HitHydraulics
			{
				armor=-50;
				explosionShielding=0.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.13;
				name="hit_hydraulics";
				visual="-";
			};
			class HitTransmission
			{
				armor=-80;
				explosionShielding=0.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.13;
				name="transmission";
				visual="-";
			};
			class HitHStabilizerL1
			{
				armor=-30;
				explosionShielding=0.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.13;
				name="hstabilizerl1";
				visual="-";
			};
			class HitHStabilizerR1
			{
				armor=-30;
				explosionShielding=0.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.13;
				name="hstabilizerr1";
				visual="-";
			};
			class HitVStabilizer1
			{
				armor=-30;
				explosionShielding=0.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.13;
				name="vstabilizer1";
				visual="-";
			};
			class HitPitotTube
			{
				armor=-30;
				explosionShielding=0.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.13;
				name="pitot tube";
				visual="-";
				depends="";
			};
			class HitStaticPort
			{
				armor=-30;
				explosionShielding=0.5;
				passThrough=0.1;
				minimalHit=0.1;
				radius=0.13;
				name="static port";
				visual="-";
				depends="";
			};
			class HitGlass1: HitGlass1
			{
				armor=14.75;
				explosionShielding=2;
				radius=0.34999999;
				minimalHit=0.001;
			};
			class HitGlass2: HitGlass2
			{
				armor=0.44999999;
				armorComponent="glass2";
				explosionShielding=1.5;
				radius=0.2;
				minimalHit=0.0099999998;
			};
			class HitGlass3: HitGlass3
			{
				armor=14.75;
				armorComponent="glass3";
				explosionShielding=2;
				radius=0.34999999;
				minimalHit=0.001;
			};
			class HitGlass4: HitGlass4
			{
				armor=0.44999999;
				armorComponent="glass4";
				explosionShielding=1.5;
				radius=0.34999999;
				minimalHit=0.0099999998;
			};
			class HitGlass5: HitGlass5
			{
				armor=0.44999999;
				armorComponent="glass5";
				explosionShielding=1.5;
				radius=0.30000001;
				minimalHit=0.0099999998;
			};
			class HitGlass6: HitGlass6
			{
				armor=0.44999999;
				armorComponent="glass6";
				explosionShielding=1.5;
				radius=0.34999999;
				minimalHit=0.050000001;
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3_Aegis\air_f_Aegis\Heli_Attack_04\data\Heli_Attack_04_glass.rvmat",
				"A3_Aegis\air_f_Aegis\Heli_Attack_04\data\Heli_Attack_04_glass_damage.rvmat",
				"A3_Aegis\air_f_Aegis\Heli_Attack_04\data\Heli_Attack_04_glass_damage.rvmat",
				"A3_Aegis\air_f_Aegis\Heli_Attack_04\data\Heli_Attack_04_glass_interior.rvmat",
				"A3_Aegis\air_f_Aegis\Heli_Attack_04\data\Heli_Attack_04_glass_interior_damage.rvmat",
				"A3_Aegis\air_f_Aegis\Heli_Attack_04\data\Heli_Attack_04_glass_interior_damage.rvmat",
				"A3_Aegis\air_f_Aegis\Heli_Attack_04\data\Heli_Attack_04_ext_01.rvmat",
				"A3_Aegis\air_f_Aegis\Heli_Attack_04\data\Heli_Attack_04_ext_01_damage.rvmat",
				"A3_Aegis\air_f_Aegis\Heli_Attack_04\data\Heli_Attack_04_ext_01_destruct.rvmat",
				"A3_Aegis\air_f_Aegis\Heli_Attack_04\data\Heli_Attack_04_ext_02.rvmat",
				"A3_Aegis\air_f_Aegis\Heli_Attack_04\data\Heli_Attack_04_ext_02_damage.rvmat",
				"A3_Aegis\air_f_Aegis\Heli_Attack_04\data\Heli_Attack_04_ext_02_destruct.rvmat",
				"A3_Aegis\air_f_Aegis\Heli_Attack_04\data\Heli_Attack_04_ext_03.rvmat",
				"A3_Aegis\air_f_Aegis\Heli_Attack_04\data\Heli_Attack_04_ext_03_damage.rvmat",
				"A3_Aegis\air_f_Aegis\Heli_Attack_04\data\Heli_Attack_04_ext_03_destruct.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default_destruct.rvmat"
			};
		};
		class Attributes
		{
			class ObjectTexture
			{
				control="ObjectTexture";
				data="ObjectTexture";
				displayName="Skin";
				tooltip="Texture and material set applied on the object.";
			};
			class Opendoors
			{
				displayName="Open cargo doors";
				property="opendoors";
				control="CheckboxNumber";
				expression="_this animateDoor ['Door_Cargo',_value,true]";
				defaultValue="0";
			};
		};		
		lockDetectionSystem=8+16;
		incomingMissileDetectionSystem=8+16;
		laserScanner=1;
		showAllTargets=4;
		radarTargetSize=1.1;
		irTargetSize=1;
		irTarget=1;
		reportRemoteTargets=1;
		receiveRemoteTargets=1;
		reportOwnPosition=1;
		transportsoldier=8;
		cargoAction[]={Passenger_Heli_Attack_04};
		cargoProxyIndexes[]={1,2,3,4,5,6,7,8};
		getInProxyOrder[]={1,2,3,4,5,6,7,8};
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
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=3000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=70;
						animDirection="mainGun";
						angleRangeHorizontal=26;
						angleRangeVertical=26;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=500;
							maxRange=3000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=2000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=70;
						animDirection="mainGun";
						angleRangeHorizontal=26;
						angleRangeVertical=26;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=5000;
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=4000;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableSpeed=125;
						angleRangeVertical=90;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						aimDown=30;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class NVSensorComponent: SensorTemplateNV
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class TransportPylonsComponent
			{
				UIPicture="A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\UI\Heli_Attack_04_EDEN_CA.paa";
				class pylons
				{
					class PylonLeft1
					{
						attachment = PylonRack_19Rnd_Rocket_Skyfire;
						priority=1;
						hardpoints[]=
						{
							O_MISSILE_PYLON,
							O_BOMB_PYLON_HELI,
							DAR,
                            DAGR,
							B_SHIEKER,
							UNI_SCALPEL,
							20MM_TWIN_CANNON,
							20MM_CANNON
						};
						turret[]={0};
						UIposition[]={0.50300002,0.30000001};
					};
					class PylonLeft2: PylonLeft1
					{
						attachment = PylonRack_19Rnd_Rocket_Skyfire;
						priority=2;
						hardpoints[]=
						{
							O_MISSILE_PYLON,
							O_BOMB_PYLON_HELI,
							DAR,
                            DAGR,
							B_SHIEKER,
							UNI_SCALPEL,
							20MM_TWIN_CANNON,
							20MM_CANNON
						};
						UIposition[]={0.583,0.34999999};
					};
					class PylonLeft3: PylonLeft1
					{
						attachment = PylonRack_4Rnd_LG_scalpel;
						priority=3;
						hardpoints[]=
						{
							O_MISSILE_PYLON,
							O_BOMB_PYLON_HELI,
							DAR,
                            DAGR,
							B_SHIEKER,
							UNI_SCALPEL,
							20MM_TWIN_CANNON,
							20MM_CANNON
						};
						UIposition[]={0.62800002,0.40000001};
					};
					class PylonRight1: PylonLeft1
					{
						mirroredMissilePos=1;
						UIposition[]={0.16500001,0.30000001};
					};
					class PylonRight2: PylonLeft2
					{
						mirroredMissilePos=2;
						UIposition[]={0.085000001,0.34999999};
					};
					class PylonRight3: PylonLeft3
					{
						mirroredMissilePos=3;
						UIposition[]={0.039999999,0.40000001};
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
					class Default
					{
						displayName="$STR_vehicle_default";
						attachment[]=
						{
							"PylonRack_19Rnd_Rocket_Skyfire",
							"PylonRack_19Rnd_Rocket_Skyfire",
							"PylonRack_4Rnd_LG_scalpel",
							"PylonRack_19Rnd_Rocket_Skyfire",
							"PylonRack_19Rnd_Rocket_Skyfire",
							"PylonRack_4Rnd_LG_scalpel"
						};
					};
					class AT
					{
						displayName="$STR_A3_cfgmagazines_titan_at_dns";
						attachment[]=
						{
							"PylonRack_4Rnd_LG_scalpel",
							"PylonRack_4Rnd_LG_scalpel",
							"PylonRack_4Rnd_LG_scalpel",
							"PylonRack_4Rnd_LG_scalpel",
							"PylonRack_4Rnd_LG_scalpel",
							"PylonRack_4Rnd_LG_scalpel"
						};
					};
					class HAT
					{
						displayName="$STR_A3_Heavy_AT_preset_displayName";
						attachment[]=
						{
							"PylonRack_1Rnd_Missile_AGM_01_F",
							"PylonRack_1Rnd_Missile_AGM_01_F",
							"PylonRack_4Rnd_LG_scalpel",
							"PylonRack_1Rnd_Missile_AGM_01_F",
							"PylonRack_1Rnd_Missile_AGM_01_F",
							"PylonRack_4Rnd_LG_scalpel"
						};
					};
					class CAS
					{
						displayName="$STR_A3_CAS_PRESET_DISPLAYNAME";
						attachment[]=
						{
							"PylonRack_19Rnd_Rocket_Skyfire",
							"PylonRack_19Rnd_Rocket_Skyfire",
							"PylonMissile_1Rnd_Bomb_03_F",
							"PylonRack_19Rnd_Rocket_Skyfire",
							"PylonRack_19Rnd_Rocket_Skyfire",
							"PylonMissile_1Rnd_Bomb_03_F"
						};
					};
				};
			};
		};
		driverWeaponsInfoType="RscOptics_Heli_Attack_01_pilot";
		class PilotCamera
		{
		};
		defaultUserMFDvalues[]={0,1,0.30000001,1};
		#include "cfgMFD.hpp" 		// MFD classes
		weapons[]=
		{
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"192Rnd_CMFlare_Chaff_Magazine"
		};
		enableManualFire=1;
		particlesPos="z_gun_chamber";
		particlesDir="z_gun_muzzle";	
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				startEngine=0;
				body="Gun_HRot";
				gun="Gun_VRot";
				soundServo[]=
				{
					"",
					0.0099999998,
					1
				};
				weapons[]=
				{
					"Aegis_Autocannon_Heli_Attack_04_HE_F",
					"Aegis_Autocannon_Heli_Attack_04_AP_F",
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"Aegis_150Rnd_Autocannon_Heli_Attack_04_HE_Green_F",
					"Aegis_150Rnd_Autocannon_Heli_Attack_04_AP_Green_F",
					"Laserbatteries"
				};
				gunBeg="z_gun_muzzle";
				gunEnd="z_gun_chamber";
				memoryPointGun="z_gun_chamber";
				particlesPos="z_gun_chamber";
				particlesDir="z_gun_muzzle";
				selectionFireAnim="zasleh";
				maxhorizontalrotspeed=2.444;
				maxverticalrotspeed=1.666;
				initelev=15;
				initturn=0;
				maxelev=15;
				minelev=-55;
				maxturn=110;
				minturn=-110;
				stabilizedInAxes=3;
				memoryPointGunnerOptics="z_flir_pos";
				memoryPointGunnerOutOptics="gunnerview2";
				gunnerOpticsEffect[]=
				{
					"TankCommanderOptics1",
					"BWTV"
				};
				turretInfoType="RscOptics_Heli_Attack_01_gunner";
				discreteDistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100};
				discreteDistanceInitIndex=5;
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						opticsDisplayName="W";
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium: Wide
					{
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						opticsDisplayName="M";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow: Wide
					{
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
						opticsDisplayName="N";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						minFov=0.25;
						maxFov=1.25;
						initFov=0.75;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components: components
						{
							class VehiclePrimaryGunnerDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="PrimaryGunner";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={4000,2000,8000,16000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay="SensorDisplay";
						class Components: components
						{
							class VehiclePrimaryGunnerDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="PrimaryGunner";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={4000,2000,8000,16000};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
				gunnerAction="Heli_Attack_04_Gunner";
				gunnerInAction="Heli_Attack_04_Gunner";
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				memoryPointsGetInGunnerPrecise="pos gunner";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				gunnerLeftHandAnimName="stick_gunner";
				gunnerRightHandAnimName="stick_gunner";
				animationSourceStickX="MainTurret_Inertia";
				animationSourceStickY="MainGun_Inertia";
				gunnerCompartments="Compartment2";
				castGunnerShadow=1;
				viewGunnerShadow=1;
				precisegetinout=0;
				outGunnerMayFire=1;
				commanding=0;
				primaryGunner=1;
				isCopilot=1;
				canHideGunner=0;
				usePiP=1;
				lodTurnedIn=1000;
				lodTurnedOut=1000;
				gunnerDoor="door_gunner";
				canUseScanners=0;
				allowTabLock=0;
				class ViewOptics
				{
					initanglex=0;
					initangley=0;
					initfov=0.155;
					maxanglex=50;
					maxangley=100;
					maxfov=0.155;
					minanglex=-50;
					minangley=-100;
					minfov=0.046999998;
				};
				class Reflectors
				{
					class cabin
					{
						color[]={830,100,100};
						ambient[]={5,0,0};
						intensity=9;
						size=1;
						innerAngle=90;
						outerAngle=165;
						coneFadeCoef=1;
						position="cabin_light";
						direction="cabin_light_dir";
						hitpoint="cabin_light";
						selection="cabin_light";
						useFlare=0;
						flareSize=1;
						flareMaxDistance=5;
						dayLight=1;
						blinking=0;
						class Attenuation
						{
							start=0;
							constant=0;
							linear=1;
							quadratic=50;
							hardLimitStart=1;
							hardLimitEnd=1.5;
						};
					};
				};
			};
		};
		class markerlights
		{
			class GreenStill
			{
				activeLight=0;
				color[]={0,0.80000001,0};
				ambient[]={0,0.079999998,0};
				intensity=55;
				blinking=0;
				brightness=0.0099999998;
				flareSize=0.5;
				name="zeleny pozicni";
				useFlare=1;
				drawLight=1;
				drawLightSize=0.25;
				drawLightCenterSize=0.079999998;
			};
			class RedStill: GreenStill
			{
				color[]={0.80000001,0,0};
				ambient[]={0.079999998,0,0};
				name="cerveny pozicni";
			};
			class WhiteStill: GreenStill
			{
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				name="bily pozicni";
			};
			class WhiteBlicking: GreenStill
			{
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				blinking=1;
				name="bily pozicni blik";
			};
			class RedBlinking: WhiteBlicking
			{
				color[]={0.89999998,0.15000001,0.1};
				ambient[]={0.090000004,0.015,0.0099999998};
				name="cerveny pozicni blik";
			};
		};
		class Reflectors
		{
			class Light
			{
				color[]={7000,7500,10000};
				ambient[]={70,75,100};
				intensity=50;
				size=1;
				innerAngle=5;
				outerAngle=75;
				coneFadeCoef=10;
				position="l svetlo";
				direction="l svetlo konec";
				hitpoint="l svetlo";
				selection="l svetlo";
				useFlare=0;
				dayLight=0;
				flareSize=0.75;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0;
					hardLimitStart=200;
					hardLimitEnd=250;
				};
			};
			class Light_Flare: Light
			{
				intensity=0.5;
				useFlare=1;
				innerAngle=5;
				outerAngle=175;
			};
		};
		class compartmentsLights
		{
			class Comp1
			{
				class Light_Pilot
				{
					color[]={40,20,20};
					ambient[]={0,0,0};
					intensity=2.5;
					size=0;
					useFlare=0;
					flareSize=0;
					flareMaxDistance=0;
					dayLight=0;
					blinking=0;
					class Attenuation
					{
						start=0;
						constant=0;
						linear=1;
						quadratic=70;
						hardLimitStart=0.55000001;
						hardLimitEnd=0.94999999;
					};
					point="light_pilot";
				};
			};
			class Comp2
			{
				class Light_Gunner
				{
					color[]={40,20,20};
					ambient[]={0,0,0};
					intensity=3.5;
					size=0;
					useFlare=0;
					flareSize=0;
					flareMaxDistance=0;
					dayLight=0;
					blinking=0;
					class Attenuation
					{
						start=0;
						constant=0;
						linear=1;
						quadratic=70;
						hardLimitStart=0.75;
						hardLimitEnd=1.05;
					};
					point="light_gunner";
				};
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Light",
				"Light_Flare"
			}
		};		
		selectionClan="clan";
		selectionFireAnim="zasleh";
		selectionHRotorStill="main rotor static";
		selectionHRotorMove="main rotor blur";
		selectionVRotorStill="tail rotor static";
		selectionVRotorMove="tail rotor blur";
		selectionDamage="trup";
		selectionShowDamage="poskozeni";
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";
		memoryPointLMissile="Missile_1";
		memoryPointRMissile="Missile_2";
		memoryPointLRocket="Rocket_1";
		memoryPointRRocket="Rocket_2";
		memoryPointTaskMarker="TaskMarker_1_pos";
		memoryPointDriverOptics="PilotCamera_pos";
		memoryPointsGetInDriverPrecise="pos driver";
		class AnimationSources: AnimationSources
		{
			class cabinlights_hide
			{
				source="user";
				animPeriod=1e-006;
				initPhase=0;
			};
			class Door_Gunner
			{
				source="door";
				animPeriod=0.80000001;
			};
			class Door_Pilot
			{
				source="door";
				animPeriod=0.80000001;
			};
			class Door_Cargo
			{
				source="door";
				animPeriod=1;
				initPhase=0;
				sound="ServoDoorsSound";
				soundPosition="pos cargo dir";
			};
			class muzzle_rot_hmg
			{
				weapon="weap_gsh30";
				source="ammorandom";
			};
			class muzzle_hide_hmg
			{
				weapon="weap_gsh30";
				source="reload";
			};
			class exhaust_hide
			{
				source="user";
				initPhase=0;
				animPeriod=9.9999997e-006;
				mass=1;
				displayName="hide exhaust";
			};
			class rwr_lights_lock
			{
				source="user";
				initPhase=0;
				animPeriod=8;
			};
			class rwr_lock_dir_primary: rwr_lights_lock
			{
				animPeriod=0.1;
			};
			class rwr_lock_primary: rwr_lights_lock
			{
				animPeriod=1e-007;
			};
			class rwr_signal_strenght: rwr_lights_lock
			{
				animPeriod=1e-007;
			};
			class rwr_lights: rwr_lock_primary
			{
			};
			class damper_1_1_source
			{
				source="damper";
				wheel="wheel_1_1";
			};
			class damper_2_1_source
			{
				source="damper";
				wheel="wheel_2_1";
			};
			class damper_2_2_source
			{
				source="damper";
				wheel="wheel_2_2";
			};
			class wheel_1_1_source
			{
				source="wheel";
				wheel="wheel_1_1";
			};
			class wheel_2_1_source
			{
				source="wheel";
				wheel="wheel_2_1";
			};
			class wheel_2_2_source
			{
				source="wheel";
				wheel="wheel_2_2";
			};
			class hit_pylon_1_source
			{
				source="Hit";
				hitpoint="HitPylon1";
			};
			class hit_pylon_2_source
			{
				source="Hit";
				hitpoint="HitPylon2";
			};
			class hit_pylon_3_source
			{
				source="Hit";
				hitpoint="HitPylon3";
			};
			class hit_pylon_4_source
			{
				source="Hit";
				hitpoint="HitPylon4";
			};
			class hit_pylon_5_source
			{
				source="Hit";
				hitpoint="HitPylon5";
			};
			class hit_pylon_6_source
			{
				source="Hit";
				hitpoint="HitPylon6";
			};
		};
		class Exhausts
		{
			class Exhaust01
			{
				direction="exhaust1h_dir";
				position="exhaust1h";
				effect="ExhaustEffectHeli";
			};
			class Exhaust02
			{
				direction="exhaust2h_dir";
				position="exhaust2h";
				effect="ExhaustEffectHeli";
			};
		};
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=8;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=1;
			};
		};
		class EventHandlers: EventHandlers
		{
			fired="_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="z_flir_pos";
					pointDirection="z_flir_dir";
					renderQuality=2;
					renderVisionMode=4;
					fov=0.69999999;
				};
			};
			class RightMirror
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="z_flir_pos";
					pointDirection="z_flir_dir";
					renderQuality=2;
					renderVisionMode=4;
					fov=0.69999999;
				};
			};
		};
		class TextureSources
		{
			class Black
			{
				displayName = $STR_A3_TextureSources_BLACK0;
				author = $STR_A3_A_Grave;
				textures[]=
				{
					"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Heli_Attack_04_ext_01_black_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Heli_Attack_04_ext_02_black_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Heli_Attack_04_ext_03_black_CO.paa"
				};
				factions[]={};
			};
			class SFIA
			{
				displayName = $STR_LXWS_FACTION_SFIA;
				author = $STR_A3_A_BranFlakes;
				textures[]=
				{
					"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_01_SFIA_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_02_SFIA_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_03_SFIA_CO.paa"
				};
				factions[]={};
			};
			class ION_lxWS
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ION_lxWS0;
				author = $STR_A3_A_Ravenholme;
				textures[]=
				{
					"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_01_ION_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Heli_Attack_04_ext_02_black_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Heli_Attack_04_ext_03_black_CO.paa"
				};
				factions[]={};
			};
			class Grey
			{
				displayName = $STR_A3_TextureSources_Grey0;
				author = $STR_A3_A_Grave;
				textures[]=
				{
					"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_01_Grey_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_02_Grey_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_03_Grey_CO.paa"
				};
				factions[]={};
			};
			class Green
			{
				displayName = $STR_A3_TextureSources_Green0;
				author = $STR_A3_A_Ravenholme;
				textures[]=
				{
					"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_01_grn_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_02_grn_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_03_grn_CO.paa"
				};
				factions[]={};
			};
			class GreenHex
			{
				displayName = $STR_A3_TextureSources_GreenHex0;
				author = $STR_A3_A_Grave;
				textures[]=
				{
					"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_01_GHEX_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_02_GHEX_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_03_GHEX_CO.paa"
				};
				factions[]={};
			};
			class Hex
			{
				displayName = $STR_A3_TextureSources_Hex0;
				author = $STR_A3_A_Grave;
				textures[]=
				{
					"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_01_HEX_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_02_HEX_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_03_HEX_CO.paa"
				};
				factions[]={};
			};
			class Russian
			{
				displayName = $STR_A3_TEXTURESOURCES_RUSSIANSTAR0;
				author = $STR_A3_A_Grave;
				textures[]=
				{
					"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_01_RUS_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Heli_Attack_04_ext_02_Black_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_03_RUS_CO.paa"
				};
				factions[]={};
			};
			class Russian2
			{
				displayName = $STR_A3_TEXTURESOURCES_RUSSIANSTARFLAG0;
				author = $STR_A3_A_Grave;
				textures[]=
				{
					"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_01_RUS_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_02_RUS_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_03_RUS_CO.paa"
				};
				factions[]={};
			};
			class RussianGreen
			{
				displayName = "Green (Star)";
				author = $STR_A3_A_Ravenholme;
				textures[]=
				{
					"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_01_RUS_grn_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_02_grn_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_03_grn_CO.paa"
				};
				factions[]={};
			};
			class EAF
			{
				displayName = "LDF";
				author = $STR_A3_A_BranFlakes;
				textures[]=
				{
					"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_01_LDF_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_02_LDF_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_03_LDF_CO.paa"
				};
				factions[]={};
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_01_grn_CO.paa",
			"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_02_grn_CO.paa",
			"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_03_grn_CO.paa"
		};
		textureList[]={};
	};	

	/* Faction Configs*/

	#include "cfgOPFOR.hpp" 	// Argana
	#include "cfgEAF.hpp"		// LDF INDEP + BLUFOR
	#include "cfgION.hpp"		// ION Security
	#include "cfgRaven.hpp"		// Raven Security INDEP + OPFOR
	#include "cfgRUS.hpp"		// Russia
	#include "cfgSFIA.hpp"		// SFIA
};