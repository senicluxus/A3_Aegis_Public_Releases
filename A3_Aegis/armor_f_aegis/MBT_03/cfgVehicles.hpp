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
	};

    /* Bases */
	class MBT_03_base_F: Tank_F
	{
        /* Turrets */
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
                        /* Weapons & Ammunition */
						magazines[] =
						{
							mag_2(200Rnd_127x99_mag_Tracer_Yellow),
							SmokeLauncherMag
						};
					};
				};
                /* Weapons & Ammunition */
				magazines[] =
				{
					20Rnd_120mm_APFSDS_shells_Tracer_Yellow,
					12Rnd_120mm_HE_shells_Tracer_Yellow,
					12Rnd_120mm_HEAT_MP_T_Yellow,
					mag_20(200Rnd_762x51_Belt_Yellow),
					4Rnd_120mm_cannon_missiles
				};
			};
		};
		class TextureSources
		{
			class EAF_01
			{
				displayName = $STR_A3_C_CfgVehicles_Offroad_01_civil_base_F_TextureSources_EAF0;
				author = $STR_A3_A_Grave;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\MBT_03\Data\MBT_03_ext01_EAF_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\MBT_03\Data\MBT_03_ext02_EAF_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\MBT_03\Data\MBT_03_rcws_EAF_CO.paa",
					"A3\Armor_F_Enoch\apc_tracked_03\Data\camonet_EAF_green_CO.paa"
				};
				factions[] = {};
			};
		};
		textureList[] =
		{
			Indep_01,1,
			Indep_02,0,
			Indep_03,0
		};
		animationList[] =
		{
			HideTurret,0.17,
			HideHull,0.17,
			showCamonetHull,0,
			showCamonetTurret,0,
			showCamonetCannon,0,
			showCamonetCannon1,0
		};

        /* Inventory */
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

	/* Arma 3 Aegis */
	#include "cfgEAF.hpp"	// Livonian Defence Force
};