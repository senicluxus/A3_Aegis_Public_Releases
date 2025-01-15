/* AAF 2nd Regiment Pathfinders */
class Atlas_I_Pathfinder_base_F: I_Soldier_base_F
{
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {veh_infantry_SF_s};
            speechPlural[] = {veh_infantry_SF_p};
        };
    };
    identityTypes[]=
	{
		LanguageGRE_F,
		Head_Greek,
		G_HAF_default
	};
    textSingular = $STR_A3_nameSound_veh_infantry_SF_s;
    textPlural = $STR_A3_nameSound_veh_infantry_SF_p;
    nameSound = veh_infantry_SF_s;
    vehicleClass = MenRecon;
	editorSubcategory = EdSubcat_Personnel_Pathfinders;
    uniformClass = Aegis_U_I_Uniform_01_sweater_f;       // Replace with Sweater
    icon = iconManRecon;
	role = Rifleman;
	camouflage = 0.6;
	detectSkill = 18;
};
class Atlas_I_Pathfinder_AR_F: Atlas_I_Pathfinder_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_Pathfinder_AR_F.jpg";
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
	uniformClass = Aegis_U_I_Uniform_01_sweater_02_f;
    weapons[] =
	{
		Atlas_LMG_S77_Compact_MRCO_FL_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_LMG_S77_Compact_MRCO_FL_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_3(100rnd_762x51_S77_yellow_lxWS),
		mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_3(100rnd_762x51_S77_yellow_lxWS),
		mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_Chestrig_oli,
		H_HelmetIA_sb_digital_RF,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Chestrig_oli,
		H_HelmetIA_sb_digital_RF,
		DefaultManLinkedItems
	};
};
class Atlas_I_Pathfinder_Exp_F: Atlas_I_Pathfinder_base_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_Pathfinder_Exp_F.jpg";
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
    backpack = Aegis_I_Kitbag_dgtl_ReconEXP;
	weapons[] =
	{
		Atlas_arifle_MK20C_FMS_FL_F,
		hgun_ACPC2_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_MK20C_FMS_FL_F,
		hgun_ACPC2_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_Chestrig_oli,
		H_HelmetIA_sb_digital_RF,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Chestrig_oli,
		H_HelmetIA_sb_digital_RF,
		DefaultManLinkedItems
	};
};
class Atlas_I_Pathfinder_GL_F: Atlas_I_Pathfinder_base_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_Pathfinder_GL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
    role = Grenadier;
	cost = 200000;
	weapons[] =
	{
		Atlas_arifle_SLR_V_GL_MRCO_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_SLR_V_GL_MRCO_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws),
        mag_4(1rnd_40mm_he_lxws),
        mag_2(1rnd_58mm_at_lxws),
        mag_2(1rnd_50mm_smoke_lxws),
		mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_6(aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws),
        mag_4(1rnd_40mm_he_lxws),
        mag_2(1rnd_58mm_at_lxws),
        mag_2(1rnd_50mm_smoke_lxws),
		mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_Chestrig_oli,
		H_HelmetIA_sb_digital_RF,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Chestrig_oli,
		H_HelmetIA_sb_digital_RF,
		DefaultManLinkedItems
	};
};
class Atlas_I_Pathfinder_M_F: Atlas_I_Pathfinder_base_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_Pathfinder_M_F.jpg";
    identityTypes[]=
	{
		LanguageGRE_F,
		Head_Greek,
	};
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_M_F0;
	role = Marksman;
	cost = 250000;
	uniformClass = Aegis_U_I_Uniform_01_sweater_02_f;
	weapons[] =
	{
		Atlas_srifle_h6_digi_AMS_LP_BI_F,
        hgun_ACPC2_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		Atlas_srifle_h6_digi_AMS_LP_BI_F,
        hgun_ACPC2_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(20Rnd_556x45_AP_Stanag_RF),
        mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
		SmokeShell
	};
	respawnMagazines[] =
	{
		mag_8(20Rnd_556x45_AP_Stanag_RF),
        mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
		SmokeShell
	};
	linkedItems[] =
	{
		V_Chestrig_oli,
		H_HelmetIA_sb_digital_RF,
        Aegis_G_ScrimNet_Under_Olive_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Chestrig_oli,
		H_HelmetIA_sb_digital_RF,
        Aegis_G_ScrimNet_Under_Olive_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_Pathfinder_Medic_F: Atlas_I_Pathfinder_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_Pathfinder_Medic_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_medic_F0;
	role = CombatLifeSaver;
	icon = iconManMedic;
	picture = pictureHeal;
	camouflage = 1.6;
	attendant = true;
	backpack = I_AssaultPack_dgtl_Medic;
    weapons[] =
	{
		Atlas_arifle_MK20C_FMS_FL_F,
		hgun_ACPC2_F,
		DefaultManWeapons,
	};
	respawnWeapons[] =
	{
		Atlas_arifle_MK20C_FMS_FL_F,
		hgun_ACPC2_F,
		DefaultManWeapons,
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_stanag),
		mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell,
        SMOKESHELLS_MEDIC,
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_stanag),
		mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell,
        SMOKESHELLS_MEDIC,
	};
	linkedItems[] =
	{
		V_Chestrig_oli,
		H_booniehat_dgtl_hs,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Chestrig_oli,
		H_booniehat_dgtl_hs,
		DefaultManLinkedItems
	};
};
class Atlas_I_Pathfinder_F: Atlas_I_Pathfinder_base_F
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_Pathfinder_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	cost = 100000;
	weapons[] =
	{
		Atlas_arifle_SLR_V_MRCO_F,
        hgun_ACPC2_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_SLR_V_MRCO_F,
        hgun_ACPC2_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_Chestrig_oli,
		H_HelmetIA_sb_digital_RF,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Chestrig_oli,
		H_HelmetIA_sb_digital_RF,
		DefaultManLinkedItems
	};
};
class Atlas_I_Pathfinder_AT_F: Atlas_I_Pathfinder_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_Pathfinder_AT_F.jpg";
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
    backpack = I_FieldPack_oli_LAT2;
	uniformClass = Aegis_U_I_Uniform_01_sweater_02_f;
	weapons[] =
	{
		Atlas_arifle_MK20C_FMS_FL_F,
		hgun_ACPC2_F,
		launch_MRAWS_olive_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_MK20C_FMS_FL_F,
		hgun_ACPC2_F,
		launch_MRAWS_olive_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_stanag),
		mag_2(9Rnd_45ACP_Mag),
		MRAWS_HEAT55_F,
        HandGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_stanag),
		mag_2(9Rnd_45ACP_Mag),
		MRAWS_HEAT55_F,
        HandGrenade,
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_Chestrig_oli,
		H_MilCap_dgtl,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Chestrig_oli,
		H_MilCap_dgtl,
		DefaultManLinkedItems
	};
};
class Atlas_I_Pathfinder_SL_F: Atlas_I_Pathfinder_Base_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_Pathfinder_SL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_SL_F0;
	role = Grenadier;
	icon = iconManLeader;
    cost = 500000;
	camouflage = 1.4;
	weapons[] =
	{
		Atlas_arifle_MK20C_MRCO_LP_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		Atlas_arifle_MK20C_MRCO_LP_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_stanag),
		mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_4(SmokeShell),
        mag_2(SmokeShellGreen)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_stanag),
		mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_4(SmokeShell),
        mag_2(SmokeShellGreen)
	};
	linkedItems[] =
	{
		V_Chestrig_oli,
		H_MilCap_dgtl,
		DefaultManLeaderLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Chestrig_oli,
		H_MilCap_dgtl,
		DefaultManLeaderLinkedItems
	};
};
class Atlas_I_Pathfinder_TL_F: Atlas_I_Pathfinder_Base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_Pathfinder_TL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_TL_F0;
	role = Grenadier;
	icon = iconManLeader;
    cost = 250000;
	camouflage = 1.4;
	weapons[] =
	{
		Atlas_arifle_SLR_V_GL_MRCO_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		Atlas_arifle_SLR_V_GL_MRCO_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_6(aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws),
		mag_2(9Rnd_45ACP_Mag),
		mag_4(1rnd_40mm_HE_lxWS),
		mag_2(1rnd_58mm_AT_lxWS),
		mag_2(1rnd_50mm_smoke_lxWS),
        HandGrenade,
        mag_2(SmokeShell),
        SmokeShellGreen
	};
	respawnMagazines[] =
	{
		mag_6(aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws),
		mag_2(9Rnd_45ACP_Mag),
		mag_4(1rnd_40mm_HE_lxWS),
		mag_2(1rnd_58mm_AT_lxWS),
		mag_2(1rnd_50mm_smoke_lxWS),
        HandGrenade,
        mag_2(SmokeShell),
        SmokeShellGreen
	};
	linkedItems[] =
	{
		V_Chestrig_oli,
		H_HelmetIA_sb_digital_RF,
		DefaultManLeaderLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Chestrig_oli,
		H_HelmetIA_sb_digital_RF,
		DefaultManLeaderLinkedItems
	};
};
class Atlas_I_Pathfinder_RadioOperator_F: Atlas_I_Pathfinder_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_Pathfinder_RadioOperator_F.jpg";
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	backpack = B_RadioBag_01_digi_F;
	uniformClass = Aegis_U_I_Uniform_01_sweater_02_f;
	weapons[] =
	{
		Atlas_arifle_SLR_V_MRCO_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_SLR_V_MRCO_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_8(aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_Chestrig_oli,
		H_HelmetIA_sb_digital_RF,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Chestrig_oli,
		H_HelmetIA_sb_digital_RF,
		DefaultManLinkedItems
	};
};
class Atlas_I_Pathfinder_CMort_F: I_Support_CMort_RF
{
	author = $STR_A3_A_Ravenholme;
    vehicleClass = MenRecon;
	editorSubcategory = EdSubcat_Personnel_Pathfinders;
    uniformClass = Aegis_U_I_Uniform_01_sweater_f;       // Replace with Sweater
    icon = iconManRecon;
	role = Rifleman;
	camouflage = 0.6;
	detectSkill = 18;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_Pathfinder_CMort_F.jpg";
	weapons[] =
	{
		Atlas_arifle_MK20C_FMS_FL_F,
		hgun_ACPC2_F,
		DefaultManWeapons,
	};
	respawnWeapons[] =
	{
		Atlas_arifle_MK20C_FMS_FL_F,
		hgun_ACPC2_F,
		DefaultManWeapons,
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_stanag),
		mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell,
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_stanag),
		mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell,
	};
	linkedItems[] =
	{
		V_Chestrig_oli,
		H_MilCap_dgtl,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Chestrig_oli,
		H_MilCap_dgtl,
		DefaultManLinkedItems
	};
};
class Atlas_I_Pathfinder_UAV_RF_F: Atlas_I_Pathfinder_Base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_Pathfinder_UAV_RF_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_B_SOLDIER_UAV_F0;
	uavHacker = true;
    cost = 150000;
	role = SpecialOperative;
    uniformClass = Aegis_U_I_Uniform_01_sweater_02_f;
	weapons[] =
	{
		Atlas_arifle_MK20_GL_FMS_LP_F,
        hgun_ACPC2_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_MK20_GL_FMS_LP_F,
        hgun_ACPC2_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_stanag),
		mag_2(9Rnd_45ACP_Mag),
        mag_4(1rnd_he_grenade_shell),
        mag_2(1rnd_rc40_shell_rf),
        mag_2(1rnd_rc40_he_shell_rf),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_stanag),
		mag_2(9Rnd_45ACP_Mag),
        mag_4(1rnd_he_grenade_shell),
        mag_2(1rnd_rc40_shell_rf),
        mag_2(1rnd_rc40_he_shell_rf),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_Chestrig_oli,
		H_HelmetIA_sb_digital_RF,
		I_UavTerminal,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Chestrig_oli,
		H_HelmetIA_sb_digital_RF,
		I_UavTerminal,
		DefaultManLinkedItems
	};
};