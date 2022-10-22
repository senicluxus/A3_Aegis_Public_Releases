class Atlas_O_W_Ejection_Seat_Plane_CAS_02_F: Ejection_Seat_Plane_CAS_02_base_F
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
	faction = Atlas_OPF_W_F;
	crew = Atlas_O_W_Fighter_Pilot_F;
};
class Atlas_O_W_Plane_CAS_02_dynamicLoadout_ghex_F: O_Plane_CAS_02_dynamicLoadout_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {airintake_1_front_rot,0.07},
            {airintake_2_front_rot,0.07},
            {airintake_1_top_1_rot,0.07},
            {airintake_2_top_1_rot,0.07},
            {airintake_1_top_2_move,0.07},
            {airintake_2_top_2_move,0.07},
            {rotor_1_1_rot,0},
            {rotor_1_2_rot,0},
            {rotor_2_1_rot,0},
            {rotor_2_2_rot,0},
            {aileron_1_rot_1,0},
            {aileron_2_rot_1,0},
            {airbrake_rot_1,0},
            {airbrake_piston_1_move_1,0},
            {airbrake_piston_2_rot_1,0},
            {elevator_1_rot,0},
            {elevator_2_rot,0},
            {flap_1_rot,0},
            {flap_2_rot,0},
            {slat_1_1_rot,0},
            {slat_1_2_rot,0},
            {slat_2_1_rot,0},
            {slat_2_2_rot,0},
            {rudder_rot,0},
            {wheel_1_rot,0},
            {wheel_2_rot,0},
            {wheel_3_rot,0},
            {gear_1_rot,0},
            {gear_1_hatch_1_rot,0},
            {gear_1_hatch_2_rot,0},
            {gear_1_hatch_3_rot,0},
            {gear_1_hatch_4_rot,0},
            {gear_1_hatch_5_rot,0},
            {gear_1_steering_rot,0},
            {gear_1_damper_move,0},
            {gear_1_stabil_1_rot,0},
            {gear_1_stabil_2_rot,0},
            {gear_2_rot,0},
            {gear_2_hatch_1_rot,0},
            {gear_2_hatch_2_rot,0},
            {gear_2_hatch_3_rot,0},
            {gear_2_piston_1_rot,0},
            {gear_2_stabil_1_rot,0},
            {gear_2_stabil_2_rot,0},
            {gear_2_damper_move,0},
            {gear_3_rot,0},
            {gear_3_hatch_1_rot,0},
            {gear_3_hatch_2_rot,0},
            {gear_3_hatch_3_rot,0},
            {gear_3_piston_1_rot,0},
            {gear_3_stabil_1_rot,0},
            {gear_3_stabil_2_rot,0},
            {gear_3_damper_move,0},
            {canopy_rot,0},
            {ladder_hatch_l_rot,0},
            {ladder_hatch_r_rot,0},
            {display_off_hide,0},
            {avionics_damage,0},
            {display_cannon_rot,1},
            {display_cannon_rot_1,0},
            {display_cannon_rot_2,0},
            {display_missile_aa_1_rot,1},
            {display_missile_aa_1_rot_1,0},
            {display_missile_aa_1_rot_2,0},
            {display_missile_aa_2_rot,1},
            {display_missile_aa_2_rot_1,0},
            {display_missile_aa_2_rot_2,0},
            {display_missile_agm_2_1_rot,1},
            {display_missile_agm_2_1_rot_1,0},
            {display_missile_agm_2_1_rot_2,0},
            {display_missile_agm_1_1_rot,1},
            {display_missile_agm_1_1_rot_1,0},
            {display_missile_agm_1_1_rot_2,0},
            {display_missile_agm_2_2_rot,1},
            {display_missile_agm_2_2_rot_1,0},
            {display_missile_agm_2_2_rot_2,0},
            {display_missile_agm_1_2_rot,1},
            {display_missile_agm_1_2_rot_1,0},
            {display_missile_agm_1_2_rot_2,0},
            {display_rocketpod_2_rot,1},
            {display_rocketpod_2_rot_1,0},
            {display_rocketpod_2_rot_2,0},
            {display_rocketpod_1_rot,1},
            {display_rocketpod_1_rot_1,0},
            {display_rocketpod_1_rot_2,0},
            {display_bomb_1_rot,1},
            {display_bomb_1_rot_1,0},
            {display_bomb_1_rot_2,0},
            {display_bomb_2_rot,1},
            {display_bomb_2_rot_1,0},
            {display_bomb_2_rot_2,0},
            {display_cannon_slider_move,1},
            {display_rocketpod_1_slider_move,1},
            {display_rocketpod_2_slider_move,1},
            {display_horizon_rot_1,-0.03},
            {display_horizon_rot_2,0},
            {display_speed_rot,0},
            {display_compass_rot,0},
            {display_altitude_large_rot,7.98},
            {display_altitude_small_rot,7.98},
            {display_climb_rot,0},
            {display_engine_1_rot,0},
            {display_engine_2_rot,0},
            {display_engine_1_slider_move,0},
            {display_engine_2_slider_move,0},
            {display_gear_down_move,0},
            {display_gear_up_move,0},
            {controlstick_pitch_rot,0},
            {controlstick_roll_rot,0},
            {compass_rot,0},
            {cannon_muzzleflash_rot,878},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {pilotcamera_h,0},
            {pilotcamera_v,0.26},
            {unhidemfd,1}
        };
		hide[] =
        {
            clan,
            cannon_muzzleflash,
            gear_2_light_1_hide,
            gear_2_light_2_hide,
            gear_3_light_1_hide,
            gear_3_light_2_hide,
            gear_1_light_1_hide,
            gear_1_light_2_hide,
            "zadni svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.872;
		verticalOffsetWorld = -0.108;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Plane_CAS_02_dynamicLoadout_ghex_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Atlas_OPF_W_F;
	crew = Atlas_O_W_Fighter_Pilot_F;
	typicalCargo[] = {Atlas_O_W_Fighter_Pilot_F};
	textureList[] =
	{
		Grey,0,
		GreenHex,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_CAS_02\Data\Fighter02_ext01_ghex_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_CAS_02\Data\Fighter02_ext02_ghex_CO.paa"
	};
    class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = Atlas_O_W_Ejection_Seat_Plane_CAS_02_F;
	};
};