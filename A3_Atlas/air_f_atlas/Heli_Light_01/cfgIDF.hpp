/* IDF */
class Atlas_I_I_Heli_Light_01_F: Heli_Light_01_unarmed_base_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {rotorshaftm,0},
            {bladem01_joint_horizontal_axis,0},
            {bladem02_joint_horizontal_axis,0},
            {bladem03_joint_horizontal_axis,0},
            {bladem04_joint_horizontal_axis,0},
            {bladem05_joint_horizontal_axis,0},
            {bladem01_dive,0},
            {bladem02_dive,0},
            {bladem03_dive,0},
            {bladem04_dive,0},
            {bladem05_dive,0},
            {bladem01_bank,0},
            {bladem02_bank,0},
            {bladem03_bank,0},
            {bladem04_bank,0},
            {bladem05_bank,0},
            {bladem01_blur_rotation,0},
            {bladem02_rotation,0},
            {bladem03_rotation,0},
            {bladem04_rotation,0},
            {bladem05_rotation,0},
            {vrotor,0},
            {stick_pilot_dive_01,0},
            {stick_pilot_dive_02,0},
            {stick_pilot_dive_03,0},
            {stick_pilot_dive_04,0},
            {stick_pilot_dive_05,0},
            {stick_pilot_bank_01,0},
            {stick_pilot_bank_02,0},
            {stick_pilot_bank_03,0},
            {stick_pilot_bank_04,0},
            {stick_pilot_bank_05,0},
            {stick_copilot_dive01,0},
            {stick_copilot_dive02,0},
            {stick_copilot_dive03,0},
            {stick_copilot_dive04,0},
            {stick_copilot_dive05,0},
            {stick_copilot_bank01,0},
            {stick_copilot_bank02,0},
            {stick_copilot_bank03,0},
            {stick_copilot_bank04,0},
            {stick_copilot_bank05,0},
            {i_speed,0},
            {i_bank,0},
            {i_altitude_100f,6.78},
            {i_altitude_1000f,6.78},
            {i_altitude_10000f,6.78},
            {i_compass,0},
            {i_wp,0},
            {i_vspeed,0},
            {i_fuel,1},
            {i_oilpress,0},
            {i_temp,6.78},
            {damagehide,0},
            {lever_pilot,0},
            {lever_copilot,0},
            {pedall,0},
            {pedalr,0},
            {tailrotorimpacthide,0},
            {i_speed_02,0},
            {i_speed_03,0},
            {i_speed_04,0},
            {i_rpm,0},
            {i_rpm02,0},
            {i_rpm03,0},
            {i_compass02,0},
            {i_horizont_dive,0},
            {i_torque,0},
            {i_fuel_01a,1},
            {i_fuel_01b,1},
            {i_fuel_02a,1},
            {i_fuel_02b,1},
            {i_fuel_03a,1},
            {i_fuel_03b,1},
            {i_oiltemp,0},
            {i_oiltemp_random,0},
            {gunl_revolving,0},
            {gunr_revolving,0},
            {rotortilt_bladem01,0},
            {rotortilt_bladem02,0},
            {rotortilt_bladem03,0},
            {rotortilt_bladem04,0},
            {rotortilt_bladem05,0},
            {hidepg_1,0},
            {hidepg_2,0},
            {hidepg_3,0},
            {hidepg_4,0},
            {hidepg_5,0},
            {hidepg_6,0},
            {hidepg_7,0},
            {hidepg_8,0},
            {hidepg_9,0},
            {hidepg_10,0},
            {hidepg_11,0},
            {hidepg_12,0},
            {hidepg_13,0},
            {hidepg_14,0},
            {hidepg_15,0},
            {hidepg_16,0},
            {hidepg_17,0},
            {hidepg_18,0},
            {hidepg_19,0},
            {hidepg_20,0},
            {hidepg_21,0},
            {hidepg_22,0},
            {hidepg_23,0},
            {hidepg_24,0},
            {zaslehrot,0},
            {zaslehrot_2,0},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {collisionlight_white_blinking,0},
            {rotorimpacthide,0},
            {hiderockets,1}
        };
		hide[] =
        {
            clan,
            zasleh,
            light,
            "tail rotor blur",
            "main rotor blur",
            "zadni svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 1.785;
		verticalOffsetWorld = 0.006;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_I_Heli_Light_01_F.jpg";
	scope = public;
	scopeArsenal = private;
	forceInGarage = false;
	side = TGuerrila;
	faction = Atlas_IND_I_F;
	crew = Atlas_I_I_Helipilot_F;
	cost = 7000000;
	textureList[] = {Desert,1};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_01\Data\Heli_Light_01_ext_desert_CO.paa"};
	
    /* Inventory */
    class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
		mag_xx(30Rnd_556x45_Stanag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_TRG20_black_F,2);
	};
};
class Atlas_I_I_Heli_Light_01_dynamicLoadout_F: Heli_Light_01_dynamicLoadout_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {rotorshaftm,0},
            {bladem01_joint_horizontal_axis,0},
            {bladem02_joint_horizontal_axis,0},
            {bladem03_joint_horizontal_axis,0},
            {bladem04_joint_horizontal_axis,0},
            {bladem05_joint_horizontal_axis,0},
            {bladem01_dive,0},
            {bladem02_dive,0},
            {bladem03_dive,0},
            {bladem04_dive,0},
            {bladem05_dive,0},
            {bladem01_bank,0},
            {bladem02_bank,0},
            {bladem03_bank,0},
            {bladem04_bank,0},
            {bladem05_bank,0},
            {bladem01_blur_rotation,0},
            {bladem02_rotation,0},
            {bladem03_rotation,0},
            {bladem04_rotation,0},
            {bladem05_rotation,0},
            {vrotor,0},
            {stick_pilot_dive_01,0},
            {stick_pilot_dive_02,0},
            {stick_pilot_dive_03,0},
            {stick_pilot_dive_04,0},
            {stick_pilot_dive_05,0},
            {stick_pilot_bank_01,0},
            {stick_pilot_bank_02,0},
            {stick_pilot_bank_03,0},
            {stick_pilot_bank_04,0},
            {stick_pilot_bank_05,0},
            {stick_copilot_dive01,0},
            {stick_copilot_dive02,0},
            {stick_copilot_dive03,0},
            {stick_copilot_dive04,0},
            {stick_copilot_dive05,0},
            {stick_copilot_bank01,0},
            {stick_copilot_bank02,0},
            {stick_copilot_bank03,0},
            {stick_copilot_bank04,0},
            {stick_copilot_bank05,0},
            {i_speed,0},
            {i_bank,0},
            {i_altitude_100f,6.78},
            {i_altitude_1000f,6.78},
            {i_altitude_10000f,6.78},
            {i_compass,0},
            {i_wp,0},
            {i_vspeed,0},
            {i_fuel,1},
            {i_oilpress,0},
            {i_temp,6.78},
            {damagehide,0},
            {lever_pilot,0},
            {lever_copilot,0},
            {pedall,0},
            {pedalr,0},
            {tailrotorimpacthide,0},
            {i_speed_02,0},
            {i_speed_03,0},
            {i_speed_04,0},
            {i_rpm,0},
            {i_rpm02,0},
            {i_rpm03,0},
            {i_compass02,0},
            {i_horizont_dive,0},
            {i_torque,0},
            {i_fuel_01a,1},
            {i_fuel_01b,1},
            {i_fuel_02a,1},
            {i_fuel_02b,1},
            {i_fuel_03a,1},
            {i_fuel_03b,1},
            {i_oiltemp,0},
            {i_oiltemp_random,0},
            {gunl_revolving,0.33},
            {gunr_revolving,0.33},
            {rotortilt_bladem01,0},
            {rotortilt_bladem02,0},
            {rotortilt_bladem03,0},
            {rotortilt_bladem04,0},
            {rotortilt_bladem05,0},
            {hidepg_1,1},
            {hidepg_2,1},
            {hidepg_3,1},
            {hidepg_4,1},
            {hidepg_5,1},
            {hidepg_6,1},
            {hidepg_7,1},
            {hidepg_8,1},
            {hidepg_9,1},
            {hidepg_10,1},
            {hidepg_11,1},
            {hidepg_12,1},
            {hidepg_13,1},
            {hidepg_14,1},
            {hidepg_15,1},
            {hidepg_16,1},
            {hidepg_17,1},
            {hidepg_18,1},
            {hidepg_19,1},
            {hidepg_20,1},
            {hidepg_21,1},
            {hidepg_22,1},
            {hidepg_23,1},
            {hidepg_24,1},
            {zaslehrot,789},
            {zaslehrot_2,789},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {collisionlight_white_blinking,0},
            {rotorimpacthide,0},
            {hiderockets,1}
        };
		hide[] =
        {
            clan,
            zasleh,
            light,
            "tail rotor blur",
            "main rotor blur",
            "zadni svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 1.785;
		verticalOffsetWorld = 0.006;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_I_Heli_Light_01_dynamicLoadout_F.jpg";
	scope = public;
	scopeArsenal = private;
	forceInGarage = false;
	side = TGuerrila;
	faction = Atlas_IND_I_F;
	crew = Atlas_I_I_Helipilot_F;
	cost = 1000000;
	textureList[] = {Desert,1};
	hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Air_F_Atlas\Heli_Light_01\Data\Heli_Light_01_ext_desert_CO.paa",
        "\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_dot_CA.paa"
    };
	magazines[] = {5000Rnd_762x51_Yellow_Belt};
    /*
	class Components: Components
    {
		class TransportPylonsComponent: TransportPylonsComponent
        {
			class Pylons: Pylons
			{
				class PylonLeft1: PylonLeft1
                {
					attachment = PylonRack_7Rnd_Rocket_04_HE_F;
                };
				class PylonRight1: PylonRight1
                {
					attachment = PylonRack_7Rnd_Rocket_04_HE_F;
                };
            };
			class Presets: Presets
			{
				class Default: Default
                {
					attachment[] = 
                    {
                        PylonRack_7Rnd_Rocket_04_HE_F,
                        PylonRack_7Rnd_Rocket_04_HE_F
                    };
                };
				class AT: AT
                {
					attachment[] = 
                    {
                        PylonRack_3Rnd_LG_scalpel,
                        PylonRack_3Rnd_LG_scalpel
                    };
                };
			};
        };
    };
    */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
		mag_xx(30Rnd_556x45_Stanag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_TRG20_black_F,2);
	};
};
class Atlas_I_I_Heli_Light_01_recon_F: Heli_Light_01_recon_base_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {rotorshaftm,0},
            {bladem01_joint_horizontal_axis,0},
            {bladem02_joint_horizontal_axis,0},
            {bladem03_joint_horizontal_axis,0},
            {bladem04_joint_horizontal_axis,0},
            {bladem05_joint_horizontal_axis,0},
            {bladem01_dive,0},
            {bladem02_dive,0},
            {bladem03_dive,0},
            {bladem04_dive,0},
            {bladem05_dive,0},
            {bladem01_bank,0},
            {bladem02_bank,0},
            {bladem03_bank,0},
            {bladem04_bank,0},
            {bladem05_bank,0},
            {bladem01_blur_rotation,0},
            {bladem02_rotation,0},
            {bladem03_rotation,0},
            {bladem04_rotation,0},
            {bladem05_rotation,0},
            {vrotor,0},
            {stick_pilot_dive_01,0},
            {stick_pilot_dive_02,0},
            {stick_pilot_dive_03,0},
            {stick_pilot_dive_04,0},
            {stick_pilot_dive_05,0},
            {stick_pilot_bank_01,0},
            {stick_pilot_bank_02,0},
            {stick_pilot_bank_03,0},
            {stick_pilot_bank_04,0},
            {stick_pilot_bank_05,0},
            {stick_copilot_dive01,0},
            {stick_copilot_dive02,0},
            {stick_copilot_dive03,0},
            {stick_copilot_dive04,0},
            {stick_copilot_dive05,0},
            {stick_copilot_bank01,0},
            {stick_copilot_bank02,0},
            {stick_copilot_bank03,0},
            {stick_copilot_bank04,0},
            {stick_copilot_bank05,0},
            {i_speed,0},
            {i_bank,0},
            {i_altitude_100f,6.78},
            {i_altitude_1000f,6.78},
            {i_altitude_10000f,6.78},
            {i_compass,0},
            {i_wp,0},
            {i_vspeed,0},
            {i_fuel,1},
            {i_oilpress,0},
            {i_temp,6.78},
            {damagehide,0},
            {lever_pilot,0},
            {lever_copilot,0},
            {pedall,0},
            {pedalr,0},
            {tailrotorimpacthide,0},
            {i_speed_02,0},
            {i_speed_03,0},
            {i_speed_04,0},
            {i_rpm,0},
            {i_rpm02,0},
            {i_rpm03,0},
            {i_compass02,0},
            {i_horizont_dive,0},
            {i_torque,0},
            {i_fuel_01a,1},
            {i_fuel_01b,1},
            {i_fuel_02a,1},
            {i_fuel_02b,1},
            {i_fuel_03a,1},
            {i_fuel_03b,1},
            {i_oiltemp,0},
            {i_oiltemp_random,0},
            {gunl_revolving,0},
            {gunr_revolving,0},
            {rotortilt_bladem01,0},
            {rotortilt_bladem02,0},
            {rotortilt_bladem03,0},
            {rotortilt_bladem04,0},
            {rotortilt_bladem05,0},
            {hidepg_1,0},
            {hidepg_2,0},
            {hidepg_3,0},
            {hidepg_4,0},
            {hidepg_5,0},
            {hidepg_6,0},
            {hidepg_7,0},
            {hidepg_8,0},
            {hidepg_9,0},
            {hidepg_10,0},
            {hidepg_11,0},
            {hidepg_12,0},
            {hidepg_13,0},
            {hidepg_14,0},
            {hidepg_15,0},
            {hidepg_16,0},
            {hidepg_17,0},
            {hidepg_18,0},
            {hidepg_19,0},
            {hidepg_20,0},
            {hidepg_21,0},
            {hidepg_22,0},
            {hidepg_23,0},
            {hidepg_24,0},
            {zaslehrot,0},
            {zaslehrot_2,0},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {collisionlight_white_blinking,0},
            {rotorimpacthide,0},
            {hiderockets,1}
        };
		hide[] =
        {
            clan,
            zasleh,
            light,
            "tail rotor blur",
            "main rotor blur",
            "zadni svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 1.785;
		verticalOffsetWorld = 0.006;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_I_Heli_Light_01_recon_F.jpg";
	scope = protected;
    scopeCurator = private;
	scopeArsenal = private;
	forceInGarage = false;
	side = TGuerrila;
	faction = Atlas_IND_I_F;
	crew = Atlas_I_I_Helipilot_F;
	textureList[] = {Desert,1};
	hiddenSelectionsTextures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_01\Data\Heli_Light_01_ext_desert_CO.paa"};
	
    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
		mag_xx(30Rnd_556x45_Stanag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_TRG20_black_F,2);
	};
};