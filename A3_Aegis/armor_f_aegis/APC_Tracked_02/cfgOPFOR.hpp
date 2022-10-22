/* IAF */
class O_APC_Tracked_02_base_F: APC_Tracked_02_base_F{};
class O_APC_Tracked_02_cannon_F: O_APC_Tracked_02_base_F
{
    /* Turrets */
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            class Turrets: Turrets
            {
                class CommanderOptics: CommanderOptics{};
            };

            /* Weapons & Ammunition */
            magazines[] =
            {
                mag_2(140Rnd_30mm_MP_shells_Tracer_Green),
                mag_2(60Rnd_30mm_APFSDS_shells_Tracer_Green),
                mag_10(200Rnd_762x51_Belt_Green),
                mag_2(2Rnd_GAT_missiles_O)
            };
        };
    };

    animationList[] =
    {
        showTracks,0.5,
        showCamonetHull,0,
        showBags,0.67,
        showSLATHull,0
    };

    /* Liveries */
    class TextureSources
    {
        class Hex
        {
            factions[] = {};
        };
        class GreenHex
        {
            factions[] = {};
        };
        class Green
        {
            displayName = $STR_A3_TEXTURESOURCES_GREEN0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_01_RUkhk_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUkhk_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\RCWS30_RUkhk_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_green_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
            };
            factions[] = {};
        };
    };
    /* Inventory */
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_green,12);
        mag_xx(150Rnd_762x54_box,4);
        mag_xx(HandGrenade_East,6);
        mag_xx(MiniGrenade,6);
        mag_xx(SmokeShell,8);
        mag_xx(SmokeShellRed,8);
        mag_xx(SmokeShellYellow,8);
        mag_xx(SmokeShellOrange,8);
        mag_xx(1Rnd_HE_Grenade_shell,6);
        mag_xx(1Rnd_Smoke_Grenade_shell,3);
        mag_xx(1Rnd_SmokeYellow_Grenade_shell,3);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
        mag_xx(1Rnd_SmokeRed_Grenade_shell,3);
        mag_xx(RPG32_F,5);
        mag_xx(RPG32_HE_F,2);
        mag_xx(Titan_AT,2);
        mag_xx(Titan_AA,2);
    };
    class TransportBackpacks
    {
        bag_xx(B_FieldPack_ocamo,2);
    };
};
class O_APC_Tracked_02_AA_F: O_APC_Tracked_02_base_F
{
    /* Turrets */
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            /* Weapons & Ammunition */
            magazines[] =
            {
                500Rnd_35mm_AA_shells_Tracer_Green,
                mag_2(4Rnd_Titan_long_missiles)
            };
        };
    };

    animationList[] =
    {
        showTracks,0.5,
        showCamonetHull,0,
        showCamonetTurret,0,
        showSLATHull,0
    };

    /* Liveries */
    class TextureSources
    {
        class Hex
        {
            factions[] = {};
        };
        class GreenHex
        {
            factions[] = {};
        };
        class Green
        {
            displayName = $STR_A3_TEXTURESOURCES_GREEN0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_01_AA_RUkhk_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUkhk_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_01_AA_Tower_RUkhk_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_green_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
            };
            factions[] = {};
        };
    };
    /* Inventory */
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_green,12);
        mag_xx(150Rnd_762x54_box,4);
        mag_xx(HandGrenade_East,6);
        mag_xx(MiniGrenade,6);
        mag_xx(SmokeShell,8);
        mag_xx(SmokeShellRed,8);
        mag_xx(SmokeShellYellow,8);
        mag_xx(SmokeShellOrange,8);
        mag_xx(1Rnd_HE_Grenade_shell,6);
        mag_xx(1Rnd_Smoke_Grenade_shell,3);
        mag_xx(1Rnd_SmokeYellow_Grenade_shell,3);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
        mag_xx(1Rnd_SmokeRed_Grenade_shell,3);
        mag_xx(RPG32_F,5);
        mag_xx(RPG32_HE_F,2);
        mag_xx(Titan_AT,2);
        mag_xx(Titan_AA,2);
    };
    class TransportBackpacks
    {
        bag_xx(B_FieldPack_ocamo,2);
    };
};

/* China */
class O_T_APC_Tracked_02_cannon_ghex_F: O_APC_Tracked_02_cannon_F
{
    /* Inventory */
    class TransportMagazines
    {
        mag_xx(30Rnd_580x42_Mag_F,12);
        mag_xx(100Rnd_580x42_Mag_F,8);
        mag_xx(HandGrenade_East,6);
        mag_xx(MiniGrenade,6);
        mag_xx(SmokeShell,8);
        mag_xx(SmokeShellRed,8);
        mag_xx(SmokeShellYellow,8);
        mag_xx(SmokeShellOrange,8);
        mag_xx(1Rnd_HE_Grenade_shell,6);
        mag_xx(1Rnd_Smoke_Grenade_shell,3);
        mag_xx(1Rnd_SmokeYellow_Grenade_shell,3);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
        mag_xx(1Rnd_SmokeRed_Grenade_shell,3);
        mag_xx(RPG32_F,5);
        mag_xx(RPG32_HE_F,2);
        mag_xx(Titan_AT,2);
        mag_xx(Titan_AA,2);
    };
    class TransportBackpacks
    {
        bag_xx(B_FieldPack_ghex_F,2);
    };
};
class O_T_APC_Tracked_02_AA_ghex_F: O_APC_Tracked_02_AA_F
{
    /* Inventory */
    class TransportMagazines
    {
        mag_xx(30Rnd_580x42_Mag_F,12);
        mag_xx(100Rnd_580x42_Mag_F,8);
        mag_xx(HandGrenade_East,6);
        mag_xx(MiniGrenade,6);
        mag_xx(SmokeShell,8);
        mag_xx(SmokeShellRed,8);
        mag_xx(SmokeShellYellow,8);
        mag_xx(SmokeShellOrange,8);
        mag_xx(1Rnd_HE_Grenade_shell,6);
        mag_xx(1Rnd_Smoke_Grenade_shell,3);
        mag_xx(1Rnd_SmokeYellow_Grenade_shell,3);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
        mag_xx(1Rnd_SmokeRed_Grenade_shell,3);
        mag_xx(RPG32_F,5);
        mag_xx(RPG32_HE_F,2);
        mag_xx(Titan_AT,2);
        mag_xx(Titan_AA,2);
    };
    class TransportBackpacks
    {
        bag_xx(B_FieldPack_ghex_F,2);
    };
};

/* Argana */
class O_A_APC_Tracked_02_cannon_F: O_APC_Tracked_02_cannon_F
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
            {wheel_podkolol1,0.54},
            {wheel_kolp1,0.01},
            {wheel_kolop1,0.01},
            {wheel_podkolop1,0.53},
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
            {wheel_podkolol2,0.54},
            {wheel_podkolol3,0.55},
            {wheel_podkolol4,0.55},
            {wheel_podkolol5,0.56},
            {wheel_podkolol6,0.56},
            {wheel_podkolop2,0.54},
            {wheel_podkolop3,0.56},
            {wheel_podkolop4,0.56},
            {wheel_podkolop5,0.56},
            {wheel_podkolop6,0.56},
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
            {maingun,0.02},
            {obsturret,0},
            {obsgun,0},
            {poklop_driver_damage,0},
            {reverse_light,0},
            {maingunoptics,0.02},
            {launcher_hatch_1_rot,0},
            {launcher_hatch_1_translate_1,0},
            {launcher_hatch_1_translate_2,0},
            {launcher_hatch_2_rot,0},
            {launcher_hatch_2_translate_1,0},
            {launcher_hatch_2_translate_2,0},
            {drivingstickl,0},
            {drivingstickr,0},
            {indicatorvoltammeter,0},
            {indicatortempoil,0},
            {indicatortempwater,0},
            {indicatorspeed_mfd_driver,0},
            {indicatorrpm,0},
            {indicatorrpm_mfd_driver,0},
            {lights_driver,0},
            {lights_driver_off,0},
            {lights_turret,0},
            {cannon_ready_light,0},
            {engine_damage_indicator,0},
            {main_gun_damage_indicator,0},
            {pedal_thrust,0},
            {pedal_brake,1},
            {driver_reverse_cam,0},
            {driver_hide_mfd,0},
            {indicatortempwater_mfd_driver,0},
            {indicatorfuel_mfd_driver,1},
            {indicator_hull_direction_mfd_driver,0},
            {indicator_main_turret_mfd_driver,0},
            {indicator_com_turret_mfd_driver,0},
            {indicator_com_turret_counter_mfd_driver,0},
            {indicator_hull_direction_mfd_com,0},
            {indicator_main_turret_onscreen_com,0},
            {indicator_com_turret_mfd_com,0},
            {indicator_com_turret_counter_mfd_com,0},
            {indicator_hull_direction_mfd_gunner,0},
            {indicator_main_turret_mfd_gunner,0},
            {indicator_com_turret_mfd_gunner,0},
            {indicator_com_turret_counter_mfd_gunner,0},
            {indicator_com_smoke_1,1},
            {indicator_com_smoke_2,1},
            {mainturret_indicator3,0},
            {comturret_indicator3,0},
            {comturret_indicator_counter3,0},
            {indicator_damage_engine,0},
            {indicator_damage_fuel,0},
            {indicator_damage_tracks,0},
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
            {slat_front_normal_hide,0},
            {slat_front_damage_unhide,0},
            {slat_front_damage_hide,0},
            {slat_front_destroyed_unhide,0},
            {slat_front_firegeo_hide,0},
            {slat_back_normal_hide,0},
            {slat_back_damage_unhide,0},
            {slat_back_damage_hide,0},
            {slat_back_destroyed_unhide,0},
            {slat_back_firegeo_hide,0},
            {slat_left_1_normal_hide,0},
            {slat_left_1_damage_unhide,0},
            {slat_left_1_damage_hide,0},
            {slat_left_1_destroyed_unhide,0},
            {slat_left_1_firegeo_hide,0},
            {slat_left_2_normal_hide,0},
            {slat_left_2_damage_unhide,0},
            {slat_left_2_damage_hide,0},
            {slat_left_2_destroyed_unhide,0},
            {slat_left_2_firegeo_hide,0},
            {slat_left_3_normal_hide,0},
            {slat_left_3_damage_unhide,0},
            {slat_left_3_damage_hide,0},
            {slat_left_3_destroyed_unhide,0},
            {slat_left_3_firegeo_hide,0},
            {slat_right_1_normal_hide,0},
            {slat_right_1_damage_unhide,0},
            {slat_right_1_damage_hide,0},
            {slat_right_1_destroyed_unhide,0},
            {slat_right_1_firegeo_hide,0},
            {slat_right_2_normal_hide,0},
            {slat_right_2_damage_unhide,0},
            {slat_right_2_damage_hide,0},
            {slat_right_2_destroyed_unhide,0},
            {slat_right_2_firegeo_hide,0},
            {slat_right_3_normal_hide,0},
            {slat_right_3_damage_unhide,0},
            {slat_right_3_damage_hide,0},
            {slat_right_3_destroyed_unhide,0},
            {slat_right_3_firegeo_hide,0},
            {zasleh_rot,517},
            {zasleh2_rot,4231.52},
            {zasleh_hide,0},
            {hidetitan_1,1},
            {hidetitan_2,1},
            {reloadtitan_1,0},
            {reloadtitan_2,0},
            {missile_move_1,1},
            {missile_move_2,0},
            {turret_control_x,0},
            {turret_control_y,0},
            {com_turret_control_x,0},
            {com_turret_control_y,0},
            {hatchcommander,0},
            {hatchgunner,0}
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
		verticalOffset = 2.395;
		verticalOffsetWorld = -0.178;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_APC_Tracked_02_cannon_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_A_F;
	crew = O_A_crew_F;
	typicalCargo[] = {O_A_soldier_F};
	textureList[] = {Hex,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Armor_F_Beta\APC_Tracked_02\Data\APC_Tracked_02_ext_01_hexarid_CO.paa",
		"\A3\Armor_F_Beta\APC_Tracked_02\Data\APC_Tracked_02_ext_02_hexarid_CO.paa",
		"\A3\Armor_F_Beta\APC_Tracked_02\Data\RCWS30_OPFOR_CO.paa",
		"\A3\Armor_F\Data\camonet_CSAT_Hex_Desert_CO.paa",
		"\A3\Armor_F\Data\cage_CSAT_CO.paa"
	};

    /* Inventory */
	class TransportWeapons
	{
		weap_xx(arifle_CTAR_blk_F,2);
		weap_xx(arifle_CTARS_blk_F,1);
		weap_xx(launch_RPG32_F,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_580x42_Mag_F,12);
		mag_xx(100Rnd_580x42_Mag_F,8);
		mag_xx(HandGrenade_Guer,6);
		mag_xx(MiniGrenade,6);
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellRed,8);
		mag_xx(SmokeShellYellow,8);
		mag_xx(SmokeShellOrange,8);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeYellow_Grenade_shell,3);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
		mag_xx(1Rnd_SmokeRed_Grenade_shell,3);
		mag_xx(RPG32_F,5);
		mag_xx(RPG32_HE_F,2);
		mag_xx(Titan_AT,2);
		mag_xx(Titan_AA,2);
	};
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_ocamo,2);
	};
};