/* BAF */
class B_A_Heli_Transport_02_F: Heli_Transport_02_base_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {rotorshaftm,0},
            {bladem01_joint_horizontal_axis,0},
            {bladem02_joint_horizontal_axis,0},
            {bladem03_joint_horizontal_axis,0},
            {bladem04_joint_horizontal_axis,0},
            {bladem01_dive,0},
            {bladem02_dive,0},
            {bladem03_dive,0},
            {bladem04_dive,0},
            {bladem01_bank,0},
            {bladem02_bank,0},
            {bladem03_bank,0},
            {bladem04_bank,0},
            {bladem01_blur_rotation,0},
            {bladem02_rotation,0},
            {bladem03_rotation,0},
            {bladem04_rotation,0},
            {vrotor,0},
            {i_altitude_100f,8.61},
            {i_altitude_1000f,8.61},
            {i_altitude_10000f,8.61},
            {i_compass,0},
            {i_wp,0},
            {damagehide,0},
            {lever_pilot,0},
            {lever_copilot,0},
            {pedall,0},
            {pedalr,0},
            {rotorimpacthide,0},
            {tailrotorimpacthide,0},
            {frontgear,0},
            {rightgear,0},
            {leftgear,0},
            {right_gear_d,-0.01},
            {left_gear_d,-0.01},
            {front_gear_d,-0.01},
            {door_back_l,0},
            {door_back_l_lock,0},
            {door_back_r,0},
            {door_back_r_lock,0},
            {swashplate_rotation,0},
            {swashplate_dive,0},
            {swashplate_bank,0},
            {stick_pilot_dive_01,0},
            {stick_pilot_dive_02,0},
            {stick_pilot_dive_03,0},
            {stick_pilot_dive_04,0},
            {stick_pilot_dive_05,0},
            {stick_pilot_bank_01,0},
            {stick_pilot_bank_02,0},
            {stick_pilot_bank_03,0},
            {stick_pilot_bank_04,0},
            {stick_pilot_bank_05,0},
            {stick_copilot_dive01,0},
            {stick_copilot_dive02,0},
            {stick_copilot_dive03,0},
            {stick_copilot_dive04,0},
            {stick_copilot_dive05,0},
            {stick_copilot_bank01,0},
            {stick_copilot_bank02,0},
            {stick_copilot_bank03,0},
            {stick_copilot_bank04,0},
            {stick_copilot_bank05,0},
            {cargoramp_open,0},
            {cargoramp_hide,0},
            {damagehideglass1,0},
            {damagehideglass2,0},
            {damagehideglass3,0},
            {damagehideglass4,0},
            {damagehideglass5,0},
            {damagehideglass6,0},
            {damagehideglass7,0},
            {damagehideglass8,0},
            {damagehideglass9,0},
            {damagehideglass10,0},
            {damagehideglass11,0},
            {damagehideglass12,0},
            {damagehideglass13,0},
            {damagehideglass14,0},
            {damagehideglass15,0},
            {damagehideglass16,0},
            {damagehideglass17,0},
            {display_on,0},
            {i_speed,0},
            {i_speed_02,0},
            {i_speed_03,0},
            {i_speed02,0},
            {i_speed02_02,0},
            {i_speed02_03,0},
            {i_vspeed,0},
            {i_vspeed_02,0},
            {i_vspeed_03,0},
            {i_vspeed02,0},
            {i_vspeed02_02,0},
            {i_vspeed02_03,0},
            {i_altitude02_100f,8.61},
            {i_altitude02_1000f,8.61},
            {i_altitude02_10000f,8.61},
            {i_horizona,0},
            {i_horizonb,0},
            {i_horizona02,0},
            {i_horizonb02,0},
            {i_compass02,0},
            {i_rpm,0},
            {i_rpm02,0},
            {i_rpm03,0},
            {i_rpm04,0},
            {i_fuel,1},
            {i_fuel02,1},
            {i_fuel03,1},
            {i_fuel04,1},
            {i_fuel05,1},
            {i_fuel06,1},
            {i_fuelpress,0},
            {i_fuelpress02,0},
            {i_oilpress,0},
            {i_oilpress02,0},
            {i_oilpress03,0},
            {i_oilpress04,0},
            {i_oilpress05,0},
            {i_oilpress06,0},
            {i_torque01,0},
            {i_torque02,0},
            {i_torque03,0},
            {i_torque04,0},
            {i_torque01_base,0},
            {i_torque02_base,0},
            {i_torque03_base,0},
            {i_torque04_base,0},
            {i_tot,2854.26},
            {i_tot02,2854.26},
            {i_tot03,2854.26},
            {i_tot04,2854.26},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {collisionlight_white_blinking,0},
            {clock_hour,0.21},
            {clock_minute,0.47},
            {clock_second,0.15}
        };
		hide[] =
        {
            clan,
            zasleh,
            light,
            "tail rotor blur",
            "main rotor blur",
            "zadni svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 3.521;
		verticalOffsetWorld = -0.09;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Heli_Transport_02_F.jpg";
	scope = public;
	crew = B_A_Helipilot_F;
	typicalCargo[] = {B_A_Helicrew_F};
	side = TWest;
	faction = BLU_A_F;
	textureList[] =
	{
		BAF,1,
		Grey,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_1_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_2_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_3_CO.paa",
		"\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
	};
	availableForSupportTypes[] =
	{
		Drop,
		Transport
	};
	cost = 800000;

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_C_snd_F,2);
	};
};

/* BAF (Pacific) */
class B_A_Heli_Transport_02_tna_F: B_A_Heli_Transport_02_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {rotorshaftm,0},
            {bladem01_joint_horizontal_axis,0},
            {bladem02_joint_horizontal_axis,0},
            {bladem03_joint_horizontal_axis,0},
            {bladem04_joint_horizontal_axis,0},
            {bladem01_dive,0},
            {bladem02_dive,0},
            {bladem03_dive,0},
            {bladem04_dive,0},
            {bladem01_bank,0},
            {bladem02_bank,0},
            {bladem03_bank,0},
            {bladem04_bank,0},
            {bladem01_blur_rotation,0},
            {bladem02_rotation,0},
            {bladem03_rotation,0},
            {bladem04_rotation,0},
            {vrotor,0},
            {i_altitude_100f,8.61},
            {i_altitude_1000f,8.61},
            {i_altitude_10000f,8.61},
            {i_compass,0},
            {i_wp,0},
            {damagehide,0},
            {lever_pilot,0},
            {lever_copilot,0},
            {pedall,0},
            {pedalr,0},
            {rotorimpacthide,0},
            {tailrotorimpacthide,0},
            {frontgear,0},
            {rightgear,0},
            {leftgear,0},
            {right_gear_d,-0.01},
            {left_gear_d,-0.01},
            {front_gear_d,-0.01},
            {door_back_l,0},
            {door_back_l_lock,0},
            {door_back_r,0},
            {door_back_r_lock,0},
            {swashplate_rotation,0},
            {swashplate_dive,0},
            {swashplate_bank,0},
            {stick_pilot_dive_01,0},
            {stick_pilot_dive_02,0},
            {stick_pilot_dive_03,0},
            {stick_pilot_dive_04,0},
            {stick_pilot_dive_05,0},
            {stick_pilot_bank_01,0},
            {stick_pilot_bank_02,0},
            {stick_pilot_bank_03,0},
            {stick_pilot_bank_04,0},
            {stick_pilot_bank_05,0},
            {stick_copilot_dive01,0},
            {stick_copilot_dive02,0},
            {stick_copilot_dive03,0},
            {stick_copilot_dive04,0},
            {stick_copilot_dive05,0},
            {stick_copilot_bank01,0},
            {stick_copilot_bank02,0},
            {stick_copilot_bank03,0},
            {stick_copilot_bank04,0},
            {stick_copilot_bank05,0},
            {cargoramp_open,0},
            {cargoramp_hide,0},
            {damagehideglass1,0},
            {damagehideglass2,0},
            {damagehideglass3,0},
            {damagehideglass4,0},
            {damagehideglass5,0},
            {damagehideglass6,0},
            {damagehideglass7,0},
            {damagehideglass8,0},
            {damagehideglass9,0},
            {damagehideglass10,0},
            {damagehideglass11,0},
            {damagehideglass12,0},
            {damagehideglass13,0},
            {damagehideglass14,0},
            {damagehideglass15,0},
            {damagehideglass16,0},
            {damagehideglass17,0},
            {display_on,0},
            {i_speed,0},
            {i_speed_02,0},
            {i_speed_03,0},
            {i_speed02,0},
            {i_speed02_02,0},
            {i_speed02_03,0},
            {i_vspeed,0},
            {i_vspeed_02,0},
            {i_vspeed_03,0},
            {i_vspeed02,0},
            {i_vspeed02_02,0},
            {i_vspeed02_03,0},
            {i_altitude02_100f,8.61},
            {i_altitude02_1000f,8.61},
            {i_altitude02_10000f,8.61},
            {i_horizona,0},
            {i_horizonb,0},
            {i_horizona02,0},
            {i_horizonb02,0},
            {i_compass02,0},
            {i_rpm,0},
            {i_rpm02,0},
            {i_rpm03,0},
            {i_rpm04,0},
            {i_fuel,1},
            {i_fuel02,1},
            {i_fuel03,1},
            {i_fuel04,1},
            {i_fuel05,1},
            {i_fuel06,1},
            {i_fuelpress,0},
            {i_fuelpress02,0},
            {i_oilpress,0},
            {i_oilpress02,0},
            {i_oilpress03,0},
            {i_oilpress04,0},
            {i_oilpress05,0},
            {i_oilpress06,0},
            {i_torque01,0},
            {i_torque02,0},
            {i_torque03,0},
            {i_torque04,0},
            {i_torque01_base,0},
            {i_torque02_base,0},
            {i_torque03_base,0},
            {i_torque04_base,0},
            {i_tot,2854.26},
            {i_tot02,2854.26},
            {i_tot03,2854.26},
            {i_tot04,2854.26},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {collisionlight_white_blinking,0},
            {clock_hour,0.21},
            {clock_minute,0.47},
            {clock_second,0.15}
        };
		hide[] =
        {
            clan,
            zasleh,
            light,
            "tail rotor blur",
            "main rotor blur",
            "zadni svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 3.521;
		verticalOffsetWorld = -0.09;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Heli_Transport_02_tna_F.jpg";
	faction = BLU_A_tna_F;
	crew = B_A_Helipilot_tna_F;
	typicalCargo[] = {B_A_Helicrew_tna_F};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_khaki_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_C_khk_F,2);
	};
};

/* BAF (Woodland) */
class B_A_Heli_Transport_02_wdl_F: B_A_Heli_Transport_02_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {rotorshaftm,0},
            {bladem01_joint_horizontal_axis,0},
            {bladem02_joint_horizontal_axis,0},
            {bladem03_joint_horizontal_axis,0},
            {bladem04_joint_horizontal_axis,0},
            {bladem01_dive,0},
            {bladem02_dive,0},
            {bladem03_dive,0},
            {bladem04_dive,0},
            {bladem01_bank,0},
            {bladem02_bank,0},
            {bladem03_bank,0},
            {bladem04_bank,0},
            {bladem01_blur_rotation,0},
            {bladem02_rotation,0},
            {bladem03_rotation,0},
            {bladem04_rotation,0},
            {vrotor,0},
            {i_altitude_100f,8.61},
            {i_altitude_1000f,8.61},
            {i_altitude_10000f,8.61},
            {i_compass,0},
            {i_wp,0},
            {damagehide,0},
            {lever_pilot,0},
            {lever_copilot,0},
            {pedall,0},
            {pedalr,0},
            {rotorimpacthide,0},
            {tailrotorimpacthide,0},
            {frontgear,0},
            {rightgear,0},
            {leftgear,0},
            {right_gear_d,-0.01},
            {left_gear_d,-0.01},
            {front_gear_d,-0.01},
            {door_back_l,0},
            {door_back_l_lock,0},
            {door_back_r,0},
            {door_back_r_lock,0},
            {swashplate_rotation,0},
            {swashplate_dive,0},
            {swashplate_bank,0},
            {stick_pilot_dive_01,0},
            {stick_pilot_dive_02,0},
            {stick_pilot_dive_03,0},
            {stick_pilot_dive_04,0},
            {stick_pilot_dive_05,0},
            {stick_pilot_bank_01,0},
            {stick_pilot_bank_02,0},
            {stick_pilot_bank_03,0},
            {stick_pilot_bank_04,0},
            {stick_pilot_bank_05,0},
            {stick_copilot_dive01,0},
            {stick_copilot_dive02,0},
            {stick_copilot_dive03,0},
            {stick_copilot_dive04,0},
            {stick_copilot_dive05,0},
            {stick_copilot_bank01,0},
            {stick_copilot_bank02,0},
            {stick_copilot_bank03,0},
            {stick_copilot_bank04,0},
            {stick_copilot_bank05,0},
            {cargoramp_open,0},
            {cargoramp_hide,0},
            {damagehideglass1,0},
            {damagehideglass2,0},
            {damagehideglass3,0},
            {damagehideglass4,0},
            {damagehideglass5,0},
            {damagehideglass6,0},
            {damagehideglass7,0},
            {damagehideglass8,0},
            {damagehideglass9,0},
            {damagehideglass10,0},
            {damagehideglass11,0},
            {damagehideglass12,0},
            {damagehideglass13,0},
            {damagehideglass14,0},
            {damagehideglass15,0},
            {damagehideglass16,0},
            {damagehideglass17,0},
            {display_on,0},
            {i_speed,0},
            {i_speed_02,0},
            {i_speed_03,0},
            {i_speed02,0},
            {i_speed02_02,0},
            {i_speed02_03,0},
            {i_vspeed,0},
            {i_vspeed_02,0},
            {i_vspeed_03,0},
            {i_vspeed02,0},
            {i_vspeed02_02,0},
            {i_vspeed02_03,0},
            {i_altitude02_100f,8.61},
            {i_altitude02_1000f,8.61},
            {i_altitude02_10000f,8.61},
            {i_horizona,0},
            {i_horizonb,0},
            {i_horizona02,0},
            {i_horizonb02,0},
            {i_compass02,0},
            {i_rpm,0},
            {i_rpm02,0},
            {i_rpm03,0},
            {i_rpm04,0},
            {i_fuel,1},
            {i_fuel02,1},
            {i_fuel03,1},
            {i_fuel04,1},
            {i_fuel05,1},
            {i_fuel06,1},
            {i_fuelpress,0},
            {i_fuelpress02,0},
            {i_oilpress,0},
            {i_oilpress02,0},
            {i_oilpress03,0},
            {i_oilpress04,0},
            {i_oilpress05,0},
            {i_oilpress06,0},
            {i_torque01,0},
            {i_torque02,0},
            {i_torque03,0},
            {i_torque04,0},
            {i_torque01_base,0},
            {i_torque02_base,0},
            {i_torque03_base,0},
            {i_torque04_base,0},
            {i_tot,2854.26},
            {i_tot02,2854.26},
            {i_tot03,2854.26},
            {i_tot04,2854.26},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {collisionlight_white_blinking,0},
            {clock_hour,0.21},
            {clock_minute,0.47},
            {clock_second,0.15}
        };
		hide[] =
        {
            clan,
            zasleh,
            light,
            "tail rotor blur",
            "main rotor blur",
            "zadni svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 3.521;
		verticalOffsetWorld = -0.09;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Heli_Transport_02_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	crew = B_A_Helipilot_wdl_F;
	typicalCargo[] = {B_A_Helicrew_wdl_F};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_black_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_C_blk_F,2);
	};
};