/* IAF */
class O_Truck_02_covered_F: Truck_02_base_F
{
    hiddenSelections[] =
    {
        camo1,
        camo2,
        camo3,
        camo4
    };
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_OPFOR_CO.paa",
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
    };
};
class O_Truck_02_transport_F: Truck_02_transport_base_F
{
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_OPFOR_CO.paa",
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
    };
};
class O_Truck_02_box_F: Truck_02_box_base_F
{
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_repair_OPFOR_CO.paa",
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
    };
};
class O_Truck_02_medical_F: Truck_02_medical_base_F
{
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_OPFOR_CO.paa",
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
    };
};
class O_Truck_02_Ammo_F: Truck_02_Ammo_base_F
{
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_repair_OPFOR_CO.paa",
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
    };
};
class O_Truck_02_fuel_F: Truck_02_fuel_base_F
{
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_fuel_OPFOR_CO.paa",
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
    };
};
class O_Truck_02_MRL_F: Truck_02_MRL_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	mapSize = 9.18;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
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
            {wheel_1_4_damage,0},
            {wheel_2_4_damage,0},
            {wheel_1_4_damper_damage_backanim,0},
            {wheel_2_4_damper_damage_backanim,0},
            {glass1_destruct,0},
            {glass2_destruct,0},
            {glass3_destruct,0},
            {glass4_destruct,0},
            {glass5_destruct,0},
            {glass6_destruct,0},
            {wheel_1_1,0},
            {wheel_2_1,0},
            {wheel_1_2,0},
            {wheel_2_2,0},
            {daylights,0},
            {reverse_light,1},
            {pedal_thrust,0},
            {pedal_brake,0},
            {wheel_1_1_damage,0},
            {wheel_1_2_damage,0},
            {wheel_1_3_damage,0},
            {wheel_2_1_damage,0},
            {wheel_2_2_damage,0},
            {wheel_2_3_damage,0},
            {wheel_1_1_damper_damage_backanim,0},
            {wheel_1_2_damper_damage_backanim,0},
            {wheel_1_3_damper_damage_backanim,0},
            {wheel_2_1_damper_damage_backanim,0},
            {wheel_2_2_damper_damage_backanim,0},
            {wheel_2_3_damper_damage_backanim,0},
            {commander_turret,0},
            {commander_gun,0.2},
            {base,0},
            {tower,0.2},
            {tower_fake,0.2},
            {elevator,0.2},
            {elevator_2,0.2},
            {elevator_3,0.2},
            {elevator_piston,0.2},
            {turret_control_x,0},
            {turret_control_y,0},
            {launcher001_hide,1},
            {launcher001_unhide,1},
            {missile_move_001,1},
            {launcher002_hide,1},
            {launcher002_unhide,1},
            {missile_move_002,1},
            {launcher003_hide,1},
            {launcher003_unhide,1},
            {missile_move_003,1},
            {launcher004_hide,1},
            {launcher004_unhide,1},
            {missile_move_004,1},
            {launcher005_hide,1},
            {launcher005_unhide,1},
            {missile_move_005,1},
            {launcher006_hide,1},
            {launcher006_unhide,1},
            {missile_move_006,1},
            {launcher007_hide,1},
            {launcher007_unhide,1},
            {missile_move_007,1},
            {launcher008_hide,1},
            {launcher008_unhide,1},
            {missile_move_008,1},
            {launcher009_hide,1},
            {launcher009_unhide,1},
            {missile_move_009,1},
            {launcher010_hide,1},
            {launcher010_unhide,1},
            {missile_move_010,1},
            {launcher011_hide,1},
            {launcher011_unhide,1},
            {missile_move_011,1},
            {launcher012_hide,1},
            {launcher012_unhide,1},
            {missile_move_012,1},
            {wheel_1_3,0},
            {wheel_2_3,0},
            {wheel_1_1_damper,0},
            {wheel_2_1_damper,0},
            {wheel_1_2_damper,0},
            {wheel_2_2_damper,0},
            {wheel_1_3_damper,0},
            {wheel_2_3_damper,0},
            {damagehide,0},
            {damagehide_turret,0},
            {indicatorspeed,0},
            {indicatorrpm,0},
            {ventilate,0},
            {indicatoroiltemp,0},
            {fuel,1},
            {drivingwheel,0},
            {steering_1_1,0},
            {steering_2_1,0},
            {hide_mfd_and_pip_screen,1},
            {hide_mfd_elements,1}
        };
		hide[] =
		{
			clan,
			zasleh,
			light_l,
			light_r,
			"zadni svetlo",
			"brzdove svetlo",
			"podsvit pristroju",
			poskozeni
		};
		verticalOffset = 2.445;
		verticalOffsetWorld = -0.207;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Truck_02_MRL_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_I_Truck_02_MRL_F0;
	side = TEast;
	faction = OPF_F;
	crew = O_soldier_F;
	textureList[] = {Opfor,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
		"\A3\Soft_F_Gamma\Truck_02\Data\Truck_02_MRL_OPFOR_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
	};
};

/* China */
class O_T_Truck_02_F: Truck_02_base_F
{
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_ghex_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_ghex_CO.paa",
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa"
    };
};
class O_T_Truck_02_transport_F: Truck_02_transport_base_F
{
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_ghex_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_ghex_CO.paa",
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa"
    };
};
class O_T_Truck_02_Box_F: Truck_02_box_base_F
{
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_ghex_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_repair_ghex_CO.paa",
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa"
    };
};
class O_T_Truck_02_Medical_F: Truck_02_medical_base_F
{
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_ghex_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_ghex_CO.paa",
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa"
    };
};
class O_T_Truck_02_Ammo_F: Truck_02_ammo_base_F
{
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_ghex_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_repair_ghex_CO.paa",
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa"
    };
};
class O_T_Truck_02_fuel_F: Truck_02_fuel_base_F
{
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_ghex_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_fuel_ghex_CO.paa",
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa"
    };
};
class O_T_Truck_02_MRL_F: Truck_02_MRL_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	mapSize = 9.18;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
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
            {wheel_1_4_damage,0},
            {wheel_2_4_damage,0},
            {wheel_1_4_damper_damage_backanim,0},
            {wheel_2_4_damper_damage_backanim,0},
            {glass1_destruct,0},
            {glass2_destruct,0},
            {glass3_destruct,0},
            {glass4_destruct,0},
            {glass5_destruct,0},
            {glass6_destruct,0},
            {wheel_1_1,0},
            {wheel_2_1,0},
            {wheel_1_2,0},
            {wheel_2_2,0},
            {daylights,0},
            {reverse_light,1},
            {pedal_thrust,0},
            {pedal_brake,0},
            {wheel_1_1_damage,0},
            {wheel_1_2_damage,0},
            {wheel_1_3_damage,0},
            {wheel_2_1_damage,0},
            {wheel_2_2_damage,0},
            {wheel_2_3_damage,0},
            {wheel_1_1_damper_damage_backanim,0},
            {wheel_1_2_damper_damage_backanim,0},
            {wheel_1_3_damper_damage_backanim,0},
            {wheel_2_1_damper_damage_backanim,0},
            {wheel_2_2_damper_damage_backanim,0},
            {wheel_2_3_damper_damage_backanim,0},
            {commander_turret,0},
            {commander_gun,0.2},
            {base,0},
            {tower,0.2},
            {tower_fake,0.2},
            {elevator,0.2},
            {elevator_2,0.2},
            {elevator_3,0.2},
            {elevator_piston,0.2},
            {turret_control_x,0},
            {turret_control_y,0},
            {launcher001_hide,1},
            {launcher001_unhide,1},
            {missile_move_001,1},
            {launcher002_hide,1},
            {launcher002_unhide,1},
            {missile_move_002,1},
            {launcher003_hide,1},
            {launcher003_unhide,1},
            {missile_move_003,1},
            {launcher004_hide,1},
            {launcher004_unhide,1},
            {missile_move_004,1},
            {launcher005_hide,1},
            {launcher005_unhide,1},
            {missile_move_005,1},
            {launcher006_hide,1},
            {launcher006_unhide,1},
            {missile_move_006,1},
            {launcher007_hide,1},
            {launcher007_unhide,1},
            {missile_move_007,1},
            {launcher008_hide,1},
            {launcher008_unhide,1},
            {missile_move_008,1},
            {launcher009_hide,1},
            {launcher009_unhide,1},
            {missile_move_009,1},
            {launcher010_hide,1},
            {launcher010_unhide,1},
            {missile_move_010,1},
            {launcher011_hide,1},
            {launcher011_unhide,1},
            {missile_move_011,1},
            {launcher012_hide,1},
            {launcher012_unhide,1},
            {missile_move_012,1},
            {wheel_1_3,0},
            {wheel_2_3,0},
            {wheel_1_1_damper,0},
            {wheel_2_1_damper,0},
            {wheel_1_2_damper,0},
            {wheel_2_2_damper,0},
            {wheel_1_3_damper,0},
            {wheel_2_3_damper,0},
            {damagehide,0},
            {damagehide_turret,0},
            {indicatorspeed,0},
            {indicatorrpm,0},
            {ventilate,0},
            {indicatoroiltemp,0},
            {fuel,1},
            {drivingwheel,0},
            {steering_1_1,0},
            {steering_2_1,0},
            {hide_mfd_and_pip_screen,1},
            {hide_mfd_elements,1}
        };
		hide[] =
		{
			clan,
			zasleh,
			light_l,
			light_r,
			"zadni svetlo",
			"brzdove svetlo",
			"podsvit pristroju",
			poskozeni
		};
		verticalOffset = 2.445;
		verticalOffsetWorld = -0.207;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Truck_02_MRL_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_I_Truck_02_MRL_F0;
	side = TEast;
	faction = OPF_T_F;
	crew = O_T_Soldier_F;
	textureList[] = {GreenHex,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_ghex_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_MRL_ghex_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa"
	};
};

/* Argana */
class O_A_Truck_02_F: O_Truck_02_covered_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
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
			{wheel_1_4_damage,0},
			{wheel_2_4_damage,0},
			{wheel_1_4_damper_damage_backanim,0},
			{wheel_2_4_damper_damage_backanim,0},
			{glass1_destruct,0},
			{glass2_destruct,0},
			{glass3_destruct,0},
			{glass4_destruct,0},
			{glass5_destruct,0},
			{glass6_destruct,0},
			{wheel_1_1,0},
			{wheel_2_1,0},
			{wheel_1_2,0},
			{wheel_2_2,0},
			{daylights,0},
			{reverse_light,1},
			{pedal_thrust,0},
			{pedal_brake,0},
			{wheel_1_1_damage,0},
			{wheel_1_2_damage,0},
			{wheel_1_3_damage,0},
			{wheel_2_1_damage,0},
			{wheel_2_2_damage,0},
			{wheel_2_3_damage,0},
			{wheel_1_1_damper_damage_backanim,0},
			{wheel_1_2_damper_damage_backanim,0},
			{wheel_1_3_damper_damage_backanim,0},
			{wheel_2_1_damper_damage_backanim,0},
			{wheel_2_2_damper_damage_backanim,0},
			{wheel_2_3_damper_damage_backanim,0},
			{wheel_1_3,0},
			{wheel_2_3,0},
			{wheel_1_1_damper,0},
			{wheel_2_1_damper,0},
			{wheel_1_2_damper,0},
			{wheel_2_2_damper,0},
			{wheel_1_3_damper,0},
			{wheel_2_3_damper,0},
			{damagehide,0},
			{rear_damagehide,0},
			{rear_hide,0},
			{indicatorspeed,0},
			{indicatorrpm,0},
			{ventilate,0},
			{indicatoroiltemp,0},
			{fuel,1},
			{drivingwheel,0},
			{steering_1_1,0},
			{steering_2_1,0},
			{door_lf,0},
			{door_rf,0}
		};
		hide[] =
		{
			clan,
			zasleh,
			light_l,
			light_r,
			"zadni svetlo",
			"brzdove svetlo",
			"podsvit pristroju",
			poskozeni
		};
		verticalOffset = 2.179;
		verticalOffsetWorld = -0.202;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_Truck_02_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_A_F;
	crew = O_A_soldier_F;
	typicalCargo[] = {O_A_soldier_F};
	textureList[] = {Opfor,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_OPFOR_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
	};
};
class O_A_Truck_02_transport_F: O_Truck_02_transport_F
{
    author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
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
			{wheel_1_4_damage,0},
			{wheel_2_4_damage,0},
			{wheel_1_4_damper_damage_backanim,0},
			{wheel_2_4_damper_damage_backanim,0},
			{glass1_destruct,0},
			{glass2_destruct,0},
			{glass3_destruct,0},
			{glass4_destruct,0},
			{glass5_destruct,0},
			{glass6_destruct,0},
			{wheel_1_1,0},
			{wheel_2_1,0},
			{wheel_1_2,0},
			{wheel_2_2,0},
			{daylights,0},
			{reverse_light,1},
			{pedal_thrust,0},
			{pedal_brake,0},
			{wheel_1_1_damage,0},
			{wheel_1_2_damage,0},
			{wheel_1_3_damage,0},
			{wheel_2_1_damage,0},
			{wheel_2_2_damage,0},
			{wheel_2_3_damage,0},
			{wheel_1_1_damper_damage_backanim,0},
			{wheel_1_2_damper_damage_backanim,0},
			{wheel_1_3_damper_damage_backanim,0},
			{wheel_2_1_damper_damage_backanim,0},
			{wheel_2_2_damper_damage_backanim,0},
			{wheel_2_3_damper_damage_backanim,0},
			{wheel_1_3,0},
			{wheel_2_3,0},
			{wheel_1_1_damper,0},
			{wheel_2_1_damper,0},
			{wheel_1_2_damper,0},
			{wheel_2_2_damper,0},
			{wheel_1_3_damper,0},
			{wheel_2_3_damper,0},
			{damagehide,0},
			{rear_damagehide,0},
			{rear_hide,0},
			{indicatorspeed,0},
			{indicatorrpm,0},
			{ventilate,0},
			{indicatoroiltemp,0},
			{fuel,1},
			{drivingwheel,0},
			{steering_1_1,0},
			{steering_2_1,0},
			{door_lf,0},
			{door_rf,0}
		};
		hide[] =
		{
			clan,
			zasleh,
			light_l,
			light_r,
			"zadni svetlo",
			"brzdove svetlo",
			"podsvit pristroju",
			poskozeni
		};
		verticalOffset = 2.179;
		verticalOffsetWorld = -0.202;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_Truck_02_transport_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TEast;
    faction = OPF_A_F;
    crew = O_A_soldier_F;
    typicalCargo[] = {O_A_soldier_F};
    textureList[] = {Opfor,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_OPFOR_CO.paa",
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
    };
};
class O_A_Truck_02_box_F: O_Truck_02_box_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
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
			{wheel_1_4_damage,0},
			{wheel_2_4_damage,0},
			{wheel_1_4_damper_damage_backanim,0},
			{wheel_2_4_damper_damage_backanim,0},
			{glass1_destruct,0},
			{glass2_destruct,0},
			{glass3_destruct,0},
			{glass4_destruct,0},
			{glass5_destruct,0},
			{glass6_destruct,0},
			{wheel_1_1,0},
			{wheel_2_1,0},
			{wheel_1_2,0},
			{wheel_2_2,0},
			{daylights,0},
			{reverse_light,1},
			{pedal_thrust,0},
			{pedal_brake,0},
			{wheel_1_1_damage,0},
			{wheel_1_2_damage,0},
			{wheel_1_3_damage,0},
			{wheel_2_1_damage,0},
			{wheel_2_2_damage,0},
			{wheel_2_3_damage,0},
			{wheel_1_1_damper_damage_backanim,0},
			{wheel_1_2_damper_damage_backanim,0},
			{wheel_1_3_damper_damage_backanim,0},
			{wheel_2_1_damper_damage_backanim,0},
			{wheel_2_2_damper_damage_backanim,0},
			{wheel_2_3_damper_damage_backanim,0},
			{wheel_1_3,0},
			{wheel_2_3,0},
			{wheel_1_1_damper,0},
			{wheel_2_1_damper,0},
			{wheel_1_2_damper,0},
			{wheel_2_2_damper,0},
			{wheel_1_3_damper,0},
			{wheel_2_3_damper,0},
			{damagehide,0},
			{rear_damagehide,0},
			{rear_hide,0},
			{indicatorspeed,0},
			{indicatorrpm,0},
			{ventilate,0},
			{indicatoroiltemp,0},
			{fuel,1},
			{drivingwheel,0},
			{steering_1_1,0},
			{steering_2_1,0},
			{door_lf,0},
			{door_rf,0}
		};
		hide[] =
		{
			clan,
			zasleh,
			light_l,
			light_r,
			"zadni svetlo",
			"brzdove svetlo",
			"podsvit pristroju",
			poskozeni
		};
		verticalOffset = 2.179;
		verticalOffsetWorld = -0.202;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_Truck_02_box_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_A_F;
	crew = O_A_soldier_F;
	typicalCargo[] = {O_A_soldier_F};
	textureList[] = {Opfor,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_repair_OPFOR_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
	};
};
class O_A_Truck_02_medical_F: O_Truck_02_medical_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
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
			{wheel_1_4_damage,0},
			{wheel_2_4_damage,0},
			{wheel_1_4_damper_damage_backanim,0},
			{wheel_2_4_damper_damage_backanim,0},
			{glass1_destruct,0},
			{glass2_destruct,0},
			{glass3_destruct,0},
			{glass4_destruct,0},
			{glass5_destruct,0},
			{glass6_destruct,0},
			{wheel_1_1,0},
			{wheel_2_1,0},
			{wheel_1_2,0},
			{wheel_2_2,0},
			{daylights,0},
			{reverse_light,1},
			{pedal_thrust,0},
			{pedal_brake,0},
			{wheel_1_1_damage,0},
			{wheel_1_2_damage,0},
			{wheel_1_3_damage,0},
			{wheel_2_1_damage,0},
			{wheel_2_2_damage,0},
			{wheel_2_3_damage,0},
			{wheel_1_1_damper_damage_backanim,0},
			{wheel_1_2_damper_damage_backanim,0},
			{wheel_1_3_damper_damage_backanim,0},
			{wheel_2_1_damper_damage_backanim,0},
			{wheel_2_2_damper_damage_backanim,0},
			{wheel_2_3_damper_damage_backanim,0},
			{wheel_1_3,0},
			{wheel_2_3,0},
			{wheel_1_1_damper,0},
			{wheel_2_1_damper,0},
			{wheel_1_2_damper,0},
			{wheel_2_2_damper,0},
			{wheel_1_3_damper,0},
			{wheel_2_3_damper,0},
			{damagehide,0},
			{rear_damagehide,0},
			{rear_hide,0},
			{indicatorspeed,0},
			{indicatorrpm,0},
			{ventilate,0},
			{indicatoroiltemp,0},
			{fuel,1},
			{drivingwheel,0},
			{steering_1_1,0},
			{steering_2_1,0},
			{door_lf,0},
			{door_rf,0}
		};
		hide[] =
		{
			clan,
			zasleh,
			light_l,
			light_r,
			"zadni svetlo",
			"brzdove svetlo",
			"podsvit pristroju",
			poskozeni
		};
		verticalOffset = 2.179;
		verticalOffsetWorld = -0.202;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_Truck_02_medical_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_A_F;
	crew = O_A_soldier_F;
	typicalCargo[] = {O_A_soldier_F};
	textureList[] = {Opfor,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_OPFOR_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
	};
};
class O_A_Truck_02_Ammo_F: O_Truck_02_Ammo_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
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
			{wheel_1_4_damage,0},
			{wheel_2_4_damage,0},
			{wheel_1_4_damper_damage_backanim,0},
			{wheel_2_4_damper_damage_backanim,0},
			{glass1_destruct,0},
			{glass2_destruct,0},
			{glass3_destruct,0},
			{glass4_destruct,0},
			{glass5_destruct,0},
			{glass6_destruct,0},
			{wheel_1_1,0},
			{wheel_2_1,0},
			{wheel_1_2,0},
			{wheel_2_2,0},
			{daylights,0},
			{reverse_light,1},
			{pedal_thrust,0},
			{pedal_brake,0},
			{wheel_1_1_damage,0},
			{wheel_1_2_damage,0},
			{wheel_1_3_damage,0},
			{wheel_2_1_damage,0},
			{wheel_2_2_damage,0},
			{wheel_2_3_damage,0},
			{wheel_1_1_damper_damage_backanim,0},
			{wheel_1_2_damper_damage_backanim,0},
			{wheel_1_3_damper_damage_backanim,0},
			{wheel_2_1_damper_damage_backanim,0},
			{wheel_2_2_damper_damage_backanim,0},
			{wheel_2_3_damper_damage_backanim,0},
			{wheel_1_3,0},
			{wheel_2_3,0},
			{wheel_1_1_damper,0},
			{wheel_2_1_damper,0},
			{wheel_1_2_damper,0},
			{wheel_2_2_damper,0},
			{wheel_1_3_damper,0},
			{wheel_2_3_damper,0},
			{damagehide,0},
			{rear_damagehide,0},
			{rear_hide,0},
			{indicatorspeed,0},
			{indicatorrpm,0},
			{ventilate,0},
			{indicatoroiltemp,0},
			{fuel,1},
			{drivingwheel,0},
			{steering_1_1,0},
			{steering_2_1,0},
			{door_lf,0},
			{door_rf,0}
		};
		hide[] =
		{
			clan,
			zasleh,
			light_l,
			light_r,
			"zadni svetlo",
			"brzdove svetlo",
			"podsvit pristroju",
			poskozeni
		};
		verticalOffset = 2.179;
		verticalOffsetWorld = -0.202;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_Truck_02_Ammo_F.jpg";
	scope = public;
	scopeCurator = public;
	scopeArsenal = private;
	forceInGarage = false;
	side = TEast;
	faction = OPF_A_F;
	crew = O_A_soldier_F;
	typicalCargo[] = {O_A_soldier_F};
	textureList[] = {Opfor,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_repair_OPFOR_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
	};
};
class O_A_Truck_02_fuel_F: O_Truck_02_fuel_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
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
			{wheel_1_4_damage,0},
			{wheel_2_4_damage,0},
			{wheel_1_4_damper_damage_backanim,0},
			{wheel_2_4_damper_damage_backanim,0},
			{glass1_destruct,0},
			{glass2_destruct,0},
			{glass3_destruct,0},
			{glass4_destruct,0},
			{glass5_destruct,0},
			{glass6_destruct,0},
			{wheel_1_1,0},
			{wheel_2_1,0},
			{wheel_1_2,0},
			{wheel_2_2,0},
			{daylights,0},
			{reverse_light,1},
			{pedal_thrust,0},
			{pedal_brake,0},
			{wheel_1_1_damage,0},
			{wheel_1_2_damage,0},
			{wheel_1_3_damage,0},
			{wheel_2_1_damage,0},
			{wheel_2_2_damage,0},
			{wheel_2_3_damage,0},
			{wheel_1_1_damper_damage_backanim,0},
			{wheel_1_2_damper_damage_backanim,0},
			{wheel_1_3_damper_damage_backanim,0},
			{wheel_2_1_damper_damage_backanim,0},
			{wheel_2_2_damper_damage_backanim,0},
			{wheel_2_3_damper_damage_backanim,0},
			{wheel_1_3,0},
			{wheel_2_3,0},
			{wheel_1_1_damper,0},
			{wheel_2_1_damper,0},
			{wheel_1_2_damper,0},
			{wheel_2_2_damper,0},
			{wheel_1_3_damper,0},
			{wheel_2_3_damper,0},
			{damagehide,0},
			{rear_damagehide,0},
			{rear_hide,0},
			{indicatorspeed,0},
			{indicatorrpm,0},
			{ventilate,0},
			{indicatoroiltemp,0},
			{fuel,1},
			{drivingwheel,0},
			{steering_1_1,0},
			{steering_2_1,0},
			{door_lf,0},
			{door_rf,0}
		};
		hide[] =
		{
			clan,
			zasleh,
			light_l,
			light_r,
			"zadni svetlo",
			"brzdove svetlo",
			"podsvit pristroju",
			poskozeni
		};
		verticalOffset = 2.179;
		verticalOffsetWorld = -0.202;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_Truck_02_fuel_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_A_F;
	crew = O_A_soldier_F;
	typicalCargo[] = {O_A_soldier_F};
	textureList[] = {Opfor,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_fuel_OPFOR_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
	};
};