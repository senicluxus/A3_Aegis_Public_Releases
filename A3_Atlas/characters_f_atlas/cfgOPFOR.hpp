// Arma 3
class O_Soldier_base_F: SoldierEB
{
	class EventHandlers;
};
class O_Soldier_F: O_Soldier_base_F{};
class O_officer_F;
class O_Soldier_lite_F;
class O_Soldier_GL_F;
class O_Soldier_AR_F;
class O_Soldier_SL_F;
class O_Soldier_TL_F;
class O_soldier_M_F;
class O_Soldier_LAT_F;
class O_medic_F;
class O_soldier_repair_F;
class O_soldier_exp_F;
class O_helipilot_F;
class O_Soldier_A_F;
class O_Soldier_AT_F;
class O_Soldier_AA_F;
class O_engineer_F;
class O_crew_F;
class O_Pilot_F;
class O_helicrew_F;
class O_soldier_PG_F;
class O_soldier_UAV_F;
class O_spotter_F;
class O_sniper_F;
class O_recon_F;
class O_recon_M_F;
class O_recon_LAT_F;
class O_recon_medic_F;
class O_recon_exp_F;
class O_recon_JTAC_F;
class O_recon_TL_F;
class O_Soldier_AAR_F;
class O_Soldier_AAT_F;
class O_Soldier_AAA_F;
class O_support_MG_F;
class O_support_GMG_F;
class O_support_Mort_F;
class O_support_AMG_F;
class O_support_AMort_F;
// Arma 3 Marksman
class O_ghillie_base_F;
// Arma 3 Jets
class O_Fighter_Pilot_F;
// Arma 3 Tacops
class O_A_officer_F;
// Arma 3 Tanks
class O_Soldier_HAT_F;
class O_Soldier_AHAT_F;
// Arma 3 Aegis
class O_Soldier_CQ_F;
class O_recon_CQ_F;
class O_recon_AR_F;
class O_recon_GL_F;
// Arma 3 Atlas
class Atlas_O_W_Soldier_A_F: O_Soldier_A_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Soldier_A_F.jpg";
	faction = Atlas_OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_O_W_CombatUniform_owcamo;
	backpack = B_Carryall_owcamo_OWAmmo_F;
	weapons[] =
	{
		arifle_AK12_545_aco_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12_545_aco_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_12(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_12(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_SmershVest_01_olive_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_olive_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Soldier_AAR_F: O_Soldier_AAR_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Soldier_AAR_F.jpg";
	faction = Atlas_OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_O_W_CombatUniform_owcamo;
	backpack = B_FieldPack_owcamo_OWAAR_F;
	weapons[] =
	{
		arifle_AK12_545_aco_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_AK12_545_aco_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_SmershVest_01_olive_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_olive_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Support_AMG_F: O_support_AMG_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Support_AMG_F.jpg";
	faction = Atlas_OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_O_W_CombatUniform_owcamo;
	backpack = O_HMG_01_support_F;
	weapons[] =
	{
		arifle_AK12U_545_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_TacChestrig_oli_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_oli_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Support_AMort_F: O_support_AMort_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Support_AMort_F.jpg";
	faction = Atlas_OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_O_W_CombatUniform_owcamo;
	backpack = O_Mortar_01_support_F;
	weapons[] =
	{
		arifle_AK12U_545_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_TacChestrig_oli_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_oli_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Soldier_AHAT_F: O_Soldier_AHAT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Soldier_AHAT_F.jpg";
	faction = Atlas_OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_O_W_CombatUniform_owcamo;
	backpack = B_Carryall_owcamo_OWAHAT_F;
	weapons[] =
	{
		arifle_AK12_545_aco_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons,
        Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_AK12_545_aco_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons,
        Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_TacChestrig_oli_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_oli_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Soldier_AAA_F: O_Soldier_AAA_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Soldier_AAA_F.jpg";
	faction = Atlas_OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_O_W_CombatUniform_owcamo;
	backpack = B_Carryall_owcamo_OWAAA_F;
	weapons[] =
	{
		arifle_AK12_545_aco_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_AK12_545_aco_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_SmershVest_01_olive_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_olive_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Soldier_AAT_F: O_Soldier_AAT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Soldier_AAT_F.jpg";
	faction = Atlas_OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_O_W_CombatUniform_owcamo;
	backpack = B_Carryall_owcamo_OWAAT_F;
	weapons[] =
	{
		arifle_AK12_545_aco_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_AK12_545_aco_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_SmershVest_01_olive_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_olive_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Soldier_AR_F: O_Soldier_AR_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Soldier_AR_F.jpg";
	faction = Atlas_OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_O_W_CombatUniform_owcamo;
	weapons[] =
	{
		arifle_RPK12_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_RPK12_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(75Rnd_762x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        HandGrenade_East,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(75Rnd_762x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        HandGrenade_East,
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_SmershVest_01_olive_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_olive_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Medic_F: O_medic_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Medic_F.jpg";
	faction = Atlas_OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_O_W_CombatUniform_owcamo;
	backpack = B_FieldPack_owcamo_OWMedic_F;
	weapons[] =
	{
		arifle_AK12_545_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12_545_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_MEDIC
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_MEDIC
	};
	linkedItems[] =
	{
		V_TacVest_oli,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacVest_oli,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Crew_F: O_crew_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Crew_F.jpg";
	faction = Atlas_OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_O_W_CombatUniform_owcamo;
	weapons[] =
	{
		arifle_AK12U_545_aco_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_aco_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_4(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
        HandGrenade_East,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
        HandGrenade_East,
        SmokeShell
	};
	linkedItems[] =
	{
		V_BandollierB_khk,
		H_Tank_black_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_BandollierB_khk,
		H_Tank_black_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Engineer_F: O_engineer_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Engineer_F.jpg";
	faction = Atlas_OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_O_W_CombatUniform_owcamo;
	backpack = B_Carryall_owcamo_OWEng_F;
	weapons[] =
	{
		arifle_AK12U_545_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
		SMOKESHELLS_OPFOR
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
		SMOKESHELLS_OPFOR
	};
	linkedItems[] =
	{
		V_SmershVest_01_olive_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_olive_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Soldier_Exp_F: O_soldier_exp_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Soldier_Exp_F.jpg";
	faction = Atlas_OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_O_W_CombatUniform_owcamo;
	backpack = B_Carryall_owcamo_OWExp_F;
	weapons[] =
	{
		arifle_AK12U_545_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_TacVest_oli,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacVest_oli,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_soldier_mine_F: Atlas_O_W_Soldier_Exp_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_soldier_mine_F.jpg";
	displayName = $STR_A3_B_T_soldier_mine_F0;
	backpack = B_Carryall_owcamo_Mine;
};
class Atlas_O_W_Soldier_GL_F: O_Soldier_GL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Soldier_GL_F.jpg";
	faction = Atlas_OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_O_W_CombatUniform_owcamo;
	weapons[] =
	{
		arifle_AK12_GL_545_aco_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12_GL_545_aco_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	linkedItems[] =
	{
		V_SmershVest_01_olive_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_olive_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Support_GMG_F: O_support_GMG_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Support_GMG_F.jpg";
	faction = Atlas_OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_O_W_CombatUniform_owcamo;
	backpack = O_GMG_01_weapon_F;
	weapons[] =
	{
		arifle_AK12U_545_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_TacChestrig_oli_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_oli_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Support_MG_F: O_support_MG_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Support_MG_F.jpg";
	faction = Atlas_OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_O_W_CombatUniform_owcamo;
	backpack = O_HMG_01_weapon_F;
	weapons[] =
	{
		arifle_AK12U_545_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_TacChestrig_oli_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_oli_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Support_Mort_F: O_support_Mort_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Support_Mort_F.jpg";
	faction = Atlas_OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_O_W_CombatUniform_owcamo;
	backpack = O_Mortar_01_weapon_F;
	weapons[] =
	{
		arifle_AK12U_545_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_TacChestrig_oli_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_oli_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Helicrew_F: O_helicrew_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Helicrew_F.jpg";
	faction = Atlas_OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch
	};
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_O_W_PilotCoveralls;
	weapons[] =
	{
		arifle_AK12U_545_aco_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_aco_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_545x39_AK12_Mag_F),
		SMOKESHELLS_OPFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_545x39_AK12_Mag_F),
		SMOKESHELLS_OPFOR
	};
    linkedItems[] =
    {
        H_CrewHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
        H_CrewHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
};
class Atlas_O_W_Helipilot_F: O_helipilot_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Helipilot_F.jpg";
	faction = Atlas_OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch
	};
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_O_W_PilotCoveralls;
	weapons[] =
	{
		SMG_02_ACO_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_02_ACO_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
		SMOKESHELLS_OPFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
		SMOKESHELLS_OPFOR
	};
    linkedItems[] =
    {
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles_OPFOR
    };
};
class Atlas_O_W_soldier_M_F: O_soldier_M_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_soldier_M_F.jpg";
	faction = Atlas_OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_O_W_CombatUniform_owcamo;
	weapons[] =
	{
		srifle_DMR_01_black_ARCO_LP_BI_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		srifle_DMR_01_black_ARCO_LP_BI_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_10(10Rnd_762x54_Mag),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(10Rnd_762x54_Mag),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_TacVest_oli,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacVest_oli,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Soldier_AA_F: O_Soldier_AA_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Soldier_AA_F.jpg";
	faction = Atlas_OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_O_W_CombatUniform_owcamo;
	backpack = B_FieldPack_owcamo_OWAA_F;
	weapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		launch_O_Titan_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		launch_O_Titan_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_TacVest_oli,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacVest_oli,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Soldier_AT_F: O_Soldier_AT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Soldier_AT_F.jpg";
	faction = Atlas_OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_O_W_CombatUniform_owcamo;
	backpack = B_FieldPack_owcamo_OWAT_F;
	weapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		launch_O_Titan_short_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		launch_O_Titan_short_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_TacVest_oli,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacVest_oli,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Officer_F: O_officer_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Officer_F.jpg";
	faction = Atlas_OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch,
		G_RUS_casual
	};
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_O_W_OfficerUniform;
	weapons[] =
	{
		arifle_AK12U_545_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
		SMOKESHELLS_OPFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
		SMOKESHELLS_OPFOR
	};
	linkedItems[] =
	{
		V_Rangemaster_belt_khk,
		H_Beret_CSAT_01_F,
		ItemGPS,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Rangemaster_belt_khk,
		H_Beret_CSAT_01_F,
		ItemGPS,
		DefaultManLinkedItems
	};
};
class Atlas_O_W_Soldier_Repair_F: O_soldier_repair_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Soldier_Repair_F.jpg";
	faction = Atlas_OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_O_W_CombatUniform_owcamo;
	backpack = B_FieldPack_owcamo_OWRepair_F;
	weapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_SmershVest_01_olive_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_olive_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Soldier_F: O_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Soldier_F.jpg";
	faction = Atlas_OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_O_W_CombatUniform_owcamo;
	weapons[] =
	{
		arifle_AK12_545_aco_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12_545_aco_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_SmershVest_01_olive_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_olive_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Soldier_HAT_F: O_Soldier_HAT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Soldier_HAT_F.jpg";
	faction = Atlas_OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_O_W_CombatUniform_owcamo;
	backpack = B_FieldPack_owcamo_OWHAT_F;
	weapons[] =
	{
		arifle_AK12_545_aco_pointer_F,
		launch_O_Vorona_green_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12_545_aco_pointer_F,
		launch_O_Vorona_green_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
		Vorona_HEAT,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
		Vorona_HEAT,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_TacVest_oli,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacVest_oli,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Soldier_LAT_F: O_soldier_LAT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Soldier_LAT_F.jpg";
	faction = Atlas_OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_O_W_CombatUniform_owcamo;
	backpack = B_FieldPack_owcamo_OWLAT_F;
	weapons[] =
	{
		arifle_AK12_545_aco_pointer_F,
		launch_RPG32_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12_545_aco_pointer_F,
		launch_RPG32_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
		RPG32_F,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
		RPG32_F,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_TacVest_oli,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacVest_oli,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Soldier_Lite_F: O_Soldier_lite_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Soldier_Lite_F.jpg";
	faction = Atlas_OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch,
		G_RUS_casual
	};
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_O_W_CombatUniform_owcamo;
	weapons[] =
	{
		arifle_AK12U_545_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_545x39_AK12_Mag_F),
        HandGrenade_East,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_545x39_AK12_Mag_F),
        HandGrenade_East,
        SmokeShell
	};
	linkedItems[] =
	{
		V_BandollierB_khk,
		H_MilCap_whex_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_BandollierB_khk,
		H_MilCap_whex_F,
		DefaultManLinkedItems
	};
};
class Atlas_O_W_Soldier_SL_F: O_Soldier_SL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Soldier_SL_F.jpg";
	faction = Atlas_OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_O_W_CombatUniform_owcamo;
	weapons[] =
	{
		arifle_AK12_545_arco_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_AK12_545_arco_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_545x39_AK12_Mag_F),
		mag_2(30Rnd_545x39_AK12_Mag_Tracer_F),
		mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
		SMOKESHELLS_OPFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_545x39_AK12_Mag_F),
		mag_2(30Rnd_545x39_AK12_Mag_Tracer_F),
		mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
		SMOKESHELLS_OPFOR
	};
	linkedItems[] =
	{
		V_SmershVest_01_radio_olive_F,
		H_HelmetAggressor_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_radio_olive_F,
		H_HelmetAggressor_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Soldier_TL_F: O_Soldier_TL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Soldier_TL_F.jpg";
	faction = Atlas_OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_O_W_CombatUniform_owcamo;
	weapons[] =
	{
		arifle_AK12_GL_545_arco_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_AK12_GL_545_arco_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_545x39_AK12_Mag_F),
		mag_2(30Rnd_545x39_AK12_Mag_Tracer_F),
		mag_2(10Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        SmokeShell,
		SMOKESHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_OPFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_545x39_AK12_Mag_F),
		mag_2(30Rnd_545x39_AK12_Mag_Tracer_F),
		mag_2(10Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        SmokeShell,
		SMOKESHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_OPFOR
	};
	linkedItems[] =
	{
		V_SmershVest_01_radio_olive_F,
		H_HelmetAggressor_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_radio_olive_F,
		H_HelmetAggressor_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_RadioOperator_F: Atlas_O_W_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_RadioOperator_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	linkedItems[] =
	{
		V_SmershVest_01_olive_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_olive_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = B_RadioBag_01_whex_F;
	weapons[] =
    {
        arifle_AK12_545_aco_pointer_F,
        hgun_Pistol_01_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12_545_aco_pointer_F,
        hgun_Pistol_01_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    role = RadioOperator;
};
class Atlas_O_W_Survivor_F: Atlas_O_W_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Survivor_F.jpg";
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
class Atlas_O_W_Soldier_UAV_F: O_soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Soldier_UAV_F.jpg";
	faction = Atlas_OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = Atlas_U_O_W_CombatUniform_owcamo;
	backpack = O_UAV_01_backpack_F;
	weapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_TacVest_oli,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		O_UavTerminal,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_TacVest_oli,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		O_UavTerminal,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_soldier_UAV_06_F: Atlas_O_W_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_soldier_UAV_06_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_F0;
	backpack = O_UAV_06_backpack_F;
};
class Atlas_O_W_soldier_UAV_06_medical_F: Atlas_O_W_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_soldier_UAV_06_medical_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_medical_F0;
	backpack = O_UAV_06_medical_backpack_F;
};
class Atlas_O_W_soldier_UGV_02_Demining_F: Atlas_O_W_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_soldier_UGV_02_Demining_F.jpg";
	displayName = $STR_A3_C_B_soldier_UGV_02_Demining_F0;
	backpack = O_UGV_02_Demining_backpack_F;
};
class Atlas_O_W_Soldier_universal_F: Atlas_O_W_Soldier_F
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
class Atlas_O_W_Soldier_unarmed_F: Atlas_O_W_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] =
	{
		V_SmershVest_01_olive_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_olive_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems
	};
	role = Unarmed;
	threat[] = {0.1,0.1,0.1};
};
class Atlas_O_W_Fighter_Pilot_F: Atlas_O_W_Helipilot_F
{
    author = $STR_A3_A_AveryTheKitty;
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_B_Fighter_Pilot_name;
	uniformClass = Atlas_U_O_W_PilotCoveralls;
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
    weapons[] =
    {
        hgun_Pistol_01_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        hgun_Pistol_01_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_2(10Rnd_9x21_Mag),
		SMOKESHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_2(10Rnd_9x21_Mag),
		SMOKESHELLS_OPFOR
    };
	camouflage = 2;
    cost = 165000;
    role = Crewman;
};