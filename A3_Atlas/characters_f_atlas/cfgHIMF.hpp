// Arma 3 Atlas
class Atlas_B_H_Man_Base_F: B_Soldier_F
{
    scope = private;
    scopeCurator = private;
	faction = Atlas_BLU_H_F;
	genericNames = TanoanMen;
	identityTypes[] =
	{
		LanguageENGFRE_F,
		Head_Tanoan,
		G_HAF_default
	};
};
class Atlas_B_H_Soldier_Base_F: Atlas_B_H_Man_Base_F
{
	//uniformClass = Atlas_U_B_H_Soldier_F;
	uniformClass = Atlas_U_UniformBDU_01_HI_F;
};
class Atlas_B_H_Soldier_A_F: Atlas_B_H_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_H_Soldier_A_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_A_F0;
	cost = 110000;
    //uniformClass = Atlas_U_B_H_Soldier_2_F;
	uniformClass = Atlas_U_UniformBDU_02_HI_F;
	backpack = B_Carryall_jungle_BHAmmo_F;
	weapons[] =
	{
		Atlas_arifle_M16A4_FL_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_M16A4_FL_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_stanag_red),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_stanag_red),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_PlateCarrierIA1_oli,
		H_Booniehat_oli,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_oli,
		H_Booniehat_oli,
		DefaultManLinkedItems
	};
};
class Atlas_B_H_Soldier_AR_F: Atlas_B_H_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_H_Soldier_AR_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_soldier_AR_F0;
	role = MachineGunner;
	icon = iconManMG;
	cost = 125000;
	threat[] = {1,0.1,0.3};
    //uniformClass = Atlas_U_B_H_Soldier_2_F;
	uniformClass = Atlas_U_UniformBDU_02_HI_F;
	weapons[] =
	{
		LMG_03_Flash_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_03_Flash_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_3(200Rnd_556x45_Box_Red_F),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_3(200Rnd_556x45_Box_Red_F),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_PlateCarrierIA2_oli,
		Atlas_H_PASGT_Cover_HIMF_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA2_oli,
		Atlas_H_PASGT_Cover_HIMF_F,
		DefaultManLinkedItems
	};
};
class Atlas_B_H_Crew_F: Atlas_B_H_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	// editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_H_Crew_F.jpg";
    scope = protected;
    scopeCurator = private;
	displayName = $STR_B_crew_F0;
	role = Crewman;
	cost = 90000;
	camouflage = 1.6;
    engineer = true;
	//uniformClass = Atlas_U_B_H_Soldier_2_F;
	uniformClass = Atlas_U_UniformBDU_02_HI_F;
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
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Red),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_BandollierB_oli,
		H_HelmetCrew_I,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_BandollierB_oli,
		H_HelmetCrew_I,
		DefaultManLinkedItems
	};
};
class Atlas_B_H_Medic_F: Atlas_B_H_Soldier_Base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_H_Medic_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_medic_F0;
	role = CombatLifeSaver;
	icon = iconManMedic;
	picture = pictureHeal;
	camouflage = 1.6;
	attendant = true;
    //uniformClass = Atlas_U_B_H_Soldier_2_F;
	uniformClass = Atlas_U_UniformBDU_02_HI_F;
	backpack = B_TacticalPack_oli_BHMedic_F;
	weapons[] =
	{
		Atlas_arifle_M16A4_FL_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_M16A4_FL_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_stanag_red),
        HandGrenade,
        SmokeShell,
        SMOKESHELLS_MEDIC
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_stanag_red),
        HandGrenade,
        SmokeShell,
        SMOKESHELLS_MEDIC
	};
	linkedItems[] =
	{
		V_PlateCarrierIA2_oli,
		H_Booniehat_jungle,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA2_oli,
		H_Booniehat_jungle,
		DefaultManLinkedItems
	};
};
class Atlas_B_H_Engineer_F: Atlas_B_H_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_H_Engineer_F.jpg";
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
	//uniformClass = Atlas_U_B_H_Soldier_F;
	uniformClass = Atlas_U_UniformBDU_01_HI_F;
	backpack = B_Carryall_jungle_BHEng_F;
	weapons[] =
	{
		Atlas_arifle_M16A4_FG_FL_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_M16A4_FG_FL_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_stanag_red),
        SmokeShell,
        SmokeShellYellow
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_stanag_red),
        SmokeShell,
        SmokeShellYellow
	};
	linkedItems[] =
	{
		V_EOD_olive_F,
		Atlas_H_PASGT_Cover_HIMF_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_EOD_olive_F,
		Atlas_H_PASGT_Cover_HIMF_F,
		DefaultManLinkedItems
	};
};
class Atlas_B_H_Soldier_Exp_F: Atlas_B_H_Engineer_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_H_Engineer_F.jpg";
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
	//uniformClass = Atlas_U_B_H_Soldier_F;
	uniformClass = Atlas_U_UniformBDU_02_HI_F;
	backpack = B_Carryall_jungle_BHExp_F;
	weapons[] =
	{
		Atlas_arifle_M16A4_FG_FL_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_M16A4_FG_FL_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_stanag_red),
		mag_3(APERSMine_Range_Mag),
        SmokeShell,
        SmokeShellYellow
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_stanag_red),
		mag_3(APERSMine_Range_Mag),
        SmokeShell,
        SmokeShellYellow
	};
	linkedItems[] =
	{
		V_EOD_olive_F,
		H_Booniehat_jungle,,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_EOD_olive_F,
		H_Booniehat_jungle,,
		DefaultManLinkedItems
	};
};
class Atlas_B_H_Soldier_GL_F: Atlas_B_H_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_H_Soldier_GL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
    role = Grenadier;
	cost = 200000;
	//uniformClass = Atlas_U_B_H_Soldier_F;
	uniformClass = Atlas_U_UniformBDU_01_HI_F;
	weapons[] =
	{
		Atlas_arifle_M16A4_GL_ROS_FL_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_M16A4_GL_ROS_FL_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_stanag_red),
        mag_4(1Rnd_HE_Grenade_shell),
        HandGrenade,
        SmokeShell,
        1Rnd_Smoke_Grenade_shell
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_stanag_red),
        mag_4(1Rnd_HE_Grenade_shell),
        HandGrenade,
        SmokeShell,
        1Rnd_Smoke_Grenade_shell
	};
	linkedItems[] =
	{
		V_PlateCarrierIAGL_oli,
		Atlas_H_PASGT_Cover_HIMF_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIAGL_oli,
		Atlas_H_PASGT_Cover_HIMF_F,
		DefaultManLinkedItems
	};
};
class Atlas_B_H_Helipilot_F: Atlas_B_H_Soldier_Base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_H_Helipilot_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Helipilot_F0;
	role = Crewman;
	cost = 160000;
	camouflage = 2;
	//uniformClass = Atlas_U_B_H_Soldier_2_F;
	uniformClass = Atlas_U_UniformBDU_02_HI_F;
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
		V_TacVest_oli,
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
		V_TacVest_oli,
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class Atlas_B_H_Helicrew_F: Atlas_B_H_Helipilot_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_H_Helicrew_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_helicrew_F0;
	role = Crewman;
	cost = 80000;
	//uniformClass = Atlas_U_B_H_Soldier_2_F;
	uniformClass = Atlas_U_UniformBDU_02_HI_F;
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
		mag_6(30Rnd_9x21_Mag_SMG_02_Tracer_Red),
        SmokeShellYellow
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_9x21_Mag_SMG_02_Tracer_Red),
        SmokeShellYellow
	};
    linkedItems[] =
    {
		V_TacVest_oli,
        H_CrewHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
		V_TacVest_oli,
        H_CrewHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class Atlas_B_H_soldier_M_F: Atlas_B_H_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_H_soldier_M_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_M_F0;
	role = Marksman;
	cost = 250000;
	//uniformClass = Atlas_U_B_H_Soldier_F;
	uniformClass = Atlas_U_UniformBDU_01_HI_F;
	weapons[] =
	{
		Atlas_srifle_DMR_06_black_khs_bipod_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		Atlas_srifle_DMR_06_black_khs_bipod_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_8(20Rnd_762x51_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_8(20Rnd_762x51_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_TacChestrig_oli_F,
		H_Booniehat_oli,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_oli_F,
		H_Booniehat_oli,
		DefaultManLinkedItems
	};
};
class Atlas_B_H_Officer_F: Atlas_B_H_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_H_Officer_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_officer_F0;
    role = Rifleman;
	icon = iconManOfficer;
    cost = 600000;
	camouflage = 1.6;
	uniformClass = Atlas_U_B_H_Officer_F;
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
		Aegis_V_CarrierRigKBT_01_holster_olive_F,
		H_MilCap_jungle,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_holster_olive_F,
		H_MilCap_jungle,
		DefaultManLinkedItems
	};
};
class Atlas_B_H_Soldier_F: Atlas_B_H_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_H_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	cost = 100000;
	//uniformClass = Atlas_U_B_H_Soldier_F;
	uniformClass = Atlas_U_UniformBDU_01_HI_F;
	weapons[] =
	{
		Atlas_arifle_M16A4_FG_ROS_FL_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_M16A4_FG_ROS_FL_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_556x45_stanag_red),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_556x45_stanag_red),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_PlateCarrierIA1_oli,
		Atlas_H_PASGT_Cover_HIMF_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_oli,
		Atlas_H_PASGT_Cover_HIMF_F,
		DefaultManLinkedItems
	};
};
class Atlas_B_H_Soldier_LAT_F: Atlas_B_H_Soldier_Base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_H_Soldier_LAT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_LAT_F0;
	role = MissileSpecialist;
	icon = iconManAT;
	cost = 130000;
	threat[] = {0.8,0.8,0.3};
	secondaryAmmoCoef = 0.5;
	//uniformClass = Atlas_U_B_H_Soldier_F;
	uniformClass = Atlas_U_UniformBDU_01_HI_F;
	backpack = B_TacticalPack_oli_BHLAT_F;
	weapons[] =
	{
		Atlas_arifle_M16A4_FG_ROS_FL_F,
		launch_MRAWS_olive_rail_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_M16A4_FG_ROS_FL_F,
		launch_MRAWS_olive_rail_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_stanag_red),
		MRAWS_HEAT55_F,
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_stanag_red),
		MRAWS_HEAT55_F,
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_PlateCarrierIA2_oli,
		Atlas_H_PASGT_Cover_HIMF_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA2_oli,
		Atlas_H_PASGT_Cover_HIMF_F,
		DefaultManLinkedItems
	};
};
class Atlas_B_H_Soldier_SL_F: Atlas_B_H_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_H_Soldier_SL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_SL_F0;
	role = Grenadier;
	icon = iconManLeader;
    cost = 500000;
	camouflage = 1.4;
	//uniformClass = Atlas_U_B_H_Soldier_2_F;
	uniformClass = Atlas_U_UniformBDU_02_HI_F;
	weapons[] =
	{
		Atlas_arifle_M16A4_FG_ACOG_FL_F,
		hgun_ACPC2_black_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		Atlas_arifle_M16A4_FG_ACOG_FL_F,
		hgun_ACPC2_black_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_stanag_red),
		mag_2(30Rnd_556x45_stanag_tracer_red),
		mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell,
        SmokeShellYellow
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_stanag_red),
		mag_2(30Rnd_556x45_stanag_tracer_red),
		mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell,
        SmokeShellYellow
	};
	linkedItems[] =
	{
		V_PlateCarrierIA2_oli,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA2_oli,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems
	};
};
class Atlas_B_H_Soldier_TL_F: Atlas_B_H_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_H_Soldier_TL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_TL_F0;
	role = Grenadier;
	icon = iconManLeader;
    cost = 250000;
	camouflage = 1.4;
	//uniformClass = Atlas_U_B_H_Soldier_F;
	uniformClass = Atlas_U_UniformBDU_01_HI_F;
	weapons[] =
	{
		Atlas_arifle_M16A4_GL_ACOG_FL_F,
		hgun_ACPC2_black_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		Atlas_arifle_M16A4_GL_ACOG_FL_F,
		hgun_ACPC2_black_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_stanag_red),
		mag_2(30Rnd_556x45_stanag_tracer_red),
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
		mag_4(30Rnd_556x45_stanag_red),
		mag_2(30Rnd_556x45_stanag_tracer_red),
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
		V_PlateCarrierIAGL_oli,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIAGL_oli,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems
	};
};
class Atlas_B_H_RadioOperator_F: Atlas_B_H_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_H_RadioOperator_F.jpg";
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	//uniformClass = Atlas_U_B_H_Soldier_2_F;
	uniformClass = Atlas_U_UniformBDU_02_HI_F;
	backpack = B_RadioBag_01_jungle_F;
	weapons[] =
    {
        Atlas_arifle_M16A4_FG_ROS_FL_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_M16A4_FG_ROS_FL_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_556x45_stanag_red),
        HandGrenade,
        SmokeShell
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_556x45_stanag_red),
        HandGrenade,
        SmokeShell
    };
	linkedItems[] =
	{
		V_TacChestrig_oli_F,
		H_Booniehat_jungle,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_oli_F,
		H_Booniehat_jungle,
		DefaultManLinkedItems
	};
};
class Atlas_B_H_HeavyGunner_F: Atlas_B_H_Soldier_AR_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_H_HeavyGunner_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_A3_cfgVehicles_B_HeavyGunner_F0;
    //uniformClass = Atlas_U_B_H_Soldier_2_F;
	uniformClass = Atlas_U_UniformBDU_02_HI_F;
	backpack = Atlas_B_TacticalPack_oli_BHHG_F;
	weapons[] =
	{
		Aegis_MMG_FNMAG_240_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_MMG_FNMAG_240_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_2(Aegis_200Rnd_762x51_MAG_Red_F),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_2(Aegis_200Rnd_762x51_MAG_Red_F),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_TacChestrig_oli_F,
		Atlas_H_MilCap_tachs_Jungle,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_oli_F,
		Atlas_H_MilCap_tachs_Jungle,
		DefaultManLinkedItems
	};
};
class Atlas_B_H_Soldier_universal_F: Atlas_B_H_Soldier_F
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
	scopeCurator = private;
	displayName = $STR_A3_CfgVehicles_b_soldier_universal_f_displayName;
	attendant = true;
	engineer = true;
	canDeactivateMines = true;
	role = Rifleman;
};
class Atlas_B_H_Soldier_unarmed_F: Atlas_B_H_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] =
	{
		V_PlateCarrierIA1_oli,
		Atlas_H_PASGT_Cover_HIMF_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierIA1_oli,
		Atlas_H_PASGT_Cover_HIMF_F,
		DefaultManLinkedItems
	};
	role = Unarmed;
	threat[] = {0.1,0.1,0.1};
};

/* Men (Recon) - HIMF Commandos */

class Atlas_B_H_Soldier_Commando_Base: Atlas_B_H_Soldier_Base_F
{
	class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {veh_infantry_SF_s};
            speechPlural[] = {veh_infantry_SF_p};
        };
    };
    textSingular = $STR_A3_nameSound_veh_infantry_SF_s;
    textPlural = $STR_A3_nameSound_veh_infantry_SF_p;
    nameSound = veh_infantry_SF_s;
	uniformClass = Atlas_U_B_H_Soldier_commando_F;
	vehicleClass = MenRecon;
	editorSubcategory = EdSubcat_Personnel_SpecialForces;
	canHideBodies = false;
    icon = iconManRecon;
	role = Rifleman;
	camouflage = 0.6;
	detectSkill = 18;
};
class Atlas_B_H_Soldier_commando_F: Atlas_B_H_Soldier_Commando_Base
{
	author = $STR_A3_A_BranFlakes;
	displayName = $STR_B_recon_F0;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_H_Soldier_commando_F.jpg";
    scope = public;
    scopeCurator = public;
	cost = 100000;
	uniformClass = Atlas_U_B_H_Soldier_commando_F;
	weapons[] =
	{
		arifle_XMS_Base_khk_ACOG_Snds_IR_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_XMS_Base_khk_ACOG_Snds_IR_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
        mag_6(30Rnd_556x45_stanag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_556x45_stanag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		V_PlateCarrier2_oli,
		H_HelmetHBK_commando_F,
		Aegis_G_scrimNet_under_olive_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_oli,
		H_HelmetHBK_commando_F,
		Aegis_G_scrimNet_under_olive_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
};
class Atlas_B_H_Soldier_commando_AR_F: Atlas_B_H_Soldier_Commando_Base
{
	author = $STR_A3_A_BranFlakes;
	displayName = $STR_A3_C_O_R_recon_AR_F0;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_H_Soldier_commando_AR_F.jpg";
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_B_H_Soldier_commando_F;
	weapons[] =
	{
		LMG_Mk200_khk_ACOG_Snds_IR_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		LMG_Mk200_khk_ACOG_Snds_IR_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
        mag_3(200Rnd_65x39_cased_Box_Red),
        mag_2(16Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
	};
	respawnMagazines[] =
	{
        mag_3(200Rnd_65x39_cased_Box_Red),
        mag_2(16Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
	};
	linkedItems[] =
	{
		V_PlateCarrier2_oli,
		H_HelmetHBK_commando_F,
		Aegis_G_scrimNet_under_olive_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_oli,
		H_HelmetHBK_commando_F,
		Aegis_G_scrimNet_under_olive_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	cost = 220000;
	icon = iconManMG;
	role = MachineGunner;
    threat[] = {1,0.1,0.3};
};
class Atlas_B_H_Soldier_commando_exp_F: Atlas_B_H_Soldier_Commando_Base
{
	author = $STR_A3_A_BranFlakes;
	displayName = $STR_B_Recon_exp_F0;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_H_Soldier_commando_exp_F.jpg";
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_B_H_Soldier_commando_F;
	backpack = B_Kitbag_rgr_Exp;
	weapons[] =
	{
		arifle_XMS_Base_khk_ACOG_Snds_IR_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_XMS_Base_khk_ACOG_Snds_IR_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
        mag_6(30Rnd_556x45_stanag),
        mag_2(16Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_556x45_stanag),
        mag_2(16Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		V_PlateCarrier2_oli,
		H_HelmetHBK_commando_F,
		Aegis_G_scrimNet_under_olive_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_oli,
		H_HelmetHBK_commando_F,
		Aegis_G_scrimNet_under_olive_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	canDeactivateMines = true;
	detectSkill = 38;
	icon = iconManExplosive;
	picture = pictureExplosive;
	role = Sapper;
};
class Atlas_B_H_Soldier_commando_gl_F: Atlas_B_H_Soldier_Commando_Base
{
	author = $STR_A3_A_BranFlakes;
	displayName = $STR_A3_C_O_R_recon_GL_F0;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_H_Soldier_commando_gl_F.jpg";
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_B_H_Soldier_commando_F;
	weapons[] =
	{
		arifle_XMS_GL_khk_ACOG_Snds_IR_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_XMS_GL_khk_ACOG_Snds_IR_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
        mag_6(30Rnd_556x45_stanag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(Chemlight_green),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_556x45_stanag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(Chemlight_green),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	linkedItems[] =
	{
		V_PlateCarrier2_oli,
		H_HelmetHBK_commando_F,
		Aegis_G_scrimNet_under_olive_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_oli,
		H_HelmetHBK_commando_F,
		Aegis_G_scrimNet_under_olive_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	cost = 200000;
	role = Grenadier;
};
class Atlas_B_H_Soldier_commando_jtac_F: Atlas_B_H_Soldier_Commando_Base
{
	author = $STR_A3_A_BranFlakes;
	displayName = $STR_B_recon_JTAC_F0;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_H_Soldier_commando_jtac_F.jpg";
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_B_H_Soldier_commando_F;
	backpack = B_RadioBag_01_commando_F;
	weapons[] =
	{
		arifle_XMS_Base_khk_ACOG_Snds_IR_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Laserdesignator_01_khk_F
	};
	respawnWeapons[] =
	{
		arifle_XMS_Base_khk_ACOG_Snds_IR_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Laserdesignator_01_khk_F
	};
	magazines[] =
	{
        mag_6(30Rnd_556x45_stanag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_556x45_stanag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier2_oli,
		H_HelmetHBK_commando_F,
		Aegis_G_scrimNet_under_olive_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_oli,
		H_HelmetHBK_commando_F,
		Aegis_G_scrimNet_under_olive_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	role = SpecialOperative;
};
class Atlas_B_H_Soldier_commando_M_F: Atlas_B_H_Soldier_Commando_Base
{
	author = $STR_A3_A_BranFlakes;
	displayName = $STR_B_recon_M_F0;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_H_Soldier_commando_M_F.jpg";
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_B_H_Soldier_commando_F;
	weapons[] =
	{
		Atlas_arifle_SR25_khk_ams_Pointer_Snds_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		Atlas_arifle_SR25_khk_ams_Pointer_Snds_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
        mag_8(Aegis_20Rnd_762x51_Red_SMAG),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_8(Aegis_20Rnd_762x51_Red_SMAG),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		V_PlateCarrier2_oli,
		H_HelmetHBK_commando_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_oli,
		H_HelmetHBK_commando_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	cost = 250000;
    threat[] = {1,0.1,0.3};
	role = Marksman;
	primaryAmmoCoef = 0.2;
	secondaryAmmoCoef = 0.05;
	handgunAmmoCoef = 0.1;
};
class Atlas_B_H_Soldier_commando_medic_F: Atlas_B_H_Soldier_Commando_Base
{
	author = $STR_A3_A_BranFlakes;
	displayName = $STR_B_recon_medic_F0;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_H_Soldier_commando_medic_F.jpg";
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_B_H_Soldier_commando_F;
	backpack = B_TacticalPack_rgr_BAReconMedic_F;
	weapons[] =
	{
		arifle_XMS_Base_khk_ACOG_Snds_IR_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_XMS_Base_khk_ACOG_Snds_IR_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
        mag_6(30Rnd_556x45_stanag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_556x45_stanag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		V_PlateCarrier2_oli,
		H_HelmetHBK_commando_F,
		Aegis_G_scrimNet_under_olive_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_oli,
		H_HelmetHBK_commando_F,
		Aegis_G_scrimNet_under_olive_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	attendant = true;
	icon = iconManMedic;
	picture = pictureHeal;
	role = CombatLifeSaver;
    threat[] = {1,0.1,0.3};
};
class Atlas_B_H_Soldier_commando_LAT_F: Atlas_B_H_Soldier_Commando_Base
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_H_Soldier_commando_LAT_F.jpg";
	displayName = $STR_B_recon_LAT_F0;
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_B_H_Soldier_commando_F;
	backpack = B_TacticalPack_rgr_BALAT_F;
	weapons[] =
	{
		arifle_XMS_Base_khk_ACOG_Snds_IR_F,
		launch_NLAW_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_XMS_Base_khk_ACOG_Snds_IR_F,
		launch_NLAW_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
        mag_6(30Rnd_556x45_stanag),
        mag_2(16Rnd_9x21_Mag),
        NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_556x45_stanag),
        mag_2(16Rnd_9x21_Mag),
        NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		V_PlateCarrier2_oli,
		H_HelmetHBK_commando_headset_F,
		Aegis_G_scrimNet_under_olive_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_oli,
		H_HelmetHBK_commando_headset_F,
		Aegis_G_scrimNet_under_olive_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	cost = 130000;
	threat[] = {1,0.6,0.1};
	secondaryAmmoCoef = 0.5;
	icon = iconManAT;
	role = MissileSpecialist;
};
class Atlas_B_H_Soldier_commando_TL_F: Atlas_B_H_Soldier_Commando_Base
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_H_Soldier_commando_TL_F.jpg";
	displayName = $STR_B_Recon_TL_F0;
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_B_H_Soldier_commando_F;
	weapons[] =
	{
		arifle_XMS_Base_khk_ACOG_Snds_IR_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_XMS_Base_khk_ACOG_Snds_IR_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
        mag_6(30Rnd_556x45_stanag),
        mag_2(16Rnd_9x21_Mag),
		mag_2(MiniGrenade),
		SmokeShell,
        SMOKESHELLS_BLUFOR,
		mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_556x45_stanag),
        mag_2(16Rnd_9x21_Mag),
		mag_2(MiniGrenade),
		SmokeShell,
        SMOKESHELLS_BLUFOR,
		mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		V_PlateCarrier2_oli,
		H_HelmetHBK_commando_headset_F,
		Aegis_G_scrimNet_under_olive_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_oli,
		H_HelmetHBK_commando_headset_F,
		Aegis_G_scrimNet_under_olive_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	cost = 250000;
	icon = iconManLeader;
	role = Rifleman;
    threat[] = {1,0.1,0.3};
};