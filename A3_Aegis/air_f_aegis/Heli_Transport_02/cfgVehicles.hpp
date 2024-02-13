class CfgVehicles
{
    /* Inheritance Tree */
	class Air;
	class Helicopter: Air
	{
		class HitPoints;
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints: HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitHull;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitFuel;
		};
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class RotorLibHelicopterProperties;
		class ViewPilot;
		class ViewOptics;
		class Turrets: Turrets
		{
			class CopilotTurret;
			class Mainturret;
		};
		class AnimationSources;
		class Components;
	};

    /* Bases */
	class Heli_Transport_02_base_F: Helicopter_Base_H
	{
		class EventHandlers;

        /* Liveries */
		class TextureSources
		{
			class AAF
			{
				factions[] = {};
			};
			class ION
			{
				displayName = $STR_A3_A_TextureSources_ION0;
				factions[] = {};
			};
			class President
			{
				displayName = $STR_A3_A_TextureSources_President0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_1_President_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_2_President_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_3_President_CO.paa",
					"\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
				};
				factions[] = {CIV_F};
			};
			class Vrana
			{
				displayName = $STR_A3_TextureSources_Vrana0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_1_Vrana_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_2_Vrana_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_3_Vrana_CO.paa",
					"\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
				};
				factions[] = {CIV_F};
			};
			class Wave
			{
				displayName = $STR_A3_TextureSources_Wave0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_1_Wave_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_2_Wave_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_3_Wave_CO.paa",
					"\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
				};
				factions[] = {CIV_F};
			};
			class Black
			{
				displayName = $STR_A3_TextureSources_Black0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_1_Black_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_2_Black_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_3_Black_CO.paa",
					"\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
				};
				factions[] = {};
			};
			class BAF
			{
				displayName = $STR_A3_A_TextureSources_BAF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_1_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_2_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Heli_Transport_02_3_CO.paa",
					"\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
				};
				factions[] = {};
			};
			class Grey
			{
				displayName = $STR_A3_A_TEXTURESOURCES_BAF_RN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_1_Grey_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_2_Grey_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_02\Data\Skins\Heli_Transport_02_3_Grey_CO.paa",
					"\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
				};
				factions[] = {};
			};
		};
		textureList[] = {AAF,1};
	};
	class Heli_Transport_02_civil_base_F: Heli_Transport_02_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgVehicles_Heli_Transport_02_civil_base_F0;
		threat[] =
        {
            0.0,    // Soft
            0.0,    // Armor
            0.0     // Air
        };
	    availableForSupportTypes[] = {Transport};
		weapons[] = {/* Civilian vehicle, let's wipe these */};
		magazines[] = {/* Civilian vehicle, let's wipe these */};

        /* Inventory */
		class TransportBackpacks
		{
			bag_xx(B_Parachute,16);
		};
		class TransportMagazines{/* Civilian vehicle, let's wipe these */};
		class TransportWeapons{/* Civilian vehicle, let's wipe these */};
		class TransportItems
		{
			item_xx(FirstAidKit,16);
			item_xx(ToolKit,1);
			item_xx(Medikit,1);
			item_xx(ItemGPS,1);
		};

        /* Scripts */
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};

    /* Factions */
    class I_Heli_Transport_02_F;
    class C_IDAP_Heli_Transport_02_F: Heli_Transport_02_base_F
    {
		displayName = $STR_A3_A_CfgVehicles_Heli_Transport_02_civil_base_F0;
		threat[] =
        {
            0.0,    // Soft
            0.0,    // Armor
            0.0     // Air
        };
		weapons[] = {/* Civilian vehicle, let's wipe these */};
		magazines[] = {/* Civilian vehicle, let's wipe these */};
    };
	#include "cfgAW101.hpp"		// Base classes and TextureSources for AW101
	#include "cfgBLUFOR.hpp"    // BAF
	#include "cfgCivil.hpp"     // Civilians
	#include "cfgIndep.hpp"		// AAF
	#include "cfgION.hpp"       // ION
	#include "cfgUNA.hpp"		// UNA (lxWS)

    /* Deprecated */
    #include "deprecated.hpp"
};