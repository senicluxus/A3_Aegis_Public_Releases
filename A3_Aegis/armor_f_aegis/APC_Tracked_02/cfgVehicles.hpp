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
				class Turrets;
			};
		};
		class AnimationSources;
	};

    /* Bases */
	class APC_Tracked_02_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics;
				};
			};
		};

        /* Inventory */
		class TransportMagazines
		{
			mag_xx(30Rnd_65x39_caseless_green,12);
			mag_xx(150Rnd_762x54_Box,4);
			mag_xx(HandGrenade_East,6);
			mag_xx(MiniGrenade,6);
			mag_xx(SmokeShell,8);
			mag_xx(SmokeShellRed,8);
			mag_xx(SmokeShellYellow,8);
			mag_xx(SmokeShellOrange,8);
			mag_xx(1Rnd_HE_Grenade_shell,6);
			mag_xx(1Rnd_Smoke_Grenade_shell,3);
			mag_xx(1Rnd_SmokeYellow_Grenade_shell,3);
			mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
			mag_xx(1Rnd_SmokeRed_Grenade_shell,3);
			mag_xx(RPG32_F,5);
			mag_xx(RPG32_HE_F,2);
			mag_xx(Titan_AT,2);
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
			bag_xx(B_FieldPack_ocamo,2);
		};

		class AnimationSources: AnimationSources
		{
			class HideTurret;
		};
	};
	class APC_Tracked_02_medical_base_F: APC_Tracked_02_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {veh_vehicle_armor_s};
				speechPlural[] = {veh_vehicle_armor_p};
			};
		};
		textSingular = $STR_A3_nameSound_veh_vehicle_armor_s;
		textPlural = $STR_A3_nameSound_veh_vehicle_armor_p;
		nameSound = veh_vehicle_armor_s;
        displayName = $STR_A3_A_CfgVehicles_O_R_APC_Tracked_02_medical_F0;
		model = "\A3\Armor_F_Beta\APC_Tracked_02\APC_Tracked_02_cannon_F.p3d";
		picture = "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\UI\APC_Tracked_02_medical_CA.paa";
		Icon = "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\UI\Map_APC_Tracked_02_medical_CA.paa";
		supplyRadius = 5;
		attendant = true;
		threat[] =
        {
            0.0,    // Soft
            0.0,    // Armor
            0.0     // Air
        };
		transportSoldier = 8;
		selectionFireAnim = "";

        /* Turrets */
		class Turrets{};

        /* Animation Sources */
		class AnimationSources: AnimationSources
		{
			class HideTurret: HideTurret
			{
				initPhase = true;
			};
			class showTracks
			{
				displayName = $STR_A3_AnimationSources_showTracksHull0;
				author = $STR_A3_A_AveryTheKitty;
				source = user;
				animPeriod = 0.001;
				initPhase = false;
				mass = -50;
			};
			class showBags
			{
				displayName = $STR_A3_AnimationSources_showBagsHull0;
				author = $STR_A3_A_AveryTheKitty;
				source = user;
				animPeriod = 0.001;
				initPhase = false;
				mass = -50;
			};
		};
		animationList[] =
		{
			showTracks,0.5,
			showBags,0.67
		};

        /* Liveries */
		class TextureSources
		{
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_01_medevac_RUkhk_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUkhk_CO.paa",
					"",
					"",
					""
				};
				factions[] = {};
			};
		};

        /* Inventory */
		class TransportMagazines{/* Medical vehicle, let's wipe these */};
		class TransportWeapons{/* Medical vehicle, let's wipe these */};
		class TransportItems
		{
			item_xx(FirstAidKit,15);
			item_xx(Toolkit,1);
			item_xx(Medikit,2);
		};
		class TransportBackpacks
		{
			bag_xx(B_FieldPack_ocamo,2);
		};
	};

    /* Factions */
    #include "cfgOPFOR.hpp" // IAF, China & Argana
    #include "cfgRUS.hpp"   // Russia
};