class Atlas_I_I_VTOL_01_infantry_F: VTOL_01_infantry_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {engine_1_rot,0.8},
            {engine_2_rot,0.8},
            {rotor_1_rot,0},
            {rotor_2_rot,0},
            {rudder_1_rot,0},
            {rudder_2_rot,0},
            {flap_1_1_move,0},
            {flap_1_2_move,0},
            {flap_2_1_move,0},
            {flap_2_2_move,0},
            {flap_1_1_rot,0},
            {flap_1_2_rot,0},
            {flap_2_1_rot,0},
            {flap_2_2_rot,0},
            {gear_1_move,0},
            {gear_2_move,0},
            {gear_3_move,0},
            {gear_1_hatch_1_rot,0},
            {gear_1_hatch_2_rot,0},
            {gear_1_hatch_3_rot,0},
            {gear_2_hatch_1_rot,0},
            {gear_2_hatch_2_rot,0},
            {gear_3_hatch_1_rot,0},
            {gear_3_hatch_2_rot,0},
            {wheel_1_1_rot,0.01},
            {wheel_1_2_rot,0.01},
            {wheel_2_1_rot,0.01},
            {wheel_2_2_rot,0.01},
            {wheel_2_3_rot,0.01},
            {wheel_3_1_rot,0.01},
            {wheel_3_2_rot,0.01},
            {wheel_3_3_rot,0.01},
            {gear_1_1_damper_move,1},
            {gear_1_2_damper_move,1},
            {gear_2_1_damper_move,1},
            {gear_2_2_damper_move,1},
            {gear_2_3_damper_move,1},
            {gear_3_1_damper_move,1},
            {gear_3_2_damper_move,1},
            {gear_3_3_damper_move,1},
            {door_1a_rot,0},
            {door_1b_rot,0},
            {positionlights_hide,0},
            {positionlight_white_1_hide,0},
            {positionlight_white_2_hide,0},
            {collisionlight_red_hide,0},
            {damage_hide,0},
            {rotor_1_blur_hide,0},
            {rotor_1_static_hide,0},
            {rotor_2_blur_hide,0},
            {rotor_2_static_hide,0},
            {copilot_flir_h_rot,0},
            {copilot_flir_v_rot,0},
            {display_off_hide,0},
            {avionics_damage,0},
            {display_climb_move,0},
            {display_climb_moveb,0},
            {display_altitude_small_rot,11.74},
            {display_altitude_large_rot,11.74},
            {display_altitude_small_rotb,11.74},
            {display_altitude_small_rotm,11.74},
            {display_altitudeb_large_rot,11.74},
            {display_altitudem_large_rot,11.74},
            {display_compass_rot,0},
            {display_compassb_rot,0},
            {display_compassm_rot,0},
            {display_flaps_1_rot,0},
            {display_flaps_2_rot,0},
            {display_flaps_1b_rot,0},
            {display_flaps_2b_rot,0},
            {display_gear_down_move,0},
            {display_gear_downb_move,0},
            {display_gear_up_move,0},
            {display_gear_upb_move,0},
            {display_speed_1_rot,0},
            {display_speed_1b_rot,0},
            {display_horizon_1_rot_1,0},
            {display_horizon_1b_rot_1,0},
            {display_horizon_1m_rot_1,0},
            {horizon_rot_1,0},
            {display_horizon_1_rot_2,0},
            {display_horizon_1b_rot_2,0},
            {display_horizon_1m_rot_2,0},
            {horizon_rot_2,0},
            {display_speed_2_rot_1,0},
            {display_speed_2b_rot_1,0},
            {display_speed_2_rot_2,0},
            {display_speed_2b_rot_2,0},
            {display_engine_1_rot,0},
            {display_engine_1b_rot,0},
            {display_engine_2_rot,0},
            {display_engine_2b_rot,0},
            {display_fuel_1_rot,1},
            {display_fuel_1b_rot,1},
            {display_fuel_2_rot,1},
            {display_fuel_2b_rot,1},
            {display_radar_off,0},
            {display_radar_source_off,0},
            {display_radar,0},
            {stick_control_1_pitch_rot,0},
            {stick_control_2_pitch_rot,0},
            {stick_control_1_roll_rot,0},
            {stick_control_2_roll_rot,0},
            {pedals_left_1_move,0},
            {pedals_right_1_move,0},
            {pedals_left_2_rot,0},
            {pedals_right_2_rot,0},
            {cargoseats_hide,0}
        };
		hide[] =
        {
            clan,
            zasleh,
            light_1_hide,
            light_2_hide,
            "zadni svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 6.739;
		verticalOffsetWorld = 0.049;
		init = "''";
	};
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_I_VTOL_01_infantry_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_I_I_VTOL_01_infantry_F0;
	side = TGuerrila;
	faction = Atlas_IND_I_F;
	crew = Atlas_I_I_Pilot_F;
	typicalCargo[] = {Atlas_I_I_Soldier_F};
	textureList[] = {Desert,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Air_F_Atlas\VTOL_01\Data\VTOL_01_EXT01_desert_CO.paa",
		"\A3_Atlas\Air_F_Atlas\VTOL_01\Data\VTOL_01_EXT02_desert_CO.paa",
		"\A3_Atlas\Air_F_Atlas\VTOL_01\Data\VTOL_01_EXT03_desert_CO.paa",
		"\A3_Atlas\Air_F_Atlas\VTOL_01\Data\VTOL_01_EXT04_desert_CO.paa",
		"\A3_Atlas\Air_F_Atlas\VTOL_01\Data\VTOL_01_signs_desert_CA.paa"
	};
};
class Atlas_I_I_VTOL_01_vehicle_F: VTOL_01_vehicle_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {engine_1_rot,0.8},
            {engine_2_rot,0.8},
            {rotor_1_rot,0},
            {rotor_2_rot,0},
            {rudder_1_rot,0},
            {rudder_2_rot,0},
            {flap_1_1_move,0},
            {flap_1_2_move,0},
            {flap_2_1_move,0},
            {flap_2_2_move,0},
            {flap_1_1_rot,0},
            {flap_1_2_rot,0},
            {flap_2_1_rot,0},
            {flap_2_2_rot,0},
            {gear_1_move,0},
            {gear_2_move,0},
            {gear_3_move,0},
            {gear_1_hatch_1_rot,0},
            {gear_1_hatch_2_rot,0},
            {gear_1_hatch_3_rot,0},
            {gear_2_hatch_1_rot,0},
            {gear_2_hatch_2_rot,0},
            {gear_3_hatch_1_rot,0},
            {gear_3_hatch_2_rot,0},
            {wheel_1_1_rot,-0.01},
            {wheel_1_2_rot,-0.01},
            {wheel_2_1_rot,-0.01},
            {wheel_2_2_rot,-0.01},
            {wheel_2_3_rot,-0.01},
            {wheel_3_1_rot,-0.01},
            {wheel_3_2_rot,-0.01},
            {wheel_3_3_rot,-0.01},
            {gear_1_1_damper_move,1},
            {gear_1_2_damper_move,1},
            {gear_2_1_damper_move,1},
            {gear_2_2_damper_move,1},
            {gear_2_3_damper_move,1},
            {gear_3_1_damper_move,1},
            {gear_3_2_damper_move,1},
            {gear_3_3_damper_move,1},
            {door_1a_rot,0},
            {door_1b_rot,0},
            {positionlights_hide,0},
            {positionlight_white_1_hide,0},
            {positionlight_white_2_hide,0},
            {collisionlight_red_hide,0},
            {damage_hide,0},
            {rotor_1_blur_hide,0},
            {rotor_1_static_hide,0},
            {rotor_2_blur_hide,0},
            {rotor_2_static_hide,0},
            {copilot_flir_h_rot,0},
            {copilot_flir_v_rot,0},
            {display_off_hide,0},
            {avionics_damage,0},
            {display_climb_move,0},
            {display_climb_moveb,0},
            {display_altitude_small_rot,11.74},
            {display_altitude_large_rot,11.74},
            {display_altitude_small_rotb,11.74},
            {display_altitude_small_rotm,11.74},
            {display_altitudeb_large_rot,11.74},
            {display_altitudem_large_rot,11.74},
            {display_compass_rot,0},
            {display_compassb_rot,0},
            {display_compassm_rot,0},
            {display_flaps_1_rot,0},
            {display_flaps_2_rot,0},
            {display_flaps_1b_rot,0},
            {display_flaps_2b_rot,0},
            {display_gear_down_move,0},
            {display_gear_downb_move,0},
            {display_gear_up_move,0},
            {display_gear_upb_move,0},
            {display_speed_1_rot,0},
            {display_speed_1b_rot,0},
            {display_horizon_1_rot_1,0},
            {display_horizon_1b_rot_1,0},
            {display_horizon_1m_rot_1,0},
            {horizon_rot_1,0},
            {display_horizon_1_rot_2,0},
            {display_horizon_1b_rot_2,0},
            {display_horizon_1m_rot_2,0},
            {horizon_rot_2,0},
            {display_speed_2_rot_1,0},
            {display_speed_2b_rot_1,0},
            {display_speed_2_rot_2,0},
            {display_speed_2b_rot_2,0},
            {display_engine_1_rot,0},
            {display_engine_1b_rot,0},
            {display_engine_2_rot,0},
            {display_engine_2b_rot,0},
            {display_fuel_1_rot,1},
            {display_fuel_1b_rot,1},
            {display_fuel_2_rot,1},
            {display_fuel_2b_rot,1},
            {display_radar_off,0},
            {display_radar_source_off,0},
            {display_radar,0},
            {stick_control_1_pitch_rot,0},
            {stick_control_2_pitch_rot,0},
            {stick_control_1_roll_rot,0},
            {stick_control_2_roll_rot,0},
            {pedals_left_1_move,0},
            {pedals_right_1_move,0},
            {pedals_left_2_rot,0},
            {pedals_right_2_rot,0},
            {cargoseats_hide,1}
        };
		hide[] =
        {
            clan,
            zasleh,
            light_1_hide,
            light_2_hide,
            "zadni svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 6.739;
		verticalOffsetWorld = 0.049;
		init = "''";
	};
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_I_VTOL_01_vehicle_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_I_I_VTOL_01_vehicle_F0;
	side = TGuerrila;
	faction = Atlas_IND_I_F;
	crew = Atlas_I_I_Pilot_F;
	typicalCargo[] = {Atlas_I_I_Soldier_F};
	textureList[] = {Desert,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Air_F_Atlas\VTOL_01\Data\VTOL_01_EXT01_desert_CO.paa",
		"\A3_Atlas\Air_F_Atlas\VTOL_01\Data\VTOL_01_EXT02_desert_CO.paa",
		"\A3_Atlas\Air_F_Atlas\VTOL_01\Data\VTOL_01_EXT03_desert_CO.paa",
		"\A3_Atlas\Air_F_Atlas\VTOL_01\Data\VTOL_01_EXT04_desert_CO.paa",
		"\A3_Atlas\Air_F_Atlas\VTOL_01\Data\VTOL_01_signs_desert_CA.paa"
	};
};
class VTOL_01_armed_base_F;
class Atlas_I_I_VTOL_01_armed_F: VTOL_01_armed_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {engine_1_rot,0.8},
            {engine_2_rot,0.8},
            {rotor_1_rot,0},
            {rotor_2_rot,0},
            {rudder_1_rot,0},
            {rudder_2_rot,0},
            {flap_1_1_move,0},
            {flap_1_2_move,0},
            {flap_2_1_move,0},
            {flap_2_2_move,0},
            {flap_1_1_rot,0},
            {flap_1_2_rot,0},
            {flap_2_1_rot,0},
            {flap_2_2_rot,0},
            {gear_1_move,0},
            {gear_2_move,0},
            {gear_3_move,0},
            {gear_1_hatch_1_rot,0},
            {gear_1_hatch_2_rot,0},
            {gear_1_hatch_3_rot,0},
            {gear_2_hatch_1_rot,0},
            {gear_2_hatch_2_rot,0},
            {gear_3_hatch_1_rot,0},
            {gear_3_hatch_2_rot,0},
            {wheel_1_1_rot,0},
            {wheel_1_2_rot,0},
            {wheel_2_1_rot,0},
            {wheel_2_2_rot,0},
            {wheel_2_3_rot,0},
            {wheel_3_1_rot,0},
            {wheel_3_2_rot,0},
            {wheel_3_3_rot,0},
            {gear_1_1_damper_move,1},
            {gear_1_2_damper_move,1},
            {gear_2_1_damper_move,1},
            {gear_2_2_damper_move,1},
            {gear_2_3_damper_move,1},
            {gear_3_1_damper_move,1},
            {gear_3_2_damper_move,1},
            {gear_3_3_damper_move,1},
            {door_1a_rot,0},
            {door_1b_rot,0},
            {positionlights_hide,0},
            {positionlight_white_1_hide,0},
            {positionlight_white_2_hide,0},
            {collisionlight_red_hide,0},
            {damage_hide,0},
            {rotor_1_blur_hide,0},
            {rotor_1_static_hide,0},
            {rotor_2_blur_hide,0},
            {rotor_2_static_hide,0},
            {copilot_flir_h_rot,0},
            {copilot_flir_v_rot,0},
            {display_off_hide,0},
            {avionics_damage,0},
            {display_climb_move,0},
            {display_climb_moveb,0},
            {display_altitude_small_rot,11.74},
            {display_altitude_large_rot,11.74},
            {display_altitude_small_rotb,11.74},
            {display_altitude_small_rotm,11.74},
            {display_altitudeb_large_rot,11.74},
            {display_altitudem_large_rot,11.74},
            {display_compass_rot,0},
            {display_compassb_rot,0},
            {display_compassm_rot,0},
            {display_flaps_1_rot,0},
            {display_flaps_2_rot,0},
            {display_flaps_1b_rot,0},
            {display_flaps_2b_rot,0},
            {display_gear_down_move,0},
            {display_gear_downb_move,0},
            {display_gear_up_move,0},
            {display_gear_upb_move,0},
            {display_speed_1_rot,0},
            {display_speed_1b_rot,0},
            {display_horizon_1_rot_1,0},
            {display_horizon_1b_rot_1,0},
            {display_horizon_1m_rot_1,0},
            {horizon_rot_1,0},
            {display_horizon_1_rot_2,0},
            {display_horizon_1b_rot_2,0},
            {display_horizon_1m_rot_2,0},
            {horizon_rot_2,0},
            {display_speed_2_rot_1,0},
            {display_speed_2b_rot_1,0},
            {display_speed_2_rot_2,0},
            {display_speed_2b_rot_2,0},
            {display_engine_1_rot,0},
            {display_engine_1b_rot,0},
            {display_engine_2_rot,0},
            {display_engine_2b_rot,0},
            {display_fuel_1_rot,1},
            {display_fuel_1b_rot,1},
            {display_fuel_2_rot,1},
            {display_fuel_2b_rot,1},
            {display_radar_off,0},
            {display_radar_source_off,0},
            {display_radar,0},
            {stick_control_1_pitch_rot,0},
            {stick_control_2_pitch_rot,0},
            {stick_control_1_roll_rot,0},
            {stick_control_2_roll_rot,0},
            {pedals_left_1_move,0},
            {pedals_right_1_move,0},
            {pedals_left_2_rot,0},
            {pedals_right_2_rot,0},
            {gunner01_flir_h_rot,1.57},
            {gunner01_flir_v_rot,0},
            {gatling_turret_rot,1.57},
            {gatling_rot,0},
            {gatling_muzzleflash_hide,0},
            {gatling_barrels_rot,1},
            {howitzer_turret_rot,1.57},
            {howitzer_rot,0},
            {howitzer_muzzleflash_hide,0},
            {gunner02_flir_h_rot,1.57},
            {gunner02_flir_v_rot,0},
            {cannon_turret_rot,1.57},
            {cannon_rot,0},
            {cannon_muzzleflash_hide,0},
            {cannon_barrel_move,1},
            {cannon_barrel_hide,0},
            {gatling_barrels_hide,0},
            {howitzer_barrel_hide,0}
        };
		hide[] =
        {
            clan,
            zasleh,
            light_1_hide,
            light_2_hide,
            "zadni svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 6.739;
		verticalOffsetWorld = 0.049;
		init = "''";
	};
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_I_VTOL_01_armed_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_I_I_VTOL_01_armed_F0;
	side = TGuerrila;
	faction = Atlas_IND_I_F;
	crew = Atlas_I_I_Pilot_F;
	typicalCargo[] = {Atlas_I_I_Soldier_F};
	textureList[] = {Desert,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Air_F_Atlas\VTOL_01\Data\VTOL_01_EXT01_desert_CO.paa",
		"\A3_Atlas\Air_F_Atlas\VTOL_01\Data\VTOL_01_EXT02_desert_CO.paa",
		"\A3_Atlas\Air_F_Atlas\VTOL_01\Data\VTOL_01_EXT03_desert_CO.paa",
		"\A3_Atlas\Air_F_Atlas\VTOL_01\Data\VTOL_01_EXT04_desert_CO.paa",
		"\A3_Atlas\Air_F_Atlas\VTOL_01\Data\VTOL_01_signs_desert_CA.paa"
	};
};