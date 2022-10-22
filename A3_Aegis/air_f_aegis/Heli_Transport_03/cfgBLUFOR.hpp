/* US */
class B_Heli_Transport_03_F: Heli_Transport_03_base_F{};
class B_Heli_Transport_03_unarmed_F;

/* US (Pacific) */
class B_T_Heli_Transport_03_F: B_Heli_Transport_03_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {mainrotor1,0},
            {mainrotor2,0},
            {mainrotor1_bend,0},
            {mainrotor2_bend,0},
            {mainrotor1_hide,0},
            {mainrotor1_hide2,0},
            {mainrotor2_hide,0},
            {mainrotor2_hide2,0},
            {damagedrotor1show,0},
            {damagedrotor2show,0},
            {gear_fl,0},
            {gear_fr,0},
            {gear_rl,0},
            {gear_rl_piston,0},
            {gear_rr,0},
            {gear_rr_piston,0},
            {damper_fl,-0.17},
            {damper_fr,-0.17},
            {damper_rl,-0.17},
            {damper_rr,-0.17},
            {door_rt,0},
            {door_rb,0},
            {door_lt,0},
            {door_lb,0},
            {door_rear,0},
            {door_rear_hide,0},
            {display_on,0},
            {pitch_r,0.02},
            {pitch_l,0.02},
            {bank_r,0},
            {bank_l,0},
            {altitude_large,-0.17},
            {altitude_small,-0.17},
            {altitude_thousands,-0.17},
            {compass_r,0},
            {compass_l,0},
            {compass_middle,0},
            {compass_display_r,0},
            {compass_display_l,0},
            {rpm_r_1,0},
            {rpm_r_2,0},
            {rpm_l_1,0},
            {rpm_l_2,0},
            {speed_r,0},
            {speed_r_negative,0},
            {speed_l,0},
            {speed_l_negative,0},
            {torque_r_1,0},
            {torque_r_2,0},
            {torque_l_1,0},
            {torque_l_2,0},
            {vertspeed_r,0},
            {vertspeed_l,0},
            {fuel_r_1,1},
            {fuel_r_2,1},
            {fuel_l_1,1},
            {fuel_l_2,1},
            {gear_up,0},
            {gear_down,0},
            {mainturret,1.57},
            {maingun,-0.26},
            {minigun,0.33},
            {rightdoorturret,-1.57},
            {rightdoorgun,-0.26},
            {minigun2,0.33},
            {hidewinch,0.1},
            {hideminiguns,0},
            {wheels_front_r,0},
            {wheels_front_l,0},
            {wheels_rear_r,0},
            {wheels_rear_l,0},
            {positionlights,0},
            {collisionlight,0},
            {collective_pilot,0},
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
            {pedals_right,0},
            {pedals_left,0}
        };
		hide[] =
        {
            clan,
            zasleh,
            zasleh_1,
            light_l_hide,
            light_r_hide,
            main_rotor_2_blur,
            main_rotor_1_blur,
            "zadni svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 3.324;
		verticalOffsetWorld = -0.021;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Heli_Transport_03_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_T_F;
	crew = B_T_Helipilot_F;
	typicalCargo[] = {B_T_Soldier_Lite_F};

    /* Turrets */
	class Turrets: Turrets
	{
		class CopilotTurret;
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
class B_T_Heli_Transport_03_unarmed_F: B_Heli_Transport_03_unarmed_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {mainrotor1,0},
            {mainrotor2,0},
            {mainrotor1_bend,0},
            {mainrotor2_bend,0},
            {mainrotor1_hide,0},
            {mainrotor1_hide2,0},
            {mainrotor2_hide,0},
            {mainrotor2_hide2,0},
            {damagedrotor1show,0},
            {damagedrotor2show,0},
            {gear_fl,0},
            {gear_fr,0},
            {gear_rl,0},
            {gear_rl_piston,0},
            {gear_rr,0},
            {gear_rr_piston,0},
            {damper_fl,-0.17},
            {damper_fr,-0.17},
            {damper_rl,-0.17},
            {damper_rr,-0.17},
            {door_rt,0},
            {door_rb,0},
            {door_lt,0},
            {door_lb,0},
            {door_rear,0},
            {door_rear_hide,0},
            {display_on,0},
            {pitch_r,0.02},
            {pitch_l,0.02},
            {bank_r,0},
            {bank_l,0},
            {altitude_large,-0.17},
            {altitude_small,-0.17},
            {altitude_thousands,-0.17},
            {compass_r,0},
            {compass_l,0},
            {compass_middle,0},
            {compass_display_r,0},
            {compass_display_l,0},
            {rpm_r_1,0},
            {rpm_r_2,0},
            {rpm_l_1,0},
            {rpm_l_2,0},
            {speed_r,0},
            {speed_r_negative,0},
            {speed_l,0},
            {speed_l_negative,0},
            {torque_r_1,0},
            {torque_r_2,0},
            {torque_l_1,0},
            {torque_l_2,0},
            {vertspeed_r,0},
            {vertspeed_l,0},
            {fuel_r_1,1},
            {fuel_r_2,1},
            {fuel_l_1,1},
            {fuel_l_2,1},
            {gear_up,0},
            {gear_down,0},
            {mainturret,1.57},
            {maingun,-0.26},
            {minigun,0.33},
            {rightdoorturret,-1.57},
            {rightdoorgun,-0.26},
            {minigun2,0.33},
            {hidewinch,0.1},
            {hideminiguns,0},
            {wheels_front_r,0},
            {wheels_front_l,0},
            {wheels_rear_r,0},
            {wheels_rear_l,0},
            {positionlights,0},
            {collisionlight,0},
            {collective_pilot,0},
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
            {pedals_right,0},
            {pedals_left,0}
        };
		hide[] =
        {
            clan,
            zasleh,
            zasleh_1,
            light_l_hide,
            light_r_hide,
            main_rotor_2_blur,
            main_rotor_1_blur,
            "zadni svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 3.324;
		verticalOffsetWorld = -0.021;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Heli_Transport_03_unarmed_F.jpg";
	scope = public;
	scopeCurator = public;
	scopeArsenal = private;
    forceInGarage = false;
	side = TWest;
	faction = BLU_T_F;
	crew = B_T_Helipilot_F;
	typicalCargo[] = {B_T_Soldier_Lite_F};

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

/* US (Woodland) */
class B_W_Heli_Transport_03_F: B_Heli_Transport_03_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {mainrotor1,0},
            {mainrotor2,0},
            {mainrotor1_bend,0},
            {mainrotor2_bend,0},
            {mainrotor1_hide,0},
            {mainrotor1_hide2,0},
            {mainrotor2_hide,0},
            {mainrotor2_hide2,0},
            {damagedrotor1show,0},
            {damagedrotor2show,0},
            {gear_fl,0},
            {gear_fr,0},
            {gear_rl,0},
            {gear_rl_piston,0},
            {gear_rr,0},
            {gear_rr_piston,0},
            {damper_fl,-0.17},
            {damper_fr,-0.17},
            {damper_rl,-0.17},
            {damper_rr,-0.17},
            {door_rt,0},
            {door_rb,0},
            {door_lt,0},
            {door_lb,0},
            {door_rear,0},
            {door_rear_hide,0},
            {display_on,0},
            {pitch_r,0.02},
            {pitch_l,0.02},
            {bank_r,0},
            {bank_l,0},
            {altitude_large,-0.17},
            {altitude_small,-0.17},
            {altitude_thousands,-0.17},
            {compass_r,0},
            {compass_l,0},
            {compass_middle,0},
            {compass_display_r,0},
            {compass_display_l,0},
            {rpm_r_1,0},
            {rpm_r_2,0},
            {rpm_l_1,0},
            {rpm_l_2,0},
            {speed_r,0},
            {speed_r_negative,0},
            {speed_l,0},
            {speed_l_negative,0},
            {torque_r_1,0},
            {torque_r_2,0},
            {torque_l_1,0},
            {torque_l_2,0},
            {vertspeed_r,0},
            {vertspeed_l,0},
            {fuel_r_1,1},
            {fuel_r_2,1},
            {fuel_l_1,1},
            {fuel_l_2,1},
            {gear_up,0},
            {gear_down,0},
            {mainturret,1.57},
            {maingun,-0.26},
            {minigun,0.33},
            {rightdoorturret,-1.57},
            {rightdoorgun,-0.26},
            {minigun2,0.33},
            {hidewinch,0.1},
            {hideminiguns,0},
            {wheels_front_r,0},
            {wheels_front_l,0},
            {wheels_rear_r,0},
            {wheels_rear_l,0},
            {positionlights,0},
            {collisionlight,0},
            {collective_pilot,0},
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
            {pedals_right,0},
            {pedals_left,0}
        };
		hide[] =
        {
            clan,
            zasleh,
            zasleh_1,
            light_l_hide,
            light_r_hide,
            main_rotor_2_blur,
            main_rotor_1_blur,
            "zadni svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 3.324;
		verticalOffsetWorld = -0.021;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Heli_Transport_03_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Helipilot_F;
	typicalCargo[] = {B_W_Soldier_Lite_F};

    /* Turrets */
	class Turrets: Turrets
	{
		class CopilotTurret;
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
class B_W_Heli_Transport_03_unarmed_F: B_Heli_Transport_03_unarmed_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {mainrotor1,0},
            {mainrotor2,0},
            {mainrotor1_bend,0},
            {mainrotor2_bend,0},
            {mainrotor1_hide,0},
            {mainrotor1_hide2,0},
            {mainrotor2_hide,0},
            {mainrotor2_hide2,0},
            {damagedrotor1show,0},
            {damagedrotor2show,0},
            {gear_fl,0},
            {gear_fr,0},
            {gear_rl,0},
            {gear_rl_piston,0},
            {gear_rr,0},
            {gear_rr_piston,0},
            {damper_fl,-0.17},
            {damper_fr,-0.17},
            {damper_rl,-0.17},
            {damper_rr,-0.17},
            {door_rt,0},
            {door_rb,0},
            {door_lt,0},
            {door_lb,0},
            {door_rear,0},
            {door_rear_hide,0},
            {display_on,0},
            {pitch_r,0.02},
            {pitch_l,0.02},
            {bank_r,0},
            {bank_l,0},
            {altitude_large,-0.17},
            {altitude_small,-0.17},
            {altitude_thousands,-0.17},
            {compass_r,0},
            {compass_l,0},
            {compass_middle,0},
            {compass_display_r,0},
            {compass_display_l,0},
            {rpm_r_1,0},
            {rpm_r_2,0},
            {rpm_l_1,0},
            {rpm_l_2,0},
            {speed_r,0},
            {speed_r_negative,0},
            {speed_l,0},
            {speed_l_negative,0},
            {torque_r_1,0},
            {torque_r_2,0},
            {torque_l_1,0},
            {torque_l_2,0},
            {vertspeed_r,0},
            {vertspeed_l,0},
            {fuel_r_1,1},
            {fuel_r_2,1},
            {fuel_l_1,1},
            {fuel_l_2,1},
            {gear_up,0},
            {gear_down,0},
            {mainturret,1.57},
            {maingun,-0.26},
            {minigun,0.33},
            {rightdoorturret,-1.57},
            {rightdoorgun,-0.26},
            {minigun2,0.33},
            {hidewinch,0.1},
            {hideminiguns,0},
            {wheels_front_r,0},
            {wheels_front_l,0},
            {wheels_rear_r,0},
            {wheels_rear_l,0},
            {positionlights,0},
            {collisionlight,0},
            {collective_pilot,0},
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
            {pedals_right,0},
            {pedals_left,0}
        };
		hide[] =
        {
            clan,
            zasleh,
            zasleh_1,
            light_l_hide,
            light_r_hide,
            main_rotor_2_blur,
            main_rotor_1_blur,
            "zadni svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 3.324;
		verticalOffsetWorld = -0.021;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Heli_Transport_03_unarmed_F.jpg";
	scope = public;
	scopeCurator = public;
	scopeArsenal = private;
    forceInGarage = false;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Helipilot_F;
	typicalCargo[] = {B_W_Soldier_Lite_F};

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