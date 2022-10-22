class CfgVehicles
{
    /* Inheritance Tree */
	#include "\A3_Aegis\cfgBoats.hpp"

    /* Bases */
	class Boat_Civil_02_base_F: Boat_F
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 5;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {veh_ship_boat_s};
				speechPlural[] = {veh_ship_boat_p};
			};
		};
		textSingular = $STR_A3_nameSound_veh_ship_boat_s;
		textPlural = $STR_A3_nameSound_veh_ship_boat_p;
		nameSound = veh_ship_boat_s;
		displayName = $STR_A3_A_CfgVehicles_Boat_Civil_02_base_F0;
		model = "\A3_Aegis\Boat_F_Aegis\Boat_Civil_02\Boat_Civil_02_F.p3d";
		picture = "\A3_Aegis\Boat_F_Aegis\Boat_Civil_02\Data\UI\Boat_Civil_02_CA.paa";
		Icon = "\A3_Aegis\Boat_F_Aegis\Boat_Civil_02\Data\UI\Map_Boat_Civil_02_CA.paa";
		editorSubcategory = EdSubcat_Boats;
		accuracy = 0.5;
		cost = 10000;
		threat[] =
        {
            0,  // Soft
            0,  // Armor
            0   // Air
        };
		class Library
		{
			libTextDesc = $STR_A3_A_CfgVehicles_Boat_civil_02_base_F_Library0;
		};

        /* Handling */
		#include "physX.hpp"

        /* Crew */
		driverRightHandAnimName = kormidlo;
		driverAction = Driver_Boat_Civil_02;
		cargoAction[] =
		{
			passenger_apc_narrow_generic03,
			passenger_generic01_leanright,
			passenger_apc_narrow_generic01,
			passenger_generic01_foldhands,
			passenger_apc_narrow_generic02
		};
		castDriverShadow = true;
		castCargoShadow = true;
		ejectDeadDriver = true;
		ejectDeadCargo = false;
		supplyRadius = 3;
		transportSoldier = 5;

        /* Enter & Exit Animations */
		getInAction = GetInLow;
		getOutAction = GetOutLow;
		cargoGetInAction[] = {GetInLow};
		cargoGetOutAction[] = {GetOutLow};

        /* View */
    	extCameraPosition[] =
        {
            0.0,    // X
            4.0,    // Y
            -14     // Z
        };

        /* Turrets */
		unitInfoType = RscUnitInfoNoWeapon;
		class Turrets{};

        /* Damage */
		fuelExplosionPower = 0;
		armor = 10;
    	damageResistance = 0.00882;
		class HitPoints
		{
			class HitBody
			{
				armor = 0.6;
				material = 50;
				name = hull;
				visual = camo1;
				passThrough = 1;
			};
			class HitEngine
			{
				armor = 1.2;
				material = -1;
				name = Engine;
				visual = "";
				passThrough = 1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"A3_Aegis\Boat_F_Aegis\Boat_Civil_02\Data\Boat_Civil_02.rvmat",
				"A3_Aegis\Boat_F_Aegis\Boat_Civil_02\Data\Boat_Civil_02_damage.rvmat",
				"A3_Aegis\Boat_F_Aegis\Boat_Civil_02\Data\Boat_Civil_02_damage.rvmat"
			};
		};

        /* Liveries */
		class TextureSources
		{
			class Red
			{
				displayName = $STR_A3_TEXTURESOURCES_RED0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Aegis\Boat_F_Aegis\Boat_Civil_02\Data\Boat_Civil_02_001_CO.paa"};
				factions[] = {CIV_F};
			};
			class Blue
			{
				displayName = $STR_A3_TEXTURESOURCES_BLUE0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Aegis\Boat_F_Aegis\Boat_Civil_02\Data\Boat_Civil_02_002_CO.paa"};
				factions[] = {CIV_F};
			};
		};

        /* Textures */
		hiddenSelections[] = {camo1};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Boat_F_Aegis\Boat_Civil_02\Data\Boat_Civil_02_001_CO.paa"};

        /* Particle Effects */
		leftEngineEffect = LEngEffectsSmall;
		rightEngineEffect = REngEffectsSmall;

        /* Lights */
		class MarkerLights
		{
			class PositionRed
			{
				color[] =
                {
                    0.8,    // R
                    0,      // G
                    0       // B
                };
				ambient[] =
                {
                    0.08,   // R
                    0,      // G
                    0       // B
                };
				intensity = 50;
				name = PositionLight_Red_1_pos;
				drawLight = true;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = false;
				blinking = false;
				dayLight = true;
				useFlare = true;
			};
			class PositionGreen: PositionRed
			{
				color[] =
                {
                    0,      // R
                    0.8,    // G
                    0       // B
                };
				ambient[] =
                {
                    0,      // R
                    0.08,   // G
                    0       // B
                };
				name = PositionLight_Green_1_pos;
			};
			class PositionWhite: PositionRed
			{
				color[] =
                {
                    1,  // R
                    1,  // G
                    1   // B
                };
				ambient[] =
                {
                    0.1,    // R
                    0.1,    // G
                    0.1     // B
                };
				name = PositionLight_White_1_pos;
				blinking = true;
				blinkingStartsOn = true;
				blinkingPattern[] = {0.5,0.5};
				blinkingPatternGuarantee = true;
			};
		};

        /* Inventory */
		class TransportItems
		{
			item_xx(FirstAidKit,2);
		};

        /* Selections & Memory Points */
		memoryPointTaskMarker = TaskMarker_1_pos;

        /* Animation Sources */
		/*class AnimationSources: AnimationSources
		{
			class HideCover
			{
				displayName = $STR_A3_C_CfgVehicles_Offroad_01_military_covered_base_F_AnimationSources_HideCover0;
				author = $STR_A3_A_AveryTheKitty;
				source = door;
				initPhase = false;
				animPeriod = 0.001;
				mass = -5;
				forceAnimatePhase = true;
                forceAnimate[] = {};
			};
		}; */
		animationList[] = {HideCover,0.33};

        /* Scripts */
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call BIS_fnc_initVehicle;};";
		};
	};

    /* Factions */
	#include "cfgCivil.hpp" // Civilians
};