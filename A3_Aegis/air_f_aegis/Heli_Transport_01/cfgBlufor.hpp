/* US */
class B_Heli_Transport_01_F: Heli_Transport_01_base_F
{
    hiddenSelectionsTextures[] = 
    {
        "\A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext01_BLUFOR_CO.paa",
        "\A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext02_BLUFOR_CO.paa"
    };
};
class B_Heli_Transport_01_medevac_F: Heli_Transport_01_medevac_base_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {rotor_destructx,0},
            {rotor_destructy,0},
            {mala_vrtule_destructy,0},
            {mala_vrtule_destructz,0},
            {damagehide,0},
            {hrotor,0},
            {vrotor,0},
            {lever_pilot,0},
            {lever_copilot,0},
            {rotorimpacthide,0},
            {tailrotorimpacthide,0},
            {i_compass_pilot,0},
            {i_compass_copilot,0},
            {i_compass_middle,0},
            {display_on,0},
            {radar_on,0},
            {radar2_on,0},
            {i_altitude_100f,7.14},
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
            {i_altitude02_100f,7.14},
            {dg_pitch,0},
            {dg_bank,0},
            {dg_pitch2,0},
            {dg_bank2,0},
            {dg_vertspeed,0},
            {dg_vertspeed2,0},
            {i_rpm,0},
            {i_rpm02,0},
            {i_rpm03,0},
            {i_rpm04,0},
            {i_torque01,0},
            {i_torque02,0},
            {i_torque03,0},
            {i_torque04,0},
            {i_torque01_base,0},
            {i_torque02_base,0},
            {i_torque03_base,0},
            {i_torque04_base,0},
            {i_fuel,1},
            {i_fuel_02,1},
            {i_fuel_03,1},
            {i_fuel_04,1},
            {radar,614.06},
            {radar2,614.06},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {collisionlight_white_blinking,0},
            {wheel_rear_damper,0},
            {wheel_left_damper,0},
            {wheel_right_damper,0},
            {reargear,0},
            {rearrightcover,0},
            {rearleftcover,0},
            {rightgear,0},
            {leftgear,0},
            {rightgear_hide,0},
            {leftgear_hide,0},
            {wheel_1_1,0},
            {wheel_1_2,0},
            {wheel_2_1,0},
            {door_l,0},
            {door_back_l_lock,0},
            {door_r,0},
            {door_back_r_lock,0},
            {holdster,1},
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
            {mainturret,1.57},
            {maingun,-0.26},
            {mainturret2,-1.57},
            {maingun2,-0.26},
            {minigun,0.33},
            {minigun2,0.33}
        };
		hide[] =
        {
            clan,
            zasleh,
            zasleh_1,
            light_l,
            light_r,
            "tail rotor blur",
            "main rotor blur",
            "zadni svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.192;
		verticalOffsetWorld = 0.053;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Heli_Transport_01_medevac_F.jpg";
	scope = public;
	forceInGarage = true;
	side = TWest;
	faction = BLU_F;
	crew = B_Helipilot_F;
	typicalCargo[] = {B_Helipilot_F};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Heli_Transport_01\Data\Heli_Transport_01_ext01_medevac_CO.paa",
		"\A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext02_CO.paa"
	};
};

/* US (Pacific) */
class B_T_Heli_Transport_01_F: B_Heli_Transport_01_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {rotor_destructx,0},
            {rotor_destructy,0},
            {mala_vrtule_destructy,0},
            {mala_vrtule_destructz,0},
            {damagehide,0},
            {hrotor,0},
            {vrotor,0},
            {lever_pilot,0},
            {lever_copilot,0},
            {rotorimpacthide,0},
            {tailrotorimpacthide,0},
            {i_compass_pilot,0},
            {i_compass_copilot,0},
            {i_compass_middle,0},
            {display_on,0},
            {radar_on,0},
            {radar2_on,0},
            {i_altitude_100f,7.14},
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
            {i_altitude02_100f,7.14},
            {dg_pitch,0},
            {dg_bank,0},
            {dg_pitch2,0},
            {dg_bank2,0},
            {dg_vertspeed,0},
            {dg_vertspeed2,0},
            {i_rpm,0},
            {i_rpm02,0},
            {i_rpm03,0},
            {i_rpm04,0},
            {i_torque01,0},
            {i_torque02,0},
            {i_torque03,0},
            {i_torque04,0},
            {i_torque01_base,0},
            {i_torque02_base,0},
            {i_torque03_base,0},
            {i_torque04_base,0},
            {i_fuel,1},
            {i_fuel_02,1},
            {i_fuel_03,1},
            {i_fuel_04,1},
            {radar,614.06},
            {radar2,614.06},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {collisionlight_white_blinking,0},
            {wheel_rear_damper,0},
            {wheel_left_damper,0},
            {wheel_right_damper,0},
            {reargear,0},
            {rearrightcover,0},
            {rearleftcover,0},
            {rightgear,0},
            {leftgear,0},
            {rightgear_hide,0},
            {leftgear_hide,0},
            {wheel_1_1,0},
            {wheel_1_2,0},
            {wheel_2_1,0},
            {door_l,0},
            {door_back_l_lock,0},
            {door_r,0},
            {door_back_r_lock,0},
            {holdster,1},
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
            {mainturret,1.57},
            {maingun,-0.26},
            {mainturret2,-1.57},
            {maingun2,-0.26},
            {minigun,0.33},
            {minigun2,0.33}
        };
		hide[] =
        {
            clan,
            zasleh,
            zasleh_1,
            light_l,
            light_r,
            "tail rotor blur",
            "main rotor blur",
            "zadni svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.192;
		verticalOffsetWorld = 0.053;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Heli_Transport_01_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_T_F;
	crew = B_T_Helipilot_F;
	typicalCargo[] = {B_T_Soldier_Lite_F};

    /* Turrets */
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class MainTurret: MainTurret
		{
		    gunnerType = B_T_Helicrew_F;
		};
		class RightDoorGun: RightDoorGun
		{
		    gunnerType = B_T_Helicrew_F;
		};
	};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_khaki_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_khk_F,2);
	};
};
class B_T_Heli_Transport_01_medevac_F: B_Heli_Transport_01_medevac_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {rotor_destructx,0},
            {rotor_destructy,0},
            {mala_vrtule_destructy,0},
            {mala_vrtule_destructz,0},
            {damagehide,0},
            {hrotor,0},
            {vrotor,0},
            {lever_pilot,0},
            {lever_copilot,0},
            {rotorimpacthide,0},
            {tailrotorimpacthide,0},
            {i_compass_pilot,0},
            {i_compass_copilot,0},
            {i_compass_middle,0},
            {display_on,0},
            {radar_on,0},
            {radar2_on,0},
            {i_altitude_100f,7.14},
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
            {i_altitude02_100f,7.14},
            {dg_pitch,0},
            {dg_bank,0},
            {dg_pitch2,0},
            {dg_bank2,0},
            {dg_vertspeed,0},
            {dg_vertspeed2,0},
            {i_rpm,0},
            {i_rpm02,0},
            {i_rpm03,0},
            {i_rpm04,0},
            {i_torque01,0},
            {i_torque02,0},
            {i_torque03,0},
            {i_torque04,0},
            {i_torque01_base,0},
            {i_torque02_base,0},
            {i_torque03_base,0},
            {i_torque04_base,0},
            {i_fuel,1},
            {i_fuel_02,1},
            {i_fuel_03,1},
            {i_fuel_04,1},
            {radar,614.06},
            {radar2,614.06},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {collisionlight_white_blinking,0},
            {wheel_rear_damper,0},
            {wheel_left_damper,0},
            {wheel_right_damper,0},
            {reargear,0},
            {rearrightcover,0},
            {rearleftcover,0},
            {rightgear,0},
            {leftgear,0},
            {rightgear_hide,0},
            {leftgear_hide,0},
            {wheel_1_1,0},
            {wheel_1_2,0},
            {wheel_2_1,0},
            {door_l,0},
            {door_back_l_lock,0},
            {door_r,0},
            {door_back_r_lock,0},
            {holdster,1},
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
            {mainturret,1.57},
            {maingun,-0.26},
            {mainturret2,-1.57},
            {maingun2,-0.26},
            {minigun,0.33},
            {minigun2,0.33}
        };
		hide[] =
        {
            clan,
            zasleh,
            zasleh_1,
            light_l,
            light_r,
            "tail rotor blur",
            "main rotor blur",
            "zadni svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.192;
		verticalOffsetWorld = 0.053;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Heli_Transport_01_medevac_F.jpg";
	scope = public;
	scopeCurator = public;
	scopeArsenal = private;
	forceInGarage = false;
	side = TWest;
	faction = BLU_T_F;
	crew = B_T_Helipilot_F;
	typicalCargo[] = {B_T_Soldier_Lite_F};

    /* Turrets */
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class MainTurret: MainTurret
		{
		    gunnerType = B_T_Helicrew_F;
		};
		class RightDoorGun: RightDoorGun
		{
		    gunnerType = B_T_Helicrew_F;
		};
	};
};

/* US (Woodland) */
class B_W_Heli_Transport_01_F: B_Heli_Transport_01_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {rotor_destructx,0},
            {rotor_destructy,0},
            {mala_vrtule_destructy,0},
            {mala_vrtule_destructz,0},
            {damagehide,0},
            {hrotor,0},
            {vrotor,0},
            {lever_pilot,0},
            {lever_copilot,0},
            {rotorimpacthide,0},
            {tailrotorimpacthide,0},
            {i_compass_pilot,0},
            {i_compass_copilot,0},
            {i_compass_middle,0},
            {display_on,0},
            {radar_on,0},
            {radar2_on,0},
            {i_altitude_100f,7.14},
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
            {i_altitude02_100f,7.14},
            {dg_pitch,0},
            {dg_bank,0},
            {dg_pitch2,0},
            {dg_bank2,0},
            {dg_vertspeed,0},
            {dg_vertspeed2,0},
            {i_rpm,0},
            {i_rpm02,0},
            {i_rpm03,0},
            {i_rpm04,0},
            {i_torque01,0},
            {i_torque02,0},
            {i_torque03,0},
            {i_torque04,0},
            {i_torque01_base,0},
            {i_torque02_base,0},
            {i_torque03_base,0},
            {i_torque04_base,0},
            {i_fuel,1},
            {i_fuel_02,1},
            {i_fuel_03,1},
            {i_fuel_04,1},
            {radar,614.06},
            {radar2,614.06},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {collisionlight_white_blinking,0},
            {wheel_rear_damper,0},
            {wheel_left_damper,0},
            {wheel_right_damper,0},
            {reargear,0},
            {rearrightcover,0},
            {rearleftcover,0},
            {rightgear,0},
            {leftgear,0},
            {rightgear_hide,0},
            {leftgear_hide,0},
            {wheel_1_1,0},
            {wheel_1_2,0},
            {wheel_2_1,0},
            {door_l,0},
            {door_back_l_lock,0},
            {door_r,0},
            {door_back_r_lock,0},
            {holdster,1},
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
            {mainturret,1.57},
            {maingun,-0.26},
            {mainturret2,-1.57},
            {maingun2,-0.26},
            {minigun,0.33},
            {minigun2,0.33}
        };
		hide[] =
        {
            clan,
            zasleh,
            zasleh_1,
            light_l,
            light_r,
            "tail rotor blur",
            "main rotor blur",
            "zadni svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.192;
		verticalOffsetWorld = 0.053;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Heli_Transport_01_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Helipilot_F;
	typicalCargo[] = {B_W_Soldier_Lite_F};

    /* Turrets */
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class MainTurret: MainTurret
		{
		    gunnerType = B_W_Helicrew_F;
		};
		class RightDoorGun: RightDoorGun
		{
		    gunnerType = B_W_Helicrew_F;
		};
	};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_black_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_Black_F,2);
	};
};
class B_W_Heli_Transport_01_medevac_F: B_Heli_Transport_01_medevac_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {rotor_destructx,0},
            {rotor_destructy,0},
            {mala_vrtule_destructy,0},
            {mala_vrtule_destructz,0},
            {damagehide,0},
            {hrotor,0},
            {vrotor,0},
            {lever_pilot,0},
            {lever_copilot,0},
            {rotorimpacthide,0},
            {tailrotorimpacthide,0},
            {i_compass_pilot,0},
            {i_compass_copilot,0},
            {i_compass_middle,0},
            {display_on,0},
            {radar_on,0},
            {radar2_on,0},
            {i_altitude_100f,7.14},
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
            {i_altitude02_100f,7.14},
            {dg_pitch,0},
            {dg_bank,0},
            {dg_pitch2,0},
            {dg_bank2,0},
            {dg_vertspeed,0},
            {dg_vertspeed2,0},
            {i_rpm,0},
            {i_rpm02,0},
            {i_rpm03,0},
            {i_rpm04,0},
            {i_torque01,0},
            {i_torque02,0},
            {i_torque03,0},
            {i_torque04,0},
            {i_torque01_base,0},
            {i_torque02_base,0},
            {i_torque03_base,0},
            {i_torque04_base,0},
            {i_fuel,1},
            {i_fuel_02,1},
            {i_fuel_03,1},
            {i_fuel_04,1},
            {radar,614.06},
            {radar2,614.06},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {collisionlight_white_blinking,0},
            {wheel_rear_damper,0},
            {wheel_left_damper,0},
            {wheel_right_damper,0},
            {reargear,0},
            {rearrightcover,0},
            {rearleftcover,0},
            {rightgear,0},
            {leftgear,0},
            {rightgear_hide,0},
            {leftgear_hide,0},
            {wheel_1_1,0},
            {wheel_1_2,0},
            {wheel_2_1,0},
            {door_l,0},
            {door_back_l_lock,0},
            {door_r,0},
            {door_back_r_lock,0},
            {holdster,1},
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
            {mainturret,1.57},
            {maingun,-0.26},
            {mainturret2,-1.57},
            {maingun2,-0.26},
            {minigun,0.33},
            {minigun2,0.33}
        };
		hide[] =
        {
            clan,
            zasleh,
            zasleh_1,
            light_l,
            light_r,
            "tail rotor blur",
            "main rotor blur",
            "zadni svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.192;
		verticalOffsetWorld = 0.053;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Heli_Transport_01_medevac_F.jpg";
	scope = public;
	scopeCurator = public;
	scopeArsenal = private;
	forceInGarage = false;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Helipilot_F;
	typicalCargo[] = {B_W_Soldier_Lite_F};

    /* Turrets */
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret{};
		class MainTurret: MainTurret
		{
		    gunnerType = B_W_Helicrew_F;
		};
		class RightDoorGun: RightDoorGun
		{
		    gunnerType = B_W_Helicrew_F;
		};
	};
};