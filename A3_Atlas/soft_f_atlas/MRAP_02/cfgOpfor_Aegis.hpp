class Atlas_O_W_MRAP_02_F: O_MRAP_02_F
{
    author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {damagehide,0},
            {damagehidevez,0},
            {damagehidehlaven,0},
            {wheel_1_1_destruct,0},
            {wheel_1_2_destruct,0},
            {wheel_1_3_destruct,0},
            {wheel_1_4_destruct,0},
            {wheel_2_1_destruct,0},
            {wheel_2_2_destruct,0},
            {wheel_2_3_destruct,0},
            {wheel_2_4_destruct,0},
            {wheel_1_1_destruct_unhide,0},
            {wheel_1_2_destruct_unhide,0},
            {wheel_1_3_destruct_unhide,0},
            {wheel_1_4_destruct_unhide,0},
            {wheel_2_1_destruct_unhide,0},
            {wheel_2_2_destruct_unhide,0},
            {wheel_2_3_destruct_unhide,0},
            {wheel_2_4_destruct_unhide,0},
            {wheel_1_3_damage,0},
            {wheel_1_4_damage,0},
            {wheel_2_3_damage,0},
            {wheel_2_4_damage,0},
            {wheel_1_3_damper_damage_backanim,0},
            {wheel_1_4_damper_damage_backanim,0},
            {wheel_2_3_damper_damage_backanim,0},
            {wheel_2_4_damper_damage_backanim,0},
            {glass1_destruct,0},
            {glass2_destruct,0},
            {glass3_destruct,0},
            {glass4_destruct,0},
            {glass5_destruct,0},
            {fuel,1},
            {wheel_1_1,0},
            {wheel_2_1,0},
            {wheel_1_2,0},
            {wheel_2_2,0},
            {wheel_1_1_damper,0},
            {wheel_2_1_damper,0},
            {wheel_1_2_damper,0},
            {wheel_2_2_damper,0},
            {daylights,0},
            {pedal_thrust,0},
            {pedal_brake,0},
            {reserve_wheel_hide,0},
            {reserve_wheel_unhide,0},
            {wheel_1_1_damage,0},
            {wheel_1_2_damage,0},
            {wheel_2_1_damage,0},
            {wheel_2_2_damage,0},
            {wheel_1_1_damper_damage_backanim,0},
            {wheel_1_2_damper_damage_backanim,0},
            {wheel_2_1_damper_damage_backanim,0},
            {wheel_2_2_damper_damage_backanim,0},
            {glass6_destruct,0},
            {glass7_destruct,0},
            {glass8_destruct,0},
            {glass9_destruct,0},
            {glass10_destruct,0},
            {glass11_destruct,0},
            {vehicletransported_antenna_hide,0},
            {drivingwheel,0},
            {driwingwheelshaft1,0},
            {driwingwheelshaft2,0},
            {steering_1_1,0},
            {steering_2_1,0},
            {indicatorspeed,0},
            {indicatorfuel,1},
            {indicatorrpm,0},
            {indicatortemp,0},
            {indicatortemp_move,0},
            {indicatortemp2,0},
            {indicatortemp2_move,0},
            {gear_lever,1},
            {reverse_light,1},
            {door_lf,0},
            {door_lf_lower,0},
            {door_rf,0},
            {door_rf_lower,0},
            {door_lm,0},
            {door_lm_lower,0},
            {door_rm,0},
            {door_rm_lower,0},
            {door_rear,0},
            {door_rear_right,0},
            {door1_hide,0},
            {door3_hide,0}
        };
		hide[] =
        {
            clan,
            zasleh,
            light_l,
            light_r,
            light_r2,
            light_l2,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.31;
		verticalOffsetWorld = -0.133;
		init = "''";
	};
    editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_MRAP_02_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_A_CfgVehicles_O_R_MRAP_02_F0;
    side = TEast;
    faction =  Atlas_OPF_W_F;
    crew = Atlas_O_W_Soldier_F;
    typicalCargo[] =
    {
        Atlas_O_W_Soldier_F,
        Atlas_O_W_Soldier_F
    };
    textureList[] = {GreenHex,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\MRAP_02\Data\MRAP_02_ext_01_ghex_CO.paa",
        "\A3\Soft_F_Exp\MRAP_02\Data\MRAP_02_ext_02_ghex_CO.paa"
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_545x39_AK12_Mag_F,16);
        mag_xx(75Rnd_762x39_AK12_Mag_F,8);
        mag_xx(HandGrenade_East,10);
        mag_xx(SmokeShell,4);
        mag_xx(SmokeShellRed,4);
        mag_xx(SmokeShellOrange,4);
        mag_xx(SmokeShellYellow,4);
        mag_xx(1Rnd_HE_Grenade_shell,10);
        mag_xx(1Rnd_Smoke_Grenade_shell,4);
        mag_xx(1Rnd_SmokeRed_Grenade_shell,4);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
        mag_xx(1Rnd_SmokeYellow_Grenade_shell,4);
        mag_xx(17Rnd_9x21_Mag,12);
        mag_xx(RPG32_F,2);
    };
    class TransportWeapons
    {
        weap_xx(arifle_AK12_545_F,2);
    };
};
class Atlas_O_W_MRAP_02_hmg_F: O_MRAP_02_hmg_F
{
    author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {damagehide,0},
            {damagehidevez,0},
            {damagehidehlaven,0},
            {wheel_1_1_destruct,0},
            {wheel_1_2_destruct,0},
            {wheel_1_3_destruct,0},
            {wheel_1_4_destruct,0},
            {wheel_2_1_destruct,0},
            {wheel_2_2_destruct,0},
            {wheel_2_3_destruct,0},
            {wheel_2_4_destruct,0},
            {wheel_1_1_destruct_unhide,0},
            {wheel_1_2_destruct_unhide,0},
            {wheel_1_3_destruct_unhide,0},
            {wheel_1_4_destruct_unhide,0},
            {wheel_2_1_destruct_unhide,0},
            {wheel_2_2_destruct_unhide,0},
            {wheel_2_3_destruct_unhide,0},
            {wheel_2_4_destruct_unhide,0},
            {wheel_1_3_damage,0},
            {wheel_1_4_damage,0},
            {wheel_2_3_damage,0},
            {wheel_2_4_damage,0},
            {wheel_1_3_damper_damage_backanim,0},
            {wheel_1_4_damper_damage_backanim,0},
            {wheel_2_3_damper_damage_backanim,0},
            {wheel_2_4_damper_damage_backanim,0},
            {glass1_destruct,0},
            {glass2_destruct,0},
            {glass3_destruct,0},
            {glass4_destruct,0},
            {glass5_destruct,0},
            {fuel,1},
            {wheel_1_1,0},
            {wheel_2_1,0},
            {wheel_1_2,0},
            {wheel_2_2,0},
            {wheel_1_1_damper,0},
            {wheel_2_1_damper,0},
            {wheel_1_2_damper,0},
            {wheel_2_2_damper,0},
            {daylights,0},
            {pedal_thrust,0},
            {pedal_brake,0},
            {reserve_wheel_hide,0},
            {reserve_wheel_unhide,0},
            {wheel_1_1_damage,0},
            {wheel_1_2_damage,0},
            {wheel_2_1_damage,0},
            {wheel_2_2_damage,0},
            {wheel_1_1_damper_damage_backanim,0},
            {wheel_1_2_damper_damage_backanim,0},
            {wheel_2_1_damper_damage_backanim,0},
            {wheel_2_2_damper_damage_backanim,0},
            {glass6_destruct,0},
            {glass7_destruct,0},
            {glass8_destruct,0},
            {glass9_destruct,0},
            {glass10_destruct,0},
            {glass11_destruct,0},
            {vehicletransported_antenna_hide,0},
            {drivingwheel,0},
            {driwingwheelshaft1,0},
            {driwingwheelshaft2,0},
            {steering_1_1,0},
            {steering_2_1,0},
            {indicatorspeed,0},
            {indicatorfuel,1},
            {indicatorrpm,0},
            {indicatortemp,0},
            {indicatortemp_move,0},
            {indicatortemp2,0},
            {indicatortemp2_move,0},
            {gear_lever,1},
            {reverse_light,1},
            {door_lf,0},
            {door_lf_lower,0},
            {door_rf,0},
            {door_rf_lower,0},
            {door_lm,0},
            {door_lm_lower,0},
            {door_rm,0},
            {door_rm_lower,0},
            {door_rear,0},
            {door_rear_right,0},
            {door1_hide,0},
            {door3_hide,0},
            {mainturret,0},
            {maingun,0},
            {joystick_gunner_x,0},
            {joystick_gunner_y,0},
            {turret_indicator,0},
            {damagehlaven,0},
            {mg_muzzle,0},
            {zaslehrot,56}
        };
		hide[] =
        {
            clan,
            zasleh,
            light_l,
            light_r,
            light_r2,
            light_l2,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.659;
		verticalOffsetWorld = -0.134;
		init = "''";
	};
    editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_MRAP_02_hmg_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_A_CfgVehicles_O_R_MRAP_02_hmg_F0;
    side = TEast;
    faction =  Atlas_OPF_W_F;
    crew = Atlas_O_W_Soldier_F;
    typicalCargo[] =
    {
        Atlas_O_W_Soldier_F,
        Atlas_O_W_Soldier_F
    };
    textureList[] = {GreenHex,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\MRAP_02\Data\MRAP_02_ext_01_ghex_CO.paa",
        "\A3\Soft_F_Exp\MRAP_02\Data\MRAP_02_ext_02_ghex_CO.paa",
        "\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_545x39_AK12_Mag_F,16);
        mag_xx(75Rnd_762x39_AK12_Mag_F,8);
        mag_xx(HandGrenade_East,10);
        mag_xx(SmokeShell,4);
        mag_xx(SmokeShellRed,4);
        mag_xx(SmokeShellOrange,4);
        mag_xx(SmokeShellYellow,4);
        mag_xx(1Rnd_HE_Grenade_shell,10);
        mag_xx(1Rnd_Smoke_Grenade_shell,4);
        mag_xx(1Rnd_SmokeRed_Grenade_shell,4);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
        mag_xx(1Rnd_SmokeYellow_Grenade_shell,4);
        mag_xx(17Rnd_9x21_Mag,12);
        mag_xx(RPG32_F,2);
    };
    class TransportWeapons
    {
        weap_xx(arifle_AK12_545_F,2);
    };
};
class Atlas_O_W_MRAP_02_gmg_F: O_MRAP_02_gmg_F
{
    author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {damagehide,0},
            {damagehidevez,0},
            {damagehidehlaven,0},
            {wheel_1_1_destruct,0},
            {wheel_1_2_destruct,0},
            {wheel_1_3_destruct,0},
            {wheel_1_4_destruct,0},
            {wheel_2_1_destruct,0},
            {wheel_2_2_destruct,0},
            {wheel_2_3_destruct,0},
            {wheel_2_4_destruct,0},
            {wheel_1_1_destruct_unhide,0},
            {wheel_1_2_destruct_unhide,0},
            {wheel_1_3_destruct_unhide,0},
            {wheel_1_4_destruct_unhide,0},
            {wheel_2_1_destruct_unhide,0},
            {wheel_2_2_destruct_unhide,0},
            {wheel_2_3_destruct_unhide,0},
            {wheel_2_4_destruct_unhide,0},
            {wheel_1_3_damage,0},
            {wheel_1_4_damage,0},
            {wheel_2_3_damage,0},
            {wheel_2_4_damage,0},
            {wheel_1_3_damper_damage_backanim,0},
            {wheel_1_4_damper_damage_backanim,0},
            {wheel_2_3_damper_damage_backanim,0},
            {wheel_2_4_damper_damage_backanim,0},
            {glass1_destruct,0},
            {glass2_destruct,0},
            {glass3_destruct,0},
            {glass4_destruct,0},
            {glass5_destruct,0},
            {fuel,1},
            {wheel_1_1,0},
            {wheel_2_1,0},
            {wheel_1_2,0},
            {wheel_2_2,0},
            {wheel_1_1_damper,0},
            {wheel_2_1_damper,0},
            {wheel_1_2_damper,0},
            {wheel_2_2_damper,0},
            {daylights,0},
            {pedal_thrust,0},
            {pedal_brake,0},
            {reserve_wheel_hide,0},
            {reserve_wheel_unhide,0},
            {wheel_1_1_damage,0},
            {wheel_1_2_damage,0},
            {wheel_2_1_damage,0},
            {wheel_2_2_damage,0},
            {wheel_1_1_damper_damage_backanim,0},
            {wheel_1_2_damper_damage_backanim,0},
            {wheel_2_1_damper_damage_backanim,0},
            {wheel_2_2_damper_damage_backanim,0},
            {glass6_destruct,0},
            {glass7_destruct,0},
            {glass8_destruct,0},
            {glass9_destruct,0},
            {glass10_destruct,0},
            {glass11_destruct,0},
            {vehicletransported_antenna_hide,0},
            {drivingwheel,0},
            {driwingwheelshaft1,0},
            {driwingwheelshaft2,0},
            {steering_1_1,0},
            {steering_2_1,0},
            {indicatorspeed,0},
            {indicatorfuel,1},
            {indicatorrpm,0},
            {indicatortemp,0},
            {indicatortemp_move,0},
            {indicatortemp2,0},
            {indicatortemp2_move,0},
            {gear_lever,1},
            {reverse_light,1},
            {door_lf,0},
            {door_lf_lower,0},
            {door_rf,0},
            {door_rf_lower,0},
            {door_lm,0},
            {door_lm_lower,0},
            {door_rm,0},
            {door_rm_lower,0},
            {door_rear,0},
            {door_rear_right,0},
            {door1_hide,0},
            {door3_hide,0},
            {mainturret,0},
            {maingun,0},
            {joystick_gunner_x,0},
            {joystick_gunner_y,0},
            {turret_indicator,0},
            {damagehlaven,0},
            {mg_muzzle,0},
            {zaslehrot,189}
        };
		hide[] =
        {
            clan,
            zasleh,
            light_l,
            light_r,
            light_r2,
            light_l2,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.658;
		verticalOffsetWorld = -0.134;
		init = "''";
	};
    editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_MRAP_02_gmg_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_A_CfgVehicles_O_R_MRAP_02_gmg_F0;
    side = TEast;
    faction =  Atlas_OPF_W_F;
    crew = Atlas_O_W_Soldier_F;
    typicalCargo[] =
    {
        Atlas_O_W_Soldier_F,
        Atlas_O_W_Soldier_F
    };
    textureList[] = {GreenHex,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\MRAP_02\Data\MRAP_02_ext_01_ghex_CO.paa",
        "\A3\Soft_F_Exp\MRAP_02\Data\MRAP_02_ext_02_ghex_CO.paa",
        "\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_545x39_AK12_Mag_F,16);
        mag_xx(75Rnd_762x39_AK12_Mag_F,8);
        mag_xx(HandGrenade_East,10);
        mag_xx(SmokeShell,4);
        mag_xx(SmokeShellRed,4);
        mag_xx(SmokeShellOrange,4);
        mag_xx(SmokeShellYellow,4);
        mag_xx(1Rnd_HE_Grenade_shell,10);
        mag_xx(1Rnd_Smoke_Grenade_shell,4);
        mag_xx(1Rnd_SmokeRed_Grenade_shell,4);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
        mag_xx(1Rnd_SmokeYellow_Grenade_shell,4);
        mag_xx(17Rnd_9x21_Mag,12);
        mag_xx(RPG32_F,2);
    };
    class TransportWeapons
    {
        weap_xx(arifle_AK12_545_F,2);
    };
};