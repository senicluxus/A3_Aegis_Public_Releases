/* Royal Army of Karzeghistan */
class Atlas_B_K_Man_Base_F: B_Soldier_F
{
    scope = private;
    scopeCurator = private;
	faction = Atlas_BLU_K_F;
	genericNames = TakistaniMen;
	identityTypes[] =
	{
        LanguagePER_F,
        Head_TK,
        G_IRAN_default
	};
};
class Atlas_B_K_Soldier_base_F: Atlas_B_K_Man_Base_F
{
	uniformClass = Atlas_U_B_K_CombatUniform;
};
class Atlas_B_K_Soldier_A_F: Atlas_B_K_Soldier_base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_K_Soldier_A_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_A_F0;
	uniformClass = Atlas_U_B_K_CombatUniform_shortsleeve;
	cost = 100000;
	backpack = B_PatrolBackpack_KZG_Ammo_F;	
	weapons[] =
	{
		Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F,
        Aegis_hgun_P320_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F,
        Aegis_hgun_P320_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Khaki_F,
		Atlas_H_FieldCap_hs_kzg,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Khaki_F,
		Atlas_H_FieldCap_hs_kzg,
		DefaultManLinkedItems
	};
};
class Atlas_B_K_soldier_AAA_F: Atlas_B_K_Soldier_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_K_Soldier_AAA_F.jpg";
	scope = public;
	scopeCurator = public;
	cost = 220000;
	role = Assistant;
	displayName = $STR_B_soldier_AAA_F0;
	backpack = B_Carryall_KZG_AAA_F;
	uniformClass = Atlas_U_B_K_CombatUniform_shortsleeve;
	weapons[] =
	{
		Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F,
        Aegis_hgun_P320_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F,
        Aegis_hgun_P320_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Khaki_F,
		Atlas_H_PASGT_Cover_alt_KZG_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Khaki_F,
		Atlas_H_PASGT_Cover_alt_KZG_F,
		DefaultManLinkedItems
	};
};
class Atlas_B_K_soldier_AAR_F: Atlas_B_K_Soldier_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_K_Soldier_AAR_F.jpg";
	scope = public;
	scopeCurator = public;
	role = Assistant;
	displayName = $STR_O_SOLDIERU_AAR_F0;
	backpack = B_AssaultPack_KZG_AAR_F;
	weapons[] =
	{
		Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F,
        Aegis_hgun_P320_black_F,
		DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F,
        Aegis_hgun_P320_black_F,
		DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Khaki_F,
		Atlas_H_PASGT_Cover_alt_KZG_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Khaki_F,
		Atlas_H_PASGT_Cover_alt_KZG_F,
		DefaultManLinkedItems
	};
};
class Atlas_B_K_Soldier_AR_F: Atlas_B_K_Soldier_base_F
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
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_K_Soldier_AR_F.jpg";
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
	uniformClass = Atlas_U_B_K_CombatUniform_shortsleeve;
    weapons[] =
	{
		Atlas_LMG_03_Holo_SFL_F,
		Aegis_hgun_P320_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_LMG_03_Holo_SFL_F,
		Aegis_hgun_P320_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_3(200rnd_556x45_box_red_f),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_3(200rnd_556x45_box_red_f),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_CQB_khk_F,
		Atlas_H_PASGT_Cover_alt_KZG_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_CQB_khk_F,
		Atlas_H_PASGT_Cover_alt_KZG_F,
		DefaultManLinkedItems
	};
};
class Atlas_B_K_Medic_F: Atlas_B_K_Soldier_base_F
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
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_K_Medic_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_medic_F0;
	role = CombatLifeSaver;
	icon = iconManMedic;
	picture = pictureHeal;
	camouflage = 1.6;
	attendant = true;
	backpack = B_AssaultPack_KZG_Medic_F;
    weapons[] =
	{
		Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F,
		Aegis_hgun_P320_black_F,
		DefaultManWeapons,
	};
	respawnWeapons[] =
	{
		Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F,
		Aegis_hgun_P320_black_F,
		DefaultManWeapons,
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag_red),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell),
        SMOKESHELLS_MEDIC
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag_red),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell),
        SMOKESHELLS_MEDIC
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_CQB_khk_F,
		Atlas_H_FieldCap_hs_kzg,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_CQB_khk_F,
		Atlas_H_FieldCap_hs_kzg,
		DefaultManLinkedItems
	};
};
class Atlas_B_K_Crew_F: Atlas_B_K_Soldier_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_K_Crew_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_crew_F0;
	role = Crewman;
	cost = 90000;
	camouflage = 1.6;
    engineer = true;
	uniformClass = Atlas_U_B_K_CombatUniform_shortsleeve;
	weapons[] =
	{
		SMG_03C_TR_Black,
        Aegis_hgun_P320_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_03C_TR_Black,
        Aegis_hgun_P320_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(50Rnd_570x28_smg_03),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_4(50Rnd_570x28_smg_03),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_TacVest_khk,
		Atlas_H_FieldCap_hs_kzg,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_khk,
		Atlas_H_FieldCap_hs_kzg,
		DefaultManLinkedItems
	};
};
class Atlas_B_K_Engineer_F: Atlas_B_K_Soldier_base_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_K_Engineer_F.jpg";
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
	backpack = B_Carryall_KZG_Eng_F;
	weapons[] =
	{
		Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F,
        Aegis_hgun_P320_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F,
        Aegis_hgun_P320_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag_red),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag_red),.
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_Heavy_Khaki_F,
		Atlas_H_PASGT_Cover_alt_KZG_F,
		G_Combat,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_Heavy_Khaki_F,
		Atlas_H_PASGT_Cover_alt_KZG_F,
		G_Combat,
		DefaultManLinkedItems
	};
};
class Atlas_B_K_Soldier_Exp_F: Atlas_B_K_Soldier_base_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_K_Soldier_Exp_F.jpg";
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
	uniform = Atlas_U_B_K_CombatUniform_shortsleeve;
    backpack = B_Carryall_KZG_Exp_F;
	weapons[] =
	{
		Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F,
        Aegis_hgun_P320_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F,
        Aegis_hgun_P320_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag_red),
		mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag_red),
		mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_Heavy_Khaki_F,
		Atlas_H_PASGT_Cover_alt_KZG_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_Heavy_Khaki_F,
		Atlas_H_PASGT_Cover_alt_KZG_F,
		DefaultManLinkedItems
	};
};
class Atlas_B_K_Soldier_GL_F: Atlas_B_K_Soldier_base_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_K_Soldier_GL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
    role = Grenadier;
	cost = 200000;
	weapons[] =
	{
		Atlas_arifle_SPAR_01_GL_blk_Holo_FL_F,
		Aegis_hgun_P320_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_SPAR_01_GL_blk_Holo_FL_F,
		Aegis_hgun_P320_black_F,
        DefaultManWeapons
	};
	magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
	linkedItems[] =
	{
		V_CarrierRigKBT_01_Heavy_Khaki_F,
		Atlas_H_PASGT_Cover_alt_KZG_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_Heavy_Khaki_F,
		Atlas_H_PASGT_Cover_alt_KZG_F,
		DefaultManLinkedItems
	};
};
class Atlas_B_K_Helipilot_F: Atlas_B_K_Soldier_base_F
{
	author = $STR_A3_A_Ravenholme;
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
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_K_Helipilot_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Helipilot_F0;
	role = Crewman;
	cost = 160000;
	camouflage = 2;
	uniformClass = Atlas_U_B_K_HeliPilotCoveralls;
	weapons[] =
	{
		SMG_03C_TR_Black,
        Aegis_hgun_P320_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_03C_TR_Black,
        Aegis_hgun_P320_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(50Rnd_570x28_smg_03),
		mag_2(17Rnd_9x21_Mag),
		mag_2(SmokeShell),
        SmokeShellBlue
	};
	respawnMagazines[] =
	{
		mag_4(50Rnd_570x28_smg_03),
		mag_2(17Rnd_9x21_Mag),
		mag_2(SmokeShell),
        SmokeShellBlue
	};
    linkedItems[] =
    {
		V_TacVest_khk,
        H_PilotHelmetHeli_I_E,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
		V_TacVest_khk,
        H_PilotHelmetHeli_I_E,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class Atlas_B_K_Soldier_M_F: Atlas_B_K_Soldier_base_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_K_Soldier_M_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_M_F0;
	role = Marksman;
	cost = 250000;
	uniformClass = Atlas_U_B_K_CombatUniform_shortsleeve;
	weapons[] =
	{
		Atlas_arifle_SPAR_03_blk_ACOG_FL_F,
        Aegis_hgun_P320_black_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		Atlas_arifle_SPAR_03_blk_ACOG_FL_F,
        Aegis_hgun_P320_black_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_8(20rnd_762x51_mag),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
		SmokeShell
	};
	respawnMagazines[] =
	{
		mag_8(20rnd_762x51_mag),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
		SmokeShell
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Khaki_F,
		Atlas_H_FieldCap_hs_kzg,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Khaki_F,
		Atlas_H_FieldCap_hs_kzg,
		DefaultManLinkedItems
	};
};
class Atlas_B_K_Officer_F: Atlas_B_K_Soldier_base_F
{
	author = $STR_A3_A_Ravenholme;
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
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_K_Officer_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_officer_F0;
    role = Rifleman;
	icon = iconManOfficer;
    cost = 600000;
	camouflage = 1.6;
	//uniformClass = Atlas_U_B_K_CombatUniform_Officer;
	weapons[] =
	{
		arifle_SPAR_01_blk_F,
		Aegis_hgun_P320_black_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_blk_F,
		Aegis_hgun_P320_black_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_Stanag_red),
		mag_2(17Rnd_9x21_Mag),
        mag_2(SmokeShell),
        SmokeShellBlue
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_Stanag_red),
		mag_2(17Rnd_9x21_Mag),
        mag_2(SmokeShell),
        SmokeShellBlue
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_holster_khk_F,
		Atlas_H_Milcap_nohs_kzg,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_holster_khk_F,
		Atlas_H_Milcap_nohs_kzg,
		DefaultManLinkedItems
	};
};
class Atlas_B_K_Soldier_F: Atlas_B_K_Soldier_base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_K_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	cost = 100000;
	weapons[] =
	{
		Atlas_arifle_SPAR_02_Inf_blk_ACOG_FL_F,
        Aegis_hgun_P320_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_SPAR_02_Inf_blk_ACOG_FL_F,
        Aegis_hgun_P320_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_556x45_Stanag_red),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_556x45_Stanag_red),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Khaki_F,
		Atlas_H_PASGT_Cover_alt_KZG_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Khaki_F,
		Atlas_H_PASGT_Cover_alt_KZG_F,
		DefaultManLinkedItems
	};
};
class Atlas_B_K_soldier_AA_F: Atlas_B_K_Soldier_base_F
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
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_K_Soldier_AA_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_AA_F0;
	//backpack = B_AssaultPack_KZG_AA_F;
	cost = 200000;
	icon = iconManAT;
	role = MissileSpecialist;
	threat[] = {1,0.7,0.3};
	weapons[] =
	{
		Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F,
        Aegis_hgun_P320_black_F,
		launch_B_Titan_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F,
        Aegis_hgun_P320_black_F,
		launch_B_Titan_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag_red),
		mag_2(17Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag_red),
		mag_2(17Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Khaki_F,
		Atlas_H_PASGT_Cover_alt_KZG_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Khaki_F,
		Atlas_H_PASGT_Cover_alt_KZG_F,
		DefaultManLinkedItems
	};
};
class Atlas_B_K_Soldier_LAT_F: Atlas_B_K_Soldier_base_F
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
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_K_Soldier_LAT_F.jpg";
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
    backpack = B_AssaultPack_KZG_AT_F;
	uniform = Atlas_U_B_K_CombatUniform_shortsleeve;
	weapons[] =
	{
		Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F,
        Aegis_hgun_P320_black_F,
		Atlas_launch_Pzf3_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F,
        Aegis_hgun_P320_black_F,
		Atlas_launch_Pzf3_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag_red),
		mag_2(17Rnd_9x21_Mag),
		Atlas_DM12_HEAT_F,
        HandGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag_red),
		mag_2(17Rnd_9x21_Mag),
		Atlas_DM12_HEAT_F,
        HandGrenade,
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_CQB_khk_F,
		Atlas_H_PASGT_Cover_alt_KZG_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_CQB_khk_F,
		Atlas_H_PASGT_Cover_alt_KZG_F,
		DefaultManLinkedItems
	};
};
class Atlas_B_K_Soldier_SL_F: Atlas_B_K_Soldier_base_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_K_Soldier_SL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_SL_F0;
	role = Grenadier;
	icon = iconManLeader;
    cost = 500000;
	camouflage = 1.4;
	uniform = Atlas_U_B_K_CombatUniform_shortsleeve;
	weapons[] =
	{
		Atlas_arifle_SPAR_02_Inf_blk_ACOG_FL_F,
		Aegis_hgun_P320_black_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		Atlas_arifle_SPAR_02_Inf_blk_ACOG_FL_F,
		Aegis_hgun_P320_black_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_Stanag_red),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_4(SmokeShell),
        mag_2(SmokeShellBlue)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_Stanag_red),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_4(SmokeShell),
        mag_2(SmokeShellBlue)
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_CQB_khk_F,
		Atlas_H_PASGT_Cover_alt_KZG_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_CQB_khk_F,
		Atlas_H_PASGT_Cover_alt_KZG_F,
		DefaultManLinkedItems
	};
};
class Atlas_B_K_Soldier_TL_F: Atlas_B_K_Soldier_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_K_Soldier_TL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_TL_F0;
	role = Grenadier;
	icon = iconManLeader;
    cost = 250000;
	camouflage = 1.4;
	weapons[] =
	{
		Atlas_arifle_SPAR_01_GL_blk_ACOG_FL_F,
		Aegis_hgun_P320_black_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		Atlas_arifle_SPAR_01_GL_blk_ACOG_FL_F,
		Aegis_hgun_P320_black_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_Heavy_Khaki_F,
		Atlas_H_PASGT_Cover_alt_KZG_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_Heavy_Khaki_F,
		Atlas_H_PASGT_Cover_alt_KZG_F,
		DefaultManLinkedItems
	};
};
class Atlas_B_K_RadioOperator_F: Atlas_B_K_Soldier_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_K_RadioOperator_F.jpg";
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	backpack = B_RadioBag_01_kzg_F;
	weapons[] =
	{
		Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F,
        Aegis_hgun_P320_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F,
        Aegis_hgun_P320_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Khaki_F,
		Atlas_H_FieldCap_hs_kzg,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Khaki_F,
		Atlas_H_FieldCap_hs_kzg,
		DefaultManLinkedItems
	};
};
class Atlas_B_K_Soldier_lite_F: Atlas_B_K_Soldier_base_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_K_Soldier_lite_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_lite_F0;
	cost = 100000;
	uniform = Atlas_U_B_K_CombatUniform_shortsleeve;
	weapons[] =
	{
		Aegis_arifle_SPAR_02_inf_blk_F,
        Aegis_hgun_P320_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_SPAR_02_inf_blk_F,
        Aegis_hgun_P320_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_Khaki_F,
		Atlas_H_Milcap_nohs_kzg,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_Khaki_F,
		Atlas_H_Milcap_nohs_kzg,
		DefaultManLinkedItems
	};
};
class Atlas_B_K_HeavyGunner_F: Atlas_B_K_Soldier_AR_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_K_HeavyGunner_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_A3_cfgVehicles_B_HeavyGunner_F0;
    uniformClass = Atlas_U_B_K_CombatUniform;
	backpack = B_AssaultPack_KZG_HG_F;
	weapons[] =
	{
		Atlas_MMG_FNMAG_ACOG_FL_F,
        Aegis_hgun_P320_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_MMG_FNMAG_ACOG_FL_F,
        Aegis_hgun_P320_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_2(Aegis_200Rnd_762x51_MAG_Red_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_2(Aegis_200Rnd_762x51_MAG_Red_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Khaki_F,
		Atlas_H_FieldCap_hs_kzg,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Khaki_F,
		Atlas_H_FieldCap_hs_kzg,
		DefaultManLinkedItems
	};
};
class Atlas_B_K_Soldier_CQ_F: Atlas_B_K_Soldier_base_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_K_Soldier_CQ_F.jpg";
    scope = public;
    scopeCurator = public;
	cost = 100000;
    displayName = $STR_A3_A_CfgVehicles_B_Soldier_CQ_F0;
	uniform = Atlas_U_B_K_CombatUniform_shortsleeve;
    weapons[] =
	{
		sgun_M4_F,
        Aegis_hgun_P320_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		sgun_M4_F,
        Aegis_hgun_P320_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_3(8Rnd_12Gauge_Pellets),
        mag_3(8Rnd_12Gauge_Slug),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
		MiniGrenade,
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_3(8Rnd_12Gauge_Pellets),
        mag_3(8Rnd_12Gauge_Slug),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
		MiniGrenade,
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_CQB_khk_F,
		Atlas_H_PASGT_Cover_alt_KZG_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_CQB_khk_F,
		Atlas_H_PASGT_Cover_alt_KZG_F,
		DefaultManLinkedItems
	};
};
class Atlas_B_K_Soldier_universal_F: Atlas_B_K_Soldier_F
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
	scope = protected;
	scopeCurator = private;
	displayName = $STR_A3_CfgVehicles_b_soldier_universal_f_displayName;
	attendant = true;
	engineer = true;
	canDeactivateMines = true;
	role = Rifleman;
};
class Atlas_B_K_unarmed_F: Atlas_B_K_Soldier_F
{
	author = $STR_A3_A_Ravenholme;
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Khaki_F,
		Atlas_H_PASGT_Cover_alt_KZG_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Khaki_F,
		Atlas_H_PASGT_Cover_alt_KZG_F,
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
class Atlas_B_K_Soldier_UAV_F: Atlas_B_K_Soldier_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_K_Soldier_UAV_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_B_SOLDIER_UAV_F0;
	uavHacker = true;
    cost = 150000;
	role = SpecialOperative;
    uniformClass = Atlas_U_B_K_CombatUniform_shortsleeve;
	backpack = B_UAV_01_backpack_F;
	weapons[] =
	{
		Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F,
        Aegis_hgun_P320_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F,
        Aegis_hgun_P320_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Khaki_F,
		Atlas_H_PASGT_Cover_alt_KZG_F,
		B_UavTerminal,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Khaki_F,
		Atlas_H_PASGT_Cover_alt_KZG_F,
		B_UavTerminal,
		DefaultManLinkedItems
	};
};
class Atlas_B_K_Soldier_CBRN_F: Atlas_B_K_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview  = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_K_Soldier_CBRN_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_C_B_W_Soldier_CBRN_F0;
	uniformClass = Atlas_U_B_K_CBRN_Suit_01_F;
	backpack = B_CombinationUnitRespirator_01_F;
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_tac_khk_F,
		Atlas_H_PASGT_Cover_alt_KZG_F,
		G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_tac_khk_F,
		Atlas_H_PASGT_Cover_alt_KZG_F,
		G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems
	};
	weapons[] =
    {
        Atlas_arifle_SPAR_01_blk_Holo_FL_F,
        Aegis_hgun_P320_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_SPAR_01_blk_Holo_FL_F,
        Aegis_hgun_P320_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_10(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_10(30Rnd_556x45_Stanag_red),
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
};
class Atlas_B_K_Pilot_F: Atlas_B_K_Soldier_base_F
{
	author = $STR_A3_A_Ravenholme;
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
	editorPreview   = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_K_Pilot_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_B_Fighter_Pilot_name;
	camouflage = 2;
    cost = 160000;
    role = Crewman;
	uniformClass = Atlas_U_B_K_HeliPilotCoveralls;
	backpack = B_Parachute;
	weapons[] =
	{
        Aegis_hgun_P320_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
        Aegis_hgun_P320_black_F,
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
		V_TacVest_khk,
        H_PilotHelmetFighter_I_E,
        DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
		V_TacVest_khk,
        H_PilotHelmetFighter_I_E,
        DefaultManLinkedItems
    };
};