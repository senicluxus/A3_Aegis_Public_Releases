    /* British Armed Forces */
	class Aegis_B_A_UAV_07_F: Aegis_UAV_07_base_F
	{
		author = $STR_A3_A_Grave;
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					-0.79000002
				},
				
				{
					"wheel_front",
					0
				},
				
				{
					"wheel_front_stearing",
					0
				},
				
				{
					"wheel_left",
					0
				},
				
				{
					"wheel_right",
					0
				},
				
				{
					"gear_front",
					0
				},
				
				{
					"gear_front_piston",
					0
				},
				
				{
					"gear_front_suspension",
					0
				},
				
				{
					"gear_front_piston_suspension",
					0
				},
				
				{
					"gear_rear_suspension_r",
					0
				},
				
				{
					"gear_rear_housing_r",
					0
				},
				
				{
					"gear_rear_suspension_l",
					0
				},
				
				{
					"gear_rear_housing_l",
					0
				},
				
				{
					"flap_l",
					0
				},
				
				{
					"flap_r",
					0
				},
				
				{
					"aileron_r",
					0
				},
				
				{
					"aileron_r_brake",
					0
				},
				
				{
					"aileron_l",
					0
				},
				
				{
					"aileron_l_brake",
					0
				},
				
				{
					"elevator_l",
					0
				},
				
				{
					"elevator_r",
					0
				},
				
				{
					"rudder_l",
					0
				},
				
				{
					"rudder_r",
					0
				},
				
				{
					"propeler",
					0
				},
				
				{
					"collision_lights_off",
					0
				},
				
				{
					"collision_lights_on",
					0
				},
				
				{
					"collision_lights_white_blinking",
					0
				}
			};
			hide[]=
			{
				"zasleh",
				"zadni svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.5319999;
			verticalOffsetWorld=-0.088;
			init="''";
		};
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_B_A_UAV_07_F.jpg";
		_generalMacro = "Aegis_B_UAV_07_F";
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgVehicles_B_BAF_UAV_07_F0;
		side = TWest;
		faction = BLU_A_F;
		crew = B_UAV_AI;
		typicalCargo[]=
		{
			B_UAV_AI
		};
		accuracy=1;
	};
	
	/* BAF (Pacific) */
	class Aegis_B_A_UAV_07_tna_F: Aegis_B_A_UAV_07_F
	{
		author = $STR_A3_A_Grave;
		scope = public;
		scopeCurator = public;
		faction = BLU_A_tna_F;
	};

	/* BAF (Woodland) */
	class Aegis_B_A_UAV_07_wdl_F: Aegis_B_A_UAV_07_F
	{
		author = $STR_A3_A_Grave;
		scope = public;
		scopeCurator = public;
		faction = BLU_A_wdl_F;
	};