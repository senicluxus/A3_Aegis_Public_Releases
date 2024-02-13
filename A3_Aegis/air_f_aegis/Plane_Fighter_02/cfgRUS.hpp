/* Russia */
class O_R_Plane_Fighter_02_F: O_Plane_Fighter_02_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {muzzleflashrot,144},
            {left_rotor_rot,0},
            {right_rotor_rot,0},
            {mfd_dam_hull,0},
            {mfd_dam_caution,0},
            {mfd_dam_avionics,0},
            {mfd_dam_fuel_l,0},
            {mfd_dam_fuel_r,0},
            {mfd_dam_gear,0},
            {mfd_dam_engine,0},
            {mfd_dam_engine2,0},
            {mfd_dam_laileron,0},
            {mfd_dam_raileron,0},
            {mfd_dam_lcrudder,0},
            {mfd_dam_rrudder,0},
            {mfd_dam_lcelevator,0},
            {mfd_dam_relevator,0},
            {engine_damage,0},
            {engine2_damage,0},
            {mfd_on,0},
            {mfd_masterarm,0},
            {mfd_brake_lever,0},
            {mfd_gear_lever,0},
            {mfd_systems_gear,0},
            {mfd_systems_brake,0},
            {mfd_flaps_up_1,0},
            {mfd_systems_flaps_1,0},
            {mfd_systems_flaps_2,0},
            {mfd_compass_rotate,0},
            {mfd_fuel_level,0.08},
            {mfd_fuel_low,0.08},
            {mfd_horizon_ball_rotate_1,0},
            {mfd_horizon_ball_horizondive_0_1,0},
            {mfd_horizon_ball_horizondive_1,0},
            {mfd_horizon_ball_horizondive_2_1,0},
            {mfd_vert_speed,0},
            {mfd_throttle_1,0},
            {mfd_throttle_2,0},
            {mfd_rudder,0},
            {mfd_speed,0},
            {mfd_engine_rpm_1,0},
            {mfd_engine_rpm_2,0},
            {left_engine_on,0},
            {right_engine_on,0},
            {light_wingtip_red,0},
            {light_wingtip_green,0},
            {collision_lights_white_blinking,0},
            {pilotcamerarotx,0.26},
            {pilotcameraroty,0},
            {canopy_stage_1,0},
            {canopy_stage_2,0},
            {canopy_strut_stage_1_left,0},
            {canopy_strut_stage_1_right,0},
            {crew_ladder,0},
            {weapons_bay_door_c_left,0},
            {weapons_bay_door_c_right,0},
            {weapons_bay_door_left_1,0},
            {weapons_bay_door_left_2,0},
            {weapons_bay_door_right_1,0},
            {weapons_bay_door_right_2,0},
            {front_wheel,0},
            {left_wheel,0},
            {right_wheel,0},
            {front_gear_suspension,0},
            {front_gear_suspension_rot,0},
            {front_gear,0},
            {front_gear_piston,0},
            {front_hydraulic_bar_1_1,0},
            {front_stearing,0},
            {left_gear_suspension,0},
            {left_gear,0},
            {left_gear_hydraulics,0},
            {left_hydraulic_bar_1,0},
            {left_hydraulic_bar_2,0},
            {gear_rear_left_piston,0},
            {gear_rear_left_piston_1,0},
            {right_gear_suspension,0},
            {right_gear,0},
            {right_gear_hydraulics,0},
            {right_hydraulic_bar_1,0},
            {right_hydraulic_bar_2,0},
            {gear_rear_right_piston,0},
            {gear_rear_right_piston_1,0},
            {front_door_1,0},
            {front_door_2,0},
            {front_door_3,0},
            {front_door_4,0},
            {front_door_piston_1,0},
            {front_door_piston_2,0},
            {left_gear_door_1,0},
            {left_gear_door_2,0},
            {right_gear_door_1,0},
            {right_gear_door_2,0},
            {left_flap,0},
            {right_flap,0},
            {left_rudder,0},
            {left_rudder_brake,0},
            {right_rudder,0},
            {right_rudder_brake,0},
            {engine_left_rudder,0},
            {engine_right_rudder,0},
            {aileron_left,0},
            {aileron_right,0},
            {left_elevon,0},
            {right_elevon,0},
            {left_elevator,0},
            {right_elevator,0},
            {engine_left_elevator,0},
            {engine_left_elevon,0},
            {engine_right_elevator,0},
            {engine_right_elevon,0},
            {stick_pilot_bank,0},
            {stick_pilot_dive,0},
            {throttle,0},
            {left_engine_nozzle_1,0},
            {left_engine_nozzle_2,0},
            {left_engine_nozzle_3,0},
            {left_engine_nozzle_4,0},
            {left_engine_nozzle_5,0},
            {left_engine_nozzle_6,0},
            {left_engine_nozzle_7,0},
            {left_engine_nozzle_8,0},
            {left_engine_nozzle_9,0},
            {left_engine_nozzle_10,0},
            {left_engine_nozzle_11,0},
            {right_engine_nozzle_1,0},
            {right_engine_nozzle_2,0},
            {right_engine_nozzle_3,0},
            {right_engine_nozzle_4,0},
            {right_engine_nozzle_5,0},
            {right_engine_nozzle_6,0},
            {right_engine_nozzle_7,0},
            {right_engine_nozzle_8,0},
            {right_engine_nozzle_9,0},
            {right_engine_nozzle_10,0},
            {right_engine_nozzle_11,0}
        };
		hide[] =
        {
            clan,
            zasleh,
            light_1,
            "zadni svetlo",
            backlighting,
            poskozeni
        };
		verticalOffset = 2.346;
		verticalOffsetWorld = -0.127;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Plane_Fighter_02_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_Fighter_Pilot_F;
	typicalCargo[] = {O_R_Fighter_Pilot_F};
	textureList[] = {RUBlue,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_rublue_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_02_rublue_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_rublue_CO.paa",
		"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_02_CO.paa",
		"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa",
		"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_01_CO.paa",
		"\A3\Data_F\clear_empty.paa"
	};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = O_R_Ejection_Seat_Plane_Fighter_02_F;
	};
};
class O_R_Plane_Fighter_02_Stealth_F: O_Plane_Fighter_02_Stealth_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {muzzleflashrot,144},
            {left_rotor_rot,0},
            {right_rotor_rot,0},
            {mfd_dam_hull,0},
            {mfd_dam_caution,0},
            {mfd_dam_avionics,0},
            {mfd_dam_fuel_l,0},
            {mfd_dam_fuel_r,0},
            {mfd_dam_gear,0},
            {mfd_dam_engine,0},
            {mfd_dam_engine2,0},
            {mfd_dam_laileron,0},
            {mfd_dam_raileron,0},
            {mfd_dam_lcrudder,0},
            {mfd_dam_rrudder,0},
            {mfd_dam_lcelevator,0},
            {mfd_dam_relevator,0},
            {engine_damage,0},
            {engine2_damage,0},
            {mfd_on,0},
            {mfd_masterarm,0},
            {mfd_brake_lever,0},
            {mfd_gear_lever,0},
            {mfd_systems_gear,0},
            {mfd_systems_brake,0},
            {mfd_flaps_up_1,0},
            {mfd_systems_flaps_1,0},
            {mfd_systems_flaps_2,0},
            {mfd_compass_rotate,0},
            {mfd_fuel_level,0.08},
            {mfd_fuel_low,0.08},
            {mfd_horizon_ball_rotate_1,0},
            {mfd_horizon_ball_horizondive_0_1,0},
            {mfd_horizon_ball_horizondive_1,0},
            {mfd_horizon_ball_horizondive_2_1,0},
            {mfd_vert_speed,0},
            {mfd_throttle_1,0},
            {mfd_throttle_2,0},
            {mfd_rudder,0},
            {mfd_speed,0},
            {mfd_engine_rpm_1,0},
            {mfd_engine_rpm_2,0},
            {left_engine_on,0},
            {right_engine_on,0},
            {light_wingtip_red,0},
            {light_wingtip_green,0},
            {collision_lights_white_blinking,0},
            {pilotcamerarotx,0.26},
            {pilotcameraroty,0},
            {canopy_stage_1,0},
            {canopy_stage_2,0},
            {canopy_strut_stage_1_left,0},
            {canopy_strut_stage_1_right,0},
            {crew_ladder,0},
            {weapons_bay_door_c_left,0},
            {weapons_bay_door_c_right,0},
            {weapons_bay_door_left_1,0},
            {weapons_bay_door_left_2,0},
            {weapons_bay_door_right_1,0},
            {weapons_bay_door_right_2,0},
            {front_wheel,0},
            {left_wheel,0},
            {right_wheel,0},
            {front_gear_suspension,0},
            {front_gear_suspension_rot,0},
            {front_gear,0},
            {front_gear_piston,0},
            {front_hydraulic_bar_1_1,0},
            {front_stearing,0},
            {left_gear_suspension,0},
            {left_gear,0},
            {left_gear_hydraulics,0},
            {left_hydraulic_bar_1,0},
            {left_hydraulic_bar_2,0},
            {gear_rear_left_piston,0},
            {gear_rear_left_piston_1,0},
            {right_gear_suspension,0},
            {right_gear,0},
            {right_gear_hydraulics,0},
            {right_hydraulic_bar_1,0},
            {right_hydraulic_bar_2,0},
            {gear_rear_right_piston,0},
            {gear_rear_right_piston_1,0},
            {front_door_1,0},
            {front_door_2,0},
            {front_door_3,0},
            {front_door_4,0},
            {front_door_piston_1,0},
            {front_door_piston_2,0},
            {left_gear_door_1,0},
            {left_gear_door_2,0},
            {right_gear_door_1,0},
            {right_gear_door_2,0},
            {left_flap,0},
            {right_flap,0},
            {left_rudder,0},
            {left_rudder_brake,0},
            {right_rudder,0},
            {right_rudder_brake,0},
            {engine_left_rudder,0},
            {engine_right_rudder,0},
            {aileron_left,0},
            {aileron_right,0},
            {left_elevon,0},
            {right_elevon,0},
            {left_elevator,0},
            {right_elevator,0},
            {engine_left_elevator,0},
            {engine_left_elevon,0},
            {engine_right_elevator,0},
            {engine_right_elevon,0},
            {stick_pilot_bank,0},
            {stick_pilot_dive,0},
            {throttle,0},
            {left_engine_nozzle_1,0},
            {left_engine_nozzle_2,0},
            {left_engine_nozzle_3,0},
            {left_engine_nozzle_4,0},
            {left_engine_nozzle_5,0},
            {left_engine_nozzle_6,0},
            {left_engine_nozzle_7,0},
            {left_engine_nozzle_8,0},
            {left_engine_nozzle_9,0},
            {left_engine_nozzle_10,0},
            {left_engine_nozzle_11,0},
            {right_engine_nozzle_1,0},
            {right_engine_nozzle_2,0},
            {right_engine_nozzle_3,0},
            {right_engine_nozzle_4,0},
            {right_engine_nozzle_5,0},
            {right_engine_nozzle_6,0},
            {right_engine_nozzle_7,0},
            {right_engine_nozzle_8,0},
            {right_engine_nozzle_9,0},
            {right_engine_nozzle_10,0},
            {right_engine_nozzle_11,0}
        };
		hide[] =
        {
            clan,
            zasleh,
            light_1,
            "zadni svetlo",
            backlighting,
            poskozeni
        };
		verticalOffset = 2.346;
		verticalOffsetWorld = -0.127;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Plane_Fighter_02_Stealth_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_Fighter_Pilot_F;
	typicalCargo[] = {O_R_Fighter_Pilot_F};
	textureList[] = {RUBlue,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_rublue_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_02_rublue_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_rublue_CO.paa",
		"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_02_CO.paa",
		"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa",
		"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_01_CO.paa",
		"\A3\Data_F\clear_empty.paa"
	};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = O_R_Ejection_Seat_Plane_Fighter_02_F;
	};
};
class O_R_Ejection_Seat_Plane_Fighter_02_F: Ejection_Seat_Plane_Fighter_02_base_F
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
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_Fighter_Pilot_F;
};

/* Russia (Mediterranean) */
class O_R_Plane_Fighter_02_ard_F: O_R_Plane_Fighter_02_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {muzzleflashrot,144},
            {left_rotor_rot,0},
            {right_rotor_rot,0},
            {mfd_dam_hull,0},
            {mfd_dam_caution,0},
            {mfd_dam_avionics,0},
            {mfd_dam_fuel_l,0},
            {mfd_dam_fuel_r,0},
            {mfd_dam_gear,0},
            {mfd_dam_engine,0},
            {mfd_dam_engine2,0},
            {mfd_dam_laileron,0},
            {mfd_dam_raileron,0},
            {mfd_dam_lcrudder,0},
            {mfd_dam_rrudder,0},
            {mfd_dam_lcelevator,0},
            {mfd_dam_relevator,0},
            {engine_damage,0},
            {engine2_damage,0},
            {mfd_on,0},
            {mfd_masterarm,0},
            {mfd_brake_lever,0},
            {mfd_gear_lever,0},
            {mfd_systems_gear,0},
            {mfd_systems_brake,0},
            {mfd_flaps_up_1,0},
            {mfd_systems_flaps_1,0},
            {mfd_systems_flaps_2,0},
            {mfd_compass_rotate,0},
            {mfd_fuel_level,0.08},
            {mfd_fuel_low,0.08},
            {mfd_horizon_ball_rotate_1,0},
            {mfd_horizon_ball_horizondive_0_1,0},
            {mfd_horizon_ball_horizondive_1,0},
            {mfd_horizon_ball_horizondive_2_1,0},
            {mfd_vert_speed,0},
            {mfd_throttle_1,0},
            {mfd_throttle_2,0},
            {mfd_rudder,0},
            {mfd_speed,0},
            {mfd_engine_rpm_1,0},
            {mfd_engine_rpm_2,0},
            {left_engine_on,0},
            {right_engine_on,0},
            {light_wingtip_red,0},
            {light_wingtip_green,0},
            {collision_lights_white_blinking,0},
            {pilotcamerarotx,0.26},
            {pilotcameraroty,0},
            {canopy_stage_1,0},
            {canopy_stage_2,0},
            {canopy_strut_stage_1_left,0},
            {canopy_strut_stage_1_right,0},
            {crew_ladder,0},
            {weapons_bay_door_c_left,0},
            {weapons_bay_door_c_right,0},
            {weapons_bay_door_left_1,0},
            {weapons_bay_door_left_2,0},
            {weapons_bay_door_right_1,0},
            {weapons_bay_door_right_2,0},
            {front_wheel,0},
            {left_wheel,0},
            {right_wheel,0},
            {front_gear_suspension,0},
            {front_gear_suspension_rot,0},
            {front_gear,0},
            {front_gear_piston,0},
            {front_hydraulic_bar_1_1,0},
            {front_stearing,0},
            {left_gear_suspension,0},
            {left_gear,0},
            {left_gear_hydraulics,0},
            {left_hydraulic_bar_1,0},
            {left_hydraulic_bar_2,0},
            {gear_rear_left_piston,0},
            {gear_rear_left_piston_1,0},
            {right_gear_suspension,0},
            {right_gear,0},
            {right_gear_hydraulics,0},
            {right_hydraulic_bar_1,0},
            {right_hydraulic_bar_2,0},
            {gear_rear_right_piston,0},
            {gear_rear_right_piston_1,0},
            {front_door_1,0},
            {front_door_2,0},
            {front_door_3,0},
            {front_door_4,0},
            {front_door_piston_1,0},
            {front_door_piston_2,0},
            {left_gear_door_1,0},
            {left_gear_door_2,0},
            {right_gear_door_1,0},
            {right_gear_door_2,0},
            {left_flap,0},
            {right_flap,0},
            {left_rudder,0},
            {left_rudder_brake,0},
            {right_rudder,0},
            {right_rudder_brake,0},
            {engine_left_rudder,0},
            {engine_right_rudder,0},
            {aileron_left,0},
            {aileron_right,0},
            {left_elevon,0},
            {right_elevon,0},
            {left_elevator,0},
            {right_elevator,0},
            {engine_left_elevator,0},
            {engine_left_elevon,0},
            {engine_right_elevator,0},
            {engine_right_elevon,0},
            {stick_pilot_bank,0},
            {stick_pilot_dive,0},
            {throttle,0},
            {left_engine_nozzle_1,0},
            {left_engine_nozzle_2,0},
            {left_engine_nozzle_3,0},
            {left_engine_nozzle_4,0},
            {left_engine_nozzle_5,0},
            {left_engine_nozzle_6,0},
            {left_engine_nozzle_7,0},
            {left_engine_nozzle_8,0},
            {left_engine_nozzle_9,0},
            {left_engine_nozzle_10,0},
            {left_engine_nozzle_11,0},
            {right_engine_nozzle_1,0},
            {right_engine_nozzle_2,0},
            {right_engine_nozzle_3,0},
            {right_engine_nozzle_4,0},
            {right_engine_nozzle_5,0},
            {right_engine_nozzle_6,0},
            {right_engine_nozzle_7,0},
            {right_engine_nozzle_8,0},
            {right_engine_nozzle_9,0},
            {right_engine_nozzle_10,0},
            {right_engine_nozzle_11,0}
        };
		hide[] =
        {
            clan,
            zasleh,
            light_1,
            "zadni svetlo",
            backlighting,
            poskozeni
        };
		verticalOffset = 2.346;
		verticalOffsetWorld = -0.127;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Plane_Fighter_02_ard_F.jpg";
	faction = OPF_R_ard_F;
	crew = O_R_Fighter_Pilot_ard_F;
	typicalCargo[] = {O_R_Fighter_Pilot_ard_F};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = O_R_Ejection_Seat_Plane_Fighter_02_ard_F;
	};
};
class O_R_Plane_Fighter_02_Stealth_ard_F: O_R_Plane_Fighter_02_Stealth_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {muzzleflashrot,144},
            {left_rotor_rot,0},
            {right_rotor_rot,0},
            {mfd_dam_hull,0},
            {mfd_dam_caution,0},
            {mfd_dam_avionics,0},
            {mfd_dam_fuel_l,0},
            {mfd_dam_fuel_r,0},
            {mfd_dam_gear,0},
            {mfd_dam_engine,0},
            {mfd_dam_engine2,0},
            {mfd_dam_laileron,0},
            {mfd_dam_raileron,0},
            {mfd_dam_lcrudder,0},
            {mfd_dam_rrudder,0},
            {mfd_dam_lcelevator,0},
            {mfd_dam_relevator,0},
            {engine_damage,0},
            {engine2_damage,0},
            {mfd_on,0},
            {mfd_masterarm,0},
            {mfd_brake_lever,0},
            {mfd_gear_lever,0},
            {mfd_systems_gear,0},
            {mfd_systems_brake,0},
            {mfd_flaps_up_1,0},
            {mfd_systems_flaps_1,0},
            {mfd_systems_flaps_2,0},
            {mfd_compass_rotate,0},
            {mfd_fuel_level,0.08},
            {mfd_fuel_low,0.08},
            {mfd_horizon_ball_rotate_1,0},
            {mfd_horizon_ball_horizondive_0_1,0},
            {mfd_horizon_ball_horizondive_1,0},
            {mfd_horizon_ball_horizondive_2_1,0},
            {mfd_vert_speed,0},
            {mfd_throttle_1,0},
            {mfd_throttle_2,0},
            {mfd_rudder,0},
            {mfd_speed,0},
            {mfd_engine_rpm_1,0},
            {mfd_engine_rpm_2,0},
            {left_engine_on,0},
            {right_engine_on,0},
            {light_wingtip_red,0},
            {light_wingtip_green,0},
            {collision_lights_white_blinking,0},
            {pilotcamerarotx,0.26},
            {pilotcameraroty,0},
            {canopy_stage_1,0},
            {canopy_stage_2,0},
            {canopy_strut_stage_1_left,0},
            {canopy_strut_stage_1_right,0},
            {crew_ladder,0},
            {weapons_bay_door_c_left,0},
            {weapons_bay_door_c_right,0},
            {weapons_bay_door_left_1,0},
            {weapons_bay_door_left_2,0},
            {weapons_bay_door_right_1,0},
            {weapons_bay_door_right_2,0},
            {front_wheel,0},
            {left_wheel,0},
            {right_wheel,0},
            {front_gear_suspension,0},
            {front_gear_suspension_rot,0},
            {front_gear,0},
            {front_gear_piston,0},
            {front_hydraulic_bar_1_1,0},
            {front_stearing,0},
            {left_gear_suspension,0},
            {left_gear,0},
            {left_gear_hydraulics,0},
            {left_hydraulic_bar_1,0},
            {left_hydraulic_bar_2,0},
            {gear_rear_left_piston,0},
            {gear_rear_left_piston_1,0},
            {right_gear_suspension,0},
            {right_gear,0},
            {right_gear_hydraulics,0},
            {right_hydraulic_bar_1,0},
            {right_hydraulic_bar_2,0},
            {gear_rear_right_piston,0},
            {gear_rear_right_piston_1,0},
            {front_door_1,0},
            {front_door_2,0},
            {front_door_3,0},
            {front_door_4,0},
            {front_door_piston_1,0},
            {front_door_piston_2,0},
            {left_gear_door_1,0},
            {left_gear_door_2,0},
            {right_gear_door_1,0},
            {right_gear_door_2,0},
            {left_flap,0},
            {right_flap,0},
            {left_rudder,0},
            {left_rudder_brake,0},
            {right_rudder,0},
            {right_rudder_brake,0},
            {engine_left_rudder,0},
            {engine_right_rudder,0},
            {aileron_left,0},
            {aileron_right,0},
            {left_elevon,0},
            {right_elevon,0},
            {left_elevator,0},
            {right_elevator,0},
            {engine_left_elevator,0},
            {engine_left_elevon,0},
            {engine_right_elevator,0},
            {engine_right_elevon,0},
            {stick_pilot_bank,0},
            {stick_pilot_dive,0},
            {throttle,0},
            {left_engine_nozzle_1,0},
            {left_engine_nozzle_2,0},
            {left_engine_nozzle_3,0},
            {left_engine_nozzle_4,0},
            {left_engine_nozzle_5,0},
            {left_engine_nozzle_6,0},
            {left_engine_nozzle_7,0},
            {left_engine_nozzle_8,0},
            {left_engine_nozzle_9,0},
            {left_engine_nozzle_10,0},
            {left_engine_nozzle_11,0},
            {right_engine_nozzle_1,0},
            {right_engine_nozzle_2,0},
            {right_engine_nozzle_3,0},
            {right_engine_nozzle_4,0},
            {right_engine_nozzle_5,0},
            {right_engine_nozzle_6,0},
            {right_engine_nozzle_7,0},
            {right_engine_nozzle_8,0},
            {right_engine_nozzle_9,0},
            {right_engine_nozzle_10,0},
            {right_engine_nozzle_11,0}
        };
		hide[] =
        {
            clan,
            zasleh,
            light_1,
            "zadni svetlo",
            backlighting,
            poskozeni
        };
		verticalOffset = 2.346;
		verticalOffsetWorld = -0.127;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Plane_Fighter_02_Stealth_ard_F.jpg";
	faction = OPF_R_ard_F;
	crew = O_R_Fighter_Pilot_ard_F;
	typicalCargo[] = {O_R_Fighter_Pilot_ard_F};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = O_R_Ejection_Seat_Plane_Fighter_02_ard_F;
	};
};
class O_R_Ejection_Seat_Plane_Fighter_02_ard_F: O_R_Ejection_Seat_Plane_Fighter_02_F
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
	faction = OPF_R_ard_F;
	crew = O_R_Fighter_Pilot_ard_F;
};