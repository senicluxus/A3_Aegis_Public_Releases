/* US */
class B_APC_Wheeled_01_base_F: APC_Wheeled_01_base_F{};
class B_APC_Wheeled_01_medical_F: B_APC_Wheeled_01_base_F
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
            {wheel_1_1_damper,0.48},
            {wheel_2_1_damper,0.48},
            {wheel_1_2_damper,0.5},
            {wheel_1_3_damper,0.52},
            {wheel_2_2_damper,0.49},
            {wheel_2_3_damper,0.52},
            {wheel_1_4_damper,0.53},
            {wheel_2_4_damper,0.53},
            {steering_1_1,0},
            {steering_2_1,0},
            {steering_1_2,0},
            {steering_2_2,0},
            {hatchdriver,0},
            {mainturret,0},
            {turretbase,0},
            {maingun,0},
            {obsturret,0},
            {obsgun,0},
            {damagehlaven,0},
            {damagecamonet,0},
            {vrtulea,0},
            {vrtuleb,0},
            {poklop_gunner,0},
            {poklop_commander,0},
            {zasleh_rot,307},
            {zasleh2_rot,589.52},
            {zasleh_hide,0},
            {reverse_light,0},
            {drivingwheel,0},
            {indicatortempoil,0},
            {indicatortempwater,0},
            {indicatorammeter,0},
            {indicatorammeter_turret,0},
            {indicatorspeed_mfd_driver,0},
            {indicatorrpm,0},
            {indicatorrpm_mfd_driver,0},
            {lights_driver,0},
            {lights_driver_off,0},
            {lights_turret,0},
            {lights_turret_off,0},
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
            {driver_reverse_cam_nopip,0},
            {driver_hide_mfd,0},
            {indicatortempwater_mfd_driver,0},
            {indicatorfuel_mfd_driver,1},
            {indicator_hull_direction_mfd_driver,0},
            {indicator_main_turret_mfd_driver,0},
            {indicator_com_turret_mfd_driver,0},
            {indicator_com_turret_counter_mfd_driver,0},
            {indicator_main_turret_mfd_com,0},
            {indicator_main_turret_onscreen_com,0},
            {indicator_com_turret_mfd_com,0},
            {indicator_com_turret_onscreen_com,0},
            {indicator_com_turret_counter_mfd_com,0},
            {indicator_hull_direction_mfd_gunner,0},
            {indicator_main_turret_mfd_gunner,0},
            {indicator_com_turret_mfd_gunner,0},
            {indicator_com_turret_counter_mfd_gunner,0},
            {indicator_damage_engine,0},
            {indicator_damage_fuel,0},
            {indicator_damage_wheels,0},
            {indicator_turret_damage_hull,0},
            {indicator_turret_damage_engine,0},
            {indicator_turret_damage_fuel,0},
            {indicator_turret_damage_main_gun,0},
            {indicator_turret_damage_wheels,0},
            {indicator_turret_damage_turret,0},
            {hide_mfd_and_pip_screen_driver,1},
            {hide_mfd_and_pip_screen_gunner,1},
            {hide_mfd_elements,1},
            {showbags_damage,0},
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
            {slat_right_3_firegeo_hide,0},
            {slat_top_back_normal_hide,0},
            {slat_top_back_damage_unhide,0},
            {slat_top_back_damage_hide,0},
            {slat_top_back_destroyed_unhide,0},
            {slat_top_back_firegeo_hide,0},
            {slat_top_right_normal_hide,0},
            {slat_top_right_damage_unhide,0},
            {slat_top_right_damage_hide,0},
            {slat_top_right_destroyed_unhide,0},
            {slat_top_right_firegeo_hide,0},
            {slat_top_left_normal_hide,0},
            {slat_top_left_damage_unhide,0},
            {slat_top_left_damage_hide,0},
            {slat_top_left_destroyed_unhide,0},
            {slat_top_left_firegeo_hide,0}
		};
		hide[] =
		{
            clan,
            zasleh2,
            zasleh_1,
            light_l,
            light_r,
            light_r2,
            light_l2,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 2.448;
		verticalOffsetWorld = -0.091;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_APC_Wheeled_01_medical_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_B_APC_Wheeled_01_medical_F0;
	model = "\A3\Armor_F_Beta\APC_Wheeled_01\APC_Wheeled_01_cannon_F.p3d";
	picture = "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_01\Data\UI\APC_Wheeled_01_medevac_CA.paa";
	Icon = "\A3\Armor_F_Beta\APC_Wheeled_01\Data\UI\Map_AMW_medevac_CA.paa";
	weapons[] = {TruckHorn};
	attendant = true;
	threat[] = {0,0,0};
	class Turrets{};
	class AnimationSources
	{
		class HideTurret
		{
			source = user;
			initPhase = true;
			animPeriod = 0.001;
		};
		class HitEngine_src
		{
			source = Hit;
			hitpoint = HitEngine;
			raw = true;
		};
		class HitFuel_src
		{
			source = Hit;
			hitpoint = HitFuel;
			raw = true;
		};
		class HitHull_src
		{
			source = Hit;
			hitpoint = HitHull;
			raw = true;
		};
		class HitMainGun_src
		{
			source = Hit;
			hitpoint = HitGun;
			raw = true;
		};
		class HitTurret_src
		{
			source = Hit;
			hitpoint = HitTurret;
			raw = true;
		};
		class HitComTurret_src
		{
			source = Hit;
			hitpoint = HitComTurret;
			raw = true;
		};
	};
	animationList[] = {};

    /* Inventory */
	class TransportMagazines{};
	class TransportWeapons{};
	class TransportItems
	{
		item_xx(FirstAidKit,15);
		item_xx(Toolkit,1);
		item_xx(Medikit,2);
	};

    /* Textures */
	hiddenSelections[] =
	{
		camo1,
		camo2,
		camo3,
		camoNet,
		camoSlat
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_01\Data\APC_Wheeled_01_base_medevac_CO.paa",
		"\A3\Armor_F_Beta\APC_Wheeled_01\Data\APC_Wheeled_01_adds_CO.paa",
		"\A3\Armor_F_Beta\APC_Wheeled_01\Data\APC_Wheeled_01_tows_CO.paa",
		"",
		""
	};

    /* Liveries */
	class TextureSources: TextureSources
	{
		class Sand: Sand
		{
            textures[] =
            {
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_01\Data\APC_Wheeled_01_base_medevac_CO.paa",
                "\A3\Armor_F_Beta\APC_Wheeled_01\Data\APC_Wheeled_01_adds_CO.paa",
                "\A3\Armor_F_Beta\APC_Wheeled_01\Data\APC_Wheeled_01_tows_CO.paa",
				"",
				""
            };
		};
		class Olive: Olive
		{
            textures[] =
            {
                "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_01\Data\APC_Wheeled_01_base_medevac_olive_CO.paa",
                "\A3\Armor_F_Exp\APC_Wheeled_01\Data\APC_Wheeled_01_adds_olive_CO.paa",
                "\A3\Armor_F_Exp\APC_Wheeled_01\Data\APC_Wheeled_01_tows_olive_CO.paa",
				"",
				""
            };
		};
        class EAF_01: EAF_01
        {
            textures[] = 
      			{
         			"\A3_Aegis\Armor_f_Aegis\APC_Wheeled_01\Data\APC_Wheeled_01_base_medevac_EAF_CO.paa",
					"\A3_Aegis\Armor_f_Aegis\APC_Wheeled_01\Data\APC_Wheeled_01_adds_EAF_CO.paa",
					"\A3_Aegis\Armor_f_Aegis\APC_Wheeled_01\Data\APC_Wheeled_01_tows_EAF_CO.paa",
         			"",
					"",
      			};
        };
        class EAF_Arid: EAF_Arid
        {
            textures[] = 
      			{
         			"\A3_Aegis\Armor_f_Aegis\APC_Wheeled_01\Data\APC_Wheeled_01_base_medevac_EAF_Arid_CO.paa",
					"\A3_Aegis\Armor_f_Aegis\APC_Wheeled_01\Data\APC_Wheeled_01_adds_EAF_arid_CO.paa",
					"\A3_Aegis\Armor_f_Aegis\APC_Wheeled_01\Data\APC_Wheeled_01_tows_EAF_arid_CO.paa",
         			"",
					"",
      			};
        };
	};
};
class B_APC_Wheeled_01_cannon_F: B_APC_Wheeled_01_base_F
{
    scope = protected;
};
class B_APC_Wheeled_01_cannon_v2_F: APC_Wheeled_01_base_v2_F
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
            {wheel_1_1_damper,0.48},
            {wheel_2_1_damper,0.48},
            {wheel_1_2_damper,0.5},
            {wheel_1_3_damper,0.52},
            {wheel_2_2_damper,0.49},
            {wheel_2_3_damper,0.52},
            {wheel_1_4_damper,0.53},
            {wheel_2_4_damper,0.53},
            {steering_1_1,0},
            {steering_2_1,0},
            {steering_1_2,0},
            {steering_2_2,0},
            {hatchdriver,0},
            {mainturret,0},
            {turretbase,0},
            {maingun,0},
            {obsturret,0},
            {obsgun,0},
            {damagehlaven,0},
            {damagecamonet,0},
            {vrtulea,0},
            {vrtuleb,0},
            {poklop_gunner,0},
            {poklop_commander,0},
            {zasleh_rot,307},
            {zasleh2_rot,589.52},
            {zasleh_hide,0},
            {reverse_light,0},
            {drivingwheel,0},
            {indicatortempoil,0},
            {indicatortempwater,0},
            {indicatorammeter,0},
            {indicatorammeter_turret,0},
            {indicatorspeed_mfd_driver,0},
            {indicatorrpm,0},
            {indicatorrpm_mfd_driver,0},
            {lights_driver,0},
            {lights_driver_off,0},
            {lights_turret,0},
            {lights_turret_off,0},
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
            {driver_reverse_cam_nopip,0},
            {driver_hide_mfd,0},
            {indicatortempwater_mfd_driver,0},
            {indicatorfuel_mfd_driver,1},
            {indicator_hull_direction_mfd_driver,0},
            {indicator_main_turret_mfd_driver,0},
            {indicator_com_turret_mfd_driver,0},
            {indicator_com_turret_counter_mfd_driver,0},
            {indicator_main_turret_mfd_com,0},
            {indicator_main_turret_onscreen_com,0},
            {indicator_com_turret_mfd_com,0},
            {indicator_com_turret_onscreen_com,0},
            {indicator_com_turret_counter_mfd_com,0},
            {indicator_hull_direction_mfd_gunner,0},
            {indicator_main_turret_mfd_gunner,0},
            {indicator_com_turret_mfd_gunner,0},
            {indicator_com_turret_counter_mfd_gunner,0},
            {indicator_damage_engine,0},
            {indicator_damage_fuel,0},
            {indicator_damage_wheels,0},
            {indicator_turret_damage_hull,0},
            {indicator_turret_damage_engine,0},
            {indicator_turret_damage_fuel,0},
            {indicator_turret_damage_main_gun,0},
            {indicator_turret_damage_wheels,0},
            {indicator_turret_damage_turret,0},
            {hide_mfd_and_pip_screen_driver,1},
            {hide_mfd_and_pip_screen_gunner,1},
            {hide_mfd_elements,1},
            {showbags_damage,0},
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
            {slat_right_3_firegeo_hide,0},
            {slat_top_back_normal_hide,0},
            {slat_top_back_damage_unhide,0},
            {slat_top_back_damage_hide,0},
            {slat_top_back_destroyed_unhide,0},
            {slat_top_back_firegeo_hide,0},
            {slat_top_right_normal_hide,0},
            {slat_top_right_damage_unhide,0},
            {slat_top_right_damage_hide,0},
            {slat_top_right_destroyed_unhide,0},
            {slat_top_right_firegeo_hide,0},
            {slat_top_left_normal_hide,0},
            {slat_top_left_damage_unhide,0},
            {slat_top_left_damage_hide,0},
            {slat_top_left_destroyed_unhide,0},
            {slat_top_left_firegeo_hide,0}
		};
		hide[] =
		{
            clan,
            zasleh2,
            zasleh_1,
            light_l,
            light_r,
            light_r2,
            light_l2,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 2.448;
		verticalOffsetWorld = -0.091;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_APC_Wheeled_01_cannon_v2_F.jpg";
	forceInGarage = true;
	side = TWest;
	faction = BLU_F;
	crew = B_crew_F;
	typicalCargo[] = {B_soldier_F};
	scope = public;
	scopeCurator = public;
	textureList[] = {Sand,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Armor_F_Beta\APC_Wheeled_01\Data\APC_Wheeled_01_base_CO.paa",
		"\A3\Armor_F_Beta\APC_Wheeled_01\Data\APC_Wheeled_01_adds_CO.paa",
		"\A3\Armor_F_Beta\APC_Wheeled_01\Data\APC_Wheeled_01_tows_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
		"\A3\Armor_F\Data\cage_sand_CO.paa"
	};
};
class B_APC_Wheeled_01_atgm_lxWS: APC_Wheeled_01_atgm_base_lxWS
{
    scope = protected;
	scopeCurator = protected;
};
class B_APC_Wheeled_01_atgm_lxWS_v2: APC_Wheeled_01_atgm_base_v2
{
    author = $STR_A3_A_Ravenholme;
    scope = public;
    scopeCurator = public;
};

/*
class B_APC_Wheeled_01_arty_F: B_APC_Wheeled_01_base_F
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
            {wheel_1_1_damper,0.48},
            {wheel_2_1_damper,0.48},
            {wheel_1_2_damper,0.5},
            {wheel_1_3_damper,0.52},
            {wheel_2_2_damper,0.49},
            {wheel_2_3_damper,0.52},
            {wheel_1_4_damper,0.53},
            {wheel_2_4_damper,0.53},
            {steering_1_1,0},
            {steering_2_1,0},
            {steering_1_2,0},
            {steering_2_2,0},
            {hatchdriver,0},
            {mainturret,0},
            {turretbase,0},
            {maingun,0},
            {obsturret,0},
            {obsgun,0},
            {damagehlaven,0},
            {damagecamonet,0},
            {vrtulea,0},
            {vrtuleb,0},
            {poklop_gunner,0},
            {poklop_commander,0},
            {zasleh_rot,307},
            {zasleh2_rot,589.52},
            {zasleh_hide,0},
            {reverse_light,0},
            {drivingwheel,0},
            {indicatortempoil,0},
            {indicatortempwater,0},
            {indicatorammeter,0},
            {indicatorammeter_turret,0},
            {indicatorspeed_mfd_driver,0},
            {indicatorrpm,0},
            {indicatorrpm_mfd_driver,0},
            {lights_driver,0},
            {lights_driver_off,0},
            {lights_turret,0},
            {lights_turret_off,0},
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
            {driver_reverse_cam_nopip,0},
            {driver_hide_mfd,0},
            {indicatortempwater_mfd_driver,0},
            {indicatorfuel_mfd_driver,1},
            {indicator_hull_direction_mfd_driver,0},
            {indicator_main_turret_mfd_driver,0},
            {indicator_com_turret_mfd_driver,0},
            {indicator_com_turret_counter_mfd_driver,0},
            {indicator_main_turret_mfd_com,0},
            {indicator_main_turret_onscreen_com,0},
            {indicator_com_turret_mfd_com,0},
            {indicator_com_turret_onscreen_com,0},
            {indicator_com_turret_counter_mfd_com,0},
            {indicator_hull_direction_mfd_gunner,0},
            {indicator_main_turret_mfd_gunner,0},
            {indicator_com_turret_mfd_gunner,0},
            {indicator_com_turret_counter_mfd_gunner,0},
            {indicator_damage_engine,0},
            {indicator_damage_fuel,0},
            {indicator_damage_wheels,0},
            {indicator_turret_damage_hull,0},
            {indicator_turret_damage_engine,0},
            {indicator_turret_damage_fuel,0},
            {indicator_turret_damage_main_gun,0},
            {indicator_turret_damage_wheels,0},
            {indicator_turret_damage_turret,0},
            {hide_mfd_and_pip_screen_driver,1},
            {hide_mfd_and_pip_screen_gunner,1},
            {hide_mfd_elements,1},
            {showbags_damage,0},
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
            {slat_right_3_firegeo_hide,0},
            {slat_top_back_normal_hide,0},
            {slat_top_back_damage_unhide,0},
            {slat_top_back_damage_hide,0},
            {slat_top_back_destroyed_unhide,0},
            {slat_top_back_firegeo_hide,0},
            {slat_top_right_normal_hide,0},
            {slat_top_right_damage_unhide,0},
            {slat_top_right_damage_hide,0},
            {slat_top_right_destroyed_unhide,0},
            {slat_top_right_firegeo_hide,0},
            {slat_top_left_normal_hide,0},
            {slat_top_left_damage_unhide,0},
            {slat_top_left_damage_hide,0},
            {slat_top_left_destroyed_unhide,0},
            {slat_top_left_firegeo_hide,0}
		};
		hide[] =
		{
            clan,
            zasleh2,
            zasleh_1,
            light_l,
            light_r,
            light_r2,
            light_l2,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 2.448;
		verticalOffsetWorld = -0.091;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_APC_Wheeled_01_arty_F.jpg";
	scope = public;
	accuracy = 0.3;
	displayName = $STR_A3_A_CfgVehicles_B_APC_Wheeled_01_arty_F0;
	model = "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_01\APC_Wheeled_01_arty_F.p3d";
	editorSubcategory = EdSubcat_Artillery;
	picture = "\A3\Armor_F_Beta\APC_Wheeled_01\Data\UI\APC_Wheeled_01_AMOS_CA.paa";
	icon = "\A3\Armor_F_Beta\APC_Wheeled_01\Data\UI\Map_AMW_AMOS_CA.paa";
	transportSoldier = 0;
	unitInfoType = RscUnitInfoArtillery;
	availableForSupportTypes[] = {Artillery};
    class MFD{};
    class compartmentsLights{};

    // Turrets
    artilleryScanner = true;
	selectionFireAnim = "";
	class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            class Turrets{};
            usePip = false;
			forceHideGunner = true;
			turretInfoType = RscWeaponRangeArtilleryAuto;
            
            // Weapons & Ammunition
			weapons[] = {mortar_120mm_AMOS};
			magazines[] =
            {
                //50Rnd_120mm_Mo_shells
                24Rnd_120mm_Mo_shells
                4Rnd_120mm_Mo_guided,
                6Rnd_120mm_Mo_mine,
                2Rnd_120mm_Mo_Cluster,
                6Rnd_120mm_Mo_smoke,
                2Rnd_120mm_Mo_LG,
                6Rnd_120mm_Mo_AT_mine
            };

            // Servos
			minElev = -5;
			maxElev = 80;
			initElev = 0;
			soundServo[] = {"\A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",db-16,1.0,30};
			soundServoVertical[] = {"\A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",db-16,1.0,30};
			elevationMode = 3;
			maxHorizontalRotSpeed = 0.78;
			maxVerticalRotSpeed = 0.26;

            // Optics
			gunnerForceOptics = true;
			gunnerOpticsModel = "\A3\Weapons_F\Acc\reticle_Mortar_01_F.p3d";
			class OpticsIn: Optics_Gunner_MBT_01
			{
				class Wide: Wide
				{
					gunnerOpticsModel = "\A3\Weapons_F\Acc\reticle_Mortar_01_F.p3d";
					initFov = 0.174;
					minFov = 0.0077778;
					maxFov = 0.14;
					visionMode[] =
                    {
                        Normal,
                        NVG
                    };
				};
			};

            // Damage
			class HitPoints
			{
				class HitTurret
				{
					armor = 0.8;
					material = -1;
					armorComponent = hit_main_turret;
					name = hit_main_turret_point;
					visual = "-";
					passThrough = 0;
					minimalHit = 0.1;
					explosionShielding = 0.2;
					radius = 0.25;
					isTurret = true;
				};
				class HitGun
				{
					armor = 0.6;
					material = -1;
					armorComponent = hit_main_gun;
					name = hit_main_gun_point;
					visual = "-";
					passThrough = 0;
					minimalHit = 0.1;
					explosionShielding = 0.4;
					radius = 0.2;
					isGun = true;
				};
			};
        };
    };

    // Animation Sources
	class AnimationSources: AnimationSources
	{
		class revolving_cannon
		{
			source = revolving;
			weapon = mortar_120mm_AMOS;
		};
		class showBags: showBags
        {
            scope = protected;
        };
		class showCamonetTurret: showCamonetTurret
        {
            scope = protected;
        };
		class showSLATTurret: showSLATTurret
        {
            scope = protected;
        };
	};

    // Textures
	hiddenSelections[] =
    {
        camo1,
        camo2,
        camo3,
        CamoNet,
        CamoSlat
    };
	hiddenSelectionsTextures[] =
    {
        "\A3\Armor_F_Beta\APC_Wheeled_01\Data\APC_Wheeled_01_base_CO.paa",
        "\A3\Armor_F_Beta\APC_Wheeled_01\Data\APC_Wheeled_01_adds_CO.paa",
        "\A3\Armor_F_Beta\APC_Wheeled_01\Data\APC_Wheeled_01_tows_CO.paa",
        "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
        "\A3\Armor_F\Data\cage_sand_CO.paa"
    };
};
*/

/* USMC (Desert) */
class B_D_APC_Wheeled_01_atgm_lxWS: APC_Wheeled_01_atgm_base_lxWS
{
    scope = protected;
	scopeCurator = protected;
};
class B_T_APC_Wheeled_01_atgm_lxWS: APC_Wheeled_01_atgm_base_lxWS
{   
    scope = protected;
	scopeCurator = protected;
};

class B_D_APC_Wheeled_01_cannon_lxWS: B_APC_Wheeled_01_cannon_F
{
    scope = protected;
	scopeCurator = protected;
};
class B_D_APC_Wheeled_01_cannon_lxWS_v2: B_APC_Wheeled_01_cannon_v2_F
{
	author = $STR_A3_A_Heliotrope;
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
            {wheel_1_1_damper,0.48},
            {wheel_2_1_damper,0.48},
            {wheel_1_2_damper,0.5},
            {wheel_1_3_damper,0.52},
            {wheel_2_2_damper,0.49},
            {wheel_2_3_damper,0.52},
            {wheel_1_4_damper,0.53},
            {wheel_2_4_damper,0.53},
            {steering_1_1,0},
            {steering_2_1,0},
            {steering_1_2,0},
            {steering_2_2,0},
            {hatchdriver,0},
            {mainturret,0},
            {turretbase,0},
            {maingun,0},
            {obsturret,0},
            {obsgun,0},
            {damagehlaven,0},
            {damagecamonet,0},
            {vrtulea,0},
            {vrtuleb,0},
            {poklop_gunner,0},
            {poklop_commander,0},
            {zasleh_rot,307},
            {zasleh2_rot,589.52},
            {zasleh_hide,0},
            {reverse_light,0},
            {drivingwheel,0},
            {indicatortempoil,0},
            {indicatortempwater,0},
            {indicatorammeter,0},
            {indicatorammeter_turret,0},
            {indicatorspeed_mfd_driver,0},
            {indicatorrpm,0},
            {indicatorrpm_mfd_driver,0},
            {lights_driver,0},
            {lights_driver_off,0},
            {lights_turret,0},
            {lights_turret_off,0},
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
            {driver_reverse_cam_nopip,0},
            {driver_hide_mfd,0},
            {indicatortempwater_mfd_driver,0},
            {indicatorfuel_mfd_driver,1},
            {indicator_hull_direction_mfd_driver,0},
            {indicator_main_turret_mfd_driver,0},
            {indicator_com_turret_mfd_driver,0},
            {indicator_com_turret_counter_mfd_driver,0},
            {indicator_main_turret_mfd_com,0},
            {indicator_main_turret_onscreen_com,0},
            {indicator_com_turret_mfd_com,0},
            {indicator_com_turret_onscreen_com,0},
            {indicator_com_turret_counter_mfd_com,0},
            {indicator_hull_direction_mfd_gunner,0},
            {indicator_main_turret_mfd_gunner,0},
            {indicator_com_turret_mfd_gunner,0},
            {indicator_com_turret_counter_mfd_gunner,0},
            {indicator_damage_engine,0},
            {indicator_damage_fuel,0},
            {indicator_damage_wheels,0},
            {indicator_turret_damage_hull,0},
            {indicator_turret_damage_engine,0},
            {indicator_turret_damage_fuel,0},
            {indicator_turret_damage_main_gun,0},
            {indicator_turret_damage_wheels,0},
            {indicator_turret_damage_turret,0},
            {hide_mfd_and_pip_screen_driver,1},
            {hide_mfd_and_pip_screen_gunner,1},
            {hide_mfd_elements,1},
            {showbags_damage,0},
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
            {slat_right_3_firegeo_hide,0},
            {slat_top_back_normal_hide,0},
            {slat_top_back_damage_unhide,0},
            {slat_top_back_damage_hide,0},
            {slat_top_back_destroyed_unhide,0},
            {slat_top_back_firegeo_hide,0},
            {slat_top_right_normal_hide,0},
            {slat_top_right_damage_unhide,0},
            {slat_top_right_damage_hide,0},
            {slat_top_right_destroyed_unhide,0},
            {slat_top_right_firegeo_hide,0},
            {slat_top_left_normal_hide,0},
            {slat_top_left_damage_unhide,0},
            {slat_top_left_damage_hide,0},
            {slat_top_left_destroyed_unhide,0},
            {slat_top_left_firegeo_hide,0}
		};
		hide[] =
		{
            clan,
            zasleh2,
            zasleh_1,
            light_l,
            light_r,
            light_r2,
            light_l2,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 2.448;
		verticalOffsetWorld = -0.091;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	faction = BLU_NATO_lxWS;
	crew = B_D_crew_lxWS;
	typicalCargo[] = {B_D_soldier_lxWS};
	scope = public;
	scopeCurator = public;
    scopeArsenal = 0;
	forceInGarage = 0;
    hiddenSelectionsTextures[] = 
    {
        "a3\armor_f_beta\APC_Wheeled_01\data\APC_Wheeled_01_base_co.paa",
        "a3\armor_f_beta\APC_Wheeled_01\data\APC_Wheeled_01_adds_co.paa",
        "a3\armor_f_beta\APC_Wheeled_01\data\APC_Wheeled_01_tows_co.paa",
        "lxws\vehicles_f_lxws\data\camonet_NATO_flat_desert_CO.paa","a3\Armor_F\Data\cage_sand_CO.paa",
        "lxws\vehicles_f_lxws\data\APC_Wheeled_01\APC_Wheeled_01_lxws_CO.paa"
    };
    textureList[] = {"Sand_Desert", 1};
};

class B_D_APC_Wheeled_01_atgm_lxWS_v2: APC_Wheeled_01_atgm_base_v2
{
    author = $STR_A3_A_Ravenholme;
    scope = public;
    scopeCurator = public;
    editorPreview = "\A3_Aegis\editorpreviews_f_aegis\Data\CfgVehicles\B_D_APC_Wheeled_01_atgm_lxWS.jpg"; 
    crew = B_D_crew_lxWS;
    typicalCargo[] = {B_D_soldier_lxWS};
	faction = BLU_NATO_lxWS;
    hiddenSelectionsTextures[] = {
      "a3\armor_f_beta\APC_Wheeled_01\data\APC_Wheeled_01_base_co.paa",
      "a3\armor_f_beta\APC_Wheeled_01\data\APC_Wheeled_01_adds_co.paa",
      "a3\armor_f_beta\APC_Wheeled_01\data\APC_Wheeled_01_tows_co.paa",
      "lxws\vehicles_f_lxws\data\camonet_NATO_flat_desert_CO.paa","a3\Armor_F\Data\cage_sand_CO.paa",
      "lxws\vehicles_f_lxws\data\APC_Wheeled_01\APC_Wheeled_01_lxws_CO.paa"};
   textureList[] = {"Sand_Desert", 1};
};

/* US (Pacific) */
class B_T_APC_Wheeled_01_medical_F: B_APC_Wheeled_01_medical_F
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
            {wheel_1_1_damper,0.48},
            {wheel_2_1_damper,0.48},
            {wheel_1_2_damper,0.5},
            {wheel_1_3_damper,0.52},
            {wheel_2_2_damper,0.49},
            {wheel_2_3_damper,0.52},
            {wheel_1_4_damper,0.53},
            {wheel_2_4_damper,0.53},
            {steering_1_1,0},
            {steering_2_1,0},
            {steering_1_2,0},
            {steering_2_2,0},
            {hatchdriver,0},
            {mainturret,0},
            {turretbase,0},
            {maingun,0},
            {obsturret,0},
            {obsgun,0},
            {damagehlaven,0},
            {damagecamonet,0},
            {vrtulea,0},
            {vrtuleb,0},
            {poklop_gunner,0},
            {poklop_commander,0},
            {zasleh_rot,307},
            {zasleh2_rot,589.52},
            {zasleh_hide,0},
            {reverse_light,0},
            {drivingwheel,0},
            {indicatortempoil,0},
            {indicatortempwater,0},
            {indicatorammeter,0},
            {indicatorammeter_turret,0},
            {indicatorspeed_mfd_driver,0},
            {indicatorrpm,0},
            {indicatorrpm_mfd_driver,0},
            {lights_driver,0},
            {lights_driver_off,0},
            {lights_turret,0},
            {lights_turret_off,0},
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
            {driver_reverse_cam_nopip,0},
            {driver_hide_mfd,0},
            {indicatortempwater_mfd_driver,0},
            {indicatorfuel_mfd_driver,1},
            {indicator_hull_direction_mfd_driver,0},
            {indicator_main_turret_mfd_driver,0},
            {indicator_com_turret_mfd_driver,0},
            {indicator_com_turret_counter_mfd_driver,0},
            {indicator_main_turret_mfd_com,0},
            {indicator_main_turret_onscreen_com,0},
            {indicator_com_turret_mfd_com,0},
            {indicator_com_turret_onscreen_com,0},
            {indicator_com_turret_counter_mfd_com,0},
            {indicator_hull_direction_mfd_gunner,0},
            {indicator_main_turret_mfd_gunner,0},
            {indicator_com_turret_mfd_gunner,0},
            {indicator_com_turret_counter_mfd_gunner,0},
            {indicator_damage_engine,0},
            {indicator_damage_fuel,0},
            {indicator_damage_wheels,0},
            {indicator_turret_damage_hull,0},
            {indicator_turret_damage_engine,0},
            {indicator_turret_damage_fuel,0},
            {indicator_turret_damage_main_gun,0},
            {indicator_turret_damage_wheels,0},
            {indicator_turret_damage_turret,0},
            {hide_mfd_and_pip_screen_driver,1},
            {hide_mfd_and_pip_screen_gunner,1},
            {hide_mfd_elements,1},
            {showbags_damage,0},
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
            {slat_right_3_firegeo_hide,0},
            {slat_top_back_normal_hide,0},
            {slat_top_back_damage_unhide,0},
            {slat_top_back_damage_hide,0},
            {slat_top_back_destroyed_unhide,0},
            {slat_top_back_firegeo_hide,0},
            {slat_top_right_normal_hide,0},
            {slat_top_right_damage_unhide,0},
            {slat_top_right_damage_hide,0},
            {slat_top_right_destroyed_unhide,0},
            {slat_top_right_firegeo_hide,0},
            {slat_top_left_normal_hide,0},
            {slat_top_left_damage_unhide,0},
            {slat_top_left_damage_hide,0},
            {slat_top_left_destroyed_unhide,0},
            {slat_top_left_firegeo_hide,0}
		};
		hide[] =
		{
            clan,
            zasleh2,
            zasleh_1,
            light_l,
            light_r,
            light_r2,
            light_l2,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 2.448;
		verticalOffsetWorld = -0.091;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_APC_Wheeled_01_medical_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_T_F;
	crew = B_T_Crew_F;
	typicalCargo[] = {B_T_Soldier_F};
	textureList[] = {Olive,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_01\Data\APC_Wheeled_01_base_medevac_olive_CO.paa",
		"\A3\Armor_F_Exp\APC_Wheeled_01\Data\APC_Wheeled_01_adds_olive_CO.paa",
		"\A3\Armor_F_Exp\APC_Wheeled_01\Data\APC_Wheeled_01_tows_olive_CO.paa",
		"",
		""
	};

    /* Inventory */
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_tna_F,2);
	};
};
class B_T_APC_Wheeled_01_cannon_v2_F: APC_Wheeled_01_base_v2_F
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
            {wheel_1_1_damper,0.48},
            {wheel_2_1_damper,0.48},
            {wheel_1_2_damper,0.5},
            {wheel_1_3_damper,0.52},
            {wheel_2_2_damper,0.49},
            {wheel_2_3_damper,0.52},
            {wheel_1_4_damper,0.53},
            {wheel_2_4_damper,0.53},
            {steering_1_1,0},
            {steering_2_1,0},
            {steering_1_2,0},
            {steering_2_2,0},
            {hatchdriver,0},
            {mainturret,0},
            {turretbase,0},
            {maingun,0},
            {obsturret,0},
            {obsgun,0},
            {damagehlaven,0},
            {damagecamonet,0},
            {vrtulea,0},
            {vrtuleb,0},
            {poklop_gunner,0},
            {poklop_commander,0},
            {zasleh_rot,307},
            {zasleh2_rot,589.52},
            {zasleh_hide,0},
            {reverse_light,0},
            {drivingwheel,0},
            {indicatortempoil,0},
            {indicatortempwater,0},
            {indicatorammeter,0},
            {indicatorammeter_turret,0},
            {indicatorspeed_mfd_driver,0},
            {indicatorrpm,0},
            {indicatorrpm_mfd_driver,0},
            {lights_driver,0},
            {lights_driver_off,0},
            {lights_turret,0},
            {lights_turret_off,0},
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
            {driver_reverse_cam_nopip,0},
            {driver_hide_mfd,0},
            {indicatortempwater_mfd_driver,0},
            {indicatorfuel_mfd_driver,1},
            {indicator_hull_direction_mfd_driver,0},
            {indicator_main_turret_mfd_driver,0},
            {indicator_com_turret_mfd_driver,0},
            {indicator_com_turret_counter_mfd_driver,0},
            {indicator_main_turret_mfd_com,0},
            {indicator_main_turret_onscreen_com,0},
            {indicator_com_turret_mfd_com,0},
            {indicator_com_turret_onscreen_com,0},
            {indicator_com_turret_counter_mfd_com,0},
            {indicator_hull_direction_mfd_gunner,0},
            {indicator_main_turret_mfd_gunner,0},
            {indicator_com_turret_mfd_gunner,0},
            {indicator_com_turret_counter_mfd_gunner,0},
            {indicator_damage_engine,0},
            {indicator_damage_fuel,0},
            {indicator_damage_wheels,0},
            {indicator_turret_damage_hull,0},
            {indicator_turret_damage_engine,0},
            {indicator_turret_damage_fuel,0},
            {indicator_turret_damage_main_gun,0},
            {indicator_turret_damage_wheels,0},
            {indicator_turret_damage_turret,0},
            {hide_mfd_and_pip_screen_driver,1},
            {hide_mfd_and_pip_screen_gunner,1},
            {hide_mfd_elements,1},
            {showbags_damage,0},
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
            {slat_right_3_firegeo_hide,0},
            {slat_top_back_normal_hide,0},
            {slat_top_back_damage_unhide,0},
            {slat_top_back_damage_hide,0},
            {slat_top_back_destroyed_unhide,0},
            {slat_top_back_firegeo_hide,0},
            {slat_top_right_normal_hide,0},
            {slat_top_right_damage_unhide,0},
            {slat_top_right_damage_hide,0},
            {slat_top_right_destroyed_unhide,0},
            {slat_top_right_firegeo_hide,0},
            {slat_top_left_normal_hide,0},
            {slat_top_left_damage_unhide,0},
            {slat_top_left_damage_hide,0},
            {slat_top_left_destroyed_unhide,0},
            {slat_top_left_firegeo_hide,0}
		};
		hide[] =
		{
            clan,
            zasleh2,
            zasleh_1,
            light_l,
            light_r,
            light_r2,
            light_l2,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 2.448;
		verticalOffsetWorld = -0.091;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_APC_Wheeled_01_cannon_v2_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_T_F;
	crew = B_T_Crew_F;
	typicalCargo[] = {B_T_Soldier_F};
	textureList[] = {Olive,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Armor_F_Exp\APC_Wheeled_01\Data\APC_Wheeled_01_base_olive_CO.paa",
		"\A3\Armor_F_Exp\APC_Wheeled_01\Data\APC_Wheeled_01_adds_olive_CO.paa",
		"\A3\Armor_F_Exp\APC_Wheeled_01\Data\APC_Wheeled_01_tows_olive_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
		"\A3\Armor_F\Data\cage_olive_CO.paa"
	};

    /* Inventory */
	class TransportWeapons
	{
		weap_xx(arifle_MX_khk_F,2);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_khaki_mag,12);
		mag_xx(100Rnd_65x39_caseless_khaki_mag,6);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(1Rnd_HE_Grenade_shell,3);
		mag_xx(3Rnd_HE_Grenade_shell,1);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,3);
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellGreen,8);
		mag_xx(SmokeShellOrange,8);
		mag_xx(SmokeShellBlue,8);
		mag_xx(NLAW_F,5);
		mag_xx(Titan_AT,2);
		mag_xx(Titan_AP,2);
		mag_xx(Titan_AA,2);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_tna_F,2);
	};
};

class B_T_APC_Wheeled_01_atgm_lxWS_v2: APC_Wheeled_01_atgm_base_v2
{
    author = $STR_A3_A_Ravenholme;
    scope = public;
    scopeCurator = public;
    editorPreview = "\A3_Aegis\editorpreviews_f_aegis\Data\CfgVehicles\B_T_APC_Wheeled_01_atgm_lxWS.jpg"; 
    crew = B_T_Crew_F;
    typicalCargo[] = {B_T_Soldier_F};
    faction = BLU_T_F;
    hiddenSelectionsTextures[] = {
      "A3\Armor_F_Exp\APC_Wheeled_01\data\APC_Wheeled_01_base_olive_CO.paa",
      "A3\Armor_F_Exp\APC_Wheeled_01\data\APC_Wheeled_01_adds_olive_co.paa",
      "A3\Armor_F_Exp\APC_Wheeled_01\data\APC_Wheeled_01_tows_olive_co.paa",
      "a3\Armor_F\Data\camonet_NATO_Green_CO.paa","a3\Armor_F\Data\cage_olive_CO.paa",
      "lxws\vehicles_f_lxws\data\APC_Wheeled_01\APC_Wheeled_01_lxws_olive_CO.paa"};
	textureList[] = {"Olive", 1};
    /* Inventory */
	class TransportWeapons
	{
		weap_xx(arifle_MX_khk_F,2);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_khaki_mag,12);
		mag_xx(100Rnd_65x39_caseless_khaki_mag,6);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(1Rnd_HE_Grenade_shell,3);
		mag_xx(3Rnd_HE_Grenade_shell,1);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,3);
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellGreen,8);
		mag_xx(SmokeShellOrange,8);
		mag_xx(SmokeShellBlue,8);
		mag_xx(NLAW_F,5);
		mag_xx(Titan_AT,2);
		mag_xx(Titan_AP,2);
		mag_xx(Titan_AA,2);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_tna_F,2);
	};
};

/*
class B_T_APC_Wheeled_01_arty_F: B_APC_Wheeled_01_arty_F
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
            {wheel_1_1_damper,0.48},
            {wheel_2_1_damper,0.48},
            {wheel_1_2_damper,0.5},
            {wheel_1_3_damper,0.52},
            {wheel_2_2_damper,0.49},
            {wheel_2_3_damper,0.52},
            {wheel_1_4_damper,0.53},
            {wheel_2_4_damper,0.53},
            {steering_1_1,0},
            {steering_2_1,0},
            {steering_1_2,0},
            {steering_2_2,0},
            {hatchdriver,0},
            {mainturret,0},
            {turretbase,0},
            {maingun,0},
            {obsturret,0},
            {obsgun,0},
            {damagehlaven,0},
            {damagecamonet,0},
            {vrtulea,0},
            {vrtuleb,0},
            {poklop_gunner,0},
            {poklop_commander,0},
            {zasleh_rot,307},
            {zasleh2_rot,589.52},
            {zasleh_hide,0},
            {reverse_light,0},
            {drivingwheel,0},
            {indicatortempoil,0},
            {indicatortempwater,0},
            {indicatorammeter,0},
            {indicatorammeter_turret,0},
            {indicatorspeed_mfd_driver,0},
            {indicatorrpm,0},
            {indicatorrpm_mfd_driver,0},
            {lights_driver,0},
            {lights_driver_off,0},
            {lights_turret,0},
            {lights_turret_off,0},
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
            {driver_reverse_cam_nopip,0},
            {driver_hide_mfd,0},
            {indicatortempwater_mfd_driver,0},
            {indicatorfuel_mfd_driver,1},
            {indicator_hull_direction_mfd_driver,0},
            {indicator_main_turret_mfd_driver,0},
            {indicator_com_turret_mfd_driver,0},
            {indicator_com_turret_counter_mfd_driver,0},
            {indicator_main_turret_mfd_com,0},
            {indicator_main_turret_onscreen_com,0},
            {indicator_com_turret_mfd_com,0},
            {indicator_com_turret_onscreen_com,0},
            {indicator_com_turret_counter_mfd_com,0},
            {indicator_hull_direction_mfd_gunner,0},
            {indicator_main_turret_mfd_gunner,0},
            {indicator_com_turret_mfd_gunner,0},
            {indicator_com_turret_counter_mfd_gunner,0},
            {indicator_damage_engine,0},
            {indicator_damage_fuel,0},
            {indicator_damage_wheels,0},
            {indicator_turret_damage_hull,0},
            {indicator_turret_damage_engine,0},
            {indicator_turret_damage_fuel,0},
            {indicator_turret_damage_main_gun,0},
            {indicator_turret_damage_wheels,0},
            {indicator_turret_damage_turret,0},
            {hide_mfd_and_pip_screen_driver,1},
            {hide_mfd_and_pip_screen_gunner,1},
            {hide_mfd_elements,1},
            {showbags_damage,0},
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
            {slat_right_3_firegeo_hide,0},
            {slat_top_back_normal_hide,0},
            {slat_top_back_damage_unhide,0},
            {slat_top_back_damage_hide,0},
            {slat_top_back_destroyed_unhide,0},
            {slat_top_back_firegeo_hide,0},
            {slat_top_right_normal_hide,0},
            {slat_top_right_damage_unhide,0},
            {slat_top_right_damage_hide,0},
            {slat_top_right_destroyed_unhide,0},
            {slat_top_right_firegeo_hide,0},
            {slat_top_left_normal_hide,0},
            {slat_top_left_damage_unhide,0},
            {slat_top_left_damage_hide,0},
            {slat_top_left_destroyed_unhide,0},
            {slat_top_left_firegeo_hide,0}
		};
		hide[] =
		{
            clan,
            zasleh2,
            zasleh_1,
            light_l,
            light_r,
            light_r2,
            light_l2,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 2.448;
		verticalOffsetWorld = -0.091;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_APC_Wheeled_01_arty_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_T_F;
	crew = B_T_Crew_F;
	typicalCargo[] = {B_T_Soldier_F};

    // Inventory
	class TransportWeapons
	{
		weap_xx(arifle_MX_khk_F,2);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_khaki_mag,12);
		mag_xx(100Rnd_65x39_caseless_khaki_mag,6);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(1Rnd_HE_Grenade_shell,3);
		mag_xx(3Rnd_HE_Grenade_shell,1);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,3);
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellGreen,8);
		mag_xx(SmokeShellOrange,8);
		mag_xx(SmokeShellBlue,8);
		mag_xx(NLAW_F,5);
		mag_xx(Titan_AT,2);
		mag_xx(Titan_AP,2);
		mag_xx(Titan_AA,2);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_tna_F,2);
	};
    
	hiddenSelectionsTextures[] =
	{
		"\A3\Armor_F_Exp\APC_Wheeled_01\Data\APC_Wheeled_01_base_olive_CO.paa",
		"\A3\Armor_F_Exp\APC_Wheeled_01\Data\APC_Wheeled_01_adds_olive_CO.paa",
		"\A3\Armor_F_Exp\APC_Wheeled_01\Data\APC_Wheeled_01_tows_olive_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
		"\A3\Armor_F\Data\cage_olive_CO.paa"
	};
};
*/

/* US (Woodland) */
class B_W_APC_Wheeled_01_medical_F: B_APC_Wheeled_01_medical_F
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
            {wheel_1_1_damper,0.48},
            {wheel_2_1_damper,0.48},
            {wheel_1_2_damper,0.5},
            {wheel_1_3_damper,0.52},
            {wheel_2_2_damper,0.49},
            {wheel_2_3_damper,0.52},
            {wheel_1_4_damper,0.53},
            {wheel_2_4_damper,0.53},
            {steering_1_1,0},
            {steering_2_1,0},
            {steering_1_2,0},
            {steering_2_2,0},
            {hatchdriver,0},
            {mainturret,0},
            {turretbase,0},
            {maingun,0},
            {obsturret,0},
            {obsgun,0},
            {damagehlaven,0},
            {damagecamonet,0},
            {vrtulea,0},
            {vrtuleb,0},
            {poklop_gunner,0},
            {poklop_commander,0},
            {zasleh_rot,307},
            {zasleh2_rot,589.52},
            {zasleh_hide,0},
            {reverse_light,0},
            {drivingwheel,0},
            {indicatortempoil,0},
            {indicatortempwater,0},
            {indicatorammeter,0},
            {indicatorammeter_turret,0},
            {indicatorspeed_mfd_driver,0},
            {indicatorrpm,0},
            {indicatorrpm_mfd_driver,0},
            {lights_driver,0},
            {lights_driver_off,0},
            {lights_turret,0},
            {lights_turret_off,0},
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
            {driver_reverse_cam_nopip,0},
            {driver_hide_mfd,0},
            {indicatortempwater_mfd_driver,0},
            {indicatorfuel_mfd_driver,1},
            {indicator_hull_direction_mfd_driver,0},
            {indicator_main_turret_mfd_driver,0},
            {indicator_com_turret_mfd_driver,0},
            {indicator_com_turret_counter_mfd_driver,0},
            {indicator_main_turret_mfd_com,0},
            {indicator_main_turret_onscreen_com,0},
            {indicator_com_turret_mfd_com,0},
            {indicator_com_turret_onscreen_com,0},
            {indicator_com_turret_counter_mfd_com,0},
            {indicator_hull_direction_mfd_gunner,0},
            {indicator_main_turret_mfd_gunner,0},
            {indicator_com_turret_mfd_gunner,0},
            {indicator_com_turret_counter_mfd_gunner,0},
            {indicator_damage_engine,0},
            {indicator_damage_fuel,0},
            {indicator_damage_wheels,0},
            {indicator_turret_damage_hull,0},
            {indicator_turret_damage_engine,0},
            {indicator_turret_damage_fuel,0},
            {indicator_turret_damage_main_gun,0},
            {indicator_turret_damage_wheels,0},
            {indicator_turret_damage_turret,0},
            {hide_mfd_and_pip_screen_driver,1},
            {hide_mfd_and_pip_screen_gunner,1},
            {hide_mfd_elements,1},
            {showbags_damage,0},
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
            {slat_right_3_firegeo_hide,0},
            {slat_top_back_normal_hide,0},
            {slat_top_back_damage_unhide,0},
            {slat_top_back_damage_hide,0},
            {slat_top_back_destroyed_unhide,0},
            {slat_top_back_firegeo_hide,0},
            {slat_top_right_normal_hide,0},
            {slat_top_right_damage_unhide,0},
            {slat_top_right_damage_hide,0},
            {slat_top_right_destroyed_unhide,0},
            {slat_top_right_firegeo_hide,0},
            {slat_top_left_normal_hide,0},
            {slat_top_left_damage_unhide,0},
            {slat_top_left_damage_hide,0},
            {slat_top_left_destroyed_unhide,0},
            {slat_top_left_firegeo_hide,0}
		};
		hide[] =
		{
            clan,
            zasleh2,
            zasleh_1,
            light_l,
            light_r,
            light_r2,
            light_l2,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 2.448;
		verticalOffsetWorld = -0.091;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_APC_Wheeled_01_medical_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Crew_F;
	typicalCargo[] = {B_W_Soldier_F};
	textureList[] = {Olive,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_01\Data\APC_Wheeled_01_base_medevac_olive_CO.paa",
		"\A3\Armor_F_Exp\APC_Wheeled_01\Data\APC_Wheeled_01_adds_olive_CO.paa",
		"\A3\Armor_F_Exp\APC_Wheeled_01\Data\APC_Wheeled_01_tows_olive_CO.paa",
		"",
		""
	};

    /* Inventory */
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_wdl_F,2);
	};
};
class B_W_APC_Wheeled_01_cannon_v2_F: APC_Wheeled_01_base_v2_F
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
            {wheel_1_1_damper,0.48},
            {wheel_2_1_damper,0.48},
            {wheel_1_2_damper,0.5},
            {wheel_1_3_damper,0.52},
            {wheel_2_2_damper,0.49},
            {wheel_2_3_damper,0.52},
            {wheel_1_4_damper,0.53},
            {wheel_2_4_damper,0.53},
            {steering_1_1,0},
            {steering_2_1,0},
            {steering_1_2,0},
            {steering_2_2,0},
            {hatchdriver,0},
            {mainturret,0},
            {turretbase,0},
            {maingun,0},
            {obsturret,0},
            {obsgun,0},
            {damagehlaven,0},
            {damagecamonet,0},
            {vrtulea,0},
            {vrtuleb,0},
            {poklop_gunner,0},
            {poklop_commander,0},
            {zasleh_rot,307},
            {zasleh2_rot,589.52},
            {zasleh_hide,0},
            {reverse_light,0},
            {drivingwheel,0},
            {indicatortempoil,0},
            {indicatortempwater,0},
            {indicatorammeter,0},
            {indicatorammeter_turret,0},
            {indicatorspeed_mfd_driver,0},
            {indicatorrpm,0},
            {indicatorrpm_mfd_driver,0},
            {lights_driver,0},
            {lights_driver_off,0},
            {lights_turret,0},
            {lights_turret_off,0},
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
            {driver_reverse_cam_nopip,0},
            {driver_hide_mfd,0},
            {indicatortempwater_mfd_driver,0},
            {indicatorfuel_mfd_driver,1},
            {indicator_hull_direction_mfd_driver,0},
            {indicator_main_turret_mfd_driver,0},
            {indicator_com_turret_mfd_driver,0},
            {indicator_com_turret_counter_mfd_driver,0},
            {indicator_main_turret_mfd_com,0},
            {indicator_main_turret_onscreen_com,0},
            {indicator_com_turret_mfd_com,0},
            {indicator_com_turret_onscreen_com,0},
            {indicator_com_turret_counter_mfd_com,0},
            {indicator_hull_direction_mfd_gunner,0},
            {indicator_main_turret_mfd_gunner,0},
            {indicator_com_turret_mfd_gunner,0},
            {indicator_com_turret_counter_mfd_gunner,0},
            {indicator_damage_engine,0},
            {indicator_damage_fuel,0},
            {indicator_damage_wheels,0},
            {indicator_turret_damage_hull,0},
            {indicator_turret_damage_engine,0},
            {indicator_turret_damage_fuel,0},
            {indicator_turret_damage_main_gun,0},
            {indicator_turret_damage_wheels,0},
            {indicator_turret_damage_turret,0},
            {hide_mfd_and_pip_screen_driver,1},
            {hide_mfd_and_pip_screen_gunner,1},
            {hide_mfd_elements,1},
            {showbags_damage,0},
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
            {slat_right_3_firegeo_hide,0},
            {slat_top_back_normal_hide,0},
            {slat_top_back_damage_unhide,0},
            {slat_top_back_damage_hide,0},
            {slat_top_back_destroyed_unhide,0},
            {slat_top_back_firegeo_hide,0},
            {slat_top_right_normal_hide,0},
            {slat_top_right_damage_unhide,0},
            {slat_top_right_damage_hide,0},
            {slat_top_right_destroyed_unhide,0},
            {slat_top_right_firegeo_hide,0},
            {slat_top_left_normal_hide,0},
            {slat_top_left_damage_unhide,0},
            {slat_top_left_damage_hide,0},
            {slat_top_left_destroyed_unhide,0},
            {slat_top_left_firegeo_hide,0}
		};
		hide[] =
		{
            clan,
            zasleh2,
            zasleh_1,
            light_l,
            light_r,
            light_r2,
            light_l2,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 2.448;
		verticalOffsetWorld = -0.091;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_APC_Wheeled_01_cannon_v2_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Crew_F;
	typicalCargo[] = {B_W_Soldier_F};

    /* Inventory */
	class TransportWeapons
	{
		weap_xx(arifle_MX_Black_F,2);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,12);
		mag_xx(100Rnd_65x39_caseless_black_mag,6);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(1Rnd_HE_Grenade_shell,3);
		mag_xx(3Rnd_HE_Grenade_shell,1);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,3);
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellGreen,8);
		mag_xx(SmokeShellOrange,8);
		mag_xx(SmokeShellBlue,8);
		mag_xx(NLAW_F,5);
		mag_xx(Titan_AT,2);
		mag_xx(Titan_AP,2);
		mag_xx(Titan_AA,2);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_wdl_F,2);
	};
    textureList[] = {WDL_01,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Armor_f_Aegis\APC_Wheeled_01\Data\APC_Wheeled_01_body_wdl_CO.paa",
		"\A3\Armor_F_Exp\APC_Wheeled_01\Data\APC_Wheeled_01_adds_olive_CO.paa",
		"\A3_Aegis\Armor_f_Aegis\APC_Wheeled_01\Data\APC_Wheeled_01_tows_wdl_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
		"\A3\Armor_F\Data\cage_olive_CO.paa"
	};
};
class B_W_APC_Wheeled_01_atgm_lxWS_v2: B_T_APC_Wheeled_01_atgm_lxWS_v2
{
    author = $STR_A3_A_Ravenholme;
    scope = public;
    scopeCurator = public;
    editorPreview = "\A3_Aegis\editorpreviews_f_aegis\Data\CfgVehicles\B_W_APC_Wheeled_01_atgm_lxWS_v2.jpg"; 
    side = TWest;
	faction = BLU_W_F;
	crew = B_W_Crew_F;
	typicalCargo[] = {B_W_Soldier_F};
    textureList[] = {WDL_01,1};
    hiddenSelectionsTextures[] = 
    {
      "A3_Aegis\Armor_f_Aegis\APC_Wheeled_01\data\APC_Wheeled_01_body_wdl_CO.paa",
      "A3\Armor_F_Exp\APC_Wheeled_01\data\APC_Wheeled_01_adds_olive_co.paa",
      "A3_Aegis\Armor_f_Aegis\APC_Wheeled_01\data\APC_Wheeled_01_tows_wdl_co.paa",
      "a3\Armor_F\Data\camonet_NATO_Green_CO.paa","a3\Armor_F\Data\cage_olive_CO.paa",
      "A3_Aegis\Armor_f_Aegis\APC_Wheeled_01\data\APC_Wheeled_01_lxws_wdl_CO.paa"
    };
    /* Inventory */
	class TransportWeapons
	{
		weap_xx(arifle_MX_Black_F,2);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,12);
		mag_xx(100Rnd_65x39_caseless_black_mag,6);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(1Rnd_HE_Grenade_shell,3);
		mag_xx(3Rnd_HE_Grenade_shell,1);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,3);
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellGreen,8);
		mag_xx(SmokeShellOrange,8);
		mag_xx(SmokeShellBlue,8);
		mag_xx(NLAW_F,5);
		mag_xx(Titan_AT,2);
		mag_xx(Titan_AP,2);
		mag_xx(Titan_AA,2);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_wdl_F,2);
	};
};
class B_T_APC_Wheeled_01_mortar_lxWS;
class B_W_APC_Wheeled_01_mortar_lxWS: B_T_APC_Wheeled_01_mortar_lxWS
{
    author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\editorpreviews_f_aegis\Data\CfgVehicles\B_W_APC_Wheeled_01_mortar_lxWS.jpg"; 
    side = TWest;
	faction = BLU_W_F;
	crew = B_W_Crew_F;
	typicalCargo[] = {B_W_Soldier_F};
    class TransportWeapons
   {
      class _xx_arifle_MX_khk_F
      {
         weapon = "arifle_MX_khk_F";
         count = 2;
      };
   };
   textureList[] = {WDL_01,1};
    hiddenSelectionsTextures[] = 
    {
      "A3_Aegis\Armor_f_Aegis\APC_Wheeled_01\data\APC_Wheeled_01_body_wdl_CO.paa",
      "A3\Armor_F_Exp\APC_Wheeled_01\data\APC_Wheeled_01_adds_olive_co.paa",
      "A3_Aegis\Armor_f_Aegis\APC_Wheeled_01\data\APC_Wheeled_01_tows_wdl_co.paa",
      "a3\Armor_F\Data\camonet_NATO_Green_CO.paa","a3\Armor_F\Data\cage_olive_CO.paa",
      "A3_Aegis\Armor_f_Aegis\APC_Wheeled_01\data\APC_Wheeled_01_lxws_wdl_CO.paa"
    };
};
class B_T_APC_Wheeled_01_command_lxWS;
class B_W_APC_Wheeled_01_command_lxWS: B_T_APC_Wheeled_01_command_lxWS
{
    author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\editorpreviews_f_aegis\Data\CfgVehicles\B_W_APC_Wheeled_01_command_lxWS.jpg"; 
    side = TWest;
	faction = BLU_W_F;
	crew = B_W_Crew_F;
	typicalCargo[] = {B_W_Soldier_F};
    class TransportWeapons
   {
      class _xx_arifle_MX_khk_F
      {
         weapon = "arifle_MX_khk_F";
         count = 2;
      };
   };
   textureList[] = {WDL_01,1};
    hiddenSelectionsTextures[] = 
    {
      "A3_Aegis\Armor_f_Aegis\APC_Wheeled_01\data\APC_Wheeled_01_body_wdl_CO.paa",
      "A3\Armor_F_Exp\APC_Wheeled_01\data\APC_Wheeled_01_adds_olive_co.paa",
      "A3_Aegis\Armor_f_Aegis\APC_Wheeled_01\data\APC_Wheeled_01_tows_wdl_co.paa",
      "a3\Armor_F\Data\camonet_NATO_Green_CO.paa","a3\Armor_F\Data\cage_olive_CO.paa",
      "A3_Aegis\Armor_f_Aegis\APC_Wheeled_01\data\APC_Wheeled_01_lxws_wdl_CO.paa"
    };
};

/*
class B_W_APC_Wheeled_01_arty_F: B_APC_Wheeled_01_arty_F
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
            {wheel_1_1_damper,0.48},
            {wheel_2_1_damper,0.48},
            {wheel_1_2_damper,0.5},
            {wheel_1_3_damper,0.52},
            {wheel_2_2_damper,0.49},
            {wheel_2_3_damper,0.52},
            {wheel_1_4_damper,0.53},
            {wheel_2_4_damper,0.53},
            {steering_1_1,0},
            {steering_2_1,0},
            {steering_1_2,0},
            {steering_2_2,0},
            {hatchdriver,0},
            {mainturret,0},
            {turretbase,0},
            {maingun,0},
            {obsturret,0},
            {obsgun,0},
            {damagehlaven,0},
            {damagecamonet,0},
            {vrtulea,0},
            {vrtuleb,0},
            {poklop_gunner,0},
            {poklop_commander,0},
            {zasleh_rot,307},
            {zasleh2_rot,589.52},
            {zasleh_hide,0},
            {reverse_light,0},
            {drivingwheel,0},
            {indicatortempoil,0},
            {indicatortempwater,0},
            {indicatorammeter,0},
            {indicatorammeter_turret,0},
            {indicatorspeed_mfd_driver,0},
            {indicatorrpm,0},
            {indicatorrpm_mfd_driver,0},
            {lights_driver,0},
            {lights_driver_off,0},
            {lights_turret,0},
            {lights_turret_off,0},
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
            {driver_reverse_cam_nopip,0},
            {driver_hide_mfd,0},
            {indicatortempwater_mfd_driver,0},
            {indicatorfuel_mfd_driver,1},
            {indicator_hull_direction_mfd_driver,0},
            {indicator_main_turret_mfd_driver,0},
            {indicator_com_turret_mfd_driver,0},
            {indicator_com_turret_counter_mfd_driver,0},
            {indicator_main_turret_mfd_com,0},
            {indicator_main_turret_onscreen_com,0},
            {indicator_com_turret_mfd_com,0},
            {indicator_com_turret_onscreen_com,0},
            {indicator_com_turret_counter_mfd_com,0},
            {indicator_hull_direction_mfd_gunner,0},
            {indicator_main_turret_mfd_gunner,0},
            {indicator_com_turret_mfd_gunner,0},
            {indicator_com_turret_counter_mfd_gunner,0},
            {indicator_damage_engine,0},
            {indicator_damage_fuel,0},
            {indicator_damage_wheels,0},
            {indicator_turret_damage_hull,0},
            {indicator_turret_damage_engine,0},
            {indicator_turret_damage_fuel,0},
            {indicator_turret_damage_main_gun,0},
            {indicator_turret_damage_wheels,0},
            {indicator_turret_damage_turret,0},
            {hide_mfd_and_pip_screen_driver,1},
            {hide_mfd_and_pip_screen_gunner,1},
            {hide_mfd_elements,1},
            {showbags_damage,0},
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
            {slat_right_3_firegeo_hide,0},
            {slat_top_back_normal_hide,0},
            {slat_top_back_damage_unhide,0},
            {slat_top_back_damage_hide,0},
            {slat_top_back_destroyed_unhide,0},
            {slat_top_back_firegeo_hide,0},
            {slat_top_right_normal_hide,0},
            {slat_top_right_damage_unhide,0},
            {slat_top_right_damage_hide,0},
            {slat_top_right_destroyed_unhide,0},
            {slat_top_right_firegeo_hide,0},
            {slat_top_left_normal_hide,0},
            {slat_top_left_damage_unhide,0},
            {slat_top_left_damage_hide,0},
            {slat_top_left_destroyed_unhide,0},
            {slat_top_left_firegeo_hide,0}
		};
		hide[] =
		{
            clan,
            zasleh2,
            zasleh_1,
            light_l,
            light_r,
            light_r2,
            light_l2,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 2.448;
		verticalOffsetWorld = -0.091;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_APC_Wheeled_01_arty_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Crew_F;
	typicalCargo[] = {B_W_Soldier_F};

    // Inventory
	class TransportWeapons
	{
		weap_xx(arifle_MX_Black_F,2);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,12);
		mag_xx(100Rnd_65x39_caseless_black_mag,6);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(1Rnd_HE_Grenade_shell,3);
		mag_xx(3Rnd_HE_Grenade_shell,1);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,3);
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellGreen,8);
		mag_xx(SmokeShellOrange,8);
		mag_xx(SmokeShellBlue,8);
		mag_xx(NLAW_F,5);
		mag_xx(Titan_AT,2);
		mag_xx(Titan_AP,2);
		mag_xx(Titan_AA,2);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_wdl_F,2);
	};
    
	hiddenSelectionsTextures[] =
	{
		"\A3\Armor_F_Exp\APC_Wheeled_01\Data\APC_Wheeled_01_base_olive_CO.paa",
		"\A3\Armor_F_Exp\APC_Wheeled_01\Data\APC_Wheeled_01_adds_olive_CO.paa",
		"\A3\Armor_F_Exp\APC_Wheeled_01\Data\APC_Wheeled_01_tows_olive_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
		"\A3\Armor_F\Data\cage_olive_CO.paa"
	};
};
*/

/* BAF */

/* BAF (Pacific) */

/* BAF (Woodland) */