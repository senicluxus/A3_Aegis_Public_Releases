class CfgVehicles
{
	/* Inheritance Tree */
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
	};

    /* Bases */
	class APC_Tracked_03_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics{};
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot;
			class muzzle_hide;
		};
		animationList[] =
		{
			showBags,0.67,
			showBags2,0.5,
			showCamonetHull,0,
			showCamonetTurret,0,
			showTools,0.83,
			showSLATHull,0,
			showSLATTurret,0
		};

        /* Liveries
        - Some of the textures are incorrect, so let's fix those
        */
		class TextureSources
		{
			class Indep_01;
			class Indep_02
			{
				textures[] =
				{
					"\A3\Armor_F_EPB\APC_Tracked_03\Data\APC_Tracked_03_Ext_INDP_CO.paa",
					"\A3\Armor_F_EPB\APC_Tracked_03\Data\APC_Tracked_03_Ext2_INDP_CO.paa",
					"\A3\Armor_F\Data\camonet_AAF_Digi_Jungle_CO.paa",
					"\A3\Armor_F\Data\cage_AAF_CO.paa"
				};
			};
			class Indep_03
			{
				textures[] =
				{
					"\A3\Armor_F_EPB\APC_Tracked_03\Data\APC_Tracked_03_Ext_INDP_CO.paa",
					"\A3\Armor_F_EPB\APC_Tracked_03\Data\APC_Tracked_03_Ext2_INDP_CO.paa",
					"\A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa",
					"\A3\Armor_F\Data\cage_AAF_CO.paa"
				};
			};
			class EAF_01;
			class Sand_01
			{
				displayName = $STR_A3_TEXTURESOURCES_SAND0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_03\Data\APC_Tracked_03_Ext_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_03\Data\APC_Tracked_03_Ext2_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
					"\A3\Armor_F\Data\cage_sand_CO.paa"
				};
				factions[] = {BLU_A_F};
			};
			class Olive_01
			{
				displayName = $STR_A3_TEXTURESOURCES_OLIVE0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_03\Data\APC_Tracked_03_Ext_olive_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_03\Data\APC_Tracked_03_Ext2_olive_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\camonet_NATO_BAF_Green_CO.paa",
					"\A3\Armor_F\Data\cage_olive_CO.paa"
				};
				factions[] =
				{
					BLU_A_tna_F,
					BLU_A_wdl_F
				};
			};
		};

        /* Inventory */
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag,12);
			mag_xx(200Rnd_65x39_cased_Box,6);
			mag_xx(HandGrenade,6);
			mag_xx(MiniGrenade,6);
			mag_xx(1Rnd_HE_Grenade_shell,6);
			mag_xx(1Rnd_Smoke_Grenade_shell,3);
			mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
			mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
			mag_xx(1Rnd_SmokePurple_Grenade_shell,3);
			mag_xx(SmokeShell,8);
			mag_xx(SmokeShellGreen,8);
			mag_xx(SmokeShellOrange,8);
			mag_xx(SmokeShellPurple,8);
			mag_xx(NLAW_F,5);
			mag_xx(Titan_AT,2);
			mag_xx(Titan_AP,2);
			mag_xx(Titan_AA,2);
		};
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Toolkit,1);
			item_xx(Medikit,1);
		};
		class TransportBackpacks
		{
			bag_xx(B_AssaultPack_dgtl,3);
		};
	};
	class APC_Tracked_03_base_v2_F: APC_Tracked_03_base_F
	{
        /* MFD */
        #include "mfd.hpp"

        /* Turrets */
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics{};
				};

                /* Weapons & Ammunition
                - Let's give the FV-720 Mora a 40 mm cannon
                - Source: https://en.wikipedia.org/wiki/Warrior_tracked_armoured_vehicle#Warrior_Capability_Sustainment_Programme
                */
				weapons[] =
				{
					autocannon_40mm_CTWS,
					LMG_coax
				};
				magazines[] =
				{
					mag_2(120Rnd_40mm_GPR_Tracer_Yellow_shells),
					mag_2(80Rnd_40mm_APFSDS_Tracer_Yellow_shells),
					mag_10(200Rnd_762x51_Belt_Yellow)
				};
			};
		};

        /* Animation Sources
        - We changed the cannon, so we have to change these too
        */
		class AnimationSources: AnimationSources
		{
			class muzzle_rot: muzzle_rot
			{
				weapon = autocannon_40mm_CTWS;
			};
			class muzzle_hide: muzzle_hide
			{
				weapon = autocannon_40mm_CTWS;
			};
        };
	};

    /* Factions */
    #include "cfgBLUFOR.hpp"    // BAF
    #include "cfgIndep.hpp"     // AAF
    #include "cfgEAF.hpp"       // LDF

    /* Deprecated */
    #include "deprecated.hpp"
};