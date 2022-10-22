class Atlas_B_H_MBT_04_cannon_F: MBT_04_cannon_base_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {damagehide,0},
            {hatchdriver,0},
            {wheel_koll1,0},
            {wheel_kolol1,0},
            {wheel_podkolol1,0},
            {wheel_kolp1,0},
            {wheel_kolop1,0},
            {wheel_podkolop1,0},
            {wheel_koll2,0},
            {wheel_kolp2,0},
            {wheel_kolol2,0},
            {wheel_kolol3,0},
            {wheel_kolol4,0},
            {wheel_kolol5,0},
            {wheel_kolol6,0},
            {wheel_kolol7,0},
            {wheel_kolop2,0},
            {wheel_kolop3,0},
            {wheel_kolop4,0},
            {wheel_kolop5,0},
            {wheel_kolop6,0},
            {wheel_kolop7,0},
            {wheel_podkolol2,0},
            {wheel_podkolol3,0},
            {wheel_podkolol4,0},
            {wheel_podkolol5,0},
            {wheel_podkolol6,0},
            {wheel_podkolop2,0},
            {wheel_podkolop3,0},
            {wheel_podkolop4,0},
            {wheel_podkolop5,0},
            {wheel_podkolop6,0},
            {podkolol1_hide_damage,0},
            {podkolol2_hide_damage,0},
            {podkolol3_hide_damage,0},
            {podkolol4_hide_damage,0},
            {podkolol5_hide_damage,0},
            {podkolol6_hide_damage,0},
            {podkolol7_hide_damage,0},
            {podkolol8_hide_damage,0},
            {podkolop1_hide_damage,0},
            {podkolop2_hide_damage,0},
            {podkolop3_hide_damage,0},
            {podkolop4_hide_damage,0},
            {podkolop5_hide_damage,0},
            {podkolop6_hide_damage,0},
            {podkolop7_hide_damage,0},
            {podkolop8_hide_damage,0},
            {damagevez,0},
            {mainturret,0},
            {maingun,0.17},
            {recoil,0},
            {obsturret,0},
            {obsgun,0},
            {maingunoptics,0.17},
            {drivingwheel,0},
            {wheel_podkolop7,0},
            {wheel_podkolol7,0},
            {hatchdriver_rot,0},
            {hatchdriver_trans,0},
            {hatchcommander,0},
            {hatchcommander_in,0},
            {damagevezvelitele,0},
            {poklop_commander_damage,0},
            {poklop_gunner_damage,0},
            {poklop_driver_damage,0},
            {zaslehrot_hmg,592},
            {zaslehrot_coax,3896.77},
            {lights_driver,0},
            {lights_driver_off,0},
            {pedal_thrust,0},
            {pedal_brake,0},
            {cannon_ready_light,0},
            {indicatortempwater_mfd_driver,0},
            {indicatorfuel_mfd_driver,1},
            {indicator_hull_direction_mfd_driver,0},
            {indicator_main_turret_mfd_driver,0},
            {indicator_com_turret_mfd_driver,0},
            {indicator_com_turret_counter_mfd_driver,0},
            {indicatorspeed_mfd_driver,0},
            {indicatorrpm_mfd_driver,0},
            {indicator_damage_engine,0},
            {indicator_damage_fuel,0},
            {indicator_damage_tracks,0},
            {indicator_hull_direction_mfd_com,0},
            {indicator_main_turret_mfd_com,0},
            {indicator_com_turret_onscreen_com,0},
            {indicator_main_turret_onscreen_com,0},
            {indicator_com_turret_mfd_com,0},
            {indicator_com_turret_counter_mfd_com,0},
            {indicator_hull_direction_mfd_gunner,0},
            {indicator_main_turret_mfd_gun,0},
            {indicator_com_turret_onscreen_gun,0},
            {indicator_main_turret_mfd_gunner,0},
            {indicator_com_turret_mfd_gunner,0},
            {indicator_com_turret_counter_mfd_gunner,0},
            {indicator_com_smoke_1,1},
            {indicator_com_smoke_2,1},
            {turret_control_x,0},
            {turret_control_y,0},
            {com_turret_control_x,0},
            {com_turret_control_y,0},
            {indicator_turret_damage_hull,0},
            {indicator_turret_damage_engine,0},
            {indicator_turret_damage_fuel,0},
            {indicator_turret_damage_main_gun,0},
            {indicator_turret_damage_track,0},
            {indicator_turret_damage_turret,0},
            {indicator_turret_damage_comturret,0},
            {driver_reverse_cam,1},
            {hide_mfd_and_pip_screen_driver,1},
            {hide_mfd_elements,1},
            {damage_era_front_hide,0},
            {damage_decal_front_unhide,0},
            {damage_camonet_front_hide,0},
            {damage_era_top_hide,0},
            {damage_decal_top_unhide,0},
            {damage_camonet_top_hide,0},
            {damage_era_left_1_hide,0},
            {damage_decal_left_1_unhide,0},
            {damage_camonet_left_1_hide,0},
            {damage_era_left_2_hide,0},
            {damage_decal_left_2_unhide,0},
            {damage_camonet_left_2_hide,0},
            {damage_decal_left_3_unhide,0},
            {damage_camonet_left_3_hide,0},
            {damage_era_right_1_hide,0},
            {damage_decal_right_1_unhide,0},
            {damage_camonet_right_1_hide,0},
            {damage_era_right_2_hide,0},
            {damage_decal_right_2_unhide,0},
            {damage_camonet_right_2_hide,0},
            {damage_decal_right_3_unhide,0},
            {damage_camonet_right_3_hide,0},
            {damage_decal_turret_unhide,0},
            {damage_camonet_turret_hide,0},
            {slat_r_normal_hide,0},
            {slat_r_damage_unhide,0},
            {slat_r_damage_hide,0},
            {slat_r_destroyed_unhide,0},
            {slat_r_firegeo_hide,0},
            {slat_l_normal_hide,0},
            {slat_l_damage_unhide,0},
            {slat_l_damage_hide,0},
            {slat_l_destroyed_unhide,0},
            {slat_l_firegeo_hide,0},
            {recoil2,0},
            {cannon_muzzle_flash,0},
            {zaslehrot_cannon,801},
            {zaslehrot_cannon_aux,592},
            {cannon_muzzle_flash_aux,0},
            {hidehull,0.4},
            {hideturret,0.11},
            {zeroing,0}
        };
		hide[] =
        {
            clan,
            zasleh,
            zasleh2,
            light_l,
            light_r,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.255;
		verticalOffsetWorld = -0.162;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_H_MBT_04_cannon_F.jpg";
	scope = protected;
	scopeCurator = private;
	displayName = $STR_A3_CfgVehicles_O_MBT_04_cannon_F0;
	side = TWest;
	faction = Atlas_BLU_H_F;
	crew = Atlas_B_H_Crew_F;
	typicalCargo[] = {Atlas_B_H_Soldier_F};
	textureList[] = {Jungle,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_jungle_1_CO.paa",
		"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_jungle_2_CO.paa",
		"\A3\Armor_F\Data\camonet_CSAT_Stripe_Green_CO.paa"
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36C_F,2);
	};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_msbs_mag,4);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Toolkit,1);
		item_xx(Medikit,1);
	};
	class TransportBackpacks
	{
		bag_xx(B_Fieldpack_oli,2);
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					magazines[] =
					{
						mag_2(450Rnd_127x108_Ball),
						SmokeLauncherMag
					};
				};
			};
			magazines[] =
			{
				20Rnd_125mm_APFSDS_T_Red,
				12Rnd_125mm_HEAT_T_Red,
				12Rnd_125mm_HE_T_Red,
				mag_2(2000Rnd_762x51_Belt_Red),
				4Rnd_125mm_cannon_missiles
			};
		};
	};
};
class Atlas_B_H_MBT_04_command_F: MBT_04_command_base_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {damagehide,0},
            {hatchdriver,0},
            {wheel_koll1,0},
            {wheel_kolol1,0},
            {wheel_podkolol1,0},
            {wheel_kolp1,0},
            {wheel_kolop1,0},
            {wheel_podkolop1,0},
            {wheel_koll2,0},
            {wheel_kolp2,0},
            {wheel_kolol2,0},
            {wheel_kolol3,0},
            {wheel_kolol4,0},
            {wheel_kolol5,0},
            {wheel_kolol6,0},
            {wheel_kolol7,0},
            {wheel_kolop2,0},
            {wheel_kolop3,0},
            {wheel_kolop4,0},
            {wheel_kolop5,0},
            {wheel_kolop6,0},
            {wheel_kolop7,0},
            {wheel_podkolol2,0},
            {wheel_podkolol3,0},
            {wheel_podkolol4,0},
            {wheel_podkolol5,0},
            {wheel_podkolol6,0},
            {wheel_podkolop2,0},
            {wheel_podkolop3,0},
            {wheel_podkolop4,0},
            {wheel_podkolop5,0},
            {wheel_podkolop6,0},
            {podkolol1_hide_damage,0},
            {podkolol2_hide_damage,0},
            {podkolol3_hide_damage,0},
            {podkolol4_hide_damage,0},
            {podkolol5_hide_damage,0},
            {podkolol6_hide_damage,0},
            {podkolol7_hide_damage,0},
            {podkolol8_hide_damage,0},
            {podkolop1_hide_damage,0},
            {podkolop2_hide_damage,0},
            {podkolop3_hide_damage,0},
            {podkolop4_hide_damage,0},
            {podkolop5_hide_damage,0},
            {podkolop6_hide_damage,0},
            {podkolop7_hide_damage,0},
            {podkolop8_hide_damage,0},
            {damagevez,0},
            {mainturret,0},
            {maingun,0.17},
            {recoil,0},
            {obsturret,0},
            {obsgun,0},
            {maingunoptics,0.17},
            {drivingwheel,0},
            {wheel_podkolop7,0},
            {wheel_podkolol7,0},
            {hatchdriver_rot,0},
            {hatchdriver_trans,0},
            {hatchcommander,0},
            {hatchcommander_in,0},
            {damagevezvelitele,0},
            {poklop_commander_damage,0},
            {poklop_gunner_damage,0},
            {poklop_driver_damage,0},
            {zaslehrot_hmg,0},
            {zaslehrot_coax,3790.33},
            {lights_driver,0},
            {lights_driver_off,0},
            {pedal_thrust,0},
            {pedal_brake,0},
            {cannon_ready_light,0},
            {indicatortempwater_mfd_driver,0},
            {indicatorfuel_mfd_driver,1},
            {indicator_hull_direction_mfd_driver,0},
            {indicator_main_turret_mfd_driver,0},
            {indicator_com_turret_mfd_driver,0},
            {indicator_com_turret_counter_mfd_driver,0},
            {indicatorspeed_mfd_driver,0},
            {indicatorrpm_mfd_driver,0},
            {indicator_damage_engine,0},
            {indicator_damage_fuel,0},
            {indicator_damage_tracks,0},
            {indicator_hull_direction_mfd_com,0},
            {indicator_main_turret_mfd_com,0},
            {indicator_com_turret_onscreen_com,0},
            {indicator_main_turret_onscreen_com,0},
            {indicator_com_turret_mfd_com,0},
            {indicator_com_turret_counter_mfd_com,0},
            {indicator_hull_direction_mfd_gunner,0},
            {indicator_main_turret_mfd_gun,0},
            {indicator_com_turret_onscreen_gun,0},
            {indicator_main_turret_mfd_gunner,0},
            {indicator_com_turret_mfd_gunner,0},
            {indicator_com_turret_counter_mfd_gunner,0},
            {indicator_com_smoke_1,1},
            {indicator_com_smoke_2,1},
            {turret_control_x,0},
            {turret_control_y,0},
            {com_turret_control_x,0},
            {com_turret_control_y,0},
            {indicator_turret_damage_hull,0},
            {indicator_turret_damage_engine,0},
            {indicator_turret_damage_fuel,0},
            {indicator_turret_damage_main_gun,0},
            {indicator_turret_damage_track,0},
            {indicator_turret_damage_turret,0},
            {indicator_turret_damage_comturret,0},
            {driver_reverse_cam,1},
            {hide_mfd_and_pip_screen_driver,1},
            {hide_mfd_elements,1},
            {damage_era_front_hide,0},
            {damage_decal_front_unhide,0},
            {damage_camonet_front_hide,0},
            {damage_era_top_hide,0},
            {damage_decal_top_unhide,0},
            {damage_camonet_top_hide,0},
            {damage_era_left_1_hide,0},
            {damage_decal_left_1_unhide,0},
            {damage_camonet_left_1_hide,0},
            {damage_era_left_2_hide,0},
            {damage_decal_left_2_unhide,0},
            {damage_camonet_left_2_hide,0},
            {damage_decal_left_3_unhide,0},
            {damage_camonet_left_3_hide,0},
            {damage_era_right_1_hide,0},
            {damage_decal_right_1_unhide,0},
            {damage_camonet_right_1_hide,0},
            {damage_era_right_2_hide,0},
            {damage_decal_right_2_unhide,0},
            {damage_camonet_right_2_hide,0},
            {damage_decal_right_3_unhide,0},
            {damage_camonet_right_3_hide,0},
            {damage_decal_turret_unhide,0},
            {damage_camonet_turret_hide,0},
            {slat_r_normal_hide,0},
            {slat_r_damage_unhide,0},
            {slat_r_damage_hide,0},
            {slat_r_destroyed_unhide,0},
            {slat_r_firegeo_hide,0},
            {slat_l_normal_hide,0},
            {slat_l_damage_unhide,0},
            {slat_l_damage_hide,0},
            {slat_l_destroyed_unhide,0},
            {slat_l_firegeo_hide,0},
            {recoil2,0},
            {com_gun_recoil,0},
            {cannon_muzzle_flash,0},
            {zasleh_hide,0},
            {zaslehrot_cannon,77},
            {zaslehrot_cannon_aux,0},
            {cannon_muzzle_flash_aux,0},
            {hidehull,0.49},
            {hideturret,0.41},
            {zeroing,0}
        };
		hide[] =
        {
            clan,
            zasleh,
            zasleh2,
            light_l,
            light_r,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.609;
		verticalOffsetWorld = -0.164;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_H_MBT_04_command_F.jpg";
	scope = protected;
	scopeCurator = private;
	displayName = $STR_A3_CfgVehicles_O_MBT_04_command_F0;
	side = TWest;
	faction = Atlas_BLU_H_F;
	crew = Atlas_B_H_Crew_F;
	typicalCargo[] = {Atlas_B_H_Soldier_F};
	textureList[] = {Jungle,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_jungle_1_CO.paa",
		"\A3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_jungle_2_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\MBT_04\Data\MBT_04_command_jungle_CO.paa",
		"\A3\Armor_F\Data\camonet_CSAT_Stripe_Green_CO.paa"
	};
	class TransportWeapons
	{
		weap_xx(arifle_G36C_F,2);
	};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_msbs_mag,4);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Toolkit,1);
		item_xx(Medikit,1);
	};
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_oli,2);
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					magazines[] =
					{
						mag_2(60Rnd_30mm_MP_shells_Tracer_Red),
						SmokeLauncherMag
					};
				};
			};
			magazines[] =
			{
				20Rnd_125mm_APFSDS_T_Red,
				12Rnd_125mm_HEAT_T_Red,
				12Rnd_125mm_HE_T_Red,
				mag_2(2000Rnd_762x51_Belt_Red),
				4Rnd_125mm_cannon_missiles
			};
		};
	};
};