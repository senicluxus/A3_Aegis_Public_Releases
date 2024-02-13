/* US */
class B_Heli_Attack_01_dynamicLoadout_F;

/* US (Pacific) */
class B_T_Heli_Attack_01_dynamicLoadout_F: B_Heli_Attack_01_dynamicLoadout_F
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
            {pedall,0},
            {pedalr,0},
            {rotorimpacthide,0},
            {tailrotorimpacthide,0},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {collisionlight_white_blinking,0},
            {i_compass_pilot,0},
            {i_compass_copilot,0},
            {dg_pitch,0},
            {dg_bank,0},
            {dg_pitch2,0},
            {dg_bank2,0},
            {dg_vertspeed,0},
            {dg_vertspeed2,0},
            {dg_atl,0},
            {dg_atl2,0},
            {display_on,0},
            {wheel_rear_damper,0},
            {wheel_left_damper,0},
            {wheel_right_damper,0},
            {reargear,0},
            {rearrightcover,0},
            {rearleftcover,0},
            {rightgear,0},
            {rightgearfwd,0},
            {rightcover_p1,0},
            {rightcover_p2,0},
            {rightcover_p3,0},
            {leftgear,0},
            {leftgearfwd,0},
            {leftcover_p1,0},
            {leftcover_p2,0},
            {leftcover_p3,0},
            {wheel_1_1,0},
            {wheel_1_2,0},
            {wheel_2_1,0},
            {mainturret,0},
            {mainturretoptics,0},
            {maingun,0.1},
            {maingunoptics,0.1},
            {machinegun,1},
            {zaslehrot,608},
            {leftholdster,0},
            {rightholdster,0},
            {leftholdster_dynloadout,0},
            {rightholdster_dynloadout,0},
            {hidepg_1,1},
            {hidepg_2,1},
            {hidepg_3,1},
            {hidepg_4,1},
            {hidepg_5,1},
            {hidepg_6,1},
            {hidepg_7,1},
            {hidepg_8,1},
            {hidepg_9,1},
            {hidepg_10,1},
            {hidepg_11,1},
            {hidepg_12,1},
            {hidepg_13,1},
            {hidepg_14,1},
            {hidepg_15,1},
            {hidepg_16,1},
            {hidepg_17,1},
            {hidepg_18,1},
            {hidepg_19,1},
            {hidepg_20,1},
            {hidepg_21,1},
            {hidepg_22,1},
            {hidepg_23,1},
            {hidepg_24,1},
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
            {hideweaponsl,1},
            {hideweaponsr,1},
            {pilotcamera_h,0},
            {pilotcamera_v,0.09}
        };
		hide[] =
        {
            clan,
            zasleh,
            light_r,
            "tail rotor blur",
            "main rotor blur",
            "zadni svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 1.963;
		verticalOffsetWorld = 0.041;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Heli_Attack_01_dynamicLoadout_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_T_F;
	crew = B_T_Helipilot_F;
	typicalCargo[] = {B_T_Helipilot_F};

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
class B_W_Heli_Attack_01_dynamicLoadout_F: B_Heli_Attack_01_dynamicLoadout_F
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
            {pedall,0},
            {pedalr,0},
            {rotorimpacthide,0},
            {tailrotorimpacthide,0},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {collisionlight_white_blinking,0},
            {i_compass_pilot,0},
            {i_compass_copilot,0},
            {dg_pitch,0},
            {dg_bank,0},
            {dg_pitch2,0},
            {dg_bank2,0},
            {dg_vertspeed,0},
            {dg_vertspeed2,0},
            {dg_atl,0},
            {dg_atl2,0},
            {display_on,0},
            {wheel_rear_damper,0},
            {wheel_left_damper,0},
            {wheel_right_damper,0},
            {reargear,0},
            {rearrightcover,0},
            {rearleftcover,0},
            {rightgear,0},
            {rightgearfwd,0},
            {rightcover_p1,0},
            {rightcover_p2,0},
            {rightcover_p3,0},
            {leftgear,0},
            {leftgearfwd,0},
            {leftcover_p1,0},
            {leftcover_p2,0},
            {leftcover_p3,0},
            {wheel_1_1,0},
            {wheel_1_2,0},
            {wheel_2_1,0},
            {mainturret,0},
            {mainturretoptics,0},
            {maingun,0.1},
            {maingunoptics,0.1},
            {machinegun,1},
            {zaslehrot,608},
            {leftholdster,0},
            {rightholdster,0},
            {leftholdster_dynloadout,0},
            {rightholdster_dynloadout,0},
            {hidepg_1,1},
            {hidepg_2,1},
            {hidepg_3,1},
            {hidepg_4,1},
            {hidepg_5,1},
            {hidepg_6,1},
            {hidepg_7,1},
            {hidepg_8,1},
            {hidepg_9,1},
            {hidepg_10,1},
            {hidepg_11,1},
            {hidepg_12,1},
            {hidepg_13,1},
            {hidepg_14,1},
            {hidepg_15,1},
            {hidepg_16,1},
            {hidepg_17,1},
            {hidepg_18,1},
            {hidepg_19,1},
            {hidepg_20,1},
            {hidepg_21,1},
            {hidepg_22,1},
            {hidepg_23,1},
            {hidepg_24,1},
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
            {hideweaponsl,1},
            {hideweaponsr,1},
            {pilotcamera_h,0},
            {pilotcamera_v,0.09}
        };
		hide[] =
        {
            clan,
            zasleh,
            light_r,
            "tail rotor blur",
            "main rotor blur",
            "zadni svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 1.963;
		verticalOffsetWorld = 0.041;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Heli_Attack_01_dynamicLoadout_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Helipilot_F;
	typicalCargo[] = {B_W_Helipilot_F};

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

/* BAF */
class B_A_Heli_Attack_01_dynamicLoadout_F: B_Heli_Attack_01_dynamicLoadout_F
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
            {pedall,0},
            {pedalr,0},
            {rotorimpacthide,0},
            {tailrotorimpacthide,0},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {collisionlight_white_blinking,0},
            {i_compass_pilot,0},
            {i_compass_copilot,0},
            {dg_pitch,0},
            {dg_bank,0},
            {dg_pitch2,0},
            {dg_bank2,0},
            {dg_vertspeed,0},
            {dg_vertspeed2,0},
            {dg_atl,0},
            {dg_atl2,0},
            {display_on,0},
            {wheel_rear_damper,0},
            {wheel_left_damper,0},
            {wheel_right_damper,0},
            {reargear,0},
            {rearrightcover,0},
            {rearleftcover,0},
            {rightgear,0},
            {rightgearfwd,0},
            {rightcover_p1,0},
            {rightcover_p2,0},
            {rightcover_p3,0},
            {leftgear,0},
            {leftgearfwd,0},
            {leftcover_p1,0},
            {leftcover_p2,0},
            {leftcover_p3,0},
            {wheel_1_1,0},
            {wheel_1_2,0},
            {wheel_2_1,0},
            {mainturret,0},
            {mainturretoptics,0},
            {maingun,0.1},
            {maingunoptics,0.1},
            {machinegun,1},
            {zaslehrot,608},
            {leftholdster,0},
            {rightholdster,0},
            {leftholdster_dynloadout,0},
            {rightholdster_dynloadout,0},
            {hidepg_1,1},
            {hidepg_2,1},
            {hidepg_3,1},
            {hidepg_4,1},
            {hidepg_5,1},
            {hidepg_6,1},
            {hidepg_7,1},
            {hidepg_8,1},
            {hidepg_9,1},
            {hidepg_10,1},
            {hidepg_11,1},
            {hidepg_12,1},
            {hidepg_13,1},
            {hidepg_14,1},
            {hidepg_15,1},
            {hidepg_16,1},
            {hidepg_17,1},
            {hidepg_18,1},
            {hidepg_19,1},
            {hidepg_20,1},
            {hidepg_21,1},
            {hidepg_22,1},
            {hidepg_23,1},
            {hidepg_24,1},
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
            {hideweaponsl,1},
            {hideweaponsr,1},
            {pilotcamera_h,0},
            {pilotcamera_v,0.09}
        };
		hide[] =
        {
            clan,
            zasleh,
            light_r,
            "tail rotor blur",
            "main rotor blur",
            "zadni svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 1.963;
		verticalOffsetWorld = 0.041;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Heli_Attack_01_dynamicLoadout_F.jpg";
	scope = protected;
	scopeCurator = private;
	side = TWest;
	faction = BLU_A_F;
	crew = B_A_Helipilot_F;
	typicalCargo[] = {B_A_Helipilot_F};
    textureList[] = {BAF,1};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Attack_01\Data\Heli_Attack_01_BAF_CO.paa"};

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
class B_A_Heli_Attack_01_dynamicLoadout_tna_F: B_A_Heli_Attack_01_dynamicLoadout_F
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
            {pedall,0},
            {pedalr,0},
            {rotorimpacthide,0},
            {tailrotorimpacthide,0},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {collisionlight_white_blinking,0},
            {i_compass_pilot,0},
            {i_compass_copilot,0},
            {dg_pitch,0},
            {dg_bank,0},
            {dg_pitch2,0},
            {dg_bank2,0},
            {dg_vertspeed,0},
            {dg_vertspeed2,0},
            {dg_atl,0},
            {dg_atl2,0},
            {display_on,0},
            {wheel_rear_damper,0},
            {wheel_left_damper,0},
            {wheel_right_damper,0},
            {reargear,0},
            {rearrightcover,0},
            {rearleftcover,0},
            {rightgear,0},
            {rightgearfwd,0},
            {rightcover_p1,0},
            {rightcover_p2,0},
            {rightcover_p3,0},
            {leftgear,0},
            {leftgearfwd,0},
            {leftcover_p1,0},
            {leftcover_p2,0},
            {leftcover_p3,0},
            {wheel_1_1,0},
            {wheel_1_2,0},
            {wheel_2_1,0},
            {mainturret,0},
            {mainturretoptics,0},
            {maingun,0.1},
            {maingunoptics,0.1},
            {machinegun,1},
            {zaslehrot,608},
            {leftholdster,0},
            {rightholdster,0},
            {leftholdster_dynloadout,0},
            {rightholdster_dynloadout,0},
            {hidepg_1,1},
            {hidepg_2,1},
            {hidepg_3,1},
            {hidepg_4,1},
            {hidepg_5,1},
            {hidepg_6,1},
            {hidepg_7,1},
            {hidepg_8,1},
            {hidepg_9,1},
            {hidepg_10,1},
            {hidepg_11,1},
            {hidepg_12,1},
            {hidepg_13,1},
            {hidepg_14,1},
            {hidepg_15,1},
            {hidepg_16,1},
            {hidepg_17,1},
            {hidepg_18,1},
            {hidepg_19,1},
            {hidepg_20,1},
            {hidepg_21,1},
            {hidepg_22,1},
            {hidepg_23,1},
            {hidepg_24,1},
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
            {hideweaponsl,1},
            {hideweaponsr,1},
            {pilotcamera_h,0},
            {pilotcamera_v,0.09}
        };
		hide[] =
        {
            clan,
            zasleh,
            light_r,
            "tail rotor blur",
            "main rotor blur",
            "zadni svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 1.963;
		verticalOffsetWorld = 0.041;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Heli_Attack_01_dynamicLoadout_tna_F.jpg";
	faction = BLU_A_tna_F;
	crew = B_A_Helipilot_tna_F;
	typicalCargo[] = {B_A_Helipilot_tna_F};

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
class B_A_Heli_Attack_01_dynamicLoadout_wdl_F: B_A_Heli_Attack_01_dynamicLoadout_F
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
            {pedall,0},
            {pedalr,0},
            {rotorimpacthide,0},
            {tailrotorimpacthide,0},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {collisionlight_white_blinking,0},
            {i_compass_pilot,0},
            {i_compass_copilot,0},
            {dg_pitch,0},
            {dg_bank,0},
            {dg_pitch2,0},
            {dg_bank2,0},
            {dg_vertspeed,0},
            {dg_vertspeed2,0},
            {dg_atl,0},
            {dg_atl2,0},
            {display_on,0},
            {wheel_rear_damper,0},
            {wheel_left_damper,0},
            {wheel_right_damper,0},
            {reargear,0},
            {rearrightcover,0},
            {rearleftcover,0},
            {rightgear,0},
            {rightgearfwd,0},
            {rightcover_p1,0},
            {rightcover_p2,0},
            {rightcover_p3,0},
            {leftgear,0},
            {leftgearfwd,0},
            {leftcover_p1,0},
            {leftcover_p2,0},
            {leftcover_p3,0},
            {wheel_1_1,0},
            {wheel_1_2,0},
            {wheel_2_1,0},
            {mainturret,0},
            {mainturretoptics,0},
            {maingun,0.1},
            {maingunoptics,0.1},
            {machinegun,1},
            {zaslehrot,608},
            {leftholdster,0},
            {rightholdster,0},
            {leftholdster_dynloadout,0},
            {rightholdster_dynloadout,0},
            {hidepg_1,1},
            {hidepg_2,1},
            {hidepg_3,1},
            {hidepg_4,1},
            {hidepg_5,1},
            {hidepg_6,1},
            {hidepg_7,1},
            {hidepg_8,1},
            {hidepg_9,1},
            {hidepg_10,1},
            {hidepg_11,1},
            {hidepg_12,1},
            {hidepg_13,1},
            {hidepg_14,1},
            {hidepg_15,1},
            {hidepg_16,1},
            {hidepg_17,1},
            {hidepg_18,1},
            {hidepg_19,1},
            {hidepg_20,1},
            {hidepg_21,1},
            {hidepg_22,1},
            {hidepg_23,1},
            {hidepg_24,1},
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
            {hideweaponsl,1},
            {hideweaponsr,1},
            {pilotcamera_h,0},
            {pilotcamera_v,0.09}
        };
		hide[] =
        {
            clan,
            zasleh,
            light_r,
            "tail rotor blur",
            "main rotor blur",
            "zadni svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 1.963;
		verticalOffsetWorld = 0.041;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Heli_Attack_01_dynamicLoadout_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	crew = B_A_Helipilot_wdl_F;
	typicalCargo[] = {B_A_Helipilot_wdl_F};

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