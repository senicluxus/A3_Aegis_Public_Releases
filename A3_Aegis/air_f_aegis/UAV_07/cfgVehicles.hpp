class CfgVehicles
{
    /* Inheritance Tree */
    #include "\A3_Aegis\cfgPlanes.hpp"
	class UAV: Plane
	{
		class NewTurret;
		class ViewPilot;
		class ViewOptics;
		class AnimationSources;
		class Components;
	};

    /* Bases */
	class Aegis_UAV_07_base_F: UAV
	{
		author = $STR_A3_A_Grave;
		mapSize=15.5;
		scope=0;
		scopeCurator=0;
		displayname = $STR_A3_A_CfgVehicles_B_UAV_07_base_F0;
		model="A3_Aegis\Air_f_Aegis\UAV_07\UAV_07_F.p3d";
		icon = "\A3_Aegis\Air_f_Aegis\UAV_07\data\ui\Map_Aegis_UAV_07_CA.paa";
		picture = "\A3_Aegis\Air_f_Aegis\UAV_07\data\ui\Aegis_UAV_07_CA.paa";
		vehicleClass="Air";
		editorSubcategory="EdSubcat_Drones";
		accuracy=0.5;
		destrType="DestructWreck";
		fuelCapacity=5000;
		laserScanner=1;
		irScanRangeMin=2000;
		irScanRangeMax=10000;
		irScanGround=2;
		irScanToEyeFactor=2;
		unitInfoType="RscOptics_AV_airplane_pilot";
		attenuationEffectType="OpenHeliAttenuation";
		soundGetIn[]=
		{
			"",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"",
			0.56234133,
			1,
			40
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		soundLocked[]=
		{
			"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",
			1,
			1
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_5",
			0.39810717,
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\air\UAV_02\UAV_02_start_ext",
			0.70794576,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\air\UAV_02\UAV_02_start_int",
			0.70794576,
			1,
			400
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\air\UAV_02\UAV_02_stop_int",
			0.70794576,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\air\UAV_02\UAV_02_stop_ext",
			0.70794576,
			1,
			400
		};
		soundGearUp[]=
		{
			"A3\Sounds_F\vehicles\air\noises\drone_gear_up",
			1,
			1,
			120
		};
		soundGearDown[]=
		{
			"A3\Sounds_F\vehicles\air\noises\drone_gear_down",
			1,
			1,
			120
		};
		soundFlapsUp[]=
		{
			"A3\Sounds_F_EPC\CAS_01\Flaps_Up",
			0.63095737,
			1,
			100
		};
		soundFlapsDown[]=
		{
			"A3\Sounds_F_EPC\CAS_01\Flaps_Down",
			0.63095737,
			1,
			100
		};
		soundBushCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",
			1,
			1,
			100
		};
		soundBushCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",
			1,
			1,
			100
		};
		soundBushCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",
			1,
			1,
			100
		};
		soundBushCrash[]=
		{
			"soundBushCollision1",
			0.33000001,
			"soundBushCollision2",
			0.33000001,
			"soundBushCollision3",
			0.33000001
		};
		soundWaterCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",
			1,
			1,
			100
		};
		soundWaterCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",
			1,
			1,
			100
		};
		soundWaterCrashes[]=
		{
			"soundWaterCollision1",
			0.5,
			"soundWaterCollision2",
			0.5
		};
		Crash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			900
		};
		Crash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			900
		};
		Crash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			900
		};
		Crash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			900
		};
		soundCrashes[]=
		{
			"Crash0",
			0.25,
			"Crash1",
			0.25,
			"Crash2",
			0.25,
			"Crash3",
			0.25
		};
		class Sounds
		{
			class EngineLowOut
			{
				sound[]=
				{
					"A3\Sounds_F\air\UAV_02\UAV_02_low_ext",
					0.70794576,
					1,
					450
				};
				frequency="1.0 min (rpm + 0.5)";
				volume="camPos*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighOut
			{
				sound[]=
				{
					"A3\Sounds_F\air\UAV_02\UAV_02_high_ext",
					1,
					1,
					650
				};
				frequency="(rpm factor[0.5, 1.0])";
				volume="camPos*(rpm factor[0.2, 1.0])";
			};
			class ForsageOut
			{
				sound[]=
				{
					"A3\Sounds_F\air\UAV_02\UAV_02_forsage_ext",
					1.1220185,
					1,
					900
				};
				frequency="1";
				volume="engineOn*camPos*(thrust factor[0.6, 1.0])";
				cone[]={3.1400001,3.9200001,2,0.5};
			};
			class WindNoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\air\UAV_02\noise",
					0.31622776,
					1,
					150
				};
				frequency="(0.3+(1.005*(speed factor[1, 50])))";
				volume="camPos*(speed factor[1,  50])";
			};
			class EngineLowIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\UAV_02\UAV_02_low_int",
					1,
					1
				};
				frequency="1.0 min (rpm + 0.5)";
				volume="(1-camPos)*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\UAV_02\UAV_02_high_int",
					1,
					1
				};
				frequency="(rpm factor[0.5, 1.0])";
				volume="(1-camPos)*(rpm factor[0.2, 1.0])";
			};
			class ForsageIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\UAV_02\UAV_02_forsage_int",
					0.63095737,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(thrust factor[0.6, 1.0])";
			};
			class WindNoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\UAV_02\noise",
					0.25118864,
					1
				};
				frequency="(0.3+(1.005*(speed factor[1, 50])))";
				volume="(1-camPos)*(speed factor[1, 50])";
			};
			class scrubLandInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[]=
				{
					"A3\Sounds_F\dummysound",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingExt
			{
				sound[]=
				{
					"A3\Sounds_F\dummysound",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain2_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain2_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};

		memoryPointTaskMarker="TaskMarker_1_pos";
		formationX=30;
		formationZ=30;
		class MarkerLights
		{
			class MarkerLight_wingtip_red
			{
				name="marker_light_wingtip_l";
				color[]={0.80000001,0,0};
				ambient[]={0.079999998,0,0};
				intensity=75;
				drawLight=1;
				drawLightSize=0.15000001;
				drawLightCenterSize=0.039999999;
				activeLight=0;
				blinking=0;
				dayLight=0;
				useFlare=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=25;
					quadratic=50;
					hardLimitStart=0.75;
					hardLimitEnd=1;
				};
			};
			class MarkerLight_wingtip_green: MarkerLight_wingtip_red
			{
				name="marker_light_wingtip_r";
				color[]={0,0.80000001,0};
				ambient[]={0,0.079999998,0};
			};
			class CollisionLightWhite1
			{
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				name="marker_light_l_white";
				intensity=75;
				drawLight=1;
				drawLightSize=0.2;
				drawLightCenterSize=0.039999999;
				activeLight=0;
				dayLight=0;
				useFlare=0;
				blinking=1;
				blinkingPattern[]={0.1,0.89999998};
				blinkingStartsOn=1;
				blinkingPatternGuarantee=1;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=25;
					quadratic=50;
					hardLimitStart=0.75;
					hardLimitEnd=1;
				};
			};
			class CollisionLightWhite2: CollisionLightWhite1
			{
				name="marker_light_r_white";
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3_Aegis\Air_f_Aegis\UAV_07\data\UAV_07_ext_01.rvmat",
				"A3_Aegis\Air_f_Aegis\UAV_07\data\UAV_07_ext_01_damage.rvmat",
				"A3_Aegis\Air_f_Aegis\UAV_07\data\UAV_07_ext_01_destruct.rvmat",
				"A3_Aegis\Air_f_Aegis\UAV_07\data\UAV_07_ext_02.rvmat",
				"A3_Aegis\Air_f_Aegis\UAV_07\data\UAV_07_ext_02_damage.rvmat",
				"A3_Aegis\Air_f_Aegis\UAV_07\data\UAV_07_ext_02_destruct.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default_destruct.rvmat"
			};
		};
		class HitPoints
		{
			class HitHull
			{
				armor=3;
				explosionShielding=5;
				name="HitHull";
				passThrough=0.5;
				visual="zbytek";
				radius=0.25;
				minimalHit=0.02;
				depends="Total";
				material=-1;
			};
			class HitEngine: HitHull
			{
				armor=1.5;
				explosionShielding=2;
				name="HitEngine";
				passThrough=0.5;
				visual="";
				radius=0.25;
				minimalHit=0.1;
				depends="0";
			};
			class HitFuel: HitHull
			{
				armor=3;
				explosionShielding=4;
				name="HitFuel";
				passThrough=0.5;
				visual="";
				radius=0.30000001;
				minimalHit=0.1;
				depends="0";
			};
			class HitLAileron: HitHull
			{
				armor=1.5;
				explosionShielding=3;
				name="HitLAileron";
				passThrough=0.1;
				visual="";
				radius=0.2;
				minimalHit=0.1;
				depends="0";
			};
			class HitRAileron: HitLAileron
			{
				armor=1.5;
				explosionShielding=3;
				name="HitRAileron";
				passThrough=0.1;
				visual="";
				radius=0.2;
				minimalHit=0.1;
				depends="0";
			};
			class HitRudder: HitHull
			{
				armor=1.5;
				explosionShielding=3;
				name="HitRudder";
				passThrough=0.1;
				visual="";
				radius=0.15000001;
				minimalHit=0.1;
				depends="0";
			};
			class HitLCElevator: HitHull
			{
				armor=1.5;
				explosionShielding=3;
				name="HitLCElevator";
				passThrough=0.1;
				visual="";
				radius=0.2;
				minimalHit=0.1;
				depends="0";
			};
			class HitRElevator: HitLCElevator
			{
				armor=1.5;
				explosionShielding=3;
				name="HitRElevator";
				passThrough=0.1;
				visual="";
				radius=0.2;
				minimalHit=0.1;
				depends="0";
			};
		};
		class Exhausts
		{
			class Exhaust_center
			{
				position="pos_Exhausts_start_center";
				direction="pos_Exhausts_end_center";
				effect="ExhaustsEffectHeliComHP";
			};
		};
		class Armory
		{
			description="$STR_A3_CfgVehicles_UAV_02_base_Armory0";
		};
		driveOnComponent[]={};
		maximumLoad=250;
		class TransportItems
		{
		};
		uavCameraDriverPos="pilotview";
		uavCameraDriverDir="pilotview_dir";
		uavCameraGunnerPos="laser_start";
		uavCameraGunnerDir="laser_end";
		LODTurnedIn=-1;
		LODTurnedOut=-1;
		memoryPointLDust="dustLeft";
		memoryPointRDust="dustRight";
		memoryPointDriverOptics="pilotview";
		driverOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Driver_F.p3d";
		driverForceOptics=1;
		getInRadius=0;
		class WingVortices
		{
			class WingTipLeft
			{
				effectName="WingVortices";
				position="body_vapour_L_E";
			};
			class WingTipRight
			{
				effectName="WingVortices";
				position="body_vapour_R_E";
			};
			class BodyLeft
			{
				effectName="BodyVortices";
				position="body_vapour_L_S";
			};
			class BodyRight
			{
				effectName="BodyVortices";
				position="body_vapour_R_S";
			};
			class WingTipLeftTop
			{
				effectName="WingVortices";
				position="body_vapour_L_E_T";
			};
			class WingTipRightTop
			{
				effectName="WingVortices";
				position="body_vapour_R_E_T";
			};
			class BodyLeftTop
			{
				effectName="BodyVortices";
				position="body_vapour_L_S_T";
			};
			class BodyRightTop
			{
				effectName="BodyVortices";
				position="body_vapour_R_S_T";
			};
		};
		class ViewPilot: ViewPilot
		{
			minFov=0.25;
			maxFov=1.25;
			initFov=0.75;
			initAngleX=0;
			minAngleX=-65;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
		};
		class Viewoptics: ViewOptics
		{
			initAngleX=0;
			minAngleX=0;
			maxAngleX=0;
			initAngleY=0;
			minAngleY=0;
			maxAngleY=0;
			minFov=0.25;
			maxFov=1.25;
			initFov=0.75;
			visionMode[]=
			{
				"Normal",
				"NVG",
				"Ti"
			};
			thermalMode[]={0,1};
		};
		class AnimationSources
		{
			class Damper_1_source
			{
				source = "damper";
				wheel = "Gear_1_1";
			};
			class Damper_2_source
			{
				source = "damper";
				wheel = "Gear_2_1";
			};
			class Damper_3_source
			{
				source = "damper";
				wheel = "Gear_2_2";
			};
			class Wheel_1_source
			{
				source = "wheel";
				wheel = "Gear_1_1";
			};
			class Wheel_2_source
			{
				source = "wheel";
				wheel = "Gear_2_1";
			};
			class Wheel_3_source
			{
				source = "wheel";
				wheel = "Gear_2_2";
			};
		};
		class camShakeGForce
		{
			distance=0;
			frequency=2;
			minSpeed=1;
			power=0.1;
		};	
		maxSpeed=400;
		landingAoa=0.1309;
		landingSpeed=140;
		stallSpeed=100;
		stallWarningTreshold=0.07;
		wheelSteeringSensitivity=1.3;
		airBrake=1;
		airBrakeFrictionCoef=2;
		flaps=1;
		flapsFrictionCoef=0.2;
		gearsUpFrictionCoef=0.34999999;
		airFrictionCoefs0[]={0,0,0};
		airFrictionCoefs1[]={0.1,0.69999999,0.0049999999};
		airFrictionCoefs2[]={0.001,0.0074999998,5.9999998e-005};
		angleOfIndicence=0;
		envelope[]={0,0.07,0.25999999,0.58999997,1.04,1.63,1.98,2.7,3.2,4.0500002,4.6799998,5.4899998,6.1900001,7.04,7.5300002,7.9000001,8.1999998,8.3999996,8.5,8.1999998,7};
		altNoForce=13000;
		altFullForce=2000;
		thrustCoef[]={1.36,1.25,1.14,1.04,0.94999999,0.86000001,0.77999997,0.69999999,0.61000001,0.30000001,0,0,0};
		aileronSensitivity=0.60000002;
		aileronCoef[]={0,0.12,0.46000001,0.64999998,0.75,0.81999999,0.88,0.92000002,0.94999999,0.97000003,0.99000001,1,1.01};
		elevatorSensitivity=0.69999999;
		elevatorCoef[]={0,0.2,0.69999999,0.47,0.38,0.31999999,0.28,0.25,0.22,0.19,0.17,0.15000001,0.13};
		rudderInfluence=0.93970001;
		rudderCoef[]={0,0.60000002,1.2,1.5,1.7,1.8,1.9,1.9,2,2,2,1.8,1.4};
		aileronControlsSensitivityCoef=3;
		elevatorControlsSensitivityCoef=3;
		rudderControlsSensitivityCoef=3;
		draconicForceXCoef=8;
		draconicForceYCoef=1.1;
		draconicForceZCoef=1;
		draconicTorqueXCoef[]={2,2.5,3.0999999,3.7,4.4000001,5.0999999,5.9000001,6.5,7,7.5,7.9000001,8.3000002,8.5};
		draconicTorqueYCoef[]={12,8,3,0.5,0,0,0,0,0,0,0,0,0};
		maxOmega=3000;
		engineMoi=0.1;
		dampingRateFullThrottle=0.029999999;
		dampingRateZeroThrottleClutchEngaged=0.029999999;
		dampingRateZeroThrottleClutchDisengaged=0.029999999;
		class Wheels
		{
			disableWheelsWhenDestroyed=1;
			class Wheel_1_1
			{
				boneName="wheel_1_1";
				steering=1;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_rim";
				width=0.16;
				mass=10;
				MOI=0.207057;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=0;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.1;
				maxDroop=0.1;
				sprungMass=1200;
				springStrength=50000;
				springDamperRate=16000;
				longitudinalStiffnessPerUnitGravity=400;
				latStiffX=2;
				latStiffY=18;
				frictionVsSlipGraph[]=
				{
					{0,0.40000001},
					{0.2,0.69999999},
					{0.5,0.5}
				};
			};
			class Wheel_2_1: Wheel_1_1
			{
				boneName="wheel_2_1";
				steering=0;
				center="wheel_2_1_axis";
				boundary="wheel_2_1_rim";
				width=0.28;
				sprungMass=900;
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				maxCompression=0.050000001;
				maxDroop=0.050000001;
				maxBrakeTorque=500;
			};
			class Wheel_2_2: Wheel_2_1
			{
				boneName="wheel_2_2";
				side="right";
				center="wheel_2_2_axis";
				boundary="wheel_2_2_rim";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
			};
		};
		killFriendlyExpCoef=0.1;
		driverCompartments="Compartment3";
		cargoCompartments[]=
		{
			"Compartment2"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"A3_Aegis\Air_f_Aegis\UAV_07\data\UAV_07_ext_01_grey_CO.paa"
		};
		class TextureSources
		{
			class BAF
			{
				displayName = $STR_A3_A_TextureSources_BAF0;
				author = $STR_A3_A_Grave;
				textures[]=
				{
					"A3_Aegis\Air_f_Aegis\UAV_07\data\UAV_07_ext_01_grey_CO.paa"
				};
				factions[]={};
			};
			class EAF
			{
				displayName = "LDF";
				author = $STR_A3_A_BranFlakes;
				textures[]=
				{
					"A3_Aegis\Air_f_Aegis\UAV_07\data\UAV_07_ext_01_eaf_CO.paa"
				};
				factions[]={};
			};
			class AAF
			{
				displayName = "AAF";
				author = $STR_A3_A_BranFlakes;
				textures[]=
				{
					"A3_Aegis\Air_f_Aegis\UAV_07\data\UAV_07_ext_01_INDEP_CO.paa"
				};
				factions[]={};
			};
		};
		weapons[]=
		{
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"240Rnd_CMFlare_Chaff_Magazine"
		};
		radarTargetSize=0.5;
		visualTargetSize=0.69999999;
		irTargetSize=0.5;
		lockDetectionSystem=8;
		incomingMissileDetectionSystem="8 + 16";
		showAllTargets=4;
		reportRemoteTargets=1;
		reportOwnPosition=1;
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
							maxRange=3000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=2500;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=50;
						angleRangeHorizontal=51;
						angleRangeVertical=37;
						animDirection="mainGun";
						aimDown=-0.5;
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
							maxRange=2500;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=50;
						angleRangeHorizontal=51;
						angleRangeVertical=37;
						animDirection="mainGun";
						aimDown=-0.5;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						class AirTarget
						{
							minRange=6000;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=6000;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
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
				class components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,1000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,1000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class TransportPylonsComponent
			{
				UIPicture="\a3\Drones_F\Air_F_Gamma\UAV_02\data\ui\UAV_02_base_EDEN_F.paa";
				class Pylons
				{
					class PylonRight1
					{
						attachment="PylonRack_3Rnd_LG_scalpel";
						priority=5;
						hardpoints[]=
						{
							"B_BOMB_PYLON",
							"B_MISSILE_PYLON"
						};
						turret[]={0};
						UIposition[]={0.12,0.36000001};
					};
					class PylonRight2: PylonRight1
					{
						attachment="PylonRack_3Rnd_LG_scalpel";
						priority=0;
						UIposition[]={0.15000001,0.31};
					};
					class PylonLeft2: PylonRight2
					{
						UIposition[]={0.51999998,0.31};
						mirroredMissilePos=2;
					};
					class PylonLeft1: PylonRight1
					{
						UIposition[]={0.55000001,0.36000001};
						mirroredMissilePos=1;
					};
				};
				class Presets
				{
					class empty
					{
						displayName="Empty";
						attachment[]={};
					};
					class default
					{
						displayName="Default";
						attachment[]=
						{
							"PylonRack_3Rnd_LG_scalpel",
							"PylonRack_3Rnd_LG_scalpel",
							"PylonRack_3Rnd_LG_scalpel",
							"PylonRack_3Rnd_LG_scalpel"
						};
					};
					class CAS
					{
						displayName="CAS";
						attachment[]=
						{
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F"
						};
					};
				};
			};
		};	
		class Turrets
		{
			class MainTurret: NewTurret
			{
				isCopilot=0;
				minElev=-85;
				maxElev=10;
				initElev=0;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				maxHorizontalRotSpeed=10;
				maxVerticalRotSpeed=10;
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				commanding=-1;
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				memoryPointGun="laser_start";
				memoryPointGunnerOptics="gunnerview";
				gunBeg="laser_end";
				gunEnd="laser_start";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F.p3d";
				gunnerForceOptics=1;
				turretInfoType="RscOptics_UAV_gunner";
				stabilizedInAxes=3;
				enableManualFire=0;
				showAllTargets=4;
				weapons[]=
				{
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"Laserbatteries",
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\air\noises\servo_drone_turret_2",
					0.056234129,
					1,
					10
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\air\noises\servo_drone_turret_2",
					0.056234129,
					1,
					10
				};
				gunnerCompartments="Compartment1";
				startEngine=0;
				LODTurnedIn=-1;
				LODTurnedOut=-1;
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName="W";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.5;
						minFov=0.5;
						maxFov=0.5;
						directionStabilized=1;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					};
					class Medium: Wide
					{
						opticsDisplayName="M";
						initFov=0.1;
						minFov=0.1;
						maxFov=0.1;
						gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
					};
					class Narrow: Wide
					{
						opticsDisplayName="N";
						initFov=0.0286;
						minFov=0.0286;
						maxFov=0.0286;
						gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
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
						initFov=1.1;
						minFov=0.133;
						maxFov=1.1;
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
						class components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								resource="RscCustomInfoMiniMap";
							};
							class UAVDisplay
							{
								componentType="UAVFeedDisplayComponent";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={4000,2000,1000,8000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay="SensorDisplay";
						class components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								resource="RscCustomInfoMiniMap";
							};
							class UAVDisplay
							{
								componentType="UAVFeedDisplayComponent";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={4000,2000,1000,8000};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
			};
		};
	};
	

    /* Factions */
    #include "cfgBLUFOR.hpp"    // BAF
    //#include "cfgIndep.hpp"     // AAF
	#include "cfgEAF.hpp"		// LDF
	#include "cfgINDEP.hpp"		// LDF
};