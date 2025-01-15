class Turrets: Turrets
{
    class MainTurret: MainTurret
	{
        class Turrets{};
		body = mainTurret;
		gun = mainGun;
		commanding = 2;
        showCrewAim = 2;
		startEngine = false;
        turretInfoType = RscOptics_MBT_02_gunner;

        /* Weapons & Ammunition */
		weapons[] =
        {
            autocannon_30mm_APC_Wheeled_04,
            LMG_coax_ext,
	        SmokeLauncher
        };
		magazines[] =
        {
			340Rnd_30mm_HE_shells_Tracer_Green,
			160Rnd_30mm_APFSDS_shells_Tracer_Green,
			2000Rnd_762x51_Belt_Green,
			SmokeLauncherMag
        };
		selectionFireAnim = zasleh2;
		memoryPointGun[] = {"usti hlavne3"};

        /* Servos */
		minElev = -5;
		maxElev = 35;
		initElev = 0;
        minTurn = -360;
        maxTurn = 360;
		initTurn = 0;
		minCamElev = -90;
		maxCamElev = 90;
		soundServo[] = {"\A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",db-8,1,30};
		soundServoVertical[] = {"\A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",db-8,1,30};
		stabilizedInAxes = StabilizedInAxesBoth;
        lockWhenDriverOut = true;

        /* Crew */
		gunnerAction = Driver_APC_Wheeled_04_out;
		gunnerInAction = Driver_APC_Wheeled_04_in;
		gunnerForceOptics = true;
		forceHideGunner = false;
		viewGunnerInExternal = true;
		castGunnerShadow = true;
		inGunnerMayFire = true;
		outGunnerMayFire = false;
		usepip = 1;
		LODTurnedOut = VIEW_DEFAULT;
		LODTurnedIn = VIEW_GUNNER;
		LODOpticsIn = VIEW_DEFAULT;
		animationSourceStickX = turret_control_x;
		animationSourceStickY = turret_control_y;
		gunnerRightHandAnimName = turret_control;
		viewGunnerShadowAmb = 0.5;
		viewGunnerShadowDiff = 0.05;

        /* Enter & Exit Animations */
		gunnerGetInAction = GetInAMV_cargo;
		gunnerGetOutAction = GetOutLow;

        /* Optics */
		discreteDistance[] =
        {
            100,
            200,
            300,
            400,
            500,
            600,
            700,
            800,
            900,
            1000,
            1100,
            1200,
            1300,
            1400,
            1500,
            1600,
            1700,
            1800,
            1900,
            2000,
            2100,
            2200,
            2300,
            2400,
            2500,
            2600,
            2700,
            2800,
            2900,
            3000
        };
		discreteDistanceInitIndex = 2;
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_02_F.p3d";
        memoryPointGunnerOptics = gunnerview;
        class ViewOptics: RCWSOptics
        {
            visionMode[] =
            {
                Normal,
                TI
            };
        };
        class OpticsIn: Optics_Gunner_MBT_02
        {
            class Wide: Wide{};
            class Medium: Medium{};
            class Narrow: Narrow{};
        };
        /* Damage */
		class HitPoints
		{
			class HitTurret
			{
				armor = 0.8;
				material = -1;
				armorComponent = hit_main_turret;
				name = hit_main_turret_point;
				visual = vez;
				passThrough = 0;
				minimalHit = 0.1;
				explosionShielding = 0.2;
				radius = 0.25;
				isTurret = true;
			};
			class HitGun
			{
				armor = 0.6;
				material = -1;
				armorComponent = hit_main_gun;
				name = hit_main_gun_point;
				visual = zbran;
				passThrough = 0;
				minimalHit = 0.1;
				explosionShielding = 0.4;
				radius = 0.2;
				isGun = true;
			};
        };
        /* Sensors & Components */
        class Components: Components
        {
            class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
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
            class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
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