// Arma 3
class B_Soldier_F: B_Soldier_base_F{};
// Arma 3 Atlas
class Atlas_B_L_Man_Base_F: B_Soldier_F
{
    scope = private;
    scopeCurator = private;
	faction = Atlas_BLU_L_F;
	genericNames = FrenchMen;
	identityTypes[] =
	{
		LanguageENGFRE_F,
		LanguageGRE_F,
		Head_NATO,
		Head_Greek,
		Head_Tanoan,
		G_NATO_tropic
	};
};
class Atlas_B_L_Soldier_base_F: Atlas_B_L_Man_Base_F
{
	uniformClass = U_B_CombatUniform_sgg;
};
class Atlas_B_L_Soldier_A_F: Atlas_B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_Soldier_A_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_A_F0;
    uniformClass = U_B_CombatUniform_sgg;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_Carryall_green_BLAmmo_F;
	weapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		hgun_G17_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		hgun_G17_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_12(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_12(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	identityTypes[] =
	{
		LanguageENGFRE_F,
		Head_NATO,
		Head_Greek,
		Head_Tanoan,
        G_NATO_recon
	};
};
class Atlas_B_L_Soldier_AAR_F: Atlas_B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_Soldier_AAA_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_O_SOLDIERU_AAR_F0;
    uniformClass = U_B_CombatUniform_sgg_tshirt;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_Kitbag_sgg_BLAAR_F;
	weapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		hgun_G17_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		hgun_G17_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	role = Assistant;
	identityTypes[] =
	{
		LanguageENGFRE_F,
		Head_NATO,
		Head_Greek,
		Head_Tanoan,
        G_NATO_recon
	};
};
class Atlas_B_L_Support_AMG_F: Atlas_B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_Support_AMG_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_AMG_F0;
    uniformClass = U_B_CombatUniform_sgg_tshirt;
	linkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_HMG_01_support_grn_F;
	weapons[] =
	{
		arifle_MSBS65_black_aco_pointer_F,
		hgun_G17_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_black_aco_pointer_F,
		hgun_G17_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
	identityTypes[] =
	{
		LanguageENGFRE_F,
		Head_NATO,
		Head_Greek,
		Head_Tanoan,
        G_NATO_recon
	};
};
class Atlas_B_L_Support_AMort_F: Atlas_B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_Support_AMort_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_AMort_F0;
    uniformClass = U_B_CombatUniform_sgg_tshirt;
	linkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_Mortar_01_support_grn_F;
	weapons[] =
	{
		arifle_MSBS65_black_aco_pointer_F,
		hgun_G17_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_black_aco_pointer_F,
		hgun_G17_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
	identityTypes[] =
	{
		LanguageENGFRE_F,
		Head_NATO,
		Head_Greek,
		Head_Tanoan,
        G_NATO_recon
	};
};
class Atlas_B_L_Soldier_AAA_F: Atlas_B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_Soldier_AAA_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_AAA_F0;
    uniformClass = U_B_CombatUniform_sgg;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_Carryall_green_AAA_F;
	weapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		hgun_G17_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		hgun_G17_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
	identityTypes[] =
	{
		LanguageENGFRE_F,
		Head_NATO,
		Head_Greek,
		Head_Tanoan,
        G_NATO_recon
	};
};
class Atlas_B_L_Soldier_AAT_F: Atlas_B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_Soldier_AAT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_AAT_F0;
    uniformClass = U_B_CombatUniform_sgg;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_Carryall_green_AAT_F;
	weapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		hgun_G17_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		hgun_G17_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 130000;
	role = Assistant;
	identityTypes[] =
	{
		LanguageENGFRE_F,
		Head_NATO,
		Head_Greek,
		Head_Tanoan,
        G_NATO_recon
	};
};
class Atlas_B_L_Soldier_AR_F: Atlas_B_L_Soldier_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_Soldier_AR_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_soldier_AR_F0;
    uniformClass = U_B_CombatUniform_sgg_tshirt;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		LMG_03_Hamr_Pointer_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_03_Hamr_Pointer_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_3(200Rnd_556x45_Box_Red_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_3(200Rnd_556x45_Box_Red_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
	};
	cost = 220000;
	icon = iconManMG;
	role = MachineGunner;
	threat[] = {1,0.1,0.3};
};
class Atlas_B_L_Medic_F: Atlas_B_L_Soldier_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_Medic_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_medic_F0;
    uniformClass = U_B_CombatUniform_sgg;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_AssaultPack_sgg_BLMedic_F;
	weapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC
	};
	attendant = true;
	camouflage = 1.6;
	icon = iconManMedic;
	picture = pictureHeal;
	role = CombatLifeSaver;
	identityTypes[] =
	{
		LanguageENGFRE_F,
		Head_NATO,
		Head_Greek,
		Head_Tanoan,
        G_NATO_recon
	};
};
class Atlas_B_L_Crew_F: Atlas_B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_Crew_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_crew_F0;
	uniformClass = U_B_CombatUniform_sgg_vest;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_Olive_F,
		H_HelmetCrew_I,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_Olive_F,
		H_HelmetCrew_I,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_black_aco_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_black_aco_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
    engineer = true;
	cost = 90000;
	role = Crewman;
	camouflage = 1.6;
};
class Atlas_B_L_Engineer_F: Atlas_B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_Engineer_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_engineer_F0;
	uniformClass = U_B_CombatUniform_sgg_vest;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_Kitbag_sgg_BLEng_F;
	weapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
	};
	camouflage = 1.6;
	canDeactivateMines = true;
	cost = 220000;
	detectSkill = 31;
	engineer = true;
    icon = iconManEngineer;
    picture = pictureRepair;
    role = Sapper;
	threat[] = {1,0.5,0.1};
	identityTypes[] =
	{
		LanguageENGFRE_F,
		Head_NATO,
		Head_Greek,
		Head_Tanoan,
        G_NATO_recon
	};
};
class Atlas_B_L_Soldier_Exp_F: Atlas_B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_Soldier_Exp_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_exp_F0;
	uniformClass = U_B_CombatUniform_sgg;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Olive_F,
		H_HelmetB_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Olive_F,
		H_HelmetB_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_Kitbag_sgg_IIExp_F;
	weapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		hgun_G17_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	canDeactivateMines = true;
	detectSkill = 38;
	cost = 93000;
	camouflage = 1.6;
	icon = iconManExplosive;
	picture = pictureExplosive;
	role = Sapper;
};
class Atlas_B_L_soldier_mine_F: Atlas_B_L_Soldier_Exp_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_soldier_mine_F.jpg";
	displayName = $STR_A3_B_T_soldier_mine_F0;
	backpack = B_Carryall_green_Mine;
};
class Atlas_B_L_Soldier_GL_F: Atlas_B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_Soldier_GL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
	uniformClass = U_B_CombatUniform_sgg;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Olive_F,
		H_HelmetB_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Olive_F,
		H_HelmetB_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_GL_black_ico_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_GL_black_ico_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	cost = 130000;
	role = Grenadier;
	threat[] = {1,0.3,0.1};
	identityTypes[] =
	{
		LanguageENGFRE_F,
		Head_NATO,
		Head_Greek,
		Head_Tanoan,
        G_NATO_recon
	};
};
class Atlas_B_L_Support_GMG_F: Atlas_B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_Support_GMG_F.jpg";
	scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_GMG_F0;
    uniformClass = U_B_CombatUniform_sgg_tshirt;
	linkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_GMG_01_Weapon_grn_F;
	weapons[] =
	{
		arifle_MSBS65_black_aco_pointer_F,
		hgun_G17_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_black_aco_pointer_F,
		hgun_G17_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
	identityTypes[] =
	{
		LanguageENGFRE_F,
		Head_NATO,
		Head_Greek,
		Head_Tanoan,
        G_NATO_recon
	};
};
class Atlas_B_L_Support_MG_F: Atlas_B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_Support_MG_F.jpg";
	scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_MG_F0;
    uniformClass = U_B_CombatUniform_sgg_tshirt;
	linkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_HMG_01_Weapon_grn_F;
	weapons[] =
	{
		arifle_MSBS65_black_aco_pointer_F,
		hgun_G17_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_black_aco_pointer_F,
		hgun_G17_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
	identityTypes[] =
	{
		LanguageENGFRE_F,
		Head_NATO,
		Head_Greek,
		Head_Tanoan,
        G_NATO_recon
	};
};
class Atlas_B_L_Support_Mort_F: Atlas_B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_Support_Mort_F.jpg";
	scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_Mort_F0;
    uniformClass = U_B_CombatUniform_sgg_tshirt;
	linkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_Mortar_01_Weapon_grn_F;
	weapons[] =
	{
		arifle_MSBS65_black_aco_pointer_F,
		hgun_G17_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_black_aco_pointer_F,
		hgun_G17_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
	identityTypes[] =
	{
		LanguageENGFRE_F,
		Head_NATO,
		Head_Greek,
		Head_Tanoan,
        G_NATO_recon
	};
};
class Atlas_B_L_Helicrew_F: Atlas_B_L_Soldier_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_Helicrew_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_helicrew_F0;
	uniformClass = U_B_CombatUniform_sgg;
    linkedItems[] =
    {
		V_CarrierRigKBT_01_Olive_F,
        H_CrewHelmetHeli_B,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
		V_CarrierRigKBT_01_Olive_F,
        H_CrewHelmetHeli_B,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
	weapons[] =
	{
		arifle_MSBS65_black_aco_f,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_black_aco_f,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
        SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
        SMOKESHELLS_BLUFOR
	};
	role = Crewman;
	identityTypes[] =
	{
		LanguageENGFRE_F,
		Head_NATO,
		Head_Greek,
		Head_Tanoan,
		G_NATO_pilot
	};
};
class Atlas_B_L_Helipilot_F: Atlas_B_L_Soldier_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_Helipilot_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Helipilot_F0;
	uniformClass = U_B_CombatUniform_sgg;
    linkedItems[] =
    {
		V_CarrierRigKBT_01_Olive_F,
        H_PilotHelmetHeli_B,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
		V_CarrierRigKBT_01_Olive_F,
        H_PilotHelmetHeli_B,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
	weapons[] =
	{
		SMG_03C_black,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_03C_black,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(50Rnd_570x28_SMG_03),
        SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(50Rnd_570x28_SMG_03),
        SMOKESHELLS_BLUFOR
	};
	cost = 93000;
	role = Crewman;
	camouflage = 2.0;
	identityTypes[] =
	{
		LanguageENGFRE_F,
		Head_NATO,
		Head_Greek,
		Head_Tanoan,
		G_NATO_pilot
	};
};
class Atlas_B_L_soldier_M_F: Atlas_B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_soldier_M_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_M_F0;
	uniformClass = U_B_CombatUniform_sgg;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_Mark_black_DMS_LP_BI_F,
		hgun_G17_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_Mark_black_DMS_LP_BI_F,
		hgun_G17_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	cost = 250000;
	role = Marksman;
	identityTypes[] =
	{
		LanguageENGFRE_F,
		Head_NATO,
		Head_Greek,
		Head_Tanoan,
        G_NATO_recon
	};
};
class Atlas_B_L_Soldier_AA_F: Atlas_B_L_Soldier_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_Soldier_AA_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_AA_F0;
	uniformClass = U_B_CombatUniform_sgg;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_Kitbag_sgg_BLAA_F;
	weapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		launch_B_Titan_olive_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		launch_B_Titan_olive_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	cost = 130000;
	threat[] = {0.8,0.1,1.0};
	camouflage = 1.5;
	icon = iconManAT;
	role = MissileSpecialist;
	secondaryAmmoCoef = 0.5;
};
class Atlas_B_L_Soldier_AT_F: Atlas_B_L_Soldier_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_Soldier_AT_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_soldier_AT_F0;
	uniformClass = U_B_CombatUniform_sgg;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_Kitbag_sgg_BLAT_F;
	weapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		launch_I_Titan_short_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		launch_I_Titan_short_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	cost = 130000;
	threat[] = {0.8,0.8,0.3};
	camouflage = 1.5;
	icon = iconManAT;
	role = MissileSpecialist;
	secondaryAmmoCoef = 0.5;
};
class Atlas_B_L_Officer_F: Atlas_B_L_Soldier_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_Officer_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_officer_F0;
	uniformClass = U_B_CombatUniform_sgg;
	linkedItems[] =
	{
		V_Rangemaster_belt,
		H_Beret_grn,
		ItemGPS,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Rangemaster_belt,
		H_Beret_grn,
		ItemGPS,
		DefaultManLinkedItems
	};
	weapons[] =
	{
		SMG_03C_black,
		hgun_G17_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		SMG_03C_black,
		hgun_G17_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(50Rnd_570x28_SMG_03),
		mag_2(17Rnd_9x21_Mag),
        SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(50Rnd_570x28_SMG_03),
		mag_2(17Rnd_9x21_Mag),
        SMOKESHELLS_BLUFOR
	};
    cost = 600000;
	camouflage = 1.6;
	icon = iconManOfficer;
	role = Rifleman;
	identityTypes[] =
	{
		LanguageENGFRE_F,
		Head_NATO,
		Head_Greek,
		Head_Tanoan,
		G_NATO_casual
	};
};
class Atlas_B_L_Soldier_Repair_F: Atlas_B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_Soldier_Repair_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_repair_F0;
	uniformClass = U_B_CombatUniform_sgg;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_AssaultPack_sgg_BLRepair_F;
	weapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		hgun_G17_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	engineer = true;
	detectSkill = 24;
	cost = 93000;
	camouflage = 1.6;
	icon = iconManEngineer;
	picture = pictureRepair;
	role = Sapper;
	identityTypes[] =
	{
		LanguageENGFRE_F,
		Head_NATO,
		Head_Greek,
		Head_Tanoan,
        G_NATO_casual
	};
};
class Atlas_B_L_Soldier_F: Atlas_B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		hgun_G17_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		hgun_G17_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	role = Rifleman;
};
class Atlas_B_L_Soldier_LAT_F: Atlas_B_L_Soldier_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_Soldier_LAT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_LAT_F0;
	uniformClass = U_B_CombatUniform_sgg;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_AssaultPack_sgg_BLLAT_F;
	weapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		launch_NLAW_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		launch_NLAW_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
		NLAW_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
		NLAW_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	cost = 130000;
	threat[] = {0.8,0.8,0.3};
	icon = iconManAT;
	role = MissileSpecialist;
	secondaryAmmoCoef = 0.5;
};
class Atlas_B_L_Soldier_Lite_F: Atlas_B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_Soldier_Lite_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_lite_F0;
	uniformClass = U_B_CombatUniform_sgg_vest;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_Olive_F,
		H_Beret_grn,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_Olive_F,
		H_Beret_grn,
		DefaultManLinkedItems
	};
	weapons[] =
	{
		arifle_MSBS65_black_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_black_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
        HandGrenade,
        SmokeShell
	};
	camouflage = 1.2;
	role = Rifleman;
	identityTypes[] =
	{
		LanguageENGFRE_F,
		Head_NATO,
		Head_Greek,
		Head_Tanoan,
        G_NATO_casual
	};
};
class Atlas_B_L_Soldier_CQ_F: Atlas_B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_Soldier_CQ_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_A_CfgVehicles_B_Soldier_CQ_F0;
	uniformClass = U_B_CombatUniform_sgg;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_UBS_black_ico_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_UBS_black_ico_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(6Rnd_12Gauge_Pellets),
        mag_3(6Rnd_12Gauge_Slug),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(6Rnd_12Gauge_Pellets),
        mag_3(6Rnd_12Gauge_Slug),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
    cost = 130000;
    threat[] = {1,0.3,0.1};
};
class Atlas_B_L_Soldier_SL_F: Atlas_B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_Soldier_SL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_SL_F0;
	uniformClass = U_B_CombatUniform_sgg_vest;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetSpecB_green,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetSpecB_green,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		hgun_G17_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		hgun_G17_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
		mag_2(30Rnd_65x39_caseless_msbs_mag_Tracer),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
		mag_2(30Rnd_65x39_caseless_msbs_mag_Tracer),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
	};
	cost = 250000;
	camouflage = 1.4;
	icon = iconManLeader;
	role = Grenadier;
};
class Atlas_B_L_Soldier_TL_F: Atlas_B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_Soldier_TL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_TL_F0;
	uniformClass = U_B_CombatUniform_sgg_vest;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Olive_F,
		H_HelmetSpecB_green,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Olive_F,
		H_HelmetSpecB_green,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_GL_black_ico_pointer_f,
		hgun_G17_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_GL_black_ico_pointer_f,
		hgun_G17_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
		mag_2(30Rnd_65x39_caseless_msbs_mag_Tracer),
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
		mag_4(30Rnd_65x39_caseless_msbs_mag),
		mag_2(30Rnd_65x39_caseless_msbs_mag_Tracer),
		mag_2(17Rnd_9x21_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
	};
	cost = 250000;
	camouflage = 1.4;
	icon = iconManLeader;
	role = Grenadier;
};
class Atlas_B_L_RadioOperator_F: Atlas_B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_RadioOperator_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	uniformClass = U_B_CombatUniform_sgg_vest;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_RadioBag_01_green_F;
	weapons[] =
    {
        arifle_MSBS65_black_ico_pointer_f,
        hgun_G17_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_black_ico_pointer_f,
        hgun_G17_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	role = RadioOperator;
	identityTypes[] =
	{
		LanguageENGFRE_F,
		Head_NATO,
		Head_Greek,
		Head_Tanoan,
        G_NATO_recon
	};
};
class Atlas_B_L_Survivor_F: Atlas_B_L_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_Survivor_F.jpg";
	displayName = $STR_A3_CfgVehicles_b_survivor_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	items[] = {};
	respawnItems[] = {};
	respawnMagazines[] = {};
	linkedItems[] = {};
	respawnLinkedItems[] = {};
	role = Unarmed;
};
class Atlas_B_L_Soldier_UAV_F: Atlas_B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_Soldier_UAV_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_B_SOLDIER_UAV_F0;
	uniformClass = U_B_CombatUniform_sgg_vest;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		B_UavTerminal,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		B_UavTerminal,
		NVGoggles_INDEP
	};
	backpack = B_UAV_01_backpack_F;
	weapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	uavHacker = true;
    cost = 150000;
	role = SpecialOperative;
	identityTypes[] =
	{
		LanguageENGFRE_F,
		Head_NATO,
		Head_Greek,
		Head_Tanoan,
        G_NATO_recon
	};
};
class Atlas_B_L_Soldier_universal_F: Atlas_B_L_Soldier_F
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
class Atlas_B_L_Soldier_unarmed_F: Atlas_B_L_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_green,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_green,
		DefaultManLinkedItems
	};
	role = Unarmed;
	threat[] = {0.1,0.1,0.1};
};