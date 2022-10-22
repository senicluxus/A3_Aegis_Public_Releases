class Atlas_B_M_Plane_Fighter_04_F: Plane_Fighter_04_Base_F
{
	author = "BranFlakes";
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {muzzleflashrot,876},
            {mfd_dam_hull,0},
            {mfd_dam_caution,0},
            {mfd_dam_engine,0},
            {mfd_dam_avionics,0},
            {mfd_dam_fuel,0},
            {mfd_dam_laileron,0},
            {mfd_dam_raileron,0},
            {mfd_dam_lcrudder,0},
            {mfd_dam_lcelevator,0},
            {mfd_dam_relevator,0},
            {engine_damage,0},
            {mfd_damage_hide,0},
            {mfd_off,0},
            {mfd_on,0},
            {mfd_gun_ammo_indicator,1},
            {mfd_systems_gear_0,0},
            {mfd_systems_gear_1,0},
            {mfd_gear_lever_rotate,0},
            {mfd_compass_rotate,0},
            {mfd_horizon_ball_rotate_1,0},
            {mfd_horizon_dial,0},
            {mfd_horizon_ball_horizondive_0_1,0.01},
            {mfd_horizon_ball_horizondive_1,0.01},
            {mfd_horizon_ball_horizondive_2_1,0.01},
            {mfd_fuel_level,1},
            {mfd_fuel_low,1},
            {mfd_engine_rpm,0},
            {mfd_speed,0},
            {mfd_vert_speed,0},
            {mfd_throttle,0},
            {mfd_rudder,0},
            {mfd_systems_brake,0},
            {mfd_systems_flaps_1,0},
            {mfd_systems_flaps_2,0},
            {mfd_systems_flaps_3,0},
            {marker_light_red,0},
            {marker_light_green,0},
            {marker_light_hull_red,0},
            {marker_light_hull_green,0},
            {collision_lights_white_blinking,0},
            {pilotcamerarotx,0.26},
            {pilotcameraroty,0},
            {flirrotx,0.26},
            {flirroty,0},
            {engine_fire_on,0},
            {canopy_stage_1,0},
            {canopy_stage_2,0},
            {crew_ladder,0},
            {gear_door_front_1,0},
            {gear_door_front_1_lock,0},
            {gear_door_front_2,0},
            {gear_door_front_3,0},
            {gear_front,0},
            {gear_front_hydraulic_1,0},
            {gear_front_hydraulic_2,0},
            {gear_front_hydraulic_5,0},
            {gear_front_hydraulic_3,0},
            {gear_front_hydraulic_4,0},
            {gear_front_stearing,0},
            {suspension_front,0},
            {wheel_front,0},
            {gear_door_rear_left_1,0},
            {gear_door_rear_left_1_h,0},
            {gear_door_rear_left_2,0},
            {gear_door_rear_left_2_h1,0},
            {gear_door_rear_left_2_h2,0},
            {gear_rear_left,0},
            {gear_rear_left_hydraulic_1,0},
            {gear_rear_left_hydraulic_1a,0},
            {gear_rear_left_hydraulic_2,0},
            {suspension_rear_left,0},
            {wheel_left,0},
            {gear_door_rear_right_1,0},
            {gear_door_rear_right_1_h,0},
            {gear_door_rear_right_2,0},
            {gear_door_rear_right_2_h1,0},
            {gear_door_rear_right_2_h2,0},
            {gear_rear_right,0},
            {gear_rear_right_hydraulic_1,0},
            {gear_rear_right_hydraulic_1a,0},
            {gear_rear_right_hydraulic_2,0},
            {suspension_rear_right,0},
            {wheel_right,0},
            {elevator_left_1,0},
            {elevator_left_2,0},
            {elevator_right_1,0},
            {elevator_right_2,0},
            {rudder,0},
            {aileron_left,0},
            {aileron_r,0},
            {flap_left,0},
            {flap_right,0},
            {slat_left_1_flap,0},
            {slat_left_2_flap,0},
            {slat_right_1_flap,0},
            {slat_right_2_flap,0},
            {airbrake_rear_left,0},
            {airbrake_rear_right,0},
            {stick_pilot_bank,0},
            {stick_pilot_dive,0},
            {throttle_1,0},
            {throttle_2,0},
            {engine_nozzle_1,0},
            {engine_nozzle_2,0},
            {engine_nozzle_3,0},
            {engine_nozzle_4,0},
            {engine_nozzle_5,0},
            {engine_nozzle_6,0},
            {engine_nozzle_7,0},
            {engine_nozzle_8,0},
            {engine_nozzle_9,0},
            {engine_nozzle_10,0},
            {engine_nozzle_11,0},
            {engine_nozzle_12,0},
            {engine_nozzle_13,0},
            {engine_nozzle_14,0},
            {engine_nozzle_15,0},
            {engine_nozzle_16,0}
        };
		hide[] =
        {
            clan,
            zasleh,
            gear_front_light,
            gear_left_rear_light,
            gear_right_rear_light,
            "zadni svetlo",
            backlighting,
            poskozeni
        };
		verticalOffset = 2.225;
		verticalOffsetWorld = -0.079;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_M_Plane_Fighter_04_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_B_M_Plane_Fighter_04_F0;
	side = TWest;
	faction = Atlas_BLU_M_F;
	crew = Atlas_B_M_Fighter_Pilot_F;
	typicalCargo[] = {Atlas_B_M_Fighter_Pilot_F};
	textureList[] = {Marar,1};
	hiddenSelectionsTextures[] =
	{
        "\A3_Atlas\Air_F_Atlas\Plane_Fighter_04\Data\Fighter_04_fuselage_01_Marar_CO.paa",
        "\A3_Atlas\Air_F_Atlas\Plane_Fighter_04\Data\Fighter_04_fuselage_02_Marar_CO.paa",
		"\A3\Air_F_Jets\Plane_Fighter_04\Data\Fighter_04_misc_01_CO.paa",
		"\A3\Air_F_Jets\Plane_Fighter_04\Data\Numbers\Fighter_04_number_05_CA.paa",
		"\A3\Air_F_Jets\Plane_Fighter_04\Data\Numbers\Fighter_04_number_01_CA.paa",
		"\A3\Air_F_Jets\Plane_Fighter_04\Data\Numbers\Fighter_04_number_04_CA.paa"
	};
	magazines[] =
	{
		magazine_Fighter04_Gun20mm_AA_x120_red,
		Laserbatteries,
		240Rnd_CMFlare_Chaff_Magazine
	};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = I_E_Ejection_Seat_Plane_Fighter_04_F;
	};
};
class Atlas_B_M_Ejection_Seat_Plane_Fighter_04_F: Ejection_Seat_Plane_Fighter_04_base_F
{
	class SimpleObject
	{
		eden = false;
		animate[] = {};
		hide[] =
		{
            zasleh,
            "zadni svetlo",
            "brzdove svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 0.002;
		verticalOffsetWorld = 0;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	side = TWest;
	faction = Atlas_BLU_M_F;
	crew = Atlas_B_M_Fighter_Pilot_F;
};