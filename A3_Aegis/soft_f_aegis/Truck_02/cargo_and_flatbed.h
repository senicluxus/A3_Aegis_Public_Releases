	#define SIMPLE_OBJECT\
		class SimpleObject\
		{\
			eden = true;\
			animate[] = {{damagehidevez,0},{damagehidehlaven,0},{wheel_1_1_destruct,0},{wheel_1_2_destruct,0},{wheel_1_3_destruct,0},{wheel_1_4_destruct,0},{wheel_2_1_destruct,0},{wheel_2_2_destruct,0},{wheel_2_3_destruct,0},{wheel_2_4_destruct,0},{wheel_1_1_destruct_unhide,0},{wheel_1_2_destruct_unhide,0},{wheel_1_3_destruct_unhide,0},{wheel_1_4_destruct_unhide,0},{wheel_2_1_destruct_unhide,0},{wheel_2_2_destruct_unhide,0},{wheel_2_3_destruct_unhide,0},{wheel_2_4_destruct_unhide,0},{wheel_1_4_damage,0},{wheel_2_4_damage,0},{wheel_1_4_damper_damage_backanim,0},{wheel_2_4_damper_damage_backanim,0},{glass1_destruct,0},{glass2_destruct,0},{glass3_destruct,0},{glass4_destruct,0},{glass5_destruct,0},{glass6_destruct,0},{wheel_1_1,0},{wheel_2_1,0},{wheel_1_2,0},{wheel_2_2,0},{daylights,0},{reverse_light,1},{pedal_thrust,0},{pedal_brake,0},{wheel_1_1_damage,0},{wheel_1_2_damage,0},{wheel_1_3_damage,0},{wheel_2_1_damage,0},{wheel_2_2_damage,0},{wheel_2_3_damage,0},{wheel_1_1_damper_damage_backanim,0},{wheel_1_2_damper_damage_backanim,0},{wheel_1_3_damper_damage_backanim,0},{wheel_2_1_damper_damage_backanim,0},{wheel_2_2_damper_damage_backanim,0},{wheel_2_3_damper_damage_backanim,0},{wheel_1_3,0},{wheel_2_3,0},{wheel_1_1_damper,0},{wheel_2_1_damper,0},{wheel_1_2_damper,0},{wheel_2_2_damper,0},{wheel_1_3_damper,0},{wheel_2_3_damper,0},{damagehide,0},{rear_damagehide,0},{rear_hide,0},{indicatorspeed,0},{indicatorrpm,0},{ventilate,0},{indicatoroiltemp,0},{fuel,1},{drivingwheel,0},{steering_1_1,0},{steering_2_1,0},{door_lf,0},{door_rf,0}};\
			hide[] = {clan,zasleh,light_l,light_r,zadni svetlo,brzdove svetlo,podsvit pristroju,poskozeni};\
			verticalOffset = 2.179;\
			verticalOffsetWorld = -0.202;\
			init = "[this, '', []] call bis_fnc_initVehicle";\
		}


////////////////////////////////////////////////////////
/// IAF
////////////////////////////////////////////////////////
class O_Truck_02_cargo_lxWS: Truck_02_cargo_base_lxWS
{
	hiddenSelections[] 			= {camo1, camo2, camo3, camo4, camo9};
	hiddenSelectionsTextures[] 	= {
									"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
        							"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_OPFOR_CO.paa",
        							"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
        							"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa",
									"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
								  };
};
class O_Truck_02_flatbed_lxWS: Truck_02_flatbed_base_lxWS
{
	hiddenSelections[] 			= {camo1, camo2, camo3, camo4, camo9};
	hiddenSelectionsTextures[] 	= {
									"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
        							"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_OPFOR_CO.paa",
        							"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
        							"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa",
									"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
								  };
};
DEPRECATED_CLASS(O_Truck_02_cargo_F,O_Truck_02_cargo_lxWS);
DEPRECATED_CLASS(O_Truck_02_flatbed_F,O_Truck_02_flatbed_lxWS);



////////////////////////////////////////////////////////
/// AAF
////////////////////////////////////////////////////////
class I_Truck_02_cargo_lxWS: Truck_02_cargo_base_lxWS
{
	hiddenSelectionsTextures[] 	= {
									"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_indp_co.paa",
									"\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_indp_CO.paa",
									"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
									"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_INDP_CO.paa",
									"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
								  };
};
class I_Truck_02_flatbed_lxWS: Truck_02_flatbed_base_lxWS
{
	hiddenSelectionsTextures[] 	= {
									"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_indp_co.paa",
									"\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_indp_CO.paa",
									"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
									"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_INDP_CO.paa",
									"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
								  };
};
class I_A_Truck_02_aa_lxWS: Truck_02_aa_base_lxWS
{
	hiddenSelectionsTextures[] 	= {
									"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_indp_co.paa",
									"\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_indp_CO.paa",
									"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
									"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_INDP_CO.paa",
									"lxws\vehicles_f_lxws\zu23\data\zu23_base_green_co.paa",
									"lxws\vehicles_f_lxws\zu23\data\zu23_green_co.paa",
									"lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_green_co.paa",
									"lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_green_co.paa",
									"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
								  };
};
DEPRECATED_CLASS(I_Truck_02_cargo_F,I_Truck_02_cargo_lxWS);
DEPRECATED_CLASS(I_Truck_02_flatbed_F,I_Truck_02_flatbed_lxWS);



////////////////////////////////////////////////////////
/// Civilians
////////////////////////////////////////////////////////
class C_Truck_02_racing_lxWS: Truck_02_box_base_lxWS
{
	class TextureSources: TextureSources
	{
		class RacingRed
		{
			textures[] =
			{
				"\lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_racing_red_CO.paa",
				"\lxws\vehicles_f_lxws\data\Truck_02\zamak_racing_red_co.paa",
				"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
        		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa",
				"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
			};
			factions[] = {};
		};
		class RacingGreen
		{
			textures[] =
			{
				"\lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_racing_green_CO.paa",
				"\lxws\vehicles_f_lxws\data\Truck_02\zamak_racing_green_co.paa",
				"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
        		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa",
				"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
			};
			factions[] = {};
		};
		class RacingBlue
		{
			textures[] =
			{
				"\lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_racing_blue_CO.paa",
				"\lxws\vehicles_f_lxws\data\Truck_02\zamak_racing_blue_co.paa",
				"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
        		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa",
				"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
			};
			factions[] = {};
		};
		class VRANA
		{
			textures[] =
			{
				"\lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_racing_vrana_CO.paa",
				"\lxws\vehicles_f_lxws\data\Truck_02\zamak_racing_vrana_co.paa",
				"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
        		"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa",
				"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
			};
			factions[] = {};
		};
	};
	hiddenSelectionsTextures[] = 
	{
		"\lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_racing_red_CO.paa",
		"\lxws\vehicles_f_lxws\data\Truck_02\zamak_racing_red_co.paa",
		"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa",
		"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
	};
};
class C_Truck_02_cargo_lxWS: Truck_02_cargo_base_lxWS
{
	hiddenSelectionsTextures[] 	= {
									"\a3\soft_f_beta\Truck_02\data\truck_02_kab_blue_CO.paa",
									"\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_yellow_CO.paa",
									"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
									"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa",
									"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
								  };
	textureList[] =
    {
        Blue,1,
        Orange,1
    };
};
class C_Truck_02_flatbed_lxWS: Truck_02_flatbed_base_lxWS
{
	hiddenSelectionsTextures[] 	= {
									"\a3\soft_f_beta\Truck_02\data\truck_02_kab_co.paa",
									"\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_black_CO.paa",
									"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
									"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa",
									"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
								  };
	textureList[] =
    {
        Blue,1,
        Orange,1
    };
};
DEPRECATED_CLASS(C_Truck_02_cargo_F,C_Truck_02_cargo_lxWS);
DEPRECATED_CLASS(C_Truck_02_flatbed_F,C_Truck_02_flatbed_lxWS);



////////////////////////////////////////////////////////
/// China
////////////////////////////////////////////////////////
class O_T_Truck_02_cargo_lxWS: O_Truck_02_cargo_lxWS
{
    hiddenSelections[] 			= {camo1, camo2, camo3, camo4, camo9};
	hiddenSelectionsTextures[] 	= {
									"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_ghex_CO.paa",
									"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_cargo_ghex_CO.paa",
									"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
									"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa",
									"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
								  };
};
class O_T_Truck_02_flatbed_lxWS: O_Truck_02_flatbed_lxWS
{
    hiddenSelections[] 			= {camo1, camo2, camo3, camo4, camo9};
	hiddenSelectionsTextures[] 	= {
									"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_ghex_CO.paa",
									"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_cargo_ghex_CO.paa",
									"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
									"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa",
									"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
								  };
};
DEPRECATED_CLASS(O_T_Truck_02_cargo_F,O_T_Truck_02_cargo_lxWS);
DEPRECATED_CLASS(O_T_Truck_02_flatbed_F,O_T_Truck_02_flatbed_lxWS);



////////////////////////////////////////////////////////
/// IDAP
////////////////////////////////////////////////////////
class C_IDAP_Truck_02_cargo_lxWS: Truck_02_cargo_base_lxWS
{
	hiddenSelectionsTextures[] 	= {
									"\A3\soft_f_orange\Truck_02\Data\Truck_02_kab_IDAP_co.paa",
									"\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_idap_CO.paa",
									"\A3\soft_f_orange\Truck_02\Data\Truck_02_int_IDAP_co.paa",
									"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa",
									"lxws\vehicles_f_lxws\Truck_02\data\addons_white_co.paa"
								  };
};
class C_IDAP_Truck_02_flatbed_lxWS: Truck_02_flatbed_base_lxWS
{
	hiddenSelectionsTextures[] 	= {
									"\A3\soft_f_orange\Truck_02\Data\Truck_02_kab_IDAP_co.paa",
									"\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_idap_CO.paa",
									"\A3\soft_f_orange\Truck_02\Data\Truck_02_int_IDAP_co.paa",
									"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa",
									"lxws\vehicles_f_lxws\Truck_02\data\addons_white_co.paa"
								  };
};
class C_IDAP_Truck_02_box_lxWS: Truck_02_box_base_lxWS
{
	hiddenSelectionsTextures[] 	= {
									"\A3\soft_f_orange\Truck_02\Data\Truck_02_kab_IDAP_co.paa",
									"\lxws\vehicles_f_lxws\data\Truck_02\zamak_repair_idap_co.paa",
									"\A3\soft_f_orange\Truck_02\Data\Truck_02_int_IDAP_co.paa",
									"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa",
									"lxws\vehicles_f_lxws\Truck_02\data\addons_white_co.paa"
								  };
};
DEPRECATED_CLASS(C_IDAP_Truck_02_cargo_F,C_IDAP_Truck_02_cargo_lxWS);
DEPRECATED_CLASS(C_IDAP_Truck_02_flatbed_F,C_IDAP_Truck_02_flatbed_lxWS);



////////////////////////////////////////////////////////
/// LDF
////////////////////////////////////////////////////////
class I_E_Truck_02_cargo_lxWS: I_Truck_02_cargo_lxWS
{
    hiddenSelections[] 			= {camo1, camo2, camo3, camo4, camo9};
	hiddenSelectionsTextures[] 	= {
									"\A3\soft_f_Enoch\Truck_02\Data\Truck_02_kab_EAF_co.paa",
									"\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_EAF_CO.paa",
									"\A3\soft_f_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
									"\A3\soft_f_Enoch\Truck_02\Data\Truck_02_chassis_EAF_co.paa",
									"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
								  };
};
class I_E_Truck_02_flatbed_lxWS: I_Truck_02_flatbed_lxWS
{
    hiddenSelections[] 			= {camo1, camo2, camo3, camo4, camo9};
	hiddenSelectionsTextures[] 	= {
									"\A3\soft_f_Enoch\Truck_02\Data\Truck_02_kab_EAF_co.paa",
									"\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_EAF_CO.paa",
									"\A3\soft_f_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
									"\A3\soft_f_Enoch\Truck_02\Data\Truck_02_chassis_EAF_co.paa",
									"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
								  };
};
DEPRECATED_CLASS(I_E_Truck_02_cargo_F,I_E_Truck_02_cargo_lxWS);
DEPRECATED_CLASS(I_E_Truck_02_flatbed_F,I_E_Truck_02_flatbed_lxWS);



////////////////////////////////////////////////////////
/// Russia
////////////////////////////////////////////////////////
class O_R_Truck_02_cargo_F: O_Truck_02_cargo_lxWS
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_Soldier_F;
	typicalCargo[] = {O_R_Soldier_F};
	textureList[] = {RUS,1};
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_R_Truck_02_cargo_F.jpg";
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_cargo_RUkhk_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa",
		"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
	};
};
class O_R_Truck_02_flatbed_F: O_Truck_02_flatbed_lxWS
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_Soldier_F;
	typicalCargo[] = {O_R_Soldier_F};
	textureList[] = {RUS,1};
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_R_Truck_02_flatbed_F.jpg";
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_cargo_RUkhk_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa",
		"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
	};
};
class Aegis_O_R_Truck_02_aa_F: Truck_02_aa_base_lxWS
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_R_Truck_02_aa_F.jpg";
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_Soldier_F;
	typicalCargo[] = {O_R_Soldier_F};
	textureList[] = {RUS,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_cargo_RUkhk_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa",
		"lxws\vehicles_f_lxws\zu23\data\zu23_base_green_co.paa",
		"lxws\vehicles_f_lxws\zu23\data\zu23_green_co.paa",
		"lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_green_co.paa",
		"lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_green_co.paa",
		"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
	};
};
class O_R_Truck_02_cargo_ard_F: O_R_Truck_02_cargo_F
{
	author = $STR_A3_A_AveryTheKitty;
	faction = OPF_R_ard_F;
	crew = O_R_Soldier_ard_F;
	typicalCargo[] = {O_R_Soldier_ard_F};
};
class O_R_Truck_02_flatbed_ard_F: O_R_Truck_02_flatbed_F
{
	author = $STR_A3_A_AveryTheKitty;
	faction = OPF_R_ard_F;
	crew = O_R_Soldier_ard_F;
	typicalCargo[] = {O_R_Soldier_ard_F};
};
class Aegis_O_R_Truck_02_aa_ard_F: Aegis_O_R_Truck_02_aa_F
{
	author = $STR_A3_A_AveryTheKitty;
	faction = OPF_R_ard_F;
	crew = O_R_Soldier_ard_F;
	typicalCargo[] = {O_R_Soldier_ard_F};
};



////////////////////////////////////////////////////////
/// Argana
////////////////////////////////////////////////////////
class O_A_Truck_02_cargo_F: O_Truck_02_cargo_lxWS
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_A_F;
	crew = O_A_soldier_F;
	typicalCargo[] = {O_A_soldier_F};
};
class O_A_Truck_02_flatbed_F: O_Truck_02_flatbed_lxWS
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_A_F;
	crew = O_A_soldier_F;
	typicalCargo[] = {O_A_soldier_F};
};
class Aegis_O_A_Truck_02_aa_F: Truck_02_aa_base_lxWS
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_A_Truck_02_aa_F.jpg";
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
        "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa",
		"lxws\vehicles_f_lxws\zu23\data\zu23_base_green_co.paa",
		"lxws\vehicles_f_lxws\zu23\data\zu23_green_co.paa",
		"lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_green_co.paa",
		"lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_green_co.paa",
		"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
	};
};

	#undef SIMPLE_OBJECT