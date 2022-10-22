class Atlas_O_W_Truck_03_transport_ghex_F: O_Truck_03_transport_F
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
            {indicatorspeed,0},
            {indicatorrpm,0},
            {indicatoroiltemp,0.01},
            {indicatorenginetemp,0},
            {indicatorenginetemp2,0},
            {indicatorenginetemp3,0},
            {fuel,0.01},
            {drivingwheel,0},
            {steering_1_1,0},
            {steering_2_1,0},
            {steering_1_2,0},
            {steering_2_2,0}
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
		verticalOffset = 2.257;
		verticalOffsetWorld = -0.159;
		init = "''";
	};
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Truck_03_transport_ghex_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Atlas_OPF_W_F;
	crew = Atlas_O_W_Soldier_F;
	typicalCargo[] =
    {
        Atlas_O_W_Soldier_F,
        Atlas_O_W_Soldier_F
    };
	textureList[] = {GreenHex,1};
	hiddenSelectionsTextures[] =
    {
		"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
		"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
		"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa"
    };
};
class Atlas_O_W_Truck_03_covered_ghex_F: O_Truck_03_covered_F
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
            {indicatorspeed,0},
            {indicatorrpm,0},
            {indicatoroiltemp,0.01},
            {indicatorenginetemp,0},
            {indicatorenginetemp2,0},
            {indicatorenginetemp3,0},
            {fuel,0.01},
            {drivingwheel,0},
            {steering_1_1,0},
            {steering_2_1,0},
            {steering_1_2,0},
            {steering_2_2,0}
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
		verticalOffset = 2.285;
		verticalOffsetWorld = -0.131;
		init = "''";
	};
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Truck_03_covered_ghex_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Atlas_OPF_W_F;
	crew = Atlas_O_W_Soldier_F;
	typicalCargo[] =
    {
        Atlas_O_W_Soldier_F,
        Atlas_O_W_Soldier_F
    };
	textureList[] = {GreenHex,1};
	hiddenSelectionsTextures[] =
    {
		"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
		"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
		"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa",
		"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cover_ghex_CO.paa"
    };
};
class Atlas_O_W_Truck_03_repair_ghex_F: O_Truck_03_repair_F
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
            {indicatorspeed,0},
            {indicatorrpm,0},
            {indicatoroiltemp,0},
            {indicatorenginetemp,0},
            {indicatorenginetemp2,0},
            {indicatorenginetemp3,0},
            {fuel,0},
            {drivingwheel,0},
            {steering_1_1,0},
            {steering_2_1,0},
            {steering_1_2,0},
            {steering_2_2,0}
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
		verticalOffset = 2.008;
		verticalOffsetWorld = -0.141;
		init = "''";
	};
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Truck_03_repair_ghex_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Atlas_OPF_W_F;
	crew = Atlas_O_W_Soldier_F;
	typicalCargo[] =
    {
        Atlas_O_W_Soldier_F,
        Atlas_O_W_Soldier_F
    };
	textureList[] = {GreenHex,1};
	hiddenSelectionsTextures[] =
    {
		"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
		"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
		"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ammo_ghex_CO.paa"
    };
};
class Atlas_O_W_Truck_03_ammo_ghex_F: O_Truck_03_ammo_F
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
            {indicatorspeed,0},
            {indicatorrpm,0},
            {indicatoroiltemp,0.01},
            {indicatorenginetemp,0},
            {indicatorenginetemp2,0},
            {indicatorenginetemp3,0},
            {fuel,0.01},
            {drivingwheel,0},
            {steering_1_1,0},
            {steering_2_1,0},
            {steering_1_2,0},
            {steering_2_2,0}
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
		verticalOffset = 1.97;
		verticalOffsetWorld = -0.178;
		init = "''";
	};
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Truck_03_ammo_ghex_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Atlas_OPF_W_F;
	crew = Atlas_O_W_Soldier_F;
	typicalCargo[] =
    {
        Atlas_O_W_Soldier_F,
        Atlas_O_W_Soldier_F
    };
	textureList[] = {GreenHex,1};
	hiddenSelectionsTextures[] =
    {
		"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
		"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
		"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Containers_02_set_ghex_CO.paa"
    };
};
class Atlas_O_W_Truck_03_fuel_ghex_F: O_Truck_03_fuel_F
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
            {indicatorspeed,0},
            {indicatorrpm,0},
            {indicatoroiltemp,0.01},
            {indicatorenginetemp,0},
            {indicatorenginetemp2,0},
            {indicatorenginetemp3,0},
            {fuel,0.01},
            {drivingwheel,0},
            {steering_1_1,0},
            {steering_2_1,0},
            {steering_1_2,0},
            {steering_2_2,0}
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
		verticalOffset = 1.95;
		verticalOffsetWorld = -0.199;
		init = "''";
	};
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Truck_03_fuel_ghex_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Atlas_OPF_W_F;
	crew = Atlas_O_W_Soldier_F;
	typicalCargo[] =
    {
        Atlas_O_W_Soldier_F,
        Atlas_O_W_Soldier_F
    };
	textureList[] = {GreenHex,1};
	hiddenSelectionsTextures[] =
    {
		"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
		"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
		"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_fuel_ghex_CO.paa"
    };
};
class Atlas_O_W_Truck_03_medical_ghex_F: O_Truck_03_medical_F
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
            {indicatorspeed,0},
            {indicatorrpm,0},
            {indicatoroiltemp,0.01},
            {indicatorenginetemp,0},
            {indicatorenginetemp2,0},
            {indicatorenginetemp3,0},
            {fuel,0.01},
            {drivingwheel,0},
            {steering_1_1,0},
            {steering_2_1,0},
            {steering_1_2,0},
            {steering_2_2,0}
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
		verticalOffset = 2.291;
		verticalOffsetWorld = -0.131;
		init = "''";
	};
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Truck_03_medical_ghex_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Atlas_OPF_W_F;
	crew = Atlas_O_W_Soldier_F;
	typicalCargo[] =
    {
        Atlas_O_W_Soldier_F,
        Atlas_O_W_Soldier_F
    };
	textureList[] = {GreenHex,1};
	hiddenSelectionsTextures[] =
    {
		"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
		"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
		"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa",
		"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cover_ghex_CO.paa"
    };
};