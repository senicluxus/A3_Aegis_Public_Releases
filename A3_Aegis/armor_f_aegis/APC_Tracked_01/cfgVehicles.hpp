class CfgVehicles
{
	/* Inheritance Tree */
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class HitPoints;
		class CommanderOptics;
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
		class HitPoints: HitPoints
		{
			class HitHull;
		};
	};

    /* Bases */
	class APC_Tracked_01_base_F: Tank_F
	{
        /* Damage
        - Let's increase the armor rating of the Panther according to its real-life values
        - Source: https://en.wikipedia.org/wiki/Namer
        */
		armor = 1000;
        /*
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 1.8;
			};
		};
        */

        /* Turrets */
		class Turrets: Turrets
		{
			class MainTurret: MainTurret {};
			class CommanderOptics: CommanderOptics
            {
                /* Weapons & Ammunition
                - We gave a laser designator to the M2A1 Slammer, so let's give one to the IFV-6c Panther
                */
				weapons[] =
                {
                    SmokeLauncher,
                    Laserdesignator_mounted
                };
				magazines[] =
                {
                    SmokeLauncherMag,
                    Laserbatteries
                };
            };
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

		class AnimationSources: AnimationSources{};
	};

    /* Factions */
    #include "cfgBLUFOR.hpp"    // US
};