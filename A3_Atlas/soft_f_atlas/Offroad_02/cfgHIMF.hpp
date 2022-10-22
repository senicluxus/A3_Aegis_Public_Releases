class Atlas_B_H_Offroad_02_unarmed_F: Offroad_02_unarmed_base_F
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
            {drivingwheel,0},
            {wheel_1_1,0},
            {wheel_2_1,0},
            {wheel_1_2,0},
            {wheel_2_2,0},
            {daylights,0},
            {reverse_light,1},
            {pedal_thrust,0},
            {wheel_1_1_damage,0},
            {wheel_1_2_damage,0},
            {wheel_2_1_damage,0},
            {wheel_2_2_damage,0},
            {wheel_1_1_damper_damage_backanim,0},
            {wheel_1_2_damper_damage_backanim,0},
            {wheel_2_1_damper_damage_backanim,0},
            {wheel_2_2_damper_damage_backanim,0},
            {wheel_1_1_damper,0},
            {wheel_2_1_damper,0},
            {wheel_1_2_damper,0},
            {wheel_2_2_damper,0},
            {steeringwheel,0},
            {steering_1_1,0},
            {steering_2_1,0},
            {indicatorspeed,0},
            {indicatorspeed_on,0},
            {indicatorrpm,0},
            {indicatorrpm_on,0},
            {fuel,1},
            {fuel_on,1},
            {temperature,0},
            {temperature_on,0},
            {door_1,0},
            {door_2,0},
            {door_3,0},
            {gear_r,1},
            {gear_stick,1},
            {gear_d,1},
            {damagehideglass1,0},
            {damagehidedoor1,0},
            {damagehidedoor2,0},
            {damagehideseats_front,0},
            {damagehideseats_rear,0},
            {damagehidefuel,0},
            {damagehidemph,0},
            {damagehiderpm,0},
            {damagehidetmp,0},
            {damagehidepodsvit,0}
        };
		hide[] =
        {
            clan,
            zasleh,
            light_1_hide,
            light_2_hide,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 1.479;
		verticalOffsetWorld = -0.09;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_H_Offroad_02_unarmed_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Atlas_BLU_H_F;
	crew = Atlas_B_H_Soldier_F;
	typicalCargo[] = {Atlas_B_H_Soldier_F};
	textureList[] = {Jungle,1};
	hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Soft_F_Atlas\Offroad_02\Data\Offroad_02_ext_jungle_CO.paa",
        "\A3_Atlas\Soft_F_Atlas\Offroad_02\Data\Offroad_02_ext_jungle_CO.paa",
        "\A3_Atlas\Soft_F_Atlas\Offroad_02\Data\Offroad_02_int_jungle_CO.paa",
        "\A3_Atlas\Soft_F_Atlas\Offroad_02\Data\Offroad_02_int_jungle_CO.paa"
    };
	hiddenSelectionsMaterials[] =
    {
        "\A3\Soft_F_Exp\Offroad_02\Data\Offroad_02_ext_2_metal.rvmat",
        "\A3\Soft_F_Exp\Offroad_02\Data\Offroad_02_ext_chrome.rvmat",
        "\A3\Soft_F_Exp\Offroad_02\Data\Offroad_02_int_metal.rvmat",
        "\A3\Soft_F_Exp\Offroad_02\Data\Offroad_02_int_chrome.rvmat"
    };
    animationList[] =
    {
        hideLeftDoor,0,
        hideRightDoor,0,
        hideRearDoor,0,
        hideBullbar,0,
        hideFenders,1,
        hideHeadSupportFront,1,
        hideHeadSupportRear,1,
        hideRollcage,0,
        hideSeatsRear,0,
        hideSpareWheel,0
    };
	class TransportMagazines
	{
		mag_xx(SmokeShell,4);
		mag_xx(HandGrenade,4);
		mag_xx(30Rnd_65x39_caseless_msbs_mag,8);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36C_F,2);
	};
};
class Atlas_B_H_Offroad_02_LMG_F: Offroad_02_LMG_base_F
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
            {drivingwheel,0},
            {wheel_1_1,0},
            {wheel_2_1,0},
            {wheel_1_2,0},
            {wheel_2_2,0},
            {daylights,0},
            {reverse_light,1},
            {pedal_thrust,0},
            {wheel_1_1_damage,0},
            {wheel_1_2_damage,0},
            {wheel_2_1_damage,0},
            {wheel_2_2_damage,0},
            {wheel_1_1_damper_damage_backanim,0},
            {wheel_1_2_damper_damage_backanim,0},
            {wheel_2_1_damper_damage_backanim,0},
            {wheel_2_2_damper_damage_backanim,0},
            {wheel_1_1_damper,0},
            {wheel_2_1_damper,0},
            {wheel_1_2_damper,0},
            {wheel_2_2_damper,0},
            {steeringwheel,0},
            {steering_1_1,0},
            {steering_2_1,0},
            {indicatorspeed,0},
            {indicatorspeed_on,0},
            {indicatorrpm,0},
            {indicatorrpm_on,0},
            {fuel,1},
            {fuel_on,1},
            {temperature,0},
            {temperature_on,0},
            {door_1,0},
            {door_2,0},
            {door_3,0},
            {gear_r,1},
            {gear_stick,1},
            {gear_d,1},
            {damagehideglass1,0},
            {damagehidedoor1,0},
            {damagehidedoor2,0},
            {damagehideseats_front,0},
            {damagehideseats_rear,0},
            {damagehidefuel,0},
            {damagehidemph,0},
            {damagehiderpm,0},
            {damagehidetmp,0},
            {damagehidepodsvit,0},
            {mainturret,0},
            {maingun,0},
            {bullet001_reload_rot,0},
            {bullet001_reload_move,0},
            {bullet001_revolving_hide,1},
            {bullet002_reload_rot,0},
            {bullet002_reload_move,0},
            {bullet002_revolving_hide,1},
            {bullet003_reload_rot,0},
            {bullet003_reload_move,0},
            {bullet003_revolving_hide,1},
            {bullet004_reload_rot,0},
            {bullet004_reload_move,0},
            {bullet004_revolving_hide,1},
            {bullet005_reload_rot,0},
            {bullet005_reload_move,0},
            {bullet005_revolving_hide,1},
            {bullet006_reload_rot,0},
            {bullet006_reload_move,0},
            {bullet006_revolving_hide,1},
            {bullet007_reload_rot,0},
            {bullet007_reload_move,0},
            {bullet007_revolving_hide,1},
            {bullet008_reload_rot,0},
            {bullet008_reload_move,0},
            {bullet008_revolving_hide,1},
            {bullet009_reload_rot,0},
            {bullet009_reload_move,0},
            {bullet009_revolving_hide,1},
            {bullet010_reload_rot,0},
            {bullet010_reload_move,0},
            {bullet010_revolving_hide,1},
            {bullet011_reload_rot,0},
            {bullet011_reload_move,0},
            {bullet011_revolving_hide,1},
            {bullet002_virtual_magazine_reload_rot_1,0},
            {bullet002_virtual_magazine_reload_rot_2,0},
            {bullet003_virtual_magazine_reload_rot_1,0},
            {bullet003_virtual_magazine_reload_rot_2,0},
            {bullet004_virtual_magazine_reload_rot_1,0},
            {bullet004_virtual_magazine_reload_rot_2,0},
            {bullet005_virtual_magazine_reload_rot_1,0},
            {bullet005_virtual_magazine_reload_rot_2,0},
            {bullet006_virtual_magazine_reload_rot_1,0},
            {bullet006_virtual_magazine_reload_rot_2,0},
            {bullet007_virtual_magazine_reload_rot_1,0},
            {bullet007_virtual_magazine_reload_rot_2,0},
            {bullet008_virtual_magazine_reload_rot_1,0},
            {bullet008_virtual_magazine_reload_rot_2,0},
            {bullet009_virtual_magazine_reload_rot_1,0},
            {bullet009_virtual_magazine_reload_rot_2,0},
            {bullet010_virtual_magazine_reload_rot_1,0},
            {bullet010_virtual_magazine_reload_rot_2,0},
            {bullet011_virtual_magazine_reload_rot_1,0},
            {bullet011_virtual_magazine_reload_rot_2,0},
            {bolt_reload_move,0},
            {bolt_reload_move_back,0},
            {magazine_reload_hide,0},
            {magazine_reload_move_1,0},
            {magazine_reload_move_2,0},
            {magazine_reload_move_c,0},
            {magazine_reload_move_3,0},
            {magazine_reload_move_4,0},
            {magazine_reload_move_5,0},
            {magazine_reload_move_c2,0},
            {magazine_reload_move_6,0},
            {feedtray_cover_up,0},
            {feedtray_cover_up_2,0},
            {feedtray_cover_down,0},
            {feedtray_cover_down_2,0},
            {zasleh_rot,2647.11},
            {zasleh_hide,0},
            {turret_shake,0},
            {turret_shake_back,0},
            {maingunner,0},
            {leg_l_rot_fix,0},
            {leg_r_rot_fix,0},
            {gunnerviewsync,0}
        };
		hide[] =
        {
            clan,
            zasleh,
            light_1_hide,
            light_2_hide,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.045;
		verticalOffsetWorld = -0.137;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_H_Offroad_02_LMG_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_I_C_Offroad_02_LMG_F0;
	side = TWest;
	faction = Atlas_BLU_H_F;
	crew = Atlas_B_H_Soldier_F;
	typicalCargo[] = {Atlas_B_H_Soldier_F};
	textureList[] = {Jungle,1};
	hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Soft_F_Atlas\Offroad_02\Data\Offroad_02_ext_jungle_CO.paa",
        "\A3_Atlas\Soft_F_Atlas\Offroad_02\Data\Offroad_02_ext_jungle_CO.paa",
        "\A3_Atlas\Soft_F_Atlas\Offroad_02\Data\Offroad_02_int_jungle_CO.paa",
        "\A3_Atlas\Soft_F_Atlas\Offroad_02\Data\Offroad_02_int_jungle_CO.paa"
    };
	hiddenSelectionsMaterials[] =
    {
        "\A3\Soft_F_Exp\Offroad_02\Data\Offroad_02_ext_2_metal.rvmat",
        "\A3\Soft_F_Exp\Offroad_02\Data\Offroad_02_ext_chrome.rvmat",
        "\A3\Soft_F_Exp\Offroad_02\Data\Offroad_02_int_metal.rvmat",
        "\A3\Soft_F_Exp\Offroad_02\Data\Offroad_02_int_chrome.rvmat"
    };
    animationList[] =
    {
        hideLeftDoor,0,
        hideRightDoor,0,
        hideRearDoor,0,
        hideBullbar,0,
        hideFenders,1,
        hideHeadSupportFront,1,
        hideHeadSupportRear,1,
        hideRollcage,0,
        hideSpareWheel,0,
        hideSeatsRear,0
    };
	class TransportMagazines
	{
		mag_xx(SmokeShell,4);
		mag_xx(HandGrenade,4);
		mag_xx(30Rnd_65x39_caseless_msbs_mag,8);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36C_F,2);
	};
	class Turrets: Turrets
	{
		class LMG_Turret: LMG_Turret
		{
			magazines[] = {mag_3(200Rnd_556x45_Box_Tracer_Red_F)};
		};
		class CargoTurret_01: CargoTurret_01{};
	};
};
class Atlas_B_H_Offroad_02_AT_F: Offroad_02_AT_base_F
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
            {drivingwheel,0},
            {wheel_1_1,0},
            {wheel_2_1,0},
            {wheel_1_2,0},
            {wheel_2_2,0},
            {daylights,0},
            {reverse_light,1},
            {pedal_thrust,0},
            {wheel_1_1_damage,0},
            {wheel_1_2_damage,0},
            {wheel_2_1_damage,0},
            {wheel_2_2_damage,0},
            {wheel_1_1_damper_damage_backanim,0},
            {wheel_1_2_damper_damage_backanim,0},
            {wheel_2_1_damper_damage_backanim,0},
            {wheel_2_2_damper_damage_backanim,0},
            {wheel_1_1_damper,0},
            {wheel_2_1_damper,0},
            {wheel_1_2_damper,0},
            {wheel_2_2_damper,0},
            {steeringwheel,0},
            {steering_1_1,0},
            {steering_2_1,0},
            {indicatorspeed,0},
            {indicatorspeed_on,0},
            {indicatorrpm,0},
            {indicatorrpm_on,0},
            {fuel,1},
            {fuel_on,1},
            {temperature,0},
            {temperature_on,0},
            {door_1,0},
            {door_2,0},
            {door_3,0},
            {gear_r,1},
            {gear_stick,1},
            {gear_d,1},
            {damagehideglass1,0},
            {damagehidedoor1,0},
            {damagehidedoor2,0},
            {damagehideseats_front,0},
            {damagehideseats_rear,0},
            {damagehidefuel,0},
            {damagehidemph,0},
            {damagehiderpm,0},
            {damagehidetmp,0},
            {damagehidepodsvit,0},
            {magazine_reload_hide,0},
            {magazine_reload_move_1,0},
            {magazine_reload_move_2,0},
            {magazine_reload_move_c,0},
            {magazine_reload_move_3,0},
            {magazine_reload_move_4,0},
            {magazine_reload_move_5,0},
            {magazine_reload_move_c2,0},
            {magazine_reload_move_6,0},
            {turret_shake,0},
            {turret_shake_back,0},
            {mainturret,0},
            {maingun,0},
            {opticsfix,0},
            {elevation_rod_rot,0},
            {breech_reload_move_1,0},
            {breech_reload_move_2,0},
            {breech_handle_reload_move_1,0},
            {breech_handle_reload_move_2,0},
            {magazine_reload_1,0},
            {alt_breech_reload_move_1,0},
            {alt_breech_reload_move_2,0},
            {alt_breech_handle_reload_move_1,0},
            {alt_breech_handle_reload_move_2,0},
            {alt_magazine_reload_1,0}
        };
		hide[] =
        {
            clan,
            zasleh,
            light_1_hide,
            light_2_hide,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 1.481;
		verticalOffsetWorld = -0.089;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_H_Offroad_02_AT_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_I_C_Offroad_02_AT_F0;
	side = TWest;
	faction = Atlas_BLU_H_F;
	crew = Atlas_B_H_Soldier_F;
	typicalCargo[] = {Atlas_B_H_Soldier_F};
	textureList[] = {Jungle,1};
	hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Soft_F_Atlas\Offroad_02\Data\Offroad_02_ext_jungle_CO.paa",
        "\A3_Atlas\Soft_F_Atlas\Offroad_02\Data\Offroad_02_ext_jungle_CO.paa",
        "\A3_Atlas\Soft_F_Atlas\Offroad_02\Data\Offroad_02_int_jungle_CO.paa",
        "\A3_Atlas\Soft_F_Atlas\Offroad_02\Data\Offroad_02_int_jungle_CO.paa"
    };
	hiddenSelectionsMaterials[] =
    {
        "\A3\Soft_F_Exp\Offroad_02\Data\Offroad_02_ext_2_metal.rvmat",
        "\A3\Soft_F_Exp\Offroad_02\Data\Offroad_02_ext_chrome.rvmat",
        "\A3\Soft_F_Exp\Offroad_02\Data\Offroad_02_int_metal.rvmat",
        "\A3\Soft_F_Exp\Offroad_02\Data\Offroad_02_int_chrome.rvmat"
    };
    animationList[] =
    {
        hideLeftDoor,0,
        hideRightDoor,0,
        hideRearDoor,0,
        hideBullbar,0,
        hideFenders,1,
        hideHeadSupportFront,1,
        hideHeadSupportRear,1,
        hideRollcage,0,
        hideSpareWheel,0,
        hideSeatsRear,0
    };
	class TransportMagazines
	{
		mag_xx(SmokeShell,4);
		mag_xx(HandGrenade,4);
		mag_xx(30Rnd_65x39_caseless_msbs_mag,8);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36C_F,2);
	};
};