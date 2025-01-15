class APC_Wheeled_04_export_base_F: APC_Wheeled_04_base_F
{
	author = $STR_A3_A_AveryTheKitty_Lukin_Lakarak;
	mapSize = 8;
	scope = private;
	displayName = $STR_A3_A_CfgVehicles_APC_Wheeled_04_export_F0;
	model = "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\APC_Wheeled_04_export_F.p3d";
	icon = "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\UI\Map_APC_Wheeled_04_CA.paa";
	picture = "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\UI\APC_Wheeled_04_CA.paa";
	editorSubcategory = EdSubcat_APCs;
	memoryPointTaskMarker = TaskMarker_1_pos;
	accuracy = 0.3;
    unitInfoType = RscUnitInfoTank;
    fuelCapacity = 24;
	slingLoadCargoMemoryPoints[] = {"SlingLoad1","SlingLoad2","SlingLoad3","SlingLoad4"};
        
	/* Handling */
    #include "PhysX.hpp"
    engineStartSpeed = 5;

    /* Water Behaviour */
    waterLeakiness = 2.5;
	canFloat = true;
	waterAngularDampingCoef = 10.0;
	waterPPInVehicle = false;
    waterResistanceCoef = 0.5;

	/*SOUND */
	attenuationEffectType = TankAttenuation;
    soundGetIn[] = {"\A3\Sounds_F_EPB\Tracked\noises\get_in_out",db-5,1};
    soundGetOut[] = {"\A3\Sounds_F_EPB\Tracked\noises\get_in_out",db-5,1,20};
    soundTurnIn[] = {"\A3\Sounds_F\vehicles\noises\Turn_in_out",db5,1,20};
    soundTurnOut[] = {"\A3\Sounds_F\vehicles\noises\Turn_in_out",db5,1,20};
    soundTurnInInternal[] = {"\A3\Sounds_F\vehicles\noises\Turn_in_out",db5,1,20};
    soundTurnOutInternal[] = {"\A3\Sounds_F\vehicles\noises\Turn_in_out",db5,1,20};
    soundDammage[] = {"",db-5,1};
    soundEngineOnInt[] = {"\A3\Sounds_F\vehicles2\soft\Truck_03\Truck_03_Engine_Int_Start",db-6,1.0};
    soundEngineOffInt[] = {"\A3\Sounds_F\vehicles2\soft\Truck_03\Truck_03_Engine_Int_stop",db-6,1.0};
    soundEngineOnExt[] = {"\A3\Sounds_F\vehicles2\soft\Truck_03\Truck_03_Engine_Ext_Start",db12,1.0,50};
    soundEngineOffExt[] = {"\A3\Sounds_F\vehicles2\soft\Truck_03\Truck_03_Engine_Ext_stop",db12,1.0,50};
    BushCrash1[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_01",db-4,1,100};
    BushCrash2[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_02",db-4,1,100};
    BushCrash3[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_03",db-4,1,100};
    soundBushCrash[] =
    {
        BushCrash1,1/3,
        BushCrash2,1/3,
        BushCrash3,1/3
    };
    buildCrash0[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",db10,1,200};
    buildCrash1[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",db10,1,200};
    buildCrash2[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",db10,1,200};
    buildCrash3[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",db10,1,200};
    buildCrash4[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",db10,1,200};
    buildCrash5[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",db10,1,200};
    soundBuildingCrash[] =
    {
        buildCrash0,1/6,
        buildCrash1,1/6,
        buildCrash2,1/6,
        buildCrash3,1/6,
        buildCrash4,1/6,
        buildCrash5,1/6
    };
    woodCrash0[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",db10,1,200};
    woodCrash1[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",db10,1,200};
    woodCrash2[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",db10,1,200};
    woodCrash3[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",db10,1,200};
    woodCrash4[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",db10,1,200};
    woodCrash5[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",db10,1,200};
    soundWoodCrash[] =
    {
        woodCrash0,1/6,
        woodCrash1,1/6,
        woodCrash2,1/6,
        woodCrash3,1/6,
        woodCrash4,1/6,
        woodCrash5,1/6
    };
    ArmorCrash0[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",db10,1,200};
    ArmorCrash1[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",db10,1,200};
    ArmorCrash2[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",db10,1,200};
    ArmorCrash3[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",db10,1,200};
    ArmorCrash4[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",db10,1,200};
    ArmorCrash5[] = {"\A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",db10,1,200};
    soundArmorCrash[] =
    {
        ArmorCrash0,1/6,
        ArmorCrash1,1/6,
        ArmorCrash2,1/6,
        ArmorCrash3,1/6,
        ArmorCrash4,1/6,
        ArmorCrash5,1/6
    };
    class Sounds
    {
        soundSetsInt[] =
        {
            Truck_03_Engine_RPM0_INT_SoundSet,
            Truck_03_Engine_RPM1_INT_SoundSet,
            Truck_03_Engine_RPM2_INT_SoundSet,
            Truck_03_Engine_RPM3_INT_SoundSet,
            Truck_03_Engine_RPM4_INT_SoundSet,
            Truck_03_Engine_RPM5_INT_SoundSet,
            Truck_03_Engine_RPM6_INT_SoundSet,
            APC_Wheeled_02_Interior_Tone_Engine_Off_SoundSet,
            APC_Wheeled_02_Interior_Tone_Engine_On_SoundSet,
            APC_Wheeled_02_Rattling_INT_SoundSet,
            APC_Wheeled_02_Stress_INT_SoundSet,
            APC_Wheeled_02_Rain_INT_SoundSet,
            APC_Wheeled_02_Tires_Rock_Fast_INT_SoundSet,
            APC_Wheeled_02_Tires_Grass_Fast_INT_SoundSet,
            APC_Wheeled_02_Tires_Sand_Fast_INT_SoundSet,
            APC_Wheeled_02_Tires_Gravel_Fast_INT_SoundSet,
            APC_Wheeled_02_Tires_Mud_Fast_INT_SoundSet,
            APC_Wheeled_02_Tires_Asphalt_Fast_INT_SoundSet,
            APC_Wheeled_02_Tires_Water_Fast_INT_SoundSet,
            APC_Wheeled_02_Tires_Rock_Slow_INT_SoundSet,
            APC_Wheeled_02_Tires_Grass_Slow_INT_SoundSet,
            APC_Wheeled_02_Tires_Sand_Slow_INT_SoundSet,
            APC_Wheeled_02_Tires_Gravel_Slow_INT_SoundSet,
            APC_Wheeled_02_Tires_Mud_Slow_INT_SoundSet,
            APC_Wheeled_02_Tires_Asphalt_Slow_INT_SoundSet,
            APC_Wheeled_02_Tires_Water_Slow_INT_SoundSet,
            APC_Wheeled_02_Tires_Turn_Hard_INT_SoundSet,
            APC_Wheeled_02_Tires_Turn_Soft_INT_SoundSet,
            APC_Wheeled_02_Tires_Brake_Hard_INT_SoundSet,
            APC_Wheeled_02_Tires_Brake_Soft_INT_SoundSet
        };
        soundSetsExt[] =
        {
            Truck_03_Engine_RPM0_EXT_SoundSet,
            Truck_03_Engine_RPM1_EXT_SoundSet,
            Truck_03_Engine_RPM2_EXT_SoundSet,
            Truck_03_Engine_RPM3_EXT_SoundSet,
            Truck_03_Engine_RPM4_EXT_SoundSet,
            Truck_03_Engine_RPM5_EXT_SoundSet,
            Truck_03_Engine_RPM6_EXT_SoundSet,
            APC_Wheeled_02_Stress_EXT_SoundSet,
            APC_Wheeled_02_Rain_EXT_SoundSet,
            APC_Wheeled_02_Tires_Rock_Fast_EXT_SoundSet,
            APC_Wheeled_02_Tires_Grass_Fast_EXT_SoundSet,
            APC_Wheeled_02_Tires_Sand_Fast_EXT_SoundSet,
            APC_Wheeled_02_Tires_Gravel_Fast_EXT_SoundSet,
            APC_Wheeled_02_Tires_Mud_Fast_EXT_SoundSet,
            APC_Wheeled_02_Tires_Asphalt_Fast_EXT_SoundSet,
            APC_Wheeled_02_Tires_Water_Fast_EXT_SoundSet,
            APC_Wheeled_02_Tires_Rock_Slow_EXT_SoundSet,
            APC_Wheeled_02_Tires_Grass_Slow_EXT_SoundSet,
            APC_Wheeled_02_Tires_Sand_Slow_EXT_SoundSet,
            APC_Wheeled_02_Tires_Gravel_Slow_EXT_SoundSet,
            APC_Wheeled_02_Tires_Mud_Slow_EXT_SoundSet,
            APC_Wheeled_02_Tires_Asphalt_Slow_EXT_SoundSet,
            APC_Wheeled_02_Tires_Water_Slow_EXT_SoundSet,
            APC_Wheeled_02_Tires_Turn_Hard_EXT_SoundSet,
            APC_Wheeled_02_Tires_Turn_Soft_EXT_SoundSet,
            APC_Wheeled_02_Tires_Brake_Hard_EXT_SoundSet,
            APC_Wheeled_02_Tires_Brake_Soft_EXT_SoundSet
        };
    };
    /* Crew */
    memoryPointDriverOptics = driverview;
    driverInfoPanelCameraPos = /*driverview_old*/ driverview;
    forceHideDriver = false;
    viewDriverInExternal = true;
    viewDriverShadowAmb = 0.5;
    viewDriverShadowDiff = 0.05;
    driverForceOptics = true;
    LODDriverTurnedOut = VIEW_CARGO + 1;
    LODDriverTurnedin = VIEW_LOD + 1;
    LODDriverOpticsIn = VIEW_DEFAULT;
    driverOpticsModel = "\A3\Weapons_F\Reticle\Optics_Driver_01_F.p3d";
    driverLeftLegAnimName = pedal_brake;
    driverAction = Driver_APC_Wheeled_04_out;
    driverInAction = Driver_APC_Wheeled_04_in;
    hideWeaponsCargo = true;
    cargoIsCoDriver[] = {false};
    viewCargoShadowDiff = 1.0;
    viewCargoShadowAmb = 1.0;
    cargoAction[] =
    {
        passenger_apc_generic01,
        passenger_apc_narrow_generic01,
        passenger_apc_generic04,
        passenger_generic01_foldhands,
        passenger_apc_narrow_generic02,
        passenger_apc_generic02b
    };
    transportSoldier = 6;
    showNVGDriver = false;
    showNVGCommander = false;
    showNVGGunner = false;

    /* Enter & Exit Animations */
    getInAction = GetInHigh;
    getOutAction = GetOutHigh;
    cargoGetInAction[] = {GetInAMV_cargo};
    cargoGetOutAction[] = {GetOutLow};

    /* MFD */
    #include "mfd.hpp"

    /* View */
    class ViewOptics: ViewOptics
    {
        visionMode[] =
        {
            Normal,
            NVG
        };
        initFov = 0.4;
        minFov = 0.23;
        maxFov = 0.4;
    };
    class ViewPilot: ViewPilot
    {
        initAngleX = -2.5;
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
    extCameraPosition[] =
    {
        0.0,    // X
        2.5,    // Y
        -8.5    // Z
    };

    /* Damage */
    wheelDestroyRadiusCoef = 0.6;
    armor = 280;
    armorStructural = 5;
    armorLights = 0.1;
    crewExplosionProtection = 0.9995;
    damageResistance = 0.00455625;
    class HitPoints: HitPoints
    {
        class HitHull: HitHull
        {
            armor = 1.6;
            material = -1;
            armorComponent = hit_hull;
            name = hit_hull_point;
            visual = zbytek;
            passThrough = 1;
            minimalHit = 0.1;
            explosionShielding = 0.2;
            radius = 0.2;
        };
        class HitEngine: HitEngine
        {
            armor = 0.75;
            material = -1;
            armorComponent = hit_engine;
            name = hit_engine_point;
            visual = "-";
            passThrough = 0.1;
            minimalHit = 0.1;
            explosionShielding = 0.5;
            radius = 0.2;
        };
        class HitFuel: HitFuel
        {
            armor = 0.75;
            material = -1;
            armorComponent = hit_fuel;
            name = hit_fuel_point;
            visual = "-";
            passThrough = 0.5;
            minimalHit = 0.1;
            explosionShielding = 0.6;
            radius = 0.2;
        };
        class HitLFWheel: HitLFWheel
        {
            radius = 0.33;
            visual = wheel_1_1_hide;
            armorComponent = wheel_1_1_hide;
            armor = -250;
            minimalHit = -0.016;
            explosionShielding = 4;
            passThrough = 0;
        };
        class HitLF2Wheel: HitLF2Wheel
        {
            radius = 0.33;
            visual = wheel_1_2_hide;
            armorComponent = wheel_1_2_hide;
            armor = -250;
            minimalHit = -0.016;
            explosionShielding = 4;
            passThrough = 0;
        };
        class HitLMWheel: HitLMWheel
        {
            radius = 0.33;
            visual = wheel_1_3_hide;
            armorComponent = wheel_1_3_hide;
            armor = -250;
            minimalHit = -0.016;
            explosionShielding = 4;
            passThrough = 0;
        };
        class HitLBWheel: HitLBWheel
        {
            radius = 0.33;
            visual = wheel_1_4_hide;
            armorComponent = wheel_1_4_hide;
            armor = -250;
            minimalHit = -0.016;
            explosionShielding = 4;
            passThrough = 0;
        };
        class HitRFWheel: HitRFWheel
        {
            radius = 0.33;
            visual = wheel_2_1_hide;
            armorComponent = wheel_2_1_hide;
            armor = -250;
            minimalHit = -0.016;
            explosionShielding = 4;
            passThrough = 0;
        };
        class HitRF2Wheel: HitRF2Wheel
        {
            radius = 0.33;
            visual = wheel_2_2_hide;
            armorComponent = wheel_2_2_hide;
            armor = -250;
            minimalHit = -0.016;
            explosionShielding = 4;
            passThrough = 0;
        };
        class HitRMWheel: HitRMWheel
        {
            radius = 0.33;
            visual = wheel_2_3_hide;
            armorComponent = wheel_2_3_hide;
            armor = -250;
            minimalHit = -0.016;
            explosionShielding = 4;
            passThrough = 0;
        };
        class HitRBWheel: HitRBWheel
        {
            radius = 0.33;
            visual = wheel_2_4_hide;
            armorComponent = wheel_2_4_hide;
            armor = -250;
            minimalHit = -0.016;
            explosionShielding = 4;
            passThrough = 0;
        };
    };
    wheelDamageThreshold = 0.18;
    wheelDamageRadiusCoef = 0.75;
    class Damage
    {
        tex[] = {};
        mat[] =
        {
            "A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_export_body.rvmat",
            "A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_export_body_damage.rvmat",
            "A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_export_body_destruct.rvmat",
            
            "A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2.rvmat",
            "A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_damage.rvmat",
            "A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_destruct.rvmat",

            "A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\btr100a_turret.rvmat",
            "A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\btr100a_turret_damage.rvmat",
            "A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\btr100a_turret_destruct.rvmat",
            
            "A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_int.rvmat",
            "A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_int_damage.rvmat",
            "A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_int_destruct.rvmat",
            
            "A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_int2.rvmat",
            "A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_int2_damage.rvmat",
            "A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_int2_destruct.rvmat"
        };
    };

    weapons[] = {TruckHorn};
    magazines[] = {};
    soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",db0,1};
    soundIncommingMissile[] = {"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_4",db-8,1};
    smokeLauncherGrenadeCount = 6;
    smokeLauncherVelocity = 14;
    smokeLauncherOnTurret = true;
    smokeLauncherAngle = 70;

    /* Turrets */
    #include "turrets_export.hpp"

    /* Liveries */
    class TextureSources
    {
        class Green
        {
            displayName = $STR_A3_TEXTURESOURCES_GREEN0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\APC_Wheeled_04_export_body_RUkhk_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_RUkhk_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\btr100a_turret_co.paa"
            };
            factions[] = {};
        };
        class Sand
        {
            displayName = $STR_A3_A_texturesources_sand0;
            author = $STR_A3_A_BranFlakes;
            textures[] =
            {
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_sand_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_sand_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\btr100a_turret_sand_co.paa"
            };
            factions[] = {};
        };
        class Hex
        {
            displayName = $STR_A3_TEXTURESOURCES_HEX0;
            author = $STR_A3_A_Lukinator96;
            textures[] = 
            {                    
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\APC_Wheeled_04_export_body_hex_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_hex_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\btr100a_turret_hex_co.paa"
            };
            factions[] = {};
        };
        class GreenHex
        {
            displayName = $STR_A3_TEXTURESOURCES_GREENHEX0;
            author = $STR_A3_A_Lukinator96;
            textures[] = 
            {
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\APC_Wheeled_04_export_body_ghex_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_ghex_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\btr100a_turret_ghex_co.paa"
            };
            factions[] = {};
        };
        class Indep
        {
            displayName = $STR_A3_TextureSources_Indep0;
            author = $STR_A3_A_BranFlakes;
            textures[] = 
            {
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_AAF_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_AAF_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\btr100a_turret_AAF_co.paa"
            };
            factions[] = {};
        };
        class SFIA
        {
            displayName = $STR_LXWS_FACTION_SFIA;
            author = $STR_A3_A_BranFlakes;
            textures[] = 
            {
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_SFIA_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_SFIA_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\btr100a_turret_SFIA_co.paa"
            };
            factions[] = {};
        };
        class Loyalist
        {
            displayName = $STR_A3_A_TextureSources_Loyalist0;
            author = $STR_A3_A_BranFlakes;
            textures[] = 
            {
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_loyalist_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_AAF_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\btr100a_turret_AAF_co.paa"
            };
            factions[] = {};
        };
        class Guerrilla_01
        {
            displayName = $STR_A3_A_texturesources_guerilla_010;
            author = $STR_A3_A_BranFlakes;
            textures[] = 
            {
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_FIA_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_FIA_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\btr100a_turret_FIA_co.paa"
            };
            factions[] = {};
        };
        class Guerrilla_02
        {
            displayName = $STR_A3_A_texturesources_guerilla_020;
            author = $STR_A3_A_BranFlakes;
            textures[] = 
            {
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_FIA_2_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_FIA_2_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\btr100a_turret_FIA_2_co.paa"
            };
            factions[] = {};
        };
        class Guerrilla_03
        {
            displayName = $STR_A3_A_texturesources_guerilla_030;
            author = $STR_A3_A_BranFlakes;
            textures[] = 
            {
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_FIA_3_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_FIA_3_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\btr100a_turret_FIA_3_co.paa"
            };
            factions[] = {};
        };
        class Guerrilla_04
        {
            displayName = $STR_A3_A_texturesources_guerilla_040;
            author = $STR_A3_A_BranFlakes;
            textures[] = 
            {
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_Tura_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_Tura_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\btr100a_turret_Tura_co.paa"
            };
            factions[] = {};
        };
        class Guerrilla_05
        {
            displayName = $STR_A3_A_texturesources_guerilla_050;
            author = $STR_A3_A_BranFlakes;
            textures[] = 
            {
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_Tura_2_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_Tura_2_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\btr100a_turret_Tura_2_co.paa"
            };
            factions[] = {};
        };
    };
    textureList[] = 
    {
        CSAT,1,
        CSAT_T,1,
        Green,1,
        Indep,1,
        SFIA,1,
        Loyalist,1,
        Guerrilla_01,1,
        Guerrilla_02,1,
        Guerrilla_03,1,
        Guerrilla_04,1,
        Guerrilla_05,1
    };

    /* Textures */
    hiddenSelections[] =
    {
        Camo1,
        Camo2,
        Camo3
    };        
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\APC_Wheeled_04_body_RUkhk_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_RUkhk_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\btr100a_turret_co.paa"
    };

    /* Particle Effects */
    engineEffectSpeed = 5.0;
    class Exhausts
    {
        class Exhaust1
        {
            position = exhaust1;
            direction = exhaust1_dir;
            effect = ExhaustsEffectAMV;
        };
        class Exhaust2
        {
            position = exhaust2;
            direction = exhaust2_dir;
            effect = ExhaustsEffectAMV;
        };
    };
    explosionEffect = FuelExplosionBig;
    dustFrontLeftPos = dustFrontLeft;
    dustFrontRightPos = dustFrontRight;
    dustBackLeftPos = dustBackLeft;
    dustBackRightPos = dustBackRight;

    /* Lights */
    class NVGMarkers
    {
        class NVGMarker01
        {
            name = nvg_marker;
            color[] =
            {
                0.03,   // R
                0.003,  // G
                0.003,  // B
                1       // A
            };
            ambient[] =
            {
                0.003,  // R
                0.0003, // G
                0.0003, // B
                1       // A
            };
            brightness = 0.001;
            blinking = true;
        };
    };
    class Reflectors
    {
        class Left
        {
            color[] =
            {
                1900,   // R
                1800,   // G
                1700    // B
            };
            ambient[] =
            {
                5,  // R
                5,  // G
                5   // B
            };
            position = Light_L;
            direction = Light_L_end;
            hitpoint = Light_L;
            selection = Light_L;
            size = 1;
            innerAngle = 100;
            outerAngle = 179;
            coneFadeCoef = 10;
            intensity = 1;
            useFlare = false;
            dayLight = false;
            flareSize = 1.0;
            class Attenuation
            {
                start = 1.0;
                constant = 0;
                linear = 0;
                quadratic = 0.25;
                hardLimitStart = 30;
                hardLimitEnd = 60;
            };
        };
        class Right: Left
        {
            position = Light_R;
            direction = Light_R_end;
            hitpoint = Light_R;
            selection = Light_R;
        };
        class Right2: Right
        {
            position = light_R_flare;
            hitpoint = Light_R_flare;
            useFlare = true;
        };
        class Left2: Left
        {
            position = light_L_flare;
            hitpoint = Light_L_flare;
            useFlare = true;
        };
    };
    aggregateReflectors[] =
    {
        {
            Left,
            Left2,
            Right,
            Right2
        }
    };

    /* Selections & Memory Points */
    selectionClan = clan;
    selectionFireAnim = "";
    selectionShowDamage = poskozeni;
    selectionBrakeLights = "brzdove svetlo";
    selectionBackLights = "zadni svetlo";
    memoryPointLMissile = Rocket_1;
    memoryPointRMissile = Rocket_2;
    memoryPointsLeftEngineEffect = EngineEffectL;
    memoryPointsRightEngineEffect = EngineEffectR;

    /* Picture-in-Picture */
    #include "pip.hpp"

    /* Inventory */
    class TransportWeapons
    {
        weap_xx(arifle_AK12_545_F,2);
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_545x39_AK12_Mag_F,12);
        mag_xx(75Rnd_762x39_AK12_Mag_F,8);
        mag_xx(HandGrenade,6);
        mag_xx(MiniGrenade,6);
        mag_xx(1Rnd_HE_Grenade_shell,6);
        mag_xx(1Rnd_Smoke_Grenade_shell,3);
        mag_xx(1Rnd_SmokeRed_Grenade_shell,3);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
        mag_xx(1Rnd_SmokeYellow_Grenade_shell,3);
        mag_xx(SmokeShell,8);
        mag_xx(SmokeShellRed,8);
        mag_xx(SmokeShellOrange,8);
        mag_xx(SmokeShellYellow,8);
        mag_xx(RPG32_F,5);
        mag_xx(RPG32_HE_F,2);
        mag_xx(Titan_AT,2);
        mag_xx(Titan_AP,2);
        mag_xx(Titan_AA,2);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,10);
        item_xx(Toolkit,1);
        item_xx(Medikit,1);
    };
    class TransportBackpacks
    {
        bag_xx(B_FieldPack_taiga_F,2);
    };

    /* Animation Sources */
    class AnimationSources: AnimationSources
    {
        class HideTurret
        {
            source = user;
            initPhase = false;
            animPeriod = 0.001;
        };
        class BreakWater
        {
            source = user;
            initPhase = false;
            animPeriod = 2;
        };
        class reload_cannon
        {
            source = reload;
            weapon = autocannon_30mm_APC_Wheeled_04;
        };
        /* Requires interior MFDs
        class revolving_cannon
        {
            source = revolving;
            weapon = autocannon_30mm_APC_Wheeled_04;
        };
        */
        class Missiles_revolving
        {
            source = revolving;
            weapon = missiles_Vorona_vehicle;
        };
        class Missiles_reloadMagazine: Missiles_revolving
        {
            source = reloadMagazine;
        };
        /*
        class muzzle_rot
        {
            source = ammorandom;
            weapon = autocannon_30mm_APC_Wheeled_04;
        };
        */
        class muzzle_hide
        {
            source = reload;
            weapon = autocannon_30mm_APC_Wheeled_04;
        };
        class HitEngine_src
        {
            source = Hit;
            hitpoint = HitEngine;
            raw = true;
        };
        class HitFuel_src
        {
            source = Hit;
            hitpoint = HitFuel;
            raw = true;
        };
        class HitHull_src
        {
            source = Hit;
            hitpoint = HitHull;
            raw = true;
        };
        class HitMainGun_src
        {
            source = Hit;
            hitpoint = HitGun;
            raw = true;
        };
        class HitTurret_src
        {
            source = Hit;
            hitpoint = HitTurret;
            raw = true;
        };
        class HitComTurret_src
        {
            source = Hit;
            hitpoint = HitComTurret;
            raw = true;
        };
        class HitLFWheel
        {
            source = Hit;
            hitpoint = HitLFWheel;
            raw = true;
        };
        class HitLBWheel: HitLFWheel
        {
            hitpoint = HitLF2Wheel;
        };
        class HitLMWheel: HitLFWheel
        {
            hitpoint = HitLMWheel;
        };
        class HitLF2Wheel: HitLFWheel
        {
            hitpoint = HitLBWheel;
        };
        class HitRFWheel: HitLFWheel
        {
            hitpoint = HitRFWheel;
        };
        class HitRBWheel: HitLFWheel
        {
            hitpoint = HitRF2Wheel;
        };
        class HitRMWheel: HitLFWheel
        {
            hitpoint = HitRMWheel;
        };
        class HitRF2Wheel: HitLFWheel
        {
            hitpoint = HitRBWheel;
        };
        /* We don't have these modelled yet
        class HitSLAT_Left_1_src
        {
            source = "Hit";
            hitpoint = "HitSLAT_Left_1";
            raw = true;
        };
        class HitSLAT_Left_2_src
        {
            source = "Hit";
            hitpoint = "HitSLAT_Left_2";
            raw = true;
        };
        class HitSLAT_Left_3_src
        {
            source = "Hit";
            hitpoint = "HitSLAT_Left_3";
            raw = true;
        };
        class HitSLAT_Right_1_src
        {
            source = "Hit";
            hitpoint = "HitSLAT_Right_1";
            raw = true;
        };
        class HitSLAT_Right_2_src
        {
            source = "Hit";
            hitpoint = "HitSLAT_Right_2";
            raw = true;
        };
        class HitSLAT_Right_3_src
        {
            source = "Hit";
            hitpoint = "HitSLAT_Right_3";
            raw = true;
        };
        class HitSLAT_back_src
        {
            source = "Hit";
            hitpoint = "HitSLAT_back";
            raw = true;
        };
        class HitSLAT_front_src
        {
            source = "Hit";
            hitpoint = "HitSLAT_front";
            raw = true;
        };
        class showCamonetHull
        {
            displayName = "$STR_A3_animationsources_showcamonethull0";
            author = "$STR_A3_Bohemia_Interactive";
            source = "user";
            animPeriod = 0.001;
            initPhase = 0;
            mass = -50;
        };
        class showBags
        {
            displayName = "$STR_A3_animationsources_showbagshull0";
            author = "$STR_A3_Bohemia_Interactive";
            source = "user";
            animPeriod = 0.001;
            initPhase = 0;
            mass = -50;
        };
        class showSLATHull
        {
            displayName = "$STR_A3_animationsources_showslathull0";
            author = "$STR_A3_Bohemia_Interactive";
            source = "user";
            animPeriod = 0.001;
            initPhase = 0;
            mass = -50;
        };
        */
    };
    animationList[] =
    {
        /* We don't have these modelled yet
        showCamonetHull,0,
        showBags,0.33,
        showSLATHull,0
        */
    };

    /* Vehicle-in-Vehicle */
    class VehicleTransport
    {
        class Cargo
        {
            parachuteClass = O_Parachute_02_F;
            parachuteHeightLimit = 5;
            canBeTransported = true;
            dimensions[] =
            {
                BBox_1_1_pos,
                BBox_1_2_pos
            };
        };
    };
    class Eventhandlers;
};