/* US */
class B_MBT_01_base_F: MBT_01_base_F
{
    class TextureSources;
};
class B_MBT_01_cannon_F: B_MBT_01_base_F
{
    animationList[] =
    {
        showCamonetCannon,0,
        showCamonetPlates1,0,
        showCamonetPlates2,0,
        showCamonetTurret,0,
        showCamonetHull,0,
        showBags,0.67
    };
    class TextureSources: TextureSources
    {
        class WDL_01
        {
            displayName = $STR_A3_A_TEXTURESOURCES_WOODLAND0;
            factions[] = {};
            textures[] = 
            {
                "\A3_Aegis\Armor_F_Aegis\MBT_01\Data\MBT_01_body_wdl_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\MBT_01\Data\MBT_01_tow_wdl_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
            };
        };
    };
};
class B_MBT_01_arty_base_F: MBT_01_arty_base_F
{
    class TextureSources;
};
class B_MBT_01_arty_F: B_MBT_01_arty_base_F
{
    hiddenSelectionsTextures[] =
    {
        "\A3\Armor_F_Gamma\MBT_01\Data\MBT_01_body_CO.paa",
        "\A3\Armor_F_Gamma\MBT_01\Data\MBT_01_scorcher_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_CO.paa",
        "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
    };
    class TextureSources: TextureSources
    {
        class WDL_01
        {
            displayName = $STR_A3_A_TEXTURESOURCES_WOODLAND0;
            factions[] = {};
            textures[] = 
            {
                "\A3_Aegis\Armor_F_Aegis\MBT_01\Data\MBT_01_body_wdl_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\MBT_01\Data\MBT_01_scorcher_wdl_CO.paa",
                "\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
            };
        };
    };
};
class B_MBT_01_mlrs_base_F: MBT_01_mlrs_base_F
{
    class TextureSources;
};
class B_MBT_01_mlrs_F: B_MBT_01_mlrs_base_F
{
    class TextureSources: TextureSources
    {
        class WDL_01
        {
            displayName = $STR_A3_A_TEXTURESOURCES_WOODLAND0;
            factions[] = {};
            textures[] = 
            {
                "\A3_Aegis\Armor_F_Aegis\MBT_01\Data\MBT_01_body_wdl_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\MBT_01\Data\MBT_01_MLRS_wdl_co.paa",
                "\A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
            };
        };
    };
};
class B_MBT_01_TUSK_F: B_MBT_01_cannon_F
{
    /* Turrets */
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            class Turrets: Turrets
            {
                class CommanderOptics: CommanderOptics
                {
                    /* Weapons & Ammunition */
                    weapons[] =
                    {
                        HMG_127_MBT,
                        SmokeLauncher,
                        Laserdesignator_mounted
                    };
                    magazines[] =
                    {
                        mag_2(200Rnd_127x99_mag_Tracer_Red),
                        SmokeLauncherMag,
                        Laserbatteries
                    };
                };
            };
            /* Weapons & Ammunition */
			weapons[] = {"cannon_120mm","MMG_02_coax"};
			magazines[] =
			{
				24Rnd_120mm_APFSDS_shells_Tracer_Red,
				12Rnd_120mm_HE_shells_Tracer_Red,
				12Rnd_120mm_HEAT_MP_T_Red,
				mag_20(200Rnd_338_Mag),
				4Rnd_120mm_LG_cannon_missiles
			};
        };
    };
    class TextureSources: TextureSources
    {
        class WDL_01
        {
            displayName = $STR_A3_A_TEXTURESOURCES_WOODLAND0;
            factions[] = {};
            textures[] = 
            {
                "\A3_Aegis\Armor_F_Aegis\MBT_01\Data\MBT_01_body_wdl_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\MBT_01\Data\MBT_01_tow_wdl_CO.paa",
                "\A3\Armor_F_Exp\MBT_01\Data\MBT_addons_olive_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
            };
        };
    };

};
/* US (Pacific) */
class B_T_MBT_01_arty_F: B_MBT_01_arty_F
{
    /* Inventory */
    class TransportBackpacks
    {
        bag_xx(B_AssaultPack_tna_F,2);
    };
};
class B_T_MBT_01_mlrs_F: B_MBT_01_mlrs_F
{
    /* Inventory */
    class TransportBackpacks
    {
        bag_xx(B_AssaultPack_tna_F,2);
    };
};
class B_T_MBT_01_cannon_F: B_MBT_01_cannon_F
{
    /* Inventory */
    class TransportBackpacks
    {
        bag_xx(B_AssaultPack_tna_F,2);
    };
};
class B_T_MBT_01_TUSK_F: B_MBT_01_TUSK_F
{
    /* Inventory */
    class TransportBackpacks
    {
        bag_xx(B_AssaultPack_tna_F,2);
    };
};

/* US (Woodland) */
class B_W_MBT_01_arty_F: B_MBT_01_arty_F
{
	author = $STR_A3_A_BranFlakes;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {damagehide,0},
            {wheel_koll1,0.02},
            {wheel_kolol1,0.02},
            {wheel_podkolol1,0.45},
            {wheel_kolp1,0.02},
            {wheel_kolop1,0.02},
            {wheel_podkolop1,0.45},
            {wheel_koll2,0.02},
            {wheel_kolp2,0.02},
            {wheel_kolol2,0.02},
            {wheel_kolol3,0.02},
            {wheel_kolol4,0.02},
            {wheel_kolol5,0.02},
            {wheel_kolol6,0.02},
            {wheel_kolop2,0.02},
            {wheel_kolop3,0.02},
            {wheel_kolop4,0.02},
            {wheel_kolop5,0.02},
            {wheel_kolop6,0.02},
            {wheel_podkolol2,0.51},
            {wheel_podkolol3,0.58},
            {wheel_podkolol4,0.64},
            {wheel_podkolol5,0.72},
            {wheel_podkolol6,0.77},
            {wheel_podkolop2,0.51},
            {wheel_podkolop3,0.59},
            {wheel_podkolop4,0.65},
            {wheel_podkolop5,0.72},
            {wheel_podkolop6,0.77},
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
            {maingun,0.17},
            {hatchcommander,0},
            {recoil,0},
            {obsturret,0},
            {obsgun,0},
            {maingunint,0.17},
            {damagevezvelitele,0},
            {poklop_commander_damage,0},
            {poklop_driver_damage,0},
            {hatchdriver,0},
            {plates_1_y,0},
            {plates_2_y,0},
            {plates_1_x,0},
            {plates_2_x,0},
            {plates_1_bank,0},
            {plates_2_bank,0},
            {drivingwheel,0},
            {indicatorspeed_mfd_driver,0},
            {indicatorrpm,0},
            {indicatorrpm_mfd_driver,0},
            {lights_driver,0},
            {lights_driver_off,0},
            {lights_turret,0},
            {dmg_com_halo_unhide,0},
            {engine_damage_indicator,0},
            {main_gun_damage_indicator,0},
            {track_damage_indicator,0},
            {pedal_thrust,0},
            {pedal_brake,1},
            {indicatortempwater_mfd_driver,0},
            {indicatorfuel_mfd_driver,1},
            {indicator_hull_direction_mfd_driver,0},
            {indicator_main_turret_mfd_driver,0},
            {indicator_hull_direction_mfd_com,0},
            {indicator_main_turret_onscreen_com,0},
            {indicator_com_turret_mfd_com,0},
            {indicator_com_turret_counter_mfd_com,0},
            {indicator_hull_direction_mfd_gunner,0},
            {indicator_main_turret_mfd_gunner,0},
            {indicator_com_smoke_1,1},
            {indicator_com_smoke_2,1},
            {indicator_damage_engine,0},
            {indicator_damage_fuel,0},
            {indicator_damage_tracks,0},
            {indicator_turret_damage_hull,0},
            {lights_turret2,0},
            {indicator_turret_damage_engine,0},
            {indicator_turret_damage_fuel,0},
            {indicator_turret_damage_main_gun,0},
            {indicator_turret_damage_track,0},
            {indicator_turret_damage_turret,0},
            {indicator_turret_damage_comturret,0},
            {hide_mfd_and_pip_screen_driver,1},
            {hide_mfd_elements,1},
            {maingunoptics,0.17},
            {cannon_ready_light,0},
            {zaslehrot_hmg,968},
            {artillery_muzzle_flash,0},
            {gmg_muzzle_flash,0},
            {zaslehrot_gmg,563},
            {indicator_com_turret_mfd_gunner,0},
            {indicator_com_turret_counter_mfd_gunner,0},
            {indicator_com_turret_mfd_driver,0},
            {indicator_com_turret_counter_mfd_driver,0},
            {turret_control_x,0},
            {turret_control_y,0},
            {com_turret_control_x,0},
            {com_turret_control_y,0},
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
            zasleh2,
            light_l,
            light_r,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.884;
		verticalOffsetWorld = -0.199;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_MBT_01_arty_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Crew_F;
	typicalCargo[] = {B_W_Soldier_F};

    /* Inventory */
	class TransportWeapons
	{
		weap_xx(arifle_MXC_Black_F,2);
	};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_black_mag,4);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_wdl_F,2);
	};
    textureList[] = {WDL_01,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Armor_F_Aegis\MBT_01\Data\MBT_01_body_wdl_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\MBT_01\Data\MBT_01_scorcher_wdl_CO.paa",
		"\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
	};
    class TextureSources
    {
        class WDL_01
        {
            displayName = $STR_A3_A_TEXTURESOURCES_WOODLAND0;
            factions[] = {};
            textures[] = 
            {
                "\A3_Aegis\Armor_F_Aegis\MBT_01\Data\MBT_01_body_wdl_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\MBT_01\Data\MBT_01_scorcher_wdl_CO.paa",
                "\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
            };
        };
    };
};
class B_W_MBT_01_mlrs_F: B_MBT_01_mlrs_F
{
	author = $STR_A3_A_BranFlakes;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {damagehide,0},
            {wheel_koll1,0.02},
            {wheel_kolol1,0.02},
            {wheel_podkolol1,0.47},
            {wheel_kolp1,0.02},
            {wheel_kolop1,0.02},
            {wheel_podkolop1,0.47},
            {wheel_koll2,0.02},
            {wheel_kolp2,0.02},
            {wheel_kolol2,0.02},
            {wheel_kolol3,0.02},
            {wheel_kolol4,0.02},
            {wheel_kolol5,0.02},
            {wheel_kolol6,0.02},
            {wheel_kolop2,0.02},
            {wheel_kolop3,0.02},
            {wheel_kolop4,0.02},
            {wheel_kolop5,0.02},
            {wheel_kolop6,0.02},
            {wheel_podkolol2,0.52},
            {wheel_podkolol3,0.58},
            {wheel_podkolol4,0.63},
            {wheel_podkolol5,0.71},
            {wheel_podkolol6,0.75},
            {wheel_podkolop2,0.51},
            {wheel_podkolop3,0.57},
            {wheel_podkolop4,0.64},
            {wheel_podkolop5,0.69},
            {wheel_podkolop6,0.74},
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
            {maingun,0.17},
            {maingunint,0.17},
            {damagevezvelitele,0},
            {poklop_commander_damage,0},
            {poklop_driver_damage,0},
            {hatchdriver,0},
            {plates_1_y,0},
            {plates_2_y,0},
            {plates_1_x,0},
            {plates_2_x,0},
            {plates_1_bank,0},
            {plates_2_bank,0},
            {drivingwheel,0},
            {indicatorspeed_mfd_driver,0},
            {indicatorrpm,0},
            {indicatorrpm_mfd_driver,0},
            {lights_driver,0},
            {lights_driver_off,0},
            {lights_turret,0},
            {dmg_com_halo_unhide,0},
            {engine_damage_indicator,0},
            {main_gun_damage_indicator,0},
            {track_damage_indicator,0},
            {pedal_thrust,0},
            {pedal_brake,1},
            {indicatortempwater_mfd_driver,0},
            {indicatorfuel_mfd_driver,1},
            {indicator_hull_direction_mfd_driver,0},
            {indicator_main_turret_mfd_driver,0},
            {indicator_hull_direction_mfd_gunner,0},
            {indicator_main_turret_mfd_gunner,0},
            {indicator_com_smoke_1,1},
            {indicator_com_smoke_2,1},
            {indicator_damage_engine,0},
            {indicator_damage_fuel,0},
            {indicator_damage_tracks,0},
            {indicator_turret_damage_hull,0},
            {lights_turret2,0},
            {indicator_turret_damage_engine,0},
            {indicator_turret_damage_fuel,0},
            {indicator_turret_damage_main_gun,0},
            {indicator_turret_damage_track,0},
            {indicator_turret_damage_turret,0},
            {hide_mfd_and_pip_screen_driver,1},
            {elevator,0.17},
            {elevator_piston,0.17},
            {maingunoptics,0.17},
            {maingunoptics_stabilization,0.17},
            {cannon_ready_light,0},
            {turret_control_x,0},
            {turret_control_y,0},
            {ammo_status_slider_translation,1},
            {missiles_ready_light,0},
            {hidemlrs_1,1},
            {hidemlrs_2,1},
            {hidemlrs_3,1},
            {hidemlrs_4,1},
            {hidemlrs_5,1},
            {hidemlrs_6,1},
            {hidemlrs_7,1},
            {hidemlrs_8,1},
            {hidemlrs_9,1},
            {hidemlrs_10,1},
            {hidemlrs_11,1},
            {hidemlrs_12,1},
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
            light_l,
            light_r,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 1.804;
		verticalOffsetWorld = -0.211;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_MBT_01_mlrs_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Crew_F;
	typicalCargo[] = {B_W_Soldier_F};

    /* Inventory */
	class TransportWeapons
	{
		weap_xx(arifle_MXC_Black_F,2);
	};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_black_mag,4);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Toolkit,1);
		item_xx(Medikit,1);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_wdl_F,2);
	};
    textureList[] = {WDL_01,1};

	hiddenSelectionsTextures[]=
	{
		"\A3_Aegis\Armor_F_Aegis\MBT_01\Data\MBT_01_body_wdl_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\MBT_01\Data\MBT_01_MLRS_wdl_co.paa",
		"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
	};
    class TextureSources
    {
        class WDL_01
        {
            displayName = $STR_A3_A_TEXTURESOURCES_WOODLAND0;
            factions[] = {};
            textures[] = 
            {
                "\A3_Aegis\Armor_F_Aegis\MBT_01\Data\MBT_01_body_wdl_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\MBT_01\Data\MBT_01_MLRS_wdl_co.paa",
                "\A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
            };
        };
    };
};
class B_W_MBT_01_cannon_F: B_MBT_01_cannon_F
{
	author = $STR_A3_A_BranFlakes;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {damagehide,0},
            {wheel_koll1,0.02},
            {wheel_kolol1,0.02},
            {wheel_podkolol1,0.54},
            {wheel_kolp1,0.02},
            {wheel_kolop1,0.02},
            {wheel_podkolop1,0.54},
            {wheel_koll2,0.02},
            {wheel_kolp2,0.02},
            {wheel_kolol2,0.02},
            {wheel_kolol3,0.02},
            {wheel_kolol4,0.02},
            {wheel_kolol5,0.02},
            {wheel_kolol6,0.02},
            {wheel_kolop2,0.02},
            {wheel_kolop3,0.02},
            {wheel_kolop4,0.02},
            {wheel_kolop5,0.02},
            {wheel_kolop6,0.02},
            {wheel_podkolol2,0.57},
            {wheel_podkolol3,0.6},
            {wheel_podkolol4,0.63},
            {wheel_podkolol5,0.66},
            {wheel_podkolol6,0.69},
            {wheel_podkolop2,0.56},
            {wheel_podkolop3,0.59},
            {wheel_podkolop4,0.64},
            {wheel_podkolop5,0.67},
            {wheel_podkolop6,0.68},
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
            {maingun,0.17},
            {hatchcommander,0},
            {recoil,0},
            {obsturret,0},
            {obsgun,0},
            {maingunoptics,0.17},
            {maingunint,0.17},
            {damagevezvelitele,0},
            {poklop_commander_damage,0},
            {poklop_driver_damage,0},
            {hatchdriver,0},
            {plates_1_y,0},
            {plates_2_y,0},
            {plates_1_x,0},
            {plates_2_x,0},
            {plates_1_bank,0},
            {plates_2_bank,0},
            {drivingwheel,0},
            {indicatorspeed_mfd_driver,0},
            {indicatorrpm,0},
            {indicatorrpm_mfd_driver,0},
            {lights_driver,0},
            {lights_driver_off,0},
            {lights_turret,0},
            {dmg_com_halo_unhide,0},
            {engine_damage_indicator,0},
            {main_gun_damage_indicator,0},
            {track_damage_indicator,0},
            {pedal_thrust,0},
            {pedal_brake,1},
            {indicatortempwater_mfd_driver,0},
            {indicatorfuel_mfd_driver,1},
            {indicator_hull_direction_mfd_driver,0},
            {indicator_main_turret_mfd_driver,0},
            {indicator_hull_direction_mfd_com,0},
            {indicator_main_turret_mfd_com,0},
            {indicator_main_turret_onscreen_com,0},
            {indicator_com_turret_mfd_com,0},
            {indicator_com_turret_onscreen_com,0},
            {indicator_com_turret_counter_mfd_com,0},
            {indicator_hull_direction_mfd_gunner,0},
            {indicator_main_turret_mfd_gunner,0},
            {indicator_com_smoke_1,1},
            {indicator_com_smoke_2,1},
            {indicator_damage_engine,0},
            {indicator_damage_fuel,0},
            {indicator_damage_tracks,0},
            {indicator_turret_damage_hull,0},
            {lights_turret2,0},
            {indicator_turret_damage_engine,0},
            {indicator_turret_damage_fuel,0},
            {indicator_turret_damage_main_gun,0},
            {indicator_turret_damage_track,0},
            {indicator_turret_damage_turret,0},
            {indicator_turret_damage_comturret,0},
            {hide_mfd_and_pip_screen_driver,1},
            {hide_mfd_and_pip_screen_gunner,1},
            {hide_mfd_elements,1},
            {cannon_muzzle_flash,0},
            {zaslehrot_cannon,618},
            {cannon_ready_light,0},
            {turret_control_x,0},
            {turret_control_y,0},
            {com_turret_control_x,0},
            {com_turret_control_y,0},
            {indicator_com_turret_mfd_gunner,0},
            {indicator_com_turret_counter_mfd_gunner,0},
            {indicator_com_turret_mfd_driver,0},
            {indicator_com_turret_counter_mfd_driver,0}
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
		verticalOffset = 2.465;
		verticalOffsetWorld = -0.22;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_MBT_01_cannon_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Crew_F;
	typicalCargo[] = {B_W_Soldier_F};

    /* Inventory */
	class TransportWeapons
	{
		weap_xx(arifle_MXC_Black_F,2);
	};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_black_mag,4);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_wdl_F,2);
	};
    textureList[] = {WDL_01,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Armor_F_Aegis\MBT_01\Data\MBT_01_body_wdl_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\MBT_01\Data\MBT_01_tow_wdl_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
	};
    class TextureSources
    {
        class WDL_01
        {
            displayName = $STR_A3_A_TEXTURESOURCES_WOODLAND0;
            factions[] = {};
            textures[] = 
            {
                "\A3_Aegis\Armor_F_Aegis\MBT_01\Data\MBT_01_body_wdl_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\MBT_01\Data\MBT_01_tow_wdl_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
            };
        };
    };
};
class B_W_MBT_01_TUSK_F: B_MBT_01_TUSK_F
{
	author = $STR_A3_A_BranFlakes;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {damagehide,0},
            {wheel_koll1,0.02},
            {wheel_kolol1,0.02},
            {wheel_podkolol1,0.55},
            {wheel_kolp1,0.02},
            {wheel_kolop1,0.02},
            {wheel_podkolop1,0.54},
            {wheel_koll2,0.02},
            {wheel_kolp2,0.02},
            {wheel_kolol2,0.02},
            {wheel_kolol3,0.02},
            {wheel_kolol4,0.02},
            {wheel_kolol5,0.02},
            {wheel_kolol6,0.02},
            {wheel_kolop2,0.02},
            {wheel_kolop3,0.02},
            {wheel_kolop4,0.02},
            {wheel_kolop5,0.02},
            {wheel_kolop6,0.02},
            {wheel_podkolol2,0.58},
            {wheel_podkolol3,0.61},
            {wheel_podkolol4,0.64},
            {wheel_podkolol5,0.68},
            {wheel_podkolol6,0.7},
            {wheel_podkolop2,0.57},
            {wheel_podkolop3,0.6},
            {wheel_podkolop4,0.65},
            {wheel_podkolop5,0.68},
            {wheel_podkolop6,0.7},
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
            {maingun,0.17},
            {hatchcommander,0},
            {recoil,0},
            {obsturret,0},
            {obsgun,0},
            {maingunoptics,0.17},
            {maingunint,0.17},
            {damagevezvelitele,0},
            {poklop_commander_damage,0},
            {poklop_driver_damage,0},
            {hatchdriver,0},
            {plates_1_y,-0.01},
            {plates_2_y,-0.01},
            {plates_1_x,0},
            {plates_2_x,0},
            {plates_1_bank,0},
            {plates_2_bank,0},
            {drivingwheel,0},
            {indicatorspeed_mfd_driver,0},
            {indicatorrpm,0},
            {indicatorrpm_mfd_driver,0},
            {lights_driver,0},
            {lights_driver_off,0},
            {lights_turret,0},
            {dmg_com_halo_unhide,0},
            {cannon_ready_light,0},
            {engine_damage_indicator,0},
            {main_gun_damage_indicator,0},
            {track_damage_indicator,0},
            {pedal_thrust,0},
            {pedal_brake,1},
            {indicatortempwater_mfd_driver,0},
            {indicatorfuel_mfd_driver,1},
            {indicator_hull_direction_mfd_driver,0},
            {indicator_main_turret_mfd_driver,0},
            {indicator_com_turret_mfd_driver,0},
            {indicator_com_turret_counter_mfd_driver,0},
            {indicator_hull_direction_mfd_com,0},
            {indicator_main_turret_mfd_com,0},
            {indicator_main_turret_onscreen_com,0},
            {indicator_com_turret_mfd_com,0},
            {indicator_com_turret_onscreen_com,0},
            {indicator_com_turret_counter_mfd_com,0},
            {indicator_hull_direction_mfd_gunner,0},
            {indicator_main_turret_mfd_gunner,0},
            {indicator_com_turret_mfd_gunner,0},
            {indicator_com_turret_counter_mfd_gunner,0},
            {indicator_com_smoke_1,1},
            {indicator_com_smoke_2,1},
            {indicator_damage_engine,0},
            {indicator_damage_fuel,0},
            {indicator_damage_tracks,0},
            {indicator_turret_damage_hull,0},
            {lights_turret2,0},
            {indicator_turret_damage_engine,0},
            {indicator_turret_damage_fuel,0},
            {indicator_turret_damage_main_gun,0},
            {indicator_turret_damage_track,0},
            {indicator_turret_damage_turret,0},
            {indicator_turret_damage_comturret,0},
            {hide_mfd_and_pip_screen_driver,1},
            {hide_mfd_and_pip_screen_gunner,1},
            {hide_mfd_elements,1},
            {turret_control_x,0},
            {turret_control_y,0},
            {com_turret_control_x,0},
            {com_turret_control_y,0},
            {zaslehrot,0},
            {cannon_muzzle_flash,0},
            {zaslehrot_cannon,583},
            {commander_muzzleflash_rot,545},
            {commander_gun_recoil,0},
            {commander_gun_belt_1,0},
            {commander_gun_belt_2,0},
            {commander_gun_belt_3,0},
            {damage_era_front_hide,0},
            {damage_camonet_front_hide,0},
            {damage_era_left_1a_hide,0},
            {damage_era_left_1b_hide,0},
            {damage_camonet_left_1a_hide,0},
            {damage_camonet_left_1b_hide,0},
            {damage_era_left_2a_hide,0},
            {damage_era_left_2b_hide,0},
            {damage_camonet_left_2a_hide,0},
            {damage_camonet_left_2b_hide,0},
            {damage_era_left_3a_hide,0},
            {damage_era_left_3b_hide,0},
            {damage_camonet_left_3a_hide,0},
            {damage_camonet_left_3b_hide,0},
            {damage_era_left_4_hide,0},
            {damage_camonet_left_4_hide,0},
            {damage_era_right_1_hide,0},
            {damage_camonet_right_1_hide,0},
            {damage_era_right_2a_hide,0},
            {damage_era_right_2b_hide,0},
            {damage_camonet_right_2a_hide,0},
            {damage_camonet_right_2b_hide,0},
            {damage_era_right_3a_hide,0},
            {damage_era_right_3b_hide,0},
            {damage_camonet_right_3a_hide,0},
            {damage_camonet_right_3b_hide,0},
            {damage_era_right_4_hide,0},
            {damage_camonet_right_4_hide,0},
            {damage_era_top_front_hide,0},
            {damage_camonet_top_front_hide,0},
            {damage_era_top_left_hide,0},
            {damage_camonet_top_left_hide,0},
            {damage_era_top_right_hide,0},
            {damage_camonet_top_right_hide,0}
        };
		hide[] = 
        {
            clan,
            zasleh,
            commander_muzzleflash,
            light_l,
            light_r,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.503;
		verticalOffsetWorld = -0.224;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_MBT_01_TUSK_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Crew_F;
	typicalCargo[] = {B_W_Soldier_F};

    /* Inventory */
	class TransportWeapons
	{
		weap_xx(arifle_MXC_Black_F,2);
	};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_black_mag,4);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_wdl_F,2);
	};
    textureList[] = {WDL_01,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Armor_F_Aegis\MBT_01\Data\MBT_01_body_wdl_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\MBT_01\Data\MBT_01_tow_wdl_CO.paa",
		"\A3\Armor_F_Exp\MBT_01\Data\MBT_addons_olive_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
	};
};

/* US (Desert) */
class B_D_MBT_01_cannon_lxWS : B_MBT_01_cannon_F
{
    class TransportBackpacks
	{
		bag_xx(B_AssaultPack_desert_lxWS,2);
	};
};

class B_D_MBT_01_TUSK_lxWS : B_MBT_01_TUSK_F
{
    class TransportBackpacks
	{
		bag_xx(B_AssaultPack_desert_lxWS,2);
	};
};

class B_D_MBT_01_arty_lxWS : B_MBT_01_arty_F
{
    class TransportBackpacks
	{
		bag_xx(B_AssaultPack_desert_lxWS,2);
	};
};  

class B_D_MBT_01_mlrs_lxWS : B_MBT_01_mlrs_F
{
    class TransportBackpacks
	{
		bag_xx(B_AssaultPack_desert_lxWS,2);
	};
};  
