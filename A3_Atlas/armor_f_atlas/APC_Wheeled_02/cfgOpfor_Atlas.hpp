class Atlas_O_T_APC_Wheeled_02_rcws_v2_F: APC_Wheeled_02_base_v2_F
{
	author = $STR_A3_A_AveryTheKitty;
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
            {wheel_1_4_damage,0},
            {wheel_2_4_damage,0},
            {wheel_1_4_damper_damage_backanim,0},
            {wheel_2_4_damper_damage_backanim,0},
            {wheel_1_1,0},
            {wheel_2_1,0},
            {wheel_1_2,0},
            {wheel_1_3,0},
            {wheel_2_2,0},
            {wheel_2_3,0},
            {daylights,0},
            {wheel_1_1_damage,0},
            {wheel_1_2_damage,0},
            {wheel_1_3_damage,0},
            {wheel_2_1_damage,0},
            {wheel_2_2_damage,0},
            {wheel_2_3_damage,0},
            {wheel_1_1_damper_damage_backanim,0},
            {wheel_1_2_damper_damage_backanim,0},
            {wheel_1_3_damper_damage_backanim,0},
            {wheel_2_1_damper_damage_backanim,0},
            {wheel_2_2_damper_damage_backanim,0},
            {wheel_2_3_damper_damage_backanim,0},
            {steering_1_1,0},
            {steering_2_1,0},
            {steering_1_2,0},
            {steering_2_2,0},
            {wheel_1_1_damper,0.49},
            {wheel_2_1_damper,0.49},
            {wheel_1_2_damper,0.51},
            {wheel_1_3_damper,0.54},
            {wheel_2_2_damper,0.52},
            {wheel_2_3_damper,0.53},
            {hatchdriver,0},
            {hatchcommander,0},
            {mainturret,0},
            {maingun,0},
            {obsturret,0},
            {obsgun,0},
            {damagehlaven,0},
            {damagecamonet,0},
            {vrtulea,0},
            {vrtuleb,0},
            {zasleh_rot,912},
            {zasleh2_rot,4243.08},
            {zasleh_hide,0},
            {reverse_light,1},
            {drivingwheel,0},
            {indicatorvoltammeter,0},
            {indicatortempoil,0},
            {indicatortempwater,0},
            {lights_driver,0},
            {lights_driver_off,0},
            {lights_turret,0},
            {cannon_ready_light,0},
            {engine_damage_fire_indicator,0},
            {engine_damage_indicator,0},
            {main_gun_damage_indicator,0},
            {pedal_thrust,0},
            {pedal_brake,1},
            {turret_control_x,0},
            {turret_control_y,0},
            {mainturret_indicator,0},
            {commander_mainturret_indicator,0},
            {driver_reverse_cam,1},
            {driver_hide_mfd,1},
            {indicatorspeed_mfd_driver,0},
            {indicatorrpm,0},
            {indicatorrpm_mfd_driver,0},
            {indicatortempwater_mfd_driver,0},
            {indicatorfuel_mfd_driver,1},
            {indicator_hull_direction_mfd_driver,0},
            {indicator_main_turret_mfd_driver,0},
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
            {indicator_turret_damage_wheels,0},
            {indicator_turret_damage_turret,0},
            {indicator_turret_damage_com_turret,0},
            {hide_mfd_and_pip_screen,1},
            {hide_mfd_elements_for_com,1},
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
            {slat_right_3_firegeo_hide,0}
        };
		hide[] =
        {
            clan,
            zasleh2,
            light_l,
            light_r,
            light_r2,
            light_l2,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.409;
		verticalOffsetWorld = -0.148;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_T_APC_Wheeled_02_rcws_v2_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Atlas_OPF_T_F;
	crew = Atlas_O_T_crew_F;
	typicalCargo[] = {Atlas_O_T_soldier_F};
	textureList[] = {Hex,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Armor_F_Beta\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_OPFOR_CO.paa",
		"\A3\Armor_F_Beta\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_OPFOR_CO.paa",
		"\A3\Data_F\Vehicles\Turret_OPFOR_CO.paa",
		"\A3\Armor_F\Data\camonet_CSAT_Hex_Desert_CO.paa",
		"\A3\Armor_F\Data\cage_CSAT_CO.paa"
	};
	class TransportWeapons
	{
		weap_xx(arifle_AUG_black_F,2);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_AUG_Mag_Green_F,12);
		mag_xx(75Rnd_762x39_Mag_Green_F,8);
		mag_xx(HandGrenade_Guer,6);
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
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_semiarid,2);
	};
};