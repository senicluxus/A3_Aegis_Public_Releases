class Atlas_B_A_APC_Wheeled_01_cannon_v2_F: APC_Wheeled_01_base_v2_F
{
	author = $STR_A3_A_BranFlakes;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
            {damagehide,0},
            {damagehidevez,0},
            {damagehidehlaven,0},
            {wheel_1_1_destruct,0},
            {wheel_1_2_destruct,0},
            {wheel_1_3_destruct,0},
            {wheel_1_4_destruct,0},
            {wheel_2_1_destruct,0},
            {wheel_2_2_destruct,0},
            {wheel_2_3_destruct,0},
            {wheel_2_4_destruct,0},
            {wheel_1_1_destruct_unhide,0},
            {wheel_1_2_destruct_unhide,0},
            {wheel_1_3_destruct_unhide,0},
            {wheel_1_4_destruct_unhide,0},
            {wheel_2_1_destruct_unhide,0},
            {wheel_2_2_destruct_unhide,0},
            {wheel_2_3_destruct_unhide,0},
            {wheel_2_4_destruct_unhide,0},
            {wheel_1_1,0},
            {wheel_2_1,0},
            {wheel_1_2,0},
            {wheel_1_3,0},
            {wheel_2_2,0},
            {wheel_2_3,0},
            {wheel_1_4,0},
            {wheel_2_4,0},
            {daylights,0},
            {wheel_1_1_damage,0},
            {wheel_1_2_damage,0},
            {wheel_1_3_damage,0},
            {wheel_1_4_damage,0},
            {wheel_2_1_damage,0},
            {wheel_2_2_damage,0},
            {wheel_2_3_damage,0},
            {wheel_2_4_damage,0},
            {wheel_1_1_damper_damage_backanim,0},
            {wheel_1_2_damper_damage_backanim,0},
            {wheel_1_3_damper_damage_backanim,0},
            {wheel_1_4_damper_damage_backanim,0},
            {wheel_2_1_damper_damage_backanim,0},
            {wheel_2_2_damper_damage_backanim,0},
            {wheel_2_3_damper_damage_backanim,0},
            {wheel_2_4_damper_damage_backanim,0},
            {wheel_1_1_damper,0.48},
            {wheel_2_1_damper,0.48},
            {wheel_1_2_damper,0.5},
            {wheel_1_3_damper,0.52},
            {wheel_2_2_damper,0.49},
            {wheel_2_3_damper,0.52},
            {wheel_1_4_damper,0.53},
            {wheel_2_4_damper,0.53},
            {steering_1_1,0},
            {steering_2_1,0},
            {steering_1_2,0},
            {steering_2_2,0},
            {hatchdriver,0},
            {mainturret,0},
            {turretbase,0},
            {maingun,0},
            {obsturret,0},
            {obsgun,0},
            {damagehlaven,0},
            {damagecamonet,0},
            {vrtulea,0},
            {vrtuleb,0},
            {poklop_gunner,0},
            {poklop_commander,0},
            {zasleh_rot,307},
            {zasleh2_rot,589.52},
            {zasleh_hide,0},
            {reverse_light,0},
            {drivingwheel,0},
            {indicatortempoil,0},
            {indicatortempwater,0},
            {indicatorammeter,0},
            {indicatorammeter_turret,0},
            {indicatorspeed_mfd_driver,0},
            {indicatorrpm,0},
            {indicatorrpm_mfd_driver,0},
            {lights_driver,0},
            {lights_driver_off,0},
            {lights_turret,0},
            {lights_turret_off,0},
            {cannon_ready_light,1},
            {engine_damage_indicator,0},
            {main_gun_damage_indicator,0},
            {pedal_thrust,0},
            {pedal_brake,1},
            {turret_control_x,0},
            {turret_control_y,0},
            {com_turret_control_x,0},
            {com_turret_control_y,0},
            {driver_reverse_cam,0},
            {driver_reverse_cam_nopip,0},
            {driver_hide_mfd,0},
            {indicatortempwater_mfd_driver,0},
            {indicatorfuel_mfd_driver,1},
            {indicator_hull_direction_mfd_driver,0},
            {indicator_main_turret_mfd_driver,0},
            {indicator_com_turret_mfd_driver,0},
            {indicator_com_turret_counter_mfd_driver,0},
            {indicator_main_turret_mfd_com,0},
            {indicator_main_turret_onscreen_com,0},
            {indicator_com_turret_mfd_com,0},
            {indicator_com_turret_onscreen_com,0},
            {indicator_com_turret_counter_mfd_com,0},
            {indicator_hull_direction_mfd_gunner,0},
            {indicator_main_turret_mfd_gunner,0},
            {indicator_com_turret_mfd_gunner,0},
            {indicator_com_turret_counter_mfd_gunner,0},
            {indicator_damage_engine,0},
            {indicator_damage_fuel,0},
            {indicator_damage_wheels,0},
            {indicator_turret_damage_hull,0},
            {indicator_turret_damage_engine,0},
            {indicator_turret_damage_fuel,0},
            {indicator_turret_damage_main_gun,0},
            {indicator_turret_damage_wheels,0},
            {indicator_turret_damage_turret,0},
            {hide_mfd_and_pip_screen_driver,1},
            {hide_mfd_and_pip_screen_gunner,1},
            {hide_mfd_elements,1},
            {showbags_damage,0},
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
            clan,
            zasleh2,
            zasleh_1,
            light_l,
            light_r,
            light_r2,
            light_l2,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 2.448;
		verticalOffsetWorld = -0.091;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_APC_Wheeled_01_cannon_v2_F.jpg";
      scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CFGVEHICLES_B_APC_WHEELED_01_CANNON;
	side = TWest;
	faction = Atlas_BLU_A_F;
	crew = Atlas_B_A_Crew_F;
	typicalCargo[] = {Atlas_B_A_Crew_F};
	textureList[] = {ADF,1};
	hiddenSelectionsTextures[] =
	{
	      "\A3_Atlas\Armor_f_Atlas\APC_Wheeled_01\Data\APC_Wheeled_01_base_ADF_CO.paa",
		"\A3_Atlas\Armor_f_Atlas\APC_Wheeled_01\Data\APC_Wheeled_01_adds_ADF_CO.paa",
		"\A3_Atlas\Armor_f_Atlas\APC_Wheeled_01\Data\APC_Wheeled_01_tows_ADF_CO.paa",
            "\A3\Armor_f\Data\camonet_CSAT_Stripe_Desert_CO.paa",
            "\A3\Armor_F\Data\cage_sand_CO.paa"
	};

	 /* Inventory */
	class TransportWeapons
	{
		weap_xx(arifle_AUG_F,2);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_AUG_Mag_F,12);
		mag_xx(200Rnd_556x45_Box_Red_F,6);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(1Rnd_HE_Grenade_shell,4);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,3);
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellGreen,8);
		mag_xx(SmokeShellOrange,8);
		mag_xx(SmokeShellBlue,8);
		mag_xx(MRAWS_HEAT55_F,5);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_aucamo_F,2);
	};
};

/* ADF Arid */
class Atlas_B_A_APC_Wheeled_01_cannon_v2_ard_F: Atlas_B_A_APC_Wheeled_01_cannon_v2_F
{
      faction = Atlas_BLU_A_ard_F;
	crew = Atlas_B_A_Crew_ard_F;
	typicalCargo[] = {Atlas_B_A_Crew_ard_F};
};

/* ADF Tropic */
class Atlas_B_A_APC_Wheeled_01_cannon_v2_trp_F: Atlas_B_A_APC_Wheeled_01_cannon_v2_F
{
      faction = Atlas_BLU_A_trp_F;
	crew = Atlas_B_A_Crew_trp_F;
	typicalCargo[] = {Atlas_B_A_Crew_trp_F};
};