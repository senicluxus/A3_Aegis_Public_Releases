class Atlas_I_I_MRAP_01_F: MRAP_01_base_F
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
    editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_I_MRAP_01_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TGuerrila;
    displayName = $STR_A3_A_CfgVehicles_I_I_MRAP_01_F0;
    faction = Atlas_IND_I_F;
    crew = Atlas_I_I_Soldier_F;
    typicalCargo[] = {Atlas_I_I_Soldier_lite_F};
	unitInfoType = RscUnitInfoNoWeapon;
	threat[] = {0.1,0.1,0.1};
    textureList[] = {Brown,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Soft_F_Atlas\MRAP_01\Data\MRAP_01_base_brown_CO.paa",
        "\A3_Atlas\Soft_F_Atlas\MRAP_01\Data\MRAP_01_adds_brown_CO.paa",
        "\A3_Atlas\Data_F_Atlas\Vehicles\Turret_brown_CO.paa"
    };
	class Turrets{};
    class TransportWeapons
    {
        weap_xx(arifle_TRG21_black_F,2);
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_556x45_Stanag,16);
        mag_xx(Atlas_150Rnd_762x51_Box_Yellow,4);
        mag_xx(HandGrenade,10);
        mag_xx(1Rnd_HE_Grenade_shell,10);
        mag_xx(1Rnd_Smoke_Grenade_shell,4);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
        mag_xx(1Rnd_SmokeYellow_Grenade_shell,4);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
        mag_xx(9Rnd_45ACP_Mag,12);
        mag_xx(SmokeShell,4);
        mag_xx(SmokeShellGreen,4);
        mag_xx(SmokeShellYellow,4);
        mag_xx(SmokeShellOrange,4);
		mag_xx(MRAWS_HEAT_F,2);
    };
};
class Atlas_I_I_MRAP_01_gmg_F: MRAP_01_gmg_base_F
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
    editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_I_MRAP_01_gmg_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_A_CfgVehicles_I_I_MRAP_01_gmg_F0;
    side = TGuerrila;
    faction = Atlas_IND_I_F;
    crew = Atlas_I_I_Soldier_F;
    typicalCargo[] = {Atlas_I_I_Soldier_lite_F};
    textureList[] = {Brown,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Soft_F_Atlas\MRAP_01\Data\MRAP_01_base_brown_CO.paa",
        "\A3_Atlas\Soft_F_Atlas\MRAP_01\Data\MRAP_01_adds_brown_CO.paa",
        "\A3_Atlas\Data_F_Atlas\Vehicles\Turret_brown_CO.paa"
    };
    class TransportWeapons
    {
        weap_xx(arifle_TRG21_black_F,2);
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_556x45_Stanag,16);
        mag_xx(Atlas_150Rnd_762x51_Box_Yellow,4);
        mag_xx(HandGrenade,10);
        mag_xx(1Rnd_HE_Grenade_shell,10);
        mag_xx(1Rnd_Smoke_Grenade_shell,4);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
        mag_xx(1Rnd_SmokeYellow_Grenade_shell,4);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
        mag_xx(9Rnd_45ACP_Mag,12);
        mag_xx(SmokeShell,4);
        mag_xx(SmokeShellGreen,4);
        mag_xx(SmokeShellYellow,4);
        mag_xx(SmokeShellOrange,4);
		mag_xx(MRAWS_HEAT_F,2);
    };
};
class Atlas_I_I_MRAP_01_hmg_F: MRAP_01_hmg_base_F
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
    editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_I_MRAP_01_hmg_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_A_CfgVehicles_I_I_MRAP_01_hmg_F0;
    side = TGuerrila;
    faction = Atlas_IND_I_F;
    crew = Atlas_I_I_Soldier_F;
    typicalCargo[] = {Atlas_I_I_Soldier_lite_F};
    textureList[] = {Brown,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Soft_F_Atlas\MRAP_01\Data\MRAP_01_base_brown_CO.paa",
        "\A3_Atlas\Soft_F_Atlas\MRAP_01\Data\MRAP_01_adds_brown_CO.paa",
        "\A3_Atlas\Data_F_Atlas\Vehicles\Turret_brown_CO.paa"
    };
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {mag_2(200Rnd_127x99_mag_Tracer_Yellow)};
		};
	};
    class TransportWeapons
    {
        weap_xx(arifle_TRG21_black_F,2);
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_556x45_Stanag,16);
        mag_xx(Atlas_150Rnd_762x51_Box_Yellow,4);
        mag_xx(HandGrenade,10);
        mag_xx(1Rnd_HE_Grenade_shell,10);
        mag_xx(1Rnd_Smoke_Grenade_shell,4);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
        mag_xx(1Rnd_SmokeYellow_Grenade_shell,4);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
        mag_xx(9Rnd_45ACP_Mag,12);
        mag_xx(SmokeShell,4);
        mag_xx(SmokeShellGreen,4);
        mag_xx(SmokeShellYellow,4);
        mag_xx(SmokeShellOrange,4);
		mag_xx(MRAWS_HEAT_F,2);
    };
};