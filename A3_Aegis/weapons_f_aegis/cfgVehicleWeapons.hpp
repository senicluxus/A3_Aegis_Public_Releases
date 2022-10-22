/* Bases */
class RocketPods;
class MGun;
class SmokeLauncher;
class CMFlareLauncher: SmokeLauncher
{
    class Single;
    class Burst;
    class AIBurst;
};
class MissileLauncher;
class GMG_F;
class autocannon_Base_F;

/* Weapons */
class LMG_RCWS: MGun
{
    magazines[] +=
    {
        200Rnd_762x51_Belt,
        1000Rnd_762x51_Belt,
        2000Rnd_762x51_Belt,
        200Rnd_762x51_Belt_Red,
        200Rnd_762x51_Belt_Green,
        200Rnd_762x51_Belt_Yellow,
        1000Rnd_762x51_Belt_Red,
        1000Rnd_762x51_Belt_Green,
        1000Rnd_762x51_Belt_Yellow,
        2000Rnd_762x51_Belt_Red,
        2000Rnd_762x51_Belt_Green,
        2000Rnd_762x51_Belt_Yellow,
        200Rnd_762x51_Belt_T_Red,
        200Rnd_762x51_Belt_T_Green,
        200Rnd_762x51_Belt_T_Yellow,
        1000Rnd_762x51_Belt_T_Red,
        1000Rnd_762x51_Belt_T_Green,
        1000Rnd_762x51_Belt_T_Yellow,
        2000Rnd_762x51_Belt_T_Red,
        2000Rnd_762x51_Belt_T_Green,
        2000Rnd_762x51_Belt_T_Yellow,
        1000Rnd_762x51_Belt_T_Red_Splash,
        1000Rnd_762x51_Belt_T_Green_Splash,
        1000Rnd_762x51_Belt_T_Yellow_Splash,
        2000Rnd_762x51_Belt_T_Red_Splash,
        2000Rnd_762x51_Belt_T_Green_Splash,
        2000Rnd_762x51_Belt_T_Yellow_Splash,
        PylonWeapon_2000Rnd_762x51_Belt_T_Red,
        PylonWeapon_2000Rnd_762x51_Belt_T_Green,
        PylonWeapon_2000Rnd_762x51_Belt_T_Yellow
    };
    class manual;
};
class LMG_Minigun: LMG_RCWS
{
    displayName = $STR_A3_A_CfgWeapons_LMG_Minigun0;
    autoReload = false;
    backgroundReload = false;
    class GunParticles
    {
        class effect1
        {
            effectName = MachineGunCartridge;
        };
        class effect2;
        class effect3
        {
            positionName = machinegun_eject_pos;
            directionName = machinegun_eject_dir;
            effectName = MachineGunEject2;
        };
    };
    class manual: MGun
    {
        displayName = $STR_A3_A_CfgWeapons_LMG_Minigun0;
    };
};
class LMG_Minigun_heli: LMG_Minigun
{
    autoReload = true;
    backgroundReload = true;
    class GunParticles: GunParticles
    {
        class effect1: effect1
        {
            effectName = MachineGunCartridge;
        };
        class effect2: effect2{};
        class effect3: effect3{};
    };
    class manual: manual
    {
        displayName = $STR_A3_A_CfgWeapons_LMG_Minigun0;
    };
};
class HMG_127: LMG_RCWS{};
class HMG_01: HMG_127
{
    class GunParticles
    {
        class effect3
        {
            positionName = machinegun_eject_pos;
            directionName = machinegun_eject_dir;
            effectName = MachineGunEject;
        };
    };
};
class HMG_static: HMG_01
{
    autoReload = false;
    backgroundReload = false;
};
class HMG_M2: HMG_01
{
    autoReload = false;
    backgroundReload = false;
};
class HMG_NSVT;
class M134_minigun: MGunCore
{
    class GunParticles
    {
        class effect3
        {
            positionName = machinegun_eject_pos;
            directionName = machinegun_eject_dir;
            effectName = MachineGunEject2;
        };
        class effect4
        {
            positionName = machinegun_eject_2_pos;
            directionName = machinegun_eject_2_dir;
            effectName = MachineGunEject2;
        };
    };
};
class GMG_20mm: GMG_F
{
    displayName = $STR_A3_A_CfgWeapons_GMG_20mm0;
    autoReload = false;
    backgroundReload = false;
    class manual: GMG_F
    {
        displayName = $STR_A3_A_CfgWeapons_GMG_20mm0;
    };
};
class autocannon_30mm_CTWS: autocannon_Base_F
{
    class HE: autocannon_Base_F
    {
        class player;
    };
    class AP: autocannon_Base_F
    {
        class player;
    };
};
class autocannon_40mm_CTWS: autocannon_Base_F
{
    class HE: autocannon_Base_F
    {
        magazines[] +=
        {
            120Rnd_40mm_GPR_shells,
            120Rnd_40mm_GPR_Tracer_Red_shells,
            120Rnd_40mm_GPR_Tracer_Green_shells,
            120Rnd_40mm_GPR_Tracer_Yellow_shells
        };
    };
    class AP: autocannon_Base_F
    {
        magazines[] +=
        {
            80Rnd_40mm_APFSDS_shells,
            80Rnd_40mm_APFSDS_Tracer_Red_shells,
            80Rnd_40mm_APFSDS_Tracer_Green_shells,
            80Rnd_40mm_APFSDS_Tracer_Yellow_shells
        };
    };
};
class gatling_20mm: CannonCore
{
    class manual: CannonCore
    {
        burst = 5;
        soundBurst = true;
    };
};
class gatling_30mm_base: CannonCore
{
    magazines[] +=
    {
        250Rnd_30mm_HE_shells_Tracer_Green,
        250Rnd_30mm_HE_shells_Tracer_Yellow
    };
};
class gatling_30mm: gatling_30mm_base
{
    class HE: gatling_30mm_base
    {
        magazines[] +=
        {
            250Rnd_30mm_HE_shells_Tracer_Green,
            250Rnd_30mm_HE_shells_Tracer_Yellow
        };
    };
};
class missiles_titan;
class missiles_titan_static: missiles_titan
{
    autoReload = false;
    backgroundReload = false;
};
class rockets_Skyfire: RocketPods
{
    magazines[] += {PylonRack_20Rnd_Rocket_80mm};
};
class LMG_Minigun2: LMG_Minigun
{
    class GunParticles
    {
        class effect1
        {
            effectName = MachineGunCartridge;
        };
        class effect3
        {
            positionName = machinegun_eject_pos;
            directionName = machinegun_eject_dir;
            effectName = MachineGunEject2;
        };
    };
};
class LMG_Minigun_Transport: LMG_Minigun
{
    class GunParticles
    {
        class effect1
        {
            effectName = MachineGunCartridge;
        };
        class effect3
        {
            positionName = machinegun_eject_pos;
            directionName = machinegun_eject_dir;
            effectName = MachineGunEject2;
        };
    };
};
class LMG_Minigun_Transport2: LMG_Minigun_Transport
{
    class GunParticles
    {
        class effect1
        {
            effectName = MachineGunCartridge;
        };
        class effect3
        {
            positionName = machinegun_eject_pos;
            directionName = machinegun_eject_dir;
            effectName = MachineGunEject2;
        };
    };
};
class gatling_25mm: CannonCore
{
    magazines[] += {PylonWeapon_220Rnd_25mm_shells};
    ballisticsComputer = CanSeeOptics+CanSeeEar;
    showAimCursorInternal = false;
    class manual: CannonCore
    {
        class StandardSound
        {
            begin1[] = {"\A3\Sounds_F_Jets\weapons\cannons\Fighter_Gun20mm_AA_1",2,1,3000};
            begin2[] = {"\A3\Sounds_F_Jets\weapons\cannons\Fighter_Gun20mm_AA_2",2,1,3000};
            begin3[] = {"\A3\Sounds_F_Jets\weapons\cannons\Fighter_Gun20mm_AA_3",2,1,3000};
            soundBegin[] =
            {
                begin1,1/3,
                begin2,1/3,
                begin3,1/3
            };
        };
        autoFire = true;
        burst = 1;
    };
};
class autocannon_35mm: CannonCore
{
    magazines[] +=
    {
        500Rnd_35mm_AA_shells,
        500Rnd_35mm_AA_shells_Tracer_Red,
        500Rnd_35mm_AA_shells_Tracer_Green,
        500Rnd_35mm_AA_shells_Tracer_Yellow
    };
    class manual: CannonCore
    {
        reloadTime = 0.109;
    };
};
class rockets_230mm_GAT: RocketPods
{
    magazines[] +=
    {
        12Rnd_230mm_rockets_guided,
        12Rnd_230mm_rockets_LG,
        PylonMissile_12Rnd_230mm_rockets,
        PylonMissile_12Rnd_230mm_rockets_cluster,
        PylonMissile_12Rnd_230mm_rockets_guided,
        PylonMissile_12Rnd_230mm_rockets_LG
    };
};
class LMG_coax: LMG_RCWS
{
    autoReload = false;
    backgroundReload = false;
    magazines[] +=
    {
        200Rnd_762x51_Belt,
        250Rnd_762x51_Belt,
        1000Rnd_762x51_Belt,
        2000Rnd_762x51_Belt,
        200Rnd_762x51_Belt_Red,
        200Rnd_762x51_Belt_Green,
        200Rnd_762x51_Belt_Yellow,
        250Rnd_762x51_Belt_Red,
        250Rnd_762x51_Belt_Green,
        250Rnd_762x51_Belt_Yellow,
        1000Rnd_762x51_Belt_Red,
        1000Rnd_762x51_Belt_Green,
        1000Rnd_762x51_Belt_Yellow,
        2000Rnd_762x51_Belt_Red,
        2000Rnd_762x51_Belt_Green,
        2000Rnd_762x51_Belt_Yellow,
        200Rnd_762x51_Belt_T_Red,
        200Rnd_762x51_Belt_T_Green,
        200Rnd_762x51_Belt_T_Yellow,
        250Rnd_762x51_Belt_T_Red,
        250Rnd_762x51_Belt_T_Green,
        250Rnd_762x51_Belt_T_Yellow,
        1000Rnd_762x51_Belt_T_Red,
        1000Rnd_762x51_Belt_T_Green,
        1000Rnd_762x51_Belt_T_Yellow,
        2000Rnd_762x51_Belt_T_Red,
        2000Rnd_762x51_Belt_T_Green,
        2000Rnd_762x51_Belt_T_Yellow
    };
};
class LMG_coax_ext: LMG_coax
{
    autoReload = true;
    backgroundReload = true;
};
class Rocket_04_HE_Plane_CAS_01_F: RocketPods
{
    class Burst: RocketPods
    {
        autoFire = true;
    };
};
class HMG_127_MBT: HMG_static
{
    autoReload = true;
    backgroundReload = true;
};
class HMG_127_LSV_01: HMG_static
{
    class GunParticles
    {
        class effect3
        {
            positionName = machinegun_eject_pos;
            directionName = machinegun_eject_dir;
            effectName = MachineGunEject;
        };
    };
};
class MMG_02_vehicle: LMG_RCWS
{
    autoReload = false;
    backgroundReload = false;
    class GunParticles
    {
        class effect3
        {
            positionName = machinegun_2_eject_pos;
            directionName = machinegun_2_eject_dir;
            effectName = MachineGunEject2;
        };
    };
};
class cannon_20mm: autocannon_Base_F
{
    class HE: autocannon_Base_F
    {
        class player;
    };
};
class missiles_Vorona: MissileLauncher
{
    autoReload = false;
    backgroundReload = false;
};
class launcher_SPG9: MissileLauncher
{
    autoReload = false;
    backgroundReload = false;
    reloadSound[] = {"\A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\reload_Missile_Launcher",db-1,1,10};
};
class MMG_02_coax: MMG_02_vehicle
{
    autoReload = false;
    backgroundReload = false;
};
class MMG_02_coax_amv: MMG_02_coax
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne3";
				directionName = "konec hlavne3";
				effectName = "MachineGunCloud";
			};
		};
	};
class autocannon_30mm_RCWS: autocannon_Base_F
{
    magazines[] +=
    {
        60Rnd_30mm_MP_shells_Tracer_Red,
        60Rnd_30mm_MP_shells_Tracer_Yellow
    };
};
class HMG_127_LT: HMG_M2
{
    autoReload = true;
    backgroundReload = true;
    class GunParticles
    {
        class effect1
        {
            positionName = "usti hlavne";
            directionName = "konec hlavne";
            effectName = MachineGunCloud;
        };
    };
};
class HMG_127_AFV: HMG_M2
{
    autoReload = true;
    backgroundReload = true;
    magazines[] =
    {
        200Rnd_127x99_mag,
        200Rnd_127x99_mag_Tracer_Red,
        200Rnd_127x99_mag_Tracer_Green,
        200Rnd_127x99_mag_Tracer_Yellow
    };
};
class HMG_static_autonomous: HMG_static
{
    autoReload = true;
    backgroundReload = true;
    magazineReloadTime = 20;
};
class GMG_20mm_autonomous: GMG_20mm
{
    autoReload = true;
    backgroundReload = true;
    magazineReloadTime = 20;
};
class HMG_NSVT_Mounted: HMG_NSVT
{
    displayName = "NSV-M HMG 12.7 mm";
    showAimCursorInternal = true;
    type = 1;
    class GunParticles
    {
        class effect1
        {
            positionName = "usti hlavne";
            directionName = "konec hlavne";
            effectName = MachineGunCloud;
        };
        class effect2
        {
            positionName = nabojnicestart;
            directionName = nabojniceend;
            effectName = MachineGunEject;
        };
        class effect3
        {
            positionName = case_eject_pos;
            directionName = case_eject_dir;
            effectName = MachineGunCartridge2;
        };
    };
};
class CMFlareLauncher_Quadruples: CMFlareLauncher
{
    class Single: Single
    {
        multiplier = 4;
    };
    class Burst: Burst
    {
        multiplier = 4;
        reloadTime = 0.25;
        burst = 4;
    };
    class AIBurst: AIBurst
    {
        multiplier = 4;
        reloadTime = 0.25;
        burst = 2;
        burstRangeMax = 6;
    };
};
class rockets_50mm: RocketPods
{
    displayName = $STR_A3_A_CfgWeapons_rockets_50mm0;
    magazines[] =
    {
        14Rnd_50mm_rockets,
        PylonRack_7Rnd_Rocket_50mm
    };
    ballisticsComputer = 8;
    modes[] =
    {
        Far_AI,
        Burst
    };
    canLock = false;
    weaponLockDelay = 0;
    class Far_AI: RocketPods
    {
        sounds[] = {StandardSound};
        weaponLockDelay = 0;
        showToPlayer = false;
        minRange = 50;
        minRangeProbab = 0.15;
        midRange = 600;
        midRangeProbab = 0.25;
        maxRange = 2500;
        maxRangeProbab = 0.05;
        displayName = $STR_A3_A_CfgWeapons_rockets_50mm0;
        soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_1",db0,1.1,700};
        burst = 1;
        reloadTime = 0.08;
        autoFire = false;
        aiRateOfFire = 5;
        aiRateOfFireDistance = 500;
    };
    class Burst: RocketPods
    {
        sounds[] = {StandardSound};
        displayName = $STR_A3_A_CfgWeapons_rockets_50mm0;
        burst = 1;
        reloadTime = 0.08;
        soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_1",db0,1.9,700};
        autoFire = true;
        soundContinuous = false;
        minRange = 250;
        minRangeProbab = 0.25;
        midRange = 400;
        midRangeProbab = 0.5;
        maxRange = 600;
        maxRangeProbab = 0.1;
        textureType = fullAuto;
        aiRateOfFire = 5;
        aiRateOfFireDistance = 500;
    };
};
class missiles_Vikhr: RocketPods
{
    autoFire = false;
    displayName = $STR_A3_A_CfgWeapons_missiles_Vikhr0;
    magazines[] =
    {
        12Rnd_Vikhr_missiles,
        PylonRack_6Rnd_Vikhr_missiles
    };
    aiRateOfFire = 5;
    aiRateOfFireDistance = 500;
    nameSound = MissileLauncher;
    sounds[] = {StandardSound};
    cursor = EmptyCursor;
    cursorAim = missile;
    showAimCursorInternal = false;
    weaponLockDelay = 3;
    weaponLockSystem = 2;
    cmImmunity = 0.4;
    textureType = semi;
    modes[] =
    {
        Player,
        TopDown
    };
    class Player: RocketPods
    {
        textureType = semi;
        reloadTime = 0.1;
        magazineReloadTime = 0.1;
        sounds[] = {StandardSound};
        aiRateOfFire = 5.0;
        aiRateOfFireDistance = 500;
        showToPlayer = true;
        minRange = 200;
        minRangeProbab = 0.5;
        midRange = 400;
        midRangeProbab = 0.85;
        maxRange = 6000;
        maxRangeProbab = 0.9;
    };
    class TopDown: Player
    {
        textureType = topDown;
        //displayName = "Top-down";
        minRange = 400;
        minRangeProbab = 0.4;
        midRange = 800;
        midRangeProbab = 0.9;
        maxRange = 6000;
        maxRangeProbab = 0.95;
    };
};
class Gatling_30mm_Heli_Attack_03_F: CannonCore
{
    scope = protected;
    displayName = $STR_A3_A_CfgWeapons_autocannon_30mm_Heli_Attack_030;
    magazines[] =
    {
        1200Rnd_Gatling_30mm_Heli_Attack_03_F,
        1200Rnd_Gatling_30mm_Heli_Attack_03_Yellow_F,
    };
    canLock = false;
    ballisticsComputer = BallisticsAutoZero + BallisticsManualZero + BallisticsFCS;
    cursor = EmptyCursor;
    cursorAim = mg;
    showAimCursorInternal = false;
    modes[] =
    {
        LowROF,
        close,
        short,
        medium,
        far
    };
    nameSound = cannon;
    shotFromTurret = true;
    autoFire = false;
    burst = 5;
    reloadTime = 0.096;
    FCSMaxLeadSpeed = 30.5556;
    FCSZeroingDelay = 0.5;
    maxZeroing = 2500;
    aiDispersionCoefY = 0.5;
    aiDispersionCoefX = 0.5;
    class GunParticles
    {
        class Effect
        {
            effectName = MachineGun2;
            positionName = "Usti hlavne";
            directionName = "Konec hlavne";
        };
        class Shell
        {
            positionName = shell_eject_pos;
            directionName = shell_eject_dir;
            effectName = HeavyGunCartridge1;
        };
    };
    class LowROF: Mode_FullAuto
    {
        displayName = $STR_A3_A_CfgWeapons_autocannon_30mm_Heli_Attack_030;
        sounds[] = {StandardSound};
        soundContinuous = false;
        autoFire = true;
        flash = gunfire;
        flashSize = 0.1;
        recoil = Empty;
        ffMagnitude = 0.5;
        ffFrequency = 11;
		ffCount = 6;
        burst = 5;
        showToPlayer = true;
        reloadTime = 0.096;
        dispersion = 0.0066;
        aiRateOfFire = 1;
        aiRateOfFireDistance = 10;
        minRange = 0;
        minRangeProbab = 0.01;
        midRange = 1;
        midRangeProbab = 0.01;
        maxRange = 2;
        maxRangeProbab = 0.01;
    };
    class close: LowROF
    {
        aiBurstTerminable = true;
        showToPlayer = false;
        burst = 16;
        burstRangeMax = 37;
        aiRateOfFire = 0.5;
        aiRateOfFireDispersion = 1;
        aiRateOfFireDistance = 50;
        minRange = 0;
        minRangeProbab = 0.1;
        midRange = 50;
        midRangeProbab = 0.65;
        maxRange = 400;
        maxRangeProbab = 0.75;
    };
	class near: close{};
    class short: close
    {
        aiBurstTerminable = true;
        showToPlayer = false;
        burst = 12;
        burstRangeMax = 32;
        aiRateOfFire = 1;
        aiRateOfFireDispersion = 2;
        aiRateOfFireDistance = 200;
        minRange = 200;
        minRangeProbab = 0.65;
        midRange = 400;
        midRangeProbab = 0.75;
        maxRange = 1000;
        maxRangeProbab = 0.7;
    };
    class medium: close
    {
        aiBurstTerminable = true;
        showToPlayer = false;
        burst = 12;
        burstRangeMax = 28;
        aiRateOfFire = 2;
        aiRateOfFireDispersion = 2;
        aiRateOfFireDistance = 800;
        minRange = 800;
        minRangeProbab = 0.7;
        midRange = 1400;
        midRangeProbab = 0.4;
        maxRange = 1800;
        maxRangeProbab = 0.15;
    };
    class far: close
    {
        aiBurstTerminable = true;
        showToPlayer = false;
        burst = 9;
        burstRangeMax = 20;
        aiRateOfFire = 4;
        aiRateOfFireDispersion = 4;
        aiRateOfFireDistance = 1400;
        minRange = 1400;
        minRangeProbab = 0.5;
        midRange = 1800;
        midRangeProbab = 0.15;
        maxRange = 2500;
        maxRangeProbab = 0.05;
    };
};
class cannon_20mm_Heli_Light_03: cannon_20mm
{
    displayName = $STR_A3_cannon_20mm0;
    magazines[] = {PylonWeapon_250Rnd_20mm_shells};
    muzzles[] = {HE};
    class HE: HE
    {
        magazines[] = {PylonWeapon_250Rnd_20mm_shells};
        class player: player
        {
            dispersion = 0.0018;
            reloadTime = 0.1;
        };
    };
};
class autocannon_30mm_APC_Wheeled_04: autocannon_30mm_CTWS
{
    class HE: HE
    {
        magazines[] =
        {
            340Rnd_30mm_HE_shells,
            340Rnd_30mm_HE_shells_Tracer_Red,
            340Rnd_30mm_HE_shells_Tracer_Green,
            340Rnd_30mm_HE_shells_Tracer_Yellow
        };
        class player: player
        {
            reloadTime = RPM_450;
            textureType = fastAuto;
        };
        class close: player
        {
            aiBurstTerminable = true;
            showToPlayer = false;
            burst = 3;
            burstRangeMax = 6;
            aiRateOfFire = 1;
            aiRateOfFireDispersion = 2;
            aiRateOfFireDistance = 200;
            minRange = 0;
            minRangeProbab = 0.1;
            midRange = 400;
            midRangeProbab = 0.7;
            maxRange = 800;
            maxRangeProbab = 0.8;
        };
        class short: close
        {
            aiBurstTerminable = true;
            showToPlayer = false;
            burst = 1;
            burstRangeMax = 5;
            aiRateOfFire = 2;
            aiRateOfFireDispersion = 2;
            aiRateOfFireDistance = 600;
            minRange = 600;
            minRangeProbab = 0.75;
            midRange = 800;
            midRangeProbab = 0.8;
            maxRange = 1200;
            maxRangeProbab = 0.8;
        };
        class medium: close
        {
            aiBurstTerminable = true;
            showToPlayer = false;
            burst = 1;
            burstRangeMax = 3;
            aiRateOfFire = 2;
            aiRateOfFireDispersion = 3;
            aiRateOfFireDistance = 1000;
            minRange = 1000;
            minRangeProbab = 0.8;
            midRange = 1500;
            midRangeProbab = 0.8;
            maxRange = 2000;
            maxRangeProbab = 0.7;
        };
        class far: close
        {
            aiBurstTerminable = true;
            showToPlayer = false;
            burst = 1;
            burstRangeMax = 1;
            aiRateOfFire = 2;
            aiRateOfFireDispersion = 4;
            aiRateOfFireDistance = 1800;
            minRange = 1800;
            minRangeProbab = 0.74;
            midRange = 2400;
            midRangeProbab = 0.65;
            maxRange = 3000;
            maxRangeProbab = 0.05;
        };
    };
    class AP: AP
    {
        magazines[] =
        {
            160Rnd_30mm_APFSDS_shells,
            160Rnd_30mm_APFSDS_shells_Tracer_Red,
            160Rnd_30mm_APFSDS_shells_Tracer_Green,
            160Rnd_30mm_APFSDS_shells_Tracer_Yellow
        };
    };
    class GunParticles
    {
        class Effect
        {
            effectName = AutoCannonFired;
            positionName = "usti hlavne";
            directionName = "konec hlavne";
        };
    };
};
class missiles_Vorona_vehicle: missiles_Vorona
{
    autoReload = true;
    backgroundReload = true;
    showAimCursorInternal = false;
    magazineReloadTime = 60;
    magazines[] =
    {
        Vorona_HEAT,
        Vorona_HE,
        4rnd_Vorona_HEAT,
        4rnd_Vorona_HE
    };
};
class autocannon_30mm_lxWS: autocannon_30mm_CTWS
{
    class HE: HE
    {
        class player: player
        {
            reloadTime = RPM_450;
            textureType = fastAuto;
        };
    };
};
class weapon_Cannon_Phalanx: CannonCore
{
    class manual: CannonCore
    {
        burst = 5;
        soundContinuous = true;
        soundBurst = false;
    };
};
class weapon_Fighter_Gun20mm_AA: CannonCore
{
    magazines[] +=
    {
        magazine_Fighter04_Gun20mm_AA_x120,
        magazine_Fighter04_Gun20mm_AA_x120_red
    };
};
class weapon_SDBLauncher: RocketPods
{
    displayName = $STR_A3_A_CfgWeapons_weapon_SDBLauncher0;
};
class weapon_AGM_154Launcher: RocketPods
{
    displayName = $STR_A3_A_Bomb_AGM_154_weapon_name;
    weaponLockDelay = 0.1;
    weaponLockSystem = LockYes + LockLaser;
    cmImmunity = CMImmunity_BAD;
    minRange = 400;
    minRangeProbab = 0.4;
    midRange = 2000;
    midRangeProbab = 0.95;
    maxRange = 16000;
    maxRangeProbab = 0.9;
    magazines[] =
    {
        magazine_Bomb_AGM_154_x1,
        PylonMissile_Bomb_AGM_154_x1
    };
    reloadTime = 0.1; // 600 RPM
    autoFire = false;
    magazineReloadTime = 0.1;
    aiRateOfFire = 5.0;
    aiRateOfFireDistance = 500;
    nameSound = "";
    cursor = EmptyCursor;
    cursorAim = bomb;
    showAimCursorInternal = false;
    ballisticsComputer = BallisticsCCIP;
    textureType = semi;
    lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",db-5,2.5};
    lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",db-5,1};
};