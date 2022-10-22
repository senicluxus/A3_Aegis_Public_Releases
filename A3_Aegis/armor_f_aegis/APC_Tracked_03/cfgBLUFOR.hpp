/* BAF */
class B_A_APC_tracked_03_cannon_v2_F: APC_Tracked_03_base_v2_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
			{damagehide,0},
			{wheel_podkolol1,0},
			{wheel_podkolop1,0},
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
			{maingun,0.17},
			{hatchdriver,0},
			{hatchcommander,0},
			{hatchgunner,0},
			{reverse_light,1},
			{obsturret,0},
			{obsgun,0},
			{wheel_koll1,0},
			{wheel_kolol1,0},
			{wheel_kolp1,0},
			{wheel_kolop1,0},
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
			{pedal_brake,0},
			{turret_control_x,0},
			{turret_control_y,0},
			{com_turret_control_x,0},
			{com_turret_control_y,0},
			{zasleh_rot,684},
			{zasleh2_rot,2628.95},
			{zasleh_hide,0},
			{maingunoptics,0.17},
			{driver_reverse_cam,1},
			{driver_hide_mfd,1},
			{indicatortempwater_mfd_driver,0},
			{indicatorfuel_mfd_driver,1},
			{indicator_hull_direction_mfd_driver,0},
			{indicator_main_turret_mfd_driver,0},
			{indicator_com_turret_mfd_driver,0},
			{indicator_com_turret_counter_mfd_driver,0},
			{indicator_hull_direction_mfd_com,0},
			{indicator_main_turret_onscreen_com,0},
			{indicator_main_turret_mfd_com,0},
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
			{indicator_damage_track,0},
			{indicator_turret_damage_hull,0},
			{indicator_turret_damage_engine,0},
			{indicator_turret_damage_fuel,0},
			{indicator_turret_damage_main_gun,0},
			{indicator_turret_damage_tracks,0},
			{indicator_turret_damage_turret,0},
			{indicator_turret_damage_com_turret,0},
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
			{com_and_gun_turret_indicator_6_hide_from_right,0},
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
			{slat_top_back_normal_hide,0},
			{slat_top_back_damage_unhide,0},
			{slat_top_back_damage_hide,0},
			{slat_top_back_destroyed_unhide,0},
			{slat_top_back_firegeo_hide,0},
			{slat_top_right_normal_hide,0},
			{slat_top_right_damage_unhide,0},
			{slat_top_right_damage_hide,0},
			{slat_top_right_destroyed_unhide,0},
			{slat_top_right_firegeo_hide,0},
			{slat_top_left_normal_hide,0},
			{slat_top_left_damage_unhide,0},
			{slat_top_left_damage_hide,0},
			{slat_top_left_destroyed_unhide,0},
			{slat_top_left_firegeo_hide,0}
		};
		hide[] =
		{
			zasleh2,
			zasleh_1,
			light_l,
			light_r,
			"zadni svetlo",
			"brzdove svetlo",
			clan,
			"podsvit pristroju",
			poskozeni
		};
		verticalOffset = 2.305;
		verticalOffsetWorld = -0.206;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_APC_tracked_03_cannon_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_B_A_APC_tracked_03_cannon_F0;
	side = TWest;
	faction = BLU_A_F;
	crew = B_A_crew_F;
	typicalCargo[] = {B_A_Soldier_F};
	textureList[] = {Sand_01,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Armor_F_Aegis\APC_Tracked_03\Data\APC_Tracked_03_Ext_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\APC_Tracked_03\Data\APC_Tracked_03_Ext2_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
		"\A3\Armor_F\Data\cage_sand_CO.paa"
	};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_mag,12);
		mag_xx(200Rnd_65x39_cased_Box_Red,6);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
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
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Toolkit,1);
		item_xx(Medikit,1);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_snd_F,2);
		weap_xx(LMG_Mk200_plain_F,1);
		weap_xx(launch_NLAW_F,1);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_mcamo,2);
	};

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
                mag_2(120Rnd_40mm_GPR_Tracer_Red_shells),
                mag_2(80Rnd_40mm_APFSDS_Tracer_Red_shells),
                mag_10(200Rnd_762x51_Belt_Red)
            };
		};
	};
};

/* BAF (Pacific) */
class B_A_APC_tracked_03_cannon_v2_tna_F: B_A_APC_tracked_03_cannon_v2_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
			{damagehide,0},
			{wheel_podkolol1,0},
			{wheel_podkolop1,0},
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
			{maingun,0.17},
			{hatchdriver,0},
			{hatchcommander,0},
			{hatchgunner,0},
			{reverse_light,1},
			{obsturret,0},
			{obsgun,0},
			{wheel_koll1,0},
			{wheel_kolol1,0},
			{wheel_kolp1,0},
			{wheel_kolop1,0},
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
			{pedal_brake,0},
			{turret_control_x,0},
			{turret_control_y,0},
			{com_turret_control_x,0},
			{com_turret_control_y,0},
			{zasleh_rot,684},
			{zasleh2_rot,2628.95},
			{zasleh_hide,0},
			{maingunoptics,0.17},
			{driver_reverse_cam,1},
			{driver_hide_mfd,1},
			{indicatortempwater_mfd_driver,0},
			{indicatorfuel_mfd_driver,1},
			{indicator_hull_direction_mfd_driver,0},
			{indicator_main_turret_mfd_driver,0},
			{indicator_com_turret_mfd_driver,0},
			{indicator_com_turret_counter_mfd_driver,0},
			{indicator_hull_direction_mfd_com,0},
			{indicator_main_turret_onscreen_com,0},
			{indicator_main_turret_mfd_com,0},
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
			{indicator_damage_track,0},
			{indicator_turret_damage_hull,0},
			{indicator_turret_damage_engine,0},
			{indicator_turret_damage_fuel,0},
			{indicator_turret_damage_main_gun,0},
			{indicator_turret_damage_tracks,0},
			{indicator_turret_damage_turret,0},
			{indicator_turret_damage_com_turret,0},
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
			{com_and_gun_turret_indicator_6_hide_from_right,0},
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
			{slat_top_back_normal_hide,0},
			{slat_top_back_damage_unhide,0},
			{slat_top_back_damage_hide,0},
			{slat_top_back_destroyed_unhide,0},
			{slat_top_back_firegeo_hide,0},
			{slat_top_right_normal_hide,0},
			{slat_top_right_damage_unhide,0},
			{slat_top_right_damage_hide,0},
			{slat_top_right_destroyed_unhide,0},
			{slat_top_right_firegeo_hide,0},
			{slat_top_left_normal_hide,0},
			{slat_top_left_damage_unhide,0},
			{slat_top_left_damage_hide,0},
			{slat_top_left_destroyed_unhide,0},
			{slat_top_left_firegeo_hide,0}
		};
		hide[] =
		{
			zasleh2,
			zasleh_1,
			light_l,
			light_r,
			"zadni svetlo",
			"brzdove svetlo",
			clan,
			"podsvit pristroju",
			poskozeni
		};
		verticalOffset = 2.305;
		verticalOffsetWorld = -0.206;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_APC_tracked_03_cannon_tna_F.jpg";
	faction = BLU_A_tna_F;
	crew = B_A_crew_tna_F;
	typicalCargo[] = {B_A_Soldier_tna_F};
	textureList[] = {Olive_01,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Armor_F_Aegis\APC_Tracked_03\Data\APC_Tracked_03_Ext_olive_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\APC_Tracked_03\Data\APC_Tracked_03_Ext2_olive_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\Data\camonet_NATO_BAF_Green_CO.paa",
		"\A3\Armor_F\Data\cage_olive_CO.paa"
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_khaki_mag,12);
		mag_xx(200Rnd_65x39_cased_Box_Red,6);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
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
	class TransportWeapons
	{
		weap_xx(arifle_SA80_khk_F,2);
		weap_xx(LMG_Mk200_khk_F,1);
		weap_xx(launch_NLAW_F,1);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_tna_F,2);
	};
};

/* BAF (Woodland) */
class B_A_APC_tracked_03_cannon_v2_wdl_F: B_A_APC_tracked_03_cannon_v2_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
			{damagehide,0},
			{wheel_podkolol1,0},
			{wheel_podkolop1,0},
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
			{maingun,0.17},
			{hatchdriver,0},
			{hatchcommander,0},
			{hatchgunner,0},
			{reverse_light,1},
			{obsturret,0},
			{obsgun,0},
			{wheel_koll1,0},
			{wheel_kolol1,0},
			{wheel_kolp1,0},
			{wheel_kolop1,0},
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
			{pedal_brake,0},
			{turret_control_x,0},
			{turret_control_y,0},
			{com_turret_control_x,0},
			{com_turret_control_y,0},
			{zasleh_rot,684},
			{zasleh2_rot,2628.95},
			{zasleh_hide,0},
			{maingunoptics,0.17},
			{driver_reverse_cam,1},
			{driver_hide_mfd,1},
			{indicatortempwater_mfd_driver,0},
			{indicatorfuel_mfd_driver,1},
			{indicator_hull_direction_mfd_driver,0},
			{indicator_main_turret_mfd_driver,0},
			{indicator_com_turret_mfd_driver,0},
			{indicator_com_turret_counter_mfd_driver,0},
			{indicator_hull_direction_mfd_com,0},
			{indicator_main_turret_onscreen_com,0},
			{indicator_main_turret_mfd_com,0},
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
			{indicator_damage_track,0},
			{indicator_turret_damage_hull,0},
			{indicator_turret_damage_engine,0},
			{indicator_turret_damage_fuel,0},
			{indicator_turret_damage_main_gun,0},
			{indicator_turret_damage_tracks,0},
			{indicator_turret_damage_turret,0},
			{indicator_turret_damage_com_turret,0},
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
			{com_and_gun_turret_indicator_6_hide_from_right,0},
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
			{slat_top_back_normal_hide,0},
			{slat_top_back_damage_unhide,0},
			{slat_top_back_damage_hide,0},
			{slat_top_back_destroyed_unhide,0},
			{slat_top_back_firegeo_hide,0},
			{slat_top_right_normal_hide,0},
			{slat_top_right_damage_unhide,0},
			{slat_top_right_damage_hide,0},
			{slat_top_right_destroyed_unhide,0},
			{slat_top_right_firegeo_hide,0},
			{slat_top_left_normal_hide,0},
			{slat_top_left_damage_unhide,0},
			{slat_top_left_damage_hide,0},
			{slat_top_left_destroyed_unhide,0},
			{slat_top_left_firegeo_hide,0}
		};
		hide[] =
		{
			zasleh2,
			zasleh_1,
			light_l,
			light_r,
			"zadni svetlo",
			"brzdove svetlo",
			clan,
			"podsvit pristroju",
			poskozeni
		};
		verticalOffset = 2.305;
		verticalOffsetWorld = -0.206;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_APC_tracked_03_cannon_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	crew = B_A_crew_wdl_F;
	typicalCargo[] = {B_A_Soldier_wdl_F};
	textureList[] = {Olive_01,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Armor_F_Aegis\APC_Tracked_03\Data\APC_Tracked_03_Ext_olive_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\APC_Tracked_03\Data\APC_Tracked_03_Ext2_olive_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\Data\camonet_NATO_BAF_Green_CO.paa",
		"\A3\Armor_F\Data\cage_olive_CO.paa"
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,12);
		mag_xx(200Rnd_65x39_cased_Box_Red,6);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
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
	class TransportWeapons
	{
		weap_xx(arifle_SA80_blk_F,2);
		weap_xx(LMG_Mk200_black_F,1);
		weap_xx(launch_NLAW_F,1);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_wdl_F,2);
	};
};