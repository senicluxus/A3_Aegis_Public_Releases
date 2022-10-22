class Atlas_B_H_Truck_02_F: Truck_02_base_F
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
		verticalOffset = 2.18;
		verticalOffsetWorld = -0.202;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_H_Truck_02_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Atlas_BLU_H_F;
	crew = Atlas_B_H_Soldier_F;
	typicalCargo[] = {Atlas_B_H_Soldier_F};
	textureList[] = {Jungle,1};
	transportSoldier = 14;
	cargoProxyIndexes[] =
    {
        1,
        2,
        3,
        4,
        5,
        6,
        7,
        8,
        9,
        10,
        11,
        12,
        13,
        14
    };
	getInProxyOrder[] =
    {
        1,
        2,
        3,
        4,
        5,
        6,
        7,
        8,
        9,
        10,
        11,
        12,
        13,
        14,
        15,
        16
    };
	class CargoTurret;
	class Turrets: Turrets
	{
		class CargoTurret_01: CargoTurret
		{
			gunnerAction = passenger_inside_3;
			memoryPointsGetInGunner = "pos cargo LR";
			memoryPointsGetInGunnerDir = "pos cargo LR dir";
			gunnerName = $STR_A3_TURRETS_CARGOTURRET_L;
			gunnerCompartments = Compartment2;
			proxyIndex = 15;
			isPersonTurret = true;
			class TurnIn
			{
				limitsArrayTop[] =
                {
                    {-5.9651,-65.8681},
                    {6.3442,-42.6425},
                    {4.0929,-7.8701},
                    {-2.3451,2.5708}
                };
				limitsArrayBottom[] =
                {
                    {-44.4687,-70.9972},
                    {-23.5626,5.0429}
                };
			};
		};
		class CargoTurret_02: CargoTurret_01
		{
			gunnerName = $STR_A3_TURRETS_CARGOTURRET_R;
			memoryPointsGetInGunner = "pos cargo RR";
			memoryPointsGetInGunnerDir = "pos cargo RR dir";
			proxyIndex = 16;
			class TurnIn
			{
				limitsArrayTop[] =
                {
                    {-9.815,-4.5301},
                    {-1.5719,-1.2185},
                    {4.505,16.3857},
                    {2.004,46.8344},
                    {-14.3588,76.1193},
                    {-21.8244,80.0}
                };
				limitsArrayBottom[] =
                {
                    {-22.8074,-7.2107},
                    {-44.7521,10.6169},
                    {-44.8467,80.0}
                };
			};
		};
	};
	hiddenSelections[] =
    {
        camo1,
        camo2,
        camo3,
        camo4
    };
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_jungle_CO.paa",
		"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kuz_jungle_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
		"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_chassis_jungle_CO.paa"
	};
};
class Atlas_B_H_Truck_02_transport_F: Truck_02_transport_base_F
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
		verticalOffset = 2.18;
		verticalOffsetWorld = -0.202;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_H_Truck_02_transport_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_C_Truck_02_Dump0;
	side = TWest;
	faction = Atlas_BLU_H_F;
	crew = Atlas_B_H_Soldier_F;
	typicalCargo[] = {Atlas_B_H_Soldier_F};
	textureList[] = {Jungle,1};
	hiddenSelections[] =
    {
        camo1,
        camo2,
        camo3,
        camo4
    };
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_jungle_CO.paa",
		"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kuz_jungle_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
		"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_chassis_jungle_CO.paa"
	};
};
class Atlas_B_H_Truck_02_cargo_F: Truck_02_cargo_base_lxWS
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_H_Truck_02_cargo_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_Truck_02_cargo_base_F0;
	side = TWest;
	faction = Atlas_BLU_H_F;
	crew = Atlas_B_H_Soldier_F;
	typicalCargo[] = {Atlas_B_H_Soldier_F};
	textureList[] = {Jungle,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_jungle_CO.paa",
		"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kuz_jungle_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
		"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_chassis_jungle_CO.paa",
		"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
	};
};
class Atlas_B_H_Truck_02_flatbed_F: Truck_02_flatbed_base_lxWS
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_H_Truck_02_flatbed_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_Truck_02_flatbed_base_F0;
	side = TWest;
	faction = Atlas_BLU_H_F;
	crew = Atlas_B_H_Soldier_F;
	typicalCargo[] = {Atlas_B_H_Soldier_F};
	textureList[] = {Jungle,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kab_jungle_CO.paa",
		"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_kuz_jungle_CO.paa",
		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
		"\A3_Atlas\Soft_F_Atlas\Truck_02\Data\Truck_02_chassis_jungle_CO.paa",
		"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
	};
};