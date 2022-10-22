class CfgVehicles
{
	/* Inheritance Tree */
	class Car;
	class Car_F: Car
	{
		class NewTurret;
	};
	class Wheeled_APC_F: Car_F
	{
		class NewTurret;
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
	class APC_Wheeled_01_base_F: Wheeled_APC_F
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
			class revolving_cannon;
			class HideTurret;
            class showBags;
            class showCamonetTurret;
			class showSLATHull;
			class showSLATTurret;
		};

        /* Inventory */
		class TransportMagazines
		{
			mag_xx(30Rnd_65x39_caseless_mag,12);
			mag_xx(100Rnd_65x39_caseless_mag,6);
			mag_xx(HandGrenade,6);
			mag_xx(MiniGrenade,6);
			mag_xx(1Rnd_HE_Grenade_shell,3);
			mag_xx(3Rnd_HE_Grenade_shell,1);
			mag_xx(1Rnd_Smoke_Grenade_shell,3);
			mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
			mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
			mag_xx(1Rnd_SmokeBlue_Grenade_shell,3);
			mag_xx(SmokeShell,8);
			mag_xx(SmokeShellGreen,8);
			mag_xx(SmokeShellOrange,8);
			mag_xx(SmokeShellBlue,8);
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
			bag_xx(B_AssaultPack_mcamo,2);
		};

        /* Liveries */
		class TextureSources
		{
			class Sand
            {
                factions[] = {};
            };
			class Olive
            {
                factions[] = {};
            };
		};
	};
	class APC_Wheeled_01_base_v2_F: APC_Wheeled_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = private;
		accuracy = 0.3;
		displayName = $STR_A3_CfgVehicles_B_APC_Wheeled_01_cannon;
		class Library
		{
			libTextDesc = $STR_A3_CfgVehicles_APC_Wheeled_01_Library0;
		};
		model = "\A3\Armor_F_Beta\APC_Wheeled_01\APC_Wheeled_01_cannon_F.p3d";
		picture = "\A3\Armor_F_Beta\APC_Wheeled_01\Data\UI\APC_Wheeled_01_ACRV_CA.paa";
		Icon = "\A3\Armor_F_Beta\APC_Wheeled_01\Data\UI\Map_AMW_CA.paa";

        /* Turrets */
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
                /* Weapons & Ammunition
                - Let's give the AMV-7 Marshall a 30 mm cannon
                - Source: http://www.military-today.com/apc/badger.htm
                */
				weapons[] =
				{
					autocannon_30mm,
					LMG_coax
				};
				magazines[] =
				{
					mag_2(140Rnd_30mm_MP_shells_Tracer_Red),
					mag_2(60Rnd_30mm_APFSDS_shells_Tracer_Red),
					mag_10(200Rnd_762x51_Belt_Red)
				};

                /* Servos */
				soundServo[] = {"\A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",db-5,1,30};
				soundServoVertical[] = {"\A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",db-5,1,30};
			};
		};

        /* MFD */
		#include "mfd.hpp"

        /* Animation Sources
        - We changed the cannon, so we have to change these too
        */
		class AnimationSources: AnimationSources
		{
			class muzzle_rot: muzzle_rot
			{
				weapon = autocannon_30mm;
			};
			class muzzle_hide: muzzle_hide
			{
				weapon = autocannon_30mm;
			};
			class revolving_cannon: revolving_cannon
			{
				weapon = autocannon_30mm;
			};
		};

        /* Textures */
		hiddenSelections[] =
		{
			camo1,
			camo2,
			camo3,
			CamoNet,
			CamoSlat
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Armor_F_Beta\APC_Wheeled_01\Data\APC_Wheeled_01_base_CO.paa",
			"\A3\Armor_F_Beta\APC_Wheeled_01\Data\APC_Wheeled_01_adds_CO.paa",
			"\A3\Armor_F_Beta\APC_Wheeled_01\Data\APC_Wheeled_01_tows_CO.paa",
			"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
			"\A3\Armor_F\Data\cage_sand_CO.paa"
		};
	};

    /* Factions */
    #include "cfgBLUFOR.hpp"    // US & BAF
    #include "cfgEAF.hpp"       // LDF

    /* Deprecated */
    #include "deprecated.hpp"
};