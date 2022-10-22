class CfgVehicles
{
	class FloatingStructure_F;
	class C_Boat_Civil_03_F: FloatingStructure_F
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 8;
		class SimpleObject
		{
			eden = true;
			animate[] =
			{
				{positionlightred,1},
				{positionlightgreen,1},
				{positionlightwhite,1}
			};
			hide[] =
			{
				zasleh,
				"zadni svetlo",
				"brzdove svetlo",
				clan,
				"podsvit pristroju",
				poskozeni
			};
			verticalOffset = 2.13;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Boat_Civil_03_F.jpg";
		displayName = $STR_A3_CfgVehicles_Boat_Civil_03_base0;
		model = "\A3_Aegis\Boat_F_Aegis\Boat_Civil_03\Boat_Civil_03_F.p3d";
		icon = iconObject_1x4;
		cost = 10000;
		scope = public;
		scopeCurator = public;
		accuracy = 0.5;
		editorCategory = EdCat_Structures;
		editorSubcategory = EdSubcat_StaticShips;
		vehicleClass = Submerged;
		class Library
		{
			libTextDesc = $STR_A3_CfgVehicles_Boat_Civil_03_base_Library0;
		};
		supplyRadius = 3;
        
        /* Crew */
		transportSoldier = 0;

        /* Handling */
		maxSpeed = 0;
		overSpeedBrakeCoef = 0.8;
		enginePower = 300;
		engineShiftY = 0.1;
		waterLeakiness = 2.0;
		rudderForceCoef = 0.1;

        /* Turrets */
		class Turrets{};

        /* View */
    	extCameraPosition[] =
		{
			0.0,    // X
			4.0,    // Y
			-14.0   // Z
		};

        /* Particle Effects */
		leftEngineEffect = WaterWhirlEffect;
		rightEngineEffect = WaterWhirlEffect;
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = ExhaustsEffectFBoat;
			};
		};

        /* Lights */
		class Reflectors{};
		class MarkerLights
		{
			class PositionRed
			{
				color[] =
				{
					0.8, // R
					0.0, // G
					0.0 // B
				};
				ambient[] =
				{
					0.08, // R
					0.0, // G
					0.0 // B
				};
				intensity = 100;
				name = PositionLight_Red_1_pos;
				drawLight = 1;
				drawLightSize = 1.2;
				drawLightCenterSize = 0.1;
				activeLight = false;
				blinking = false;
				dayLight = false;
				useFlare = false;
			};
			class PositionGreen: PositionRed
			{
				color[] =
				{
					0.0, // R
					0.8, // G
					0.0 // B
				};
				ambient[] =
				{
					0.0, // R
					0.08, // G
					0.0 // B
				};
				name = PositionLight_Green_1_pos;
			};
			class PositionWhite: PositionRed
			{
				color[] =
				{
					1.0, // R
					1.0, // G
					1.0 // B
				};
				ambient[] =
				{
					0.1, // R
					0.1, // G
					0.1 // B
				};
				name = PositionLight_White_1_pos;
				blinking = true;
				blinkingStartsOn = true;
				blinkingPattern[] = {0.5,0.5};
				blinkingPatternGuarantee = true;
			};
		};

        /* Animation Sources */
		class AnimationSources
		{
			class PositionLightRed_source
			{
				source = MarkerLight;
				markerLight = PositionRed;
			};
			class PositionLightGreen_source
			{
				source = MarkerLight;
				markerLight = PositionGreen;
			};
			class PositionLightWhite_source
			{
				source = MarkerLight;
				markerLight = PositionWhite;
			};
		};

        /* Damage */
		armor = 10;
    	damageResistance = 0.00318;
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"A3_Aegis\Boat_F_Aegis\Boat_Civil_03\Data\Boat_Civil_03_001.rvmat",
				"A3_Aegis\Boat_F_Aegis\Boat_Civil_03\Data\Boat_Civil_03_001_damage.rvmat",
				"A3_Aegis\Boat_F_Aegis\Boat_Civil_03\Data\Boat_Civil_03_001_damage.rvmat",
                
				"A3_Aegis\Boat_F_Aegis\Boat_Civil_03\Data\Boat_Civil_03_002.rvmat",
				"A3_Aegis\Boat_F_Aegis\Boat_Civil_03\Data\Boat_Civil_03_002_damage.rvmat",
				"A3_Aegis\Boat_F_Aegis\Boat_Civil_03\Data\Boat_Civil_03_002_damage.rvmat"
			};
		};

        /* Selections & Memory Points */
		memoryPointTaskMarker = TaskMarker_1_pos;
	};
};