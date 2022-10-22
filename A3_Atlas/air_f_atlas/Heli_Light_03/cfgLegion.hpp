/* Legionnaires */
class Atlas_B_L_Heli_light_03_dynamicLoadout_F: Heli_light_03_dynamicLoadout_base_F
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
            {indicatorcompass,0},
            {indicatorcompass1,0},
            {horizondive,0},
            {horizonbank,0},
            {horizondive2,0},
            {horizonbank2,0},
            {horizonbank1bck,0},
            {horizonbank2bck,0},
            {rpm01,0},
            {rpm01a,0},
            {speed02,0},
            {speed02a,0},
            {fuel03,1},
            {fuel03a,1},
            {fuel04,1},
            {fuel04a,1},
            {rpm05,0},
            {rpm05a,0},
            {rpm06,0},
            {rpm06a,0},
            {rpm07,0},
            {rpm07a,0},
            {display_on,0},
            {wheel_front_damper,0},
            {wheel_left_damper,0},
            {wheel_right_damper,0},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {collisionlight_white_blinking,0},
            {obsturret,0},
            {obsgun,0},
            {zaslehrot,53},
            {zaslehrot_2,53},
            {zasleh_hide,0},
            {gunl_revolving,0.33},
            {gunr_revolving,0.33},
            {suspension,0},
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
            {rocketpods,0},
            {damagehideglass1,0},
            {damagehideglass2,0},
            {damagehideglass3,0},
            {damagehideglass4,0},
            {damagehideglass5,0},
            {damagehideglass6,0},
            {damagehideglass7,0},
            {damagehideglass8,0},
            {damagehideglass9,0},
            {damagehideglass10,0}
        };
		hide[] =
        {
            clan,
            zasleh,
            light_1,
            light_2,
            light_3,
            light_4,
            "tail rotor blur",
            "main rotor blur",
            "zadni svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 1.526;
		verticalOffsetWorld = -0.005;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_Heli_light_03_dynamicLoadout_F.jpg";
	scope = public;
	side = TWest;
	faction = Atlas_BLU_L_F;
	crew = Atlas_B_L_Helipilot_F;
	typicalCargo[] = {Atlas_B_L_Soldier_Lite_F};
	hiddenSelections[] =
	{
		camo,
		ammobox,
		ammobox_sign
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Air_F_Atlas\Heli_Light_03\Data\Heli_Light_03_base_jagged_CO.paa",
        "\A3\Supplies_F_Enoch\Ammoboxes\Data\AmmoBox_EAF_CO.paa",
        "\A3_Atlas\Supplies_F_Atlas\Ammoboxes\Data\AmmoBox_signs_CA.paa"
	};
	textureList[] =
    {
        Green,0,
        Jagged,1
    };
	magazines[] =
	{
		5000Rnd_762x51_Belt,
		168Rnd_CMFlare_Chaff_Magazine
	};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_msbs_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MSBS65_black_F,2);
	};
};
class Atlas_B_L_Heli_light_03_unarmed_F: Heli_light_03_unarmed_base_F
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
            {indicatorcompass,0},
            {indicatorcompass1,0},
            {horizondive,0},
            {horizonbank,0},
            {horizondive2,0},
            {horizonbank2,0},
            {horizonbank1bck,0},
            {horizonbank2bck,0},
            {rpm01,0},
            {rpm01a,0},
            {speed02,0},
            {speed02a,0},
            {fuel03,1},
            {fuel03a,1},
            {fuel04,1},
            {fuel04a,1},
            {rpm05,0},
            {rpm05a,0},
            {rpm06,0},
            {rpm06a,0},
            {rpm07,0},
            {rpm07a,0},
            {display_on,0},
            {wheel_front_damper,0},
            {wheel_left_damper,0},
            {wheel_right_damper,0},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {collisionlight_white_blinking,0},
            {obsturret,0},
            {obsgun,0},
            {zasleh_hide,0},
            {gunl_revolving,0},
            {gunr_revolving,0},
            {suspension,0},
            {hidepg_1,0},
            {hidepg_2,0},
            {hidepg_3,0},
            {hidepg_4,0},
            {hidepg_5,0},
            {hidepg_6,0},
            {hidepg_7,0},
            {hidepg_8,0},
            {hidepg_9,0},
            {hidepg_10,0},
            {hidepg_11,0},
            {hidepg_12,0},
            {hidepg_13,0},
            {hidepg_14,0},
            {hidepg_15,0},
            {hidepg_16,0},
            {hidepg_17,0},
            {hidepg_18,0},
            {hidepg_19,0},
            {hidepg_20,0},
            {hidepg_21,0},
            {hidepg_22,0},
            {hidepg_23,0},
            {hidepg_24,0},
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
            {rocketpods,0},
            {damagehideglass1,0},
            {damagehideglass2,0},
            {damagehideglass3,0},
            {damagehideglass4,0},
            {damagehideglass5,0},
            {damagehideglass6,0},
            {damagehideglass7,0},
            {damagehideglass8,0},
            {damagehideglass9,0},
            {damagehideglass10,0}
        };
		hide[] =
        {
            clan,
            zasleh,
            light_1,
            light_2,
            light_3,
            light_4,
            "tail rotor blur",
            "main rotor blur",
            "zadni svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 1.72;
		verticalOffsetWorld = -0.143;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_Heli_light_03_unarmed_F.jpg";
	scope = public;
	side = TWest;
	faction = Atlas_BLU_L_F;
	crew = Atlas_B_L_Helipilot_F;
	typicalCargo[] = {Atlas_B_L_Soldier_Lite_F};
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_03\Data\Heli_Light_03_base_CO.paa"};
	textureList[] =
    {
        Green,1,
        Jagged,0
    };

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_msbs_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MSBS65_black_F,2);
	};
};