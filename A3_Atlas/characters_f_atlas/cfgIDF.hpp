// Arma 3 Atlas
class Atlas_I_I_Man_Base_F: I_soldier_F
{
    scope = private;
    scopeCurator = private;
	faction = Atlas_IND_I_F;
	genericNames = IDFMen;
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_IDF,
		G_IDF_default
	};
};
class Atlas_I_I_Soldier_Base_F: Atlas_I_I_Man_Base_F
{
	uniformClass = Atlas_U_I_I_CombatUniform_olive;
	class EventHandlers;
};
class Atlas_I_I_Soldier_A_F: Atlas_I_I_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Soldier_A_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_A_F0;
    uniformClass = Atlas_U_I_I_CombatUniform_shortsleeve_olive;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetI_I_01_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetI_I_01_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = B_Carryall_oli_IIAmmo_F;
	weapons[] =
	{
		arifle_TRG21_black_ACO_pointer_F,
		hgun_ACPC2_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG21_black_ACO_pointer_F,
		hgun_ACPC2_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_12(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_12(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	cost = 110000;
};
class Atlas_I_I_soldier_AAR_F: Atlas_I_I_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_soldier_AAR_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_O_SOLDIERU_AAR_F0;
	uniformClass = Atlas_U_I_I_CombatUniform_olive;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_Olive_F,
		H_HelmetI_I_01_cover_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_Olive_F,
		H_HelmetI_I_01_cover_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = B_ViperHarness_oli_IIAAR_F;
	weapons[] =
	{
		arifle_TRG21_black_ACO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_TRG21_black_ACO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
        mag_2(I_IR_Grenade),
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
        mag_2(I_IR_Grenade),
        SmokeShell
	};
	role = Assistant;
};
class Atlas_I_I_soldier_AAA_F: Atlas_I_I_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_soldier_AAA_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_AAA_F0;
	uniformClass = Atlas_U_I_I_CombatUniform_olive;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetI_I_01_cover_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetI_I_01_cover_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = I_Carryall_oli_AAA;
	weapons[] =
	{
		arifle_TRG21_black_ACO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_TRG21_black_ACO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class Atlas_I_I_soldier_AAT_F: Atlas_I_I_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_soldier_AAT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_AAT_F0;
	uniformClass = Atlas_U_I_I_CombatUniform_olive;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetI_I_01_cover_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetI_I_01_cover_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = I_Carryall_oli_AAT;
	weapons[] =
	{
		arifle_TRG21_black_ACO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_TRG21_black_ACO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 130000;
	role = Assistant;
};
class Atlas_I_I_support_AMG_F: Atlas_I_I_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_support_AMG_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_AMG_F0;
	uniformClass = Atlas_U_I_I_CombatUniform_shortsleeve_olive;
	linkedItems[] =
	{
		V_TacChestrig_oli_F,
		H_HelmetI_I_01_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_oli_F,
		H_HelmetI_I_01_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = Atlas_I_I_HMG_01_support_F;
	weapons[] =
	{
		arifle_TRG20_black_ACO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_TRG20_black_ACO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class Atlas_I_I_support_AMort_F: Atlas_I_I_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_support_AMort_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_AMort_F0;
	uniformClass = Atlas_U_I_I_CombatUniform_shortsleeve_olive;
	linkedItems[] =
	{
		V_TacChestrig_oli_F,
		H_HelmetI_I_01_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_oli_F,
		H_HelmetI_I_01_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = Atlas_I_I_Mortar_01_support_F;
	weapons[] =
	{
		arifle_TRG20_black_ACO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_TRG20_black_ACO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class Atlas_I_I_Soldier_AR_F: Atlas_I_I_Soldier_Base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Soldier_AR_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_soldier_AR_F0;
    uniformClass = Atlas_U_I_I_CombatUniform_shortsleeve_olive;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_Olive_F,
		H_HelmetI_I_01_cover_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_Olive_F,
		H_HelmetI_I_01_cover_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
    backpack = B_ViperLightHarness_oli_IIAR_F;
	weapons[] =
	{
		LMG_Zafir_black_MRCO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_Zafir_black_MRCO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_2(150Rnd_762x51_Box_Yellow),
        mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_2(150Rnd_762x51_Box_Yellow),
        mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
        mag_2(SmokeShell)
	};
	cost = 125000;
	icon = iconManMG;
	role = MachineGunner;
	threat[] = {1,0.1,0.3};
};
class Atlas_I_I_medic_F: Atlas_I_I_Soldier_Base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Medic_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_medic_F0;
    uniformClass = Atlas_U_I_I_CombatUniform_shortsleeve_olive;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetI_I_01_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetI_I_01_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = B_AssaultPack_khk_IIMedic_F;
	weapons[] =
	{
		arifle_TRG21_black_SRS_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG21_black_SRS_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC
	};
	attendant = true;
	camouflage = 1.6;
	icon = iconManMedic;
	picture = pictureHeal;
	role = CombatLifeSaver;
};
class Atlas_I_I_crew_F: Atlas_I_I_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_crew_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_crew_F0;
	uniformClass = U_Tank_olive_F;
	linkedItems[] =
	{
		V_TacVest_oli,
		H_HelmetCrew_I_I,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacVest_oli,
		H_HelmetCrew_I_I,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
	{
		arifle_TRG20_black_ACO_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG20_black_ACO_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
	camouflage = 1.6;
    engineer = true;
	cost = 90000;
	role = Crewman;
};
class Atlas_I_I_engineer_F: Atlas_I_I_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_engineer_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_engineer_F0;
	uniformClass = Atlas_U_I_I_CombatUniform_olive;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetI_I_01_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetI_I_01_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = B_Kitbag_sgg_IIEng_F;
	weapons[] =
	{
		arifle_TRG20_black_SRS_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG20_black_SRS_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_INDEP
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_INDEP
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
};
class Atlas_I_I_soldier_exp_F: Atlas_I_I_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_soldier_exp_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_exp_F0;
	uniformClass = Atlas_U_I_I_CombatUniform_shortsleeve_olive;
    linkedItems[] =
    {
		V_CarrierRigKBT_01_heavy_Olive_F,
		H_HelmetI_I_01_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Olive_F,
		H_HelmetI_I_01_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
    };
	backpack = B_Kitbag_sgg_IIExp_F;
    weapons[] =
    {
		arifle_TRG20_black_SRS_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG20_black_SRS_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
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
class Atlas_I_I_soldier_mine_F: Atlas_I_I_soldier_exp_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_soldier_mine_F.jpg";
	displayName = $STR_A3_B_T_soldier_mine_F0;
	backpack = B_Carryall_oli_Mine;
};
class Atlas_I_I_Soldier_GL_F: Atlas_I_I_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Soldier_GL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
	uniformClass = Atlas_U_I_I_CombatUniform_olive;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_Olive_F,
		H_HelmetI_I_01_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_Olive_F,
		H_HelmetI_I_01_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
    backpack = B_ViperHarness_oli_IIGL_F;
	weapons[] =
	{
		arifle_TRG21_GL_black_ACO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG21_GL_black_ACO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(9Rnd_45ACP_Mag),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(9Rnd_45ACP_Mag),
        mag_2(SmokeShell)
	};
	cost = 200000;
    role = Grenadier;
};
class Atlas_I_I_support_GMG_F: Atlas_I_I_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_support_GMG_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_GMG_F0;
	uniformClass = Atlas_U_I_I_CombatUniform_shortsleeve_olive;
	linkedItems[] =
	{
		V_TacChestrig_oli_F,
		H_HelmetI_I_01_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_oli_F,
		H_HelmetI_I_01_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = Atlas_I_I_GMG_01_weapon_F;
	weapons[] =
	{
		arifle_TRG20_black_ACO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_TRG20_black_ACO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class Atlas_I_I_support_MG_F: Atlas_I_I_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_support_MG_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_MG_F0;
	uniformClass = Atlas_U_I_I_CombatUniform_shortsleeve_olive;
	linkedItems[] =
	{
		V_TacChestrig_oli_F,
		H_HelmetI_I_01_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_oli_F,
		H_HelmetI_I_01_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = Atlas_I_I_HMG_01_weapon_F;
	weapons[] =
	{
		arifle_TRG20_black_ACO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_TRG20_black_ACO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class Atlas_I_I_support_Mort_F: Atlas_I_I_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_support_Mort_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_Mort_F0;
	uniformClass = Atlas_U_I_I_CombatUniform_shortsleeve_olive;
	linkedItems[] =
	{
		V_TacChestrig_oli_F,
		H_HelmetI_I_01_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_oli_F,
		H_HelmetI_I_01_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = Atlas_I_I_Mortar_01_weapon_F;
	weapons[] =
	{
		arifle_TRG20_black_ACO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_TRG20_black_ACO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class Atlas_I_I_helipilot_F: Atlas_I_I_Soldier_Base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_helipilot_F.jpg";
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_IDF,
		G_NATO_pilot
	};
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Helipilot_F0;
	uniformClass = U_Tank_olive_F;
    linkedItems[] =
    {
		V_TacVest_oli,
        H_PilotHelmetHeli_B,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
		V_TacVest_oli,
        H_PilotHelmetHeli_B,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
	weapons[] =
	{
		SMG_05_ACO_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_05_ACO_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Yellow),
        SMOKESHELLS_INDEP
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Yellow),
        SMOKESHELLS_INDEP
	};
	camouflage = 2;
	cost = 160000;
	role = Crewman;
};
class Atlas_I_I_helicrew_F: Atlas_I_I_Soldier_Base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_helicrew_F.jpg";
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_IDF,
		G_NATO_pilot
	};
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_helicrew_F0;
	uniformClass = U_Tank_olive_F;
    linkedItems[] =
    {
		V_TacVest_oli,
        H_CrewHelmetHeli_B,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
		V_TacVest_oli,
        H_CrewHelmetHeli_B,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
	weapons[] =
	{
		arifle_TRG20_black_ACO_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG20_black_ACO_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
        SMOKESHELLS_INDEP
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
        SMOKESHELLS_INDEP
	};
	camouflage = 2;
	cost = 80000;
	role = Crewman;
};
class Atlas_I_I_soldier_M_F: Atlas_I_I_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_soldier_M_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_M_F0;
	uniformClass = Atlas_U_I_I_CombatUniform_olive;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetI_I_01_cover_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetI_I_01_cover_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
	{
		arifle_TRG21_black_SOS_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_TRG21_black_SOS_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	cost = 250000;
	role = Marksman;
};
class Atlas_I_I_soldier_AA_F: Atlas_I_I_Soldier_Base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_soldier_AA_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_AA_F0;
	uniformClass = Atlas_U_I_I_CombatUniform_olive;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetI_I_01_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetI_I_01_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = B_Kitbag_sgg_IIAA_F;
	weapons[] =
	{
		arifle_TRG20_black_SRS_pointer_F,
		launch_B_Titan_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG20_black_SRS_pointer_F,
		launch_B_Titan_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(9Rnd_45ACP_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(9Rnd_45ACP_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
    cost = 200000;
	icon = iconManAT;
	role = MissileSpecialist;
	threat[] = {1,0.7,0.3};
};
class Atlas_I_I_soldier_AT_F: Atlas_I_I_Soldier_Base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_soldier_AT_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_soldier_AT_F0;
	uniformClass = Atlas_U_I_I_CombatUniform_olive;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetI_I_01_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetI_I_01_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = B_Kitbag_sgg_IIAT_F;
	weapons[] =
	{
		arifle_TRG20_black_SRS_pointer_F,
		launch_B_Titan_short_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG20_black_SRS_pointer_F,
		launch_B_Titan_short_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(9Rnd_45ACP_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(9Rnd_45ACP_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
    cost = 190000;
	icon = iconManAT;
	role = MissileSpecialist;
	threat[] = {1,0.7,0.3};
};
class Atlas_I_I_officer_F: Atlas_I_I_Soldier_Base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_officer_F.jpg";
    scope = public;
    scopeCurator = public;
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_IDF,
		G_NATO_casual
	};
    displayName = $STR_B_officer_F0;
	uniformClass = Atlas_U_I_I_OfficerUniform;
	linkedItems[] =
	{
		V_Rangemaster_belt,
		H_Headset_light,
		ItemGPS,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Rangemaster_belt,
		H_Headset_light,
		ItemGPS,
		DefaultManLinkedItems
	};
	weapons[] =
	{
		arifle_TRG20_black_F,
		hgun_Mk26_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_TRG20_black_F,
		hgun_Mk26_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
		mag_2(7Rnd_127x33_Mag),
        SMOKESHELLS_INDEP
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
		mag_2(7Rnd_127x33_Mag),
        SMOKESHELLS_INDEP
	};
	camouflage = 1.6;
    cost = 600000;
	icon = iconManOfficer;
    role = Rifleman;
};
class Atlas_I_I_Soldier_repair_F: Atlas_I_I_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Soldier_repair_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_Soldier_repair_F0;
	uniformClass = Atlas_U_I_I_CombatUniform_shortsleeve_olive;
    linkedItems[] =
    {
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetI_I_01_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetI_I_01_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
    };
	backpack = B_AssaultPack_khk_IIRepair_F;
    weapons[] =
    {
		arifle_TRG20_black_SRS_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG20_black_SRS_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
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
};
class Atlas_I_I_Soldier_F: Atlas_I_I_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	uniformClass = Atlas_U_I_I_CombatUniform_olive;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetI_I_01_cover_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetI_I_01_cover_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
	{
		arifle_TRG21_black_MRCO_pointer_F,
		hgun_ACPC2_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG21_black_MRCO_pointer_F,
		hgun_ACPC2_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	cost = 100000;
};
class Atlas_I_I_Soldier_LAT_F: Atlas_I_I_Soldier_Base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Soldier_LAT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_LAT_F0;
	uniformClass = Atlas_U_I_I_CombatUniform_olive;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetI_I_01_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetI_I_01_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = B_AssaultPack_khk_IILAT_F;
	weapons[] =
	{
		arifle_TRG21_black_SRS_pointer_F,
		launch_MRAWS_black_rail_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG21_black_SRS_pointer_F,
		launch_MRAWS_black_rail_F,
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(9Rnd_45ACP_Mag),
		MRAWS_HEAT_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_Stanag),
		mag_2(9Rnd_45ACP_Mag),
		MRAWS_HEAT_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	cost = 130000;
	icon = iconManAT;
	role = MissileSpecialist;
	secondaryAmmoCoef = 0.5;
	threat[] = {0.8,0.8,0.3};
};
class Atlas_I_I_Soldier_lite_F: Atlas_I_I_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Soldier_lite_F.jpg";
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_IDF,
		G_NATO_casual
	};
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_lite_F0;
	uniformClass = Atlas_U_I_I_CombatUniform_shortsleeve_olive;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_Olive_F,
		H_Headset_light,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_Olive_F,
		H_Headset_light,
		DefaultManLinkedItems
	};
	weapons[] =
	{
		arifle_TRG20_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG20_black_F,
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
	camouflage = 1.2;
	role = Rifleman;
};
class Atlas_I_I_Soldier_CQ_F: Atlas_I_I_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Soldier_CQ_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_A_CfgVehicles_B_Soldier_CQ_F0;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetI_I_01_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetI_I_01_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
    weapons[] =
    {
        sgun_M4_ACO_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        sgun_M4_ACO_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_3(8Rnd_12Gauge_Pellets),
        mag_3(8Rnd_12Gauge_Slug),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_3(8Rnd_12Gauge_Pellets),
        mag_3(8Rnd_12Gauge_Slug),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    cost = 130000;
    threat[] = {1,0.3,0.1};
};
class Atlas_I_I_Soldier_SL_F: Atlas_I_I_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Soldier_SL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_SL_F0;
	uniformClass = Atlas_U_I_I_CombatUniform_shortsleeve_olive;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetI_I_01_cover_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetI_I_01_cover_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
	{
		arifle_TRG21_black_MRCO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_TRG21_black_MRCO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
		mag_2(30Rnd_556x45_Stanag_Tracer_Yellow),
		mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        SmokeShell,
        SMOKESHELLS_INDEP
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
		mag_2(30Rnd_556x45_Stanag_Tracer_Yellow),
		mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        SmokeShell,
        SMOKESHELLS_INDEP
	};
	camouflage = 1.4;
    cost = 500000;
	icon = iconManLeader;
	role = Grenadier;
};
class Atlas_I_I_Soldier_TL_F: Atlas_I_I_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Soldier_TL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_TL_F0;
	uniformClass = Atlas_U_I_I_CombatUniform_olive;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Olive_F,
		H_HelmetI_I_01_cover_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Olive_F,
		H_HelmetI_I_01_cover_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
	{
		arifle_TRG21_GL_black_MRCO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_TRG21_GL_black_MRCO_pointer_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
		mag_2(30Rnd_556x45_Stanag_Tracer_Yellow),
		mag_2(9Rnd_45ACP_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_INDEP,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_INDEP
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_Stanag),
		mag_2(30Rnd_556x45_Stanag_Tracer_Yellow),
		mag_2(9Rnd_45ACP_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_INDEP,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_INDEP
	};
	camouflage = 1.4;
    cost = 250000;
	icon = iconManLeader;
	role = Grenadier;
};
class Atlas_I_I_Soldier_UAV_F: Atlas_I_I_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Soldier_UAV_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_B_SOLDIER_UAV_F0;
    uniformClass = Atlas_U_I_I_CombatUniform_olive;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetI_I_01_F,
        I_UavTerminal,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetI_I_01_F,
        I_UavTerminal,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = Atlas_I_I_UAV_01_backpack_F;
	weapons[] =
    {
		arifle_TRG20_black_ACO_pointer_F,
		hgun_ACPC2_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_TRG20_black_ACO_pointer_F,
		hgun_ACPC2_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	uavHacker = true;
    cost = 150000;
	role = SpecialOperative;
};
class Atlas_I_I_soldier_UAV_06_F: Atlas_I_I_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_soldier_UAV_06_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_F0;
	backpack = Atlas_I_I_UAV_06_backpack_F;
};
class Atlas_I_I_soldier_UAV_06_medical_F: Atlas_I_I_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_soldier_UAV_06_medical_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_medical_F0;
	backpack = Atlas_I_I_UAV_06_medical_backpack_F;
};
class Atlas_I_I_soldier_UGV_02_Demining_F: Atlas_I_I_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_soldier_UGV_02_Demining_F.jpg";
	displayName = $STR_A3_C_B_soldier_UGV_02_Demining_F0;
	backpack = Atlas_I_I_UGV_02_Demining_backpack_F;
};
class Atlas_I_I_Soldier_CBRN_F: Atlas_I_I_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Soldier_CBRN_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_Soldier_CBRN_F0;
	uniformClass = Atlas_U_I_I_CBRN_Suit_01_Olive_F;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetI_I_01_F,
		G_RegulatorMask_F,
		DefaultManCbrnLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetI_I_01_F,
		G_RegulatorMask_F,
		DefaultManCbrnLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = B_CombinationUnitRespirator_01_F;
	weapons[] =
    {
        arifle_TRG20_black_ACO_flash_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_TRG20_black_ACO_flash_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
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
class Atlas_I_I_RadioOperator_F: Atlas_I_I_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_RadioOperator_F.jpg";
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	uniformClass = Atlas_U_I_I_CombatUniform_shortsleeve_olive;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetI_I_01_cover_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetI_I_01_cover_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = B_RadioBag_01_sage_F;
	weapons[] =
    {
        arifle_TRG21_black_SRS_pointer_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_TRG21_black_SRS_pointer_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class Atlas_I_I_Soldier_diver_base: Atlas_I_I_Soldier_Base_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {veh_infantry_diver_s};
            speechPlural[] = {veh_infantry_diver_p};
        };
    };
    textSingular = $STR_A3_nameSound_veh_infantry_diver_s;
    textPlural = $STR_A3_nameSound_veh_infantry_diver_p;
    nameSound = veh_infantry_diver_s;
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_IDF,
		G_IDF_diver
	};
	uniformClass = Atlas_U_I_I_Wetsuit;
    vehicleClass = MenDiver;
	editorSubcategory = EdSubcat_Personnel_SpecialForces;
	role = SpecialOperative;
	camouflage = 2;
	canHideBodies = false;
};
class Atlas_I_I_diver_F: Atlas_I_I_Soldier_diver_base
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_diver_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_diver_F0;
	linkedItems[] =
	{
		V_RebreatherI_I,
		G_I_I_Diving,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_RebreatherI_I,
		G_I_I_Diving,
		DefaultManLinkedItems
	};
	weapons[] =
	{
		arifle_SDAR_F,
		hgun_ACPC2_snds_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SDAR_F,
		hgun_ACPC2_snds_F,
		DefaultManWeapons
	};
    magazines[] =
    {
        mag_3(20Rnd_556x45_Stanag),
        mag_3(20Rnd_556x45_UW_mag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_3(20Rnd_556x45_Stanag),
        mag_3(20Rnd_556x45_UW_mag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    cost = 70000;
};
class Atlas_I_I_diver_exp_F: Atlas_I_I_Soldier_diver_base
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_diver_exp_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_diver_exp_F0;
	backpack = B_AssaultPack_blk_DiverExp;
	linkedItems[] =
	{
		V_RebreatherI_I,
		G_I_I_Diving,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_RebreatherI_I,
		G_I_I_Diving,
		DefaultManLinkedItems
	};
	weapons[] =
	{
		arifle_SDAR_F,
		hgun_ACPC2_snds_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SDAR_F,
		hgun_ACPC2_snds_F,
		DefaultManWeapons
	};
    magazines[] =
    {
        mag_3(20Rnd_556x45_Stanag),
        mag_3(20Rnd_556x45_UW_mag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_3(20Rnd_556x45_Stanag),
        mag_3(20Rnd_556x45_UW_mag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	canDeactivateMines = true;
    cost = 90000;
	icon = iconManExplosive;
};
class Atlas_I_I_diver_TL_F: Atlas_I_I_Soldier_diver_base
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_diver_TL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_diver_TL_F0;
	linkedItems[] =
	{
		V_RebreatherI_I,
		G_I_I_Diving,
		ItemGPS,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_RebreatherI_I,
		G_I_I_Diving,
		ItemGPS,
		DefaultManLinkedItems
	};
    weapons[] =
    {
        arifle_SDAR_F,
        hgun_ACPC2_snds_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_SDAR_F,
        hgun_ACPC2_snds_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_3(20Rnd_556x45_Stanag),
        mag_3(20Rnd_556x45_UW_mag),
        mag_2(9Rnd_45ACP_Mag),
        SmokeShell,
        SMOKESHELLS_INDEP,
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_3(20Rnd_556x45_Stanag),
        mag_3(20Rnd_556x45_UW_mag),
        mag_2(9Rnd_45ACP_Mag),
        SmokeShell,
        SMOKESHELLS_INDEP,
        mag_2(Chemlight_green)
    };
    cost = 430000;
	icon = iconManLeader;
};
class Atlas_I_I_Soldier_recon_base: Atlas_I_I_Soldier_Base_F
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
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_IDF,
		G_IDF_default
	};
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
	canHideBodies = false;
    icon = iconManRecon;
	role = Rifleman;
	camouflage = 0.6;
	detectSkill = 18;
};
class Atlas_I_I_recon_AR_F: Atlas_I_I_Soldier_recon_base
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_recon_AR_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_C_O_R_recon_AR_F0;
	uniformClass = Atlas_U_I_I_CombatUniform_shortsleeve_olive;
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
		V_TacVest_blk,
		H_HelmetSpecter_black_headset_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacVest_blk,
		H_HelmetSpecter_black_headset_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
        LMG_Zafir_black_MRCO_pointer_snds_F,
        hgun_ACPC2_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        LMG_Zafir_black_MRCO_pointer_snds_F,
        hgun_ACPC2_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_4(150Rnd_762x51_Box_Yellow),
        mag_2(9Rnd_45ACP_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_4(150Rnd_762x51_Box_Yellow),
        mag_2(9Rnd_45ACP_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	cost = 220000;
	icon = iconManMG;
	role = MachineGunner;
    threat[] = {1,0.1,0.3};
};
class Atlas_I_I_recon_exp_F: Atlas_I_I_Soldier_recon_base
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_recon_exp_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_recon_exp_F0;
	uniformClass = Atlas_U_I_I_CombatUniform_shortsleeve_olive;
	backpack = B_Kitbag_blk_IIReconExp_F;
	linkedItems[] =
	{
		V_TacVest_blk,
		H_Watchcap_khk_hs,
		G_Shemag_tan,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacVest_blk,
		H_Watchcap_khk_hs,
		G_Shemag_tan,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
        arifle_TRG20_black_SRS_pointer_snds_F,
        hgun_ACPC2_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_TRG20_black_SRS_pointer_snds_F,
        hgun_ACPC2_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
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
class Atlas_I_I_recon_GL_F: Atlas_I_I_Soldier_recon_base
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_recon_GL_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_C_O_R_recon_GL_F0;
	linkedItems[] =
	{
		V_TacVest_blk,
		H_HelmetSpecter_black_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacVest_blk,
		H_HelmetSpecter_black_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
        arifle_TRG21_GL_black_MRCO_pointer_snds_F,
        hgun_ACPC2_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_TRG21_GL_black_MRCO_pointer_snds_F,
        hgun_ACPC2_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
	cost = 200000;
	role = Grenadier;
};
class Atlas_I_I_recon_JTAC_F: Atlas_I_I_Soldier_recon_base
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_recon_JTAC_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_recon_JTAC_F0;
	uniformClass = Atlas_U_I_I_CombatUniform_shortsleeve_olive;
	backpack = B_RadioBag_01_black_F;
	linkedItems[] =
	{
		V_TacVest_blk,
		H_HelmetSpecter_black_headset_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacVest_blk,
		H_HelmetSpecter_black_headset_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
        arifle_TRG20_black_SRS_pointer_snds_F,
        hgun_ACPC2_snds_F,
        DefaultManWeapons,
        Laserdesignator_03
    };
    respawnWeapons[] =
    {
        arifle_TRG20_black_SRS_pointer_snds_F,
        hgun_ACPC2_snds_F,
        DefaultManWeapons,
        Laserdesignator_03
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        mag_2(I_IR_Grenade),
        Laserbatteries,
        SmokeShell,
        SMOKESHELLS_INDEP,
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        mag_2(I_IR_Grenade),
        Laserbatteries,
        SmokeShell,
        SMOKESHELLS_INDEP,
        mag_2(Chemlight_green)
    };
	role = SpecialOperative;
};
class Atlas_I_I_recon_M_F: Atlas_I_I_Soldier_recon_base
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_sniper_s};
			speechPlural[] = {veh_infantry_sniper_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_sniper_s;
	textPlural = $STR_A3_nameSound_veh_infantry_sniper_p;
	nameSound = veh_infantry_sniper_s;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_recon_M_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_recon_M_F0;
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
		V_TacVest_blk,
		H_Booniehat_mgrn_hs,
		G_Bandanna_oli,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacVest_blk,
		H_Booniehat_mgrn_hs,
		G_Bandanna_oli,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
        arifle_TRG21_black_SOS_pointer_snds_F,
        hgun_ACPC2_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_TRG21_black_SOS_pointer_snds_F,
        hgun_ACPC2_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_8(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	cost = 250000;
    threat[] = {1,0.1,0.3};
	role = Marksman;
	primaryAmmoCoef = 0.2;
	secondaryAmmoCoef = 0.05;
	handgunAmmoCoef = 0.1;
};
class Atlas_I_I_recon_medic_F: Atlas_I_I_Soldier_recon_base
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_recon_medic_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_recon_medic_F0;
	uniformClass = Atlas_U_I_I_CombatUniform_shortsleeve_olive;
	backpack = B_AssaultPack_blk_IIReconMedic_F;
	linkedItems[] =
	{
		V_TacVest_blk,
		H_HelmetSpecter_black_headset_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacVest_blk,
		H_HelmetSpecter_black_headset_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
        arifle_TRG20_black_SRS_pointer_snds_F,
        hgun_ACPC2_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_TRG20_black_SRS_pointer_snds_F,
        hgun_ACPC2_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_green)
    };
	attendant = true;
	icon = iconManMedic;
	picture = pictureHeal;
	role = CombatLifeSaver;
    threat[] = {1,0.1,0.3};
};
class Atlas_I_I_recon_F: Atlas_I_I_Soldier_recon_base
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_recon_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_recon_F0;
	uniformClass = Atlas_U_I_I_CombatUniform_shortsleeve_olive;
	linkedItems[] =
	{
		V_TacVest_blk,
		H_HelmetSpecter_black_headset_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacVest_blk,
		H_HelmetSpecter_black_headset_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
        arifle_TRG20_black_MRCO_pointer_snds_F,
        hgun_ACPC2_snds_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_TRG20_black_MRCO_pointer_snds_F,
        hgun_ACPC2_snds_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_10(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
};
class Atlas_I_I_recon_LAT_F: Atlas_I_I_Soldier_recon_base
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_recon_LAT_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_recon_LAT_F0;
	backpack = B_AssaultPack_blk_IIReconLAT_F;
	linkedItems[] =
	{
		V_TacVest_blk,
		H_HelmetSpecter_black_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacVest_blk,
		H_HelmetSpecter_black_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
        arifle_TRG20_black_SRS_pointer_snds_F,
		launch_MRAWS_black_rail_F,
        hgun_ACPC2_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_TRG20_black_SRS_pointer_snds_F,
		launch_MRAWS_black_rail_F,
        hgun_ACPC2_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
		MRAWS_HEAT_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
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
class Atlas_I_I_recon_TL_F: Atlas_I_I_Soldier_recon_base
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_recon_TL_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_recon_TL_F0;
	uniformClass = Atlas_U_I_I_CombatUniform_shortsleeve_olive;
	linkedItems[] =
	{
		V_TacVest_blk,
		H_HelmetSpecter_black_headset_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacVest_blk,
		H_HelmetSpecter_black_headset_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
        arifle_TRG21_black_MRCO_pointer_snds_F,
        hgun_ACPC2_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_TRG21_black_MRCO_pointer_snds_F,
        hgun_ACPC2_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_4(30Rnd_556x45_Stanag),
        mag_2(30Rnd_556x45_Stanag_Tracer_Yellow),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_INDEP,
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_556x45_Stanag),
        mag_2(30Rnd_556x45_Stanag_Tracer_Yellow),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_INDEP,
        mag_2(Chemlight_green)
    };
	cost = 250000;
	icon = iconManLeader;
	role = Rifleman;
    threat[] = {1,0.1,0.3};
};
class Atlas_I_I_Soldier_sniper_base: Atlas_I_I_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {veh_infantry_sniper_s};
            speechPlural[] = {veh_infantry_sniper_p};
        };
    };
    textSingular = $STR_A3_nameSound_veh_infantry_sniper_s;
    textPlural = $STR_A3_nameSound_veh_infantry_sniper_p;
    nameSound = veh_infantry_sniper_s;
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_IDF,
		G_NATO_sniper
	};
	uniformClass = Atlas_U_I_I_GhillieSuit;
    vehicleClass = MenSniper;
	editorSubcategory = EdSubcat_Personnel_SpecialForces;
	items[] =
	{
		FirstAidKit,
		optic_tws_sniper,
        muzzle_snds_408_black
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_tws_sniper,
        muzzle_snds_408_black
	};
	canHideBodies = false;
	role = Marksman;
	primaryAmmoCoef = 0.2;
	secondaryAmmoCoef = 0.05;
	handgunAmmoCoef = 0.1;
};
class Atlas_I_I_spotter_F: Atlas_I_I_Soldier_sniper_base
{
	author = $STR_A3_AveryTheKitty;
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_spotter_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_spotter_F0;
	items[] =
	{
		FirstAidKit,
		optic_tws
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_tws
	};
	linkedItems[] =
	{
		V_TacChestrig_oli_F,
        ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_oli_F,
        ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
    weapons[] =
    {
        arifle_TRG21_black_MRCO_pointer_snds_F,
        hgun_ACPC2_snds_F,
        DefaultManWeapons,
        Laserdesignator_03
    };
    respawnWeapons[] =
    {
        arifle_TRG21_black_MRCO_pointer_snds_F,
        hgun_ACPC2_snds_F,
        DefaultManWeapons,
        Laserdesignator_03
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(I_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(I_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	cost = 100000;
	camouflage = 0.6;
	role = Marksman;
	threat[] = {0.8,0.1,0.1};
};
class Atlas_I_I_sniper_F: Atlas_I_I_Soldier_sniper_base
{
	author = $STR_A3_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_sniper_s};
			speechPlural[] = {veh_infantry_sniper_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_sniper_s;
	textPlural = $STR_A3_nameSound_veh_infantry_sniper_p;
	nameSound = veh_infantry_sniper_s;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_sniper_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_sniper_F0;
	linkedItems[] =
	{
		V_TacChestrig_oli_F,
        ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_oli_F,
        ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
	{
		srifle_LRR_LRPS_F,
		hgun_ACPC2_snds_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		srifle_LRR_LRPS_F,
		hgun_ACPC2_snds_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
        mag_6(7Rnd_408_Mag),
        mag_2(5Rnd_127x108_APDS_Mag),
        mag_2(9Rnd_45ACP_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(7Rnd_408_Mag),
        mag_2(9Rnd_45ACP_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	camouflage = 0.6;
	role = Marksman;
};
class Atlas_I_I_Survivor_F: Atlas_I_I_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Survivor_F.jpg";
    displayName = $STR_A3_CfgVehicles_b_survivor_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	items[] = {};
	respawnItems[] = {};
	linkedItems[] = {};
	respawnLinkedItems[] = {};
	role = Unarmed;
};
class Atlas_I_I_Soldier_universal_F: Atlas_I_I_Soldier_F
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
	displayName = $STR_A3_CfgVehicles_b_soldier_universal_f_displayName;
	attendant = true;
	engineer = true;
	canDeactivateMines = true;
	role = Rifleman;
};
class Atlas_I_I_Soldier_unarmed_F: Atlas_I_I_Soldier_F
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
		H_HelmetI_I_01_cover_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetI_I_01_cover_F,
		DefaultManLinkedItems
	};
	role = Unarmed;
	threat[] = {0.1,0.1,0.1};
};
class Atlas_I_I_Fighter_Pilot_F: Atlas_I_I_Soldier_Base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Fighter_Pilot_F.jpg";
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_IDF,
		G_NATO_pilot
	};
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_B_Fighter_Pilot_name;
	uniformClass = U_Tank_olive_F;
    linkedItems[] =
    {
		V_TacVest_oli,
        H_PilotHelmetFighter_I_I,
        DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
		V_TacVest_oli,
        H_PilotHelmetFighter_I_I,
        DefaultManLinkedItems
    };
	weapons[] =
	{
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		hgun_ACPC2_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_2(9Rnd_45ACP_Mag),
        SMOKESHELLS_INDEP
	};
	respawnMagazines[] =
	{
		mag_2(9Rnd_45ACP_Mag),
        SMOKESHELLS_INDEP
	};
	camouflage = 2;
    cost = 165000;
    role = Crewman;
};

class Atlas_I_I_Pilot_F: Atlas_I_I_Soldier_Base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Pilot_F.jpg";
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_IDF,
		G_NATO_pilot
	};
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Pilot_F0;
	uniformClass = U_Tank_olive_F;
	backpack = B_Parachute;
    linkedItems[] =
    {
		V_TacVest_oli,
        H_PilotHelmetHeli_B,
        DefaultManLinkedItems,
		NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
		V_TacVest_oli,
        H_PilotHelmetHeli_B,
        DefaultManLinkedItems,
		NVGoggles_OPFOR
    };
	weapons[] =
	{
		SMG_05_ACO_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_05_ACO_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Yellow),
        SMOKESHELLS_INDEP
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Yellow),
        SMOKESHELLS_INDEP
	};
	camouflage = 2;
    cost = 165000;
    role = Crewman;
};

/* BLUFOR IDF 
class Atlas_B_I_Soldier_Base_F: Atlas_I_I_Soldier_Base_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_Soldier_A_F: Atlas_I_I_Soldier_A_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;  
};
class Atlas_B_I_soldier_AAR_F: Atlas_I_I_soldier_AAR_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_soldier_AAA_F: Atlas_I_I_soldier_AAA_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_soldier_AAT_F: Atlas_I_I_soldier_AAT_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_support_AMG_F: Atlas_I_I_support_AMG_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_support_AMort_F: Atlas_I_I_support_AMort_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_Soldier_AR_F: Atlas_I_I_Soldier_AR_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_medic_F: Atlas_I_I_medic_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_crew_F: Atlas_I_I_crew_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_engineer_F: Atlas_I_I_engineer_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_soldier_exp_F: Atlas_I_I_soldier_exp_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_soldier_mine_F: Atlas_I_I_soldier_mine_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_Soldier_GL_F: Atlas_I_I_Soldier_GL_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_support_GMG_F: Atlas_I_I_support_GMG_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_support_MG_F: Atlas_I_I_support_MG_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_support_Mort_F: Atlas_I_I_support_Mort_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_helipilot_F: Atlas_I_I_helipilot_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_helicrew_F: Atlas_I_I_helicrew_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_soldier_M_F: Atlas_I_I_soldier_M_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_soldier_AA_F: Atlas_I_I_soldier_AA_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_soldier_AT_F: Atlas_I_I_soldier_AT_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_officer_F: Atlas_I_I_officer_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_Soldier_repair_F: Atlas_I_I_Soldier_repair_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_Soldier_F: Atlas_I_I_Soldier_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_Soldier_LAT_F: Atlas_I_I_Soldier_LAT_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_Soldier_lite_F: Atlas_I_I_Soldier_lite_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_Soldier_CQ_F: Atlas_I_I_Soldier_CQ_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_Soldier_SL_F: Atlas_I_I_Soldier_SL_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_Soldier_TL_F: Atlas_I_I_Soldier_TL_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_Soldier_UAV_F: Atlas_I_I_Soldier_UAV_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_soldier_UAV_06_F: Atlas_I_I_soldier_UAV_06_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_soldier_UAV_06_medical_F: Atlas_I_I_soldier_UAV_06_medical_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_soldier_UGV_02_Demining_F: Atlas_I_I_soldier_UGV_02_Demining_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_Soldier_CBRN_F: Atlas_I_I_Soldier_CBRN_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_RadioOperator_F: Atlas_I_I_RadioOperator_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_Soldier_diver_base: Atlas_I_I_Soldier_diver_base
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_diver_F: Atlas_I_I_diver_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_diver_exp_F: Atlas_I_I_diver_exp_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_diver_TL_F: Atlas_I_I_diver_TL_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_Soldier_recon_base: Atlas_I_I_Soldier_recon_base
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_recon_AR_F: Atlas_I_I_recon_AR_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_recon_exp_F: Atlas_I_I_recon_exp_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_recon_GL_F: Atlas_I_I_recon_GL_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_recon_JTAC_F: Atlas_I_I_recon_JTAC_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_recon_M_F: Atlas_I_I_recon_M_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_recon_medic_F: Atlas_I_I_recon_medic_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_recon_F: Atlas_I_I_recon_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_recon_LAT_F: Atlas_I_I_recon_LAT_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_recon_TL_F: Atlas_I_I_recon_TL_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_Soldier_sniper_base: Atlas_I_I_Soldier_sniper_base
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_spotter_F: Atlas_I_I_spotter_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_sniper_F: Atlas_I_I_sniper_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_Survivor_F: Atlas_I_I_Survivor_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_Soldier_universal_F: Atlas_I_I_Soldier_universal_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_Soldier_unarmed_F: Atlas_I_I_Soldier_unarmed_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
class Atlas_B_I_Fighter_Pilot_F: Atlas_I_I_Fighter_Pilot_F
{
	faction = Atlas_BLU_I_F;
    side = TWest;
};
*/