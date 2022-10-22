class Atlas_O_VZ_Heli_Light_02_dynamicLoadout_F: O_Heli_Light_02_dynamicLoadout_F
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
            {indicatoraltbaro,7.17},
            {indicatoraltradar,-0.13},
            {indicatorspeed,0},
            {indicatorvertspeed,0},
            {indicatorcompass,0},
            {indicatorcompass2,0},
            {watchhour,0.21},
            {watchminute,0.53},
            {hrotor,0},
            {vrotor,0},
            {horizonbank,0},
            {horizondive,0.05},
            {pedall,0},
            {pedalr,0},
            {tailrotorimpacthide,0},
            {display_on,0},
            {horizont1_bank,0},
            {horizont1_pitch,0.05},
            {horizont2_dive,0.05},
            {horizont2_bank,0},
            {indicatorrpm,0},
            {indicatorrpm2,0},
            {horizon2_bank_b,0},
            {horizont3_dive,0.05},
            {horizont3_bank,0},
            {horizon3_bank_b,0},
            {indicatorfuel,1},
            {monitors_on,0},
            {indicatorcompass3,0},
            {indicatorcompass4,0},
            {dvere1,0},
            {dvere1_posunz,0},
            {dvere1_hide,0},
            {dvere2,0},
            {dvere2_posunz,0},
            {dvere2_hide,0},
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
            {wheel_1_1,0},
            {wheel_1_2,0},
            {wheel_2_1,0},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {collisionlight_white_blinking,0},
            {machinegun,0.33},
            {zaslehrot,780},
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
            {lever_copilot,0},
            {hideweapons,0},
            {hideminigun,0},
            {rotorimpacthide,0},
            {hiderockets_dl,1}
        };
		hide[] =
        {
            clan,
            zasleh,
            light_r,
            light_l,
            "tail rotor blur",
            "main rotor blur",
            "zadni svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.175;
		verticalOffsetWorld = 0.005;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Heli_Light_02_dynamicLoadout_F.jpg";
	scope = protected;
	scopeCurator = protected;
	side = TEast;
	faction = Atlas_OPF_V_F;
	crew = Atlas_O_VZ_Helipilot_F;
	typicalCargo[] = {Atlas_O_VZ_Helipilot_F};
	textureList[] =
	{
		Black,0,
		Blackcustom,0,
		GreenHex,1
	};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_ghex_CO.paa"};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellRed,2);
		mag_xx(30Rnd_580x42_Mag_F,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_NCAR15B_F,2);
	};
};
class Atlas_O_VZ_Heli_Light_02_unarmed_F: O_Heli_Light_02_unarmed_F
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
            {indicatoraltbaro,7.17},
            {indicatoraltradar,-0.13},
            {indicatorspeed,0},
            {indicatorvertspeed,0},
            {indicatorcompass,0},
            {indicatorcompass2,0},
            {watchhour,0.21},
            {watchminute,0.53},
            {hrotor,0},
            {vrotor,0},
            {horizonbank,0},
            {horizondive,0.05},
            {pedall,0},
            {pedalr,0},
            {tailrotorimpacthide,0},
            {display_on,0},
            {horizont1_bank,0},
            {horizont1_pitch,0.05},
            {horizont2_dive,0.05},
            {horizont2_bank,0},
            {indicatorrpm,0},
            {indicatorrpm2,0},
            {horizon2_bank_b,0},
            {horizont3_dive,0.05},
            {horizont3_bank,0},
            {horizon3_bank_b,0},
            {indicatorfuel,1},
            {monitors_on,0},
            {indicatorcompass3,0},
            {indicatorcompass4,0},
            {dvere1,0},
            {dvere1_posunz,0},
            {dvere1_hide,0},
            {dvere2,0},
            {dvere2_posunz,0},
            {dvere2_hide,0},
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
            {wheel_1_1,0},
            {wheel_1_2,0},
            {wheel_2_1,0},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {collisionlight_white_blinking,0},
            {machinegun,0},
            {zaslehrot,0},
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
            {lever_copilot,0},
            {hideweapons,1},
            {hideminigun,1},
            {rotorimpacthide,0},
            {hiderockets_dl,1}
        };
		hide[] =
        {
            clan,
            zasleh,
            light_r,
            light_l,
            "tail rotor blur",
            "main rotor blur",
            "zadni svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.175;
		verticalOffsetWorld = 0.005;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Heli_Light_02_unarmed_F.jpg";
	scope = protected;
	scopeCurator = protected;
	scopeArsenal = private;
	forceInGarage = false;
	side = TEast;
	faction = Atlas_OPF_V_F;
	crew = Atlas_O_W_Helipilot_F;
	typicalCargo[] = {Atlas_O_W_Helipilot_F};
	textureList[] =
	{
		Black,1,
		Blackcustom,0,
		GreenHex,0
	};
	hiddenSelectionsTextures[] = {"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellRed,2);
		mag_xx(30Rnd_580x42_Mag_F,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_NCAR15B_F,2);
	};
};