/* ION */
class B_ION_Heli_Light_01_civil_F: Heli_Light_01_civil_base_F
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
                {i_altitude_100f,5.6},
                {i_altitude_1000f,5.6},
                {i_altitude_10000f,5.6},
                {i_compass,0},
                {i_wp,0},
                {i_vspeed,0},
                {i_fuel,1},
                {i_oilpress,0},
                {i_temp,5.6},
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
			verticalOffset = 0.608;
			verticalOffsetWorld = 0.004;
			init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_Heli_Light_01_civil_F.jpg";
	scope = protected;
	side = TWest;
	faction = BLU_ION_F;
	crew = B_ION_Helipilot_F;
	textureList[] = {Ion,1};
	hiddenSelectionsTextures[] = {"\A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_ION_CO.paa"};
	animationList[] =
	{
		AddDoors,0,
		AddBackseats,1,
		AddTread_Short,0,
		AddTread,1
	};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellYellow,2);
		mag_xx(30Rnd_65x39_caseless_black_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_Black_F,2);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,2);
		item_xx(Toolkit,1);
		item_xx(ItemGPS,1);
	};
};