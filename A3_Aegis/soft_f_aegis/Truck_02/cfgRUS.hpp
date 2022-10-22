/* Russia */
class O_R_Truck_02_F: O_Truck_02_covered_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_02_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_Soldier_F;
	typicalCargo[] = {O_R_Soldier_F};
	textureList[] = {Green,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUkhk_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
	};
};
class O_R_Truck_02_transport_F: O_Truck_02_transport_F
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
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_02_transport_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TEast;
    faction = OPF_R_F;
    crew = O_R_Soldier_F;
    typicalCargo[] = {O_R_Soldier_F};
	textureList[] = {Green,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUkhk_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
	};
};
class O_R_Truck_02_box_F: O_Truck_02_box_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_02_box_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_Soldier_F;
	typicalCargo[] = {O_R_Soldier_F};
	textureList[] = {Green,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_repair_RUkhk_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
	};
};
class O_R_Truck_02_medical_F: O_Truck_02_medical_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_02_medical_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_Soldier_F;
	typicalCargo[] = {O_R_Soldier_F};
	textureList[] = {Green,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUkhk_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
	};
};
class O_R_Truck_02_Ammo_F: O_Truck_02_Ammo_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_02_Ammo_F.jpg";
	scope = public;
	scopeCurator = public;
	scopeArsenal = private;
	forceInGarage = false;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_Soldier_F;
	typicalCargo[] = {O_R_Soldier_F};
	textureList[] = {Green,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_repair_RUkhk_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
	};
};
class O_R_Truck_02_fuel_F: O_Truck_02_fuel_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_02_fuel_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_Soldier_F;
	typicalCargo[] = {O_R_Soldier_F};
	textureList[] = {Green,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_fuel_RUkhk_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
	};
};
class O_R_Truck_02_MRL_F: O_Truck_02_MRL_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_02_MRL_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_Soldier_F;
	typicalCargo[] = {O_R_Soldier_F};
	textureList[] = {Green,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_MRL_RUkhk_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
	};
};

/* Russia (Mediterranean) */
class O_R_Truck_02_ard_F: O_R_Truck_02_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_02_ard_F.jpg";
	faction = OPF_R_ard_F;
	crew = O_R_Soldier_ard_F;
	typicalCargo[] = {O_R_Soldier_ard_F};
};
class O_R_Truck_02_transport_ard_F: O_R_Truck_02_transport_F
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
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_02_transport_ard_F.jpg";
    faction = OPF_R_ard_F;
    crew = O_R_Soldier_ard_F;
    typicalCargo[] = {O_R_Soldier_ard_F};
};
class O_R_Truck_02_box_ard_F: O_R_Truck_02_box_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_02_box_ard_F.jpg";
	faction = OPF_R_ard_F;
	crew = O_R_Soldier_ard_F;
	typicalCargo[] = {O_R_Soldier_ard_F};
};
class O_R_Truck_02_medical_ard_F: O_R_Truck_02_medical_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_02_medical_ard_F.jpg";
	faction = OPF_R_ard_F;
	crew = O_R_Soldier_ard_F;
	typicalCargo[] = {O_R_Soldier_ard_F};
};
class O_R_Truck_02_Ammo_ard_F: O_R_Truck_02_Ammo_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_02_Ammo_ard_F.jpg";
	faction = OPF_R_ard_F;
	crew = O_R_Soldier_ard_F;
	typicalCargo[] = {O_R_Soldier_ard_F};
};
class O_R_Truck_02_fuel_ard_F: O_R_Truck_02_fuel_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_02_fuel_ard_F.jpg";
	faction = OPF_R_ard_F;
	crew = O_R_Soldier_ard_F;
	typicalCargo[] = {O_R_Soldier_ard_F};
};
class O_R_Truck_02_MRL_ard_F: O_R_Truck_02_MRL_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Truck_02_MRL_ard_F.jpg";
	faction = OPF_R_ard_F;
	crew = O_R_Soldier_ard_F;
	typicalCargo[] = {O_R_Soldier_ard_F};
};