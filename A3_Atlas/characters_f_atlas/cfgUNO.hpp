// Sahrani
class Atlas_I_UNO_Man_Base_F: I_soldier_F
{
    scope = private;
	faction = Atlas_IND_UNO_F;
	genericNames = VenezuelanMen;
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_Greek,
		G_HAF_default
	};
};
class Atlas_I_UNO_Soldier_Base_F: Atlas_I_UNO_Man_Base_F
{
	uniformClass = Atlas_U_I_U_CombatUniform_UNO;
};
class Atlas_I_UNO_Soldier_A_F: Atlas_I_UNO_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_Soldier_A_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_A_F0;
	cost = 110000;
    uniformClass = Atlas_U_I_U_CombatUniform_shortsleeve_UNO;
	backpack = B_Carryall_cbr_IUAmmo_F;
	weapons[] =
	{
		arifle_G36_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_coyote_F,
		H_PASGT_basic_UNO_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_coyote_F,
		H_PASGT_basic_UNO_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_UNO_Soldier_AR_F: Atlas_I_UNO_Soldier_Base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_Soldier_AR_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_soldier_AR_F0;
	role = MachineGunner;
	icon = iconManMG;
	cost = 125000;
	threat[] = {1,0.1,0.3};
    uniformClass = Atlas_U_I_U_CombatUniform_shortsleeve_UNO;
	weapons[] =
	{
		LMG_Mk200_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_Mk200_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_2(200Rnd_65x39_cased_box_red),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_2(200Rnd_65x39_cased_box_red),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_coyote_F,
		H_PASGT_basic_UNO_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_coyote_F,
		H_PASGT_basic_UNO_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_UNO_Medic_F: Atlas_I_UNO_Soldier_Base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_Medic_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_medic_F0;
	role = CombatLifeSaver;
	icon = iconManMedic;
	picture = pictureHeal;
	camouflage = 1.6;
	attendant = true;
    uniformClass = Atlas_U_I_U_CombatUniform_shortsleeve_UNO;
	backpack = B_AssaultPack_cbr_IUMedic_F;
	weapons[] =
	{
		arifle_G36_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        HandGrenade,
        SmokeShell,
        SMOKESHELLS_MEDIC
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        HandGrenade,
        SmokeShell,
        SMOKESHELLS_MEDIC
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_coyote_F,
		H_PASGT_basic_UNO_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_coyote_F,
		H_PASGT_basic_UNO_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_UNO_Engineer_F: Atlas_I_UNO_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_Engineer_F.jpg";
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
	threat[] = {1,0.5,0.1};
	camouflage = 1.6;
	backpack = B_Carryall_cbr_IUEng_F;
	weapons[] =
	{
		arifle_G36_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        SmokeShell,
        SmokeShellYellow
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        SmokeShell,
        SmokeShellYellow
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_coyote_F,
		H_PASGT_basic_UNO_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_coyote_F,
		H_PASGT_basic_UNO_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_UNO_Soldier_GL_F: Atlas_I_UNO_Soldier_Base_F
{
	author = $STR_A3_A_BranFlakes;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_Soldier_GL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
    role = Grenadier;
	cost = 200000;
	weapons[] =
	{
		arifle_G36_GL_Holo_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36_GL_Holo_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_4(1Rnd_HE_Grenade_shell),
        HandGrenade,
        SmokeShell,
        1Rnd_Smoke_Grenade_shell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_4(1Rnd_HE_Grenade_shell),
        HandGrenade,
        SmokeShell,
        1Rnd_Smoke_Grenade_shell
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_coyote_F,
		H_PASGT_basic_UNO_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_coyote_F,
		H_PASGT_basic_UNO_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_UNO_Helipilot_F: Atlas_I_UNO_Soldier_Base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_Helipilot_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Helipilot_F0;
	role = Crewman;
	cost = 160000;
	camouflage = 2;
	weapons[] =
	{
		SMG_05_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_05_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Red),
        SmokeShellYellow
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Red),
        SmokeShellYellow
	};
    linkedItems[] =
    {
		V_TacVest_khk,
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
		V_TacVest_khk,
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class Atlas_I_UNO_Helicrew_F: Atlas_I_UNO_Helipilot_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_Helicrew_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_helicrew_F0;
	role = Crewman;
	cost = 80000;
	uniformClass = Atlas_U_I_U_CombatUniform_shortsleeve_UNO;
	weapons[] =
	{
		arifle_G36C_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36C_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
        SmokeShellYellow
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
        SmokeShellYellow
	};
    linkedItems[] =
    {
		V_TacVest_khk,
        H_CrewHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
		V_TacVest_khk,
        H_CrewHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class Atlas_I_UNO_Crew_F: Atlas_I_UNO_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_Crew_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_crew_F0;
	uniformClass = Atlas_U_I_U_CombatUniform_shortsleeve_UNO;
	weapons[] =
	{
		arifle_G36C_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36C_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
        SmokeShellYellow
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
        SmokeShellYellow
	};
    linkedItems[] =
    {
		V_TacVest_khk,
        H_HelmetCrew_I,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
		V_TacVest_khk,
        H_HelmetCrew_I,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class Atlas_I_UNO_soldier_M_F: Atlas_I_UNO_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_soldier_M_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_M_F0;
	role = Marksman;
	cost = 250000;
	weapons[] =
	{
		srifle_EBR_blk_AMS_BI_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		srifle_EBR_blk_AMS_BI_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_8(20Rnd_Mk14_762x51_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_8(20Rnd_Mk14_762x51_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_coyote_F,
		H_PASGT_basic_UNO_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_coyote_F,
		H_PASGT_basic_UNO_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_UNO_Officer_F: Atlas_I_UNO_Soldier_Base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_Officer_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_officer_F0;
    role = Rifleman;
	icon = iconManOfficer;
    cost = 600000;
	camouflage = 1.6;
	weapons[] =
	{
		SMG_05_F,
		hgun_ACPC2_black_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		SMG_05_F,
		hgun_ACPC2_black_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Red),
		mag_2(9Rnd_45ACP_Mag),
        SmokeShellYellow
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Red),
		mag_2(9Rnd_45ACP_Mag),
        SmokeShellYellow
	};
	linkedItems[] =
	{
		V_Rangemaster_belt_cbr,
		H_Beret_UNO_01_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Rangemaster_belt_cbr,
		H_Beret_UNO_01_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_UNO_Soldier_F: Atlas_I_UNO_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	cost = 100000;
	weapons[] =
	{
		arifle_G36_Holo_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36_Holo_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_65x39_caseless_msbs_mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_65x39_caseless_msbs_mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_coyote_F,
		H_PASGT_basic_UNO_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_coyote_F,
		H_PASGT_basic_UNO_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_UNO_Soldier_LAT_F: Atlas_I_UNO_Soldier_Base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_Soldier_LAT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_LAT_F0;
	role = MissileSpecialist;
	icon = iconManAT;
	cost = 130000;
	threat[] = {0.8,0.8,0.3};
	secondaryAmmoCoef = 0.5;
	backpack = B_AssaultPack_cbr_ILAT_F;
	weapons[] =
	{
		arifle_G36_Holo_F,
		launch_NLAW_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36_Holo_F,
		launch_NLAW_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		NLAW_F,
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		NLAW_F,
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_coyote_F,
		H_PASGT_basic_UNO_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_coyote_F,
		H_PASGT_basic_UNO_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_UNO_Soldier_SL_F: Atlas_I_UNO_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_Soldier_SL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_SL_F0;
	role = Grenadier;
	icon = iconManLeader;
    cost = 500000;
	camouflage = 1.4;
	uniformClass = Atlas_U_I_U_CombatUniform_shortsleeve_UNO;
	weapons[] =
	{
		arifle_G36_MRCO_F,
		hgun_ACPC2_black_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_G36_MRCO_F,
		hgun_ACPC2_black_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
		mag_2(30Rnd_65x39_caseless_msbs_mag_tracer),
		mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell,
        SmokeShellYellow
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
		mag_2(30Rnd_65x39_caseless_msbs_mag_tracer),
		mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell,
        SmokeShellYellow
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_coyote_F,
		H_PASGT_basic_UNO_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_coyote_F,
		H_PASGT_basic_UNO_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_UNO_Soldier_TL_F: Atlas_I_UNO_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_Soldier_TL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_TL_F0;
	role = Grenadier;
	icon = iconManLeader;
    cost = 250000;
	camouflage = 1.4;
	weapons[] =
	{
		arifle_G36_GL_Holo_F,
		hgun_ACPC2_black_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_G36_GL_Holo_F,
		hgun_ACPC2_black_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
		mag_2(30Rnd_65x39_caseless_msbs_mag_tracer),
		mag_2(9Rnd_45ACP_Mag),
		mag_4(1Rnd_HE_Grenade_shell),
        HandGrenade,
        SmokeShell,
        SmokeShellYellow,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeYellow_Grenade_shell
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
		mag_2(30Rnd_65x39_caseless_msbs_mag_tracer),
		mag_2(9Rnd_45ACP_Mag),
		mag_4(1Rnd_HE_Grenade_shell),
        HandGrenade,
        SmokeShell,
        SmokeShellYellow,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeYellow_Grenade_shell
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_coyote_F,
		H_PASGT_basic_UNO_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_coyote_F,
		H_PASGT_basic_UNO_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_UNO_RadioOperator_F: Atlas_I_UNO_Soldier_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_RadioOperator_F.jpg";
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	uniformClass = Atlas_U_I_U_CombatUniform_shortsleeve_UNO;
	backpack = B_RadioBag_01_coyote_F;
	weapons[] =
    {
		arifle_G36_Holo_F,
		DefaultManWeapons
    };
    respawnWeapons[] =
    {
		arifle_G36_Holo_F,
		DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_msbs_mag),
        HandGrenade,
        SmokeShell
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_msbs_mag),
        HandGrenade,
        SmokeShell
    };
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_coyote_F,
		H_PASGT_basic_UNO_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_coyote_F,
		H_PASGT_basic_UNO_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_UNO_Soldier_UAV_F: Atlas_I_UNO_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_Soldier_UAV_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_B_SOLDIER_UAV_F0;
	uavHacker = true;
    cost = 150000;
	role = SpecialOperative;
    uniformClass = Atlas_U_I_U_CombatUniform_shortsleeve_UNO;
	backpack = Atlas_I_UNO_UAV_01_backpack_F;
	weapons[] =
    {
		arifle_G36_Holo_F,
		DefaultManWeapons
    };
    respawnWeapons[] =
    {
		arifle_G36_Holo_F,
		DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_msbs_mag),
        HandGrenade,
        SmokeShell
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_msbs_mag),
        HandGrenade,
        SmokeShell
    };
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_coyote_F,
		H_PASGT_basic_UNO_F,
		I_UavTerminal,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_coyote_F,
		H_PASGT_basic_UNO_F,
		I_UavTerminal,
		DefaultManLinkedItems
	};
};
class Atlas_I_UNO_soldier_UAV_06_F: Atlas_I_UNO_Soldier_UAV_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_soldier_UAV_06_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_F0;
	backpack = Atlas_I_UNO_UAV_06_backpack_F;
};
class Atlas_I_UNO_soldier_UAV_06_medical_F: Atlas_I_UNO_Soldier_UAV_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_soldier_UAV_06_medical_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_medical_F0;
	backpack = Atlas_I_UNO_UAV_06_medical_backpack_F;
};
class Atlas_I_UNO_soldier_UGV_02_Demining_F: Atlas_I_UNO_Soldier_UAV_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_soldier_UGV_02_Demining_F.jpg";
	displayName = $STR_A3_C_B_soldier_UGV_02_Demining_F0;
	backpack = Atlas_I_UNO_UGV_02_Demining_backpack_F;
};

// Chernarussian Defence Force
class Atlas_I_UNO_wdl_Man_Base_F: I_soldier_F
{
    scope = private;
	faction = Atlas_IND_UNO_wdl_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Russian,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
};
class Atlas_I_UNO_wdl_Soldier_Base_F: Atlas_I_UNO_wdl_Man_Base_F
{
	uniformClass = Atlas_U_I_UW_CombatUniform_UNO;
};
class Atlas_I_UNO_wdl_Soldier_A_F: Atlas_I_UNO_wdl_Soldier_Base_F
{
	author = "Ravenholme";
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_wdl_Soldier_A_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_A_F0;
	cost = 110000;
    uniformClass = Atlas_U_I_UW_CombatUniform_shortsleeve_UNO;
	backpack = B_Carryall_green_IUAmmo_F;
	weapons[] =
	{
		arifle_FORT652_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_FORT652_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        HandGrenade_Guer,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        HandGrenade_Guer,
        SmokeShell
	};
	linkedItems[] =
	{
		V_PlateCarrierIA2_grn,
		H_HelmetSpecter_cover_UNO_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA2_grn,
		H_HelmetSpecter_cover_UNO_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_UNO_wdl_Soldier_AR_F: Atlas_I_UNO_wdl_Soldier_Base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_wdl_Soldier_AR_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_soldier_AR_F0;
	role = MachineGunner;
	icon = iconManMG;
	cost = 125000;
	threat[] = {1,0.1,0.3};
    uniformClass = Atlas_U_I_UW_CombatUniform_shortsleeve_UNO;
	weapons[] =
	{
		LMG_MK200_black_cdf_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_MK200_black_cdf_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_3(200Rnd_65x39_cased_box_red),
        HandGrenade_Guer,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_2(200Rnd_65x39_cased_box_red),
        HandGrenade_Guer,
        SmokeShell
	};
	linkedItems[] =
	{
		V_PlateCarrierIA2_grn,
		H_HelmetSpecter_cover_UNO_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA2_grn,
		H_HelmetSpecter_cover_UNO_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_UNO_wdl_Medic_F: Atlas_I_UNO_wdl_Soldier_Base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_wdl_Medic_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_medic_F0;
	role = CombatLifeSaver;
	icon = iconManMedic;
	picture = pictureHeal;
	camouflage = 1.6;
	attendant = true;
    uniformClass = Atlas_U_I_UW_CombatUniform_shortsleeve_UNO;
	backpack = B_AssaultPack_rgr_IUMedic_F;
	weapons[] =
	{
		arifle_FORT652_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_FORT652_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        HandGrenade_Guer,
        SmokeShell,
        SMOKESHELLS_MEDIC
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        HandGrenade_Guer,
        SmokeShell,
        SMOKESHELLS_MEDIC
	};
	linkedItems[] =
	{
		V_PlateCarrierIA2_grn,
		H_HelmetSpecter_cover_UNO_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA2_grn,
		H_HelmetSpecter_cover_UNO_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_UNO_wdl_Engineer_F: Atlas_I_UNO_wdl_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_wdl_Engineer_F.jpg";
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
	threat[] = {1,0.5,0.1};
	camouflage = 1.6;
	backpack = B_Carryall_green_IUEng_F;
	weapons[] =
	{
		arifle_FORT652_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_FORT652_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_stanag_red),
        SmokeShell,
        SmokeShellYellow
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_stanag_red),
        SmokeShell,
        SmokeShellYellow
	};
	linkedItems[] =
	{
		V_PlateCarrierIAGL_grn,
		H_HelmetSpecter_cover_UNO_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIAGL_grn,
		H_HelmetSpecter_cover_UNO_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_UNO_wdl_Soldier_GL_F: Atlas_I_UNO_wdl_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_wdl_Soldier_GL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
    role = Grenadier;
	cost = 200000;
	weapons[] =
	{
		arifle_FORT652_GL_aco_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_FORT652_GL_aco_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_4(1Rnd_HE_Grenade_shell),
        HandGrenade_Guer,
        SmokeShell,
        1Rnd_Smoke_Grenade_shell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_4(1Rnd_HE_Grenade_shell),
        HandGrenade_Guer,
        SmokeShell,
        1Rnd_Smoke_Grenade_shell
	};
	linkedItems[] =
	{
		V_PlateCarrierIAGL_grn,
		H_HelmetSpecter_cover_UNO_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIAGL_grn,
		H_HelmetSpecter_cover_UNO_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_UNO_wdl_Helipilot_F: Atlas_I_UNO_wdl_Soldier_Base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_wdl_Helipilot_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Helipilot_F0;
	role = Crewman;
	cost = 160000;
	camouflage = 2;
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
	magazines[] =
	{
		mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Red),
        SmokeShellYellow
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Red),
        SmokeShellYellow
	};
    linkedItems[] =
    {
		V_TacVest_grn,
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
		V_TacVest_grn,
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class Atlas_I_UNO_wdl_Helicrew_F: Atlas_I_UNO_wdl_Helipilot_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_wdl_Helicrew_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_helicrew_F0;
	role = Crewman;
	cost = 80000;
	uniformClass = Atlas_U_I_UW_CombatUniform_shortsleeve_UNO;
	weapons[] =
	{
		arifle_FORT651_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_FORT651_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
        SmokeShellYellow
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
        SmokeShellYellow
	};
    linkedItems[] =
    {
		V_TacVest_grn,
        H_CrewHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
		V_TacVest_grn,
        H_CrewHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class Atlas_I_UNO_wdl_Crew_F: Atlas_I_UNO_wdl_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_wdl_Crew_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_crew_F0;
	uniformClass = Atlas_U_I_UW_CombatUniform_shortsleeve_UNO;
	weapons[] =
	{
		arifle_FORT651_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_FORT651_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
        SmokeShellYellow
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
        SmokeShellYellow
	};
    linkedItems[] =
    {
		V_TacVest_grn,
        H_HelmetCrew_I,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
		V_TacVest_grn,
        H_HelmetCrew_I,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class Atlas_I_UNO_wdl_soldier_M_F: Atlas_I_UNO_wdl_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_wdl_soldier_M_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_M_F0;
	role = Marksman;
	cost = 250000;
	weapons[] =
	{
		srifle_DMR_05_blk_AMS_BI_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		srifle_DMR_05_blk_AMS_BI_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(10Rnd_93x64_dmr_05_mag),
		mag_2(10Rnd_9x21_Mag),
        HandGrenade_Guer,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_4(10Rnd_93x64_dmr_05_mag),
		mag_2(10Rnd_9x21_Mag),
        HandGrenade_Guer,
        SmokeShell
	};
	linkedItems[] =
	{
		V_PlateCarrierIA1_grn,
		H_HelmetSpecter_cover_UNO_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_grn,
		H_HelmetSpecter_cover_UNO_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_UNO_wdl_Officer_F: Atlas_I_UNO_wdl_Soldier_Base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_wdl_Officer_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_officer_F0;
    role = Rifleman;
	icon = iconManOfficer;
    cost = 600000;
	camouflage = 1.6;
	weapons[] =
	{
		SMG_02_F,
		hgun_Pistol_heavy_02_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		SMG_02_F,
		hgun_Pistol_heavy_02_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Red),
		mag_2(6Rnd_45ACP_Cylinder),
        SmokeShellYellow
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Red),
		mag_2(6Rnd_45ACP_Cylinder),
        SmokeShellYellow
	};
	linkedItems[] =
	{
		V_Rangemaster_belt,
		H_Beret_UNO_01_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Rangemaster_belt,
		H_Beret_UNO_01_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_UNO_wdl_Soldier_F: Atlas_I_UNO_wdl_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_wdl_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	cost = 100000;
	weapons[] =
	{
		arifle_FORT652_aco_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_FORT652_aco_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_65x39_caseless_msbs_mag),
        HandGrenade_Guer,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_65x39_caseless_msbs_mag),
        HandGrenade_Guer,
        SmokeShell
	};
	linkedItems[] =
	{
		V_PlateCarrierIA1_grn,
		H_HelmetSpecter_cover_UNO_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_grn,
		H_HelmetSpecter_cover_UNO_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_UNO_wdl_Soldier_LAT_F: Atlas_I_UNO_wdl_Soldier_Base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_wdl_Soldier_LAT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_LAT_F0;
	role = MissileSpecialist;
	icon = iconManAT;
	cost = 130000;
	threat[] = {0.8,0.8,0.3};
	secondaryAmmoCoef = 0.5;
	backpack = B_AssaultPack_rgr_ILAT_F;
	weapons[] =
	{
		arifle_FORT652_aco_F,
		launch_RPG32_green_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_FORT652_aco_F,
		launch_RPG32_green_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		RPG32_F,
        HandGrenade_Guer,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		RPG32_F,
        HandGrenade_Guer,
        SmokeShell
	};
	linkedItems[] =
	{
		V_PlateCarrierIA2_grn,
		H_HelmetSpecter_cover_UNO_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA2_grn,
		H_HelmetSpecter_cover_UNO_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_UNO_wdl_Soldier_SL_F: Atlas_I_UNO_wdl_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_wdl_Soldier_SL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_SL_F0;
	role = Grenadier;
	icon = iconManLeader;
    cost = 500000;
	camouflage = 1.4;
	uniformClass = Atlas_U_I_UW_CombatUniform_shortsleeve_UNO;
	weapons[] =
	{
		arifle_FORT652_mrco_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_FORT652_mrco_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
		mag_2(30Rnd_65x39_caseless_msbs_mag_tracer),
		mag_2(10Rnd_9x21_Mag),
        HandGrenade_Guer,
        SmokeShell,
        SmokeShellYellow
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
		mag_2(30Rnd_65x39_caseless_msbs_mag_tracer),
		mag_2(10Rnd_9x21_Mag),
        HandGrenade_Guer,
        SmokeShell,
        SmokeShellYellow
	};
	linkedItems[] =
	{
		V_PlateCarrierIA1_grn,
		H_HelmetSpecter_cover_UNO_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_grn,
		H_HelmetSpecter_cover_UNO_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_UNO_wdl_Soldier_TL_F: Atlas_I_UNO_wdl_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_wdl_Soldier_TL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_TL_F0;
	role = Grenadier;
	icon = iconManLeader;
    cost = 250000;
	camouflage = 1.4;
	weapons[] =
	{
		arifle_FORT652_GL_aco_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_FORT652_GL_aco_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
		mag_2(30Rnd_65x39_caseless_msbs_mag_tracer),
		mag_2(10Rnd_9x21_Mag),
		mag_4(1Rnd_HE_Grenade_shell),
        HandGrenade_Guer,
        SmokeShell,
        SmokeShellYellow,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeYellow_Grenade_shell
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
		mag_2(30Rnd_65x39_caseless_msbs_mag_tracer),
		mag_2(10Rnd_9x21_Mag),
		mag_4(1Rnd_HE_Grenade_shell),
        HandGrenade_Guer,
        SmokeShell,
        SmokeShellYellow,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeYellow_Grenade_shell
	};
	linkedItems[] =
	{
		V_PlateCarrierIAGL_grn,
		H_HelmetSpecter_cover_UNO_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIAGL_grn,
		H_HelmetSpecter_cover_UNO_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_UNO_wdl_RadioOperator_F: Atlas_I_UNO_wdl_Soldier_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_wdl_RadioOperator_F.jpg";
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	uniformClass = Atlas_U_I_UW_CombatUniform_shortsleeve_UNO;
	backpack = B_RadioBag_01_green_F;
	weapons[] =
    {
		arifle_FORT652_aco_F,
		DefaultManWeapons
    };
    respawnWeapons[] =
    {
		arifle_FORT652_aco_F,
		DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_msbs_mag),
        HandGrenade_Guer,
        SmokeShell
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_msbs_mag),
        HandGrenade_Guer,
        SmokeShell
    };
	linkedItems[] =
	{
		V_PlateCarrierIA1_grn,
		H_HelmetSpecter_cover_UNO_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_grn,
		H_HelmetSpecter_cover_UNO_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_UNO_wdl_Soldier_UAV_F: Atlas_I_UNO_wdl_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_wdl_Soldier_UAV_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_B_SOLDIER_UAV_F0;
	uavHacker = true;
    cost = 150000;
	role = SpecialOperative;
	backpack = Atlas_I_UNO_UAV_01_backpack_F;
	weapons[] =
    {
		arifle_FORT652_aco_F,
		DefaultManWeapons
    };
    respawnWeapons[] =
    {
		arifle_FORT652_aco_F,
		DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_msbs_mag),
        HandGrenade_Guer,
        SmokeShell
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_msbs_mag),
        HandGrenade_Guer,
        SmokeShell
    };
	linkedItems[] =
	{
		V_PlateCarrierIA1_grn,
		H_HelmetSpecter_cover_UNO_F,
		I_UavTerminal,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_grn,
		H_HelmetSpecter_cover_UNO_F,
		I_UavTerminal,
		DefaultManLinkedItems
	};
};
class Atlas_I_UNO_wdl_soldier_UAV_06_F: Atlas_I_UNO_wdl_Soldier_UAV_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_wdl_soldier_UAV_06_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_F0;
	backpack = Atlas_I_UNO_UAV_06_backpack_F;
};
class Atlas_I_UNO_wdl_soldier_UAV_06_medical_F: Atlas_I_UNO_wdl_Soldier_UAV_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_wdl_soldier_UAV_06_medical_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_medical_F0;
	backpack = Atlas_I_UNO_UAV_06_medical_backpack_F;
};
class Atlas_I_UNO_wdl_soldier_UGV_02_Demining_F: Atlas_I_UNO_wdl_Soldier_UAV_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_wdl_soldier_UGV_02_Demining_F.jpg";
	displayName = $STR_A3_C_B_soldier_UGV_02_Demining_F0;
	backpack = Atlas_I_UNO_UGV_02_Demining_backpack_F;
};
