/* Raven - INDEP */
class I_Raven_soldier_base_F: I_soldier_F
{
	scope = private;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Russian,
		Head_Euro,
		Head_Enoch,
		Head_Asian,
		G_ION_default
	};
	faction = IND_Raven_F;
	genericNames = RussianMen;
	uniformClass = U_O_R_officer_noInsignia_arid_F;
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	};
};
class I_Raven_soldier_F: I_Raven_soldier_base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Raven_soldier_F.jpg";
	scope = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	role = Rifleman;
	weapons[] = 
	{
		arifle_AK12_545_lush_aco_flash_F,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_AK12_545_lush_aco_flash_F,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(30Rnd_545x39_lush_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		HandGrenade_East,
		SmokeShell
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_545x39_lush_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		HandGrenade_East,
		SmokeShell
	};
	linkedItems[] = 
	{
		H_HelmetSpecter_cover_khaki_F,
		V_HarnessOSpec_blk,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_HelmetSpecter_cover_khaki_F,
		V_HarnessOSpec_blk,
		DefaultManLinkedItems
	};
    headgearList[] = 
    {
        H_HelmetSpecter_cover_khaki_F,1,
        H_HelmetSpecter_cover_taiga_F,1,
        H_HelmetSpecter_F,1,
        H_HelmetSpecter_headset_F,1,
		H_HelmetSpecter_paint_F,1,
        H_HelmetSpecter_paint_headset_F,1
    };
};
class I_Raven_soldier_GL_F: I_Raven_soldier_base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Raven_soldier_GL_F.jpg";
	scope = public;
	displayName = $STR_B_Soldier_GL_F0;
	weapons[] = 
	{
		arifle_AK12_GL_545_aco_flash_F,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_AK12_GL_545_aco_flash_F,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(30Rnd_545x39_lush_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		HandGrenade_East,
		mag_6(1Rnd_HE_Grenade_shell),
		SmokeShell,
		mag_2(1Rnd_Smoke_Grenade_shell)
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_545x39_lush_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		HandGrenade_East,
		mag_6(1Rnd_HE_Grenade_shell),
		SmokeShell,
		mag_2(1Rnd_Smoke_Grenade_shell)
	};
	cost = 200000;
	role = Grenadier;
	uniformClass = U_O_R_Gorka_01_F;
	linkedItems[] = 
	{
		H_HelmetSpecter_cover_khaki_F,
		V_HarnessOSpec_blk,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_HelmetSpecter_cover_khaki_F,
		V_HarnessOSpec_blk,
		DefaultManLinkedItems
	};
    headgearList[] = 
    {
        H_HelmetSpecter_cover_khaki_F,1,
        H_HelmetSpecter_cover_taiga_F,1,
        H_HelmetSpecter_F,1,
        H_HelmetSpecter_headset_F,1,
		H_HelmetSpecter_paint_F,1,
        H_HelmetSpecter_paint_headset_F,1
    };
};
class I_Raven_soldier_MG_F: I_Raven_soldier_base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Raven_soldier_MG_F.jpg";
	scope = public;
	displayName = $STR_B_soldier_AR_F0;
	weapons[] = 
	{
		arifle_RPK12_lush_F,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_RPK12_lush_F,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(75Rnd_762x39_AK12_Lush_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		HandGrenade_East,
		SmokeShell
	};
	respawnMagazines[] = 
	{
        mag_6(75Rnd_762x39_AK12_Lush_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		HandGrenade_East,
		SmokeShell
	};
	cost = 220000;
	icon = iconManMG;
	role = MachineGunner;
	uniformClass = U_O_R_CombatUniform_tshirt_arid_F;
	linkedItems[] = 
	{
		H_HelmetSpecter_black_F,
		V_HarnessOSpec_blk,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_HelmetSpecter_black_F,
		V_HarnessOSpec_blk,
		DefaultManLinkedItems
	};
    headgearList[] = 
    {
        H_HelmetSpecter_cover_khaki_F,1,
        H_HelmetSpecter_cover_taiga_F,1,
        H_HelmetSpecter_F,1,
        H_HelmetSpecter_headset_F,1,
		H_HelmetSpecter_paint_F,1,
        H_HelmetSpecter_paint_headset_F,1
    };
};
class I_Raven_soldier_TL_F: I_Raven_soldier_base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Raven_soldier_TL_F.jpg";
	scope = public;
	displayName = $STR_B_Soldier_TL_F0;
	uniformClass = U_O_R_Gorka_01_F;
	weapons[] = 
	{
		arifle_AK12_545_lush_arco_flash_F,
		hgun_Rook40_F,
		DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] = 
	{
		arifle_AK12_545_lush_arco_flash_F,
		hgun_Rook40_F,
		DefaultManWeapons,
		Binocular
	};
	magazines[] = 
	{
        mag_4(30Rnd_545x39_lush_Mag_F),
        mag_2(30Rnd_545x39_lush_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
		HandGrenade_East,
        SmokeShell
	};
	respawnMagazines[] = 
	{
        mag_4(30Rnd_545x39_lush_Mag_F),
        mag_2(30Rnd_545x39_lush_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
		HandGrenade_East,
        SmokeShell
	};
	cost = 250000;
	camouflage = 1.6;
	icon = iconManLeader;
	role = Rifleman;
	linkedItems[] = 
	{
		H_HelmetSpecter_black_headset_F,
		V_HarnessOSpec_blk,
		ItemGPS,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_HelmetSpecter_black_headset_F,
		V_HarnessOSpec_blk,
		ItemGPS,
		DefaultManLinkedItems
	};
    headgearList[] = 
    {
        H_HelmetSpecter_cover_khaki_F,1,
        H_HelmetSpecter_cover_taiga_F,1,
        H_HelmetSpecter_F,1,
        H_HelmetSpecter_headset_F,1,
		H_HelmetSpecter_paint_F,1,
        H_HelmetSpecter_paint_headset_F,1
    };
};
class I_Raven_soldier_M_F: I_Raven_soldier_base_F
{
	author = $STR_A3_A_BranFlakes;
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {veh_infantry_sniper_s};
            speechPlural[] = {veh_infantry_sniper_p};
        };
    };
    textSingular = $STR_A3_nameSound_veh_infantry_sniper_s;
    textPlural = $STR_A3_nameSound_veh_infantry_sniper_p;
    nameSound = veh_infantry_sniper_s;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Raven_soldier_M_F.jpg";
	scope = public;
	displayName = $STR_B_soldier_M_F0;
	uniformClass = U_O_R_officer_noInsignia_arid_F;
	weapons[] = 
	{
		srifle_DMR_01_black_ARCO_F,
		hgun_Rook40_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] = 
	{
		srifle_DMR_01_black_ARCO_F,
		hgun_Rook40_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] = 
	{
        mag_10(10Rnd_762x54_mag),
		mag_2(17Rnd_9x21_Mag),
		HandGrenade_East,
		SmokeShell
	};
	respawnMagazines[] = 
	{
        mag_10(10Rnd_762x54_mag),
		mag_2(17Rnd_9x21_Mag),
		HandGrenade_East,
		SmokeShell
	};
	cost = 250000;
	role = Marksman;
	linkedItems[] = 
	{
		H_HelmetSpecter_cover_khaki_F,
		V_HarnessOSpec_blk,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_HelmetSpecter_cover_khaki_F,
		V_HarnessOSpec_blk,
		DefaultManLinkedItems
	};
    headgearList[] = 
    {
        H_HelmetSpecter_cover_khaki_F,1,
        H_HelmetSpecter_cover_taiga_F,1,
        H_HelmetSpecter_F,1,
        H_HelmetSpecter_headset_F,1,
		H_HelmetSpecter_paint_F,1,
        H_HelmetSpecter_paint_headset_F,1
    };
};
class I_Raven_soldier_LAT_F: I_Raven_soldier_base_F
{
	author = $STR_A3_A_BranFlakes;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_AT_s};
			speechPlural[] = {veh_infantry_AT_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_AT_s;
	textPlural = $STR_A3_nameSound_veh_infantry_AT_p;
	nameSound = veh_infantry_AT_s;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Raven_soldier_LAT_F.jpg";
	scope = public;
	displayName = $STR_B_soldier_LAT_F0;
	uniformClass = U_O_R_CombatUniform_tshirt_arid_F;
	backpack = B_FieldPack_green_RPG_AT_F;
	weapons[] = 
	{
		arifle_AK12U_545_lush_aco_flash_F,
        launch_RPG32_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_AK12U_545_lush_aco_flash_F,
        launch_RPG32_black_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(30Rnd_545x39_lush_Mag_F),
        RPG32_F,
		mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        SmokeShell
	};
	respawnMagazines[] = 
	{
        mag_6(30Rnd_545x39_lush_Mag_F),
        RPG32_F,
		mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        SmokeShell
	};
	cost = 130000;
	threat[] = {0.8,0.8,0.3};
	icon = iconManAT;
	role = MissileSpecialist;
	linkedItems[] = 
	{
		H_HelmetSpecter_black_F,
		V_HarnessOSpec_blk,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_HelmetSpecter_black_F,
		V_HarnessOSpec_blk,
		DefaultManLinkedItems
	};
	secondaryAmmoCoef = 0.5;
    headgearList[] = 
    {
        H_HelmetSpecter_cover_khaki_F,1,
        H_HelmetSpecter_cover_taiga_F,1,
        H_HelmetSpecter_F,1,
        H_HelmetSpecter_headset_F,1,
		H_HelmetSpecter_paint_F,1,
        H_HelmetSpecter_paint_headset_F,1
    };
};
class I_Raven_medic_F: I_Raven_soldier_base_F
{
	author = $STR_A3_A_BranFlakes;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_medic_s};
			speechPlural[] = {veh_infantry_medic_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_medic_s;
	textPlural = $STR_A3_nameSound_veh_infantry_medic_p;
	nameSound = veh_infantry_medic_s;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Raven_medic_F.jpg";
	scope = public;
	displayName = $STR_A3_B_CTRG_Soldier_Medic_tna_F0;
	attendant = true;
	weapons[] = 
	{
		arifle_AK12U_545_lush_aco_flash_F,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_AK12U_545_lush_aco_flash_F,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_lush_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		HandGrenade_East,
		SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_lush_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		HandGrenade_East,
		SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange
	};
	camouflage = 1.6;
	icon = iconManMedic;
	role = CombatLifeSaver;
	backpack = B_FieldPack_green_Medic_F;
	linkedItems[] = 
	{
		H_HelmetSpecter_cover_khaki_F,
		V_HarnessOSpec_blk,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_HelmetSpecter_cover_khaki_F,
		V_HarnessOSpec_blk,
		DefaultManLinkedItems
	};
	picture = pictureHeal;
    headgearList[] = 
    {
        H_HelmetSpecter_cover_khaki_F,1,
        H_HelmetSpecter_cover_taiga_F,1,
        H_HelmetSpecter_F,1,
        H_HelmetSpecter_headset_F,1,
		H_HelmetSpecter_paint_F,1,
        H_HelmetSpecter_paint_headset_F,1
    };
};
class I_Raven_engineer_F: I_Raven_soldier_base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Raven_engineer_F.jpg";
	scope = public;
	displayName = $STR_B_engineer_F0;
	camouflage = 1.6;
	uniformClass = U_O_R_officer_noInsignia_arid_F;
	backpack = B_Carryall_green_eng_F;
	weapons[] = 
	{
		arifle_AK12U_545_lush_aco_flash_F,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		arifle_AK12U_545_lush_aco_flash_F,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_lush_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		HandGrenade_East,
		SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_lush_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		HandGrenade_East,
		SmokeShell
	};
	canDeactivateMines = true;
	engineer = true;
	detectSkill = 31;
	linkedItems[] = 
	{
		H_HelmetSpecter_cover_khaki_F,
		V_HarnessOSpec_blk,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_HelmetSpecter_cover_khaki_F,
		V_HarnessOSpec_blk,
		DefaultManLinkedItems
	};
	icon = iconManEngineer;
	role = Sapper;
	picture = pictureRepair;
    headgearList[] = 
    {
        H_HelmetSpecter_cover_khaki_F,1,
        H_HelmetSpecter_cover_taiga_F,1,
        H_HelmetSpecter_F,1,
        H_HelmetSpecter_headset_F,1,
		H_HelmetSpecter_paint_F,1,
        H_HelmetSpecter_paint_headset_F,1
    };
};
class I_Raven_Soldier_UAV_F: I_Raven_soldier_base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Raven_Soldier_UAV_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_B_SOLDIER_UAV_F0;
	role = SpecialOperative;
	uavHacker = true;
	uniformClass = U_O_R_officer_noInsignia_arid_F;
	backpack = I_Raven_UAV_01_backpack_F;
	weapons[] =
	{
		SMG_02_flash_F,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_02_flash_F,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
        mag_2(17Rnd_9x21_Mag),
		HandGrenade_East,
		SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
        mag_2(17Rnd_9x21_Mag),
		HandGrenade_East,
		SmokeShell
	};
	linkedItems[] = 
	{
		H_HelmetSpecter_cover_khaki_F,
		V_HarnessOSpec_blk,
		G_Tactical_Clear,
		DefaultManLinkedItems,
		I_UAVTerminal
	};
	respawnLinkedItems[] = 
	{
		H_HelmetSpecter_cover_khaki_F,
		V_HarnessOSpec_blk,
		G_Tactical_Clear,
		DefaultManLinkedItems,
		I_UAVTerminal
	};
    headgearList[] = 
    {
        H_HelmetSpecter_cover_khaki_F,1,
        H_HelmetSpecter_cover_taiga_F,1,
        H_HelmetSpecter_F,1,
        H_HelmetSpecter_headset_F,1,
		H_HelmetSpecter_paint_F,1,
        H_HelmetSpecter_paint_headset_F,1
    };
};
class I_Raven_soldier_UAV_06_F: I_Raven_Soldier_UAV_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Raven_soldier_UAV_06_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_F0;
	backpack = I_Raven_UAV_06_backpack_F;
};
class I_Raven_soldier_UAV_06_medical_F: I_Raven_Soldier_UAV_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Raven_soldier_UAV_06_medical_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_medical_F0;
	backpack = I_Raven_UAV_06_medical_backpack_F;
};
class I_Raven_Soldier_universal_F: I_Raven_soldier_F
{
	author = $STR_A3_A_BranFlakes;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_medic_s};
			speechPlural[] = {veh_infantry_medic_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_medic_s;
	textPlural = $STR_A3_nameSound_veh_infantry_medic_p;
	nameSound = veh_infantry_medic_s;
	scope = protected;
	displayName = $STR_A3_CfgVehicles_b_soldier_universal_f_displayName;
	attendant = true;
	engineer = true;
	canDeactivateMines = true;
	role = Rifleman;
};
class I_Raven_Soldier_unarmed_F: I_Raven_soldier_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Raven_Soldier_unarmed_F.jpg";
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] = 
	{
		H_HelmetSpecter_cover_khaki_F,
		V_HarnessOSpec_blk,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_HelmetSpecter_cover_khaki_F,
		V_HarnessOSpec_blk,
		DefaultManLinkedItems
	};
	role = Unarmed;
	threat[] = {0.1,0.1,0.1};
};
class I_Raven_Soldier_helipilot_F: O_R_helipilot_ard_F
{
	author = $STR_A3_A_Heliotrope;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_helipilot_ard_F.jpg";
	faction = IND_Raven_F;
	side = TGuerrila;
};

/* Raven - OPFOR */

class O_Raven_Soldier_F: I_Raven_soldier_F
{
	faction = OPF_Raven_F;
	side = TEast;
};
class O_Raven_soldier_GL_F: I_Raven_soldier_GL_F
{
	faction = OPF_Raven_F;
	side = TEast;
};
class O_Raven_soldier_MG_F: I_Raven_soldier_MG_F
{
	faction = OPF_Raven_F;
	side = TEast;
};
class O_Raven_soldier_TL_F: I_Raven_soldier_TL_F
{
	faction = OPF_Raven_F;
	side = TEast;
};
class O_Raven_soldier_M_F: I_Raven_soldier_M_F
{
	faction = OPF_Raven_F;
	side = TEast;
};
class O_Raven_soldier_LAT_F: I_Raven_soldier_LAT_F
{
	faction = OPF_Raven_F;
	side = TEast;
};
class O_Raven_Medic_F: I_Raven_medic_F
{
	faction = OPF_Raven_F;
	side = TEast;
};
class O_Raven_engineer_F: I_Raven_engineer_F
{
	faction = OPF_Raven_F;
	side = TEast;
};
class O_Raven_Soldier_UAV_F: I_Raven_Soldier_UAV_F
{
	faction = OPF_Raven_F;
	side = TEast;
	backpack = O_Raven_UAV_01_backpack_F;
	linkedItems[] = 
	{
		H_HelmetSpecter_cover_khaki_F,
		V_HarnessOSpec_blk,
		G_Tactical_Clear,
		DefaultManLinkedItems,
		O_UAVTerminal
	};
	respawnLinkedItems[] = 
	{
		H_HelmetSpecter_cover_khaki_F,
		V_HarnessOSpec_blk,
		G_Tactical_Clear,
		DefaultManLinkedItems,
		O_UAVTerminal
	};
};
class O_Raven_soldier_UAV_06_F: I_Raven_soldier_UAV_06_F
{
	faction = OPF_Raven_F;
	side = TEast;
	backpack = O_Raven_UAV_06_backpack_F;
	linkedItems[] = 
	{
		H_HelmetSpecter_cover_khaki_F,
		V_HarnessOSpec_blk,
		G_Tactical_Clear,
		DefaultManLinkedItems,
		O_UAVTerminal
	};
	respawnLinkedItems[] = 
	{
		H_HelmetSpecter_cover_khaki_F,
		V_HarnessOSpec_blk,
		G_Tactical_Clear,
		DefaultManLinkedItems,
		O_UAVTerminal
	};
};
class O_Raven_soldier_UAV_06_medical_F: I_Raven_soldier_UAV_06_medical_F
{
	faction = OPF_Raven_F;
	side = TEast;
	backpack = O_Raven_UAV_06_medical_backpack_F;
	linkedItems[] = 
	{
		H_HelmetSpecter_cover_khaki_F,
		V_HarnessOSpec_blk,
		G_Tactical_Clear,
		DefaultManLinkedItems,
		O_UAVTerminal
	};
	respawnLinkedItems[] = 
	{
		H_HelmetSpecter_cover_khaki_F,
		V_HarnessOSpec_blk,
		G_Tactical_Clear,
		DefaultManLinkedItems,
		O_UAVTerminal
	};
};
class O_Raven_Soldier_universal_F: I_Raven_Soldier_universal_F
{
	faction = OPF_Raven_F;
	side = TEast;
};
class O_Raven_Soldier_unarmed_F: I_Raven_Soldier_unarmed_F
{
	faction = OPF_Raven_F;
	side = TEast;
};
class O_Raven_Soldier_helipilot_F: I_Raven_Soldier_helipilot_F
{
	faction = OPF_Raven_F;
	side = TEast;
};