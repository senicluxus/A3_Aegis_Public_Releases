/* AAF 2nd Regiment SF */
class Aegis_I_Soldier_recon_base: I_Soldier_base_F
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
	items[] =
	{
		FirstAidKit,
		optic_NVS
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_NVS
	};
	vehicleClass = MenRecon;
	editorSubcategory = EdSubcat_Personnel_SpecialForces;
    uniformClass = U_I_CombatUniform;
    icon = iconManRecon;
	role = Rifleman;
	camouflage = 0.6;
	detectSkill = 18;
};
class Aegis_I_recon_AR_F: Aegis_I_Soldier_recon_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_recon_AR_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_C_O_R_recon_AR_F0;
	uniformClass = U_I_CombatUniform_shortsleeve;
	items[] =
	{
		FirstAidKit,
		optic_tws_mg
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_tws_mg
	};
	linkedItems[] =
	{
		V_TacVest_rig_oli_RF,
		H_HelmetSpecter_cover_AAF_F,
        DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacVest_rig_oli_RF,
		H_HelmetSpecter_cover_AAF_F,
        DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
    {
        Aegis_LMG_MK200_MRCO_LP_BI_Snds_F,
        Aegis_hgun_Pistol_R57_MRD_LP_Snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_LMG_MK200_MRCO_LP_BI_Snds_F,
        Aegis_hgun_Pistol_R57_MRD_LP_Snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_3(200Rnd_65x39_cased_Box),
        mag_2(Aegis_10Rnd_570x28_RP57_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_3(200Rnd_65x39_cased_Box),
        mag_2(Aegis_10Rnd_570x28_RP57_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	cost = 220000;
	icon = iconManMG;
	role = MachineGunner;
	threat[] =
    {
        1,      // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Aegis_I_recon_exp_F: Aegis_I_Soldier_recon_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_recon_exp_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_recon_exp_F0;
	uniformClass = U_I_CombatUniform_shortsleeve;
	backpack = Aegis_I_Kitbag_dgtl_ReconEXP;
	linkedItems[] =
	{
		V_TacVest_rig_oli_RF,
		H_HelmetSpecter_cover_AAF_F,
        DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacVest_rig_oli_RF,
		H_HelmetSpecter_cover_AAF_F,
        DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
    {
        Aegis_arifle_MK20C_FMS_LP_Snds_F,
        Aegis_hgun_Pistol_R57_MRD_LP_Snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_arifle_MK20C_FMS_LP_Snds_F,
        Aegis_hgun_Pistol_R57_MRD_LP_Snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30rnd_556x45_ap_stanag_rf),
        mag_2(Aegis_10Rnd_570x28_RP57_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30rnd_556x45_ap_stanag_rf),
        mag_2(Aegis_10Rnd_570x28_RP57_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	canDeactivateMines = true;
	detectSkill = 38;
	icon = iconManExplosive;
	picture = pictureExplosive;
	role = Sapper;
};
class Aegis_I_recon_GL_F: Aegis_I_Soldier_recon_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_recon_GL_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_C_O_R_recon_GL_F0;
	uniformClass = U_I_CombatUniform;
	linkedItems[] =
	{
		V_TacVest_rig_oli_RF,
		H_HelmetSpecter_cover_AAF_F,
        DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacVest_rig_oli_RF,
		H_HelmetSpecter_cover_AAF_F,
        DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
    {
        Aegis_arifle_MK20_GL_FMS_LP_Snds_F,
        Aegis_hgun_Pistol_R57_MRD_LP_Snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_arifle_MK20_GL_FMS_LP_Snds_F,
        Aegis_hgun_Pistol_R57_MRD_LP_Snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30rnd_556x45_ap_stanag_rf),
        mag_2(Aegis_10Rnd_570x28_RP57_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30rnd_556x45_ap_stanag_rf),
        mag_2(Aegis_10Rnd_570x28_RP57_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
	cost = 200000;
	role = Grenadier;
};
class Aegis_I_recon_JTAC_F: Aegis_I_Soldier_recon_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_recon_JTAC_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_recon_JTAC_F0;
	backpack = B_RadioBag_01_digi_F;
    uniformClass = U_I_CombatUniform;
	linkedItems[] =
	{
		V_TacVest_rig_oli_RF,
		H_HelmetSpecter_cover_AAF_F,
        DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacVest_rig_oli_RF,
		H_HelmetSpecter_cover_AAF_F,
        DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
    {
        Aegis_arifle_MK20_FMS_LP_Snds_F,
        Aegis_hgun_Pistol_R57_MRD_LP_Snds_F,
        DefaultManWeapons,
        Laserdesignator_03
    };
    respawnWeapons[] =
    {
        Aegis_arifle_MK20_FMS_LP_Snds_F,
        Aegis_hgun_Pistol_R57_MRD_LP_Snds_F,
        DefaultManWeapons,
        Laserdesignator_03
    };
    magazines[] =
    {
        mag_6(30rnd_556x45_ap_stanag_rf),
        mag_2(Aegis_10Rnd_570x28_RP57_Mag),
        mag_2(MiniGrenade),
        mag_2(I_IR_Grenade),
        Laserbatteries,
        SmokeShell,
        SMOKESHELLS_INDEP,
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30rnd_556x45_ap_stanag_rf),
        mag_2(Aegis_10Rnd_570x28_RP57_Mag),
        mag_2(MiniGrenade),
        mag_2(I_IR_Grenade),
        Laserbatteries,
        SmokeShell,
        SMOKESHELLS_INDEP,
        mag_2(Chemlight_green)
    };
	role = SpecialOperative;
};
class Aegis_I_recon_M_F: Aegis_I_Soldier_recon_base
{
	author = $STR_A3_A_Ravenholme;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_sniper_s};
			speechPlural[] = {veh_infantry_sniper_p};
		};
	};
    identityTypes[]=
	{
		LanguageGRE_F,
		Head_Greek
	};
	textSingular = $STR_A3_nameSound_veh_infantry_sniper_s;
	textPlural = $STR_A3_nameSound_veh_infantry_sniper_p;
	nameSound = veh_infantry_sniper_s;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_recon_M_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_recon_M_F0;
	uniformClass = U_I_CombatUniform_shortsleeve;
	items[] =
	{
		FirstAidKit,
		optic_tws_sniper
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_tws_sniper
	};
	linkedItems[] =
	{
		V_TacVest_rig_oli_RF,
		H_HelmetSpecter_cover_AAF_F,
        Aegis_G_ScrimNet_Under_Olive_F,
        DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacVest_rig_oli_RF,
		H_HelmetSpecter_cover_AAF_F,
        Aegis_G_ScrimNet_Under_Olive_F,
        DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
    {
        Aegis_arifle_SR25_MR_blk_MRCO_LP_Snds_BI_F,
        Aegis_hgun_Pistol_R57_MRD_LP_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        Aegis_arifle_SR25_MR_blk_MRCO_LP_Snds_BI_F,
        Aegis_hgun_Pistol_R57_MRD_LP_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_8(Aegis_20Rnd_762x51_smag),
        mag_2(Aegis_10Rnd_570x28_RP57_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_8(Aegis_20Rnd_762x51_smag),
        mag_2(Aegis_10Rnd_570x28_RP57_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	cost = 250000;
	threat[] =
    {
        1,      // Soft
        0.1,    // Armor
        0.3     // Air
    };
	role = Marksman;
	primaryAmmoCoef = 0.2;
	secondaryAmmoCoef = 0.05;
	handgunAmmoCoef = 0.1;
};
class Aegis_I_recon_medic_F: Aegis_I_Soldier_recon_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_recon_medic_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_recon_medic_F0;
	backpack = I_AssaultPack_dgtl_Medic;
	linkedItems[] =
	{
		V_TacVest_rig_oli_RF,
		H_HelmetSpecter_cover_AAF_F,
        DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacVest_rig_oli_RF,
		H_HelmetSpecter_cover_AAF_F,
        DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
    {
        Aegis_arifle_MK20C_FMS_LP_Snds_F,
        Aegis_hgun_Pistol_R57_MRD_LP_Snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_arifle_MK20C_FMS_LP_Snds_F,
        Aegis_hgun_Pistol_R57_MRD_LP_Snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30rnd_556x45_ap_stanag_rf),
        mag_2(Aegis_10Rnd_570x28_RP57_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30rnd_556x45_ap_stanag_rf),
        mag_2(Aegis_10Rnd_570x28_RP57_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_green)
    };
	attendant = true;
	icon = iconManMedic;
	picture = pictureHeal;
	role = CombatLifeSaver;
	threat[] =
    {
        1,      // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Aegis_I_recon_F: Aegis_I_Soldier_recon_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_recon_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_recon_F0;
	uniformClass = U_I_CombatUniform;
	linkedItems[] =
	{
		V_TacVest_rig_oli_RF,
		H_HelmetSpecter_cover_AAF_F,
        DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacVest_rig_oli_RF,
		H_HelmetSpecter_cover_AAF_F,
        DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
    {
        Aegis_arifle_MK20_FMS_LP_Snds_F,
        Aegis_hgun_Pistol_R57_MRD_LP_Snds_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        Aegis_arifle_MK20_FMS_LP_Snds_F,
        Aegis_hgun_Pistol_R57_MRD_LP_Snds_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_10(30rnd_556x45_ap_stanag_rf),
        mag_2(Aegis_10Rnd_570x28_RP57_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_10(30rnd_556x45_ap_stanag_rf),
        mag_2(Aegis_10Rnd_570x28_RP57_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
};
class Aegis_I_recon_LAT_F: Aegis_I_Soldier_recon_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_recon_LAT_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_recon_LAT_F0;
	uniformClass = U_I_CombatUniform;
	backpack = I_FieldPack_oli_LAT2;
	linkedItems[] =
	{
		V_TacVest_rig_oli_RF,
		H_HelmetSpecter_cover_AAF_F,
        DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacVest_rig_oli_RF,
		H_HelmetSpecter_cover_AAF_F,
        DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
    {
        Aegis_arifle_MK20C_FMS_LP_Snds_F,
		launch_MRAWS_olive_F,
        Aegis_hgun_Pistol_R57_MRD_LP_Snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_arifle_MK20C_FMS_LP_Snds_F,
		launch_MRAWS_olive_F,
        Aegis_hgun_Pistol_R57_MRD_LP_Snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30rnd_556x45_ap_stanag_rf),
        mag_2(Aegis_10Rnd_570x28_RP57_Mag),
		MRAWS_HEAT_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30rnd_556x45_ap_stanag_rf),
        mag_2(Aegis_10Rnd_570x28_RP57_Mag),
		MRAWS_HEAT_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	cost = 130000;
	threat[] = {1,0.6,0.1};
	secondaryAmmoCoef = 0.5;
	icon = iconManAT;
	role = MissileSpecialist;
};
class Aegis_I_recon_TL_F: Aegis_I_Soldier_recon_base
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_recon_TL_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_recon_TL_F0;
	uniformClass = U_I_CombatUniform;
	linkedItems[] =
	{
		V_TacVest_rig_oli_RF,
		H_HelmetSpecter_cover_AAF_F,
        DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacVest_rig_oli_RF,
		H_HelmetSpecter_cover_AAF_F,
        DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
    {
        Aegis_arifle_MK20_FMS_LP_Snds_F,
        Aegis_hgun_Pistol_R57_MRD_LP_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        Aegis_arifle_MK20_FMS_LP_Snds_F,
        Aegis_hgun_Pistol_R57_MRD_LP_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_6(30rnd_556x45_ap_stanag_rf),
        mag_2(Aegis_10Rnd_570x28_RP57_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_INDEP,
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30rnd_556x45_ap_stanag_rf),
        mag_2(Aegis_10Rnd_570x28_RP57_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_INDEP,
        mag_2(Chemlight_green)
    };
	cost = 250000;
	icon = iconManLeader;
	role = Rifleman;
	threat[] =
    {
        1,      // Soft
        0.1,    // Armor
        0.3     // Air
    };
};


