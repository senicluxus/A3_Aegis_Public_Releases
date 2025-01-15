/* Russian Urban Soldiers*/
class Aegis_O_R_Soldier_Urban_Base_F: O_R_Man_Base_F
{
    author = $STR_A3_A_Ravenholme;
	uniformClass = Aegis_U_O_R_CombatUniform_urban_F;
    vehicleClass = MenUrban;
	editorSubcategory = EdSubcat_Personnel_Camo_Urban;
    linkedItems[] =
	{
		Aegis_V_SmershVest_01_blk_F,
		H_HelmetHeavy_Simple_Black_RF,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_SmershVest_01_blk_F,
		H_HelmetHeavy_Simple_Black_RF,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
    weapons[] =
    {
        Aegis_arifle_ash12_blk_ACO_Pointer_RF,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_arifle_ash12_blk_ACO_Pointer_RF,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_8(20rnd_127x55_mag_rf),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_8(20rnd_127x55_mag_rf),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
};
class Aegis_O_R_SoldierU_A_F: Aegis_O_R_Soldier_Urban_Base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_R_SoldierU_A_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_A_F0;
	backpack = Aegis_B_Carryall_blk_RU_Ammo_F;
	weapons[] =
    {
        Aegis_arifle_ash12_blk_ACO_Pointer_RF,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_arifle_ash12_blk_ACO_Pointer_RF,
        hgun_Rook40_F,
        DefaultManWeapons
    };
	magazines[] =
	{
		mag_6(20rnd_127x55_mag_rf),
		mag_2(17Rnd_9x21_Mag),
		mag_2(HandGrenade_East),
		mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(20rnd_127x55_mag_rf),
		mag_2(17Rnd_9x21_Mag),
		mag_2(HandGrenade_East),
		mag_2(SmokeShell)
	};
	cost = 110000;
};
class Aegis_O_R_SoldierU_AAR_F: Aegis_O_R_Soldier_Urban_Base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_R_SoldierU_AAR_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_O_SOLDIERU_AAR_F0;
	backpack = Aegis_B_FieldPack_blk_RU_AAR_F;
	weapons[] =
    {
        Aegis_arifle_ash12_blk_ACO_Pointer_RF,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_arifle_ash12_blk_ACO_Pointer_RF,
        hgun_Rook40_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_5(20rnd_127x55_mag_rf),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_5(20rnd_127x55_mag_rf),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	cost = 95000;
	role = Assistant;
};
class Aegis_O_R_SoldierU_AR_F: Aegis_O_R_Soldier_Urban_Base_F
{
     author = $STR_A3_A_Ravenholme;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_MG_s};
			speechPlural[] = {veh_infantry_MG_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_MG_s;
	textPlural = $STR_A3_nameSound_veh_infantry_MG_p;
	nameSound = veh_infantry_MG_s;
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_soldier_AR_F0;
	role = MachineGunner;
	icon = iconManMG;
	cost = 125000;
	threat[] =
    {
        1,      // Soft
        0.1,    // Armor
        0.3     // Air
    };
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_R_SoldierU_AR_F.jpg";
    linkedItems[] =
	{
		Aegis_V_SmershVest_01_blk_F,
		H_HelmetHeavy_Black_RF,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_SmershVest_01_blk_F,
		H_HelmetHeavy_Black_RF,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
    weapons[] =
    {
        Aegis_arifle_RPK12_545_arco_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_arifle_RPK12_545_arco_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_8(Aegis_60Rnd_545x39_Mag_Green_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(Aegis_60Rnd_545x39_Mag_Green_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        mag_2(SmokeShell)
    };
};
class Aegis_O_R_SoldierU_AHAT_F: Aegis_O_R_Soldier_Urban_Base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_R_SoldierU_AHAT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_O_Soldier_AHAT_F0;
	backpack = Aegis_B_Carryall_blk_RU_AHAT_F;
	weapons[] =
	{
		Aegis_arifle_ash12_blk_ACO_Pointer_RF,
		hgun_Rook40_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		Aegis_arifle_ash12_blk_ACO_Pointer_RF,
		hgun_Rook40_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
    {
        mag_5(20rnd_127x55_mag_rf),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_5(20rnd_127x55_mag_rf),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	cost = 93000;
	role = Assistant;
};
class Aegis_O_R_SoldierU_AAA_F: Aegis_O_R_Soldier_Urban_Base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_R_SoldierU_AAA_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_AAA_F0;
	backpack = Aegis_B_Carryall_blk_RU_AAA_F;
	weapons[] =
	{
		Aegis_arifle_ash12_blk_ACO_Pointer_RF,
		hgun_Rook40_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		Aegis_arifle_ash12_blk_ACO_Pointer_RF,
		hgun_Rook40_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
    {
        mag_5(20rnd_127x55_mag_rf),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_5(20rnd_127x55_mag_rf),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	cost = 94000;
	role = Assistant;
};
class Aegis_O_R_engineerU_F: Aegis_O_R_Soldier_Urban_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_R_engineerU_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_engineer_F0;
	backpack = Aegis_B_Carryall_blk_RU_eng_F;
    linkedItems[] =
	{
		Aegis_V_SmershVest_01_radio_blk_F,
		H_HelmetHeavy_Black_RF,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_SmershVest_01_radio_blk_F,
		H_HelmetHeavy_Black_RF,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
	weapons[] =
    {
        Aegis_arifle_ash12_blk_ACO_Pointer_RF,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_arifle_ash12_blk_ACO_Pointer_RF,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_5(20rnd_127x55_mag_rf),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_5(20rnd_127x55_mag_rf),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_OPFOR
    };
	canDeactivateMines = true;
	detectSkill = 31;
    icon = iconManEngineer;
    picture = pictureRepair;
	cost = 220000;
    role = Sapper;
	engineer = true;
	camouflage = 1.6;
	threat[] =
    {
        1.0,    // Soft
        0.5,    // Armor
        0.1     // Air
    };
};
class Aegis_O_R_soldierU_AA_F: Aegis_O_R_Soldier_Urban_Base_F
{
	author = $STR_A3_A_Ravenholme;
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_R_soldierU_AA_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_AA_F0;
	backpack = Aegis_B_FieldPack_blk_RU_AA_F;
	linkedItems[] =
	{
		Aegis_V_SmershVest_01_blk_F,
		Aegis_H_HelmetAggressor_cover_ruurban_F,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_SmershVest_01_blk_F,
		Aegis_H_HelmetAggressor_cover_ruurban_F,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
	weapons[] =
	{
		Aegis_arifle_ash12_blk_ACO_Pointer_RF,
		launch_O_Titan_camo_F,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_ash12_blk_ACO_Pointer_RF,
		launch_O_Titan_camo_F,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_5(20rnd_127x55_mag_rf),
        mag_2(17Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_5(20rnd_127x55_mag_rf),
        mag_2(17Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    cost = 200000;
	icon = iconManAT;
	role = MissileSpecialist;
	threat[] =
    {
        1.0,    // Soft
        0.7,    // Armor
        0.3     // Air
    };
};
class Aegis_O_R_soldierU_exp_F: Aegis_O_R_Soldier_Urban_Base_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_R_soldierU_exp_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_exp_F0;
    canDeactivateMines = true;
	detectSkill = 38;
	cost = 93000;
	camouflage = 1.6;
	icon = iconManExplosive;
	picture = pictureExplosive;
	role = Sapper;
    backpack = Aegis_B_Carryall_blk_RU_exp_F;
    weapons[] =
    {
        Aegis_arifle_ash12_blk_ACO_Pointer_RF,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_arifle_ash12_blk_ACO_Pointer_RF,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_5(20rnd_127x55_mag_rf),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_5(20rnd_127x55_mag_rf),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
	threat[] =
    {
        1.0,    // Soft
        0.5,    // Armor
        0.1     // Air
    };
};
class Aegis_O_R_SoldierU_M_F: Aegis_O_R_Soldier_Urban_Base_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_R_SoldierU_M_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_M_F0;
	role = Marksman;
	cost = 250000;
    linkedItems[] =
	{
		Aegis_V_SmershVest_01_blk_F,
		Aegis_H_HelmetAggressor_cover_ruurban_F,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_SmershVest_01_blk_F,
		Aegis_H_HelmetAggressor_cover_ruurban_F,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
    weapons[] =
    {
        Aegis_arifle_ash12_LR_blk_DMS_Pointer_BI_RF,
        hgun_Rook40_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        Aegis_arifle_ash12_LR_blk_DMS_Pointer_BI_RF,
        hgun_Rook40_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_6(20rnd_127x55_mag_rf),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(20rnd_127x55_mag_rf),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
};
class Aegis_O_R_medicU_F: Aegis_O_R_Soldier_Urban_Base_F
{
    author = $STR_A3_A_Ravenholme;
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_R_medicU_F.jpg";
    scope = public;
  	scopeCurator = public;
	displayName = $STR_B_medic_F0;
	role = CombatLifeSaver;
	icon = iconManMedic;
	picture = pictureHeal;
	camouflage = 1.6;
	attendant = true;
	backpack = Aegis_B_FieldPack_blk_RU_Medic_F;
    weapons[] =
    {
        Aegis_arifle_ash12_blk_ACO_Pointer_RF,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_arifle_ash12_blk_ACO_Pointer_RF,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_5(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_MEDIC
    };
    respawnMagazines[] =
    {
        mag_5(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_MEDIC
    };
	cost = 300000;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Aegis_O_R_SoldierU_LAT_F: Aegis_O_R_Soldier_Urban_Base_F
{
    author = $STR_A3_A_Ravenholme;
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_R_SoldierU_LAT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_LAT_F0;
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
    backpack = Aegis_B_FieldPack_blk_RU_RPG_AT_F;
    uniform = Aegis_U_O_Luchnik_RolledUp_urban_F;
    weapons[] =
    {
        Aegis_arifle_ash12_blk_ACO_Pointer_RF,
        launch_RPG32_green_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_arifle_ash12_blk_ACO_Pointer_RF,
        launch_RPG32_green_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_5(20rnd_127x55_mag_rf),
        mag_2(17Rnd_9x21_Mag),
        RPG32_F,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_5(20rnd_127x55_mag_rf),
        mag_2(17Rnd_9x21_Mag),
        RPG32_F,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
};
class Aegis_O_R_SoldierU_GL_F: Aegis_O_R_Soldier_Urban_Base_F
{
    author = $STR_A3_A_Ravenholme;
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
    role = Grenadier;
	cost = 200000;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_R_SoldierU_GL_F.jpg";
    weapons[] =
    {
        Aegis_arifle_ash12_GL_blk_ACO_Pointer_RF,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_arifle_ash12_GL_blk_ACO_Pointer_RF,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    linkedItems[] =
	{
		Aegis_V_SmershVest_01_blk_F,
		H_HelmetHeavy_Black_RF,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_SmershVest_01_blk_F,
		H_HelmetHeavy_Black_RF,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
    magazines[] =
    {
        mag_5(20rnd_127x55_mag_rf),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_5(20rnd_127x55_mag_rf),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
	threat[] =
    {
        1.0,    // Soft
        0.3,    // Armor
        0.1     // Air
    };
};
class Aegis_O_R_SoldierU_F: Aegis_O_R_Soldier_Urban_Base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_R_SoldierU_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	linkedItems[] =
	{
		Aegis_V_SmershVest_01_blk_F,
		H_HelmetHeavy_Simple_Black_RF,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_SmershVest_01_blk_F,
		H_HelmetHeavy_Simple_Black_RF,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
	weapons[] =
    {
        Aegis_arifle_ash12_blk_ACO_Pointer_RF,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_arifle_ash12_blk_ACO_Pointer_RF,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_8(20rnd_127x55_mag_rf),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_8(20rnd_127x55_mag_rf),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
	cost = 100000;
    role = Rifleman;
};
class Aegis_O_R_SoldierU_HAT_F: Aegis_O_R_Soldier_Urban_Base_F
{
	author = $STR_A3_A_Ravenholme;
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_R_SoldierU_HAT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_O_Soldier_HAT_F0;
	backpack = Aegis_B_FieldPack_blk_RU_HAT_F;
	linkedItems[] =
	{
		Aegis_V_SmershVest_01_blk_F,
		H_HelmetHeavy_Black_RF,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_SmershVest_01_blk_F,
		H_HelmetHeavy_Black_RF,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
	weapons[] =
    {
        Aegis_arifle_ash12_blk_ACO_Pointer_RF,
		launch_O_Vorona_green_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_arifle_ash12_blk_ACO_Pointer_RF,
		launch_O_Vorona_green_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_5(20rnd_127x55_mag_rf),
        mag_2(17Rnd_9x21_Mag),
        Vorona_HEAT,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_5(20rnd_127x55_mag_rf),
        mag_2(17Rnd_9x21_Mag),
        Vorona_HEAT,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
	cost = 180000;
	threat[] =
    {
        1.0,    // Soft
        0.7,    // Armor
        0.3     // Air
    };
	secondaryAmmoCoef = 0.5;
	icon = iconManAT;
    role = MissileSpecialist;
};
class Aegis_O_R_SoldierU_CQ_F: Aegis_O_R_Soldier_Urban_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_R_SoldierU_CQ_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_A_CfgVehicles_B_Soldier_CQ_F0;
	linkedItems[] =
	{
		Aegis_V_SmershVest_01_blk_F,
		H_HelmetHeavy_Black_RF,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_SmershVest_01_blk_F,
		H_HelmetHeavy_Black_RF,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
    weapons[] =
    {
        sgun_Mp153_black_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        sgun_Mp153_black_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_3(4Rnd_12Gauge_Pellets),
        mag_3(4Rnd_12Gauge_Slug),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_3(4Rnd_12Gauge_Pellets),
        mag_3(4Rnd_12Gauge_Slug),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    cost = 130000;
	threat[] =
    {
        1.0,    // Soft
        0.3,    // Armor
        0.1     // Air
    };
};
class Aegis_O_R_SoldierU_SL_F: Aegis_O_R_Soldier_Urban_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_R_SoldierU_SL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_SL_F0;
	linkedItems[] =
	{
		Aegis_V_SmershVest_01_radio_blk_F,
		Aegis_H_HelmetAggressor_cover_ruurban_F,
		DefaultManLeaderLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_SmershVest_01_radio_blk_F,
		Aegis_H_HelmetAggressor_cover_ruurban_F,
		DefaultManLeaderLinkedItems,
		O_NVGoggles_blk_F
	};
	weapons[] =
    {
        Aegis_arifle_ash12_blk_ARCO_Pointer_RF,
        hgun_Rook40_F,
        DefaultManWeapons,
		Binocular
    };
    respawnWeapons[] =
    {
        Aegis_arifle_ash12_blk_ARCO_Pointer_RF,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
	magazines[] =
    {
        mag_6(20rnd_127x55_mag_rf),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        SmokeShell,
        SMOKESHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_6(20rnd_127x55_mag_rf),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        SmokeShell,
        SMOKESHELLS_OPFOR
    };
    cost = 500000;
	camouflage = 1.4;
	icon = iconManLeader;
	role = Rifleman;
};
class Aegis_O_R_SoldierU_TL_F: Aegis_O_R_Soldier_Urban_Base_F
{
    displayName = $STR_B_Soldier_TL_F0;
	role = Grenadier;
	icon = iconManLeader;
    cost = 250000;
    scope = public;
    scopeCurator = public;
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_R_SoldierU_TL_F.jpg";
    weapons[] =
    {
        Aegis_arifle_ash12_GL_blk_ARCO_Pointer_RF,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        Aegis_arifle_ash12_GL_blk_ARCO_Pointer_RF,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    linkedItems[] =
	{
		Aegis_V_SmershVest_01_radio_blk_F,
		H_HelmetHeavy_Black_RF,
		DefaultManLeaderLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_SmershVest_01_radio_blk_F,
		H_HelmetHeavy_Black_RF,
		DefaultManLeaderLinkedItems,
		O_NVGoggles_blk_F
	};
    magazines[] =
    {
        mag_5(20rnd_127x55_mag_rf),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_OPFOR
    };
    respawnMagazines[] =
    {
        mag_5(20rnd_127x55_mag_rf),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_OPFOR
    };
};
class Aegis_O_R_RadioOperatorU_F: Aegis_O_R_Soldier_Urban_Base_F
{
	author = $STR_A3_A_Ravenholme;
    scope = public;
    scopeCurator = public;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_R_RadioOperatorU_F.jpg";
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	backpack = B_RadioBag_01_taiga_F;
	weapons[] =
    {
        Aegis_arifle_ash12_blk_ACO_Pointer_RF,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_arifle_ash12_blk_ACO_Pointer_RF,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_5(20rnd_127x55_mag_rf),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_5(20rnd_127x55_mag_rf),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    role = RadioOperator;
};
class Aegis_O_R_SoldierU_unarmed_F: Aegis_O_R_Soldier_Urban_Base_F
{
	author = $STR_A3_A_Ravenholme;
    scope = public;
    scopeCurator = public;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_R_SoldierU_unarmed_F.jpg";
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	role = Unarmed;
	threat[] =
    {
        0.1,    // Soft
        0.1,    // Armor
        0.1     // Air
    };
};
class Aegis_O_R_SharpshooterU_F: Aegis_O_R_Soldier_Urban_Base_F
{
    author = $STR_A3_A_Ravenholme;
    scope = public;
    scopeCurator = public;
    class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_sniper_s"
				};
				speechPlural[]=
				{
					"veh_infantry_sniper_p"
				};
			};
		};
	textSingular = $STR_A3_nameSound_veh_infantry_sniper_s;
	textPlural = $STR_A3_nameSound_veh_infantry_sniper_p;
	nameSound = veh_infantry_sniper_s;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_R_SharpshooterU_F.jpg";
    displayName = $STR_A3_cfgVehicles_B_Sharpshooter_F0;
    role = Marksman;
    weapons[] =
    {
        srifle_DMR_05_DMS_LP_BI_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        srifle_DMR_05_DMS_LP_BI_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_8(10Rnd_93x64_DMR_05_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(10Rnd_93x64_DMR_05_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    cost = 150000;
};
class Aegis_O_R_SoldierU_Lite_F: Aegis_O_R_Soldier_Urban_Base_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_R_SoldierU_Lite_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_lite_F0;
	linkedItems[] =
	{
		Aegis_V_SmershVest_01_blk_F,
		H_HelmetHeavy_Simple_Black_RF,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_SmershVest_01_blk_F,
		H_HelmetHeavy_Simple_Black_RF,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
	weapons[] =
    {
        Aegis_SMG_Gepard_blk_ACO_LP_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_SMG_Gepard_blk_ACO_LP_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_8(Aegis_40Rnd_9x21_Gepard_Green_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_8(Aegis_40Rnd_9x21_Gepard_Green_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
	cost = 90000;
	camouflage = 1.2;
    role = Rifleman;
};