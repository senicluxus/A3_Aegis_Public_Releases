/* US */
class B_MRAP_01_F;
class B_MRAP_01_gmg_F;
class B_MRAP_01_hmg_F;

/* US (Woodland) */
class B_W_MRAP_01_F: B_MRAP_01_F
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
            {glass6_destruct,0},
            {fuel,1},
            {wheel_1_1,1},
            {wheel_2_1,1},
            {wheel_1_2,1},
            {wheel_2_2,1},
            {wheel_1_1_damper,0.51},
            {wheel_2_1_damper,0.51},
            {wheel_1_2_damper,0.5},
            {wheel_2_2_damper,0.51},
            {daylights,0},
            {pedal_thrust,0},
            {pedal_brake,1},
            {wheel_1_1_damage,0},
            {wheel_1_2_damage,0},
            {wheel_2_1_damage,0},
            {wheel_2_2_damage,0},
            {wheel_1_1_damper_damage_backanim,0},
            {wheel_1_2_damper_damage_backanim,0},
            {wheel_2_1_damper_damage_backanim,0},
            {wheel_2_2_damper_damage_backanim,0},
            {vehicletransported_antenna_hide,0},
            {drivingwheel,0},
            {steering_1_1,0},
            {steering_2_1,0},
            {indicatorspeed,0},
            {indicatorfuel,1},
            {indicatorrpm,0},
            {indicatortemp,0},
            {indicatortemp_move,0},
            {indicatortemp2,0},
            {indicatortemp2_move,0},
            {reverse_light,1},
            {door_lf,0},
            {door_rf,0},
            {door_lb,0},
            {door_rb,0}
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
        verticalOffset = 2.052;
        verticalOffsetWorld = -0.154;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_MRAP_01_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_W_F;
    crew = B_W_Soldier_F;
    typicalCargo[] = {B_W_Soldier_Lite_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\MRAP_01\Data\MRAP_01_base_olive_CO.paa",
        "\A3\Soft_F_Exp\MRAP_01\Data\MRAP_01_adds_olive_CO.paa",
        "\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa"
    };

    /* Inventory */
    class TransportWeapons
    {
        weap_xx(arifle_MX_Black_F,2);
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_black_mag,16);
        mag_xx(100Rnd_65x39_caseless_black_mag,6);
        mag_xx(HandGrenade,10);
        mag_xx(1Rnd_HE_Grenade_shell,10);
        mag_xx(1Rnd_Smoke_Grenade_shell,4);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
        mag_xx(16Rnd_9x21_Mag,12);
        mag_xx(SmokeShell,4);
        mag_xx(SmokeShellGreen,4);
        mag_xx(SmokeShellOrange,4);
        mag_xx(SmokeShellBlue,4);
        mag_xx(NLAW_F,2);
    };
};
class B_W_MRAP_01_gmg_F: B_MRAP_01_gmg_F
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
            {glass6_destruct,0},
            {fuel,1},
            {wheel_1_1,1},
            {wheel_2_1,1},
            {wheel_1_2,1},
            {wheel_2_2,1},
            {wheel_1_1_damper,0.51},
            {wheel_2_1_damper,0.51},
            {wheel_1_2_damper,0.5},
            {wheel_2_2_damper,0.51},
            {daylights,0},
            {pedal_thrust,0},
            {pedal_brake,1},
            {wheel_1_1_damage,0},
            {wheel_1_2_damage,0},
            {wheel_2_1_damage,0},
            {wheel_2_2_damage,0},
            {wheel_1_1_damper_damage_backanim,0},
            {wheel_1_2_damper_damage_backanim,0},
            {wheel_2_1_damper_damage_backanim,0},
            {wheel_2_2_damper_damage_backanim,0},
            {vehicletransported_antenna_hide,0},
            {drivingwheel,0},
            {steering_1_1,0},
            {steering_2_1,0},
            {indicatorspeed,0},
            {indicatorfuel,1},
            {indicatorrpm,0},
            {indicatortemp,0},
            {indicatortemp_move,0},
            {indicatortemp2,0},
            {indicatortemp2_move,0},
            {reverse_light,1},
            {door_lf,0},
            {door_rf,0},
            {door_lb,0},
            {door_rb,0}
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
        verticalOffset = 2.052;
        verticalOffsetWorld = -0.154;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_MRAP_01_gmg_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_W_F;
    crew = B_W_Soldier_F;
    typicalCargo[] = {B_W_Soldier_Lite_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\MRAP_01\Data\MRAP_01_base_olive_CO.paa",
        "\A3\Soft_F_Exp\MRAP_01\Data\MRAP_01_adds_olive_CO.paa",
        "\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa"
    };

    /* Inventory */
    class TransportWeapons
    {
        weap_xx(arifle_MX_Black_F,2);
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_black_mag,16);
        mag_xx(100Rnd_65x39_caseless_black_mag,6);
        mag_xx(HandGrenade,10);
        mag_xx(1Rnd_HE_Grenade_shell,10);
        mag_xx(1Rnd_Smoke_Grenade_shell,4);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
        mag_xx(16Rnd_9x21_Mag,12);
        mag_xx(SmokeShell,4);
        mag_xx(SmokeShellGreen,4);
        mag_xx(SmokeShellOrange,4);
        mag_xx(SmokeShellBlue,4);
        mag_xx(NLAW_F,2);
    };
};
class B_W_MRAP_01_hmg_F: B_MRAP_01_hmg_F
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
            {glass6_destruct,0},
            {fuel,1},
            {wheel_1_1,1},
            {wheel_2_1,1},
            {wheel_1_2,1},
            {wheel_2_2,1},
            {wheel_1_1_damper,0.51},
            {wheel_2_1_damper,0.51},
            {wheel_1_2_damper,0.5},
            {wheel_2_2_damper,0.51},
            {daylights,0},
            {pedal_thrust,0},
            {pedal_brake,1},
            {wheel_1_1_damage,0},
            {wheel_1_2_damage,0},
            {wheel_2_1_damage,0},
            {wheel_2_2_damage,0},
            {wheel_1_1_damper_damage_backanim,0},
            {wheel_1_2_damper_damage_backanim,0},
            {wheel_2_1_damper_damage_backanim,0},
            {wheel_2_2_damper_damage_backanim,0},
            {vehicletransported_antenna_hide,0},
            {drivingwheel,0},
            {steering_1_1,0},
            {steering_2_1,0},
            {indicatorspeed,0},
            {indicatorfuel,1},
            {indicatorrpm,0},
            {indicatortemp,0},
            {indicatortemp_move,0},
            {indicatortemp2,0},
            {indicatortemp2_move,0},
            {reverse_light,1},
            {door_lf,0},
            {door_rf,0},
            {door_lb,0},
            {door_rb,0}
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
        verticalOffset = 2.052;
        verticalOffsetWorld = -0.154;
        init = "''";
    };
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_MRAP_01_hmg_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_W_F;
    crew = B_W_Soldier_F;
    typicalCargo[] = {B_W_Soldier_Lite_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\MRAP_01\Data\MRAP_01_base_olive_CO.paa",
        "\A3\Soft_F_Exp\MRAP_01\Data\MRAP_01_adds_olive_CO.paa",
        "\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa"
    };

    /* Inventory */
    class TransportWeapons
    {
        weap_xx(arifle_MX_Black_F,2);
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_65x39_caseless_black_mag,16);
        mag_xx(100Rnd_65x39_caseless_black_mag,6);
        mag_xx(HandGrenade,10);
        mag_xx(1Rnd_HE_Grenade_shell,10);
        mag_xx(1Rnd_Smoke_Grenade_shell,4);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
        mag_xx(16Rnd_9x21_Mag,12);
        mag_xx(SmokeShell,4);
        mag_xx(SmokeShellGreen,4);
        mag_xx(SmokeShellOrange,4);
        mag_xx(SmokeShellBlue,4);
        mag_xx(NLAW_F,2);
    };
};