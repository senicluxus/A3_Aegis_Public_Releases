class CfgVehicles
{
	/* Inheritance Tree */
	class Tank;
	class Tank_F: Tank
	{
		class Turrets;
	};

    /* Bases */
	class LT_01_base_F: Tank_F
	{
        /* Turrets */
		class Turrets: Turrets
		{
			class MainTurret;
		};

        /* Inventory */
		class TransportMagazines
		{
			mag_xx(SmokeShell,2);
			mag_xx(SmokeShellGreen,2);
			mag_xx(30Rnd_556x45_Stanag,4);
		};
		class TransportWeapons
		{
			weap_xx(arifle_Mk20C_F,2);
		};
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Toolkit,1);
			item_xx(Medikit,1);
		};
		class TransportBackpacks
		{
			bag_xx(B_AssaultPack_dgtl,2);
		};
	};
	class LT_01_AT_base_F: LT_01_base_F
	{
		editorSubcategory = EdSubcat_TankDestroyers;

        /* Turrets */
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
                /* Weapons & Ammunition */
				weapons[] =
				{
					HMG_127_LT,
					missiles_Firefist,
					SmokeLauncher
				};
				magazines[] =
				{
					mag_2(100Rnd_127x99_mag_Tracer_Yellow),
					mag_2(2Rnd_127mm_Firefist_missiles),
					SmokeLauncherMag
				};

				stabilizedInAxes = StabilizedInAxesBoth;
			};
		};
	};
	class LT_01_AA_base_F: LT_01_base_F
	{
        /* Turrets */
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
                /* Weapons & Ammunition */
				weapons[] =
				{
					HMG_127_LT,
					missiles_SAAMI,
					SmokeLauncher
				};
				magazines[] =
				{
					mag_2(100Rnd_127x99_mag_Tracer_Yellow),
					mag_2(4Rnd_70mm_SAAMI_missiles),
					SmokeLauncherMag
				};

				stabilizedInAxes = StabilizedInAxesBoth;
			};
		};
	};
	class LT_01_cannon_base_F: LT_01_base_F
	{
        /* Turrets */
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
                /* Weapons & Ammunition */
				weapons[] =
				{
					cannon_20mm,
					LMG_coax_ext,
					SmokeLauncher
				};
				magazines[] =
				{
					mag_2(60Rnd_20mm_HE_shells),
					mag_2(60Rnd_20mm_AP_shells),
					mag_4(250Rnd_762x51_Belt_Yellow),
					SmokeLauncherMag
				};

				stabilizedInAxes = StabilizedInAxesBoth;
			};
		};
	};
};