class Atlas_O_T_Ejection_Seat_Plane_Fighter_03_F: Ejection_Seat_Plane_Fighter_03_base_F
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
	faction = Atlas_OPF_T_F;
	crew = Atlas_O_T_Fighter_Pilot_F;
};
class Atlas_O_T_Plane_Fighter_03_dynamicLoadout_F: O_Plane_Fighter_03_dynamicLoadout_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {damagehide,0},
            {stick_pilot_bank,0},
            {stick_pilot_dive,0},
            {rotor,0},
            {flapl,0},
            {flapr,0},
            {airbrake1,0},
            {airbrake2,0},
            {aileronl,0},
            {aileronr,0},
            {elevatorl,0},
            {elevatorr,0},
            {rudder,0},
            {rudder_small,0},
            {canopy1,0},
            {canopy2,0},
            {gear_1,0},
            {gear_1_steering,0},
            {gear_1_steering2,0},
            {gear_1_hatch_1,0},
            {gear_1_hatch_2,0},
            {gear_1_damper,0.1},
            {gear_1_stabil_1,0.1},
            {gear_2,0},
            {gear_2_hatch,0},
            {gear_2_damper,0.27},
            {gear_2_stabil,0.27},
            {gear_3,0},
            {gear_3_hatch,0},
            {gear_3_damper,0.24},
            {gear_3_stabil,0.24},
            {ladder_1,0},
            {ladder,0},
            {wheel_1,0},
            {wheel_2,0},
            {wheel_3,0},
            {indicatorrpm,0},
            {indicatorrpm1,0},
            {indicatorrpm2,0},
            {indicatorrpm3,0},
            {indicatorrpm4,0},
            {indicatorrpm5,0},
            {indicatorrpm6,0},
            {indicatorrpm7,0},
            {indicatorrpm8,0},
            {indicatorcompass1,0},
            {indicatorcompass2,0},
            {horizontbank,0},
            {horizontdive,0.01},
            {horizon2bank,0},
            {watchhour,0.18},
            {watchminute,0.14},
            {watchsecond,0.53},
            {indicatorclimbplus_1,0},
            {indicatorclimbplus_2,0},
            {indicatorclimbplus_3,0},
            {indicatorclimbminus_1,0},
            {indicatorclimbminus_2,0},
            {indicatorclimbminus_3,0},
            {indicatorspeed_1_5,0},
            {indicatorspeed_2_5,0},
            {indicatorspeed_3_5,0},
            {indicatorspeed_4_5,0},
            {indicatorspeed_5_5,0},
            {indicatorfuel,1},
            {monitors_on,0},
            {avionics_damage,0},
            {indicatoraltbaro,7.45},
            {zaslehrot,580},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {collisionlight_white_blinking,0},
            {pilotcamera_h,0},
            {pilotcamera_v,0.09},
            {throttle,0}
        };
		hide[] =
        {
            zasleh,
            light_l,
            light_r,
            "zadni svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.447;
		verticalOffsetWorld = 0.025;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_C_Plane_Fighter_03_dynamicLoadout_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Atlas_OPF_T_F;
	crew = Atlas_O_T_Fighter_Pilot_F;
	typicalCargo[] = {Atlas_O_T_Fighter_Pilot_F};
	textureList[] =
	{
		Hex,1,
		Grey,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_brownhex_CO.paa",
		"\A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_2_brownhex_CO.paa"
	};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = Atlas_O_T_Ejection_Seat_Plane_Fighter_03_F;
	};
};