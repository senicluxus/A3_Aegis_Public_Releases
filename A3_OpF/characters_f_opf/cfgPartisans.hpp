// Partisan Base Class
class Opf_B_P_Soldier_Base_F: I_G_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
    scope = private;
    faction = Opf_BLU_P_F;
    side = TWest;
    genericNames = EnochMen;
    identityTypes[] =
    {
        LanguagePOL_F,
        LanguageGRE_F,
        Head_Enoch,
        Head_Euro,
        Head_Russian,
        G_GUERIL_default
    };
    uniformClass = Opf_U_B_P_Uniform_01_F;
    allowedHeadgear[] =
    {
        H_Watchcap_blk,
        H_Watchcap_camo,
        H_Watchcap_khk,
        H_Watchcap_sgg,
        H_Watchcap_blk_hs,
        H_Watchcap_camo_hs,
        H_Watchcap_khk_hs,
        H_Booniehat_khk,
        H_Booniehat_khk_hs,
        H_Booniehat_oli,
        H_Booniehat_mgrn,
        H_Booniehat_oli_hs,
        H_Booniehat_dgtl_hs,
        H_Booniehat_mgrn_hs,
        H_HeadSet_light_F,
        H_PASGT_basic_black_F,
        H_PASGT_basic_green_F,
        H_PASGT_basic_olive_F,
		H_MK7_oli_F
    };
    headgearList[] =
    {
        H_Watchcap_blk,1,
        H_Watchcap_camo,1,
        H_Watchcap_khk,1,
        H_Watchcap_sgg,1,
        H_Watchcap_blk_hs,1,
        H_Watchcap_camo_hs,1,
        H_Watchcap_khk_hs,1,
        H_Booniehat_khk,1,
        H_Booniehat_khk_hs,1,
        H_Booniehat_oli,1,
        H_Booniehat_mgrn,1,
        H_Booniehat_oli_hs,1,
        H_Booniehat_dgtl_hs,1,
        H_Booniehat_mgrn_hs,1,
        H_HeadSet_light_F,1,
        H_PASGT_basic_black_F,1,
        H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
		H_MK7_oli_F,1,
        H_FakeHeadgear_F,1
    };
};

/* Unit Classes */
class Opf_B_P_Soldier_A_F: Opf_B_P_Soldier_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_B_P_Soldier_A_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_A_F0;
	cost = 100000;
	backpack = Opf_B_patrolBackpack_grn_Partisan_Ammo_F;
	uniformClass = Opf_U_B_P_Uniform_01_Shortsleeve_F;
	weapons[] =
	{
		Aegis_arifle_M4A1_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_M4A1_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_TacChestRig_grn_F,
        H_Booniehat_mgrn,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacChestRig_grn_F,
        H_Booniehat_mgrn,
		DefaultManGuerillaLinkedItems
	};
};
class Opf_B_P_Soldier_AR_F: Opf_B_P_Soldier_Base_F
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
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_B_P_Soldier_AR_F.jpg";
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
	//uniformClass =
    weapons[] =
	{
		Opf_LMG_Negev_black_RDSH_FL_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Opf_LMG_Negev_black_RDSH_FL_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_3(Atlas_150Rnd_762x51_Box_Yellow),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_3(Atlas_150Rnd_762x51_Box_Yellow),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_TacChestRig_grn_F,
        H_Watchcap_camo,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacChestRig_grn_F,
        H_Watchcap_camo,
		DefaultManGuerillaLinkedItems
	};
};
class Opf_B_P_Medic_F: Opf_B_P_Soldier_Base_F
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
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_B_P_Medic_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_medic_F0;
	role = CombatLifeSaver;
	icon = iconManMedic;
	picture = pictureHeal;
	camouflage = 1.6;
	attendant = true;
    uniformClass = Opf_U_B_P_FieldJacket_01_F;
	backpack = B_FieldPack_green_Partisan_Medic_F;
    weapons[] =
	{
		Aegis_arifle_M4A1_F,
		DefaultManWeapons,
	};
	respawnWeapons[] =
	{
		Aegis_arifle_M4A1_F,
		DefaultManWeapons,
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
        HandGrenade,
        mag_2(SmokeShell),
        SMOKESHELLS_MEDIC
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
        HandGrenade,
        mag_2(SmokeShell),
        SMOKESHELLS_MEDIC
	};
	linkedItems[] =
	{
		V_TacVest_grn,
		H_Booniehat_oli_hs,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn
		H_Booniehat_oli_hs,
		DefaultManGuerillaLinkedItems
	};
};
class Opf_B_P_Crew_F: Opf_B_P_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_B_P_Crew_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_crew_F0;
	role = Crewman;
	cost = 90000;
	camouflage = 1.6;
    engineer = true;
	uniformClass = Opf_U_O_S_Uniform_01_Sweater_F;
	weapons[] =
	{
		SMG_04_blk_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_04_blk_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(20rnd_460x30_mag_F),
        HandGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_4(20rnd_460x30_mag_F),
        HandGrenade,
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_TacChestRig_grn_F,
		H_Tank_Black_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacChestRig_grn_F,
		H_Tank_Black_F,
		DefaultManGuerillaLinkedItems
	};
    allowedHeadgear[] = {H_Tank_Black_F};
    headgearList[] = {H_Tank_Black_F,1};
};
class Opf_B_P_Engineer_F: Opf_B_P_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_B_P_Engineer_F.jpg";
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
	uniformClass = Opf_U_B_P_FieldJacket_02_F;
	backpack = B_Carryall_green_Partisan_Eng_F;
	weapons[] =
	{
		SMG_04_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_04_blk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(20rnd_460x30_mag_F),
        HandGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(20rnd_460x30_mag_F),
        HandGrenade,
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_TacVest_oli,
		H_Booniehat_khk,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_oli,
		H_Booniehat_khk,
		DefaultManGuerillaLinkedItems
	};
};
class Opf_B_P_Soldier_Exp_F: Opf_B_P_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_B_P_Soldier_Exp_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_Opf_B_P_Soldier_Exp_F0;
    canDeactivateMines = true;
	detectSkill = 38;
	cost = 93000;
	camouflage = 1.6;
	icon = iconManExplosive;
	picture = pictureExplosive;
	role = Sapper;
	uniformClass = Opf_U_B_P_FieldJacket_03_F;
    backpack = B_Carryall_green_Partisan_Exp_F;
	weapons[] =
	{
		Aegis_arifle_M4A1_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_M4A1_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_ChestrigF_oli,
		H_PASGT_basic_olive_F,
		G_Combat,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_oli,
		H_PASGT_basic_olive_F,
		G_Combat,
		DefaultManGuerillaLinkedItems
	};
	allowedHeadgear[] = 
	{
		H_PASGT_basic_olive_F,
		H_PASGT_basic_green_F,
		H_PASGT_basic_sand_F
	};
    headgearList[] = 
	{
		H_PASGT_basic_olive_F,1,
		H_PASGT_basic_green_F,1,
		H_PASGT_basic_sand_F,1
	};
};
class Opf_B_P_Soldier_GL_F: Opf_B_P_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_B_P_Soldier_GL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
    role = Grenadier;
	cost = 200000;
	uniformClass = Opf_U_B_P_FieldJacket_01_F;
	weapons[] =
	{
		Opf_arifle_M4A1_GL_RDSH_FL_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Opf_arifle_M4A1_GL_RDSH_FL_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
        mag_3(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
        mag_3(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	linkedItems[] =
	{
		V_TacVest_grn,
		H_Booniehat_atacs_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_Booniehat_atacs_F,
		DefaultManGuerillaLinkedItems
	};
};
class Opf_B_P_Soldier_M_F: Opf_B_P_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_B_P_Soldier_M_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_M_F0;
	role = Marksman;
	cost = 250000;
	uniformClass = Opf_U_B_P_FieldJacket_01_F;
	weapons[] =
	{
		Opf_srifle_DMR_03_MRCO_FL_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		Opf_srifle_DMR_03_MRCO_FL_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_6(20rnd_762x51_mag),
        HandGrenade,
		SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(20rnd_762x51_mag),
        HandGrenade,
		SmokeShell
	};
	linkedItems[] =
	{
		V_TacVest_camo,
		H_cap_oli,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_camo,
		H_cap_oli,
		DefaultManGuerillaLinkedItems
	};
};
class Opf_B_P_Officer_F: Opf_B_P_Soldier_Base_F
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
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_B_P_Officer_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_officer_F0;
    role = Rifleman;
	icon = iconManOfficer;
    cost = 600000;
	camouflage = 1.6;
	uniformClass = Opf_U_B_P_FieldJacket_03_F;
	weapons[] =
	{
		Aegis_arifle_M4A1_F,
		hgun_ACPC2_black_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		Aegis_arifle_M4A1_F,
		hgun_ACPC2_black_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_6(30rnd_556x45_Stanag),
		mag_2(9rnd_45acp_mag),
        mag_2(SmokeShell),
        SmokeShellGreen
	};
	respawnMagazines[] =
	{
		mag_4(30rnd_556x45_Stanag),
		mag_2(9rnd_45acp_mag),
        mag_2(SmokeShell),
        SmokeShellGreen
	};
	linkedItems[] =
	{
		V_TacChestRig_grn_F,
		H_Beret_brn,
		G_headset_light,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacChestRig_grn_F,
		H_Beret_brn,
		G_headset_light,
		DefaultManLinkedItems
	};
	allowedHeadgear[] = 
	{
		H_Beret_gry,
		H_Beret_blk,
		H_Beret_brn
	};
    headgearList[] = 
	{
		H_Beret_gry,1,
		H_Beret_blk,1,
		H_Beret_brn,1
	};
};
class Opf_B_P_Soldier_F: Opf_B_P_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
    editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_B_P_soldier_F.jpg";
    role = Rifleman;
    cost = 100000;
	weapons[] =
	{
		Opf_arifle_M4A1_RDSH_FL_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Opf_arifle_M4A1_RDSH_FL_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30rnd_556x45_Stanag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30rnd_556x45_Stanag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_TacVest_oli,
		H_MK7_oli_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_oli,
		H_MK7_oli_F,
		DefaultManGuerillaLinkedItems
	};
};
class Opf_B_P_Soldier_AT_F: Opf_B_P_Soldier_Base_F
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
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_B_P_Soldier_AT_F.jpg";
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
    backpack = B_FieldPack_green_F_Partisan_AT_F;
	uniformClass = Opf_U_B_P_Uniform_01_Shortsleeve_F;
	weapons[] =
	{
		Aegis_arifle_M4A1_F,
		launch_MRAWS_Green_rail_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_M4A1_F,
		launch_MRAWS_Green_rail_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		MRAWS_HEAT55_F,
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		MRAWS_HEAT55_F,
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_TacChestRig_grn_F,
		H_MK7_oli_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacChestRig_grn_F,
		H_MK7_oli_F,
		DefaultManGuerillaLinkedItems
	};
};
class Opf_B_P_Soldier_LAT_F: Opf_B_P_Soldier_Base_F
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
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_B_P_Soldier_LAT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_soldier_LAT2_F0;
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
    backpack = B_FieldPack_green_F_Partisan_LAT_F;
	uniformClass = Opf_U_B_P_FieldJacket_02_F;
	weapons[] =
	{
		Aegis_arifle_M4A1_F,
		Aegis_launch_RPG7M_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_M4A1_F,
		Aegis_launch_RPG7M_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		RPG7_F,
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		RPG7_F,
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_TacVest_camo,
		H_Cap_oli,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_camo,
		H_Cap_oli,
		DefaultManGuerillaLinkedItems
	};
};
class Opf_B_P_Soldier_SL_F: Opf_B_P_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_B_P_Soldier_SL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_SL_F0;
	role = Grenadier;
	icon = iconManLeader;
    cost = 500000;
	camouflage = 1.4;
	weapons[] =
	{
		Opf_arifle_M4A1_MRCO_FL_F,
		hgun_ACPC2_black_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		Opf_arifle_M4A1_MRCO_FL_F,
		hgun_ACPC2_black_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
		mag_2(30Rnd_556x45_Stanag_Tracer_Yellow),
		mag_2(9rnd_45acp_mag),
        mag_2(HandGrenade),
		SmokeShell,
		SMOKESHELLS_DEFAULT
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
		mag_2(30Rnd_556x45_Stanag_Tracer_Yellow),
		mag_2(9rnd_45acp_mag),
        mag_2(HandGrenade),
        SmokeShell,
		SMOKESHELLS_DEFAULT
	};
	linkedItems[] =
	{
		V_TacVest_Camo,
		H_PASGT_basic_olive_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_Camo,
		H_PASGT_basic_olive_F,
		DefaultManGuerillaLinkedItems
	};
	allowedHeadgear[] = 
	{
		H_PASGT_basic_green_F,
        H_PASGT_basic_olive_F,
		H_MK7_oli_F
	};
    headgearList[] = 
	{
		H_PASGT_basic_green_F,1,
        H_PASGT_basic_olive_F,1,
		H_MK7_oli_F,1
	};
};
class Opf_B_P_Soldier_TL_F: Opf_B_P_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_B_P_Soldier_TL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_TL_F0;
	role = Grenadier;
	icon = iconManLeader;
    cost = 250000;
	camouflage = 1.4;
	uniformClass = Opf_U_B_P_FieldJacket_03_F;
	weapons[] =
	{
		Opf_arifle_M4A1_01_GL_MRCO_FL_F,
		hgun_ACPC2_black_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		Opf_arifle_M4A1_01_GL_MRCO_FL_F,
		hgun_ACPC2_black_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
        mag_2(30Rnd_556x45_Stanag_Tracer_Yellow),
		mag_2(9rnd_45acp_mag),
        mag_2(HandGrenade),
        mag_3(1Rnd_HE_Grenade_shell),
        SmokeShell,
        SMOKESHELLS_DEFAULT,
        1Rnd_Smoke_Grenade_shell,
        SMOKEGRENADES_DEFAULT
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
        mag_2(30Rnd_556x45_Stanag_Tracer_Yellow),
		mag_2(9rnd_45acp_mag),
		mag_2(HandGrenade),
        mag_3(1Rnd_HE_Grenade_shell),
        SmokeShell,
        SMOKESHELLS_DEFAULT,
        1Rnd_Smoke_Grenade_shell,
        SMOKEGRENADES_DEFAULT
	};
	linkedItems[] =
	{
		V_TacVest_grn,
		H_Booniehat_eaf_hs,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_Booniehat_eaf_hs,
		DefaultManGuerillaLinkedItems
	};
};
class Opf_B_P_Soldier_lite_F: Opf_B_P_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_B_P_Soldier_lite_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_lite_F0;
	cost = 100000;
	uniformClass = Opf_U_B_P_Uniform_01_Shortsleeve_F;
	weapons[] =
	{
		Aegis_arifle_M4A1_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_M4A1_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30rnd_556x45_Stanag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30rnd_556x45_Stanag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_BandollierB_rgr,
		H_Booniehat_oli,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_BandollierB_rgr,
		H_Booniehat_oli,
		DefaultManGuerillaLinkedItems
	};
};
class Opf_B_P_Soldier_CQ_F: Opf_B_P_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_B_P_Soldier_CQ_F.jpg";
    scope = public;
    scopeCurator = public;
	cost = 100000;
    displayName = $STR_A3_A_CfgVehicles_B_Soldier_CQ_F0;
	uniformClass = Opf_U_B_P_FieldJacket_03_F;
    weapons[] =
	{
		sgun_Mp153_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		sgun_Mp153_black_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_4(4Rnd_12Gauge_Pellets),
        mag_4(4Rnd_12Gauge_Slug),
        HandGrenade,
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_4(4Rnd_12Gauge_Pellets),
        mag_4(4Rnd_12Gauge_Slug),
        HandGrenade,
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_BandollierB_rgr,
		H_PASGT_basic_olive_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_BandollierB_rgr,
		H_PASGT_basic_olive_F,
		DefaultManGuerillaLinkedItems
	};
};
class Opf_B_P_Sharpshooter_F: Opf_B_P_Soldier_Base_F
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
    scopeCurator = public;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[]={veh_infantry_sniper_s};
			speechPlural[]={veh_infantry_sniper_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_sniper_s;
	textPlural = $STR_A3_nameSound_veh_infantry_sniper_p;
	nameSound = veh_infantry_sniper_s;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_B_P_Sharpshooter_F.jpg";
	displayName = $STR_A3_cfgVehicles_B_Sharpshooter_F0;
	uniformClass = Opf_U_B_P_FieldJacket_01_F;
	weapons[] =
	{
		Opf_arifle_SLR_V_KHS_lxWS,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		Opf_arifle_SLR_V_KHS_lxWS,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_6(20rnd_762x51_slr_lxWS),
        HandGrenade,
		SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(20rnd_762x51_slr_lxWS),
        HandGrenade,
		SmokeShell
	};
	linkedItems[] =
	{
		V_TacChestRig_grn_F,
		H_Booniehat_oli,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacChestRig_grn_F,
		H_Booniehat_oli,
		DefaultManGuerillaLinkedItems
	};
};
class Opf_B_P_Soldier_universal_F: Opf_B_P_Soldier_F
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
class Opf_B_P_Soldier_unarmed_F: Opf_B_P_Soldier_F
{
	author = $STR_A3_A_Ravenholme;
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] =
	{
		V_TacVest_oli,
		H_Booniehat_oli,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacVest_oli,
		H_Booniehat_oli,
		DefaultManGuerillaLinkedItems
	};
	role = Unarmed;
	threat[] =
    {
        0.1,    // Soft
        0.1,    // Armor
        0.1     // Air
    };
};
class Opf_B_P_Soldier_TechSpec_F: Opf_B_P_engineer_F
{
    author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_B_P_Soldier_TechSpec_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_A_CfgVehicles_I_G_Soldier_TechSpec_F0;
    uavHacker = true;
    canDeactivateMines = false;
    cost = 150000;
	role = SpecialOperative;
    uniformClass = Opf_U_B_P_FieldJacket_02_F;
    backpack = B_Kitbag_rgr_G_TechSpec;
    weapons[] =
	{
		SMG_04_blk_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_04_blk_F,
        DefaultManWeapons
	};
    magazines[] =
    {
        mag_4(20rnd_460x30_mag_F),
        HandGrenade,
        SmokeShell
    };
    respawnMagazines[] =
    {
        mag_4(20rnd_460x30_mag_F),
        HandGrenade,
        SmokeShell
    };
    linkedItems[] =
    {
        H_MK7_oli_F,
        G_Bandanna_oli,
        V_TacVest_camo,
        B_UAVTerminal,
        DefaultManGuerillaLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_MK7_oli_F,
        G_Bandanna_oli,
        V_TacVest_camo,
        B_UAVTerminal,
        DefaultManGuerillaLinkedItems
    };
};
class Opf_B_P_Soldier_UAV_lxWS: Opf_B_P_Soldier_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_B_P_Soldier_UAV_lxWS.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "UAV Operator (IED Drone)";
	cost = 150000;
	role = SpecialOperative;
	backpack = Opf_B_P_UAV_02_IED_backpack_lxWS;
	linkedItems[] = 
	{
		H_PASGT_basic_olive_F,
		V_TacVest_camo,
		B_UAVTerminal,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] = 
	{
		H_PASGT_basic_olive_F,
		V_TacVest_camo,
		B_UAVTerminal,
		DefaultManGuerillaLinkedItems
	};
	weapons[] = 
	{
		Aegis_arifle_M4A1_F,
		DefaultManWeapons
	};
	respawnWeapons[] = 
	{
		Aegis_arifle_M4A1_F,
		DefaultManWeapons
	};
	magazines[] = 
	{
        mag_6(30rnd_556x45_Stanag),
        mag_2(HandGrenade)
	};
	respawnMagazines[] = 
	{
        mag_6(30rnd_556x45_Stanag),
        mag_2(HandGrenade)
	};
};
class Opf_B_P_Soldier_Advisor_F: Opf_B_P_Soldier_Base_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_B_P_Soldier_Advisor_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_A_CfgVehicles_Opf_B_P_Soldier_Advisor_F0;
	role = Grenadier;
	icon = iconManLeader;
    cost = 500000;
	camouflage = 1.4;
	uniformClass = Opf_U_B_P_Uniform_Advisor_F;
	backpack = B_Radiobag_01_wdl_F;
	weapons[] =
	{
		Opf_arifle_SPAR_01_blk_RCO_IRFL_F,
		hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		Opf_arifle_SPAR_01_blk_RCO_IRFL_F,
		hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
		mag_2(30Rnd_556x45_Stanag_Tracer_Yellow),
		mag_2(17rnd_9x21_mag),
        mag_2(HandGrenade),
		SmokeShell,
		SMOKESHELLS_DEFAULT
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
		mag_2(30Rnd_556x45_Stanag_Tracer_Yellow),
		mag_2(17rnd_9x21_mag),
        mag_2(HandGrenade),
        SmokeShell,
		SMOKESHELLS_DEFAULT
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_olive_F,
		H_HelmetB_Green,
		NVGoggles_INDEP,
		DefaultManLeaderLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_olive_F,
		H_HelmetB_Green,
		NVGoggles_INDEP,
		DefaultManLeaderLinkedItems
	};
};
class Opf_B_P_HeavyGunner_F: Opf_B_P_Soldier_AR_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\Opf_B_P_HeavyGunner_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_A3_cfgVehicles_B_HeavyGunner_F0;
	backpack = Opf_B_AssaultPack_flecktarn_Partisan_HG_F;
    weapons[] =
	{
		Opf_MMG_FNMAG_RDSH_FL_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Opf_MMG_FNMAG_RDSH_FL_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_2(Aegis_200Rnd_762x51_MAG_Yellow_F),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_2(Aegis_200Rnd_762x51_MAG_Yellow_F),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_TacChestRig_grn_F,
        H_Booniehat_flecktarn,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacChestRig_grn_F,
        H_Booniehat_flecktarn,
		DefaultManGuerillaLinkedItems
	};
};