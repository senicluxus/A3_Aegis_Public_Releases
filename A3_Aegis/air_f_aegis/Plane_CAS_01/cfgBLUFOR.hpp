/* US */
class B_Plane_CAS_01_F: Plane_CAS_01_base_F
{
    textureList[] = {Grey,1};
};
class B_Plane_CAS_01_dynamicLoadout_F: Plane_CAS_01_dynamicLoadout_base_F
{
    displayName = $STR_A3_CfgVehicles_B_Plane_01_F0;
    textureList[] = {Grey,1};
};

/* US (Pacific) */
class B_T_Ejection_Seat_Plane_CAS_01_F: Ejection_Seat_Plane_CAS_01_base_F
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
	faction = BLU_T_F;
	crew = B_T_Fighter_Pilot_F;
};
class B_T_Plane_CAS_01_dynamicLoadout_F: B_Plane_CAS_01_dynamicLoadout_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {rotor_1_rot,0},
            {rotor_2_rot,0},
            {deceleron_1_rot_1,0},
            {deceleron_1_1_rot_1,0},
            {deceleron_1_2_rot_1,0},
            {deceleron_2_rot_1,0},
            {deceleron_2_1_rot_1,0},
            {deceleron_2_2_rot_1,0},
            {elevator_1_rot,0},
            {elevators_2_rot,0},
            {flap_1_1_move,0},
            {flap_1_2_move,0},
            {flap_2_1_move,0},
            {flap_2_2_move,0},
            {flap_1_1_rot,0},
            {flap_1_2_rot,0},
            {flap_2_1_rot,0},
            {flap_2_2_rot,0},
            {rudder_1_rot,0},
            {rudder_2_rot,0},
            {wheel_1_rot,0},
            {wheel_2_rot,0},
            {wheel_3_rot,0},
            {gear_1_rot,0},
            {gear_1_hatch_1_rot,0},
            {gear_1_hatch_2_rot,0},
            {gear_1_piston_1_rot,0},
            {gear_1_piston_2_rot,0},
            {gear_1_damper_move,0},
            {gear_1_stabil_1_rot,0},
            {gear_1_stabil_2_rot,0},
            {gear_1_steering_rot,0},
            {gear_2_rot,0},
            {gear_2_hatch_2_rot,0},
            {gear_2_hatch_3_rot,0},
            {gear_2_piston_1_rot,0},
            {gear_2_piston_2_rot,0},
            {gear_2_damper_move,0},
            {gear_2_stabil_1_1_rot,0},
            {gear_2_stabil_1_2_rot,0},
            {gear_2_stabil_2_1_rot,0},
            {gear_2_stabil_2_2_rot,0},
            {gear_2_hatch_1_rot,0},
            {gear_3_rot,0},
            {gear_3_hatch_2_rot,0},
            {gear_3_hatch_3_rot,0},
            {gear_3_piston_1_rot,0},
            {gear_3_piston_2_rot,0},
            {gear_3_damper_move,0},
            {gear_3_stabil_1_1_rot,0},
            {gear_3_stabil_1_2_rot,0},
            {gear_3_stabil_2_1_rot,0},
            {gear_3_stabil_2_2_rot,0},
            {gear_3_hatch_1_rot,0},
            {ladder_hatch_move_1,0},
            {ladder_hatch_move_2,0},
            {ladder_rot,0},
            {ladder_2_rot,0},
            {ladder_1_move,0},
            {ladder_2_move,0},
            {ladder_3_move,0},
            {canopy_rot,0},
            {display_off_hide,0},
            {avionics_damage,0},
            {display_horizon_2_middle_rot,0},
            {display_horizon_2_left_rot,-0.01},
            {display_horizon_2_right_rot,-0.01},
            {display_pod_gatling_rot,1},
            {display_pod_gatling_rot_1,0},
            {display_pod_gatling_rot_2,0},
            {display_pod_gatling_slider_move,1},
            {display_pod_1_rot,1},
            {display_pod_1_rot_1,0},
            {display_pod_1_rot_2,0},
            {display_pod_1_slider_move,1},
            {display_pod_11_rot,1},
            {display_pod_11_rot_1,0},
            {display_pod_11_rot_2,0},
            {display_pod_11_slider_move,1},
            {display_pod_9_rot,1},
            {display_pod_9_rot_1,0},
            {display_pod_9_rot_2,0},
            {display_pod_9_slider_move_1,1},
            {display_pod_9_slider_move_2,1},
            {display_pod_9_slider_move_3,1},
            {display_pod_3_rot,1},
            {display_pod_3_rot_1,0},
            {display_pod_3_rot_2,0},
            {display_pod_3_slider_move_1,1},
            {display_pod_3_slider_move_2,1},
            {display_pod_3_slider_move_3,1},
            {display_pod_10_rot,1},
            {display_pod_10_rot_1,0},
            {display_pod_10_rot_2,0},
            {display_pod_10_slider_move,1},
            {display_pod_2_rot,1},
            {display_pod_2_rot_1,0},
            {display_pod_2_rot_2,0},
            {display_pod_2_slider_move,1},
            {display_pod_4_rot,1},
            {display_pod_4_rot_1,0},
            {display_pod_4_rot_2,0},
            {display_pod_4_slider_move,1},
            {display_pod_8_rot,1},
            {display_pod_8_rot_1,0},
            {display_pod_8_rot_2,0},
            {display_pod_8_slider_move,1},
            {display_pod_5_rot,1},
            {display_pod_5_rot_1,0},
            {display_pod_5_rot_2,0},
            {display_pod_5_slider_move,1},
            {display_pod_7_rot,1},
            {display_pod_7_rot_1,0},
            {display_pod_7_rot_2,0},
            {display_pod_7_slider_move,1},
            {display_climb_move,0},
            {display_altitude_small_rot,7.38},
            {display_altitude_large_rot,7.38},
            {display_compass_rot,0},
            {display_flaps_1_rot,0},
            {display_flaps_2_rot,0},
            {display_gear_down_move,0},
            {display_gear_up_move,0},
            {display_speed_1_rot,0},
            {display_horizon_1_rot_1,-0.01},
            {display_horizon_1_rot_2,0},
            {display_speed_2_rot_1,0},
            {display_speed_2_rot_2,0},
            {display_engine_1_rot,0},
            {display_engine_2_rot,0},
            {display_fuel_1_rot,1},
            {display_fuel_2_rot,1},
            {controlstick_pitch_rot,0},
            {controlstick_roll_rot,0},
            {gatling_muzzleflash_rot,36},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {gatling_barrels_rot,1},
            {pilotcamera_h,0},
            {pilotcamera_v,0.09}
        };
		hide[] =
        {
            gatling_muzzleflash,
            gear_1_light_1_hide,
            gear_1_light_2_hide,
            "zadni svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.296;
		verticalOffsetWorld = -0.084;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Plane_CAS_01_dynamicLoadout_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_T_F;
	crew = B_T_Fighter_Pilot_F;
	typicalCargo[] = {B_T_Fighter_Pilot_F};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = B_T_Ejection_Seat_Plane_CAS_01_F;
	};
};

/* US (Woodland) */
class B_W_Ejection_Seat_Plane_CAS_01_F: Ejection_Seat_Plane_CAS_01_base_F
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
	faction = BLU_W_F;
	crew = B_W_Fighter_Pilot_F;
};
class B_W_Plane_CAS_01_dynamicLoadout_F: B_Plane_CAS_01_dynamicLoadout_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {rotor_1_rot,0},
            {rotor_2_rot,0},
            {deceleron_1_rot_1,0},
            {deceleron_1_1_rot_1,0},
            {deceleron_1_2_rot_1,0},
            {deceleron_2_rot_1,0},
            {deceleron_2_1_rot_1,0},
            {deceleron_2_2_rot_1,0},
            {elevator_1_rot,0},
            {elevators_2_rot,0},
            {flap_1_1_move,0},
            {flap_1_2_move,0},
            {flap_2_1_move,0},
            {flap_2_2_move,0},
            {flap_1_1_rot,0},
            {flap_1_2_rot,0},
            {flap_2_1_rot,0},
            {flap_2_2_rot,0},
            {rudder_1_rot,0},
            {rudder_2_rot,0},
            {wheel_1_rot,0},
            {wheel_2_rot,0},
            {wheel_3_rot,0},
            {gear_1_rot,0},
            {gear_1_hatch_1_rot,0},
            {gear_1_hatch_2_rot,0},
            {gear_1_piston_1_rot,0},
            {gear_1_piston_2_rot,0},
            {gear_1_damper_move,0},
            {gear_1_stabil_1_rot,0},
            {gear_1_stabil_2_rot,0},
            {gear_1_steering_rot,0},
            {gear_2_rot,0},
            {gear_2_hatch_2_rot,0},
            {gear_2_hatch_3_rot,0},
            {gear_2_piston_1_rot,0},
            {gear_2_piston_2_rot,0},
            {gear_2_damper_move,0},
            {gear_2_stabil_1_1_rot,0},
            {gear_2_stabil_1_2_rot,0},
            {gear_2_stabil_2_1_rot,0},
            {gear_2_stabil_2_2_rot,0},
            {gear_2_hatch_1_rot,0},
            {gear_3_rot,0},
            {gear_3_hatch_2_rot,0},
            {gear_3_hatch_3_rot,0},
            {gear_3_piston_1_rot,0},
            {gear_3_piston_2_rot,0},
            {gear_3_damper_move,0},
            {gear_3_stabil_1_1_rot,0},
            {gear_3_stabil_1_2_rot,0},
            {gear_3_stabil_2_1_rot,0},
            {gear_3_stabil_2_2_rot,0},
            {gear_3_hatch_1_rot,0},
            {ladder_hatch_move_1,0},
            {ladder_hatch_move_2,0},
            {ladder_rot,0},
            {ladder_2_rot,0},
            {ladder_1_move,0},
            {ladder_2_move,0},
            {ladder_3_move,0},
            {canopy_rot,0},
            {display_off_hide,0},
            {avionics_damage,0},
            {display_horizon_2_middle_rot,0},
            {display_horizon_2_left_rot,-0.01},
            {display_horizon_2_right_rot,-0.01},
            {display_pod_gatling_rot,1},
            {display_pod_gatling_rot_1,0},
            {display_pod_gatling_rot_2,0},
            {display_pod_gatling_slider_move,1},
            {display_pod_1_rot,1},
            {display_pod_1_rot_1,0},
            {display_pod_1_rot_2,0},
            {display_pod_1_slider_move,1},
            {display_pod_11_rot,1},
            {display_pod_11_rot_1,0},
            {display_pod_11_rot_2,0},
            {display_pod_11_slider_move,1},
            {display_pod_9_rot,1},
            {display_pod_9_rot_1,0},
            {display_pod_9_rot_2,0},
            {display_pod_9_slider_move_1,1},
            {display_pod_9_slider_move_2,1},
            {display_pod_9_slider_move_3,1},
            {display_pod_3_rot,1},
            {display_pod_3_rot_1,0},
            {display_pod_3_rot_2,0},
            {display_pod_3_slider_move_1,1},
            {display_pod_3_slider_move_2,1},
            {display_pod_3_slider_move_3,1},
            {display_pod_10_rot,1},
            {display_pod_10_rot_1,0},
            {display_pod_10_rot_2,0},
            {display_pod_10_slider_move,1},
            {display_pod_2_rot,1},
            {display_pod_2_rot_1,0},
            {display_pod_2_rot_2,0},
            {display_pod_2_slider_move,1},
            {display_pod_4_rot,1},
            {display_pod_4_rot_1,0},
            {display_pod_4_rot_2,0},
            {display_pod_4_slider_move,1},
            {display_pod_8_rot,1},
            {display_pod_8_rot_1,0},
            {display_pod_8_rot_2,0},
            {display_pod_8_slider_move,1},
            {display_pod_5_rot,1},
            {display_pod_5_rot_1,0},
            {display_pod_5_rot_2,0},
            {display_pod_5_slider_move,1},
            {display_pod_7_rot,1},
            {display_pod_7_rot_1,0},
            {display_pod_7_rot_2,0},
            {display_pod_7_slider_move,1},
            {display_climb_move,0},
            {display_altitude_small_rot,7.38},
            {display_altitude_large_rot,7.38},
            {display_compass_rot,0},
            {display_flaps_1_rot,0},
            {display_flaps_2_rot,0},
            {display_gear_down_move,0},
            {display_gear_up_move,0},
            {display_speed_1_rot,0},
            {display_horizon_1_rot_1,-0.01},
            {display_horizon_1_rot_2,0},
            {display_speed_2_rot_1,0},
            {display_speed_2_rot_2,0},
            {display_engine_1_rot,0},
            {display_engine_2_rot,0},
            {display_fuel_1_rot,1},
            {display_fuel_2_rot,1},
            {controlstick_pitch_rot,0},
            {controlstick_roll_rot,0},
            {gatling_muzzleflash_rot,36},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {gatling_barrels_rot,1},
            {pilotcamera_h,0},
            {pilotcamera_v,0.09}
        };
		hide[] =
        {
            gatling_muzzleflash,
            gear_1_light_1_hide,
            gear_1_light_2_hide,
            "zadni svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.296;
		verticalOffsetWorld = -0.084;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Plane_CAS_01_dynamicLoadout_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Fighter_Pilot_F;
	typicalCargo[] = {B_W_Fighter_Pilot_F};
    hiddenSelectionsTextures[] = 
    {
        "\A3_Aegis\Air_F_Aegis\Plane_CAS_01\Data\Aegis_A164_01_wdl_CO.paa",
        "\A3_Aegis\Air_F_Aegis\Plane_CAS_01\Data\Aegis_A164_02_wdl_CO.paa"
    };
    textureList[] = {Wdl,1};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = B_W_Ejection_Seat_Plane_CAS_01_F;
	};
};