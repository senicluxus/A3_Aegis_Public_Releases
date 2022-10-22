class Turrets: Turrets
{
	class MainTurret: MainTurret
	{
		class Turrets: Turrets
		{
			class CommanderOptics: CommanderOptics
			{
                body = obsTurret;
                gun = obsGun;
                animationSourceBody = obsTurret;
                animationSourceGun = obsGun;
				showCrewAim = 1;
				startEngine = false;
				turretFollowFreeLook = 2;
				turretInfoType = RscOptics_MBT_02_commander;

                /* Servos */
				minElev = -25;
				maxElev = 60;
				initElev = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				maxHorizontalRotSpeed = 1.8;
				maxVerticalRotSpeed = 1.8;
				soundServo[] = {"\A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",db-5,1,30};
				soundServoVertical[] = {"\A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",db-5,1,30};
				stabilizedInAxes = StabilizedInAxesBoth;

                /* Weapons & Ammunition */
				weapons[] = {SmokeLauncher};
				magazines[] = {SmokeLauncherMag};
				gunnerHasFlares = true;

                /* Crew */
				outGunnerMayFire = false;
				inGunnerMayFire = true;
				forceHideGunner = false;
				viewGunnerInExternal = true;
				gunnerAction = commander_apcwheeled2_out;
				gunnerInAction = commander_apcwheeled2_in;
				gunnerGetInAction = GetInAMV_cargo;
				gunnerGetOutAction = GetOutLow;
				gunnerForceOptics = true;
				usepip = 2;
				LODTurnedOut = VIEW_CARGO + 1;
				LODTurnedIn = VIEW_GUNNER;
				LODOpticsIn = VIEW_DEFAULT;
				viewGunnerShadowAmb = 0.5;
				viewGunnerShadowDiff = 0.05;

                /* Firing-from-Vehicles*/
				isPersonTurret = true;
				personTurretAction = vehicle_turnout_2;

                /* Optics */
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Commander_OPFOR_F.p3d";
				gunnerOpticsEffect[] = {};
				memoryPointGunnerOutOptics = commanderview;
				memoryPointGunnerOptics = commanderview;
                class ViewGunner: ViewGunner
                {
                    initAngleX = -6.5;
                    initAngleY = 0;
                    initFov = 0.9;
                    minFov = 0.25;
                    maxFov = 1.25;
                    minAngleX = -65;
                    maxAngleX = 85;
                    minAngleY = -150;
                    maxAngleY = 150;
                    minMoveX = -0.075;
                    maxMoveX = 0.075;
                    minMoveY = -0.075;
                    maxMoveY = 0.075;
                    minMoveZ = -0.075;
                    maxMoveZ = 0.1;
                };
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.31;
					minFov = 0.034;
					maxFov = 0.31;
					visionMode[] =
                    {
                        Normal,
                        TI
                    };
					thermalMode[] =
                    {
                        TiWHot,
                        TiBHot
                    };
				};
				class OpticsIn: Optics_Commander_02
				{
					class Wide: Wide{};
					class Medium: Medium{};
					class Narrow: Narrow{};
				};

                /* Damage */
				class HitPoints
				{
					class HitComTurret
					{
						armor = 0.08;
						material = -1;
						armorComponent = hit_com_turret;
						name = hit_com_turret_point;
						visual = vezVelitele;
						passThrough = 0.4;
						minimalHit = 0.1;
						explosionShielding = 1;
						radius = 0.15;
						isTurret = true;
					};
					class HitComGun
					{
						armor = 0.04;
						material = -1;
						armorComponent = hit_com_gun;
						name = hit_com_gun_point;
						visual = "-";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 1;
						radius = 0.15;
						isGun = true;
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

		body = mainTurret;
		gun = mainGun;
		commanding = 1;
        showCrewAim = 2;
		startEngine = false;
        turretInfoType = RscOptics_MBT_02_gunner;

        /* Weapons & Ammunition */
		weapons[] =
        {
            autocannon_30mm_APC_Wheeled_04,
            LMG_coax_ext,
            missiles_Vorona_vehicle
        };
		magazines[] =
        {
			340Rnd_30mm_HE_shells_Tracer_Green,
			160Rnd_30mm_APFSDS_shells_Tracer_Green,
			2000Rnd_762x51_Belt_Green,
			4rnd_Vorona_HEAT
        };
		selectionFireAnim = zasleh2;
		memoryPointGun[] = {"usti hlavne3"};

        /* Servos */
		minElev = -7;
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
        //lockWhenDriverOut = true;

        /* Crew */
		gunnerAction = Gunner_APC_Wheeled_04_out;
		gunnerInAction = Gunner_APC_Wheeled_04_in;
		gunnerForceOptics = true;
		forceHideGunner = true;
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