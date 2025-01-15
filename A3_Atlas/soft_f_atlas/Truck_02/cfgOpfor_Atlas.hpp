class Atlas_O_T_Truck_02_F: O_Truck_02_covered_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_Truck_02_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Atlas_OPF_T_F;
	crew = Atlas_O_T_soldier_F;
	typicalCargo[] = {Atlas_O_T_soldier_F};
	textureList[] = {Takistan,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_tk_CO.paa",
		"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kuz_tk_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
	};
};
class Atlas_O_T_Truck_02_transport_F: O_Truck_02_transport_F
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
    editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_Truck_02_transport_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TEast;
    faction = Atlas_OPF_T_F;
    crew = Atlas_O_T_soldier_F;
    typicalCargo[] = {Atlas_O_T_soldier_F};
    textureList[] = {Takistan,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_tk_CO.paa",
		"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kuz_tk_CO.paa",
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
    };
};
class Atlas_O_T_Truck_02_box_F: O_Truck_02_box_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_Truck_02_box_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Atlas_OPF_T_F;
	crew = Atlas_O_T_soldier_F;
	typicalCargo[] = {Atlas_O_T_soldier_F};
	textureList[] = {Takistan,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_tk_CO.paa",
		"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_repair_tk_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa",
		"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
	};
};
class Atlas_O_T_Truck_02_medical_F: O_Truck_02_medical_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_Truck_02_medical_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Atlas_OPF_T_F;
	crew = Atlas_O_T_soldier_F;
	typicalCargo[] = {Atlas_O_T_soldier_F};
	textureList[] = {Takistan,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_tk_CO.paa",
		"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kuz_tk_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
	};
};
class Atlas_O_T_Truck_02_Ammo_F: O_Truck_02_Ammo_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_Truck_02_Ammo_F.jpg";
	scope = public;
	scopeCurator = public;
	scopeArsenal = private;
	forceInGarage = false;
	side = TEast;
	faction = Atlas_OPF_T_F;
	crew = Atlas_O_T_soldier_F;
	typicalCargo[] = {Atlas_O_T_soldier_F};
	textureList[] = {Takistan,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_tk_CO.paa",
		"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_repair_tk_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa",
		"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
	};
};
class Atlas_O_T_Truck_02_fuel_F: O_Truck_02_fuel_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_Truck_02_fuel_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Atlas_OPF_T_F;
	crew = Atlas_O_T_soldier_F;
	typicalCargo[] = {Atlas_O_T_soldier_F};
	textureList[] = {Takistan,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_tk_CO.paa",
		"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_fuel_tk_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
	};
};
class Atlas_O_T_Truck_02_cargo_F: Truck_02_cargo_base_lxWS
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
		{
			eden = true;
			animate[] = {{damagehidevez,0},{damagehidehlaven,0},{wheel_1_1_destruct,0},{wheel_1_2_destruct,0},{wheel_1_3_destruct,0},{wheel_1_4_destruct,0},{wheel_2_1_destruct,0},{wheel_2_2_destruct,0},{wheel_2_3_destruct,0},{wheel_2_4_destruct,0},{wheel_1_1_destruct_unhide,0},{wheel_1_2_destruct_unhide,0},{wheel_1_3_destruct_unhide,0},{wheel_1_4_destruct_unhide,0},{wheel_2_1_destruct_unhide,0},{wheel_2_2_destruct_unhide,0},{wheel_2_3_destruct_unhide,0},{wheel_2_4_destruct_unhide,0},{wheel_1_4_damage,0},{wheel_2_4_damage,0},{wheel_1_4_damper_damage_backanim,0},{wheel_2_4_damper_damage_backanim,0},{glass1_destruct,0},{glass2_destruct,0},{glass3_destruct,0},{glass4_destruct,0},{glass5_destruct,0},{glass6_destruct,0},{wheel_1_1,0},{wheel_2_1,0},{wheel_1_2,0},{wheel_2_2,0},{daylights,0},{reverse_light,1},{pedal_thrust,0},{pedal_brake,0},{wheel_1_1_damage,0},{wheel_1_2_damage,0},{wheel_1_3_damage,0},{wheel_2_1_damage,0},{wheel_2_2_damage,0},{wheel_2_3_damage,0},{wheel_1_1_damper_damage_backanim,0},{wheel_1_2_damper_damage_backanim,0},{wheel_1_3_damper_damage_backanim,0},{wheel_2_1_damper_damage_backanim,0},{wheel_2_2_damper_damage_backanim,0},{wheel_2_3_damper_damage_backanim,0},{wheel_1_3,0},{wheel_2_3,0},{wheel_1_1_damper,0},{wheel_2_1_damper,0},{wheel_1_2_damper,0},{wheel_2_2_damper,0},{wheel_1_3_damper,0},{wheel_2_3_damper,0},{damagehide,0},{rear_damagehide,0},{rear_hide,0},{indicatorspeed,0},{indicatorrpm,0},{ventilate,0},{indicatoroiltemp,0},{fuel,1},{drivingwheel,0},{steering_1_1,0},{steering_2_1,0},{door_lf,0},{door_rf,0}};
			hide[] = {clan,zasleh,light_l,light_r,zadni svetlo,brzdove svetlo,podsvit pristroju,poskozeni};
			verticalOffset = 2.179;
			verticalOffsetWorld = -0.202;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_Truck_02_cargo_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_Truck_02_cargo_base_F0;
	side = TEast;
	faction = Atlas_OPF_T_F;
	crew = Atlas_O_T_soldier_F;
	typicalCargo[] = {Atlas_O_T_soldier_F};
	textureList[] = {Takistan,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_tk_CO.paa",
		"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kuz_tk_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa",
		"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
	};
};
class Atlas_O_T_Truck_02_flatbed_F: Truck_02_flatbed_base_lxWS
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
		{
			eden = true;
			animate[] = {{damagehidevez,0},{damagehidehlaven,0},{wheel_1_1_destruct,0},{wheel_1_2_destruct,0},{wheel_1_3_destruct,0},{wheel_1_4_destruct,0},{wheel_2_1_destruct,0},{wheel_2_2_destruct,0},{wheel_2_3_destruct,0},{wheel_2_4_destruct,0},{wheel_1_1_destruct_unhide,0},{wheel_1_2_destruct_unhide,0},{wheel_1_3_destruct_unhide,0},{wheel_1_4_destruct_unhide,0},{wheel_2_1_destruct_unhide,0},{wheel_2_2_destruct_unhide,0},{wheel_2_3_destruct_unhide,0},{wheel_2_4_destruct_unhide,0},{wheel_1_4_damage,0},{wheel_2_4_damage,0},{wheel_1_4_damper_damage_backanim,0},{wheel_2_4_damper_damage_backanim,0},{glass1_destruct,0},{glass2_destruct,0},{glass3_destruct,0},{glass4_destruct,0},{glass5_destruct,0},{glass6_destruct,0},{wheel_1_1,0},{wheel_2_1,0},{wheel_1_2,0},{wheel_2_2,0},{daylights,0},{reverse_light,1},{pedal_thrust,0},{pedal_brake,0},{wheel_1_1_damage,0},{wheel_1_2_damage,0},{wheel_1_3_damage,0},{wheel_2_1_damage,0},{wheel_2_2_damage,0},{wheel_2_3_damage,0},{wheel_1_1_damper_damage_backanim,0},{wheel_1_2_damper_damage_backanim,0},{wheel_1_3_damper_damage_backanim,0},{wheel_2_1_damper_damage_backanim,0},{wheel_2_2_damper_damage_backanim,0},{wheel_2_3_damper_damage_backanim,0},{wheel_1_3,0},{wheel_2_3,0},{wheel_1_1_damper,0},{wheel_2_1_damper,0},{wheel_1_2_damper,0},{wheel_2_2_damper,0},{wheel_1_3_damper,0},{wheel_2_3_damper,0},{damagehide,0},{rear_damagehide,0},{rear_hide,0},{indicatorspeed,0},{indicatorrpm,0},{ventilate,0},{indicatoroiltemp,0},{fuel,1},{drivingwheel,0},{steering_1_1,0},{steering_2_1,0},{door_lf,0},{door_rf,0}};
			hide[] = {clan,zasleh,light_l,light_r,zadni svetlo,brzdove svetlo,podsvit pristroju,poskozeni};
			verticalOffset = 2.179;
			verticalOffsetWorld = -0.202;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_Truck_02_flatbed_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_Truck_02_flatbed_base_F0;
	side = TEast;
	faction = Atlas_OPF_T_F;
	crew = Atlas_O_T_soldier_F;
	typicalCargo[] = {Atlas_O_T_soldier_F};
	textureList[] = {Takistan,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_tk_CO.paa",
		"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kuz_tk_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa",
		"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
	};
};
class Atlas_O_T_Truck_02_aa_lxWS: Truck_02_aa_base_lxWS
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_Truck_02_aa_lxWS.jpg";
	side = TEast;
	faction = Atlas_OPF_T_F;
	crew = Atlas_O_T_soldier_F;
	typicalCargo[] = {Atlas_O_T_soldier_F};
	textureList[] = {Takistan,1};
	animationList[] = {"hideSpareWheel",0.5, "hideBumper",1, "hideWindowProtector",0, "hideCrates",0, "shield_hide", 1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_tk_CO.paa",
		"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kuz_tk_CO.paa",
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa",
		"lxws\vehicles_f_lxws\zu23\data\zu23_base_green_co.paa",
		"lxws\vehicles_f_lxws\zu23\data\zu23_green_co.paa",
		"lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_green_co.paa",
		"lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_green_co.paa",
		"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
	};
};
class Atlas_O_T_Truck_02_MRL_F: O_Truck_02_MRL_F
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	scopeCurator = public;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_T_Truck_02_MRL_F.jpg";
	side = TEast;
	faction = Atlas_OPF_T_F;
	crew = Atlas_O_T_soldier_F;
	typicalCargo[] = {Atlas_O_T_soldier_F};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_tk_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
		"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_MLR_tk_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
	};
};