/* US */
class B_APC_Tracked_01_base_F: APC_Tracked_01_base_F
{
    hiddenSelectionsTextures[] =
    {
        "\A3\Armor_F_Beta\APC_Tracked_01\Data\APC_Tracked_01_body_CO.paa",
        "\A3\Armor_F_Beta\APC_Tracked_01\Data\MBT_01_body_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_CO.paa",
        "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
    };
    class Turrets: Turrets
    {
        class MainTurret: MainTurret{};
        class CommanderOptics: CommanderOptics{};
    };
    class AnimationSources: AnimationSources{};
};
class B_APC_Tracked_01_rcws_F: B_APC_Tracked_01_base_F
{
    /* Turrets */
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            /* Weapons & Ammunition */
            magazines[] =
            {
                mag_2(64Rnd_40mm_G_belt),
                mag_4(200Rnd_127x99_mag_Tracer_Red)
            };
        };
        class CommanderOptics: CommanderOptics{};
    };

    /* Liveries */
    class TextureSources
    {
        class Sand
        {
            textures[] =
            {
                "\A3\Armor_F_Beta\APC_Tracked_01\Data\APC_Tracked_01_body_CO.paa",
                "\A3\Armor_F_Beta\APC_Tracked_01\Data\MBT_01_body_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
            };
            factions[] = {};
        };
        class Olive
        {
            factions[] = {};
        };
    };

    animationList[] =
    {
        showCamonetHull,0,
        showCamonetPlates1,0,
        showCamonetPlates2,0,
        showBags,0.67
    };
};
class B_APC_Tracked_01_CRV_F: B_APC_Tracked_01_base_F
{
    /* Turrets */
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            /* Weapons & Ammunition */
            magazines[] = {mag_2(200Rnd_127x99_mag_Tracer_Red)};
        };
        class CommanderOptics: CommanderOptics{};
    };
    animationList[] =
    {
        showCamonetHull,0,
        showCamonetPlates1,0,
        showCamonetPlates2,0,
        showWheels,0.5,
        showAmmobox,0.83,
        showBags,0.67
    };

    /* Textures */
    hiddenSelectionsTextures[] =
    {
        "\A3\Armor_F_Beta\APC_Tracked_01\Data\APC_Tracked_01_body_CRV_CO.paa",
        "\A3\Armor_F_Beta\APC_Tracked_01\Data\MBT_01_body_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_CO.paa",
        "\A3\Armor_F_Beta\APC_Tracked_01\Data\APC_Tracked_01_CRV_CO.paa",
        "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
    };

    /* Liveries */
    class TextureSources
    {
        class Sand
        {
            textures[] =
            {
                "\A3\Armor_F_Beta\APC_Tracked_01\Data\APC_Tracked_01_body_CRV_CO.paa",
                "\A3\Armor_F_Beta\APC_Tracked_01\Data\MBT_01_body_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_CO.paa",
                "\A3\Armor_F_Beta\APC_Tracked_01\Data\APC_Tracked_01_CRV_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
            };
            factions[] = {};
        };
        class Olive
        {
            factions[] = {};
        };
    };
};
class B_APC_Tracked_01_AA_F: B_APC_Tracked_01_base_F
{
    animationList[] =
    {
        showCamonetHull,0,
        showCamonetTurret,0,
        showCamonetPlates1,0,
        showCamonetPlates2,0,
        showBags,0.67
    };

    /* Turrets */
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            class Turrets: Turrets
            {
                /* Weapons & Ammunition */
                class CommanderOptics: CommanderOptics
                {
                    weapons[] = {SmokeLauncher};
                    magazines[] = {SmokeLauncherMag};
                };
            };

            /* Weapons & Ammunition */
            magazines[] =
            {
                500Rnd_35mm_AA_shells_Tracer_Red,
                mag_2(4Rnd_Titan_long_missiles)
            };
        };
    };

    /* Liveries */
    class TextureSources
    {
        class Sand
        {
            factions[] = {};
        };
        class Olive
        {
            factions[] = {};
        };
    };
};
class B_APC_Tracked_01_cannon_F: B_APC_Tracked_01_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
            speechSingular[] = {veh_vehicle_APC_s};
            speechPlural[] = {veh_vehicle_APC_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_vehicle_APC_s;
	textPlural = $STR_A3_nameSound_veh_vehicle_APC_p;
	nameSound = veh_vehicle_APC_s;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_APC_Tracked_01_cannon_F.jpg";
	weaponsGroup1 = WEAPONGROUP_MGUNS;
	weaponsGroup2 = WEAPONGROUP_CANNONS + WEAPONGROUP_ROCKETS;
	weaponsGroup3 = WEAPONGROUP_AAMISSILES + WEAPONGROUP_ATMISSILES + WEAPONGROUP_MISSILES;
	weaponsGroup4 = WEAPONGROUP_BOMBS + WEAPONGROUP_SPECIAL;
    scope = protected;
	scopeCurator = private;
	displayName = STR_A3_A_CfgVehicles_B_APC_Tracked_01_cannon_F0;
	//model = "\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\APC_Tracked_01_cannon_F.p3d";
	picture = "\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\Data\UI\APC_Tracked_01_cannon_CA.paa";
	icon = "\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\Data\UI\map_APC_Tracked_01_cannon_CA.paa";
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
            weapons[] =
            {
                autocannon_30mm_CTWS,
                LMG_coax_ext,
                missiles_titan
            };
            magazines[] =
            {
                mag_2(140Rnd_30mm_MP_shells_Tracer_Red),
                mag_2(60Rnd_30mm_APFSDS_shells_Tracer_Red),
                mag_10(200Rnd_762x51_Belt_Red),
                mag_2(2Rnd_GAT_missiles)
            };
            gunnerGetInAction = GetInAMV_cargo;
            gunnerGetOutAction = GetOutLow;
            soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",db-8,1,30};
            soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",db-8,1,30};
            LODTurnedIn = 1100;
		};
		class CommanderOptics: CommanderOptics
		{
		    LODTurnedIn = 1000;
		};
	};
	transportSoldier = 8;
	class TextureSources
	{
		class Sand
		{
            displayName = $STR_A3_TextureSources_Sand0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\Data\APC_Tracked_01_body_CO.paa",
                "\A3\Armor_F_Beta\APC_Tracked_01\Data\MBT_01_body_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\Data\RCWS30_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
            };
            factions[] = {BLU_F};
		};
		class Olive
		{
            displayName = $STR_A3_TextureSources_Olive0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\Data\APC_Tracked_01_body_olive_CO.paa",
                "\A3\Armor_F_Exp\APC_Tracked_01\Data\MBT_01_body_olive_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\Data\RCWS30_olive_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
            };
            factions[] =
            {
                BLU_T_F,
                BLU_W_F
            };
		};
	};
	class AnimationSources: AnimationSources
	{
		class muzzle_rot
		{
            source = ammorandom;
            weapon = autocannon_30mm_CTWS;
		};
		class muzzle_hide
		{
            source = reload;
            weapon = autocannon_30mm_CTWS;
		};
		class Missiles_revolving
		{
            source = revolving;
            weapon = missiles_titan;
		};
		class Missiles_reloadMagazine: Missiles_revolving
		{
		    source = reloadMagazine;
		};
		class showCamonetPlates1
		{
            source = user;
            animPeriod = 0.001;
            initPhase = false;
		};
		class showCamonetPlates2
		{
            source = user;
            animPeriod = 0.001;
            initPhase = false;
		};
		class showCamonetHull
		{
            displayName = $STR_A3_AnimationSources_showCamonetHull0;
            author = $STR_A3_A_AveryTheKitty;
            source = user;
            animPeriod = 0.001;
            initPhase = false;
            forceAnimatePhase = true;
            forceAnimate[] =
            {
                showCamonetPlates1,1,
                showCamonetPlates2,1
            };
            mass = -50;
		};
		class showBags
		{
            displayName = $STR_A3_AnimationSources_showBagsHull0;
            author = $STR_A3_A_AveryTheKitty;
            source = user;
            animPeriod = 0.001;
            initPhase = false;
            mass = -50;
		};
	};
	animationList[] =
	{
		showCamonetHull,0,
		showCamonetPlates1,0,
		showCamonetPlates2,0,
		showBags,0.67
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\Data\APC_Tracked_01_body_CO.paa",
		"\A3\Armor_F_Beta\APC_Tracked_01\Data\MBT_01_body_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\Data\RCWS30_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
	};
};

/* US (Pacific) */
class B_T_APC_Tracked_01_AA_F: B_APC_Tracked_01_AA_F
{
    /* Inventory */
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_khaki_mag,12);
        mag_xx(100Rnd_65x39_caseless_khaki_mag,6);
        mag_xx(HandGrenade,6);
        mag_xx(MiniGrenade,6);
        mag_xx(1Rnd_HE_Grenade_shell,3);
        mag_xx(3Rnd_HE_Grenade_shell,1);
        mag_xx(1Rnd_Smoke_Grenade_shell,3);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,3);
        mag_xx(SmokeShell,8);
        mag_xx(SmokeShellGreen,8);
        mag_xx(SmokeShellOrange,8);
        mag_xx(SmokeShellBlue,8);
        mag_xx(NLAW_F,5);
        mag_xx(Titan_AT,2);
        mag_xx(Titan_AP,2);
        mag_xx(Titan_AA,2);
    };
    class TransportBackpacks
    {
        bag_xx(B_AssaultPack_tna_F,2);
    };
};
class B_T_APC_Tracked_01_CRV_F: B_APC_Tracked_01_CRV_F
{
    /* Inventory */
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_khaki_mag,12);
        mag_xx(100Rnd_65x39_caseless_khaki_mag,6);
        mag_xx(HandGrenade,6);
        mag_xx(MiniGrenade,6);
        mag_xx(1Rnd_HE_Grenade_shell,3);
        mag_xx(3Rnd_HE_Grenade_shell,1);
        mag_xx(1Rnd_Smoke_Grenade_shell,3);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,3);
        mag_xx(SmokeShell,8);
        mag_xx(SmokeShellGreen,8);
        mag_xx(SmokeShellOrange,8);
        mag_xx(SmokeShellBlue,8);
        mag_xx(NLAW_F,5);
        mag_xx(Titan_AT,2);
        mag_xx(Titan_AP,2);
        mag_xx(Titan_AA,2);
    };
    class TransportBackpacks
    {
        bag_xx(B_AssaultPack_tna_F,2);
    };
};
class B_T_APC_Tracked_01_rcws_F: B_APC_Tracked_01_rcws_F
{
    /* Inventory */
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_khaki_mag,12);
        mag_xx(100Rnd_65x39_caseless_khaki_mag,6);
        mag_xx(HandGrenade,6);
        mag_xx(MiniGrenade,6);
        mag_xx(1Rnd_HE_Grenade_shell,3);
        mag_xx(3Rnd_HE_Grenade_shell,1);
        mag_xx(1Rnd_Smoke_Grenade_shell,3);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,3);
        mag_xx(SmokeShell,8);
        mag_xx(SmokeShellGreen,8);
        mag_xx(SmokeShellOrange,8);
        mag_xx(SmokeShellBlue,8);
        mag_xx(NLAW_F,5);
        mag_xx(Titan_AT,2);
        mag_xx(Titan_AP,2);
        mag_xx(Titan_AA,2);
    };
    class TransportBackpacks
    {
        bag_xx(B_AssaultPack_tna_F,2);
    };
};
class B_T_APC_Tracked_01_cannon_F: B_APC_Tracked_01_cannon_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_APC_Tracked_01_cannon_F.jpg";
	scope = protected;
	scopeCurator = private;
	side = TWest;
	faction = BLU_T_F;
	crew = B_T_Crew_F;
	typicalCargo[] = {B_T_Soldier_F};

    /* Inventory */
	class TransportWeapons
	{
		weap_xx(arifle_MX_khk_F,2);
		weap_xx(arifle_MX_SW_khk_F,1);
		weap_xx(launch_NLAW_F,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_khaki_mag,12);
		mag_xx(100Rnd_65x39_caseless_khaki_mag,6);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(1Rnd_HE_Grenade_shell,3);
		mag_xx(3Rnd_HE_Grenade_shell,1);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,3);
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellGreen,8);
		mag_xx(SmokeShellOrange,8);
		mag_xx(SmokeShellBlue,8);
		mag_xx(NLAW_F,5);
		mag_xx(Titan_AT,2);
		mag_xx(Titan_AP,2);
		mag_xx(Titan_AA,2);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_tna_F,2);
	};

	hiddenSelectionsTextures[]=
	{
		"\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\Data\APC_Tracked_01_body_olive_CO.paa",
		"\A3\Armor_F_Exp\APC_Tracked_01\Data\MBT_01_body_olive_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\Data\RCWS30_olive_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
	};
};

/* US (Woodland) */
class B_W_APC_Tracked_01_AA_F: B_APC_Tracked_01_AA_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {damagehide,0},
            {wheel_koll1,0.01},
            {wheel_kolol1,0.01},
            {wheel_podkolol1,0.59},
            {wheel_kolp1,0.01},
            {wheel_kolop1,0.01},
            {wheel_podkolop1,0.58},
            {wheel_koll2,0.01},
            {wheel_kolp2,0.01},
            {wheel_kolol2,0.01},
            {wheel_kolol3,0.01},
            {wheel_kolol4,0.01},
            {wheel_kolol5,0.01},
            {wheel_kolol6,0.01},
            {wheel_kolop2,0.01},
            {wheel_kolop3,0.01},
            {wheel_kolop4,0.01},
            {wheel_kolop5,0.01},
            {wheel_kolop6,0.01},
            {wheel_podkolol2,0.55},
            {wheel_podkolol3,0.51},
            {wheel_podkolol4,0.48},
            {wheel_podkolol5,0.43},
            {wheel_podkolol6,0.4},
            {wheel_podkolop2,0.55},
            {wheel_podkolop3,0.52},
            {wheel_podkolop4,0.49},
            {wheel_podkolop5,0.44},
            {wheel_podkolop6,0.39},
            {podkolol1_hide_damage,0},
            {podkolol2_hide_damage,0},
            {podkolol3_hide_damage,0},
            {podkolol4_hide_damage,0},
            {podkolol5_hide_damage,0},
            {podkolol6_hide_damage,0},
            {podkolol7_hide_damage,0},
            {podkolol8_hide_damage,0},
            {podkolop1_hide_damage,0},
            {podkolop2_hide_damage,0},
            {podkolop3_hide_damage,0},
            {podkolop4_hide_damage,0},
            {podkolop5_hide_damage,0},
            {podkolop6_hide_damage,0},
            {podkolop7_hide_damage,0},
            {podkolop8_hide_damage,0},
            {damagevez,0},
            {mainturret,0},
            {maingun,0.09},
            {obsturret,0},
            {obsgun,0},
            {hatchcommander,0},
            {hatchgunner,0},
            {reverse_light,1},
            {plates_1_y,0},
            {plates_2_y,0},
            {plates_1_x,0},
            {plates_2_x,0},
            {plates_1_bank,0},
            {plates_2_bank,0},
            {drivingwheel,0},
            {indicatorvoltammeter_turret,0},
            {indicatorspeed_mfd_driver,0},
            {indicatorrpm_mfd_driver,0},
            {lights_driver,0},
            {lights_driver_off,0},
            {lights_turret,0},
            {cannon_ready_light,0},
            {engine_damage_indicator,0},
            {main_gun_damage_indicator,0},
            {pedal_thrust,0},
            {pedal_brake,1},
            {driver_reverse_cam,1},
            {driver_reverse_pip_off,1},
            {driver_hide_mfd,1},
            {indicatortempwater_mfd_driver,0},
            {indicatorfuel_mfd_driver,1},
            {indicator_hull_direction_mfd_driver,0},
            {indicator_main_turret_mfd_driver,0},
            {indicator_com_turret_mfd_driver,0},
            {indicator_hull_direction_mfd_com,0},
            {indicator_main_turret_onscreen_com,0},
            {indicator_main_turret_mfd_com,0},
            {indicator_com_turret_mfd_com,0},
            {indicator_com_turret_onscreen_com,0},
            {indicator_hull_direction_mfd_gunner,0},
            {indicator_main_turret_mfd_gunner,0},
            {indicator_com_turret_mfd_gunner,0},
            {indicator_com_smoke_1,1},
            {indicator_com_smoke_2,1},
            {indicator_damage_engine,0},
            {indicator_damage_fuel,0},
            {indicator_damage_track,0},
            {indicator_turret_damage_hull,0},
            {indicator_turret_damage_engine,0},
            {indicator_turret_damage_fuel,0},
            {indicator_turret_damage_main_gun,0},
            {indicator_turret_damage_tracks,0},
            {indicator_turret_damage_turret,0},
            {indicator_turret_damage_com_turret,0},
            {hide_mfd_and_pip_screen_driver,1},
            {hide_mfd_and_pip_screen_gunner,1},
            {hide_mfd_elements,1},
            {hidetitan_1,1},
            {hidetitan_2,1},
            {hidetitan_3,1},
            {hidetitan_4,1},
            {reloadtitan_1,0},
            {reloadtitan_2,0},
            {reloadtitan_3,0},
            {reloadtitan_4,0},
            {missile_move_1,1},
            {missile_move_2,1},
            {missile_move_3,1},
            {missile_move_4,0},
            {zaslehrot,103},
            {zaslehrot_2,103},
            {maingunoptics,0.09},
            {satellite_rot,0},
            {turret_control_x,0},
            {turret_control_y,0},
            {com_turret_control_x,0},
            {com_turret_control_y,0},
            {indicator_com_turret_counter_mfd_gunner,0},
            {indicator_com_turret_counter_mfd_com,0},
            {ammo_status_slider_translation,1},
            {com_and_gun_turret_indicator_12_show_from_left,0},
            {com_and_gun_turret_indicator_12_hide_from_left,0},
            {com_and_gun_turret_indicator_11_show,0},
            {com_and_gun_turret_indicator_11_hide,0},
            {com_and_gun_turret_indicator_10_show,0},
            {com_and_gun_turret_indicator_10_hide,0},
            {com_and_gun_turret_indicator_9_show,0},
            {com_and_gun_turret_indicator_9_hide,0},
            {com_and_gun_turret_indicator_8_show,0},
            {com_and_gun_turret_indicator_8_hide,0},
            {com_and_gun_turret_indicator_7_show,0},
            {com_and_gun_turret_indicator_7_hide,0},
            {com_and_gun_turret_indicator_6_show_from_left,0},
            {com_and_gun_turret_indicator_6_hide_from_left,0},
            {com_and_gun_turret_indicator_12_show_from_right,0},
            {com_and_gun_turret_indicator_12_hide_from_right,0},
            {com_and_gun_turret_indicator_1_show,0},
            {com_and_gun_turret_indicator_1_hide,0},
            {com_and_gun_turret_indicator_2_show,0},
            {com_and_gun_turret_indicator_2_hide,0},
            {com_and_gun_turret_indicator_3_show,0},
            {com_and_gun_turret_indicator_3_hide,0},
            {com_and_gun_turret_indicator_4_show,0},
            {com_and_gun_turret_indicator_4_hide,0},
            {com_and_gun_turret_indicator_5_show,0},
            {com_and_gun_turret_indicator_5_hide,0},
            {com_and_gun_turret_indicator_6_show_from_right,0},
            {com_and_gun_turret_indicator_6_hide_from_right,0}
        };
		hide[] =
        {
            clan,
            zasleh,
            zasleh_1,
            light_l,
            light_r,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.791;
		verticalOffsetWorld = -0.195;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_APC_Tracked_01_AA_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Crew_F;
	typicalCargo[] = {B_W_Soldier_F};

    /* Inventory */
	class TransportWeapons
	{
		weap_xx(arifle_MX_Black_F,2);
		weap_xx(arifle_MX_SW_Black_F,1);
		weap_xx(launch_NLAW_F,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,12);
		mag_xx(100Rnd_65x39_caseless_black_mag,6);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(1Rnd_HE_Grenade_shell,3);
		mag_xx(3Rnd_HE_Grenade_shell,1);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,3);
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellGreen,8);
		mag_xx(SmokeShellOrange,8);
		mag_xx(SmokeShellBlue,8);
		mag_xx(NLAW_F,5);
		mag_xx(Titan_AT,2);
		mag_xx(Titan_AP,2);
		mag_xx(Titan_AA,2);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_wdl_F,2);
	};

	hiddenSelectionsTextures[] =
	{
		"\A3\Armor_F_Exp\APC_Tracked_01\Data\APC_Tracked_01_AA_body_olive_CO.paa",
		"\A3\Armor_F_Exp\APC_Tracked_01\Data\MBT_01_body_olive_CO.paa",
		"\A3\Armor_F_Exp\APC_Tracked_01\Data\APC_Tracked_01_AA_tower_olive_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
	};
};
class B_W_APC_Tracked_01_cannon_F: B_APC_Tracked_01_cannon_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_APC_Tracked_01_cannon_F.jpg";
	scope = protected;
	scopeCurator = private;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Crew_F;
	typicalCargo[] = {B_W_Soldier_F};

    /* Inventory */
	class TransportWeapons
	{
		weap_xx(arifle_MX_Black_F,2);
		weap_xx(arifle_MX_SW_Black_F,1);
		weap_xx(launch_NLAW_F,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,12);
		mag_xx(100Rnd_65x39_caseless_black_mag,6);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(1Rnd_HE_Grenade_shell,3);
		mag_xx(3Rnd_HE_Grenade_shell,1);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,3);
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellGreen,8);
		mag_xx(SmokeShellOrange,8);
		mag_xx(SmokeShellBlue,8);
		mag_xx(NLAW_F,5);
		mag_xx(Titan_AT,2);
		mag_xx(Titan_AP,2);
		mag_xx(Titan_AA,2);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_wdl_F,2);
	};

	hiddenSelectionsTextures[]=
	{
		"\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\Data\APC_Tracked_01_body_olive_CO.paa",
		"\A3\Armor_F_Exp\APC_Tracked_01\Data\MBT_01_body_olive_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\Data\RCWS30_olive_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
	};
};
class B_W_APC_Tracked_01_CRV_F: B_APC_Tracked_01_CRV_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {damagehide,0},
            {wheel_koll1,0.01},
            {wheel_kolol1,0.01},
            {wheel_podkolol1,0.61},
            {wheel_kolp1,0.01},
            {wheel_kolop1,0.01},
            {wheel_podkolop1,0.6},
            {wheel_koll2,0.01},
            {wheel_kolp2,0.01},
            {wheel_kolol2,0.01},
            {wheel_kolol3,0.01},
            {wheel_kolol4,0.01},
            {wheel_kolol5,0.01},
            {wheel_kolol6,0.01},
            {wheel_kolop2,0.01},
            {wheel_kolop3,0.01},
            {wheel_kolop4,0.01},
            {wheel_kolop5,0.01},
            {wheel_kolop6,0.01},
            {wheel_podkolol2,0.57},
            {wheel_podkolol3,0.53},
            {wheel_podkolol4,0.5},
            {wheel_podkolol5,0.45},
            {wheel_podkolol6,0.41},
            {wheel_podkolop2,0.57},
            {wheel_podkolop3,0.54},
            {wheel_podkolop4,0.51},
            {wheel_podkolop5,0.45},
            {wheel_podkolop6,0.41},
            {podkolol1_hide_damage,0},
            {podkolol2_hide_damage,0},
            {podkolol3_hide_damage,0},
            {podkolol4_hide_damage,0},
            {podkolol5_hide_damage,0},
            {podkolol6_hide_damage,0},
            {podkolol7_hide_damage,0},
            {podkolol8_hide_damage,0},
            {podkolop1_hide_damage,0},
            {podkolop2_hide_damage,0},
            {podkolop3_hide_damage,0},
            {podkolop4_hide_damage,0},
            {podkolop5_hide_damage,0},
            {podkolop6_hide_damage,0},
            {podkolop7_hide_damage,0},
            {podkolop8_hide_damage,0},
            {damagevez,0},
            {mainturret,0},
            {maingun,0},
            {obsturret,0},
            {obsgun,0},
            {reverse_light,1},
            {plates_1_y,0},
            {plates_2_y,0},
            {plates_1_x,0},
            {plates_2_x,0},
            {plates_1_bank,0},
            {plates_2_bank,0},
            {drivingwheel,0},
            {indicatorspeed_mfd_driver,0},
            {indicatorrpm_mfd_driver,0},
            {lights_driver,0},
            {lights_driver_off,0},
            {lights_turret,0},
            {cannon_ready_light,0},
            {engine_damage_indicator,0},
            {main_gun_damage_indicator,0},
            {pedal_thrust,0},
            {pedal_brake,1},
            {driver_reverse_cam,1},
            {driver_reverse_pip_off,1},
            {driver_hide_mfd,1},
            {indicatortempwater_mfd_driver,0},
            {indicatorfuel_mfd_driver,1},
            {indicator_hull_direction_mfd_driver,0},
            {indicator_main_turret_mfd_driver,0},
            {indicator_com_turret_mfd_driver,0},
            {indicator_hull_direction_mfd_com,0},
            {indicator_main_turret_mfd_com,0},
            {indicator_com_turret_mfd_com,0},
            {indicator_hull_direction_mfd_gunner,0},
            {indicator_main_turret_mfd_gunner,0},
            {indicator_com_turret_mfd_gunner,0},
            {indicator_com_smoke_1,1},
            {indicator_com_smoke_2,1},
            {indicator_damage_engine,0},
            {indicator_damage_fuel,0},
            {indicator_damage_track,0},
            {indicator_turret_damage_hull,0},
            {indicator_turret_damage_engine,0},
            {indicator_turret_damage_fuel,0},
            {indicator_turret_damage_main_gun,0},
            {indicator_turret_damage_tracks,0},
            {indicator_turret_damage_turret,0},
            {indicator_turret_damage_com_turret,0},
            {hide_mfd_and_pip_screen_driver,1},
            {hide_mfd_and_pip_screen_gunner,1},
            {hide_mfd_elements,1},
            {hatchcommander,0},
            {zasleh2_rot,1087.71},
            {maingunoptics,0},
            {turret_control_x,0},
            {turret_control_y,0},
            {com_turret_control_x,0},
            {com_turret_control_y,0},
            {zasleh_hide,0},
            {zasleh_rot,448}
        };
		hide[] =
        {
            clan,
            zasleh,
            zasleh_1,
            light_l,
            light_r,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.427;
		verticalOffsetWorld = -0.202;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_APC_Tracked_01_CRV_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Crew_F;
	typicalCargo[] = {B_W_Soldier_F};

    /* Inventory */
	class TransportWeapons
	{
		weap_xx(arifle_MX_Black_F,2);
		weap_xx(arifle_MX_SW_Black_F,1);
		weap_xx(launch_NLAW_F,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,12);
		mag_xx(100Rnd_65x39_caseless_black_mag,6);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(1Rnd_HE_Grenade_shell,3);
		mag_xx(3Rnd_HE_Grenade_shell,1);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,3);
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellGreen,8);
		mag_xx(SmokeShellOrange,8);
		mag_xx(SmokeShellBlue,8);
		mag_xx(NLAW_F,5);
		mag_xx(Titan_AT,2);
		mag_xx(Titan_AP,2);
		mag_xx(Titan_AA,2);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_wdl_F,2);
	};

	hiddenSelectionsTextures[]=
	{
		"\A3\Armor_F_Exp\APC_Tracked_01\Data\APC_Tracked_01_body_CRV_olive_CO.paa",
		"\A3\Armor_F_Exp\APC_Tracked_01\Data\MBT_01_body_olive_CO.paa",
		"\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa",
		"\A3\Armor_F_Exp\APC_Tracked_01\Data\APC_Tracked_01_CRV_olive_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
	};
};
class B_W_APC_Tracked_01_rcws_F: B_APC_Tracked_01_rcws_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
            {damagehide,0},
            {wheel_koll1,0},
            {wheel_kolol1,0},
            {wheel_podkolol1,0},
            {wheel_kolp1,0},
            {wheel_kolop1,0},
            {wheel_podkolop1,0},
            {wheel_koll2,0},
            {wheel_kolp2,0},
            {wheel_kolol2,0},
            {wheel_kolol3,0},
            {wheel_kolol4,0},
            {wheel_kolol5,0},
            {wheel_kolol6,0},
            {wheel_kolop2,0},
            {wheel_kolop3,0},
            {wheel_kolop4,0},
            {wheel_kolop5,0},
            {wheel_kolop6,0},
            {wheel_podkolol2,0},
            {wheel_podkolol3,0},
            {wheel_podkolol4,0},
            {wheel_podkolol5,0},
            {wheel_podkolol6,0},
            {wheel_podkolop2,0},
            {wheel_podkolop3,0},
            {wheel_podkolop4,0},
            {wheel_podkolop5,0},
            {wheel_podkolop6,0},
            {podkolol1_hide_damage,0},
            {podkolol2_hide_damage,0},
            {podkolol3_hide_damage,0},
            {podkolol4_hide_damage,0},
            {podkolol5_hide_damage,0},
            {podkolol6_hide_damage,0},
            {podkolol7_hide_damage,0},
            {podkolol8_hide_damage,0},
            {podkolop1_hide_damage,0},
            {podkolop2_hide_damage,0},
            {podkolop3_hide_damage,0},
            {podkolop4_hide_damage,0},
            {podkolop5_hide_damage,0},
            {podkolop6_hide_damage,0},
            {podkolop7_hide_damage,0},
            {podkolop8_hide_damage,0},
            {damagevez,0},
            {mainturret,0},
            {maingun,0},
            {obsturret,0},
            {obsgun,0},
            {reverse_light,1},
            {plates_1_y,0},
            {plates_2_y,0},
            {plates_1_x,0},
            {plates_2_x,0},
            {plates_1_bank,0},
            {plates_2_bank,0},
            {drivingwheel,0},
            {indicatorspeed_mfd_driver,0},
            {indicatorrpm_mfd_driver,0},
            {lights_driver,0},
            {lights_driver_off,0},
            {lights_turret,0},
            {cannon_ready_light,0},
            {engine_damage_indicator,0},
            {main_gun_damage_indicator,0},
            {pedal_thrust,0},
            {pedal_brake,0},
            {driver_reverse_cam,1},
            {driver_reverse_pip_off,1},
            {driver_hide_mfd,1},
            {indicatortempwater_mfd_driver,0},
            {indicatorfuel_mfd_driver,1},
            {indicator_hull_direction_mfd_driver,0},
            {indicator_main_turret_mfd_driver,0},
            {indicator_com_turret_mfd_driver,0},
            {indicator_hull_direction_mfd_com,0},
            {indicator_main_turret_mfd_com,0},
            {indicator_com_turret_mfd_com,0},
            {indicator_hull_direction_mfd_gunner,0},
            {indicator_main_turret_mfd_gunner,0},
            {indicator_com_turret_mfd_gunner,0},
            {indicator_com_smoke_1,1},
            {indicator_com_smoke_2,1},
            {indicator_damage_engine,0},
            {indicator_damage_fuel,0},
            {indicator_damage_track,0},
            {indicator_turret_damage_hull,0},
            {indicator_turret_damage_engine,0},
            {indicator_turret_damage_fuel,0},
            {indicator_turret_damage_main_gun,0},
            {indicator_turret_damage_tracks,0},
            {indicator_turret_damage_turret,0},
            {indicator_turret_damage_com_turret,0},
            {hide_mfd_and_pip_screen_driver,1},
            {hide_mfd_and_pip_screen_gunner,1},
            {hide_mfd_elements,1},
            {hatchcommander,0},
            {zasleh_rot,464},
            {zasleh2_rot,519.61},
            {zasleh_hide,0},
            {maingunoptics,0},
            {turret_control_x,0},
            {turret_control_y,0},
            {com_turret_control_x,0},
            {com_turret_control_y,0}
		};
		hide[] =
		{
            clan,
            zasleh2,
            zasleh_1,
            light_l,
            light_r,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 2.442;
		verticalOffsetWorld = -0.191;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_APC_Tracked_01_rcws_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Crew_F;
	typicalCargo[] = {B_W_Soldier_F};

    /* Inventory */
	class TransportWeapons
	{
		weap_xx(arifle_MX_Black_F,2);
		weap_xx(arifle_MX_SW_Black_F,1);
		weap_xx(launch_NLAW_F,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,12);
		mag_xx(100Rnd_65x39_caseless_black_mag,6);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(1Rnd_HE_Grenade_shell,3);
		mag_xx(3Rnd_HE_Grenade_shell,1);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,3);
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellGreen,8);
		mag_xx(SmokeShellOrange,8);
		mag_xx(SmokeShellBlue,8);
		mag_xx(NLAW_F,5);
		mag_xx(Titan_AT,2);
		mag_xx(Titan_AP,2);
		mag_xx(Titan_AA,2);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_wdl_F,2);
	};
    
	hiddenSelectionsTextures[]=
	{
		"\A3\Armor_F_Exp\APC_Tracked_01\Data\APC_Tracked_01_body_olive_CO.paa",
		"\A3\Armor_F_Exp\APC_Tracked_01\Data\MBT_01_body_olive_CO.paa",
		"\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
	};
};

/* US Marines */
class B_D_APC_Tracked_01_aa_lxWS : B_APC_Tracked_01_AA_F
{
    scope = protected;
    scopeCurator = protected;
};

class B_D_APC_Tracked_01_CRV_lxWS : B_APC_Tracked_01_CRV_F
{
    scope = protected;
    scopeCurator = protected;
};

class B_D_APC_Tracked_01_rcws_lxWS : B_APC_Tracked_01_rcws_F
{
    scope = protected;
    scopeCurator = protected;   
};

class B_MBT_01_arty_F;
class B_D_MBT_01_arty_lxWS : B_MBT_01_arty_F
{
    scope = protected;
    scopeCurator = protected;   
};

class B_MBT_01_mlrs_F;
class B_D_MBT_01_mlrs_lxWS : B_MBT_01_mlrs_F
{
    scope = protected;
    scopeCurator = protected;   
};