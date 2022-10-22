class CfgVehicles
{
    /* Inheritance Tree */
	class Helicopter_Base_H;

    /* Bases */
	class Heli_Light_02_base_F: Helicopter_Base_H
	{
        /* Weapons & Ammunition
        - Let's replace its 6.5 mm rounds with 7.62 mm rounds
        */
		magazines[] =
		{
			2000Rnd_762x51_Belt_T_Green,
			12Rnd_PG_missiles,
			168Rnd_CMFlare_Chaff_Magazine
		};

		class Components;

        /* Liveries */
		class TextureSources
		{
			class Opfor
			{
				textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa"};
				faction[] = {};
			};
			class Black
			{
				faction[] = {};
			};
			class Blackcustom
			{
				faction[] = {};
			};
			class Blue
			{
				faction[] = {CIV_F};
			};
			class Indep
			{
				displayName = $STR_A3_TextureSources_Indep0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_INDP_CO.paa"};
				faction[] = {};
			};
			class GreenHex
			{
				displayName = $STR_A3_TextureSources_GreenHex0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_ghex_CO.paa"};
				faction[] = {};
			};
			class Russian
			{
				displayName = $STR_A3_TEXTURESOURCES_RUSSIANSTAR0;
				author = $STR_A3_A_lilithsspawn;
				textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_RUS_CO.paa"};
				faction[] = {};
			};
			class Russian2
			{
				displayName = $STR_A3_TEXTURESOURCES_RUSSIANSTARFLAG0;
				author = $STR_A3_A_lilithsspawn;
				textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_RUS2_CO.paa"};
				faction[] = {};
			};
			class Green
			{
				displayName = $STR_A3_TextureSources_Green0;
				author = $STR_A3_A_BranFlakes;
				textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Light_02\Data\Heli_Light_02_ext_raven_CO.paa"};
				faction[] = {};
			};
		};

		class EventHandlers;
	};
	class Heli_Light_02_unarmed_base_F: Heli_Light_02_base_F
	{
		weapons[] = {/* This model doesn't have countermeasures */};
		magazines[] = {/* This model doesn't have countermeasures */};
	};
	class Heli_Light_02_dynamicLoadout_base_F: Heli_Light_02_base_F
	{
        /* Sensors & Components */
		class Components: Components
		{
			class TransportPylonsComponent
			{
				class Pylons
				{
                    /*
                    - Let's replace its 6.5 mm rounds with 7.62 mm rounds
                    */
					class PylonLeft1
					{
						attachment = PylonWeapon_2000Rnd_762x51_Belt_T_Green;
						hardpoints[] =
						{
							O_SKYFIRE,
							DAGR,
							DAR,
							O_S5,
							O_ORCA_RIGHT_PYLON,
							20MM_TWIN_CANNON,
							SCALPEL_1RND_EJECTOR,
							B_ASRRAM_EJECTOR
						};
					};
					class PylonRight1
					{
						hardpoints[] =
						{
							O_SKYFIRE,
							DAGR,
							DAR,
							O_S5,
							20MM_TWIN_CANNON,
							SCALPEL_1RND_EJECTOR,
							B_ASRRAM_EJECTOR
						};
					};
				};
                class Presets
                {
                    class Default;
                    class AT;
                    class CAS;
                };
			};
		};
	};
	class Heli_Light_02_civil_base_F: Heli_Light_02_unarmed_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgVehicles_Heli_Light_02_civil_base_F0;
		threat[] =
        {
            0.0,    // Soft
            0.0,    // Armor
            0.0     // Air
        };
		radarType = CM_none;
	    availableForSupportTypes[] = {Transport};

        /* Inventory */
		class TransportBackpacks
        {
            bag_xx(B_Parachute,8);
        };
		class TransportMagazines{/* Civilian vehicle, let's wipe these */};
		class TransportWeapons{/* Civilian vehicle, let's wipe these */};
		class TransportItems
		{
			item_xx(FirstAidKit,8);
			item_xx(Toolkit,1);
			item_xx(ItemGPS,1);
		};
		class MFD{};

        /* Scripts */
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};

    /* Factions */
	#include "cfgCivil.hpp"     // Civilians
	#include "cfgOPFOR.hpp"     // IAF, China & Argana
	#include "cfgRUS.hpp"       // Russia
	#include "cfgRaven.hpp"		// Raven Security
};