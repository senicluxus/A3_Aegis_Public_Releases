/* Russia */
class O_R_Heli_Transport_04_F: O_Heli_Transport_04_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {rotor_1_rot,0},
            {rotor_2_rot,0},
            {rotor_1_bend_move,0},
            {rotor_2_bend_move,0},
            {rotor_1_destruct_hide,0},
            {rotor_2_destruct_hide,0},
            {gear_1_damper_move,-0.33},
            {gear_1_stabil_1_rot,-0.33},
            {gear_1_stabil_2_rot,-0.33},
            {gear_2_damper_move,-0.33},
            {gear_2_stabil_1_rot,-0.33},
            {gear_2_stabil_2_rot,-0.33},
            {gear_3_damper_move,-0.33},
            {gear_3_stabil_1_rot,-0.33},
            {gear_3_stabil_2_rot,-0.33},
            {door_1_rot,0},
            {door_1_handle_rot,0},
            {door_2_rot,0},
            {door_2_handle_rot,0},
            {door_3_rot,0},
            {door_3_handle_rot,0},
            {display_off_hide,0},
            {display_1_agl_rot_1,-0.33},
            {display_1_agl_rot_2,-0.33},
            {display_1_agl_rot_3,-0.33},
            {display_1_asl_10_rot,7.83},
            {display_1_asl_100_rot,7.83},
            {display_1_battery_1_rot,1},
            {display_1_battery_2_rot,1},
            {display_1_collective_move,0},
            {display_1_compass_rot,0},
            {display_1_enginetemp_1_rot,0},
            {display_1_enginetemp_2_rot,0},
            {display_1_fuel_rot,1},
            {display_1_horizon_bank_rot,0},
            {display_1_horizon_dive_move,0},
            {display_1_oil_rot,1},
            {display_1_rpm_rot,0},
            {display_1_speed_rot_1,0},
            {display_1_speed_rot_2,0},
            {display_1_torque_rot_1,0},
            {display_1_torque_rot_2,0},
            {display_1_verticalspeed_slider_move,0},
            {display_1_verticalspeed_rot_1,0},
            {display_1_verticalspeed_rot_2,0},
            {display_1_verticalspeed_rot_3,0},
            {display_2_agl_rot_1,-0.33},
            {display_2_agl_rot_2,-0.33},
            {display_2_agl_rot_3,-0.33},
            {display_2_asl_10_rot,7.83},
            {display_2_asl_100_rot,7.83},
            {display_2_battery_1_rot,1},
            {display_2_battery_2_rot,1},
            {display_2_collective_move,0},
            {display_2_compass_rot,0},
            {display_2_enginetemp_1_rot,0},
            {display_2_enginetemp_2_rot,0},
            {display_2_fuel_rot,1},
            {display_2_horizon_bank_rot,0},
            {display_2_horizon_dive_move,0},
            {display_2_oil_rot,1},
            {display_2_rpm_rot,0},
            {display_2_speed_rot_1,0},
            {display_2_speed_rot_2,0},
            {display_2_torque_rot_1,0},
            {display_2_torque_rot_2,0},
            {display_2_verticalspeed_slider_move,0},
            {display_2_verticalspeed_rot_1,0},
            {display_2_verticalspeed_rot_2,0},
            {display_2_verticalspeed_rot_3,0},
            {indicator_agl_rot_1,-0.33},
            {indicator_agl_rot_2,-0.33},
            {indicator_agl_rot_3,-0.33},
            {indicator_horizon_bank_rot,0},
            {indicator_horizon_dive_rot,0},
            {indicator_speed_rot_1,0},
            {indicator_speed_rot_2,0},
            {indicator_verticalspeed_rot_1,0},
            {indicator_verticalspeed_rot_2,0},
            {indicator_verticalspeed_rot_3,0},
            {display_agl_0xxx_hide,-0.33},
            {display_agl_1xxx_hide,-0.33},
            {display_agl_2xxx_hide,-0.33},
            {display_agl_3xxx_hide,-0.33},
            {display_agl_4xxx_hide,-0.33},
            {display_agl_5xxx_hide,-0.33},
            {display_agl_6xxx_hide,-0.33},
            {display_agl_7xxx_hide,-0.33},
            {display_agl_8xxx_hide,-0.33},
            {display_agl_9xxx_hide,-0.33},
            {display_agl_x0xx_hide,-0.33},
            {display_agl_x1xx_hide,-0.33},
            {display_agl_x2xx_hide,-0.33},
            {display_agl_x3xx_hide,-0.33},
            {display_agl_x4xx_hide,-0.33},
            {display_agl_x5xx_hide,-0.33},
            {display_agl_x6xx_hide,-0.33},
            {display_agl_x7xx_hide,-0.33},
            {display_agl_x8xx_hide,-0.33},
            {display_agl_x9xx_hide,-0.33},
            {display_agl_xx0x_hide,-0.33},
            {display_agl_xx1x_hide,-0.33},
            {display_agl_xx2x_hide,-0.33},
            {display_agl_xx3x_hide,-0.33},
            {display_agl_xx4x_hide,-0.33},
            {display_agl_xx5x_hide,-0.33},
            {display_agl_xx6x_hide,-0.33},
            {display_agl_xx7x_hide,-0.33},
            {display_agl_xx8x_hide,-0.33},
            {display_agl_xx9x_hide,-0.33},
            {display_agl_xxx0_hide,-0.33},
            {display_agl_xxx1_hide,-0.33},
            {display_agl_xxx2_hide,-0.33},
            {display_agl_xxx3_hide,-0.33},
            {display_agl_xxx4_hide,-0.33},
            {display_agl_xxx5_hide,-0.33},
            {display_agl_xxx6_hide,-0.33},
            {display_agl_xxx7_hide,-0.33},
            {display_agl_xxx8_hide,-0.33},
            {display_agl_xxx9_hide,-0.33},
            {display_speed_0xx_hide,0},
            {display_speed_1xx_hide,0},
            {display_speed_2xx_hide,0},
            {display_speed_3xx_hide,0},
            {display_speed_4xx_hide,0},
            {display_speed_5xx_hide,0},
            {display_speed_6xx_hide,0},
            {display_speed_7xx_hide,0},
            {display_speed_8xx_hide,0},
            {display_speed_9xx_hide,0},
            {display_speed_x0x_hide,0},
            {display_speed_x1x_hide,0},
            {display_speed_x2x_hide,0},
            {display_speed_x3x_hide,0},
            {display_speed_x4x_hide,0},
            {display_speed_x5x_hide,0},
            {display_speed_x6x_hide,0},
            {display_speed_x7x_hide,0},
            {display_speed_x8x_hide,0},
            {display_speed_x9x_hide,0},
            {display_speed_xx0_hide,0},
            {display_speed_xx1_hide,0},
            {display_speed_xx2_hide,0},
            {display_speed_xx3_hide,0},
            {display_speed_xx4_hide,0},
            {display_speed_xx5_hide,0},
            {display_speed_xx6_hide,0},
            {display_speed_xx7_hide,0},
            {display_speed_xx8_hide,0},
            {display_speed_xx9_hide,0},
            {stick_control_1_pitch_rot,0},
            {stick_control_2_pitch_rot,0},
            {stick_control_1_roll_rot,0},
            {stick_control_2_roll_rot,0},
            {stick_collective_1_rot,0},
            {stick_collective_2_rot,0},
            {pedals_left_1_move,0},
            {pedals_right_1_move,0},
            {pedals_left_2_rot,0},
            {pedals_right_2_rot,0},
            {optics_1_rot,0},
            {optics_1_muzzle_rot,0},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {winch_hide,0}
        };
		hide[] =
        {
            zasleh,
            light_1_hide,
            rotor_1_blur,
            rotor_2_blur,
            "zadni svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.828;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Heli_Transport_04_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_R_Heli_Transport_04_F0;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_helipilot_F;
	typicalCargo[] = {O_R_Soldier_lite_F};
	textureList[] = {Russian2,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_RUS_01_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_RUS_02_CO.paa"
	};

    /* Turrets */
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class LoadmasterTurret: LoadmasterTurret
		{
			gunnerType = O_R_helicrew_F;
		};
	};
};
class O_R_Heli_Transport_04_ammo_F: O_Heli_Transport_04_ammo_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {rotor_1_rot,0},
            {rotor_2_rot,0},
            {rotor_1_bend_move,0},
            {rotor_2_bend_move,0},
            {rotor_1_destruct_hide,0},
            {rotor_2_destruct_hide,0},
            {gear_1_damper_move,-0.33},
            {gear_1_stabil_1_rot,-0.33},
            {gear_1_stabil_2_rot,-0.33},
            {gear_2_damper_move,-0.33},
            {gear_2_stabil_1_rot,-0.33},
            {gear_2_stabil_2_rot,-0.33},
            {gear_3_damper_move,-0.33},
            {gear_3_stabil_1_rot,-0.33},
            {gear_3_stabil_2_rot,-0.33},
            {door_1_rot,0},
            {door_1_handle_rot,0},
            {door_2_rot,0},
            {door_2_handle_rot,0},
            {door_3_rot,0},
            {door_3_handle_rot,0},
            {display_off_hide,0},
            {display_1_agl_rot_1,-0.33},
            {display_1_agl_rot_2,-0.33},
            {display_1_agl_rot_3,-0.33},
            {display_1_asl_10_rot,7.59},
            {display_1_asl_100_rot,7.59},
            {display_1_battery_1_rot,1},
            {display_1_battery_2_rot,1},
            {display_1_collective_move,0},
            {display_1_compass_rot,0},
            {display_1_enginetemp_1_rot,0},
            {display_1_enginetemp_2_rot,0},
            {display_1_fuel_rot,1},
            {display_1_horizon_bank_rot,0},
            {display_1_horizon_dive_move,0},
            {display_1_oil_rot,1},
            {display_1_rpm_rot,0},
            {display_1_speed_rot_1,0},
            {display_1_speed_rot_2,0},
            {display_1_torque_rot_1,0},
            {display_1_torque_rot_2,0},
            {display_1_verticalspeed_slider_move,0},
            {display_1_verticalspeed_rot_1,0},
            {display_1_verticalspeed_rot_2,0},
            {display_1_verticalspeed_rot_3,0},
            {display_2_agl_rot_1,-0.33},
            {display_2_agl_rot_2,-0.33},
            {display_2_agl_rot_3,-0.33},
            {display_2_asl_10_rot,7.59},
            {display_2_asl_100_rot,7.59},
            {display_2_battery_1_rot,1},
            {display_2_battery_2_rot,1},
            {display_2_collective_move,0},
            {display_2_compass_rot,0},
            {display_2_enginetemp_1_rot,0},
            {display_2_enginetemp_2_rot,0},
            {display_2_fuel_rot,1},
            {display_2_horizon_bank_rot,0},
            {display_2_horizon_dive_move,0},
            {display_2_oil_rot,1},
            {display_2_rpm_rot,0},
            {display_2_speed_rot_1,0},
            {display_2_speed_rot_2,0},
            {display_2_torque_rot_1,0},
            {display_2_torque_rot_2,0},
            {display_2_verticalspeed_slider_move,0},
            {display_2_verticalspeed_rot_1,0},
            {display_2_verticalspeed_rot_2,0},
            {display_2_verticalspeed_rot_3,0},
            {indicator_agl_rot_1,-0.33},
            {indicator_agl_rot_2,-0.33},
            {indicator_agl_rot_3,-0.33},
            {indicator_horizon_bank_rot,0},
            {indicator_horizon_dive_rot,0},
            {indicator_speed_rot_1,0},
            {indicator_speed_rot_2,0},
            {indicator_verticalspeed_rot_1,0},
            {indicator_verticalspeed_rot_2,0},
            {indicator_verticalspeed_rot_3,0},
            {display_agl_0xxx_hide,-0.33},
            {display_agl_1xxx_hide,-0.33},
            {display_agl_2xxx_hide,-0.33},
            {display_agl_3xxx_hide,-0.33},
            {display_agl_4xxx_hide,-0.33},
            {display_agl_5xxx_hide,-0.33},
            {display_agl_6xxx_hide,-0.33},
            {display_agl_7xxx_hide,-0.33},
            {display_agl_8xxx_hide,-0.33},
            {display_agl_9xxx_hide,-0.33},
            {display_agl_x0xx_hide,-0.33},
            {display_agl_x1xx_hide,-0.33},
            {display_agl_x2xx_hide,-0.33},
            {display_agl_x3xx_hide,-0.33},
            {display_agl_x4xx_hide,-0.33},
            {display_agl_x5xx_hide,-0.33},
            {display_agl_x6xx_hide,-0.33},
            {display_agl_x7xx_hide,-0.33},
            {display_agl_x8xx_hide,-0.33},
            {display_agl_x9xx_hide,-0.33},
            {display_agl_xx0x_hide,-0.33},
            {display_agl_xx1x_hide,-0.33},
            {display_agl_xx2x_hide,-0.33},
            {display_agl_xx3x_hide,-0.33},
            {display_agl_xx4x_hide,-0.33},
            {display_agl_xx5x_hide,-0.33},
            {display_agl_xx6x_hide,-0.33},
            {display_agl_xx7x_hide,-0.33},
            {display_agl_xx8x_hide,-0.33},
            {display_agl_xx9x_hide,-0.33},
            {display_agl_xxx0_hide,-0.33},
            {display_agl_xxx1_hide,-0.33},
            {display_agl_xxx2_hide,-0.33},
            {display_agl_xxx3_hide,-0.33},
            {display_agl_xxx4_hide,-0.33},
            {display_agl_xxx5_hide,-0.33},
            {display_agl_xxx6_hide,-0.33},
            {display_agl_xxx7_hide,-0.33},
            {display_agl_xxx8_hide,-0.33},
            {display_agl_xxx9_hide,-0.33},
            {display_speed_0xx_hide,0},
            {display_speed_1xx_hide,0},
            {display_speed_2xx_hide,0},
            {display_speed_3xx_hide,0},
            {display_speed_4xx_hide,0},
            {display_speed_5xx_hide,0},
            {display_speed_6xx_hide,0},
            {display_speed_7xx_hide,0},
            {display_speed_8xx_hide,0},
            {display_speed_9xx_hide,0},
            {display_speed_x0x_hide,0},
            {display_speed_x1x_hide,0},
            {display_speed_x2x_hide,0},
            {display_speed_x3x_hide,0},
            {display_speed_x4x_hide,0},
            {display_speed_x5x_hide,0},
            {display_speed_x6x_hide,0},
            {display_speed_x7x_hide,0},
            {display_speed_x8x_hide,0},
            {display_speed_x9x_hide,0},
            {display_speed_xx0_hide,0},
            {display_speed_xx1_hide,0},
            {display_speed_xx2_hide,0},
            {display_speed_xx3_hide,0},
            {display_speed_xx4_hide,0},
            {display_speed_xx5_hide,0},
            {display_speed_xx6_hide,0},
            {display_speed_xx7_hide,0},
            {display_speed_xx8_hide,0},
            {display_speed_xx9_hide,0},
            {stick_control_1_pitch_rot,0},
            {stick_control_2_pitch_rot,0},
            {stick_control_1_roll_rot,0},
            {stick_control_2_roll_rot,0},
            {stick_collective_1_rot,0},
            {stick_collective_2_rot,0},
            {pedals_left_1_move,0},
            {pedals_right_1_move,0},
            {pedals_left_2_rot,0},
            {pedals_right_2_rot,0},
            {optics_1_rot,0},
            {optics_1_muzzle_rot,0},
            {positionlights,0},
            {collisionlight_red_blinking,0}
        };
		hide[] =
        {
            zasleh,
            light_1_hide,
            rotor_1_blur,
            rotor_2_blur,
            "zadni svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.592;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Heli_Transport_04_ammo_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_R_Heli_Transport_04_ammo_F0;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_helipilot_F;
	typicalCargo[] = {O_R_Soldier_lite_F};
	textureList[] = {Russian2,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_RUS_02_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_RUS2_02_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_RUS_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_RUS_CO.paa"
	};

    /* Turrets */
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class LoadmasterTurret: LoadmasterTurret
		{
			gunnerType = O_R_helicrew_F;
		};
	};
};
class O_R_Heli_Transport_04_bench_F: O_Heli_Transport_04_bench_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {rotor_1_rot,0},
            {rotor_2_rot,0},
            {rotor_1_bend_move,0},
            {rotor_2_bend_move,0},
            {rotor_1_destruct_hide,0},
            {rotor_2_destruct_hide,0},
            {gear_1_damper_move,-0.33},
            {gear_1_stabil_1_rot,-0.33},
            {gear_1_stabil_2_rot,-0.33},
            {gear_2_damper_move,-0.33},
            {gear_2_stabil_1_rot,-0.33},
            {gear_2_stabil_2_rot,-0.33},
            {gear_3_damper_move,-0.33},
            {gear_3_stabil_1_rot,-0.33},
            {gear_3_stabil_2_rot,-0.33},
            {door_1_rot,0},
            {door_1_handle_rot,0},
            {door_2_rot,0},
            {door_2_handle_rot,0},
            {door_3_rot,0},
            {door_3_handle_rot,0},
            {display_off_hide,0},
            {display_1_agl_rot_1,-0.33},
            {display_1_agl_rot_2,-0.33},
            {display_1_agl_rot_3,-0.33},
            {display_1_asl_10_rot,7.83},
            {display_1_asl_100_rot,7.83},
            {display_1_battery_1_rot,1},
            {display_1_battery_2_rot,1},
            {display_1_collective_move,0},
            {display_1_compass_rot,0},
            {display_1_enginetemp_1_rot,0},
            {display_1_enginetemp_2_rot,0},
            {display_1_fuel_rot,1},
            {display_1_horizon_bank_rot,0},
            {display_1_horizon_dive_move,0},
            {display_1_oil_rot,1},
            {display_1_rpm_rot,0},
            {display_1_speed_rot_1,0},
            {display_1_speed_rot_2,0},
            {display_1_torque_rot_1,0},
            {display_1_torque_rot_2,0},
            {display_1_verticalspeed_slider_move,0},
            {display_1_verticalspeed_rot_1,0},
            {display_1_verticalspeed_rot_2,0},
            {display_1_verticalspeed_rot_3,0},
            {display_2_agl_rot_1,-0.33},
            {display_2_agl_rot_2,-0.33},
            {display_2_agl_rot_3,-0.33},
            {display_2_asl_10_rot,7.83},
            {display_2_asl_100_rot,7.83},
            {display_2_battery_1_rot,1},
            {display_2_battery_2_rot,1},
            {display_2_collective_move,0},
            {display_2_compass_rot,0},
            {display_2_enginetemp_1_rot,0},
            {display_2_enginetemp_2_rot,0},
            {display_2_fuel_rot,1},
            {display_2_horizon_bank_rot,0},
            {display_2_horizon_dive_move,0},
            {display_2_oil_rot,1},
            {display_2_rpm_rot,0},
            {display_2_speed_rot_1,0},
            {display_2_speed_rot_2,0},
            {display_2_torque_rot_1,0},
            {display_2_torque_rot_2,0},
            {display_2_verticalspeed_slider_move,0},
            {display_2_verticalspeed_rot_1,0},
            {display_2_verticalspeed_rot_2,0},
            {display_2_verticalspeed_rot_3,0},
            {indicator_agl_rot_1,-0.33},
            {indicator_agl_rot_2,-0.33},
            {indicator_agl_rot_3,-0.33},
            {indicator_horizon_bank_rot,0},
            {indicator_horizon_dive_rot,0},
            {indicator_speed_rot_1,0},
            {indicator_speed_rot_2,0},
            {indicator_verticalspeed_rot_1,0},
            {indicator_verticalspeed_rot_2,0},
            {indicator_verticalspeed_rot_3,0},
            {display_agl_0xxx_hide,-0.33},
            {display_agl_1xxx_hide,-0.33},
            {display_agl_2xxx_hide,-0.33},
            {display_agl_3xxx_hide,-0.33},
            {display_agl_4xxx_hide,-0.33},
            {display_agl_5xxx_hide,-0.33},
            {display_agl_6xxx_hide,-0.33},
            {display_agl_7xxx_hide,-0.33},
            {display_agl_8xxx_hide,-0.33},
            {display_agl_9xxx_hide,-0.33},
            {display_agl_x0xx_hide,-0.33},
            {display_agl_x1xx_hide,-0.33},
            {display_agl_x2xx_hide,-0.33},
            {display_agl_x3xx_hide,-0.33},
            {display_agl_x4xx_hide,-0.33},
            {display_agl_x5xx_hide,-0.33},
            {display_agl_x6xx_hide,-0.33},
            {display_agl_x7xx_hide,-0.33},
            {display_agl_x8xx_hide,-0.33},
            {display_agl_x9xx_hide,-0.33},
            {display_agl_xx0x_hide,-0.33},
            {display_agl_xx1x_hide,-0.33},
            {display_agl_xx2x_hide,-0.33},
            {display_agl_xx3x_hide,-0.33},
            {display_agl_xx4x_hide,-0.33},
            {display_agl_xx5x_hide,-0.33},
            {display_agl_xx6x_hide,-0.33},
            {display_agl_xx7x_hide,-0.33},
            {display_agl_xx8x_hide,-0.33},
            {display_agl_xx9x_hide,-0.33},
            {display_agl_xxx0_hide,-0.33},
            {display_agl_xxx1_hide,-0.33},
            {display_agl_xxx2_hide,-0.33},
            {display_agl_xxx3_hide,-0.33},
            {display_agl_xxx4_hide,-0.33},
            {display_agl_xxx5_hide,-0.33},
            {display_agl_xxx6_hide,-0.33},
            {display_agl_xxx7_hide,-0.33},
            {display_agl_xxx8_hide,-0.33},
            {display_agl_xxx9_hide,-0.33},
            {display_speed_0xx_hide,0},
            {display_speed_1xx_hide,0},
            {display_speed_2xx_hide,0},
            {display_speed_3xx_hide,0},
            {display_speed_4xx_hide,0},
            {display_speed_5xx_hide,0},
            {display_speed_6xx_hide,0},
            {display_speed_7xx_hide,0},
            {display_speed_8xx_hide,0},
            {display_speed_9xx_hide,0},
            {display_speed_x0x_hide,0},
            {display_speed_x1x_hide,0},
            {display_speed_x2x_hide,0},
            {display_speed_x3x_hide,0},
            {display_speed_x4x_hide,0},
            {display_speed_x5x_hide,0},
            {display_speed_x6x_hide,0},
            {display_speed_x7x_hide,0},
            {display_speed_x8x_hide,0},
            {display_speed_x9x_hide,0},
            {display_speed_xx0_hide,0},
            {display_speed_xx1_hide,0},
            {display_speed_xx2_hide,0},
            {display_speed_xx3_hide,0},
            {display_speed_xx4_hide,0},
            {display_speed_xx5_hide,0},
            {display_speed_xx6_hide,0},
            {display_speed_xx7_hide,0},
            {display_speed_xx8_hide,0},
            {display_speed_xx9_hide,0},
            {stick_control_1_pitch_rot,0},
            {stick_control_2_pitch_rot,0},
            {stick_control_1_roll_rot,0},
            {stick_control_2_roll_rot,0},
            {stick_collective_1_rot,0},
            {stick_collective_2_rot,0},
            {pedals_left_1_move,0},
            {pedals_right_1_move,0},
            {pedals_left_2_rot,0},
            {pedals_right_2_rot,0},
            {optics_1_rot,0},
            {optics_1_muzzle_rot,0},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {bench_default_hide,0},
            {bench_black_hide,1}
        };
		hide[] =
        {
            zasleh,
            light_1_hide,
            rotor_1_blur,
            rotor_2_blur,
            "zadni svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.828;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Heli_Transport_04_bench_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_R_Heli_Transport_04_bench_F0;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_helipilot_F;
	typicalCargo[] = {O_R_Soldier_lite_F};
	textureList[] = {Russian2,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_RUS_02_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_RUS2_02_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Bench_black_CO.paa"
	};

    /* Turrets */
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class LoadmasterTurret: LoadmasterTurret
		{
			gunnerType = O_R_helicrew_F;
		};
		class CargoTurret_01: CargoTurret_01{};
		class CargoTurret_02: CargoTurret_02{};
		class CargoTurret_03: CargoTurret_03{};
		class CargoTurret_04: CargoTurret_04{};
		class CargoTurret_05: CargoTurret_05{};
		class CargoTurret_06: CargoTurret_06{};
		class CargoTurret_07: CargoTurret_07{};
		class CargoTurret_08: CargoTurret_08{};
	};

    /* Animation Sources */
	class AnimationSources: AnimationSources
	{
		class Bench_default_source: Bench_default_source
		{
			initPhase = true;
		};
		class Bench_black_source: Bench_black_source
		{
			initPhase = false;
		};
	};
};
class O_R_Heli_Transport_04_box_F: O_Heli_Transport_04_box_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {rotor_1_rot,0},
            {rotor_2_rot,0},
            {rotor_1_bend_move,0},
            {rotor_2_bend_move,0},
            {rotor_1_destruct_hide,0},
            {rotor_2_destruct_hide,0},
            {gear_1_damper_move,-0.33},
            {gear_1_stabil_1_rot,-0.33},
            {gear_1_stabil_2_rot,-0.33},
            {gear_2_damper_move,-0.33},
            {gear_2_stabil_1_rot,-0.33},
            {gear_2_stabil_2_rot,-0.33},
            {gear_3_damper_move,-0.33},
            {gear_3_stabil_1_rot,-0.33},
            {gear_3_stabil_2_rot,-0.33},
            {door_1_rot,0},
            {door_1_handle_rot,0},
            {door_2_rot,0},
            {door_2_handle_rot,0},
            {door_3_rot,0},
            {door_3_handle_rot,0},
            {display_off_hide,0},
            {display_1_agl_rot_1,-0.33},
            {display_1_agl_rot_2,-0.33},
            {display_1_agl_rot_3,-0.33},
            {display_1_asl_10_rot,7.59},
            {display_1_asl_100_rot,7.59},
            {display_1_battery_1_rot,1},
            {display_1_battery_2_rot,1},
            {display_1_collective_move,0},
            {display_1_compass_rot,0},
            {display_1_enginetemp_1_rot,0},
            {display_1_enginetemp_2_rot,0},
            {display_1_fuel_rot,1},
            {display_1_horizon_bank_rot,0},
            {display_1_horizon_dive_move,0},
            {display_1_oil_rot,1},
            {display_1_rpm_rot,0},
            {display_1_speed_rot_1,0},
            {display_1_speed_rot_2,0},
            {display_1_torque_rot_1,0},
            {display_1_torque_rot_2,0},
            {display_1_verticalspeed_slider_move,0},
            {display_1_verticalspeed_rot_1,0},
            {display_1_verticalspeed_rot_2,0},
            {display_1_verticalspeed_rot_3,0},
            {display_2_agl_rot_1,-0.33},
            {display_2_agl_rot_2,-0.33},
            {display_2_agl_rot_3,-0.33},
            {display_2_asl_10_rot,7.59},
            {display_2_asl_100_rot,7.59},
            {display_2_battery_1_rot,1},
            {display_2_battery_2_rot,1},
            {display_2_collective_move,0},
            {display_2_compass_rot,0},
            {display_2_enginetemp_1_rot,0},
            {display_2_enginetemp_2_rot,0},
            {display_2_fuel_rot,1},
            {display_2_horizon_bank_rot,0},
            {display_2_horizon_dive_move,0},
            {display_2_oil_rot,1},
            {display_2_rpm_rot,0},
            {display_2_speed_rot_1,0},
            {display_2_speed_rot_2,0},
            {display_2_torque_rot_1,0},
            {display_2_torque_rot_2,0},
            {display_2_verticalspeed_slider_move,0},
            {display_2_verticalspeed_rot_1,0},
            {display_2_verticalspeed_rot_2,0},
            {display_2_verticalspeed_rot_3,0},
            {indicator_agl_rot_1,-0.33},
            {indicator_agl_rot_2,-0.33},
            {indicator_agl_rot_3,-0.33},
            {indicator_horizon_bank_rot,0},
            {indicator_horizon_dive_rot,0},
            {indicator_speed_rot_1,0},
            {indicator_speed_rot_2,0},
            {indicator_verticalspeed_rot_1,0},
            {indicator_verticalspeed_rot_2,0},
            {indicator_verticalspeed_rot_3,0},
            {display_agl_0xxx_hide,-0.33},
            {display_agl_1xxx_hide,-0.33},
            {display_agl_2xxx_hide,-0.33},
            {display_agl_3xxx_hide,-0.33},
            {display_agl_4xxx_hide,-0.33},
            {display_agl_5xxx_hide,-0.33},
            {display_agl_6xxx_hide,-0.33},
            {display_agl_7xxx_hide,-0.33},
            {display_agl_8xxx_hide,-0.33},
            {display_agl_9xxx_hide,-0.33},
            {display_agl_x0xx_hide,-0.33},
            {display_agl_x1xx_hide,-0.33},
            {display_agl_x2xx_hide,-0.33},
            {display_agl_x3xx_hide,-0.33},
            {display_agl_x4xx_hide,-0.33},
            {display_agl_x5xx_hide,-0.33},
            {display_agl_x6xx_hide,-0.33},
            {display_agl_x7xx_hide,-0.33},
            {display_agl_x8xx_hide,-0.33},
            {display_agl_x9xx_hide,-0.33},
            {display_agl_xx0x_hide,-0.33},
            {display_agl_xx1x_hide,-0.33},
            {display_agl_xx2x_hide,-0.33},
            {display_agl_xx3x_hide,-0.33},
            {display_agl_xx4x_hide,-0.33},
            {display_agl_xx5x_hide,-0.33},
            {display_agl_xx6x_hide,-0.33},
            {display_agl_xx7x_hide,-0.33},
            {display_agl_xx8x_hide,-0.33},
            {display_agl_xx9x_hide,-0.33},
            {display_agl_xxx0_hide,-0.33},
            {display_agl_xxx1_hide,-0.33},
            {display_agl_xxx2_hide,-0.33},
            {display_agl_xxx3_hide,-0.33},
            {display_agl_xxx4_hide,-0.33},
            {display_agl_xxx5_hide,-0.33},
            {display_agl_xxx6_hide,-0.33},
            {display_agl_xxx7_hide,-0.33},
            {display_agl_xxx8_hide,-0.33},
            {display_agl_xxx9_hide,-0.33},
            {display_speed_0xx_hide,0},
            {display_speed_1xx_hide,0},
            {display_speed_2xx_hide,0},
            {display_speed_3xx_hide,0},
            {display_speed_4xx_hide,0},
            {display_speed_5xx_hide,0},
            {display_speed_6xx_hide,0},
            {display_speed_7xx_hide,0},
            {display_speed_8xx_hide,0},
            {display_speed_9xx_hide,0},
            {display_speed_x0x_hide,0},
            {display_speed_x1x_hide,0},
            {display_speed_x2x_hide,0},
            {display_speed_x3x_hide,0},
            {display_speed_x4x_hide,0},
            {display_speed_x5x_hide,0},
            {display_speed_x6x_hide,0},
            {display_speed_x7x_hide,0},
            {display_speed_x8x_hide,0},
            {display_speed_x9x_hide,0},
            {display_speed_xx0_hide,0},
            {display_speed_xx1_hide,0},
            {display_speed_xx2_hide,0},
            {display_speed_xx3_hide,0},
            {display_speed_xx4_hide,0},
            {display_speed_xx5_hide,0},
            {display_speed_xx6_hide,0},
            {display_speed_xx7_hide,0},
            {display_speed_xx8_hide,0},
            {display_speed_xx9_hide,0},
            {stick_control_1_pitch_rot,0},
            {stick_control_2_pitch_rot,0},
            {stick_control_1_roll_rot,0},
            {stick_control_2_roll_rot,0},
            {stick_collective_1_rot,0},
            {stick_collective_2_rot,0},
            {pedals_left_1_move,0},
            {pedals_right_1_move,0},
            {pedals_left_2_rot,0},
            {pedals_right_2_rot,0},
            {optics_1_rot,0},
            {optics_1_muzzle_rot,0},
            {positionlights,0},
            {collisionlight_red_blinking,0}
        };
		hide[] =
        {
            zasleh,
            light_1_hide,
            rotor_1_blur,
            rotor_2_blur,
            "zadni svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.592;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Heli_Transport_04_box_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_R_Heli_Transport_04_box_F0;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_helipilot_F;
	typicalCargo[] = {O_R_Soldier_lite_F};
	textureList[] = {Russian2,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_RUS_02_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_RUS2_02_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_RUS_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_RUS_CO.paa"
	};

    /* Turrets */
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class LoadmasterTurret: LoadmasterTurret
		{
			gunnerType = O_R_helicrew_F;
		};
	};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_9x21_Mag_SMG_02,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(30Rnd_545x39_AK12_Mag_F,24);
		mag_xx(Aegis_60Rnd_545x39_Mag_Green_F,8);
		mag_xx(10Rnd_93x64_DMR_05_Mag,6);
		mag_xx(17Rnd_9x21_Mag,2);
		mag_xx(chemlight_red,2);
		mag_xx(O_R_IR_Grenade,2);
		mag_xx(Laserbatteries,1);
		mag_xx(UGL_FlareRed_F,2);
		mag_xx(UGL_FlareYellow_F,2);
		mag_xx(RPG32_F,3);
		mag_xx(RPG32_HE_F,3);
		mag_xx(MiniGrenade,6);
		mag_xx(HandGrenade_East,6);
		mag_xx(SmokeShellRed,2);
		mag_xx(SmokeShell,2);
		mag_xx(1Rnd_SmokeRed_Grenade_shell,2);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
	};
	class TransportWeapons
	{
        weap_xx(arifle_AK12_545_F,2);
        weap_xx(arifle_AK12_GL_545_F,1);
        weap_xx(arifle_AK12U_545_F,1);
        weap_xx(arifle_RPK12_F,1);
		weap_xx(srifle_DMR_05_blk_F,1);
		weap_xx(launch_RPG32_green_F,1);
	};
	class TransportItems
	{
		item_xx(bipod_02_F_blk,2);
		item_xx(FirstAidKit,10);
		item_xx(acc_flashlight,5);
		item_xx(acc_pointer_IR,5);
		item_xx(Laserdesignator_03,1);
		item_xx(Binocular,1);
		item_xx(Medikit,1);
		item_xx(MineDetector,1);
		item_xx(ToolKit,1);
		item_xx(optic_ACO_grn_AK_F,2);
		item_xx(optic_Arco_blk_F,1);
		item_xx(optic_Arco_AK_blk_F,1);
		item_xx(optic_DMS_weathered_F,1);
		item_xx(Rangefinder,1);
		item_xx(O_NVGoggles_grn_F,5);
	};
	class TransportBackpacks
	{
		bag_xx(B_Parachute,3);
		bag_xx(B_FieldPack_taiga_F,2);
	};
};
class O_R_Heli_Transport_04_covered_F: O_Heli_Transport_04_covered_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {rotor_1_rot,0},
            {rotor_2_rot,0},
            {rotor_1_bend_move,0},
            {rotor_2_bend_move,0},
            {rotor_1_destruct_hide,0},
            {rotor_2_destruct_hide,0},
            {gear_1_damper_move,-0.33},
            {gear_1_stabil_1_rot,-0.33},
            {gear_1_stabil_2_rot,-0.33},
            {gear_2_damper_move,-0.33},
            {gear_2_stabil_1_rot,-0.33},
            {gear_2_stabil_2_rot,-0.33},
            {gear_3_damper_move,-0.33},
            {gear_3_stabil_1_rot,-0.33},
            {gear_3_stabil_2_rot,-0.33},
            {door_1_rot,0},
            {door_1_handle_rot,0},
            {door_2_rot,0},
            {door_2_handle_rot,0},
            {door_3_rot,0},
            {door_3_handle_rot,0},
            {display_off_hide,0},
            {display_1_agl_rot_1,-0.33},
            {display_1_agl_rot_2,-0.33},
            {display_1_agl_rot_3,-0.33},
            {display_1_asl_10_rot,7.59},
            {display_1_asl_100_rot,7.59},
            {display_1_battery_1_rot,1},
            {display_1_battery_2_rot,1},
            {display_1_collective_move,0},
            {display_1_compass_rot,0},
            {display_1_enginetemp_1_rot,0},
            {display_1_enginetemp_2_rot,0},
            {display_1_fuel_rot,1},
            {display_1_horizon_bank_rot,0},
            {display_1_horizon_dive_move,0},
            {display_1_oil_rot,1},
            {display_1_rpm_rot,0},
            {display_1_speed_rot_1,0},
            {display_1_speed_rot_2,0},
            {display_1_torque_rot_1,0},
            {display_1_torque_rot_2,0},
            {display_1_verticalspeed_slider_move,0},
            {display_1_verticalspeed_rot_1,0},
            {display_1_verticalspeed_rot_2,0},
            {display_1_verticalspeed_rot_3,0},
            {display_2_agl_rot_1,-0.33},
            {display_2_agl_rot_2,-0.33},
            {display_2_agl_rot_3,-0.33},
            {display_2_asl_10_rot,7.59},
            {display_2_asl_100_rot,7.59},
            {display_2_battery_1_rot,1},
            {display_2_battery_2_rot,1},
            {display_2_collective_move,0},
            {display_2_compass_rot,0},
            {display_2_enginetemp_1_rot,0},
            {display_2_enginetemp_2_rot,0},
            {display_2_fuel_rot,1},
            {display_2_horizon_bank_rot,0},
            {display_2_horizon_dive_move,0},
            {display_2_oil_rot,1},
            {display_2_rpm_rot,0},
            {display_2_speed_rot_1,0},
            {display_2_speed_rot_2,0},
            {display_2_torque_rot_1,0},
            {display_2_torque_rot_2,0},
            {display_2_verticalspeed_slider_move,0},
            {display_2_verticalspeed_rot_1,0},
            {display_2_verticalspeed_rot_2,0},
            {display_2_verticalspeed_rot_3,0},
            {indicator_agl_rot_1,-0.33},
            {indicator_agl_rot_2,-0.33},
            {indicator_agl_rot_3,-0.33},
            {indicator_horizon_bank_rot,0},
            {indicator_horizon_dive_rot,0},
            {indicator_speed_rot_1,0},
            {indicator_speed_rot_2,0},
            {indicator_verticalspeed_rot_1,0},
            {indicator_verticalspeed_rot_2,0},
            {indicator_verticalspeed_rot_3,0},
            {display_agl_0xxx_hide,-0.33},
            {display_agl_1xxx_hide,-0.33},
            {display_agl_2xxx_hide,-0.33},
            {display_agl_3xxx_hide,-0.33},
            {display_agl_4xxx_hide,-0.33},
            {display_agl_5xxx_hide,-0.33},
            {display_agl_6xxx_hide,-0.33},
            {display_agl_7xxx_hide,-0.33},
            {display_agl_8xxx_hide,-0.33},
            {display_agl_9xxx_hide,-0.33},
            {display_agl_x0xx_hide,-0.33},
            {display_agl_x1xx_hide,-0.33},
            {display_agl_x2xx_hide,-0.33},
            {display_agl_x3xx_hide,-0.33},
            {display_agl_x4xx_hide,-0.33},
            {display_agl_x5xx_hide,-0.33},
            {display_agl_x6xx_hide,-0.33},
            {display_agl_x7xx_hide,-0.33},
            {display_agl_x8xx_hide,-0.33},
            {display_agl_x9xx_hide,-0.33},
            {display_agl_xx0x_hide,-0.33},
            {display_agl_xx1x_hide,-0.33},
            {display_agl_xx2x_hide,-0.33},
            {display_agl_xx3x_hide,-0.33},
            {display_agl_xx4x_hide,-0.33},
            {display_agl_xx5x_hide,-0.33},
            {display_agl_xx6x_hide,-0.33},
            {display_agl_xx7x_hide,-0.33},
            {display_agl_xx8x_hide,-0.33},
            {display_agl_xx9x_hide,-0.33},
            {display_agl_xxx0_hide,-0.33},
            {display_agl_xxx1_hide,-0.33},
            {display_agl_xxx2_hide,-0.33},
            {display_agl_xxx3_hide,-0.33},
            {display_agl_xxx4_hide,-0.33},
            {display_agl_xxx5_hide,-0.33},
            {display_agl_xxx6_hide,-0.33},
            {display_agl_xxx7_hide,-0.33},
            {display_agl_xxx8_hide,-0.33},
            {display_agl_xxx9_hide,-0.33},
            {display_speed_0xx_hide,0},
            {display_speed_1xx_hide,0},
            {display_speed_2xx_hide,0},
            {display_speed_3xx_hide,0},
            {display_speed_4xx_hide,0},
            {display_speed_5xx_hide,0},
            {display_speed_6xx_hide,0},
            {display_speed_7xx_hide,0},
            {display_speed_8xx_hide,0},
            {display_speed_9xx_hide,0},
            {display_speed_x0x_hide,0},
            {display_speed_x1x_hide,0},
            {display_speed_x2x_hide,0},
            {display_speed_x3x_hide,0},
            {display_speed_x4x_hide,0},
            {display_speed_x5x_hide,0},
            {display_speed_x6x_hide,0},
            {display_speed_x7x_hide,0},
            {display_speed_x8x_hide,0},
            {display_speed_x9x_hide,0},
            {display_speed_xx0_hide,0},
            {display_speed_xx1_hide,0},
            {display_speed_xx2_hide,0},
            {display_speed_xx3_hide,0},
            {display_speed_xx4_hide,0},
            {display_speed_xx5_hide,0},
            {display_speed_xx6_hide,0},
            {display_speed_xx7_hide,0},
            {display_speed_xx8_hide,0},
            {display_speed_xx9_hide,0},
            {stick_control_1_pitch_rot,0},
            {stick_control_2_pitch_rot,0},
            {stick_control_1_roll_rot,0},
            {stick_control_2_roll_rot,0},
            {stick_collective_1_rot,0},
            {stick_collective_2_rot,0},
            {pedals_left_1_move,0},
            {pedals_right_1_move,0},
            {pedals_left_2_rot,0},
            {pedals_right_2_rot,0},
            {optics_1_rot,0},
            {optics_1_muzzle_rot,0},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {door_4_move_1,0},
            {door_4_move_2,0},
            {door_4_handle_rot,0},
            {door_6_rot,0},
            {door_6_hide,0},
            {door_5_move_1,0},
            {door_5_move_2,0},
            {door_5_handle_rot,0}
        };
		hide[] =
        {
            zasleh,
            light_1_hide,
            rotor_1_blur,
            rotor_2_blur,
            "zadni svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.592;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Heli_Transport_04_covered_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_R_Heli_Transport_04_covered_F0;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_helipilot_F;
	typicalCargo[] = {O_R_Soldier_lite_F};
	textureList[] = {Russian2,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_RUS_02_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_RUS2_02_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_RUS_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_RUS_CO.paa"
	};

    /* Turrets */
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class LoadmasterTurret: LoadmasterTurret
		{
			gunnerType = O_R_helicrew_F;
		};
		class CargoTurret_01: CargoTurret_01{};
		class CargoTurret_02: CargoTurret_02{};
	};
};
class O_R_Heli_Transport_04_fuel_F: O_Heli_Transport_04_fuel_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {rotor_1_rot,0},
            {rotor_2_rot,0},
            {rotor_1_bend_move,0},
            {rotor_2_bend_move,0},
            {rotor_1_destruct_hide,0},
            {rotor_2_destruct_hide,0},
            {gear_1_damper_move,-0.33},
            {gear_1_stabil_1_rot,-0.33},
            {gear_1_stabil_2_rot,-0.33},
            {gear_2_damper_move,-0.33},
            {gear_2_stabil_1_rot,-0.33},
            {gear_2_stabil_2_rot,-0.33},
            {gear_3_damper_move,-0.33},
            {gear_3_stabil_1_rot,-0.33},
            {gear_3_stabil_2_rot,-0.33},
            {door_1_rot,0},
            {door_1_handle_rot,0},
            {door_2_rot,0},
            {door_2_handle_rot,0},
            {door_3_rot,0},
            {door_3_handle_rot,0},
            {display_off_hide,0},
            {display_1_agl_rot_1,-0.33},
            {display_1_agl_rot_2,-0.33},
            {display_1_agl_rot_3,-0.33},
            {display_1_asl_10_rot,7.45},
            {display_1_asl_100_rot,7.45},
            {display_1_battery_1_rot,1},
            {display_1_battery_2_rot,1},
            {display_1_collective_move,0},
            {display_1_compass_rot,0},
            {display_1_enginetemp_1_rot,0},
            {display_1_enginetemp_2_rot,0},
            {display_1_fuel_rot,1},
            {display_1_horizon_bank_rot,0},
            {display_1_horizon_dive_move,0},
            {display_1_oil_rot,1},
            {display_1_rpm_rot,0},
            {display_1_speed_rot_1,0},
            {display_1_speed_rot_2,0},
            {display_1_torque_rot_1,0},
            {display_1_torque_rot_2,0},
            {display_1_verticalspeed_slider_move,0},
            {display_1_verticalspeed_rot_1,0},
            {display_1_verticalspeed_rot_2,0},
            {display_1_verticalspeed_rot_3,0},
            {display_2_agl_rot_1,-0.33},
            {display_2_agl_rot_2,-0.33},
            {display_2_agl_rot_3,-0.33},
            {display_2_asl_10_rot,7.45},
            {display_2_asl_100_rot,7.45},
            {display_2_battery_1_rot,1},
            {display_2_battery_2_rot,1},
            {display_2_collective_move,0},
            {display_2_compass_rot,0},
            {display_2_enginetemp_1_rot,0},
            {display_2_enginetemp_2_rot,0},
            {display_2_fuel_rot,1},
            {display_2_horizon_bank_rot,0},
            {display_2_horizon_dive_move,0},
            {display_2_oil_rot,1},
            {display_2_rpm_rot,0},
            {display_2_speed_rot_1,0},
            {display_2_speed_rot_2,0},
            {display_2_torque_rot_1,0},
            {display_2_torque_rot_2,0},
            {display_2_verticalspeed_slider_move,0},
            {display_2_verticalspeed_rot_1,0},
            {display_2_verticalspeed_rot_2,0},
            {display_2_verticalspeed_rot_3,0},
            {indicator_agl_rot_1,-0.33},
            {indicator_agl_rot_2,-0.33},
            {indicator_agl_rot_3,-0.33},
            {indicator_horizon_bank_rot,0},
            {indicator_horizon_dive_rot,0},
            {indicator_speed_rot_1,0},
            {indicator_speed_rot_2,0},
            {indicator_verticalspeed_rot_1,0},
            {indicator_verticalspeed_rot_2,0},
            {indicator_verticalspeed_rot_3,0},
            {display_agl_0xxx_hide,-0.33},
            {display_agl_1xxx_hide,-0.33},
            {display_agl_2xxx_hide,-0.33},
            {display_agl_3xxx_hide,-0.33},
            {display_agl_4xxx_hide,-0.33},
            {display_agl_5xxx_hide,-0.33},
            {display_agl_6xxx_hide,-0.33},
            {display_agl_7xxx_hide,-0.33},
            {display_agl_8xxx_hide,-0.33},
            {display_agl_9xxx_hide,-0.33},
            {display_agl_x0xx_hide,-0.33},
            {display_agl_x1xx_hide,-0.33},
            {display_agl_x2xx_hide,-0.33},
            {display_agl_x3xx_hide,-0.33},
            {display_agl_x4xx_hide,-0.33},
            {display_agl_x5xx_hide,-0.33},
            {display_agl_x6xx_hide,-0.33},
            {display_agl_x7xx_hide,-0.33},
            {display_agl_x8xx_hide,-0.33},
            {display_agl_x9xx_hide,-0.33},
            {display_agl_xx0x_hide,-0.33},
            {display_agl_xx1x_hide,-0.33},
            {display_agl_xx2x_hide,-0.33},
            {display_agl_xx3x_hide,-0.33},
            {display_agl_xx4x_hide,-0.33},
            {display_agl_xx5x_hide,-0.33},
            {display_agl_xx6x_hide,-0.33},
            {display_agl_xx7x_hide,-0.33},
            {display_agl_xx8x_hide,-0.33},
            {display_agl_xx9x_hide,-0.33},
            {display_agl_xxx0_hide,-0.33},
            {display_agl_xxx1_hide,-0.33},
            {display_agl_xxx2_hide,-0.33},
            {display_agl_xxx3_hide,-0.33},
            {display_agl_xxx4_hide,-0.33},
            {display_agl_xxx5_hide,-0.33},
            {display_agl_xxx6_hide,-0.33},
            {display_agl_xxx7_hide,-0.33},
            {display_agl_xxx8_hide,-0.33},
            {display_agl_xxx9_hide,-0.33},
            {display_speed_0xx_hide,0},
            {display_speed_1xx_hide,0},
            {display_speed_2xx_hide,0},
            {display_speed_3xx_hide,0},
            {display_speed_4xx_hide,0},
            {display_speed_5xx_hide,0},
            {display_speed_6xx_hide,0},
            {display_speed_7xx_hide,0},
            {display_speed_8xx_hide,0},
            {display_speed_9xx_hide,0},
            {display_speed_x0x_hide,0},
            {display_speed_x1x_hide,0},
            {display_speed_x2x_hide,0},
            {display_speed_x3x_hide,0},
            {display_speed_x4x_hide,0},
            {display_speed_x5x_hide,0},
            {display_speed_x6x_hide,0},
            {display_speed_x7x_hide,0},
            {display_speed_x8x_hide,0},
            {display_speed_x9x_hide,0},
            {display_speed_xx0_hide,0},
            {display_speed_xx1_hide,0},
            {display_speed_xx2_hide,0},
            {display_speed_xx3_hide,0},
            {display_speed_xx4_hide,0},
            {display_speed_xx5_hide,0},
            {display_speed_xx6_hide,0},
            {display_speed_xx7_hide,0},
            {display_speed_xx8_hide,0},
            {display_speed_xx9_hide,0},
            {stick_control_1_pitch_rot,0},
            {stick_control_2_pitch_rot,0},
            {stick_control_1_roll_rot,0},
            {stick_control_2_roll_rot,0},
            {stick_collective_1_rot,0},
            {stick_collective_2_rot,0},
            {pedals_left_1_move,0},
            {pedals_right_1_move,0},
            {pedals_left_2_rot,0},
            {pedals_right_2_rot,0},
            {optics_1_rot,0},
            {optics_1_muzzle_rot,0},
            {positionlights,0},
            {collisionlight_red_blinking,0}
        };
		hide[] =
        {
            zasleh,
            light_1_hide,
            rotor_1_blur,
            rotor_2_blur,
            "zadni svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.446;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Heli_Transport_04_fuel_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_R_Heli_Transport_04_fuel_F0;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_helipilot_F;
	typicalCargo[] = {O_R_Soldier_lite_F};
	textureList[] = {Russian2,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_RUS_02_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_RUS2_02_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Fuel_RUS_CO.paa"
	};

    /* Turrets */
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class LoadmasterTurret: LoadmasterTurret
		{
			gunnerType = O_R_helicrew_F;
		};
	};
};
class O_R_Heli_Transport_04_medevac_F: O_Heli_Transport_04_medevac_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {rotor_1_rot,0},
            {rotor_2_rot,0},
            {rotor_1_bend_move,0},
            {rotor_2_bend_move,0},
            {rotor_1_destruct_hide,0},
            {rotor_2_destruct_hide,0},
            {gear_1_damper_move,-0.33},
            {gear_1_stabil_1_rot,-0.33},
            {gear_1_stabil_2_rot,-0.33},
            {gear_2_damper_move,-0.33},
            {gear_2_stabil_1_rot,-0.33},
            {gear_2_stabil_2_rot,-0.33},
            {gear_3_damper_move,-0.33},
            {gear_3_stabil_1_rot,-0.33},
            {gear_3_stabil_2_rot,-0.33},
            {door_1_rot,0},
            {door_1_handle_rot,0},
            {door_2_rot,0},
            {door_2_handle_rot,0},
            {door_3_rot,0},
            {door_3_handle_rot,0},
            {display_off_hide,0},
            {display_1_agl_rot_1,-0.33},
            {display_1_agl_rot_2,-0.33},
            {display_1_agl_rot_3,-0.33},
            {display_1_asl_10_rot,7.59},
            {display_1_asl_100_rot,7.59},
            {display_1_battery_1_rot,1},
            {display_1_battery_2_rot,1},
            {display_1_collective_move,0},
            {display_1_compass_rot,0},
            {display_1_enginetemp_1_rot,0},
            {display_1_enginetemp_2_rot,0},
            {display_1_fuel_rot,1},
            {display_1_horizon_bank_rot,0},
            {display_1_horizon_dive_move,0},
            {display_1_oil_rot,1},
            {display_1_rpm_rot,0},
            {display_1_speed_rot_1,0},
            {display_1_speed_rot_2,0},
            {display_1_torque_rot_1,0},
            {display_1_torque_rot_2,0},
            {display_1_verticalspeed_slider_move,0},
            {display_1_verticalspeed_rot_1,0},
            {display_1_verticalspeed_rot_2,0},
            {display_1_verticalspeed_rot_3,0},
            {display_2_agl_rot_1,-0.33},
            {display_2_agl_rot_2,-0.33},
            {display_2_agl_rot_3,-0.33},
            {display_2_asl_10_rot,7.59},
            {display_2_asl_100_rot,7.59},
            {display_2_battery_1_rot,1},
            {display_2_battery_2_rot,1},
            {display_2_collective_move,0},
            {display_2_compass_rot,0},
            {display_2_enginetemp_1_rot,0},
            {display_2_enginetemp_2_rot,0},
            {display_2_fuel_rot,1},
            {display_2_horizon_bank_rot,0},
            {display_2_horizon_dive_move,0},
            {display_2_oil_rot,1},
            {display_2_rpm_rot,0},
            {display_2_speed_rot_1,0},
            {display_2_speed_rot_2,0},
            {display_2_torque_rot_1,0},
            {display_2_torque_rot_2,0},
            {display_2_verticalspeed_slider_move,0},
            {display_2_verticalspeed_rot_1,0},
            {display_2_verticalspeed_rot_2,0},
            {display_2_verticalspeed_rot_3,0},
            {indicator_agl_rot_1,-0.33},
            {indicator_agl_rot_2,-0.33},
            {indicator_agl_rot_3,-0.33},
            {indicator_horizon_bank_rot,0},
            {indicator_horizon_dive_rot,0},
            {indicator_speed_rot_1,0},
            {indicator_speed_rot_2,0},
            {indicator_verticalspeed_rot_1,0},
            {indicator_verticalspeed_rot_2,0},
            {indicator_verticalspeed_rot_3,0},
            {display_agl_0xxx_hide,-0.33},
            {display_agl_1xxx_hide,-0.33},
            {display_agl_2xxx_hide,-0.33},
            {display_agl_3xxx_hide,-0.33},
            {display_agl_4xxx_hide,-0.33},
            {display_agl_5xxx_hide,-0.33},
            {display_agl_6xxx_hide,-0.33},
            {display_agl_7xxx_hide,-0.33},
            {display_agl_8xxx_hide,-0.33},
            {display_agl_9xxx_hide,-0.33},
            {display_agl_x0xx_hide,-0.33},
            {display_agl_x1xx_hide,-0.33},
            {display_agl_x2xx_hide,-0.33},
            {display_agl_x3xx_hide,-0.33},
            {display_agl_x4xx_hide,-0.33},
            {display_agl_x5xx_hide,-0.33},
            {display_agl_x6xx_hide,-0.33},
            {display_agl_x7xx_hide,-0.33},
            {display_agl_x8xx_hide,-0.33},
            {display_agl_x9xx_hide,-0.33},
            {display_agl_xx0x_hide,-0.33},
            {display_agl_xx1x_hide,-0.33},
            {display_agl_xx2x_hide,-0.33},
            {display_agl_xx3x_hide,-0.33},
            {display_agl_xx4x_hide,-0.33},
            {display_agl_xx5x_hide,-0.33},
            {display_agl_xx6x_hide,-0.33},
            {display_agl_xx7x_hide,-0.33},
            {display_agl_xx8x_hide,-0.33},
            {display_agl_xx9x_hide,-0.33},
            {display_agl_xxx0_hide,-0.33},
            {display_agl_xxx1_hide,-0.33},
            {display_agl_xxx2_hide,-0.33},
            {display_agl_xxx3_hide,-0.33},
            {display_agl_xxx4_hide,-0.33},
            {display_agl_xxx5_hide,-0.33},
            {display_agl_xxx6_hide,-0.33},
            {display_agl_xxx7_hide,-0.33},
            {display_agl_xxx8_hide,-0.33},
            {display_agl_xxx9_hide,-0.33},
            {display_speed_0xx_hide,0},
            {display_speed_1xx_hide,0},
            {display_speed_2xx_hide,0},
            {display_speed_3xx_hide,0},
            {display_speed_4xx_hide,0},
            {display_speed_5xx_hide,0},
            {display_speed_6xx_hide,0},
            {display_speed_7xx_hide,0},
            {display_speed_8xx_hide,0},
            {display_speed_9xx_hide,0},
            {display_speed_x0x_hide,0},
            {display_speed_x1x_hide,0},
            {display_speed_x2x_hide,0},
            {display_speed_x3x_hide,0},
            {display_speed_x4x_hide,0},
            {display_speed_x5x_hide,0},
            {display_speed_x6x_hide,0},
            {display_speed_x7x_hide,0},
            {display_speed_x8x_hide,0},
            {display_speed_x9x_hide,0},
            {display_speed_xx0_hide,0},
            {display_speed_xx1_hide,0},
            {display_speed_xx2_hide,0},
            {display_speed_xx3_hide,0},
            {display_speed_xx4_hide,0},
            {display_speed_xx5_hide,0},
            {display_speed_xx6_hide,0},
            {display_speed_xx7_hide,0},
            {display_speed_xx8_hide,0},
            {display_speed_xx9_hide,0},
            {stick_control_1_pitch_rot,0},
            {stick_control_2_pitch_rot,0},
            {stick_control_1_roll_rot,0},
            {stick_control_2_roll_rot,0},
            {stick_collective_1_rot,0},
            {stick_collective_2_rot,0},
            {pedals_left_1_move,0},
            {pedals_right_1_move,0},
            {pedals_left_2_rot,0},
            {pedals_right_2_rot,0},
            {optics_1_rot,0},
            {optics_1_muzzle_rot,0},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {door_4_move_1,0},
            {door_4_move_2,0},
            {door_4_handle_rot,0},
            {door_6_rot,0},
            {door_6_hide,0}
        };
		hide[] =
        {
            zasleh,
            light_1_hide,
            rotor_1_blur,
            rotor_2_blur,
            "zadni svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.592;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Heli_Transport_04_medevac_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_R_Heli_Transport_04_medevac_F0;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_helipilot_F;
	typicalCargo[] = {O_R_Soldier_lite_F};
	textureList[] = {Russian2,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_RUS_02_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_RUS2_02_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_RUS_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_RUS_CO.paa"
	};

    /* Turrets */
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class LoadmasterTurret: LoadmasterTurret
		{
			gunnerType = O_R_helicrew_F;
		};
	};
};
class O_R_Heli_Transport_04_repair_F: O_Heli_Transport_04_repair_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {rotor_1_rot,0},
            {rotor_2_rot,0},
            {rotor_1_bend_move,0},
            {rotor_2_bend_move,0},
            {rotor_1_destruct_hide,0},
            {rotor_2_destruct_hide,0},
            {gear_1_damper_move,-0.33},
            {gear_1_stabil_1_rot,-0.33},
            {gear_1_stabil_2_rot,-0.33},
            {gear_2_damper_move,-0.33},
            {gear_2_stabil_1_rot,-0.33},
            {gear_2_stabil_2_rot,-0.33},
            {gear_3_damper_move,-0.33},
            {gear_3_stabil_1_rot,-0.33},
            {gear_3_stabil_2_rot,-0.33},
            {door_1_rot,0},
            {door_1_handle_rot,0},
            {door_2_rot,0},
            {door_2_handle_rot,0},
            {door_3_rot,0},
            {door_3_handle_rot,0},
            {display_off_hide,0},
            {display_1_agl_rot_1,-0.33},
            {display_1_agl_rot_2,-0.33},
            {display_1_agl_rot_3,-0.33},
            {display_1_asl_10_rot,7.59},
            {display_1_asl_100_rot,7.59},
            {display_1_battery_1_rot,1},
            {display_1_battery_2_rot,1},
            {display_1_collective_move,0},
            {display_1_compass_rot,0},
            {display_1_enginetemp_1_rot,0},
            {display_1_enginetemp_2_rot,0},
            {display_1_fuel_rot,1},
            {display_1_horizon_bank_rot,0},
            {display_1_horizon_dive_move,0},
            {display_1_oil_rot,1},
            {display_1_rpm_rot,0},
            {display_1_speed_rot_1,0},
            {display_1_speed_rot_2,0},
            {display_1_torque_rot_1,0},
            {display_1_torque_rot_2,0},
            {display_1_verticalspeed_slider_move,0},
            {display_1_verticalspeed_rot_1,0},
            {display_1_verticalspeed_rot_2,0},
            {display_1_verticalspeed_rot_3,0},
            {display_2_agl_rot_1,-0.33},
            {display_2_agl_rot_2,-0.33},
            {display_2_agl_rot_3,-0.33},
            {display_2_asl_10_rot,7.59},
            {display_2_asl_100_rot,7.59},
            {display_2_battery_1_rot,1},
            {display_2_battery_2_rot,1},
            {display_2_collective_move,0},
            {display_2_compass_rot,0},
            {display_2_enginetemp_1_rot,0},
            {display_2_enginetemp_2_rot,0},
            {display_2_fuel_rot,1},
            {display_2_horizon_bank_rot,0},
            {display_2_horizon_dive_move,0},
            {display_2_oil_rot,1},
            {display_2_rpm_rot,0},
            {display_2_speed_rot_1,0},
            {display_2_speed_rot_2,0},
            {display_2_torque_rot_1,0},
            {display_2_torque_rot_2,0},
            {display_2_verticalspeed_slider_move,0},
            {display_2_verticalspeed_rot_1,0},
            {display_2_verticalspeed_rot_2,0},
            {display_2_verticalspeed_rot_3,0},
            {indicator_agl_rot_1,-0.33},
            {indicator_agl_rot_2,-0.33},
            {indicator_agl_rot_3,-0.33},
            {indicator_horizon_bank_rot,0},
            {indicator_horizon_dive_rot,0},
            {indicator_speed_rot_1,0},
            {indicator_speed_rot_2,0},
            {indicator_verticalspeed_rot_1,0},
            {indicator_verticalspeed_rot_2,0},
            {indicator_verticalspeed_rot_3,0},
            {display_agl_0xxx_hide,-0.33},
            {display_agl_1xxx_hide,-0.33},
            {display_agl_2xxx_hide,-0.33},
            {display_agl_3xxx_hide,-0.33},
            {display_agl_4xxx_hide,-0.33},
            {display_agl_5xxx_hide,-0.33},
            {display_agl_6xxx_hide,-0.33},
            {display_agl_7xxx_hide,-0.33},
            {display_agl_8xxx_hide,-0.33},
            {display_agl_9xxx_hide,-0.33},
            {display_agl_x0xx_hide,-0.33},
            {display_agl_x1xx_hide,-0.33},
            {display_agl_x2xx_hide,-0.33},
            {display_agl_x3xx_hide,-0.33},
            {display_agl_x4xx_hide,-0.33},
            {display_agl_x5xx_hide,-0.33},
            {display_agl_x6xx_hide,-0.33},
            {display_agl_x7xx_hide,-0.33},
            {display_agl_x8xx_hide,-0.33},
            {display_agl_x9xx_hide,-0.33},
            {display_agl_xx0x_hide,-0.33},
            {display_agl_xx1x_hide,-0.33},
            {display_agl_xx2x_hide,-0.33},
            {display_agl_xx3x_hide,-0.33},
            {display_agl_xx4x_hide,-0.33},
            {display_agl_xx5x_hide,-0.33},
            {display_agl_xx6x_hide,-0.33},
            {display_agl_xx7x_hide,-0.33},
            {display_agl_xx8x_hide,-0.33},
            {display_agl_xx9x_hide,-0.33},
            {display_agl_xxx0_hide,-0.33},
            {display_agl_xxx1_hide,-0.33},
            {display_agl_xxx2_hide,-0.33},
            {display_agl_xxx3_hide,-0.33},
            {display_agl_xxx4_hide,-0.33},
            {display_agl_xxx5_hide,-0.33},
            {display_agl_xxx6_hide,-0.33},
            {display_agl_xxx7_hide,-0.33},
            {display_agl_xxx8_hide,-0.33},
            {display_agl_xxx9_hide,-0.33},
            {display_speed_0xx_hide,0},
            {display_speed_1xx_hide,0},
            {display_speed_2xx_hide,0},
            {display_speed_3xx_hide,0},
            {display_speed_4xx_hide,0},
            {display_speed_5xx_hide,0},
            {display_speed_6xx_hide,0},
            {display_speed_7xx_hide,0},
            {display_speed_8xx_hide,0},
            {display_speed_9xx_hide,0},
            {display_speed_x0x_hide,0},
            {display_speed_x1x_hide,0},
            {display_speed_x2x_hide,0},
            {display_speed_x3x_hide,0},
            {display_speed_x4x_hide,0},
            {display_speed_x5x_hide,0},
            {display_speed_x6x_hide,0},
            {display_speed_x7x_hide,0},
            {display_speed_x8x_hide,0},
            {display_speed_x9x_hide,0},
            {display_speed_xx0_hide,0},
            {display_speed_xx1_hide,0},
            {display_speed_xx2_hide,0},
            {display_speed_xx3_hide,0},
            {display_speed_xx4_hide,0},
            {display_speed_xx5_hide,0},
            {display_speed_xx6_hide,0},
            {display_speed_xx7_hide,0},
            {display_speed_xx8_hide,0},
            {display_speed_xx9_hide,0},
            {stick_control_1_pitch_rot,0},
            {stick_control_2_pitch_rot,0},
            {stick_control_1_roll_rot,0},
            {stick_control_2_roll_rot,0},
            {stick_collective_1_rot,0},
            {stick_collective_2_rot,0},
            {pedals_left_1_move,0},
            {pedals_right_1_move,0},
            {pedals_left_2_rot,0},
            {pedals_right_2_rot,0},
            {optics_1_rot,0},
            {optics_1_muzzle_rot,0},
            {positionlights,0},
            {collisionlight_red_blinking,0}
        };
		hide[] =
        {
            zasleh,
            light_1_hide,
            rotor_1_blur,
            rotor_2_blur,
            "zadni svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.592;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Heli_Transport_04_repair_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_R_Heli_Transport_04_repair_F0;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_helipilot_F;
	typicalCargo[] = {O_R_Soldier_lite_F};
	textureList[] = {Russian2,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_RUS_02_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_RUS2_02_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_RUS_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_RUS_CO.paa"
	};

    /* Turrets */
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class LoadmasterTurret: LoadmasterTurret
		{
			gunnerType = O_R_helicrew_F;
		};
	};
};

/* Russia (Mediterranean) */
class O_R_Heli_Transport_04_ard_F: O_R_Heli_Transport_04_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {rotor_1_rot,0},
            {rotor_2_rot,0},
            {rotor_1_bend_move,0},
            {rotor_2_bend_move,0},
            {rotor_1_destruct_hide,0},
            {rotor_2_destruct_hide,0},
            {gear_1_damper_move,-0.33},
            {gear_1_stabil_1_rot,-0.33},
            {gear_1_stabil_2_rot,-0.33},
            {gear_2_damper_move,-0.33},
            {gear_2_stabil_1_rot,-0.33},
            {gear_2_stabil_2_rot,-0.33},
            {gear_3_damper_move,-0.33},
            {gear_3_stabil_1_rot,-0.33},
            {gear_3_stabil_2_rot,-0.33},
            {door_1_rot,0},
            {door_1_handle_rot,0},
            {door_2_rot,0},
            {door_2_handle_rot,0},
            {door_3_rot,0},
            {door_3_handle_rot,0},
            {display_off_hide,0},
            {display_1_agl_rot_1,-0.33},
            {display_1_agl_rot_2,-0.33},
            {display_1_agl_rot_3,-0.33},
            {display_1_asl_10_rot,7.83},
            {display_1_asl_100_rot,7.83},
            {display_1_battery_1_rot,1},
            {display_1_battery_2_rot,1},
            {display_1_collective_move,0},
            {display_1_compass_rot,0},
            {display_1_enginetemp_1_rot,0},
            {display_1_enginetemp_2_rot,0},
            {display_1_fuel_rot,1},
            {display_1_horizon_bank_rot,0},
            {display_1_horizon_dive_move,0},
            {display_1_oil_rot,1},
            {display_1_rpm_rot,0},
            {display_1_speed_rot_1,0},
            {display_1_speed_rot_2,0},
            {display_1_torque_rot_1,0},
            {display_1_torque_rot_2,0},
            {display_1_verticalspeed_slider_move,0},
            {display_1_verticalspeed_rot_1,0},
            {display_1_verticalspeed_rot_2,0},
            {display_1_verticalspeed_rot_3,0},
            {display_2_agl_rot_1,-0.33},
            {display_2_agl_rot_2,-0.33},
            {display_2_agl_rot_3,-0.33},
            {display_2_asl_10_rot,7.83},
            {display_2_asl_100_rot,7.83},
            {display_2_battery_1_rot,1},
            {display_2_battery_2_rot,1},
            {display_2_collective_move,0},
            {display_2_compass_rot,0},
            {display_2_enginetemp_1_rot,0},
            {display_2_enginetemp_2_rot,0},
            {display_2_fuel_rot,1},
            {display_2_horizon_bank_rot,0},
            {display_2_horizon_dive_move,0},
            {display_2_oil_rot,1},
            {display_2_rpm_rot,0},
            {display_2_speed_rot_1,0},
            {display_2_speed_rot_2,0},
            {display_2_torque_rot_1,0},
            {display_2_torque_rot_2,0},
            {display_2_verticalspeed_slider_move,0},
            {display_2_verticalspeed_rot_1,0},
            {display_2_verticalspeed_rot_2,0},
            {display_2_verticalspeed_rot_3,0},
            {indicator_agl_rot_1,-0.33},
            {indicator_agl_rot_2,-0.33},
            {indicator_agl_rot_3,-0.33},
            {indicator_horizon_bank_rot,0},
            {indicator_horizon_dive_rot,0},
            {indicator_speed_rot_1,0},
            {indicator_speed_rot_2,0},
            {indicator_verticalspeed_rot_1,0},
            {indicator_verticalspeed_rot_2,0},
            {indicator_verticalspeed_rot_3,0},
            {display_agl_0xxx_hide,-0.33},
            {display_agl_1xxx_hide,-0.33},
            {display_agl_2xxx_hide,-0.33},
            {display_agl_3xxx_hide,-0.33},
            {display_agl_4xxx_hide,-0.33},
            {display_agl_5xxx_hide,-0.33},
            {display_agl_6xxx_hide,-0.33},
            {display_agl_7xxx_hide,-0.33},
            {display_agl_8xxx_hide,-0.33},
            {display_agl_9xxx_hide,-0.33},
            {display_agl_x0xx_hide,-0.33},
            {display_agl_x1xx_hide,-0.33},
            {display_agl_x2xx_hide,-0.33},
            {display_agl_x3xx_hide,-0.33},
            {display_agl_x4xx_hide,-0.33},
            {display_agl_x5xx_hide,-0.33},
            {display_agl_x6xx_hide,-0.33},
            {display_agl_x7xx_hide,-0.33},
            {display_agl_x8xx_hide,-0.33},
            {display_agl_x9xx_hide,-0.33},
            {display_agl_xx0x_hide,-0.33},
            {display_agl_xx1x_hide,-0.33},
            {display_agl_xx2x_hide,-0.33},
            {display_agl_xx3x_hide,-0.33},
            {display_agl_xx4x_hide,-0.33},
            {display_agl_xx5x_hide,-0.33},
            {display_agl_xx6x_hide,-0.33},
            {display_agl_xx7x_hide,-0.33},
            {display_agl_xx8x_hide,-0.33},
            {display_agl_xx9x_hide,-0.33},
            {display_agl_xxx0_hide,-0.33},
            {display_agl_xxx1_hide,-0.33},
            {display_agl_xxx2_hide,-0.33},
            {display_agl_xxx3_hide,-0.33},
            {display_agl_xxx4_hide,-0.33},
            {display_agl_xxx5_hide,-0.33},
            {display_agl_xxx6_hide,-0.33},
            {display_agl_xxx7_hide,-0.33},
            {display_agl_xxx8_hide,-0.33},
            {display_agl_xxx9_hide,-0.33},
            {display_speed_0xx_hide,0},
            {display_speed_1xx_hide,0},
            {display_speed_2xx_hide,0},
            {display_speed_3xx_hide,0},
            {display_speed_4xx_hide,0},
            {display_speed_5xx_hide,0},
            {display_speed_6xx_hide,0},
            {display_speed_7xx_hide,0},
            {display_speed_8xx_hide,0},
            {display_speed_9xx_hide,0},
            {display_speed_x0x_hide,0},
            {display_speed_x1x_hide,0},
            {display_speed_x2x_hide,0},
            {display_speed_x3x_hide,0},
            {display_speed_x4x_hide,0},
            {display_speed_x5x_hide,0},
            {display_speed_x6x_hide,0},
            {display_speed_x7x_hide,0},
            {display_speed_x8x_hide,0},
            {display_speed_x9x_hide,0},
            {display_speed_xx0_hide,0},
            {display_speed_xx1_hide,0},
            {display_speed_xx2_hide,0},
            {display_speed_xx3_hide,0},
            {display_speed_xx4_hide,0},
            {display_speed_xx5_hide,0},
            {display_speed_xx6_hide,0},
            {display_speed_xx7_hide,0},
            {display_speed_xx8_hide,0},
            {display_speed_xx9_hide,0},
            {stick_control_1_pitch_rot,0},
            {stick_control_2_pitch_rot,0},
            {stick_control_1_roll_rot,0},
            {stick_control_2_roll_rot,0},
            {stick_collective_1_rot,0},
            {stick_collective_2_rot,0},
            {pedals_left_1_move,0},
            {pedals_right_1_move,0},
            {pedals_left_2_rot,0},
            {pedals_right_2_rot,0},
            {optics_1_rot,0},
            {optics_1_muzzle_rot,0},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {winch_hide,0}
        };
		hide[] =
        {
            zasleh,
            light_1_hide,
            rotor_1_blur,
            rotor_2_blur,
            "zadni svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.828;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Heli_Transport_04_ard_F.jpg";
	faction = OPF_R_ard_F;
	crew = O_R_helipilot_ard_F;
	typicalCargo[] = {O_R_Soldier_lite_ard_F};

    /* Turrets */
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class LoadmasterTurret: LoadmasterTurret
		{
			gunnerType = O_R_helicrew_ard_F;
		};
	};
};
class O_R_Heli_Transport_04_ammo_ard_F: O_R_Heli_Transport_04_ammo_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {rotor_1_rot,0},
            {rotor_2_rot,0},
            {rotor_1_bend_move,0},
            {rotor_2_bend_move,0},
            {rotor_1_destruct_hide,0},
            {rotor_2_destruct_hide,0},
            {gear_1_damper_move,-0.33},
            {gear_1_stabil_1_rot,-0.33},
            {gear_1_stabil_2_rot,-0.33},
            {gear_2_damper_move,-0.33},
            {gear_2_stabil_1_rot,-0.33},
            {gear_2_stabil_2_rot,-0.33},
            {gear_3_damper_move,-0.33},
            {gear_3_stabil_1_rot,-0.33},
            {gear_3_stabil_2_rot,-0.33},
            {door_1_rot,0},
            {door_1_handle_rot,0},
            {door_2_rot,0},
            {door_2_handle_rot,0},
            {door_3_rot,0},
            {door_3_handle_rot,0},
            {display_off_hide,0},
            {display_1_agl_rot_1,-0.33},
            {display_1_agl_rot_2,-0.33},
            {display_1_agl_rot_3,-0.33},
            {display_1_asl_10_rot,7.59},
            {display_1_asl_100_rot,7.59},
            {display_1_battery_1_rot,1},
            {display_1_battery_2_rot,1},
            {display_1_collective_move,0},
            {display_1_compass_rot,0},
            {display_1_enginetemp_1_rot,0},
            {display_1_enginetemp_2_rot,0},
            {display_1_fuel_rot,1},
            {display_1_horizon_bank_rot,0},
            {display_1_horizon_dive_move,0},
            {display_1_oil_rot,1},
            {display_1_rpm_rot,0},
            {display_1_speed_rot_1,0},
            {display_1_speed_rot_2,0},
            {display_1_torque_rot_1,0},
            {display_1_torque_rot_2,0},
            {display_1_verticalspeed_slider_move,0},
            {display_1_verticalspeed_rot_1,0},
            {display_1_verticalspeed_rot_2,0},
            {display_1_verticalspeed_rot_3,0},
            {display_2_agl_rot_1,-0.33},
            {display_2_agl_rot_2,-0.33},
            {display_2_agl_rot_3,-0.33},
            {display_2_asl_10_rot,7.59},
            {display_2_asl_100_rot,7.59},
            {display_2_battery_1_rot,1},
            {display_2_battery_2_rot,1},
            {display_2_collective_move,0},
            {display_2_compass_rot,0},
            {display_2_enginetemp_1_rot,0},
            {display_2_enginetemp_2_rot,0},
            {display_2_fuel_rot,1},
            {display_2_horizon_bank_rot,0},
            {display_2_horizon_dive_move,0},
            {display_2_oil_rot,1},
            {display_2_rpm_rot,0},
            {display_2_speed_rot_1,0},
            {display_2_speed_rot_2,0},
            {display_2_torque_rot_1,0},
            {display_2_torque_rot_2,0},
            {display_2_verticalspeed_slider_move,0},
            {display_2_verticalspeed_rot_1,0},
            {display_2_verticalspeed_rot_2,0},
            {display_2_verticalspeed_rot_3,0},
            {indicator_agl_rot_1,-0.33},
            {indicator_agl_rot_2,-0.33},
            {indicator_agl_rot_3,-0.33},
            {indicator_horizon_bank_rot,0},
            {indicator_horizon_dive_rot,0},
            {indicator_speed_rot_1,0},
            {indicator_speed_rot_2,0},
            {indicator_verticalspeed_rot_1,0},
            {indicator_verticalspeed_rot_2,0},
            {indicator_verticalspeed_rot_3,0},
            {display_agl_0xxx_hide,-0.33},
            {display_agl_1xxx_hide,-0.33},
            {display_agl_2xxx_hide,-0.33},
            {display_agl_3xxx_hide,-0.33},
            {display_agl_4xxx_hide,-0.33},
            {display_agl_5xxx_hide,-0.33},
            {display_agl_6xxx_hide,-0.33},
            {display_agl_7xxx_hide,-0.33},
            {display_agl_8xxx_hide,-0.33},
            {display_agl_9xxx_hide,-0.33},
            {display_agl_x0xx_hide,-0.33},
            {display_agl_x1xx_hide,-0.33},
            {display_agl_x2xx_hide,-0.33},
            {display_agl_x3xx_hide,-0.33},
            {display_agl_x4xx_hide,-0.33},
            {display_agl_x5xx_hide,-0.33},
            {display_agl_x6xx_hide,-0.33},
            {display_agl_x7xx_hide,-0.33},
            {display_agl_x8xx_hide,-0.33},
            {display_agl_x9xx_hide,-0.33},
            {display_agl_xx0x_hide,-0.33},
            {display_agl_xx1x_hide,-0.33},
            {display_agl_xx2x_hide,-0.33},
            {display_agl_xx3x_hide,-0.33},
            {display_agl_xx4x_hide,-0.33},
            {display_agl_xx5x_hide,-0.33},
            {display_agl_xx6x_hide,-0.33},
            {display_agl_xx7x_hide,-0.33},
            {display_agl_xx8x_hide,-0.33},
            {display_agl_xx9x_hide,-0.33},
            {display_agl_xxx0_hide,-0.33},
            {display_agl_xxx1_hide,-0.33},
            {display_agl_xxx2_hide,-0.33},
            {display_agl_xxx3_hide,-0.33},
            {display_agl_xxx4_hide,-0.33},
            {display_agl_xxx5_hide,-0.33},
            {display_agl_xxx6_hide,-0.33},
            {display_agl_xxx7_hide,-0.33},
            {display_agl_xxx8_hide,-0.33},
            {display_agl_xxx9_hide,-0.33},
            {display_speed_0xx_hide,0},
            {display_speed_1xx_hide,0},
            {display_speed_2xx_hide,0},
            {display_speed_3xx_hide,0},
            {display_speed_4xx_hide,0},
            {display_speed_5xx_hide,0},
            {display_speed_6xx_hide,0},
            {display_speed_7xx_hide,0},
            {display_speed_8xx_hide,0},
            {display_speed_9xx_hide,0},
            {display_speed_x0x_hide,0},
            {display_speed_x1x_hide,0},
            {display_speed_x2x_hide,0},
            {display_speed_x3x_hide,0},
            {display_speed_x4x_hide,0},
            {display_speed_x5x_hide,0},
            {display_speed_x6x_hide,0},
            {display_speed_x7x_hide,0},
            {display_speed_x8x_hide,0},
            {display_speed_x9x_hide,0},
            {display_speed_xx0_hide,0},
            {display_speed_xx1_hide,0},
            {display_speed_xx2_hide,0},
            {display_speed_xx3_hide,0},
            {display_speed_xx4_hide,0},
            {display_speed_xx5_hide,0},
            {display_speed_xx6_hide,0},
            {display_speed_xx7_hide,0},
            {display_speed_xx8_hide,0},
            {display_speed_xx9_hide,0},
            {stick_control_1_pitch_rot,0},
            {stick_control_2_pitch_rot,0},
            {stick_control_1_roll_rot,0},
            {stick_control_2_roll_rot,0},
            {stick_collective_1_rot,0},
            {stick_collective_2_rot,0},
            {pedals_left_1_move,0},
            {pedals_right_1_move,0},
            {pedals_left_2_rot,0},
            {pedals_right_2_rot,0},
            {optics_1_rot,0},
            {optics_1_muzzle_rot,0},
            {positionlights,0},
            {collisionlight_red_blinking,0}
        };
		hide[] =
        {
            zasleh,
            light_1_hide,
            rotor_1_blur,
            rotor_2_blur,
            "zadni svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.592;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Heli_Transport_04_ammo_ard_F.jpg";
	faction = OPF_R_ard_F;
	crew = O_R_helipilot_ard_F;
	typicalCargo[] = {O_R_Soldier_lite_ard_F};

    /* Turrets */
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class LoadmasterTurret: LoadmasterTurret
		{
			gunnerType = O_R_helicrew_ard_F;
		};
	};
};
class O_R_Heli_Transport_04_bench_ard_F: O_R_Heli_Transport_04_bench_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {rotor_1_rot,0},
            {rotor_2_rot,0},
            {rotor_1_bend_move,0},
            {rotor_2_bend_move,0},
            {rotor_1_destruct_hide,0},
            {rotor_2_destruct_hide,0},
            {gear_1_damper_move,-0.33},
            {gear_1_stabil_1_rot,-0.33},
            {gear_1_stabil_2_rot,-0.33},
            {gear_2_damper_move,-0.33},
            {gear_2_stabil_1_rot,-0.33},
            {gear_2_stabil_2_rot,-0.33},
            {gear_3_damper_move,-0.33},
            {gear_3_stabil_1_rot,-0.33},
            {gear_3_stabil_2_rot,-0.33},
            {door_1_rot,0},
            {door_1_handle_rot,0},
            {door_2_rot,0},
            {door_2_handle_rot,0},
            {door_3_rot,0},
            {door_3_handle_rot,0},
            {display_off_hide,0},
            {display_1_agl_rot_1,-0.33},
            {display_1_agl_rot_2,-0.33},
            {display_1_agl_rot_3,-0.33},
            {display_1_asl_10_rot,7.83},
            {display_1_asl_100_rot,7.83},
            {display_1_battery_1_rot,1},
            {display_1_battery_2_rot,1},
            {display_1_collective_move,0},
            {display_1_compass_rot,0},
            {display_1_enginetemp_1_rot,0},
            {display_1_enginetemp_2_rot,0},
            {display_1_fuel_rot,1},
            {display_1_horizon_bank_rot,0},
            {display_1_horizon_dive_move,0},
            {display_1_oil_rot,1},
            {display_1_rpm_rot,0},
            {display_1_speed_rot_1,0},
            {display_1_speed_rot_2,0},
            {display_1_torque_rot_1,0},
            {display_1_torque_rot_2,0},
            {display_1_verticalspeed_slider_move,0},
            {display_1_verticalspeed_rot_1,0},
            {display_1_verticalspeed_rot_2,0},
            {display_1_verticalspeed_rot_3,0},
            {display_2_agl_rot_1,-0.33},
            {display_2_agl_rot_2,-0.33},
            {display_2_agl_rot_3,-0.33},
            {display_2_asl_10_rot,7.83},
            {display_2_asl_100_rot,7.83},
            {display_2_battery_1_rot,1},
            {display_2_battery_2_rot,1},
            {display_2_collective_move,0},
            {display_2_compass_rot,0},
            {display_2_enginetemp_1_rot,0},
            {display_2_enginetemp_2_rot,0},
            {display_2_fuel_rot,1},
            {display_2_horizon_bank_rot,0},
            {display_2_horizon_dive_move,0},
            {display_2_oil_rot,1},
            {display_2_rpm_rot,0},
            {display_2_speed_rot_1,0},
            {display_2_speed_rot_2,0},
            {display_2_torque_rot_1,0},
            {display_2_torque_rot_2,0},
            {display_2_verticalspeed_slider_move,0},
            {display_2_verticalspeed_rot_1,0},
            {display_2_verticalspeed_rot_2,0},
            {display_2_verticalspeed_rot_3,0},
            {indicator_agl_rot_1,-0.33},
            {indicator_agl_rot_2,-0.33},
            {indicator_agl_rot_3,-0.33},
            {indicator_horizon_bank_rot,0},
            {indicator_horizon_dive_rot,0},
            {indicator_speed_rot_1,0},
            {indicator_speed_rot_2,0},
            {indicator_verticalspeed_rot_1,0},
            {indicator_verticalspeed_rot_2,0},
            {indicator_verticalspeed_rot_3,0},
            {display_agl_0xxx_hide,-0.33},
            {display_agl_1xxx_hide,-0.33},
            {display_agl_2xxx_hide,-0.33},
            {display_agl_3xxx_hide,-0.33},
            {display_agl_4xxx_hide,-0.33},
            {display_agl_5xxx_hide,-0.33},
            {display_agl_6xxx_hide,-0.33},
            {display_agl_7xxx_hide,-0.33},
            {display_agl_8xxx_hide,-0.33},
            {display_agl_9xxx_hide,-0.33},
            {display_agl_x0xx_hide,-0.33},
            {display_agl_x1xx_hide,-0.33},
            {display_agl_x2xx_hide,-0.33},
            {display_agl_x3xx_hide,-0.33},
            {display_agl_x4xx_hide,-0.33},
            {display_agl_x5xx_hide,-0.33},
            {display_agl_x6xx_hide,-0.33},
            {display_agl_x7xx_hide,-0.33},
            {display_agl_x8xx_hide,-0.33},
            {display_agl_x9xx_hide,-0.33},
            {display_agl_xx0x_hide,-0.33},
            {display_agl_xx1x_hide,-0.33},
            {display_agl_xx2x_hide,-0.33},
            {display_agl_xx3x_hide,-0.33},
            {display_agl_xx4x_hide,-0.33},
            {display_agl_xx5x_hide,-0.33},
            {display_agl_xx6x_hide,-0.33},
            {display_agl_xx7x_hide,-0.33},
            {display_agl_xx8x_hide,-0.33},
            {display_agl_xx9x_hide,-0.33},
            {display_agl_xxx0_hide,-0.33},
            {display_agl_xxx1_hide,-0.33},
            {display_agl_xxx2_hide,-0.33},
            {display_agl_xxx3_hide,-0.33},
            {display_agl_xxx4_hide,-0.33},
            {display_agl_xxx5_hide,-0.33},
            {display_agl_xxx6_hide,-0.33},
            {display_agl_xxx7_hide,-0.33},
            {display_agl_xxx8_hide,-0.33},
            {display_agl_xxx9_hide,-0.33},
            {display_speed_0xx_hide,0},
            {display_speed_1xx_hide,0},
            {display_speed_2xx_hide,0},
            {display_speed_3xx_hide,0},
            {display_speed_4xx_hide,0},
            {display_speed_5xx_hide,0},
            {display_speed_6xx_hide,0},
            {display_speed_7xx_hide,0},
            {display_speed_8xx_hide,0},
            {display_speed_9xx_hide,0},
            {display_speed_x0x_hide,0},
            {display_speed_x1x_hide,0},
            {display_speed_x2x_hide,0},
            {display_speed_x3x_hide,0},
            {display_speed_x4x_hide,0},
            {display_speed_x5x_hide,0},
            {display_speed_x6x_hide,0},
            {display_speed_x7x_hide,0},
            {display_speed_x8x_hide,0},
            {display_speed_x9x_hide,0},
            {display_speed_xx0_hide,0},
            {display_speed_xx1_hide,0},
            {display_speed_xx2_hide,0},
            {display_speed_xx3_hide,0},
            {display_speed_xx4_hide,0},
            {display_speed_xx5_hide,0},
            {display_speed_xx6_hide,0},
            {display_speed_xx7_hide,0},
            {display_speed_xx8_hide,0},
            {display_speed_xx9_hide,0},
            {stick_control_1_pitch_rot,0},
            {stick_control_2_pitch_rot,0},
            {stick_control_1_roll_rot,0},
            {stick_control_2_roll_rot,0},
            {stick_collective_1_rot,0},
            {stick_collective_2_rot,0},
            {pedals_left_1_move,0},
            {pedals_right_1_move,0},
            {pedals_left_2_rot,0},
            {pedals_right_2_rot,0},
            {optics_1_rot,0},
            {optics_1_muzzle_rot,0},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {bench_default_hide,0},
            {bench_black_hide,1}
        };
		hide[] =
        {
            zasleh,
            light_1_hide,
            rotor_1_blur,
            rotor_2_blur,
            "zadni svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.828;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Heli_Transport_04_bench_ard_F.jpg";
	faction = OPF_R_ard_F;
	crew = O_R_helipilot_ard_F;
	typicalCargo[] = {O_R_Soldier_lite_ard_F};

    /* Turrets */
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class LoadmasterTurret: LoadmasterTurret
		{
			gunnerType = O_R_helicrew_ard_F;
		};
		class CargoTurret_01: CargoTurret_01{};
		class CargoTurret_02: CargoTurret_02{};
		class CargoTurret_03: CargoTurret_03{};
		class CargoTurret_04: CargoTurret_04{};
		class CargoTurret_05: CargoTurret_05{};
		class CargoTurret_06: CargoTurret_06{};
		class CargoTurret_07: CargoTurret_07{};
		class CargoTurret_08: CargoTurret_08{};
	};
};
class O_R_Heli_Transport_04_box_ard_F: O_R_Heli_Transport_04_box_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {rotor_1_rot,0},
            {rotor_2_rot,0},
            {rotor_1_bend_move,0},
            {rotor_2_bend_move,0},
            {rotor_1_destruct_hide,0},
            {rotor_2_destruct_hide,0},
            {gear_1_damper_move,-0.33},
            {gear_1_stabil_1_rot,-0.33},
            {gear_1_stabil_2_rot,-0.33},
            {gear_2_damper_move,-0.33},
            {gear_2_stabil_1_rot,-0.33},
            {gear_2_stabil_2_rot,-0.33},
            {gear_3_damper_move,-0.33},
            {gear_3_stabil_1_rot,-0.33},
            {gear_3_stabil_2_rot,-0.33},
            {door_1_rot,0},
            {door_1_handle_rot,0},
            {door_2_rot,0},
            {door_2_handle_rot,0},
            {door_3_rot,0},
            {door_3_handle_rot,0},
            {display_off_hide,0},
            {display_1_agl_rot_1,-0.33},
            {display_1_agl_rot_2,-0.33},
            {display_1_agl_rot_3,-0.33},
            {display_1_asl_10_rot,7.59},
            {display_1_asl_100_rot,7.59},
            {display_1_battery_1_rot,1},
            {display_1_battery_2_rot,1},
            {display_1_collective_move,0},
            {display_1_compass_rot,0},
            {display_1_enginetemp_1_rot,0},
            {display_1_enginetemp_2_rot,0},
            {display_1_fuel_rot,1},
            {display_1_horizon_bank_rot,0},
            {display_1_horizon_dive_move,0},
            {display_1_oil_rot,1},
            {display_1_rpm_rot,0},
            {display_1_speed_rot_1,0},
            {display_1_speed_rot_2,0},
            {display_1_torque_rot_1,0},
            {display_1_torque_rot_2,0},
            {display_1_verticalspeed_slider_move,0},
            {display_1_verticalspeed_rot_1,0},
            {display_1_verticalspeed_rot_2,0},
            {display_1_verticalspeed_rot_3,0},
            {display_2_agl_rot_1,-0.33},
            {display_2_agl_rot_2,-0.33},
            {display_2_agl_rot_3,-0.33},
            {display_2_asl_10_rot,7.59},
            {display_2_asl_100_rot,7.59},
            {display_2_battery_1_rot,1},
            {display_2_battery_2_rot,1},
            {display_2_collective_move,0},
            {display_2_compass_rot,0},
            {display_2_enginetemp_1_rot,0},
            {display_2_enginetemp_2_rot,0},
            {display_2_fuel_rot,1},
            {display_2_horizon_bank_rot,0},
            {display_2_horizon_dive_move,0},
            {display_2_oil_rot,1},
            {display_2_rpm_rot,0},
            {display_2_speed_rot_1,0},
            {display_2_speed_rot_2,0},
            {display_2_torque_rot_1,0},
            {display_2_torque_rot_2,0},
            {display_2_verticalspeed_slider_move,0},
            {display_2_verticalspeed_rot_1,0},
            {display_2_verticalspeed_rot_2,0},
            {display_2_verticalspeed_rot_3,0},
            {indicator_agl_rot_1,-0.33},
            {indicator_agl_rot_2,-0.33},
            {indicator_agl_rot_3,-0.33},
            {indicator_horizon_bank_rot,0},
            {indicator_horizon_dive_rot,0},
            {indicator_speed_rot_1,0},
            {indicator_speed_rot_2,0},
            {indicator_verticalspeed_rot_1,0},
            {indicator_verticalspeed_rot_2,0},
            {indicator_verticalspeed_rot_3,0},
            {display_agl_0xxx_hide,-0.33},
            {display_agl_1xxx_hide,-0.33},
            {display_agl_2xxx_hide,-0.33},
            {display_agl_3xxx_hide,-0.33},
            {display_agl_4xxx_hide,-0.33},
            {display_agl_5xxx_hide,-0.33},
            {display_agl_6xxx_hide,-0.33},
            {display_agl_7xxx_hide,-0.33},
            {display_agl_8xxx_hide,-0.33},
            {display_agl_9xxx_hide,-0.33},
            {display_agl_x0xx_hide,-0.33},
            {display_agl_x1xx_hide,-0.33},
            {display_agl_x2xx_hide,-0.33},
            {display_agl_x3xx_hide,-0.33},
            {display_agl_x4xx_hide,-0.33},
            {display_agl_x5xx_hide,-0.33},
            {display_agl_x6xx_hide,-0.33},
            {display_agl_x7xx_hide,-0.33},
            {display_agl_x8xx_hide,-0.33},
            {display_agl_x9xx_hide,-0.33},
            {display_agl_xx0x_hide,-0.33},
            {display_agl_xx1x_hide,-0.33},
            {display_agl_xx2x_hide,-0.33},
            {display_agl_xx3x_hide,-0.33},
            {display_agl_xx4x_hide,-0.33},
            {display_agl_xx5x_hide,-0.33},
            {display_agl_xx6x_hide,-0.33},
            {display_agl_xx7x_hide,-0.33},
            {display_agl_xx8x_hide,-0.33},
            {display_agl_xx9x_hide,-0.33},
            {display_agl_xxx0_hide,-0.33},
            {display_agl_xxx1_hide,-0.33},
            {display_agl_xxx2_hide,-0.33},
            {display_agl_xxx3_hide,-0.33},
            {display_agl_xxx4_hide,-0.33},
            {display_agl_xxx5_hide,-0.33},
            {display_agl_xxx6_hide,-0.33},
            {display_agl_xxx7_hide,-0.33},
            {display_agl_xxx8_hide,-0.33},
            {display_agl_xxx9_hide,-0.33},
            {display_speed_0xx_hide,0},
            {display_speed_1xx_hide,0},
            {display_speed_2xx_hide,0},
            {display_speed_3xx_hide,0},
            {display_speed_4xx_hide,0},
            {display_speed_5xx_hide,0},
            {display_speed_6xx_hide,0},
            {display_speed_7xx_hide,0},
            {display_speed_8xx_hide,0},
            {display_speed_9xx_hide,0},
            {display_speed_x0x_hide,0},
            {display_speed_x1x_hide,0},
            {display_speed_x2x_hide,0},
            {display_speed_x3x_hide,0},
            {display_speed_x4x_hide,0},
            {display_speed_x5x_hide,0},
            {display_speed_x6x_hide,0},
            {display_speed_x7x_hide,0},
            {display_speed_x8x_hide,0},
            {display_speed_x9x_hide,0},
            {display_speed_xx0_hide,0},
            {display_speed_xx1_hide,0},
            {display_speed_xx2_hide,0},
            {display_speed_xx3_hide,0},
            {display_speed_xx4_hide,0},
            {display_speed_xx5_hide,0},
            {display_speed_xx6_hide,0},
            {display_speed_xx7_hide,0},
            {display_speed_xx8_hide,0},
            {display_speed_xx9_hide,0},
            {stick_control_1_pitch_rot,0},
            {stick_control_2_pitch_rot,0},
            {stick_control_1_roll_rot,0},
            {stick_control_2_roll_rot,0},
            {stick_collective_1_rot,0},
            {stick_collective_2_rot,0},
            {pedals_left_1_move,0},
            {pedals_right_1_move,0},
            {pedals_left_2_rot,0},
            {pedals_right_2_rot,0},
            {optics_1_rot,0},
            {optics_1_muzzle_rot,0},
            {positionlights,0},
            {collisionlight_red_blinking,0}
        };
		hide[] =
        {
            zasleh,
            light_1_hide,
            rotor_1_blur,
            rotor_2_blur,
            "zadni svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.592;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Heli_Transport_04_box_ard_F.jpg";
	faction = OPF_R_ard_F;
	crew = O_R_helipilot_ard_F;
	typicalCargo[] = {O_R_Soldier_lite_ard_F};

    /* Turrets */
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class LoadmasterTurret: LoadmasterTurret
		{
			gunnerType = O_R_helicrew_ard_F;
		};
	};

    /* Inventory */
	class TransportBackpacks
	{
		bag_xx(B_Parachute,3);
		bag_xx(B_FieldPack_green_F,2);
	};
};
class O_R_Heli_Transport_04_covered_ard_F: O_R_Heli_Transport_04_covered_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {rotor_1_rot,0},
            {rotor_2_rot,0},
            {rotor_1_bend_move,0},
            {rotor_2_bend_move,0},
            {rotor_1_destruct_hide,0},
            {rotor_2_destruct_hide,0},
            {gear_1_damper_move,-0.33},
            {gear_1_stabil_1_rot,-0.33},
            {gear_1_stabil_2_rot,-0.33},
            {gear_2_damper_move,-0.33},
            {gear_2_stabil_1_rot,-0.33},
            {gear_2_stabil_2_rot,-0.33},
            {gear_3_damper_move,-0.33},
            {gear_3_stabil_1_rot,-0.33},
            {gear_3_stabil_2_rot,-0.33},
            {door_1_rot,0},
            {door_1_handle_rot,0},
            {door_2_rot,0},
            {door_2_handle_rot,0},
            {door_3_rot,0},
            {door_3_handle_rot,0},
            {display_off_hide,0},
            {display_1_agl_rot_1,-0.33},
            {display_1_agl_rot_2,-0.33},
            {display_1_agl_rot_3,-0.33},
            {display_1_asl_10_rot,7.59},
            {display_1_asl_100_rot,7.59},
            {display_1_battery_1_rot,1},
            {display_1_battery_2_rot,1},
            {display_1_collective_move,0},
            {display_1_compass_rot,0},
            {display_1_enginetemp_1_rot,0},
            {display_1_enginetemp_2_rot,0},
            {display_1_fuel_rot,1},
            {display_1_horizon_bank_rot,0},
            {display_1_horizon_dive_move,0},
            {display_1_oil_rot,1},
            {display_1_rpm_rot,0},
            {display_1_speed_rot_1,0},
            {display_1_speed_rot_2,0},
            {display_1_torque_rot_1,0},
            {display_1_torque_rot_2,0},
            {display_1_verticalspeed_slider_move,0},
            {display_1_verticalspeed_rot_1,0},
            {display_1_verticalspeed_rot_2,0},
            {display_1_verticalspeed_rot_3,0},
            {display_2_agl_rot_1,-0.33},
            {display_2_agl_rot_2,-0.33},
            {display_2_agl_rot_3,-0.33},
            {display_2_asl_10_rot,7.59},
            {display_2_asl_100_rot,7.59},
            {display_2_battery_1_rot,1},
            {display_2_battery_2_rot,1},
            {display_2_collective_move,0},
            {display_2_compass_rot,0},
            {display_2_enginetemp_1_rot,0},
            {display_2_enginetemp_2_rot,0},
            {display_2_fuel_rot,1},
            {display_2_horizon_bank_rot,0},
            {display_2_horizon_dive_move,0},
            {display_2_oil_rot,1},
            {display_2_rpm_rot,0},
            {display_2_speed_rot_1,0},
            {display_2_speed_rot_2,0},
            {display_2_torque_rot_1,0},
            {display_2_torque_rot_2,0},
            {display_2_verticalspeed_slider_move,0},
            {display_2_verticalspeed_rot_1,0},
            {display_2_verticalspeed_rot_2,0},
            {display_2_verticalspeed_rot_3,0},
            {indicator_agl_rot_1,-0.33},
            {indicator_agl_rot_2,-0.33},
            {indicator_agl_rot_3,-0.33},
            {indicator_horizon_bank_rot,0},
            {indicator_horizon_dive_rot,0},
            {indicator_speed_rot_1,0},
            {indicator_speed_rot_2,0},
            {indicator_verticalspeed_rot_1,0},
            {indicator_verticalspeed_rot_2,0},
            {indicator_verticalspeed_rot_3,0},
            {display_agl_0xxx_hide,-0.33},
            {display_agl_1xxx_hide,-0.33},
            {display_agl_2xxx_hide,-0.33},
            {display_agl_3xxx_hide,-0.33},
            {display_agl_4xxx_hide,-0.33},
            {display_agl_5xxx_hide,-0.33},
            {display_agl_6xxx_hide,-0.33},
            {display_agl_7xxx_hide,-0.33},
            {display_agl_8xxx_hide,-0.33},
            {display_agl_9xxx_hide,-0.33},
            {display_agl_x0xx_hide,-0.33},
            {display_agl_x1xx_hide,-0.33},
            {display_agl_x2xx_hide,-0.33},
            {display_agl_x3xx_hide,-0.33},
            {display_agl_x4xx_hide,-0.33},
            {display_agl_x5xx_hide,-0.33},
            {display_agl_x6xx_hide,-0.33},
            {display_agl_x7xx_hide,-0.33},
            {display_agl_x8xx_hide,-0.33},
            {display_agl_x9xx_hide,-0.33},
            {display_agl_xx0x_hide,-0.33},
            {display_agl_xx1x_hide,-0.33},
            {display_agl_xx2x_hide,-0.33},
            {display_agl_xx3x_hide,-0.33},
            {display_agl_xx4x_hide,-0.33},
            {display_agl_xx5x_hide,-0.33},
            {display_agl_xx6x_hide,-0.33},
            {display_agl_xx7x_hide,-0.33},
            {display_agl_xx8x_hide,-0.33},
            {display_agl_xx9x_hide,-0.33},
            {display_agl_xxx0_hide,-0.33},
            {display_agl_xxx1_hide,-0.33},
            {display_agl_xxx2_hide,-0.33},
            {display_agl_xxx3_hide,-0.33},
            {display_agl_xxx4_hide,-0.33},
            {display_agl_xxx5_hide,-0.33},
            {display_agl_xxx6_hide,-0.33},
            {display_agl_xxx7_hide,-0.33},
            {display_agl_xxx8_hide,-0.33},
            {display_agl_xxx9_hide,-0.33},
            {display_speed_0xx_hide,0},
            {display_speed_1xx_hide,0},
            {display_speed_2xx_hide,0},
            {display_speed_3xx_hide,0},
            {display_speed_4xx_hide,0},
            {display_speed_5xx_hide,0},
            {display_speed_6xx_hide,0},
            {display_speed_7xx_hide,0},
            {display_speed_8xx_hide,0},
            {display_speed_9xx_hide,0},
            {display_speed_x0x_hide,0},
            {display_speed_x1x_hide,0},
            {display_speed_x2x_hide,0},
            {display_speed_x3x_hide,0},
            {display_speed_x4x_hide,0},
            {display_speed_x5x_hide,0},
            {display_speed_x6x_hide,0},
            {display_speed_x7x_hide,0},
            {display_speed_x8x_hide,0},
            {display_speed_x9x_hide,0},
            {display_speed_xx0_hide,0},
            {display_speed_xx1_hide,0},
            {display_speed_xx2_hide,0},
            {display_speed_xx3_hide,0},
            {display_speed_xx4_hide,0},
            {display_speed_xx5_hide,0},
            {display_speed_xx6_hide,0},
            {display_speed_xx7_hide,0},
            {display_speed_xx8_hide,0},
            {display_speed_xx9_hide,0},
            {stick_control_1_pitch_rot,0},
            {stick_control_2_pitch_rot,0},
            {stick_control_1_roll_rot,0},
            {stick_control_2_roll_rot,0},
            {stick_collective_1_rot,0},
            {stick_collective_2_rot,0},
            {pedals_left_1_move,0},
            {pedals_right_1_move,0},
            {pedals_left_2_rot,0},
            {pedals_right_2_rot,0},
            {optics_1_rot,0},
            {optics_1_muzzle_rot,0},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {door_4_move_1,0},
            {door_4_move_2,0},
            {door_4_handle_rot,0},
            {door_6_rot,0},
            {door_6_hide,0},
            {door_5_move_1,0},
            {door_5_move_2,0},
            {door_5_handle_rot,0}
        };
		hide[] =
        {
            zasleh,
            light_1_hide,
            rotor_1_blur,
            rotor_2_blur,
            "zadni svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.592;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Heli_Transport_04_covered_ard_F.jpg";
	faction = OPF_R_ard_F;
	crew = O_R_helipilot_ard_F;
	typicalCargo[] = {O_R_Soldier_lite_ard_F};

    /* Turrets */
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class LoadmasterTurret: LoadmasterTurret
		{
			gunnerType = O_R_helicrew_ard_F;
		};
		class CargoTurret_01: CargoTurret_01{};
		class CargoTurret_02: CargoTurret_02{};
	};
};
class O_R_Heli_Transport_04_fuel_ard_F: O_R_Heli_Transport_04_fuel_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {rotor_1_rot,0},
            {rotor_2_rot,0},
            {rotor_1_bend_move,0},
            {rotor_2_bend_move,0},
            {rotor_1_destruct_hide,0},
            {rotor_2_destruct_hide,0},
            {gear_1_damper_move,-0.33},
            {gear_1_stabil_1_rot,-0.33},
            {gear_1_stabil_2_rot,-0.33},
            {gear_2_damper_move,-0.33},
            {gear_2_stabil_1_rot,-0.33},
            {gear_2_stabil_2_rot,-0.33},
            {gear_3_damper_move,-0.33},
            {gear_3_stabil_1_rot,-0.33},
            {gear_3_stabil_2_rot,-0.33},
            {door_1_rot,0},
            {door_1_handle_rot,0},
            {door_2_rot,0},
            {door_2_handle_rot,0},
            {door_3_rot,0},
            {door_3_handle_rot,0},
            {display_off_hide,0},
            {display_1_agl_rot_1,-0.33},
            {display_1_agl_rot_2,-0.33},
            {display_1_agl_rot_3,-0.33},
            {display_1_asl_10_rot,7.45},
            {display_1_asl_100_rot,7.45},
            {display_1_battery_1_rot,1},
            {display_1_battery_2_rot,1},
            {display_1_collective_move,0},
            {display_1_compass_rot,0},
            {display_1_enginetemp_1_rot,0},
            {display_1_enginetemp_2_rot,0},
            {display_1_fuel_rot,1},
            {display_1_horizon_bank_rot,0},
            {display_1_horizon_dive_move,0},
            {display_1_oil_rot,1},
            {display_1_rpm_rot,0},
            {display_1_speed_rot_1,0},
            {display_1_speed_rot_2,0},
            {display_1_torque_rot_1,0},
            {display_1_torque_rot_2,0},
            {display_1_verticalspeed_slider_move,0},
            {display_1_verticalspeed_rot_1,0},
            {display_1_verticalspeed_rot_2,0},
            {display_1_verticalspeed_rot_3,0},
            {display_2_agl_rot_1,-0.33},
            {display_2_agl_rot_2,-0.33},
            {display_2_agl_rot_3,-0.33},
            {display_2_asl_10_rot,7.45},
            {display_2_asl_100_rot,7.45},
            {display_2_battery_1_rot,1},
            {display_2_battery_2_rot,1},
            {display_2_collective_move,0},
            {display_2_compass_rot,0},
            {display_2_enginetemp_1_rot,0},
            {display_2_enginetemp_2_rot,0},
            {display_2_fuel_rot,1},
            {display_2_horizon_bank_rot,0},
            {display_2_horizon_dive_move,0},
            {display_2_oil_rot,1},
            {display_2_rpm_rot,0},
            {display_2_speed_rot_1,0},
            {display_2_speed_rot_2,0},
            {display_2_torque_rot_1,0},
            {display_2_torque_rot_2,0},
            {display_2_verticalspeed_slider_move,0},
            {display_2_verticalspeed_rot_1,0},
            {display_2_verticalspeed_rot_2,0},
            {display_2_verticalspeed_rot_3,0},
            {indicator_agl_rot_1,-0.33},
            {indicator_agl_rot_2,-0.33},
            {indicator_agl_rot_3,-0.33},
            {indicator_horizon_bank_rot,0},
            {indicator_horizon_dive_rot,0},
            {indicator_speed_rot_1,0},
            {indicator_speed_rot_2,0},
            {indicator_verticalspeed_rot_1,0},
            {indicator_verticalspeed_rot_2,0},
            {indicator_verticalspeed_rot_3,0},
            {display_agl_0xxx_hide,-0.33},
            {display_agl_1xxx_hide,-0.33},
            {display_agl_2xxx_hide,-0.33},
            {display_agl_3xxx_hide,-0.33},
            {display_agl_4xxx_hide,-0.33},
            {display_agl_5xxx_hide,-0.33},
            {display_agl_6xxx_hide,-0.33},
            {display_agl_7xxx_hide,-0.33},
            {display_agl_8xxx_hide,-0.33},
            {display_agl_9xxx_hide,-0.33},
            {display_agl_x0xx_hide,-0.33},
            {display_agl_x1xx_hide,-0.33},
            {display_agl_x2xx_hide,-0.33},
            {display_agl_x3xx_hide,-0.33},
            {display_agl_x4xx_hide,-0.33},
            {display_agl_x5xx_hide,-0.33},
            {display_agl_x6xx_hide,-0.33},
            {display_agl_x7xx_hide,-0.33},
            {display_agl_x8xx_hide,-0.33},
            {display_agl_x9xx_hide,-0.33},
            {display_agl_xx0x_hide,-0.33},
            {display_agl_xx1x_hide,-0.33},
            {display_agl_xx2x_hide,-0.33},
            {display_agl_xx3x_hide,-0.33},
            {display_agl_xx4x_hide,-0.33},
            {display_agl_xx5x_hide,-0.33},
            {display_agl_xx6x_hide,-0.33},
            {display_agl_xx7x_hide,-0.33},
            {display_agl_xx8x_hide,-0.33},
            {display_agl_xx9x_hide,-0.33},
            {display_agl_xxx0_hide,-0.33},
            {display_agl_xxx1_hide,-0.33},
            {display_agl_xxx2_hide,-0.33},
            {display_agl_xxx3_hide,-0.33},
            {display_agl_xxx4_hide,-0.33},
            {display_agl_xxx5_hide,-0.33},
            {display_agl_xxx6_hide,-0.33},
            {display_agl_xxx7_hide,-0.33},
            {display_agl_xxx8_hide,-0.33},
            {display_agl_xxx9_hide,-0.33},
            {display_speed_0xx_hide,0},
            {display_speed_1xx_hide,0},
            {display_speed_2xx_hide,0},
            {display_speed_3xx_hide,0},
            {display_speed_4xx_hide,0},
            {display_speed_5xx_hide,0},
            {display_speed_6xx_hide,0},
            {display_speed_7xx_hide,0},
            {display_speed_8xx_hide,0},
            {display_speed_9xx_hide,0},
            {display_speed_x0x_hide,0},
            {display_speed_x1x_hide,0},
            {display_speed_x2x_hide,0},
            {display_speed_x3x_hide,0},
            {display_speed_x4x_hide,0},
            {display_speed_x5x_hide,0},
            {display_speed_x6x_hide,0},
            {display_speed_x7x_hide,0},
            {display_speed_x8x_hide,0},
            {display_speed_x9x_hide,0},
            {display_speed_xx0_hide,0},
            {display_speed_xx1_hide,0},
            {display_speed_xx2_hide,0},
            {display_speed_xx3_hide,0},
            {display_speed_xx4_hide,0},
            {display_speed_xx5_hide,0},
            {display_speed_xx6_hide,0},
            {display_speed_xx7_hide,0},
            {display_speed_xx8_hide,0},
            {display_speed_xx9_hide,0},
            {stick_control_1_pitch_rot,0},
            {stick_control_2_pitch_rot,0},
            {stick_control_1_roll_rot,0},
            {stick_control_2_roll_rot,0},
            {stick_collective_1_rot,0},
            {stick_collective_2_rot,0},
            {pedals_left_1_move,0},
            {pedals_right_1_move,0},
            {pedals_left_2_rot,0},
            {pedals_right_2_rot,0},
            {optics_1_rot,0},
            {optics_1_muzzle_rot,0},
            {positionlights,0},
            {collisionlight_red_blinking,0}
        };
		hide[] =
        {
            zasleh,
            light_1_hide,
            rotor_1_blur,
            rotor_2_blur,
            "zadni svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.446;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Heli_Transport_04_fuel_ard_F.jpg";
	faction = OPF_R_ard_F;
	crew = O_R_helipilot_ard_F;
	typicalCargo[] = {O_R_Soldier_lite_ard_F};

    /* Turrets */
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class LoadmasterTurret: LoadmasterTurret
		{
			gunnerType = O_R_helicrew_ard_F;
		};
	};
};
class O_R_Heli_Transport_04_medevac_ard_F: O_R_Heli_Transport_04_medevac_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {rotor_1_rot,0},
            {rotor_2_rot,0},
            {rotor_1_bend_move,0},
            {rotor_2_bend_move,0},
            {rotor_1_destruct_hide,0},
            {rotor_2_destruct_hide,0},
            {gear_1_damper_move,-0.33},
            {gear_1_stabil_1_rot,-0.33},
            {gear_1_stabil_2_rot,-0.33},
            {gear_2_damper_move,-0.33},
            {gear_2_stabil_1_rot,-0.33},
            {gear_2_stabil_2_rot,-0.33},
            {gear_3_damper_move,-0.33},
            {gear_3_stabil_1_rot,-0.33},
            {gear_3_stabil_2_rot,-0.33},
            {door_1_rot,0},
            {door_1_handle_rot,0},
            {door_2_rot,0},
            {door_2_handle_rot,0},
            {door_3_rot,0},
            {door_3_handle_rot,0},
            {display_off_hide,0},
            {display_1_agl_rot_1,-0.33},
            {display_1_agl_rot_2,-0.33},
            {display_1_agl_rot_3,-0.33},
            {display_1_asl_10_rot,7.59},
            {display_1_asl_100_rot,7.59},
            {display_1_battery_1_rot,1},
            {display_1_battery_2_rot,1},
            {display_1_collective_move,0},
            {display_1_compass_rot,0},
            {display_1_enginetemp_1_rot,0},
            {display_1_enginetemp_2_rot,0},
            {display_1_fuel_rot,1},
            {display_1_horizon_bank_rot,0},
            {display_1_horizon_dive_move,0},
            {display_1_oil_rot,1},
            {display_1_rpm_rot,0},
            {display_1_speed_rot_1,0},
            {display_1_speed_rot_2,0},
            {display_1_torque_rot_1,0},
            {display_1_torque_rot_2,0},
            {display_1_verticalspeed_slider_move,0},
            {display_1_verticalspeed_rot_1,0},
            {display_1_verticalspeed_rot_2,0},
            {display_1_verticalspeed_rot_3,0},
            {display_2_agl_rot_1,-0.33},
            {display_2_agl_rot_2,-0.33},
            {display_2_agl_rot_3,-0.33},
            {display_2_asl_10_rot,7.59},
            {display_2_asl_100_rot,7.59},
            {display_2_battery_1_rot,1},
            {display_2_battery_2_rot,1},
            {display_2_collective_move,0},
            {display_2_compass_rot,0},
            {display_2_enginetemp_1_rot,0},
            {display_2_enginetemp_2_rot,0},
            {display_2_fuel_rot,1},
            {display_2_horizon_bank_rot,0},
            {display_2_horizon_dive_move,0},
            {display_2_oil_rot,1},
            {display_2_rpm_rot,0},
            {display_2_speed_rot_1,0},
            {display_2_speed_rot_2,0},
            {display_2_torque_rot_1,0},
            {display_2_torque_rot_2,0},
            {display_2_verticalspeed_slider_move,0},
            {display_2_verticalspeed_rot_1,0},
            {display_2_verticalspeed_rot_2,0},
            {display_2_verticalspeed_rot_3,0},
            {indicator_agl_rot_1,-0.33},
            {indicator_agl_rot_2,-0.33},
            {indicator_agl_rot_3,-0.33},
            {indicator_horizon_bank_rot,0},
            {indicator_horizon_dive_rot,0},
            {indicator_speed_rot_1,0},
            {indicator_speed_rot_2,0},
            {indicator_verticalspeed_rot_1,0},
            {indicator_verticalspeed_rot_2,0},
            {indicator_verticalspeed_rot_3,0},
            {display_agl_0xxx_hide,-0.33},
            {display_agl_1xxx_hide,-0.33},
            {display_agl_2xxx_hide,-0.33},
            {display_agl_3xxx_hide,-0.33},
            {display_agl_4xxx_hide,-0.33},
            {display_agl_5xxx_hide,-0.33},
            {display_agl_6xxx_hide,-0.33},
            {display_agl_7xxx_hide,-0.33},
            {display_agl_8xxx_hide,-0.33},
            {display_agl_9xxx_hide,-0.33},
            {display_agl_x0xx_hide,-0.33},
            {display_agl_x1xx_hide,-0.33},
            {display_agl_x2xx_hide,-0.33},
            {display_agl_x3xx_hide,-0.33},
            {display_agl_x4xx_hide,-0.33},
            {display_agl_x5xx_hide,-0.33},
            {display_agl_x6xx_hide,-0.33},
            {display_agl_x7xx_hide,-0.33},
            {display_agl_x8xx_hide,-0.33},
            {display_agl_x9xx_hide,-0.33},
            {display_agl_xx0x_hide,-0.33},
            {display_agl_xx1x_hide,-0.33},
            {display_agl_xx2x_hide,-0.33},
            {display_agl_xx3x_hide,-0.33},
            {display_agl_xx4x_hide,-0.33},
            {display_agl_xx5x_hide,-0.33},
            {display_agl_xx6x_hide,-0.33},
            {display_agl_xx7x_hide,-0.33},
            {display_agl_xx8x_hide,-0.33},
            {display_agl_xx9x_hide,-0.33},
            {display_agl_xxx0_hide,-0.33},
            {display_agl_xxx1_hide,-0.33},
            {display_agl_xxx2_hide,-0.33},
            {display_agl_xxx3_hide,-0.33},
            {display_agl_xxx4_hide,-0.33},
            {display_agl_xxx5_hide,-0.33},
            {display_agl_xxx6_hide,-0.33},
            {display_agl_xxx7_hide,-0.33},
            {display_agl_xxx8_hide,-0.33},
            {display_agl_xxx9_hide,-0.33},
            {display_speed_0xx_hide,0},
            {display_speed_1xx_hide,0},
            {display_speed_2xx_hide,0},
            {display_speed_3xx_hide,0},
            {display_speed_4xx_hide,0},
            {display_speed_5xx_hide,0},
            {display_speed_6xx_hide,0},
            {display_speed_7xx_hide,0},
            {display_speed_8xx_hide,0},
            {display_speed_9xx_hide,0},
            {display_speed_x0x_hide,0},
            {display_speed_x1x_hide,0},
            {display_speed_x2x_hide,0},
            {display_speed_x3x_hide,0},
            {display_speed_x4x_hide,0},
            {display_speed_x5x_hide,0},
            {display_speed_x6x_hide,0},
            {display_speed_x7x_hide,0},
            {display_speed_x8x_hide,0},
            {display_speed_x9x_hide,0},
            {display_speed_xx0_hide,0},
            {display_speed_xx1_hide,0},
            {display_speed_xx2_hide,0},
            {display_speed_xx3_hide,0},
            {display_speed_xx4_hide,0},
            {display_speed_xx5_hide,0},
            {display_speed_xx6_hide,0},
            {display_speed_xx7_hide,0},
            {display_speed_xx8_hide,0},
            {display_speed_xx9_hide,0},
            {stick_control_1_pitch_rot,0},
            {stick_control_2_pitch_rot,0},
            {stick_control_1_roll_rot,0},
            {stick_control_2_roll_rot,0},
            {stick_collective_1_rot,0},
            {stick_collective_2_rot,0},
            {pedals_left_1_move,0},
            {pedals_right_1_move,0},
            {pedals_left_2_rot,0},
            {pedals_right_2_rot,0},
            {optics_1_rot,0},
            {optics_1_muzzle_rot,0},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {door_4_move_1,0},
            {door_4_move_2,0},
            {door_4_handle_rot,0},
            {door_6_rot,0},
            {door_6_hide,0}
        };
		hide[] =
        {
            zasleh,
            light_1_hide,
            rotor_1_blur,
            rotor_2_blur,
            "zadni svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.592;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Heli_Transport_04_medevac_ard_F.jpg";
	faction = OPF_R_ard_F;
	crew = O_R_helipilot_ard_F;
	typicalCargo[] = {O_R_Soldier_lite_ard_F};

    /* Turrets */
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class LoadmasterTurret: LoadmasterTurret
		{
			gunnerType = O_R_helicrew_ard_F;
		};
	};
};
class O_R_Heli_Transport_04_repair_ard_F: O_R_Heli_Transport_04_repair_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {rotor_1_rot,0},
            {rotor_2_rot,0},
            {rotor_1_bend_move,0},
            {rotor_2_bend_move,0},
            {rotor_1_destruct_hide,0},
            {rotor_2_destruct_hide,0},
            {gear_1_damper_move,-0.33},
            {gear_1_stabil_1_rot,-0.33},
            {gear_1_stabil_2_rot,-0.33},
            {gear_2_damper_move,-0.33},
            {gear_2_stabil_1_rot,-0.33},
            {gear_2_stabil_2_rot,-0.33},
            {gear_3_damper_move,-0.33},
            {gear_3_stabil_1_rot,-0.33},
            {gear_3_stabil_2_rot,-0.33},
            {door_1_rot,0},
            {door_1_handle_rot,0},
            {door_2_rot,0},
            {door_2_handle_rot,0},
            {door_3_rot,0},
            {door_3_handle_rot,0},
            {display_off_hide,0},
            {display_1_agl_rot_1,-0.33},
            {display_1_agl_rot_2,-0.33},
            {display_1_agl_rot_3,-0.33},
            {display_1_asl_10_rot,7.59},
            {display_1_asl_100_rot,7.59},
            {display_1_battery_1_rot,1},
            {display_1_battery_2_rot,1},
            {display_1_collective_move,0},
            {display_1_compass_rot,0},
            {display_1_enginetemp_1_rot,0},
            {display_1_enginetemp_2_rot,0},
            {display_1_fuel_rot,1},
            {display_1_horizon_bank_rot,0},
            {display_1_horizon_dive_move,0},
            {display_1_oil_rot,1},
            {display_1_rpm_rot,0},
            {display_1_speed_rot_1,0},
            {display_1_speed_rot_2,0},
            {display_1_torque_rot_1,0},
            {display_1_torque_rot_2,0},
            {display_1_verticalspeed_slider_move,0},
            {display_1_verticalspeed_rot_1,0},
            {display_1_verticalspeed_rot_2,0},
            {display_1_verticalspeed_rot_3,0},
            {display_2_agl_rot_1,-0.33},
            {display_2_agl_rot_2,-0.33},
            {display_2_agl_rot_3,-0.33},
            {display_2_asl_10_rot,7.59},
            {display_2_asl_100_rot,7.59},
            {display_2_battery_1_rot,1},
            {display_2_battery_2_rot,1},
            {display_2_collective_move,0},
            {display_2_compass_rot,0},
            {display_2_enginetemp_1_rot,0},
            {display_2_enginetemp_2_rot,0},
            {display_2_fuel_rot,1},
            {display_2_horizon_bank_rot,0},
            {display_2_horizon_dive_move,0},
            {display_2_oil_rot,1},
            {display_2_rpm_rot,0},
            {display_2_speed_rot_1,0},
            {display_2_speed_rot_2,0},
            {display_2_torque_rot_1,0},
            {display_2_torque_rot_2,0},
            {display_2_verticalspeed_slider_move,0},
            {display_2_verticalspeed_rot_1,0},
            {display_2_verticalspeed_rot_2,0},
            {display_2_verticalspeed_rot_3,0},
            {indicator_agl_rot_1,-0.33},
            {indicator_agl_rot_2,-0.33},
            {indicator_agl_rot_3,-0.33},
            {indicator_horizon_bank_rot,0},
            {indicator_horizon_dive_rot,0},
            {indicator_speed_rot_1,0},
            {indicator_speed_rot_2,0},
            {indicator_verticalspeed_rot_1,0},
            {indicator_verticalspeed_rot_2,0},
            {indicator_verticalspeed_rot_3,0},
            {display_agl_0xxx_hide,-0.33},
            {display_agl_1xxx_hide,-0.33},
            {display_agl_2xxx_hide,-0.33},
            {display_agl_3xxx_hide,-0.33},
            {display_agl_4xxx_hide,-0.33},
            {display_agl_5xxx_hide,-0.33},
            {display_agl_6xxx_hide,-0.33},
            {display_agl_7xxx_hide,-0.33},
            {display_agl_8xxx_hide,-0.33},
            {display_agl_9xxx_hide,-0.33},
            {display_agl_x0xx_hide,-0.33},
            {display_agl_x1xx_hide,-0.33},
            {display_agl_x2xx_hide,-0.33},
            {display_agl_x3xx_hide,-0.33},
            {display_agl_x4xx_hide,-0.33},
            {display_agl_x5xx_hide,-0.33},
            {display_agl_x6xx_hide,-0.33},
            {display_agl_x7xx_hide,-0.33},
            {display_agl_x8xx_hide,-0.33},
            {display_agl_x9xx_hide,-0.33},
            {display_agl_xx0x_hide,-0.33},
            {display_agl_xx1x_hide,-0.33},
            {display_agl_xx2x_hide,-0.33},
            {display_agl_xx3x_hide,-0.33},
            {display_agl_xx4x_hide,-0.33},
            {display_agl_xx5x_hide,-0.33},
            {display_agl_xx6x_hide,-0.33},
            {display_agl_xx7x_hide,-0.33},
            {display_agl_xx8x_hide,-0.33},
            {display_agl_xx9x_hide,-0.33},
            {display_agl_xxx0_hide,-0.33},
            {display_agl_xxx1_hide,-0.33},
            {display_agl_xxx2_hide,-0.33},
            {display_agl_xxx3_hide,-0.33},
            {display_agl_xxx4_hide,-0.33},
            {display_agl_xxx5_hide,-0.33},
            {display_agl_xxx6_hide,-0.33},
            {display_agl_xxx7_hide,-0.33},
            {display_agl_xxx8_hide,-0.33},
            {display_agl_xxx9_hide,-0.33},
            {display_speed_0xx_hide,0},
            {display_speed_1xx_hide,0},
            {display_speed_2xx_hide,0},
            {display_speed_3xx_hide,0},
            {display_speed_4xx_hide,0},
            {display_speed_5xx_hide,0},
            {display_speed_6xx_hide,0},
            {display_speed_7xx_hide,0},
            {display_speed_8xx_hide,0},
            {display_speed_9xx_hide,0},
            {display_speed_x0x_hide,0},
            {display_speed_x1x_hide,0},
            {display_speed_x2x_hide,0},
            {display_speed_x3x_hide,0},
            {display_speed_x4x_hide,0},
            {display_speed_x5x_hide,0},
            {display_speed_x6x_hide,0},
            {display_speed_x7x_hide,0},
            {display_speed_x8x_hide,0},
            {display_speed_x9x_hide,0},
            {display_speed_xx0_hide,0},
            {display_speed_xx1_hide,0},
            {display_speed_xx2_hide,0},
            {display_speed_xx3_hide,0},
            {display_speed_xx4_hide,0},
            {display_speed_xx5_hide,0},
            {display_speed_xx6_hide,0},
            {display_speed_xx7_hide,0},
            {display_speed_xx8_hide,0},
            {display_speed_xx9_hide,0},
            {stick_control_1_pitch_rot,0},
            {stick_control_2_pitch_rot,0},
            {stick_control_1_roll_rot,0},
            {stick_control_2_roll_rot,0},
            {stick_collective_1_rot,0},
            {stick_collective_2_rot,0},
            {pedals_left_1_move,0},
            {pedals_right_1_move,0},
            {pedals_left_2_rot,0},
            {pedals_right_2_rot,0},
            {optics_1_rot,0},
            {optics_1_muzzle_rot,0},
            {positionlights,0},
            {collisionlight_red_blinking,0}
        };
		hide[] =
        {
            zasleh,
            light_1_hide,
            rotor_1_blur,
            rotor_2_blur,
            "zadni svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.592;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Heli_Transport_04_repair_ard_F.jpg";
	faction = OPF_R_ard_F;
	crew = O_R_helipilot_ard_F;
	typicalCargo[] = {O_R_Soldier_lite_ard_F};

    /* Turrets */
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class LoadmasterTurret: LoadmasterTurret
		{
			gunnerType = O_R_helicrew_ard_F;
		};
	};
};