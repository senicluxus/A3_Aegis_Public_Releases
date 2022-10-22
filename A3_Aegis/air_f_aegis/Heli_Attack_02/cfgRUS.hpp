/* Russia */
class O_R_Heli_Attack_02_dynamicLoadout_F: O_Heli_Attack_02_dynamicLoadout_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {indicatorvertspeed2,0},
            {indicatorcompass1,0},
            {indicatorcompass2,0},
            {display_on,0},
            {ind_horizondive1,0},
            {ind_horizondive2,0},
            {ind_horizonbank1,0},
            {ind_horizonbank2,0},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {collisionlight_white_blinking,0},
            {bottomrotor,0},
            {toprotor,0},
            {mainturret,0},
            {mainturret_vis,0},
            {maingun,0.26},
            {maingun_vis,0},
            {optics2_h,0},
            {optics_h,0},
            {optics,0.26},
            {machinegun,1},
            {zaslehrot,941},
            {right_gear_d,0},
            {left_gear_d,0},
            {rear_gear_d,0},
            {wheel_1_1,0},
            {wheel_1_2,0},
            {wheel_2_1,0},
            {door_l,0},
            {door_l_pop,0},
            {door_r,0},
            {door_r_pop,0},
            {glass1_destruct,0},
            {glass2_destruct,0},
            {glass3_destruct,0},
            {glass4_destruct,0},
            {damagehide,0},
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
            {hide80mm_1,1},
            {hide80mm_2,1},
            {hide80mm_3,1},
            {hide80mm_4,1},
            {hide80mm_5,1},
            {hide80mm_6,1},
            {hide80mm_7,1},
            {hide80mm_8,1},
            {hide80mm_9,1},
            {hide80mm_10,1},
            {hide80mm_11,1},
            {hide80mm_12,1},
            {hide80mm_13,1},
            {hide80mm_14,1},
            {hide80mm_15,1},
            {hide80mm_16,1},
            {hide80mm_17,1},
            {hide80mm_18,1},
            {hide80mm_19,1},
            {hide80mm_20,1},
            {hide80mm_21,1},
            {hide80mm_22,1},
            {hide80mm_23,1},
            {hide80mm_24,1},
            {hide80mm_25,1},
            {hide80mm_26,1},
            {hide80mm_27,1},
            {hide80mm_28,1},
            {hide80mm_29,1},
            {hide80mm_30,1},
            {hide80mm_31,1},
            {hide80mm_32,1},
            {hide80mm_33,1},
            {hide80mm_34,1},
            {hide80mm_35,1},
            {hide80mm_36,1},
            {hide80mm_37,1},
            {hide80mm_38,1},
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
            {lever_pilot,0},
            {pedall,0},
            {pedalr,0},
            {mainrotorimpacthide,0},
            {tailrotorimpacthide,0},
            {pilotcamera_v,0.17}
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
		verticalOffset = 3.082;
		verticalOffsetWorld = 0.026;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Heli_Attack_02_dynamicLoadout_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_helipilot_F;
	typicalCargo[] = {O_R_helipilot_F};
	textureList[] = {Black,1};
	hiddenSelectionsTextures[] =
	{
        "\A3_Aegis\Air_F_Aegis\Heli_Attack_02\Data\Heli_Attack_02_body1_RUS2_CO.paa",
        "\A3_Aegis\Air_F_Aegis\Heli_Attack_02\Data\Heli_Attack_02_body2_RUS_CO.paa"
    };

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellRed,2);
		mag_xx(30Rnd_545x39_AK12_Mag_F,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AK12U_545_F,2);
	};

    /* Sensors & Components
    - Let's equip Russian variants with unique armaments
    */
	class Components: Components
	{
		class TransportPylonsComponent: TransportPylonsComponent
		{
            class Pylons: Pylons
            {
                class PylonLeft1: PylonLeft1
                {
                    attachment = PylonRack_6Rnd_Vikhr_missiles;
                };
                class PylonLeft2: PylonLeft2
                {
                    attachment = PylonRack_20Rnd_Rocket_80mm;
                };
                class PylonRight2: PylonRight2
                {
                    attachment = PylonRack_20Rnd_Rocket_80mm;
                };
                class PylonRight1: PylonRight1
                {
                    attachment = PylonRack_6Rnd_Vikhr_missiles;
                };
            };
            class Presets: Presets
            {
                class Empty: Empty{};
                class Default: Default
                {
                    attachment[] =
                    {
                        PylonRack_6Rnd_Vikhr_missiles,
                        PylonRack_20Rnd_Rocket_80mm,
                        PylonRack_20Rnd_Rocket_80mm,
                        PylonRack_6Rnd_Vikhr_missiles
                    };
                };
                class AT: AT
                {
                    attachment[] =
                    {
                        PylonRack_6Rnd_Vikhr_missiles,
                        PylonRack_6Rnd_Vikhr_missiles,
                        PylonRack_6Rnd_Vikhr_missiles,
                        PylonRack_6Rnd_Vikhr_missiles
                    };
                };
                class HAT: HAT
                {
                    attachment[] =
                    {
                        PylonRack_6Rnd_Vikhr_missiles,
                        PylonRack_1Rnd_Missile_AGM_01_F,
                        PylonRack_1Rnd_Missile_AGM_01_F,
                        PylonRack_6Rnd_Vikhr_missiles
                    };
                };
                class CAS: CAS
                {
                    attachment[] =
                    {
                        PylonRack_20Rnd_Rocket_80mm,
                        PylonMissile_1Rnd_Bomb_03_F,
                        PylonMissile_1Rnd_Bomb_03_F,
                        PylonRack_20Rnd_Rocket_80mm
                    };
                };
            };
		};
	};
};

/* Russia (Mediterranean) */
class O_R_Heli_Attack_02_dynamicLoadout_ard_F: O_R_Heli_Attack_02_dynamicLoadout_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {indicatorvertspeed2,0},
            {indicatorcompass1,0},
            {indicatorcompass2,0},
            {display_on,0},
            {ind_horizondive1,0},
            {ind_horizondive2,0},
            {ind_horizonbank1,0},
            {ind_horizonbank2,0},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {collisionlight_white_blinking,0},
            {bottomrotor,0},
            {toprotor,0},
            {mainturret,0},
            {mainturret_vis,0},
            {maingun,0.26},
            {maingun_vis,0},
            {optics2_h,0},
            {optics_h,0},
            {optics,0.26},
            {machinegun,1},
            {zaslehrot,941},
            {right_gear_d,0},
            {left_gear_d,0},
            {rear_gear_d,0},
            {wheel_1_1,0},
            {wheel_1_2,0},
            {wheel_2_1,0},
            {door_l,0},
            {door_l_pop,0},
            {door_r,0},
            {door_r_pop,0},
            {glass1_destruct,0},
            {glass2_destruct,0},
            {glass3_destruct,0},
            {glass4_destruct,0},
            {damagehide,0},
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
            {hide80mm_1,1},
            {hide80mm_2,1},
            {hide80mm_3,1},
            {hide80mm_4,1},
            {hide80mm_5,1},
            {hide80mm_6,1},
            {hide80mm_7,1},
            {hide80mm_8,1},
            {hide80mm_9,1},
            {hide80mm_10,1},
            {hide80mm_11,1},
            {hide80mm_12,1},
            {hide80mm_13,1},
            {hide80mm_14,1},
            {hide80mm_15,1},
            {hide80mm_16,1},
            {hide80mm_17,1},
            {hide80mm_18,1},
            {hide80mm_19,1},
            {hide80mm_20,1},
            {hide80mm_21,1},
            {hide80mm_22,1},
            {hide80mm_23,1},
            {hide80mm_24,1},
            {hide80mm_25,1},
            {hide80mm_26,1},
            {hide80mm_27,1},
            {hide80mm_28,1},
            {hide80mm_29,1},
            {hide80mm_30,1},
            {hide80mm_31,1},
            {hide80mm_32,1},
            {hide80mm_33,1},
            {hide80mm_34,1},
            {hide80mm_35,1},
            {hide80mm_36,1},
            {hide80mm_37,1},
            {hide80mm_38,1},
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
            {lever_pilot,0},
            {pedall,0},
            {pedalr,0},
            {mainrotorimpacthide,0},
            {tailrotorimpacthide,0},
            {pilotcamera_v,0.17}
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
		verticalOffset = 3.082;
		verticalOffsetWorld = 0.026;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Heli_Attack_02_dynamicLoadout_ard_F.jpg";
	faction = OPF_R_ard_F;
	crew = O_R_helipilot_ard_F;
	typicalCargo[] = {O_R_helipilot_ard_F};
};