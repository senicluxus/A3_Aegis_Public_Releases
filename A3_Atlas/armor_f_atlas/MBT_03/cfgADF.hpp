/* ADF */
class Atlas_B_A_MBT_03_base_F: MBT_03_base_F
{
	author = $STR_A3_A_BranFlakes;
	crew = Atlas_B_A_Crew_F;
	typicalCargo[] = {Atlas_B_A_Soldier_F};
	displayName = $STR_A3_A_CfgVehicles_B_A_MBT_03_cannon_F0;
	side = TWest;
	faction = Atlas_BLU_A_F;
	animationList[] =
    {
        HideTurret,1,
        HideHull,1,
        showCamonetHull,0,
        showCamonetTurret,0,
        showCamonetCannon,0,
        showCamonetCannon1,0
    };
};
class Atlas_B_A_MBT_03_cannon_F: Atlas_B_A_MBT_03_base_F
{
	author = $STR_A3_A_BranFlakes;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
			{damagehide,0},
			{wheel_koll1,0.01},
			{wheel_kolol1,0.01},
			{wheel_podkolol1,0.5},
			{wheel_kolp1,0.01},
			{wheel_kolop1,0.01},
			{wheel_podkolop1,0.51},
			{wheel_koll2,0.01},
			{wheel_kolp2,0.01},
			{wheel_kolol2,0.01},
			{wheel_kolol3,0.01},
			{wheel_kolol4,0.01},
			{wheel_kolol5,0.01},
			{wheel_kolol6,0.01},
			{wheel_kolol7,0.01},
			{wheel_kolop2,0.01},
			{wheel_kolop3,0.01},
			{wheel_kolop4,0.01},
			{wheel_kolop5,0.01},
			{wheel_kolop6,0.01},
			{wheel_kolop7,0.01},
			{wheel_podkolol2,0.51},
			{wheel_podkolol3,0.52},
			{wheel_podkolol4,0.53},
			{wheel_podkolol5,0.54},
			{wheel_podkolol6,0.55},
			{wheel_podkolop2,0.51},
			{wheel_podkolop3,0.52},
			{wheel_podkolop4,0.55},
			{wheel_podkolop5,0.55},
			{wheel_podkolop6,0.55},
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
			{recoil,0},
			{obsturret,0},
			{obsgun,0},
			{maingunoptics,0.17},
			{wheel_podkolop7,0.56},
			{wheel_podkolol7,0.56},
			{hatchdriver,0},
			{hatchcommander,0},
			{hatchgunner,0},
			{damagevezvelitele,0},
			{poklop_commander_damage,0},
			{poklop_gunner_damage,0},
			{poklop_driver_damage,0},
			{zaslehrot_hmg,816},
			{zaslehrot_coax,1843.27},
			{cannon_muzzle_flash,0},
			{zaslehrot_cannon,828},
			{drivingwheel,0},
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
			{indicator_damage_tracks,0},
			{indicator_turret_damage_hull,0},
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
			{slat_back_normal_hide,0},
			{slat_back_damage_unhide,0},
			{slat_back_damage_hide,0},
			{slat_back_destroyed_unhide,0},
			{slat_back_firegeo_hide,0},
			{slat_right_normal_hide,0},
			{slat_right_damage_unhide,0},
			{slat_right_damage_hide,0},
			{slat_right_destroyed_unhide,0},
			{slat_right_firegeo_hide,0},
			{slat_left_normal_hide,0},
			{slat_left_damage_unhide,0},
			{slat_left_damage_hide,0},
			{slat_left_destroyed_unhide,0},
			{slat_left_firegeo_hide,0},
			{slat_left_plate_normal_hide,0},
			{slat_left_plate_damage_unhide,0},
			{slat_left_plate_damage_hide,0},
			{slat_right_plate_normal_hide,0},
			{slat_right_plate_damage_unhide,0},
			{slat_right_plate_damage_hide,0},
			{slat_back_plate_normal_hide,0},
			{slat_back_plate_damage_unhide,0},
			{slat_back_plate_damage_hide,0},
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
			{slat_top_left_firegeo_hide,0},
			{slat_top_left_plate_normal_hide,0},
			{slat_top_left_plate_damage_unhide,0},
			{slat_top_left_plate_damage_hide,0},
			{slat_top_right_plate_normal_hide,0},
			{slat_top_right_plate_damage_unhide,0},
			{slat_top_right_plate_damage_hide,0},
			{slat_top_back_plate_normal_hide,0},
			{slat_top_back_plate_damage_unhide,0},
			{slat_top_back_plate_damage_hide,0},
			{com_pos_adjust_to_center,0}
		};
		hide[] =
		{
			clan,
			zasleh,
			zasleh2,
			light_l,
			light_r,
			"zadni svetlo",
			"brzdove svetlo",
			"podsvit pristroju",
			poskozeni
		};
		verticalOffset = 2.558;
		verticalOffsetWorld = -0.171;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_MBT_03_cannon_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_B_A_MBT_03_cannon_F0;
	textureList[] = {ADF_01,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext01_ADF_CO.paa",
		"\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext02_ADF_CO.paa",
		"\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_rcws_ADF_CO.paa",
		"\A3\Armor_f\Data\camonet_CSAT_Stripe_Desert_CO.paa"
	};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_AUG_Mag_F,6);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AUG_F,2);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_aucamo_F,2);
	};
};

/* ADF Arid */
class Atlas_B_A_MBT_03_cannon_ard_F: Atlas_B_A_MBT_03_cannon_F
{
	faction = Atlas_BLU_A_ard_F;
	crew = Atlas_B_A_Crew_ard_F;
	typicalCargo[] = {Atlas_B_A_Soldier_ard_F};
};

/* ADF Tropic */
class Atlas_B_A_MBT_03_cannon_trp_F: Atlas_B_A_MBT_03_cannon_F
{
	faction = Atlas_BLU_A_trp_F;
	crew = Atlas_B_A_Crew_trp_F;
	typicalCargo[] = {Atlas_B_A_Soldier_trp_F};
};
