/* ION */
class B_ION_Man_Base_F: B_G_Soldier_F
{
    scope = private;
    scopeCurator = private;
	faction = BLU_ION_F;
	genericNames = NATOMen;
	identityTypes[] =
	{
		LanguageENGFRE_F,
		LanguageENGB_F,
		LanguageENG_F,
		Head_NATO,
		Head_Euro,
		Head_Enoch,
		Head_Asian,
		Head_Tanoan,
		G_ION_default
	};
};
class B_ION_Soldier_Base_F: B_ION_Man_Base_F
{
	uniformClass = U_B_ION_Soldier_1_F;
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	};
};
class B_ION_Soldier_AR_F: B_ION_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_Soldier_AR_F.jpg";
	scope = protected;
	scopeCurator = protected;
	displayName = $STR_B_soldier_AR_F0;
	role = MachineGunner;
	icon = iconManMG;
	cost = 125000;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
	uniformClass = U_B_ION_Uniform_01_tshirt_black_F;
	weapons[] =
	{
		arifle_MX_SW_Black_FL_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MX_SW_Black_FL_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(100Rnd_65x39_caseless_black_mag),
		mag_2(16Rnd_9x21_Mag),
		HandGrenade,
		SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(100Rnd_65x39_caseless_black_mag),
		mag_2(16Rnd_9x21_Mag),
		HandGrenade,
		SmokeShell
	};
	linkedItems[] =
	{
		V_HarnessOSpec_blk,
		H_Cap_blk_ION,
		DefaultManIonLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_HarnessOSpec_blk,
		H_Cap_blk_ION,
		DefaultManIonLinkedItems
	};
	headgearList[] =
	{
		"",1,
		H_Cap_blk_ION,2,
		H_Cap_blk_ION_hs,2,
		H_Cap_headphones_blk_ION,2,
		H_Headset_light,1
	};
};
class B_ION_Soldier_Medic_F: B_ION_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_Soldier_Medic_F.jpg";
	scope = protected;
	scopeCurator = protected;
	displayName = $STR_A3_B_CTRG_Soldier_Medic_tna_F0;
	role = CombatLifeSaver;
	icon = iconManMedic;
	picture = pictureHeal;
	camouflage = 1.6;
	attendant = true;
	uniformClass = U_BG_Guerilla2_3;
	backpack = B_AssaultPack_rgr_IONMedic_F;
	weapons[] =
	{
		arifle_MXC_Black_ACO_FL_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_ACO_FL_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(16Rnd_9x21_Mag),
		HandGrenade,
		SmokeShell,
        SMOKESHELLS_MEDIC
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(16Rnd_9x21_Mag),
		HandGrenade,
		SmokeShell,
        SMOKESHELLS_MEDIC
	};
	linkedItems[] =
	{
		V_TacVest_camo,
		H_Cap_blk_ION,
		DefaultManIonLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_camo,
		H_Cap_blk_ION,
		DefaultManIonLinkedItems
	};
	headgearList[] =
	{
		"",1,
		H_Cap_blk_ION,2,
		H_Cap_blk_ION_hs,2,
		H_Cap_headphones_blk_ION,2,
		H_Headset_light,1
	};
};
class B_ION_Engineer_F: B_ION_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_Engineer_F.jpg";
	scope = protected;
	scopeCurator = protected;
	displayName = $STR_B_engineer_F0;
    role = Sapper;
    icon = iconManEngineer;
    picture = pictureRepair;
	cost = 220000;
	canDeactivateMines = true;
	engineer = true;
	detectSkill = 31;
	threat[] =
    {
        1.0,    // Soft
        0.5,    // Armor
        0.1     // Air
    };
	camouflage = 1.6;
	uniformClass = U_BG_Guerilla2_2;
	backpack = B_Kitbag_rgr_IONEng_F;
	weapons[] =
	{
		arifle_MXC_Black_ACO_FL_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_ACO_FL_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(16Rnd_9x21_Mag),
		HandGrenade,
		SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(16Rnd_9x21_Mag),
		HandGrenade,
		SmokeShell
	};
	linkedItems[] =
	{
		V_HarnessOSpec_blk,
		H_Cap_blk_ION,
		DefaultManIonLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_HarnessOSpec_blk,
		H_Cap_blk_ION,
		DefaultManIonLinkedItems
	};
	headgearList[] =
	{
		"",1,
		H_Cap_blk_ION,2,
		H_Cap_blk_ION_hs,2,
		H_Cap_headphones_blk_ION,2,
		H_Headset_light,1
	};
};
class B_ION_Soldier_GL_F: B_ION_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_Soldier_GL_F.jpg";
	scope = protected;
	scopeCurator = protected;
	displayName = $STR_B_Soldier_GL_F0;
    role = Grenadier;
	cost = 200000;
	uniformClass = U_BG_Guerilla2_3;
	weapons[] =
	{
		arifle_MX_GL_Black_ACO_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MX_GL_Black_ACO_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(16Rnd_9x21_Mag),
		HandGrenade,
		mag_2(3Rnd_HE_Grenade_shell),
		SmokeShell,
		mag_2(1Rnd_Smoke_Grenade_shell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(16Rnd_9x21_Mag),
		HandGrenade,
		mag_2(3Rnd_HE_Grenade_shell),
		SmokeShell,
		mag_2(1Rnd_Smoke_Grenade_shell)
	};
	linkedItems[] =
	{
		V_TacVest_oli,
		H_Cap_blk_ION,
		DefaultManIonLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_oli,
		H_Cap_blk_ION,
		DefaultManIonLinkedItems
	};
	headgearList[] =
	{
		"",1,
		H_Cap_blk_ION,2,
		H_Cap_blk_ION_hs,2,
		H_Cap_headphones_blk_ION,2,
		H_Headset_light,1
	};
};
class B_ION_Helipilot_F: B_ION_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_pilot_s};
			speechPlural[] = {veh_infantry_pilot_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_pilot_s;
	textPlural = $STR_A3_nameSound_veh_infantry_pilot_p;
	nameSound = veh_infantry_pilot_s;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_Helipilot_F.jpg";
	scope = protected;
	scopeCurator = protected;
	displayName = $STR_B_Helipilot_F0;
	role = Crewman;
	cost = 160000;
	camouflage = 2;
	uniformClass = U_BG_Guerilla2_2;
	weapons[] =
	{
		SMG_02_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_02_F,
		DefaultManWeapons
	};
	magazines[] = {mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Red)};
	respawnMagazines[] = {mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Red)};
	linkedItems[] =
	{
		V_TacVest_oli,
		H_Cap_headphones_blk_ION,
		DefaultManIonLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_oli,
		H_Cap_headphones_blk_ION,
		DefaultManIonLinkedItems
	};
	headgearList[] = {H_Cap_headphones_blk_ION,1};
};
class B_ION_Soldier_M_F: B_ION_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_Soldier_M_F.jpg";
	scope = protected;
	scopeCurator = protected;
	displayName = $STR_B_Soldier_M_F0;
	role = Marksman;
	cost = 250000;
	uniformClass = U_B_ION_Uniform_01_poloshirt_wdl_F;
	weapons[] =
	{
		arifle_MXM_Black_RCO_BI_F,
		hgun_P07_blk_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MXM_Black_RCO_BI_F,
		hgun_P07_blk_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_black_mag),
		mag_2(16Rnd_9x21_Mag),
		HandGrenade,
		SmokeShell
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_black_mag),
		mag_2(16Rnd_9x21_Mag),
		HandGrenade,
		SmokeShell
	};
	linkedItems[] =
	{
		V_TacVest_oli,
		H_Cap_blk_ION,
		DefaultManIonLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_oli,
		H_Cap_blk_ION,
		DefaultManIonLinkedItems
	};
	headgearList[] =
	{
		"",1,
		H_Cap_blk_ION,2,
		H_Cap_blk_ION_hs,2,
		H_Cap_headphones_blk_ION,2,
		H_Headset_light,1
	};
};
class B_ION_Soldier_F: B_ION_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_Soldier_F.jpg";
	scope = protected;
	scopeCurator = protected;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	role = Rifleman;
	cost = 100000;
	uniformClass = U_BG_Guerilla2_1;
	weapons[] =
	{
		arifle_MX_Black_ACO_FL_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MX_Black_ACO_FL_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_65x39_caseless_black_mag),
		mag_2(16Rnd_9x21_Mag),
		HandGrenade,
		SmokeShell
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_65x39_caseless_black_mag),
		mag_2(16Rnd_9x21_Mag),
		HandGrenade,
		SmokeShell
	};
	linkedItems[] =
	{
		V_TacVest_oli,
		H_Cap_blk_ION,
		DefaultManIonLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_oli,
		H_Cap_blk_ION,
		DefaultManIonLinkedItems
	};
	headgearList[] =
	{
		"",1,
		H_Cap_blk_ION,2,
		H_Cap_blk_ION_hs,2,
		H_Cap_headphones_blk_ION,2,
		H_Headset_light,1
	};
};
class B_ION_Soldier_LAT_F: B_ION_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_Soldier_LAT_F.jpg";
	scope = protected;
	scopeCurator = protected;
	displayName = $STR_B_Soldier_LAT_F0;
	role = MissileSpecialist;
	icon = iconManAT;
	cost = 130000;
	threat[] =
    {
        0.8,    // Soft
        0.8,    // Armor
        0.3     // Air
    };
	secondaryAmmoCoef = 0.5;
	uniformClass = U_B_ION_Uniform_01_poloshirt_blue_F;
	backpack = B_AssaultPack_rgr_IONLAT_F;
	weapons[] =
	{
		arifle_MXC_Black_ACO_FL_F,
		launch_RPG32_black_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_ACO_FL_F,
		launch_RPG32_black_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		RPG32_F,
		mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		RPG32_F,
		mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_TacVest_camo,
		H_Cap_headphones_blk_ION,
		DefaultManIonLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_camo,
		H_Cap_headphones_blk_ION,
		DefaultManIonLinkedItems
	};
	headgearList[] = {H_Cap_headphones_blk_ION,1};
};
class B_ION_Soldier_CQ_F: B_ION_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_Soldier_CQ_F.jpg";
	scope = protected;
	scopeCurator = protected;
	displayName = $STR_A3_A_CfgVehicles_B_Soldier_CQ_F0;
    cost = 130000;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.1     // Air
    };
	uniformClass = U_B_ION_Uniform_01_tshirt_black_F;
	weapons[] =
	{
		sgun_AA40_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		sgun_AA40_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_2(20Rnd_AA40_Pellets),
        mag_2(20Rnd_AA40_Slug),
		mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_2(20Rnd_AA40_Pellets),
        mag_2(20Rnd_AA40_Slug),
		mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_TacVest_oli,
		H_Cap_blk_ION,
		DefaultManIonLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_oli,
		H_Cap_blk_ION,
		DefaultManIonLinkedItems
	};
	headgearList[] =
	{
		"",1,
		H_Cap_blk_ION,2,
		H_Cap_blk_ION_hs,2,
		H_Cap_headphones_blk_ION,2,
		H_Headset_light,1
	};
};
class B_ION_Soldier_TL_F: B_ION_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_Soldier_TL_F.jpg";
	scope = protected;
	scopeCurator = protected;
	displayName = $STR_B_Soldier_TL_F0;
	role = Rifleman;
	icon = iconManLeader;
    cost = 250000;
	camouflage = 1.4;
	uniformClass = U_B_ION_Uniform_01_poloshirt_wdl_F;
	weapons[] =
	{
		arifle_MX_Black_RCO_FL_F,
		hgun_P07_blk_F,
		DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_MX_Black_RCO_FL_F,
		hgun_P07_blk_F,
		DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
        mag_4(30Rnd_65x39_caseless_black_mag),
        mag_2(30Rnd_65x39_caseless_black_mag_Tracer),
        mag_2(16Rnd_9x21_Mag),
		HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_65x39_caseless_black_mag),
        mag_2(30Rnd_65x39_caseless_black_mag_Tracer),
        mag_2(16Rnd_9x21_Mag),
		HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_TacVest_oli,
		H_Cap_blk_ION,
		DefaultManIonLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_oli,
		H_Cap_blk_ION,
		DefaultManIonLinkedItems
	};
	headgearList[] =
	{
		"",1,
		H_Cap_blk_ION,2,
		H_Cap_blk_ION_hs,2,
		H_Cap_headphones_blk_ION,2,
		H_Headset_light,1
	};
};
class B_ION_RadioOperator_F: B_ION_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_RadioOperator_F.jpg";
    scope = protected;
    scopeCurator = protected;
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	uniformClass = U_I_G_Story_Protagonist_F;
	linkedItems[] =
	{
		V_TacVest_oli,
		H_Cap_blk_ION,
		DefaultManIonLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_oli,
		H_Cap_blk_ION,
		DefaultManIonLinkedItems
	};
	backpack = B_RadioBag_01_black_F;
	weapons[] =
    {
        arifle_MXC_Black_ACO_FL_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MXC_Black_ACO_FL_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
		HandGrenade,
        SmokeShell
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
		HandGrenade,
        SmokeShell
    };
    role = RadioOperator;
	headgearList[] =
	{
		"",1,
		H_Cap_blk_ION,2,
		H_Cap_blk_ION_hs,2,
		H_Cap_headphones_blk_ION,2,
		H_Headset_light,1
	};
};
class B_ION_Soldier_UAV_F: B_ION_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_Soldier_UAV_F.jpg";
	scope = protected;
	scopeCurator = protected;
	displayName = $STR_A3_B_SOLDIER_UAV_F0;
	role = SpecialOperative;
	uavHacker = true;
	uniformClass = U_I_L_Uniform_01_tshirt_black_F;
	backpack = B_ION_UAV_01_backpack_F;
	weapons[] =
	{
		SMG_02_ACO_FL_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_02_ACO_FL_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_9x21_Mag_SMG_02_Tracer_Red),
        mag_2(16Rnd_9x21_Mag),
		HandGrenade,
		SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_9x21_Mag_SMG_02_Tracer_Red),
        mag_2(16Rnd_9x21_Mag),
		HandGrenade,
		SmokeShell
	};
	linkedItems[] =
	{
		V_HarnessOSpec_blk,
		H_Cap_blk_ION,
		G_Tactical_Clear,
		B_UavTerminal,
		DefaultManIonLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_HarnessOSpec_blk,
		H_Cap_blk_ION,
		G_Tactical_Clear,
		B_UavTerminal,
		DefaultManIonLinkedItems
	};
	headgearList[] =
	{
		"",1,
		H_Cap_blk_ION,2,
		H_Cap_blk_ION_hs,2,
		H_Cap_headphones_blk_ION,2,
		H_Headset_light,1
	};
};
class B_ION_soldier_UAV_06_F: B_ION_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_soldier_UAV_06_F.jpg";
	displayName = $STR_A3_C_IDAP_Man_UAV_06_F0;
	backpack = B_ION_UAV_06_backpack_F;
};
class B_ION_soldier_UAV_06_medical_F: B_ION_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_soldier_UAV_06_medical_F.jpg";
	displayName = $STR_A3_C_IDAP_Man_UAV_06_medical_F0;
	backpack = B_ION_UAV_06_medical_backpack_F;
};
class B_ION_soldier_UGV_02_Demining_F: B_ION_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_soldier_UGV_02_Demining_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_B_ION_soldier_UGV_02_Demining_F0;
	backpack = B_ION_UGV_02_Demining_backpack_F;
};
class B_ION_Soldier_universal_F: B_ION_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
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
class B_ION_Soldier_unarmed_F: B_ION_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] =
	{
		V_TacVest_oli,
		H_Cap_blk_ION,
		DefaultManIonLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_oli,
		H_Cap_blk_ION,
		DefaultManIonLinkedItems
	};
	role = Unarmed;
	threat[] =
    {
        0.1,    // Soft
        0.1,    // Armor
        0.1     // Air
    };
};