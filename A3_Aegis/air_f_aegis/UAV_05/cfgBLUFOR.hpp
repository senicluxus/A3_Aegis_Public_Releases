/* US */
class B_UAV_05_F;

/* US (Pacific) */
class B_T_UAV_05_F: B_UAV_05_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {damagehide,0},
            {engine_fire_l,0},
            {engine_fire_right,0},
            {weapons_bay_l_1,0},
            {weapons_bay_l_2,0},
            {weapons_bay_r_1,0},
            {weapons_bay_r_2,0},
            {weapons_rack_l_1,0},
            {weapons_rack_l_2,0},
            {weapons_rack_l_3,0},
            {weapons_rack_r_1,0},
            {weapons_rack_r_2,0},
            {weapons_rack_r_3,0},
            {gear_door_f_1,0},
            {gear_door_f_2,0},
            {gear_door_l_1,0},
            {gear_door_l_2,0},
            {gear_door_r_1,0},
            {gear_door_r_2,0},
            {gear_front_hydraulic_4,0},
            {gear_front,0},
            {gear_front_hydraulic_1,0},
            {gear_front_hook,0},
            {gear_front_hydraulic_2,0},
            {gear_front_hydraulic_3,0},
            {gear_front_stearing,0},
            {gear_front_suspension,0},
            {gear_front_suspension_1,0},
            {gear_front_suspension_2,0},
            {gear_rear_l,0},
            {gear_rear_hydraulic_l_1,0},
            {gear_rear_hydraulic_l_2,0},
            {gear_rear_rotate_l,0},
            {gear_rear_suspension_l,0},
            {gear_rear_suspension_l_1,0},
            {gear_rear_suspension_l_2,0},
            {gear_rear_r,0},
            {gear_rear_hydraulic_r_1,0},
            {gear_rear_hydraulic_r_2,0},
            {gear_rear_rotate_r,0},
            {gear_rear_suspension_r,0},
            {gear_rear_suspension_r_1,0},
            {gear_rear_suspension_r_2,0},
            {wheels_f,0},
            {wheel_l,0},
            {wheel_r,0},
            {aileron_l,0},
            {aileron_r,0},
            {airbrake_l,0},
            {airbrake_r,0},
            {rudder_l,0},
            {rudder_r,0},
            {elevator_l_1,0},
            {elevator_l_2,0},
            {elevator_r_1,0},
            {elevator_r_2,0},
            {flap_l,0},
            {flap_r,0},
            {mainturret,0},
            {maingun,-0.79},
            {collision_lights_l,0},
            {collision_lights_r,0},
            {collision_lights_c1_blinking,0}
        };
		hide[] =
        {
            clan,
            zasleh,
            gear_front_light,
            "zadni svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 1.791;
		verticalOffsetWorld = -0.064;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_UAV_05_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_T_F;
	crew = B_UAV_AI;
	typicalCargo[] = {B_UAV_AI};
};

/* US (Woodland) */
class B_W_UAV_05_F: B_UAV_05_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {damagehide,0},
            {engine_fire_l,0},
            {engine_fire_right,0},
            {weapons_bay_l_1,0},
            {weapons_bay_l_2,0},
            {weapons_bay_r_1,0},
            {weapons_bay_r_2,0},
            {weapons_rack_l_1,0},
            {weapons_rack_l_2,0},
            {weapons_rack_l_3,0},
            {weapons_rack_r_1,0},
            {weapons_rack_r_2,0},
            {weapons_rack_r_3,0},
            {gear_door_f_1,0},
            {gear_door_f_2,0},
            {gear_door_l_1,0},
            {gear_door_l_2,0},
            {gear_door_r_1,0},
            {gear_door_r_2,0},
            {gear_front_hydraulic_4,0},
            {gear_front,0},
            {gear_front_hydraulic_1,0},
            {gear_front_hook,0},
            {gear_front_hydraulic_2,0},
            {gear_front_hydraulic_3,0},
            {gear_front_stearing,0},
            {gear_front_suspension,0},
            {gear_front_suspension_1,0},
            {gear_front_suspension_2,0},
            {gear_rear_l,0},
            {gear_rear_hydraulic_l_1,0},
            {gear_rear_hydraulic_l_2,0},
            {gear_rear_rotate_l,0},
            {gear_rear_suspension_l,0},
            {gear_rear_suspension_l_1,0},
            {gear_rear_suspension_l_2,0},
            {gear_rear_r,0},
            {gear_rear_hydraulic_r_1,0},
            {gear_rear_hydraulic_r_2,0},
            {gear_rear_rotate_r,0},
            {gear_rear_suspension_r,0},
            {gear_rear_suspension_r_1,0},
            {gear_rear_suspension_r_2,0},
            {wheels_f,0},
            {wheel_l,0},
            {wheel_r,0},
            {aileron_l,0},
            {aileron_r,0},
            {airbrake_l,0},
            {airbrake_r,0},
            {rudder_l,0},
            {rudder_r,0},
            {elevator_l_1,0},
            {elevator_l_2,0},
            {elevator_r_1,0},
            {elevator_r_2,0},
            {flap_l,0},
            {flap_r,0},
            {mainturret,0},
            {maingun,-0.79},
            {collision_lights_l,0},
            {collision_lights_r,0},
            {collision_lights_c1_blinking,0}
        };
		hide[] =
        {
            clan,
            zasleh,
            gear_front_light,
            "zadni svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 1.791;
		verticalOffsetWorld = -0.064;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_UAV_05_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_UAV_AI;
	typicalCargo[] = {B_UAV_AI};
};