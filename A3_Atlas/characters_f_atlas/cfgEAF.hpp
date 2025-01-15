/* LDF Reservists - Indep*/
class I_E_Soldier_base_F;
class Atlas_I_E_Reservist_base_F: I_E_Soldier_base_F
{
	scope = private;
	//uniformClass = Atlas_U_UniformBDU_01_reservist_F;
	uniformClass = Atlas_U_UniformBDU_03_reservist_F;
	headgearList[]={};
	editorSubcategory = EdSubcat_Personnel_Reservists;
	identityTypes[] =
    {
        LanguagePOL_F,
        Head_Enoch,
        Head_Euro,
        G_HAF_default
    };
    weapons[] =
    {
        Atlas_arifle_AKM74_plum_ACO_FL_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_AKM74_plum_ACO_FL_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30rnd_545x39_Steel_Mag_Red_F),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30rnd_545x39_Steel_Mag_Red_F),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_TacVest_grn,
		H_PASGT_basic_Olive_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_PASGT_basic_Olive_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_E_Reservist_SL_F: Atlas_I_E_Reservist_Base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_E_Reservist_SL_F.jpg";
	scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_SL_F0;
    //uniformClass = Atlas_U_UniformBDU_01_reservist_F;
	uniformClass = Atlas_U_UniformBDU_03_reservist_F;
	backpack = B_RadioBag_01_eaf_F;
	linkedItems[] =
	{
		V_TacVest_grn,
		H_Booniehat_eaf_hs,
		DefaultManLeaderLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_Booniehat_eaf_hs,
		DefaultManLeaderLinkedItems
	};
	weapons[] =
    {
        Atlas_arifle_AKM74_plum_MRCO_FL_F,
        hgun_ACPC2_black_F,
        DefaultManWeapons,
		Binocular
    };
    respawnWeapons[] =
    {
        Atlas_arifle_AKM74_plum_MRCO_FL_F,
        hgun_ACPC2_black_F,
        DefaultManWeapons,
        Binocular
    };
	magazines[] =
    {
        mag_4(30rnd_545x39_Steel_Mag_Red_F),
        mag_2(30rnd_545x39_Steel_Tracer_Mag_Red_F),
        mag_2(9Rnd_45acp_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_4(30rnd_545x39_Steel_Mag_Red_F),
        mag_2(30rnd_545x39_Steel_Tracer_Mag_Red_F),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
    };
    cost = 500000;
	camouflage = 1.4;
	icon = iconManLeader;
	role = Rifleman;
};
class Atlas_I_E_Reservist_TL_F: Atlas_I_E_Reservist_Base_F
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
    scopeCurator = public;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_E_Reservist_TL_F.jpg";
	displayName = $STR_B_Soldier_TL_F0;
	//uniformClass = Atlas_U_UniformBDU_02_reservist_F;
	uniformClass = Atlas_U_UniformBDU_04_reservist_F;
	role = Grenadier;
	icon = iconManLeader;
    cost = 250000;
	linkedItems[] =
	{
		V_TacVest_grn,
		H_PASGT_basic_Olive_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_PASGT_basic_Olive_F,
		DefaultManLinkedItems
	};
    weapons[] =
    {
        Atlas_arifle_AKM74_GL_plum_MRCO_FL_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        Atlas_arifle_AKM74_GL_plum_MRCO_FL_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30rnd_545x39_Steel_Mag_Red_F),
        mag_2(30rnd_545x39_Steel_Tracer_Mag_Red_F),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_4(30rnd_545x39_Steel_Mag_Red_F),
        mag_2(30rnd_545x39_Steel_Tracer_Mag_Red_F),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
};
class Atlas_I_E_Reservist_F: Atlas_I_E_Reservist_Base_F
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
    scopeCurator = public;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_E_Reservist_F.jpg";
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	cost = 100000;
	weapons[] =
	{
		Atlas_arifle_AKM74_plum_ACO_FL_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_AKM74_plum_ACO_FL_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30rnd_545x39_Steel_Mag_Red_F),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_8(30rnd_545x39_Steel_Mag_Red_F),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_TacVest_grn,
		H_PASGT_basic_Olive_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_PASGT_basic_Olive_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_E_Reservist_AT_F: Atlas_I_E_Reservist_Base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_E_Reservist_AT_F.jpg";
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
    backpack = Atlas_B_FieldPack_Green_ResLAT_F;
	uniform = Atlas_U_UniformBDU_02_reservist_F;
	weapons[] =
	{
		Atlas_arifle_AKM74_plum_ACO_FL_F,
		launch_MRAWS_green_rail_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_AKM74_plum_ACO_FL_F,
		launch_MRAWS_green_rail_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30rnd_545x39_Steel_Mag_Red_F),
		mraws_heat55_f,
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30rnd_545x39_Steel_Mag_Red_F),
		mraws_heat55_f,
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_TacVest_grn,
		H_PASGT_basic_Olive_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_PASGT_basic_Olive_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_E_Reservist_M_F: Atlas_I_E_Reservist_Base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_E_Reservist_M_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_M_F0;
	role = Marksman;
	cost = 250000;
	weapons[] =
	{
		Atlas_srifle_SVD_plum_KHS_F,
		DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		Atlas_srifle_SVD_plum_KHS_F,
		DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_8(Aegis_10Rnd_762x54_SVD_Red_Mag_F),
		mag_2(SmokeShell),
        HandGrenade
	};
	respawnMagazines[] =
	{
		mag_8(Aegis_10Rnd_762x54_SVD_Red_Mag_F),
		mag_2(SmokeShell),
        HandGrenade
	};
	linkedItems[] =
	{
		V_ChestRigF_rgr,
		H_WatchCap_camo_hs,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_ChestRigF_rgr,
		H_WatchCap_camo_hs,
		DefaultManLinkedItems
	};
};
class Atlas_I_E_Reservist_GL_F: Atlas_I_E_Reservist_Base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_E_Reservist_GL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
    role = Grenadier;
	cost = 200000;
	weapons[] =
    {
        Atlas_arifle_AKM74_GL_plum_ACO_FL_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_AKM74_GL_plum_ACO_FL_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30rnd_545x39_Steel_Mag_Red_F),
        mag_4(1Rnd_HE_Grenade_shell),
        HandGrenade,
        SmokeShell,
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30rnd_545x39_Steel_Mag_Red_F),
        mag_4(1Rnd_HE_Grenade_shell),
        HandGrenade,
        SmokeShell,
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
	linkedItems[] =
	{
		V_TacVest_grn,
		H_PASGT_basic_Olive_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_PASGT_basic_Olive_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_E_Reservist_AR_F: Atlas_I_E_Reservist_Base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_E_Reservist_AR_F.jpg";
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
	//uniformClass = Atlas_U_UniformBDU_02_reservist_F;
	uniformClass = Atlas_U_UniformBDU_04_reservist_F;
	weapons[] =
	{
		Atlas_I_E_LMG_03_ACO_Flash_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_I_E_LMG_03_ACO_Flash_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_3(200rnd_556x45_box_f),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_3(200rnd_556x45_box_f),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_ChestRigF_rgr,
		H_PASGT_basic_Olive_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_ChestRigF_rgr,
		H_PASGT_basic_Olive_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_E_Reservist_Medic_F: Atlas_I_E_Reservist_Base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_E_Reservist_Medic_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_medic_F0;
	role = CombatLifeSaver;
	icon = iconManMedic;
	picture = pictureHeal;
	camouflage = 1.6;
	attendant = true;
	backpack = Atlas_B_FieldPack_Green_ResMedic_F;
	weapons[] =
	{
		Atlas_arifle_AKM74_plum_ACO_FL_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_AKM74_plum_ACO_FL_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30rnd_545x39_Steel_Mag_Red_F),
        HandGrenade,
        mag_2(SmokeShell),
		SMOKESHELLS_MEDIC
	};
	respawnMagazines[] =
	{
		mag_6(30rnd_545x39_Steel_Mag_Red_F),
        HandGrenade,
        mag_2(SmokeShell),
		SMOKESHELLS_MEDIC
	};
	linkedItems[] =
	{
		V_TacVest_grn,
		H_PASGT_basic_Olive_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_PASGT_basic_Olive_F,
		DefaultManLinkedItems
	};
};
class Atlas_I_E_Reservist_Repair_F: Atlas_I_E_Reservist_Base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_E_Reservist_Repair_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_R_Conscript_Pioneer_F0;
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
	backpack = Atlas_B_FieldPack_Green_ResEng_F;
    //uniformClass = Atlas_U_UniformBDU_02_reservist_F;
	uniformClass = Atlas_U_UniformBDU_04_reservist_F;
	weapons[] =
	{
		Atlas_arifle_AKM74_plum_ACO_FL_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_AKM74_plum_ACO_FL_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30rnd_545x39_Steel_Mag_Red_F),
        HandGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30rnd_545x39_Steel_Mag_Red_F),
        HandGrenade,
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_TacVest_grn,
		H_Booniehat_eaf,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_Booniehat_eaf,
		DefaultManLinkedItems
	};
};
class Atlas_I_E_Reservist_A_F: Atlas_I_E_Reservist_Base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_I_E_Reservist_A_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_A_F0;
	backpack = Atlas_B_Carryall_green_ResAmmo_F;
	weapons[] =
	{
		Atlas_arifle_AKM74_plum_ACO_FL_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_AKM74_plum_ACO_FL_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30rnd_545x39_Steel_Mag_Red_F),
        HandGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30rnd_545x39_Steel_Mag_Red_F),
        HandGrenade,
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_ChestRigF_rgr,
		H_PASGT_basic_Olive_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_ChestRigF_rgr,
		H_PASGT_basic_Olive_F,
		DefaultManLinkedItems
	};
	cost = 110000;
};

/* LDF Reservists - BLUFOR*/
class Atlas_B_E_Reservist_SL_F: Atlas_I_E_Reservist_SL_F
{
    author = $STR_A3_A_Ravenholme;
    side = TWest;
    faction = BLU_EAF_F;
};
class Atlas_B_E_Reservist_TL_F: Atlas_I_E_Reservist_TL_F
{
    author = $STR_A3_A_Ravenholme;
    side = TWest;
    faction = BLU_EAF_F;
};
class Atlas_B_E_Reservist_F: Atlas_I_E_Reservist_F
{
    author = $STR_A3_A_Ravenholme;
    side = TWest;
    faction = BLU_EAF_F;
};
class Atlas_B_E_Reservist_AR_F: Atlas_I_E_Reservist_AR_F
{
    author = $STR_A3_A_Ravenholme;
    side = TWest;
    faction = BLU_EAF_F;
};
class Atlas_B_E_Reservist_M_F: Atlas_I_E_Reservist_M_F
{
    author = $STR_A3_A_Ravenholme;
    side = TWest;
    faction = BLU_EAF_F;
};
class Atlas_B_E_Reservist_AT_F: Atlas_I_E_Reservist_AT_F
{
    author = $STR_A3_A_Ravenholme;
    side = TWest;
    faction = BLU_EAF_F;
};
class Atlas_B_E_Reservist_GL_F: Atlas_I_E_Reservist_GL_F
{
    author = $STR_A3_A_Ravenholme;
    side = TWest;
    faction = BLU_EAF_F;
};
class Atlas_B_E_Reservist_Medic_F: Atlas_I_E_Reservist_Medic_F
{
    author = $STR_A3_A_Ravenholme;
    side = TWest;
    faction = BLU_EAF_F;
};
class Atlas_B_E_Reservist_Repair_F: Atlas_I_E_Reservist_Repair_F
{
    author = $STR_A3_A_Ravenholme;
    side = TWest;
    faction = BLU_EAF_F;
};
class Atlas_B_E_Reservist_A_F: Atlas_I_E_Reservist_A_F
{
    author = $STR_A3_A_Ravenholme;
    side = TWest;
    faction = BLU_EAF_F;
};

/* LDF SF Uniform Update */
class I_E_Soldier_Recon_base;
class I_E_recon_AR_F: I_E_Soldier_recon_base
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_E_recon_AR_F.jpg";
	uniformClass = Atlas_U_E_SF_CombatUniformNCU_02_F;
};
class I_E_recon_exp_F: I_E_Soldier_recon_base
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_E_recon_exp_F.jpg";
	uniformClass = Atlas_U_E_SF_CombatUniformNCU_02_F;
};
class I_E_recon_GL_F: I_E_Soldier_recon_base
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_E_recon_GL_F.jpg";
	uniformClass = Atlas_U_E_SF_CombatUniformNCU_01_F;
};
class I_E_recon_JTAC_F: I_E_Soldier_recon_base
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_E_recon_JTAC_F.jpg";
	uniformClass = Atlas_U_E_SF_CombatUniformNCU_01_F;
};
class I_E_recon_M_F: I_E_Soldier_recon_base
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_E_recon_M_F.jpg";
	uniformClass = Atlas_U_E_SF_CombatUniformNCU_01_F;
};
class I_E_recon_medic_F: I_E_Soldier_recon_base
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_E_recon_medic_F.jpg";
	uniformClass = Atlas_U_E_SF_CombatUniformNCU_02_F;
};
class I_E_recon_F: I_E_Soldier_recon_base
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_E_recon_F.jpg";
	uniformClass = Atlas_U_E_SF_CombatUniformNCU_01_F;
};
class I_E_recon_LAT_F: I_E_Soldier_recon_base
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_E_recon_LAT_F.jpg";
	uniformClass = Atlas_U_E_SF_CombatUniformNCU_02_F;
};
class I_E_recon_TL_F: I_E_Soldier_recon_base
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_E_recon_TL_F.jpg";
	uniformClass = Atlas_U_E_SF_CombatUniformNCU_01_F;
};

class Aegis_B_E_Recon_AR_F: I_E_recon_AR_F{};
class Aegis_B_E_Recon_Exp_F: I_E_recon_exp_F{};
class Aegis_B_E_Recon_GL_F: I_E_recon_GL_F{};
class Aegis_B_E_Recon_JTAC_F: I_E_recon_JTAC_F{};
class Aegis_B_E_Recon_M_F: I_E_recon_M_F{};
class Aegis_B_E_Recon_Medic_F: I_E_recon_medic_F{};
class Aegis_B_E_Recon_F: I_E_recon_F{};
class Aegis_B_E_Recon_LAT_F: I_E_recon_LAT_F{};
class Aegis_B_E_Recon_TL_F: I_E_recon_TL_F{};

class I_E_Recon_AR_ard_F: I_E_recon_AR_F
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_E_recon_AR_ard_F.jpg";
	uniformClass = Atlas_U_E_SF_CombatUniformNCU_02_ard_F;
};
class I_E_Recon_exp_ard_F: I_E_recon_exp_F
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_E_recon_exp_ard_F.jpg";
	uniformClass = Atlas_U_E_SF_CombatUniformNCU_02_ard_F;
};
class I_E_Recon_GL_ard_F: I_E_recon_GL_F
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_E_recon_gl_ard_F.jpg";
	uniformClass = Atlas_U_E_SF_CombatUniformNCU_01_ard_F;
};
class I_E_Recon_JTAC_ard_F: I_E_recon_JTAC_F
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_E_recon_jtac_ard_F.jpg";
	uniformClass = Atlas_U_E_SF_CombatUniformNCU_01_ard_F;
};
class I_E_Recon_M_ard_F: I_E_recon_M_F
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_E_recon_M_ard_F.jpg";
	uniformClass = Atlas_U_E_SF_CombatUniformNCU_02_ard_F;
};
class I_E_Recon_Medic_ard_F: I_E_recon_Medic_F
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_E_recon_Medic_ard_F.jpg";
	uniformClass = Atlas_U_E_SF_CombatUniformNCU_02_ard_F;
};
class I_E_Recon_ard_F: I_E_recon_F
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_E_recon_ard_F.jpg";
	uniformClass = Atlas_U_E_SF_CombatUniformNCU_01_ard_F;
};
class I_E_Recon_LAT_ard_F: I_E_recon_LAT_F
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_E_recon_LAT_ard_F.jpg";
	uniformClass = Atlas_U_E_SF_CombatUniformNCU_02_ard_F;
};
class I_E_Recon_TL_ard_F: I_E_recon_TL_F
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_E_recon_TL_ard_F.jpg";
	uniformClass = Atlas_U_E_SF_CombatUniformNCU_01_ard_F;
};
class Aegis_B_E_Recon_AR_ard_F: I_E_recon_AR_ard_F{};
class Aegis_B_E_Recon_Exp_ard_F: I_E_recon_exp_ard_F{};
class Aegis_B_E_Recon_GL_ard_F: I_E_recon_GL_ard_F{};
class Aegis_B_E_Recon_JTAC_ard_F: I_E_recon_JTAC_ard_F{};
class Aegis_B_E_Recon_M_ard_F: I_E_recon_M_ard_F{};
class Aegis_B_E_Recon_Medic_ard_F: I_E_recon_medic_ard_F{};
class Aegis_B_E_Recon_ard_F: I_E_recon_ard_F{};
class Aegis_B_E_Recon_LAT_ard_F: I_E_recon_LAT_ard_F{};
class Aegis_B_E_Recon_TL_ard_F: I_E_recon_TL_ard_F{};