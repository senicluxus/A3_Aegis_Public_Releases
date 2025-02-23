class CfgAmmo
{
    /* Inheritance Tree */
    class Default;

    /* Bases */
	class BulletBase;
	class ammo_Penetrator_Base;
	class FlareCore;
	class ShotDeployBase;
    class SubmunitionBase;
	class MissileCore;
	class MissileBase: MissileCore
	{
		class Components;
	};
	class Grenade: Default
	{
		deflecting = 7;
		deflectionSlowDown = 0.5;
    };
    class LaserBombCore;
    class ammo_Bomb_LaserGuidedBase: LaserBombCore
    {
        class Components;
    };
	class RocketBase;
	class B_20mm;
	class B_762x51_Ball;
	class B_762x51_Minigun_Tracer_Red;
	class B_762x51_Minigun_Tracer_Green: B_762x51_Minigun_Tracer_Red
	{
		model = "\A3\Weapons_F\Data\bullettracer\tracer_green.p3d";
		submunitionAmmo = B_762x51_Minigun_Tracer_Green_splash;
	};
	class B_762x51_Minigun_Tracer_Red_splash;
	class B_762x51_Minigun_Tracer_Green_splash: B_762x51_Minigun_Tracer_Red_splash
	{
		model = "\A3\Weapons_F\Data\bullettracer\tracer_green.p3d";
	};
	class B_127x33_Ball: BulletBase
	{
		cartridge = FxCartridge_9mm;
	};
	class B_127x108_Ball;
	class B_19mm_HE: BulletBase
	{
		cartridge = FxCartridge_slug;
		delete CamShakeFire;
		delete CamShakePlayerFire;
	};
	class B_25mm: BulletBase
	{
		model = "\A3\Weapons_F\Data\bullettracer\tracer_red.p3d";
		nvgOnly = false;
	};
	class B_545x39_Ball_F;
	class B_545x39_Ball_Red_F: B_545x39_Ball_F
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red.p3d";
	};
	class GrenadeHand: Grenade{};
	class mini_Grenade: GrenadeHand
	{
		deflecting = 14;
	};
	class SmokeShell: GrenadeHand
	{
		deflecting = 10;
		deflectionSlowDown = 0.3;
		grenadeFireSound[] =
        {
            SmokeShellSoundHit1,1/3,
            SmokeShellSoundHit2,1/3,
            SmokeShellSoundHit3,1/3
        };
        aiAmmoUsageFlags = ConcealmentAU;
    };
	class SmokeShellRed: SmokeShell
	{
        aiAmmoUsageFlags = MarkingAU;
	};
	class SmokeShellGreen: SmokeShell
	{
        aiAmmoUsageFlags = MarkingAU;
	};
	class SmokeShellYellow: SmokeShell
	{
        aiAmmoUsageFlags = MarkingAU;
	};
	class SmokeShellPurple: SmokeShell
	{
        aiAmmoUsageFlags = MarkingAU;
	};
	class SmokeShellBlue: SmokeShell
	{
        aiAmmoUsageFlags = MarkingAU;
	};
	class SmokeShellOrange: SmokeShell
	{
        aiAmmoUsageFlags = MarkingAU;
	};
	class G_40mm_Smoke: SmokeShell
	{
        simulation = shotSmoke;
		deflecting = 7;
		deflectionSlowDown = 0.1;
        explosionTime = 1;
		timeToLive = 25;
		/*
        SmokeShellSoundHit1[] = {"\A3\Missions_F_Exp\Data\sounds\EXP_m04_flare",db0,1,100};
		grenadeFireSound[] = {SmokeShellSoundHit1,1};
        */
		SmokeShellSoundHit1[] = {"\A3\Sounds_F\weapons\smokeshell\smoke_1",db2,1,100};
		SmokeShellSoundHit2[] = {"\A3\Sounds_F\weapons\smokeshell\smoke_2",db2,1,100};
		SmokeShellSoundHit3[] = {"\A3\Sounds_F\weapons\smokeshell\smoke_3",db2,1,100};
		SmokeShellSoundLoop1[] = {"\A3\Sounds_F\weapons\smokeshell\smoke_loop1",db-18,1,70};
		SmokeShellSoundLoop2[] = {"\A3\Sounds_F\weapons\smokeshell\smoke_loop2",db-18,1,70};
		grenadeFireSound[] =
        {
            SmokeShellSoundHit1,1/3,
            SmokeShellSoundHit2,1/3,
            SmokeShellSoundHit3,1/3
        };
		grenadeBurningSound[] =
        {
            SmokeShellSoundLoop1,1/2,
            SmokeShellSoundLoop2,1/2
        };
	};
	class G_40mm_SmokeRed: G_40mm_Smoke
	{
        aiAmmoUsageFlags = MarkingAU;
	};
	class G_40mm_SmokeGreen: G_40mm_Smoke
	{
        aiAmmoUsageFlags = MarkingAU;
	};
	class G_40mm_SmokeYellow: G_40mm_Smoke
	{
        aiAmmoUsageFlags = MarkingAU;
	};
	class G_40mm_SmokePurple: G_40mm_Smoke
	{
        aiAmmoUsageFlags = MarkingAU;
	};
	class G_40mm_SmokeBlue: G_40mm_Smoke
	{
        aiAmmoUsageFlags = MarkingAU;
	};
	class G_40mm_SmokeOrange: G_40mm_Smoke
	{
        aiAmmoUsageFlags = MarkingAU;
	};
	class G_40mm_HEDP;
	class G_40mm_HEDP_Submunition: G_40mm_HEDP
	{
		hit = 60;
		caliber = 26;
		submunitionAmmo = ammo_Penetrator_grenade_40mm;
		submunitionDirectionType = SubmunitionModelDirection;
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.0;
		submunitionInitialOffset[] =
        {
            0,      // X
            0,      // Y
            -0.2    // Z
        };
		triggerOnImpact = true;
		deleteParentWhenTriggered = false;
	};
    class Chemlight_base;
	class Chemlight_green: Chemlight_base
	{
		typicalspeed = 22;
	};
	class FlareBase: FlareCore
	{
		timeToLive = 40;
		intensity = 800000;
        flareSize = 40;
        aiAmmoUsageFlags = LightAU;
	};
	class F_40mm_White: FlareBase
	{
		lightColor[] =
        {
            0.95,   // R
            0.95,   // G
            0.95,   // B
            0       // A
        };
		intensity = 800000;
		brightness = 120;
	};
	class F_40mm_Green: F_40mm_White
	{
		lightColor[] =
        {
            0.25,   // R
            0.8,    // G
            0.25,   // B
            0       // A
        };
	};
	class F_40mm_Red: F_40mm_White
	{
		lightColor[] =
        {
            0.8,    // R
            0.25,   // G
            0.25,   // B
            0       // A
        };
	};
	class F_40mm_Yellow: F_40mm_White
	{
		lightColor[] =
        {
            0.95,   // R
            0.8,    // G
            0.25,   // B
            0       // A
        };
	};
	class F_40mm_Cir: F_40mm_White
	{
		lightColor[] =
        {
            0.5,    // R
            0.25,   // G
            0.95,   // B
            0       // A
        };
		irLight = true;
		intensity = 700000;
		brightness = 100;
        model = "\A3_Aegis\Weapons_F_Aegis\Ammo\flare_cir.p3d";
	};
	class F_20mm_White: FlareBase
	{
		lightColor[] =
        {
            0.95,   // R
            0.95,   // G
            0.95,   // B
            0       // A
        };
		intensity = 750000;
		brightness = 100;
        flareSize = 30;
	};
	class F_20mm_Green: F_20mm_White
	{
		lightColor[] =
        {
            0,      // R
            0.95,   // G
            0,      // B
            0       // A
        };
	};
	class F_20mm_Red: F_20mm_White
	{
		lightColor[] =
        {
            0.95,   // R
            0,      // G
            0,      // B
            0       // A
        };
	};
	class F_20mm_Yellow: F_20mm_White
	{
		lightColor[] =
        {
            0.95,   // R
            0.95,   // G
            0,      // B
            0       // A
        };
	};
	class ammo_Penetrator_grenade_40mm: ammo_Penetrator_Base
	{
		caliber = 26;
	};
	/*class IRBeacon_Base: Chemlight_base
	{
		lightColor[] = 
		{
			0.0099999998,	// R
			0.0099999998,	// G
			0.0099999998,	// B
			1				// A
		};
		irLight = true;
		blinking = true;
		model = "\A3\Weapons_F_EPB\Ammo\B_IRstrobe_F.p3d";
		effectsSmoke = "IRBeacon_Light";
	};*/
	class Flare_82mm_AMOS_White: FlareCore
	{
		timeToLive = 90;
		lightColor[] =
        {
            0.95,   // R
            0.95,   // G
            0.95,   // B
            0       // A
        };
		intensity = 900000;
		brightness = 190;
        flareSize = 50;
        aiAmmoUsageFlags = LightAU;
	};
	class Gatling_30mm_HE_Plane_CAS_01_F;
	class Gatling_30mm_HE_Plane_CAS_01_Yellow_F: Gatling_30mm_HE_Plane_CAS_01_F
    {
		model = "\A3\Weapons_F\Data\bullettracer\tracer_yellow.p3d";
    };
	class ammo_Gun20mmAABase;
	class ammo_Gun30mmAABase;
	class ammo_Gun35mmAABase;
	class ammo_AAA_Gun35mm_AA: ammo_Gun35mmAABase
	{
		model = "\A3\Weapons_F\Data\bullettracer\tracer_red.p3d";
	};
	class ammo_Fighter01_Gun20mm_AA: ammo_Gun20mmAABase
	{
		model = "\A3\Weapons_F\Data\bullettracer\tracer_red.p3d";
	};
	class ammo_Fighter04_Gun20mm_AA: ammo_Gun20mmAABase
	{
		model = "\A3\Weapons_F\Data\bullettracer\tracer_yellow.p3d";
	};
	class ammo_Fighter02_Gun30mm_AA: ammo_Gun30mmAABase
    {
		model = "\A3\Weapons_F\Data\bullettracer\tracer_green.p3d";
    };
	class B_12Gauge_Pellets_Submunition;
	class B_12Gauge_Pellets_Submunition_Cartridge: B_12Gauge_Pellets_Submunition
	{
		cartridge = FxCartridge_pellets;
	};
	class B_25x40mm_base: B_19mm_HE
	{
		simulationStep = 0.001;
		hit = 11;
		indirectHit = 6;
		indirectHitRange = 4;
		cartridge = FxCartridge_25x40;
		timeToLive = 8;
	};
	class B_25x40mm_HE: B_25x40mm_base{};
	class B_25x40mm_airburst: B_25x40mm_base
	{
		/*simulation = shotSubmunitions;
		simulationStep = 0.05;

		hit = 10; indirectHit = 5; indirectHitRange = 4;
    	caliber = 2;
    	explosive = 1;
    	warheadName = HE;

		//--- Submunition
    	submunitionAmmo[] = {B_25x40mm_airburst_deploy,1};
    	submunitionConeType[] = {randomcenter,15};
		submunitionDirectionType = SubmunitionAutoLeveling;
		submunitionCount = 3;
		submunitionConeAngle[] = {-90,-45};
		submunitionConeAngleHorizontal = 360;
		submunitionParentSpeedCoef = 0.1;
		submunitionInitialOffset[] = {0,0,-0.2};
		deleteParentWhenTriggered = true;
		triggerOnImpact = true;
		triggerDistance = 10;
		triggerSpeedCoef[] = {0.5,1};

		deflecting = 5;
		explosionTime = 0;
		timeToLive = 50;

		//--- SFX
		soundSetExplosion[] =
		{
			MiniGrenade_Exp_SoundSet,
			MiniGrenade_Tail_SoundSet,
			Explosion_Debris_SoundSet
		};

		//--- VFX
		explosionEffects = ExploAmmoExplosion;*/
		
		hit = 8; indirectHit = 5; indirectHitRange = 8;
		Aegis_isAirburst = true;
		Aegis_airburstFuseDistance = 3;
	};
	class B_25x40mm_airburst_deploy: B_25x40mm_HE
	{
		simulation = shotGrenade;
		model = "\A3\Weapons_F_EPB\Ammo\B_IRstrobe_F.p3d";
		airFriction = -0.001;
		hit = 20; indirectHit = 2; indirectHitRange = 4;
    	caliber = 2;
    	explosive = 1;
    	warheadName = HE;
	
		explosionTime = -1;
		fuseDistance = 0;

		//--- SFX
		soundSetExplosion[] = {Shell19mm25mm_Exp_SoundSet};

		//--- VFX
		explosionEffects = ExploAmmoExplosion;
		effectFly = ClusterEffectFly;
		craterEffects = ClusterCraterEffects;
		craterWaterEffects = ClusterCraterWaterEffects;
	};
	class B_25x40mm_autoseek: B_25x40mm_base{};
	class B_25x40mm_stick: B_25x40mm_base{};
	class ammo_Penetrator_Vikhr: ammo_Penetrator_Base
	{
		caliber = 56.6667;
		warheadName = TandemHEAT;
		hit = 800;
	};
	class B_460x30_Ball: BulletBase
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalSpeed = 725;
		airFriction = -0.001412; // Potentially more accurate value: -0.001606;
		caliber = 0.50715;
		deflecting = 20;
		model = "\A3\Weapons_F\Data\bullettracer\tracer_red.p3d";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		audibleFire = 25;
		visibleFire = 3;
		visibleFireTime = 5;
		dangerRadiusBulletClose = 8;
		suppressionRadiusBulletClose = 6;
		dangerRadiusHit = 12;
		suppressionRadiusHit = 8;
	};
	class G_40mm_APERSMine: ShotDeployBase
	{
		submunitionAmmo = APERSMineDispenser_Mine_Ammo;
		model = "\A3\Weapons_F_Orange\Explosives\APERSmineDispenser_AP.p3d";
		mineFloating = 1000;
	};
	class GrenadeHandEast: GrenadeHand
	{
        /*
        - Impact grenade
        - Slightly larger blast radius than the Frag Grenade
        - Slightly heavier than the Frag Grenade
        */
		hit = 8;
		indirectHit = 8;
		indirectHitRange = 7;
		dangerRadiusHit = 65;
		suppressionRadiusHit = 27;
		typicalspeed = 20;
		model = "\A3_Aegis\Weapons_F_Aegis\Ammo\Handgrenade_east_throw.p3d";
		deflecting = 7;
		fuseDistance = /*4*/ 0;
        explosionTime = -1;
		timeToLive = 18;
	};
	class GrenadeHandGuer: GrenadeHandEast
	{
        /*
        - Impact grenade
        - Slightly smaller blast radius than the Frag Grenade
        */
		hit = 7;
		indirectHit = 7;
		indirectHitRange = 5;
		dangerRadiusHit = 55;
		suppressionRadiusHit = 21;
		typicalspeed = 24;
		model = "\A3_Aegis\Weapons_F_Aegis\Ammo\Handgrenade_guer_throw.p3d";
		deflecting = 15;
		fuseDistance = /*4*/ 0;
	};
	class R_50mm_HE: RocketBase
	{
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F.p3d";
		hit = 150;
		indirectHit = 40;
		indirectHitRange = 12;
		warheadName = HE;
		cost = 200;
		maxSpeed = 580;
		initTime = 0.002;
		thrustTime = 1.10;
		thrust = 450;
		airFriction = 0.09;
		sideAirFriction = 0.15;
		fuseDistance = 40;
		whistleDist = 24;
		timeToLive = 20;
		effectsMissileInit = PylonBackEffectsRockets;
		muzzleEffect = "";
		simulation = shotMissile;
		class CamShakeExplode
		{
			power = 12;
			duration = 1.6;
			frequency = 20;
			distance = 141.968;
		};
		class CamShakeHit
		{
			power = 50;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.78316;
			duration = 1.6;
			frequency = 20;
			distance = 61.967701;
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class M_Vikhr_AT: MissileBase
	{
		hit = 200;
		indirectHit = 40;
		indirectHitRange = 4;
		proximityExplosionDistance = 10;
		warheadName = TandemHEAT;
		submunitionAmmo = ammo_Penetrator_Vikhr;
		submunitionDirectionType = SubmunitionModelDirection;
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0,0,-0.2};
		triggerOnImpact = true;
		deleteParentWhenTriggered = false;
		model = "\A3\Weapons_F\Ammo\Missile_AT_02_fly_F.p3d";
		proxyShape = "\A3\Weapons_F\Ammo\Missile_AT_02_F.p3d";
		CraterEffects = ATRocketCrater;
		explosionEffects = ATRocketExplosion;
		whistleDist = 4;
		maneuvrability = 12;
		simulationStep = 0.002;
		aiAmmoUsageFlags = OffensiveVehAU + OffensiveAirAU + OffensiveArmourAU;
		irLock = true;
		nvLock = true;
		laserLock = true;
		cost = 700;
		maxSpeed = 600;
		timeToLive = 23;
		airFriction = 0.103;
		sideAirFriction = 0.2;
		trackLead = 1;
		trackOversteer = 1;
		initTime = 0;
		thrustTime = 3.5;
		thrust = 200;
		fuseDistance = 50;
		muzzleEffect = BIS_fnc_effectFiredHeliRocket;
		class Hiteffects
		{
			hitWater = ImpactEffectsSmall;
		};
		cameraViewAvailable = true;
		airLock = true;
		activeSensorAlwaysOn = false;
		missileLockCone = 30;
		missileKeepLockedCone = 60;
		missileLockMaxDistance = 8000;
		missileLockMinDistance = 250;
		missileLockMaxSpeed = 800;
		weaponLockSystem = CM_Lock_IR + CM_Lock_Laser + CM_Lock_Radar + CM_Missile;
		cmImmunity = CMImmunity_MIDDLE;
		manualControl = true;
		maxControlRange = 8000;
		missileManualControlCone = 120;
		soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_1",db-5,1.5,700};
		flightProfiles[] =
        {
            Direct,
            TopDown
        };
		class Direct{};
		class TopDown
		{
			ascendHeight = 400.0;
			descendDistance = 800.0;
			minDistance = 250.0;
			ascendAngle = 25.0;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class RadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 600;
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
					};
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 8000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 600;
						angleRangeHorizontal = 45;
						angleRangeVertical = 35;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 600;
						angleRangeHorizontal = 70;
						angleRangeVertical = 50;
					};
				};
			};
		};
	};
	class ammo_Fighter04_Gun20mm_AA_red: ammo_Fighter04_Gun20mm_AA
	{
		model = "\A3\Weapons_F\Data\bullettracer\tracer_red.p3d";
	};
	class ammo_Bomb_GlideBase: ammo_Bomb_LaserGuidedBase
	{
		model = "\A3\Weapons_F\empty.p3d";
		proxyShape = "\A3\Weapons_F\empty.p3d";
		hit = 5000;
		indirectHit = 1100;
		indirectHitRange = 12;
		fuseDistance = 100;
		trackLead = 0.3;
		trackOversteer = 1;
		maxSpeed = 1000;
		airFriction = 0.04;
		sideAirFriction = 0.08;
		maneuvrability = 12;
		cost = 1000;
		aiAmmoUsageFlags = OffensiveVehAU + OffensiveArmourAU;
		dangerRadiusHit = 1250;
		suppressionRadiusHit = 100;
		craterEffects = HeavyBombCrater;
		explosionEffects = HeavyBombExplosion;
		whistleDist = 48;
        airLock = false;
		lockType = fireAndForgetLT;
		weaponLockSystem = CM_Lock_IR + CM_Lock_Laser;
		cmImmunity = CMImmunity_BAD;
		cameraViewAvailable = true;
		autoSeekTarget = true;
		lockSeekRadius = 1500;
		flightProfiles[] = {LoalAltitude};
		class LoalAltitude
		{
			lockSeekAltitude = 700;
		};
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class NVSensorComponent: SensorTemplateNV
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
						maxTrackableSpeed = 25;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class LaserSensorComponent: SensorTemplateLaser
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
						maxTrackableSpeed = 25;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 1000;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 1000;
							maxRange = 16000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 45;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
					};
				};
			};
		};
		class CamShakeExplode
		{
			power = 46;
			duration = 3;
			frequency = 20;
			distance = 361.326;
		};
		class CamShakeHit
		{
			power = 230;
			duration = 0.8;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.89432;
			duration = 3;
			frequency = 20;
			distance = 121.326;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class ammo_Bomb_AGM_154: ammo_Bomb_GlideBase
	{
		cameraViewAvailable = true;
		model = "\A3\Weapons_F_Sams\Ammo\Bomb_06_F_fly.p3d";
		proxyShape = "\A3\Weapons_F_Sams\Ammo\Bomb_06_F.p3d";
	};
	
	class G_40mm_AB: G_40mm_HEDP
	{
		hit = 80;
		indirectHit = 5;
		indirectHitRange = 12;
		caliber = 3;
		warheadName = "AB";
		Aegis_isAirburst = true;
		Aegis_airburstFuseDistance = 5;
		class CamShakeHit
		{
			power = 20;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
	};
	
	/* Mi-35 Krokodil Ammo*/
	class Aegis_Autocannon_HE_Heli_Attack_04_F: BulletBase
	{
		cost=30;
		hit=60;
		indirectHit=6;
		indirectHitRange=1.6;
		caliber=3.4000001;
		explosive=0.40000001;
		weaponType="cannon";
		warheadName="HE";
		airLock=1;
		deflecting=5;
		airFriction=-0.00078;
		typicalSpeed=1030;
		visibleFire=32;
		audibleFire=200;
		visibleFireTime=4;
		fuseDistance=10;
		dangerRadiusBulletClose=16;
		dangerRadiusHit=40;
		suppressionRadiusBulletClose=10;
		suppressionRadiusHit=14;
		tracerScale=2;
		tracerStartTime=0.050000001;
		tracerEndTime=1;
		soundFly[]=
		{
			"",
			1,
			1,
			50
		};
		explosionSoundEffect="DefaultExplosion";
		explosionEffects="ExploAmmoExplosion";
		CraterEffects="ExploAmmoCrater";
		model="";
		muzzleEffect="";
		allowAgainstInfantry=1;
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_01",
			1.7782794,
			1,
			1300
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_02",
			1.7782794,
			1,
			1300
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_03",
			1.7782794,
			1,
			1300
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_04",
			1.7782794,
			1,
			1300
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.25,
			"soundHit2",
			0.25,
			"soundHit3",
			0.25,
			"soundHit4",
			0.25
		};
		class CamShakeExplode
		{
			power=4;
			duration=0.80000001;
			frequency=20;
			distance=43.7771;
		};
		class CamShakeHit
		{
			power=20;
			duration=0.40000001;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=2.1147399;
			duration=0.80000001;
			frequency=20;
			distance=35.7771;
		};
		class CamShakePlayerFire
		{
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};
		class HitEffects
		{
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
			hitFoliage="ImpactLeaves";
			hitGlass="";
			hitGlassArmored="";
			hitWood="ImpactWood";
			hitHay="ImpactHay";
			hitMetal="";
			hitMetalPlate="";
			hitBuilding="";
			hitPlastic="";
			hitRubber="";
			hitConcrete="";
			hitMan="";
			hitGroundSoft="";
			hitGroundHard="";
			hitWater="ImpactEffectsWater";
			hitVirtual="";
		};
	};
	class Aegis_Autocannon_HE_Heli_Attack_04_Yellow_F: Aegis_Autocannon_HE_Heli_Attack_04_F
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class Aegis_Autocannon_HE_Heli_Attack_04_Green_F: Aegis_Autocannon_HE_Heli_Attack_04_F
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class Aegis_Autocannon_HE_Heli_Attack_04_Red_F: Aegis_Autocannon_HE_Heli_Attack_04_F
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class Aegis_Autocannon_HE_Heli_Attack_04_White_F: Aegis_Autocannon_HE_Heli_Attack_04_F
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
	};

	///Mi-25 AP
	class Aegis_Autocannon_AP_Heli_Attack_04_F: BulletBase
	{
		cost=35;
		hit=60;
		indirectHit=8;
		indirectHitRange=0.2;
		caliber=3.4000001;
		weaponType="cannon";
		warheadName="AP";
		airlock=1;
		deflecting=15;
		airFriction=-0.00042;
		typicalSpeed=1120;
		visibleFire=32;
		audibleFire=200;
		visibleFireTime=3;
		fuseDistance=10;
		dangerRadiusBulletClose=16;
		dangerRadiusHit=40;
		suppressionRadiusBulletClose=10;
		suppressionRadiusHit=14;
		tracerScale=2;
		tracerStartTime=0.1;
		tracerEndTime=2;
		soundFly[]=
		{
			"",
			1,
			1,
			50
		};
		explosionSoundEffect="DefaultExplosion";
		explosionEffects="ExploAmmoExplosion";
		CraterEffects="ExploAmmoCrater";
		model="";
		muzzleEffect="";
		allowAgainstInfantry=0;
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01",
			1.7782794,
			1,
			1600
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02",
			1.7782794,
			1,
			1600
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03",
			1.7782794,
			1,
			1600
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04",
			1.7782794,
			1,
			1600
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.25,
			"soundHit2",
			0.25,
			"soundHit3",
			0.25,
			"soundHit4",
			0.25
		};
		class CamShakeExplode
		{
			power=5;
			duration=1;
			frequency=20;
			distance=56;
		};
		class CamShakeHit
		{
			power=50;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=2.2360699;
			duration=1;
			frequency=20;
			distance=40;
		};
		class CamShakePlayerFire
		{
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class Aegis_Autocannon_AP_Heli_Attack_04_Yellow_F: Aegis_Autocannon_AP_Heli_Attack_04_F
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class Aegis_Autocannon_AP_Heli_Attack_04_Green_F: Aegis_Autocannon_AP_Heli_Attack_04_F
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class Aegis_Autocannon_AP_Heli_Attack_04_Red_F: Aegis_Autocannon_AP_Heli_Attack_04_F
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class Aegis_Autocannon_AP_Heli_Attack_04_White_F: Aegis_Autocannon_AP_Heli_Attack_04_F
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
	};

	/* BMP-M 57mm */
	class B_40mm_GPR;
	class B_40mm_APFSDS;
	class Aegis_B_57mm_GPR: B_40mm_GPR
	{
		hit=90;
		indirectHit=10;
		indirectHitRange=6;
		warheadName="AP";
		caliber=4.5999999;
		deflecting=10;
		cost=40;
		airFriction=-0.00060000004;
		timeToLive=15;
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01",
			1.7782794,
			1,
			1600
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02",
			1.7782794,
			1,
			1600
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03",
			1.7782794,
			1,
			1600
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04",
			1.7782794,
			1,
			1600
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.25,
			"soundHit2",
			0.25,
			"soundHit3",
			0.25,
			"soundHit4",
			0.25
		};
		class CamShakeExplode
		{
			power=8;
			duration=1.2;
			frequency=20;
			distance=82.596397;
		};
		class CamShakeHit
		{
			power=40;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=2.5148699;
			duration=1.2;
			frequency=20;
			distance=50.596401;
		};
		class CamShakePlayerFire
		{
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class Aegis_B_57mm_APFSDS: B_40mm_APFSDS
	{
		hit=180;
		indirectHit=10;
		indirectHitRange=0.4;
		warheadName="AP";
		typicalSpeed=1150;
		caliber=10;
		airFriction=-0.00014;
		cost=100;
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01",
			1.7782794,
			1,
			1600
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02",
			1.7782794,
			1,
			1600
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03",
			1.7782794,
			1,
			1600
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04",
			1.7782794,
			1,
			1600
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.25,
			"soundHit2",
			0.25,
			"soundHit3",
			0.25,
			"soundHit4",
			0.25
		};
		class CamShakeExplode
		{
			power=7.7459698;
			duration=1.6;
			frequency=20;
			distance=23.2379;
		};
		class CamShakeHit
		{
			power=60;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=2.5148699;
			duration=1.2;
			frequency=20;
			distance=50.596401;
		};
		class CamShakePlayerFire
		{
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	/* Hand Flare Begin*/
	class Aegis_GrenadeAmmo_HandFlare_Base: GrenadeHand
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=0.2;
		dangerRadiusHit=-1;
		suppressionRadiusHit=-1;
		typicalspeed=22;
		mass=4;
		cost=100;
		simulation="shotSmokeX";
		explosive=0;
		deflecting=30;
		explosionTime=0.05;
		timeToLive=600; //11 Minutes. - one more than burn effect
		triggerTime=0.01;
		triggerSpeedCoef=1;
		visibleFire=0.5;
		audibleFire=0.05;
		visibleFireTime=1;
		fuseDistance=0;
		soundHit[]=
		{
			"",
			0,
			1
		};
		SmokeShellSoundHit1[]=
		{
			"A3\Sounds_F\weapons\smokeshell\smoke_1",
			1.2589254,
			1,
			100
		};
		SmokeShellSoundHit2[]=
		{
			"A3\Sounds_F\weapons\smokeshell\smoke_2",
			1.2589254,
			1,
			100
		};
		SmokeShellSoundHit3[]=
		{
			"A3\Sounds_F\weapons\smokeshell\smoke_3",
			1.2589254,
			1,
			100
		};
		SmokeShellSoundLoop1[]=
		{
			"A3\Sounds_F\weapons\smokeshell\smoke_loop1",
			0.12589253,
			1,
			70
		};
		SmokeShellSoundLoop2[]=
		{
			"A3\Sounds_F\weapons\smokeshell\smoke_loop2",
			0.12589253,
			1,
			70
		};
		grenadeFireSound[]=
		{
			"SmokeShellSoundHit1",
			0.25,
			"SmokeShellSoundHit2",
			0.25,
			"SmokeShellSoundHit3",
			0.5
		};
		grenadeBurningSound[]=
		{
			"SmokeShellSoundLoop1",
			0.5,
			"SmokeShellSoundLoop2",
			0.5
		};
		aiAmmoUsageFlags="4 + 2";
		whistleDist=0;
	};	
	class Aegis_GrenadeAmmo_HandFlare_Red: Aegis_GrenadeAmmo_HandFlare_Base
	{
		model = "A3_Aegis\weapons_f_aegis\Explosives\HandFlare_Red_Throw_F";
		smokeColor[]={0.84380001,0.1383,0.1353,1};
		effectsSmoke = "Aegis_HandFlare_Effect_Red";
	};
	class Aegis_GrenadeAmmo_HandFlare_Green: Aegis_GrenadeAmmo_HandFlare_Base
	{
		model = "A3_Aegis\weapons_f_aegis\Explosives\HandFlare_Green_Throw_F";
		smokeColor[]={0.84380001,0.1383,0.1353,1};
		effectsSmoke="Aegis_HandFlare_Effect_Green";
	};
	class Aegis_GrenadeAmmo_SignalFlare_Base: Aegis_GrenadeAmmo_HandFlare_Base
	{
		timeToLive=360;
	};
	class Aegis_GrenadeAmmo_SignalFlare_Red: Aegis_GrenadeAmmo_SignalFlare_Base
	{
		model = "A3_Aegis\weapons_f_aegis\Explosives\HandFlare_Red_Throw_F";
		smokeColor[]={0.84380001,0.1383,0.1353,1};
		effectsSmoke = "Aegis_SignalFlare_Effect_Red";
	};
	class Aegis_GrenadeAmmo_SignalFlare_Green: Aegis_GrenadeAmmo_SignalFlare_Base
	{
		model = "A3_Aegis\weapons_f_aegis\Explosives\HandFlare_Green_Throw_F";
		smokeColor[]={0.84380001,0.1383,0.1353,1};
		effectsSmoke="Aegis_SignalFlare_Effect_Green";
	};
	/* Hand Flare End */
	/* KORD HMG 12.7 x 108 mm */
	class Aegis_B_127x108_Ball_KORD_Green_F: B_127x108_Ball
	{
		hit = 32;
		airFriction = -0.0006;
		typicalSpeed = 850;
	};
	class Aegis_B_127x108_Ball_KORD_Yellow_F: Aegis_B_127x108_Ball_KORD_Green_F
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class Aegis_B_127x108_Ball_KORD_Red_F: Aegis_B_127x108_Ball_KORD_Green_F
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	/* .44 RM */
	class Aegis_B_44RM_Ball: B_127x33_Ball
	{
		hit = 7;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = FxCartridge_9mm;
		audibleFire = 30;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 8;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
		visibleFireTime = 3;
		cost = 50;
		airLock = 1;
		caliber = 1;
		deflecting = 45;
		typicalSpeed = 390;
		maxspeed = 405;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 0.6;
		tracerStartTime = 0.01;
		tracerEndTime = 1.5;
		airFriction = -0.0016;
	};
	/* 5.45 Armour Piercing*/
	class Aegis_B_545x39_AP_F: B_545x39_Ball_F
	{
		aiAmmoUsageFlags = 64;
		airLock = 1;
		hit = 11;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalSpeed = 880;
		airFriction = -0.0013;
		caliber = 1.1;
		deflecting = 20;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale = 1;
		tracerStartTime = 0.050000001;
		tracerEndTime = 1;
		nvgOnly = 0;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
	};
	class Aegis_B_545x39_AP_Tracer_Yellow_F: Aegis_B_545x39_AP_F
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class Aegis_M_PG_APKWS: MissileBase
	{
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F";
		proxyShape = "\A3\Weapons_F\Ammo\Rocket_01_F";
		submunitionAmmo = "ammo_Penetrator_PG_AT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.0;
		submunitionInitialOffset[] = {0,0,-0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 95;
		indirectHit = 40;
		indirectHitRange = 3.2;
		warheadName = "HE";
		cost = 200;
		maxSpeed = 720;
		irLock = 1;
		laserLock = 1;
		aiAmmoUsageFlags = "128 + 256";
		trackOversteer = 1;
		trackLead = 1;
		maneuvrability = 12;
		timeToLive = 20;
		simulationStep = 0.002;
		airFriction = 0.1;
		sideAirFriction = 0.28;
		initTime = 0.0;
		thrustTime = 1.07;
		thrust = 825;
		fuseDistance = 50;
		effectsMissileInit = "MissileDAR1";
		effectsMissile = "missile2";
		whistleDist = 4;
		muzzleEffect = "";
		airLock = 1;
		missileLockCone = 30;
		missileKeepLockedCone = 60;
		missileLockMaxDistance = 5000;
		missileLockMinDistance = 100;
		missileLockMaxSpeed = 35;
		weaponLockSystem = "2 + 4 + 16";
		cmImmunity = 0.3;
		manualControl = 1;
		maxControlRange = 5000;
		missileManualControlCone = 240;
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
							maxRange = 4000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 35;
						angleRangeHorizontal = 45;
						angleRangeVertical = 35;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 4000;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 4000;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 35;
						angleRangeHorizontal = 90;
						angleRangeVertical = 70;
					};
				};
			};
		};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",0.56234133,1.2,700};
	};
	/* 20mm Green/Yellow Tracer */
	 class Aegis_B_20mm_Tracer_Green: B_20mm
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class Aegis_B_20mm_Tracer_Yellow: B_20mm
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };
};
