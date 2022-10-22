/* Bundeswehr */
class Atlas_B_G_APC_Wheeled_03_cannon_F: I_APC_Wheeled_03_cannon_F
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
			{fuel,1},
			{indicatorspeed,0},
			{wheel_1_1,0},
			{wheel_2_1,0},
			{wheel_1_2,0},
			{wheel_1_3,0},
			{wheel_2_2,0},
			{wheel_2_3,0},
			{wheel_1_4,0},
			{wheel_2_4,0},
			{daylights,0},
			{wheel_1_1_damage,0},
			{wheel_1_2_damage,0},
			{wheel_1_3_damage,0},
			{wheel_1_4_damage,0},
			{wheel_2_1_damage,0},
			{wheel_2_2_damage,0},
			{wheel_2_3_damage,0},
			{wheel_2_4_damage,0},
			{wheel_1_1_damper_damage_backanim,0},
			{wheel_1_2_damper_damage_backanim,0},
			{wheel_1_3_damper_damage_backanim,0},
			{wheel_1_4_damper_damage_backanim,0},
			{wheel_2_1_damper_damage_backanim,0},
			{wheel_2_2_damper_damage_backanim,0},
			{wheel_2_3_damper_damage_backanim,0},
			{wheel_2_4_damper_damage_backanim,0},
			{wheel_1_1_damper,0.43},
			{wheel_2_1_damper,0.45},
			{wheel_1_2_damper,0.43},
			{wheel_1_3_damper,0.44},
			{wheel_2_2_damper,0.44},
			{wheel_2_3_damper,0.46},
			{wheel_1_4_damper,0.43},
			{wheel_2_4_damper,0.44},
			{steering_1_1,0},
			{steering_2_1,0},
			{steering_1_2,0},
			{steering_2_2,0},
			{hatchdriver,0},
			{mainturret,0},
			{maingun,0},
			{obsturret,0},
			{obsgun,0},
			{damagehlaven,0},
			{damagecamonet,0},
			{vrtulea,0},
			{vrtuleb,0},
			{poklop_commander,0},
			{zasleh_rot,215},
			{zasleh2_rot,49.53},
			{zasleh_hide,0},
			{reverse_light,0},
			{hidetitan_1,1},
			{hidetitan_2,1},
			{reloadtitan_1,0},
			{reloadtitan_2,0},
			{missile_move_1,1},
			{missile_move_2,0},
			{launcher_hatch_1_rot,0},
			{launcher_hatch_1_translate_1,0},
			{launcher_hatch_1_translate_2,0},
			{launcher_hatch_2_rot,0},
			{launcher_hatch_2_translate_1,0},
			{launcher_hatch_2_translate_2,0},
			{drivingwheel,0},
			{indicatortempoil,0},
			{indicatortempwater,0},
			{indicatorammeter,0},
			{indicatorspeed_mfd_driver,0},
			{indicatorrpm,0},
			{indicatorrpm_mfd_driver,0},
			{lights_driver,0},
			{lights_driver_off,0},
			{lights_turret,0},
			{cannon_ready_light,1},
			{engine_damage_indicator,0},
			{main_gun_damage_indicator,0},
			{pedal_thrust,0},
			{pedal_brake,1},
			{turret_control_x,0},
			{turret_control_y,0},
			{com_turret_control_x,0},
			{com_turret_control_y,0},
			{driver_reverse_cam,0},
			{driver_hide_mfd,0},
			{indicatortempwater_mfd_driver,0},
			{indicatorfuel_mfd_driver,1},
			{indicator_hull_direction_mfd_driver,0},
			{indicator_main_turret_mfd_driver,0},
			{indicator_com_turret_mfd_driver,0},
			{indicator_com_turret_counter_mfd_driver,0},
			{indicator_hull_direction_mfd_com,0},
			{indicator_main_turret_mfd_com,0},
			{indicator_main_turret_onscreen_com,0},
			{indicator_com_turret_mfd_com,0},
			{indicator_com_turret_onscreen_com,0},
			{indicator_com_turret_counter_mfd_com,0},
			{indicator_hull_direction_mfd_gunner,0},
			{indicator_main_turret_mfd_gunner,0},
			{indicator_com_turret_mfd_gunner,0},
			{indicator_com_turret_counter_mfd_gunner,0},
			{indicator_com_smoke_1,0},
			{indicator_com_smoke_2,0},
			{indicator_damage_engine,0},
			{indicator_damage_fuel,0},
			{indicator_damage_wheels,0},
			{indicator_turret_damage_hull,0},
			{indicator_turret_damage_engine,0},
			{indicator_turret_damage_fuel,0},
			{indicator_turret_damage_main_gun,0},
			{indicator_turret_damage_wheels,0},
			{indicator_turret_damage_turret,0},
			{indicator_turret_damage_com_turret,0},
			{unhide_pip_error_screen,1},
			{hide_mfd_elements,1},
			{slat_front_normal_hide,0},
			{slat_front_damage_unhide,0},
			{slat_front_damage_hide,0},
			{slat_front_destroyed_unhide,0},
			{slat_front_firegeo_hide,0},
			{slat_back_normal_hide,0},
			{slat_back_damage_unhide,0},
			{slat_back_damage_hide,0},
			{slat_back_destroyed_unhide,0},
			{slat_back_firegeo_hide,0},
			{slat_left_1_normal_hide,0},
			{slat_left_1_damage_unhide,0},
			{slat_left_1_damage_hide,0},
			{slat_left_1_destroyed_unhide,0},
			{slat_left_1_firegeo_hide,0},
			{slat_left_2_normal_hide,0},
			{slat_left_2_damage_unhide,0},
			{slat_left_2_damage_hide,0},
			{slat_left_2_destroyed_unhide,0},
			{slat_left_2_firegeo_hide,0},
			{slat_left_3_normal_hide,0},
			{slat_left_3_damage_unhide,0},
			{slat_left_3_damage_hide,0},
			{slat_left_3_destroyed_unhide,0},
			{slat_left_3_firegeo_hide,0},
			{slat_right_1_normal_hide,0},
			{slat_right_1_damage_unhide,0},
			{slat_right_1_damage_hide,0},
			{slat_right_1_destroyed_unhide,0},
			{slat_right_1_firegeo_hide,0},
			{slat_right_2_normal_hide,0},
			{slat_right_2_damage_unhide,0},
			{slat_right_2_damage_hide,0},
			{slat_right_2_destroyed_unhide,0},
			{slat_right_2_firegeo_hide,0},
			{slat_right_3_normal_hide,0},
			{slat_right_3_damage_unhide,0},
			{slat_right_3_damage_hide,0},
			{slat_right_3_destroyed_unhide,0},
			{slat_right_3_firegeo_hide,0}
		};
		hide[] =
		{
			clan,
			zasleh2,
			zasleh_1,
			light_l,
			light_r,
			"zadni svetlo",
			"brzdove svetlo",
			"podsvit pristroju",
			poskozeni
		};
		verticalOffset = 2.527;
		verticalOffsetWorld = -0.087;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_G_APC_Wheeled_03_cannon_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Atlas_BLU_G_F;
	crew = Atlas_B_G_Crew_F;
	typicalCargo[] = {Atlas_B_G_Soldier_F};
	textureList[] =
	{
		Olive_01,0,
		Woodland_01,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_wdl_CO.paa",
		"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_03\Data\APC_Wheeled_03_Ext2_wdl_CO.paa",
		"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_03\Data\RCWS30_wdl_CO.paa",
		"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_alpha_wdl_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
		"\A3\Armor_F\Data\cage_olive_CO.paa"
	};

    /* Turrets */
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
            /* Weapons & Ammunition */
			magazines[] =
			{
				mag_2(140Rnd_30mm_MP_shells_Tracer_Red),
				mag_2(60Rnd_30mm_APFSDS_shells_Tracer_Red),
				mag_10(200Rnd_762x51_Belt_Red),
				mag_2(2Rnd_GAT_missiles)
			};
		};
	};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,12);
		mag_xx(200Rnd_65x39_cased_box_Red,3);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,3);
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellGreen,8);
		mag_xx(SmokeShellOrange,8);
		mag_xx(SmokeShellBlue,8);
		mag_xx(MRAWS_HEAT_F,5);
		mag_xx(Titan_AT,2);
		mag_xx(Titan_AP,2);
		mag_xx(Titan_AA,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36_F,2);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_wdl_F,2);
	};
};


/* Bundeswehr (Arid) 
class Atlas_B_G_APC_Wheeled_03_cannon_ard_F: Atlas_B_G_APC_Wheeled_03_cannon_F
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
			{fuel,1},
			{indicatorspeed,0},
			{wheel_1_1,0},
			{wheel_2_1,0},
			{wheel_1_2,0},
			{wheel_1_3,0},
			{wheel_2_2,0},
			{wheel_2_3,0},
			{wheel_1_4,0},
			{wheel_2_4,0},
			{daylights,0},
			{wheel_1_1_damage,0},
			{wheel_1_2_damage,0},
			{wheel_1_3_damage,0},
			{wheel_1_4_damage,0},
			{wheel_2_1_damage,0},
			{wheel_2_2_damage,0},
			{wheel_2_3_damage,0},
			{wheel_2_4_damage,0},
			{wheel_1_1_damper_damage_backanim,0},
			{wheel_1_2_damper_damage_backanim,0},
			{wheel_1_3_damper_damage_backanim,0},
			{wheel_1_4_damper_damage_backanim,0},
			{wheel_2_1_damper_damage_backanim,0},
			{wheel_2_2_damper_damage_backanim,0},
			{wheel_2_3_damper_damage_backanim,0},
			{wheel_2_4_damper_damage_backanim,0},
			{wheel_1_1_damper,0.43},
			{wheel_2_1_damper,0.45},
			{wheel_1_2_damper,0.43},
			{wheel_1_3_damper,0.44},
			{wheel_2_2_damper,0.44},
			{wheel_2_3_damper,0.46},
			{wheel_1_4_damper,0.43},
			{wheel_2_4_damper,0.44},
			{steering_1_1,0},
			{steering_2_1,0},
			{steering_1_2,0},
			{steering_2_2,0},
			{hatchdriver,0},
			{mainturret,0},
			{maingun,0},
			{obsturret,0},
			{obsgun,0},
			{damagehlaven,0},
			{damagecamonet,0},
			{vrtulea,0},
			{vrtuleb,0},
			{poklop_commander,0},
			{zasleh_rot,215},
			{zasleh2_rot,49.53},
			{zasleh_hide,0},
			{reverse_light,0},
			{hidetitan_1,1},
			{hidetitan_2,1},
			{reloadtitan_1,0},
			{reloadtitan_2,0},
			{missile_move_1,1},
			{missile_move_2,0},
			{launcher_hatch_1_rot,0},
			{launcher_hatch_1_translate_1,0},
			{launcher_hatch_1_translate_2,0},
			{launcher_hatch_2_rot,0},
			{launcher_hatch_2_translate_1,0},
			{launcher_hatch_2_translate_2,0},
			{drivingwheel,0},
			{indicatortempoil,0},
			{indicatortempwater,0},
			{indicatorammeter,0},
			{indicatorspeed_mfd_driver,0},
			{indicatorrpm,0},
			{indicatorrpm_mfd_driver,0},
			{lights_driver,0},
			{lights_driver_off,0},
			{lights_turret,0},
			{cannon_ready_light,1},
			{engine_damage_indicator,0},
			{main_gun_damage_indicator,0},
			{pedal_thrust,0},
			{pedal_brake,1},
			{turret_control_x,0},
			{turret_control_y,0},
			{com_turret_control_x,0},
			{com_turret_control_y,0},
			{driver_reverse_cam,0},
			{driver_hide_mfd,0},
			{indicatortempwater_mfd_driver,0},
			{indicatorfuel_mfd_driver,1},
			{indicator_hull_direction_mfd_driver,0},
			{indicator_main_turret_mfd_driver,0},
			{indicator_com_turret_mfd_driver,0},
			{indicator_com_turret_counter_mfd_driver,0},
			{indicator_hull_direction_mfd_com,0},
			{indicator_main_turret_mfd_com,0},
			{indicator_main_turret_onscreen_com,0},
			{indicator_com_turret_mfd_com,0},
			{indicator_com_turret_onscreen_com,0},
			{indicator_com_turret_counter_mfd_com,0},
			{indicator_hull_direction_mfd_gunner,0},
			{indicator_main_turret_mfd_gunner,0},
			{indicator_com_turret_mfd_gunner,0},
			{indicator_com_turret_counter_mfd_gunner,0},
			{indicator_com_smoke_1,0},
			{indicator_com_smoke_2,0},
			{indicator_damage_engine,0},
			{indicator_damage_fuel,0},
			{indicator_damage_wheels,0},
			{indicator_turret_damage_hull,0},
			{indicator_turret_damage_engine,0},
			{indicator_turret_damage_fuel,0},
			{indicator_turret_damage_main_gun,0},
			{indicator_turret_damage_wheels,0},
			{indicator_turret_damage_turret,0},
			{indicator_turret_damage_com_turret,0},
			{unhide_pip_error_screen,1},
			{hide_mfd_elements,1},
			{slat_front_normal_hide,0},
			{slat_front_damage_unhide,0},
			{slat_front_damage_hide,0},
			{slat_front_destroyed_unhide,0},
			{slat_front_firegeo_hide,0},
			{slat_back_normal_hide,0},
			{slat_back_damage_unhide,0},
			{slat_back_damage_hide,0},
			{slat_back_destroyed_unhide,0},
			{slat_back_firegeo_hide,0},
			{slat_left_1_normal_hide,0},
			{slat_left_1_damage_unhide,0},
			{slat_left_1_damage_hide,0},
			{slat_left_1_destroyed_unhide,0},
			{slat_left_1_firegeo_hide,0},
			{slat_left_2_normal_hide,0},
			{slat_left_2_damage_unhide,0},
			{slat_left_2_damage_hide,0},
			{slat_left_2_destroyed_unhide,0},
			{slat_left_2_firegeo_hide,0},
			{slat_left_3_normal_hide,0},
			{slat_left_3_damage_unhide,0},
			{slat_left_3_damage_hide,0},
			{slat_left_3_destroyed_unhide,0},
			{slat_left_3_firegeo_hide,0},
			{slat_right_1_normal_hide,0},
			{slat_right_1_damage_unhide,0},
			{slat_right_1_damage_hide,0},
			{slat_right_1_destroyed_unhide,0},
			{slat_right_1_firegeo_hide,0},
			{slat_right_2_normal_hide,0},
			{slat_right_2_damage_unhide,0},
			{slat_right_2_damage_hide,0},
			{slat_right_2_destroyed_unhide,0},
			{slat_right_2_firegeo_hide,0},
			{slat_right_3_normal_hide,0},
			{slat_right_3_damage_unhide,0},
			{slat_right_3_damage_hide,0},
			{slat_right_3_destroyed_unhide,0},
			{slat_right_3_firegeo_hide,0}
		};
		hide[] =
		{
			clan,
			zasleh2,
			zasleh_1,
			light_l,
			light_r,
			"zadni svetlo",
			"brzdove svetlo",
			"podsvit pristroju",
			poskozeni
		};
		verticalOffset = 2.527;
		verticalOffsetWorld = -0.087;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_G_APC_Wheeled_03_cannon_ard_F.jpg";
	faction = Atlas_BLU_G_ard_F;
	crew = Atlas_B_G_Crew_ard_F;
	typicalCargo[] = {Atlas_B_G_Soldier_ard_F};
	textureList[] =
	{
		Sand_01,0,
		Desert_01,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_desert_CO.paa",
		"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_03\Data\APC_Wheeled_03_Ext2_desert_CO.paa",
		"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_03\Data\RCWS30_desert_CO.paa",
		"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_alpha_desert_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
		"\A3\Armor_F\Data\cage_sand_CO.paa"
	};

    /* Inventory 
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_mcamo,2);
	};
};
*/