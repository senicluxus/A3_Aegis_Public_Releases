/* Ardistan */
class Atlas_I_AR_Man_Base_F: B_Soldier_F
{
    scope = private;
    scopeCurator = private;
	faction = Atlas_IND_AR_F;
	genericNames = TakistaniMen;
	side = TGuerrila;
	identityTypes[] =
	{
        LanguagePER_F,
        Head_TK,
        G_IRAN_default
	};
};
class Atlas_I_AR_Soldier_base_F: Atlas_I_AR_Man_Base_F
{
	uniformClass = Atlas_U_I_Afghanka_01_ardi_full_F;
};
class Atlas_I_AR_Soldier_A_F: Atlas_I_AR_Soldier_base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_AR_Soldier_A_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_A_F0;
	uniformClass = Atlas_U_I_Afghanka_02_ardi_half_F;
	cost = 100000;
	backpack = Atlas_B_Carryall_ardi_Ammo_F;	
	weapons[] =
	{
		arifle_AKSM_F,
        hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AKSM_F,
        hgun_Rook40_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_Black_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_Black_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		Atlas_V_OCarrierGora_Lite_ardi_F,
		H_HelmetLuchnik_cover_ardi_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierGora_Lite_ardi_F,
		H_HelmetLuchnik_cover_ardi_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_AR_soldier_AAA_F: Atlas_I_AR_Soldier_base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_AR_Soldier_AAA_F.jpg";
	scope = public;
	scopeCurator = public;
	cost = 220000;
	role = Assistant;
	displayName = $STR_B_soldier_AAA_F0;
	backpack = Atlas_B_Carryall_Ardi_AAA_F;
	uniformClass = Atlas_U_I_Afghanka_02_ardi_full_F;
	weapons[] =
	{
		Aegis_arifle_AKM74_F,
        hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_AKM74_F,
        hgun_Rook40_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_Black_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_Black_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		Atlas_V_OCarrierGora_Lite_ardi_F,
		H_HelmetLuchnik_cover_ardi_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierGora_Lite_ardi_F,
		H_HelmetLuchnik_cover_ardi_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_AR_soldier_AAR_F: Atlas_I_AR_Soldier_base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_AR_Soldier_AAR_F.jpg";
	scope = public;
	scopeCurator = public;
	role = Assistant;
	displayName = $STR_O_SOLDIERU_AAR_F0;
	backpack = Atlas_B_FieldPack_Ardi_AAR_F;
	weapons[] =
	{
		Aegis_arifle_AKM74_F,
        hgun_Rook40_F,
		DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		Aegis_arifle_AKM74_F,
        hgun_Rook40_F,
		DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_Black_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_Black_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		Atlas_V_OCarrierGora_Lite_ardi_F,
		H_HelmetLuchnik_cover_ardi_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierGora_Lite_ardi_F,
		H_HelmetLuchnik_cover_ardi_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_AR_Soldier_AR_F: Atlas_I_AR_Soldier_base_F
{
    author = $STR_A3_A_BranFlakes;
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
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_AR_Soldier_AR_F.jpg";
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
	uniformClass = Atlas_U_I_Afghanka_02_ardi_full_F;
    weapons[] =
	{
		Aegis_arifle_RPK74M_BVO_F,
		hgun_Rook40_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_RPK74M_BVO_F,
		hgun_Rook40_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(Aegis_45Rnd_545x39_Mag_Green_F),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_4(Aegis_45Rnd_545x39_Mag_Green_F),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		Atlas_V_OCarrierGora_Lite_ardi_F,
		H_HelmetLuchnik_cover_ardi_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierGora_Lite_ardi_F,
		H_HelmetLuchnik_cover_ardi_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_AR_Medic_F: Atlas_I_AR_Soldier_base_F
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
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_AR_Medic_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_medic_F0;
	role = CombatLifeSaver;
	icon = iconManMedic;
	picture = pictureHeal;
	camouflage = 1.6;
	attendant = true;
	uniformClass = Atlas_U_I_Afghanka_02_ardi_half_F;
	backpack = Atlas_B_FieldPack_Ardi_Medic_F;
    weapons[] =
	{
		Aegis_arifle_AKM74_F,
		hgun_Rook40_F,
		DefaultManWeapons,
	};
	respawnWeapons[] =
	{
		Aegis_arifle_AKM74_F,
		hgun_Rook40_F,
		DefaultManWeapons,
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_Black_Mag_F),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell),
        SMOKESHELLS_MEDIC
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_Black_Mag_F),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell),
        SMOKESHELLS_MEDIC
	};
	linkedItems[] =
	{
		Atlas_V_OCarrierGora_Lite_ardi_F,
		H_HelmetLuchnik_cover_ardi_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierGora_Lite_ardi_F,
		H_HelmetLuchnik_cover_ardi_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_AR_Crew_F: Atlas_I_AR_Soldier_base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_AR_Crew_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_crew_F0;
	role = Crewman;
	cost = 90000;
	camouflage = 1.6;
    engineer = true;
	uniformClass = Atlas_U_I_Afghanka_01_ardi_full_F;
	weapons[] =
	{
		arifle_AKSM_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AKSM_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_545x39_Black_Mag_F),
        HandGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_545x39_Black_Mag_F),
        HandGrenade,
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		Atlas_V_OCarrierGora_ardi_F,
		H_Tank_black_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierGora_ardi_F,
		H_Tank_black_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_AR_Engineer_F: Atlas_I_AR_Soldier_base_F
{
    author = $STR_A3_A_BranFlakes;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_AR_Engineer_F.jpg";
    scope = public;
    scopeCurator = public;
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
        1,      // Soft
        0.5,    // Armor
        0.1     // Air
    };
	camouflage = 1.6;
	backpack = Atlas_B_Carryall_Ardi_Eng_F;
	weapons[] =
	{
		Aegis_arifle_AKM74_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_AKM74_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_Black_Mag_F),
        HandGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_Black_Mag_F),
        HandGrenade,
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		Atlas_V_OCarrierGora_Lite_ardi_F,
		H_HelmetLuchnik_khk_F,
		G_Combat_lxWS,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierGora_Lite_ardi_F,
		H_HelmetLuchnik_khk_F,
		G_Combat_lxWS,
		DefaultManLinkedItems
	};
};
class Atlas_I_AR_Soldier_Exp_F: Atlas_I_AR_Soldier_base_F 
{
    author = $STR_A3_A_BranFlakes;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_AR_Soldier_Exp_F.jpg";
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
	uniform = Atlas_U_I_Afghanka_02_ardi_full_F;
    backpack = Atlas_B_Carryall_Ardi_Exp_F;
	weapons[] =
	{
		Aegis_arifle_AKM74_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_AKM74_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_Black_Mag_F),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_Black_Mag_F),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		Atlas_V_OCarrierGora_CQB_ardi_F, // Change for GL when added
		H_HelmetLuchnik_khk_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierGora_CQB_ardi_F,
		H_HelmetLuchnik_khk_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_AR_Soldier_GL_F: Atlas_I_AR_Soldier_base_F
{
    author = $STR_A3_A_BranFlakes;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_AR_Soldier_GL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
    role = Grenadier;
	cost = 200000;
	weapons[] =
	{
		Aegis_arifle_AKM74_GL_ROS_F,
		hgun_Rook40_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_AKM74_GL_ROS_F,
		hgun_Rook40_F,
        DefaultManWeapons
	};
	magazines[] =
    {
        mag_6(30Rnd_545x39_Black_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_INDEP,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_545x39_Black_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_INDEP,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
	linkedItems[] =
	{
		Atlas_V_OCarrierGora_CQB_ardi_F,	// Change for GL when added
		H_HelmetLuchnik_cover_ardi_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierGora_CQB_ardi_F,
		H_HelmetLuchnik_cover_ardi_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_AR_Helipilot_F: Atlas_I_AR_Soldier_base_F
{
	author = $STR_A3_A_BranFlakes;
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
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_AR_Helipilot_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Helipilot_F0;
	role = Crewman;
	cost = 160000;
	camouflage = 2;
	uniformClass = Atlas_U_I_Afghanka_02_ardi_half_F;
	weapons[] =
	{
		arifle_AKSM_F,
        hgun_Rook40_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AKSM_F,
        hgun_Rook40_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_545x39_Black_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		mag_2(SmokeShell),
        SmokeShellBlue
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_545x39_Black_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		mag_2(SmokeShell),
        SmokeShellBlue
	};
    linkedItems[] =
    {
		Atlas_Tacvest_Ard_F,
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
		Atlas_Tacvest_Ard_F,
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class Atlas_I_AR_Soldier_M_F: Atlas_I_AR_Soldier_base_F
{
    author = $STR_A3_A_BranFlakes;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_AR_Soldier_M_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_M_F0;
	role = Marksman;
	cost = 250000;
	uniformClass = Atlas_U_I_Afghanka_01_ardi_half_F;
	weapons[] =
	{
		Atlas_srifle_SVD_blk_DMS_FL_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		Atlas_srifle_SVD_blk_DMS_FL_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_8(Aegis_10Rnd_762x54_SVD_Green_Mag_F),
        HandGrenade,
		SmokeShell
	};
	respawnMagazines[] =
	{
		mag_8(Aegis_10Rnd_762x54_SVD_Green_Mag_F),
        HandGrenade,
		SmokeShell
	};
	linkedItems[] =
	{
		Atlas_V_OCarrierGora_Lite_ardi_F,
		H_HelmetLuchnik_cover_ardi_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierGora_Lite_ardi_F,
		H_HelmetLuchnik_cover_ardi_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_AR_Officer_F: Atlas_I_AR_Soldier_base_F
{
	author = $STR_A3_A_BranFlakes;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_officer_s};
			speechPlural[] = {veh_infantry_officer_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_officer_s;
	textPlural = $STR_A3_nameSound_veh_infantry_officer_p;
	nameSound = veh_infantry_officer_s;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_AR_Officer_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_officer_F0;
    role = Rifleman;
	icon = iconManOfficer;
    cost = 600000;
	camouflage = 1.6;
	uniformClass = Atlas_U_I_Afghanka_01_ardi_half_F;
	weapons[] =
	{
		arifle_AKSM_F,
		hgun_Rook40_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_AKSM_F,
		hgun_Rook40_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_545x39_Black_Mag_F),
		mag_2(17Rnd_9x21_Mag),
        mag_2(SmokeShell),
        SmokeShellBlue
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_545x39_Black_Mag_F),
		mag_2(17Rnd_9x21_Mag),
        mag_2(SmokeShell),
        SmokeShellBlue
	};
	linkedItems[] =
	{
		V_BandollierB_cbr,
		H_Hat_Pakol_brn_F,
		G_Headset_lxWS,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_BandollierB_cbr,
		H_Hat_Pakol_brn_F,
		G_Headset_lxWS,
		DefaultManLinkedItems
	};
};
class Atlas_I_AR_Soldier_F: Atlas_I_AR_Soldier_base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_AR_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	cost = 100000;
	weapons[] =
	{
		Aegis_arifle_AKM74_ROS_F,
        hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_AKM74_ROS_F,
        hgun_Rook40_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_545x39_Black_Mag_F),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_545x39_Black_Mag_F),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		Atlas_V_OCarrierGora_Lite_ardi_F,
		H_HelmetLuchnik_cover_ardi_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierGora_Lite_ardi_F,
		H_HelmetLuchnik_cover_ardi_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_AR_soldier_AA_F: Atlas_I_AR_Soldier_base_F
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
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_AR_Soldier_AA_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_AA_F0;
	backpack = Atlas_B_FieldPack_Ardi_AA_F;
	cost = 200000;
	icon = iconManAT;
	role = MissileSpecialist;
	threat[] = {1,0.7,0.3};
	weapons[] =
	{
		Aegis_arifle_AKM74_F,
		launch_O_Titan_camo_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_AKM74_F,
		launch_O_Titan_camo_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_Black_Mag_F),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_Black_Mag_F),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		Atlas_V_OCarrierGora_Lite_ardi_F,
		H_HelmetLuchnik_cover_ardi_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierGora_Lite_ardi_F,
		H_HelmetLuchnik_cover_ardi_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_AR_Soldier_LAT_F: Atlas_I_AR_Soldier_base_F
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
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_AR_Soldier_LAT_F.jpg";
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
    backpack = Atlas_B_FieldPack_Ardi_LAT_F;
	weapons[] =
	{
		Aegis_arifle_AKM74_F,
		Aegis_launch_RPG7M_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_AKM74_F,
		Aegis_launch_RPG7M_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_Black_Mag_F),
		RPG7_F,
        HandGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_Black_Mag_F),
		RPG7_F,
        HandGrenade,
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		Atlas_V_OCarrierGora_Lite_ardi_F,
		H_HelmetLuchnik_cover_ardi_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierGora_Lite_ardi_F,
		H_HelmetLuchnik_cover_ardi_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_AR_Soldier_SL_F: Atlas_I_AR_Soldier_base_F
{
    author = $STR_A3_A_BranFlakes;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_AR_Soldier_SL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_SL_F0;
	role = Grenadier;
	icon = iconManLeader;
    cost = 500000;
	camouflage = 1.4;
	uniform = Atlas_U_I_Afghanka_01_ardi_half_F;
	weapons[] =
	{
		Aegis_arifle_AKM74_MRCO_F,
		hgun_Rook40_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		Aegis_arifle_AKM74_MRCO_F,
		hgun_Rook40_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_8(30Rnd_545x39_Black_Mag_F),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_4(SmokeShell),
        mag_2(SmokeShellBlue)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_545x39_Black_Mag_F),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_4(SmokeShell),
        mag_2(SmokeShellBlue)
	};
	linkedItems[] =
	{
		Atlas_V_OCarrierGora_Lite_ardi_F,
		H_HelmetLuchnik_cover_ardi_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierGora_Lite_ardi_F,
		H_HelmetLuchnik_cover_ardi_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_AR_Soldier_TL_F: Atlas_I_AR_Soldier_base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_AR_Soldier_TL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_TL_F0;
    uniform = Atlas_U_I_Afghanka_01_ardi_half_F;
	role = Grenadier;
	icon = iconManLeader;
    cost = 250000;
	camouflage = 1.4;
	weapons[] =
	{
		Aegis_arifle_AKM74_GL_MRCO_F,
		hgun_Rook40_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		Aegis_arifle_AKM74_GL_MRCO_F,
		hgun_Rook40_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_Black_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_INDEP,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_INDEP
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_Black_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_INDEP,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_INDEP
	};
	linkedItems[] =
	{
		Atlas_V_OCarrierGora_CQB_ardi_F,
		H_HelmetLuchnik_cover_ardi_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierGora_CQB_ardi_F,
		H_HelmetLuchnik_cover_ardi_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_AR_RadioOperator_F: Atlas_I_AR_Soldier_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_AR_RadioOperator_F.jpg";
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	backpack = B_RadioBag_01_ardi_F;
	uniformClass = Atlas_U_I_Afghanka_02_ardi_half_F;
	weapons[] =
	{
		Aegis_arifle_AKM74_F,
        hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_AKM74_F,
        hgun_Rook40_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_545x39_Black_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_545x39_Black_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		Atlas_V_OCarrierGora_Lite_ardi_F,
		H_HelmetLuchnik_cover_ardi_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierGora_Lite_ardi_F,
		H_HelmetLuchnik_cover_ardi_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_AR_Soldier_lite_F: Atlas_I_AR_Soldier_base_F
{
    author = $STR_A3_A_BranFlakes;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_AR_Soldier_lite_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_lite_F0;
	cost = 100000;
	uniform = Atlas_U_I_Afghanka_02_ardi_half_F;
	weapons[] =
	{
		Aegis_arifle_AKM74_F,
        hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_AKM74_F,
        hgun_Rook40_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_Black_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_Black_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		Atlas_Tacvest_Ard_F,
		H_Hat_Pakol_brn_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_Tacvest_Ard_F,
		H_Hat_Pakol_brn_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_AR_Soldier_universal_F: Atlas_I_AR_Soldier_F
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
	scopeCurator = private;
	displayName = $STR_A3_CfgVehicles_b_soldier_universal_f_displayName;
	attendant = true;
	engineer = true;
	canDeactivateMines = true;
	role = Rifleman;
};
class Atlas_I_AR_unarmed_F: Atlas_I_AR_Soldier_F
{
	author = $STR_A3_A_BranFlakes;
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] =
	{
		Atlas_V_OCarrierGora_ardi_F,
		H_HelmetLuchnik_cover_ardi_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierGora_ardi_F,
		H_HelmetLuchnik_cover_ardi_F,
		DefaultManLinkedItems
	};
	role = Unarmed;
	threat[] =
    {
        0.1,    // Soft
        0.1,    // Armor
        0.1     // Air
    };
};
/*class Atlas_I_AR_Soldier_CBRN_F: Atlas_I_AR_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_AR_Soldier_CBRN_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_C_B_W_Soldier_CBRN_F0;
	uniformClass = Atlas_U_I_AR_CBRN_Suit_01_F;
	backpack = B_CombinationUnitRespirator_01_F;
	linkedItems[] =
	{
		Atlas_V_OCarrierGora_Lite_ardi_F,
		H_HelmetLuchnik_cover_ardi_F,
		G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierGora_Lite_ardi_F,
		H_HelmetLuchnik_cover_ardi_F,
		G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems
	};
	weapons[] =
    {
        Atlas_arifle_SPAR_01_blk_Holo_FL_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_SPAR_01_blk_Holo_FL_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_10(30Rnd_545x39_Black_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_10(30Rnd_545x39_Black_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    cost = 93000;
	camouflage = 1.6;
    icon = iconManEngineer;
    picture = pictureRepair;
    role = Sapper;
	class EventHandlers: EventHandlers
	{
		class BIN_CBRN_INIT
		{
			init = "_this call bin_fnc_CBRNHoseInit;";
		};
	};
};*/
class Atlas_I_AR_Pilot_F: Atlas_I_AR_Soldier_base_F
{
	author = $STR_A3_A_BranFlakes;
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
	editorPreview   = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_AR_Pilot_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Pilot_F0;
	camouflage = 2;
    cost = 165000;
    role = Crewman;
	uniformClass = Atlas_U_I_A_PilotCoveralls;
	backpack = B_Parachute;
	weapons[] =
	{
        hgun_Rook40_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
        hgun_Rook40_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(17Rnd_9x21_Mag),
        mag_2(SmokeShellBlue)
	};
	respawnMagazines[] =
	{
		mag_4(17Rnd_9x21_Mag),
        mag_2(SmokeShellBlue)
	};
    linkedItems[] =
    {
        H_PilotHelmetFighter_O,
        DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetFighter_O,
        DefaultManLinkedItems
    };
};