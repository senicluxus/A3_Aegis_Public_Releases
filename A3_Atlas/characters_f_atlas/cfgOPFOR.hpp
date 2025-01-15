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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_Soldier_A_F.jpg";
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
	uniformClass = Atlas_U_O_Luchnik_whex_F;
	backpack = B_Carryall_owcamo_OWAmmo_F;
	weapons[] =
	{
		Atlas_arifle_AK12_545_aco_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_AK12_545_aco_pointer_F,
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
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Soldier_AAR_F: O_Soldier_AAR_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_Soldier_AAR_F.jpg";
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
	uniformClass = Atlas_U_O_Luchnik_RolledUp_whex_F;
	backpack = B_FieldPack_owcamo_OWAAR_F;
	weapons[] =
	{
		Atlas_arifle_AK12_545_aco_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		Atlas_arifle_AK12_545_aco_pointer_F,
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
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
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
	uniformClass = Atlas_U_O_Luchnik_RolledUp_whex_F;
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
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
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
	uniformClass = Atlas_U_O_Luchnik_RolledUp_whex_F;
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
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Soldier_AHAT_F: O_Soldier_AHAT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_Soldier_AHAT_F.jpg";
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
	uniformClass = Atlas_U_O_Luchnik_whex_F;
	backpack = B_Carryall_owcamo_OWAHAT_F;
	weapons[] =
	{
		Atlas_arifle_AK12_545_aco_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons,
        Rangefinder
	};
	respawnWeapons[] =
	{
		Atlas_arifle_AK12_545_aco_pointer_F,
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
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Soldier_AAA_F: O_Soldier_AAA_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_Soldier_AAA_F.jpg";
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
	uniformClass = Atlas_U_O_Luchnik_RolledUp_whex_F;
	backpack = B_Carryall_owcamo_OWAAA_F;
	weapons[] =
	{
		Atlas_arifle_AK12_545_aco_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		Atlas_arifle_AK12_545_aco_pointer_F,
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
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Soldier_AAT_F: O_Soldier_AAT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_Soldier_AAT_F.jpg";
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
	uniformClass = Atlas_U_O_Luchnik_whex_F;
	backpack = B_Carryall_owcamo_OWAAT_F;
	weapons[] =
	{
		Atlas_arifle_AK12_545_aco_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		Atlas_arifle_AK12_545_aco_pointer_F,
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
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Soldier_AR_F: O_Soldier_AR_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_Soldier_AR_F.jpg";
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
	uniformClass = Atlas_U_O_Luchnik_whex_F;
	weapons[] =
	{
		arifle_RPK12_545_LP_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_RPK12_545_LP_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(Aegis_60Rnd_545x39_Mag_Green_F),
        mag_2(10Rnd_9x21_Mag),
        HandGrenade_East,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(Aegis_60Rnd_545x39_Mag_Green_F),
        mag_2(10Rnd_9x21_Mag),
        HandGrenade_East,
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		Atlas_V_OCarrierLuchnik_CQB_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierLuchnik_CQB_whex_F,
		H_HelmetLuchnik_cover_whex_F,
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
	uniformClass = Atlas_U_O_Luchnik_RolledUp_whex_F;
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
		Atlas_V_OCarrierLuchnik_CQB_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierLuchnik_CQB_whex_F,
		H_HelmetLuchnik_cover_whex_F,
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
		arifle_AK12U_545_ACO_Pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_ACO_Pointer_F,
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
	uniformClass = Atlas_U_O_Luchnik_RolledUp_whex_F;
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
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Soldier_Exp_F: O_soldier_exp_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_Soldier_Exp_F.jpg";
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
	uniformClass = Atlas_U_O_Luchnik_whex_F;
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
		Atlas_V_OCarrierLuchnik_GL_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierLuchnik_GL_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_soldier_mine_F: Atlas_O_W_Soldier_Exp_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_Soldier_mine_F.jpg";
	displayName = $STR_A3_B_T_soldier_mine_F0;
	uniformClass = Atlas_U_O_Luchnik_RolledUp_whex_F;
	backpack = B_Carryall_owcamo_Mine;
};
class Atlas_O_W_Soldier_GL_F: O_Soldier_GL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_Soldier_GL_F.jpg";
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
	uniformClass = Atlas_U_O_Luchnik_whex_F;
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
		Atlas_V_OCarrierLuchnik_GL_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierLuchnik_GL_whex_F,
		H_HelmetLuchnik_cover_whex_F,
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
	uniformClass = Atlas_U_O_Luchnik_whex_F;
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
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
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
	uniformClass = Atlas_U_O_Luchnik_whex_F;
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
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
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
	uniformClass = Atlas_U_O_Luchnik_RolledUp_whex_F;
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
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
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
		arifle_AK12U_545_ACO_Pointer_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_ACO_Pointer_F,
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_Soldier_M_F.jpg";
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
	uniformClass = Atlas_U_O_Luchnik_RolledUp_whex_F;
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
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Soldier_AA_F: O_Soldier_AA_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_Soldier_AA_F.jpg";
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
	uniformClass = Atlas_U_O_Luchnik_whex_F;
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
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Soldier_AT_F: O_Soldier_AT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_Soldier_AT_F.jpg";
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
	uniformClass = Atlas_U_O_Luchnik_whex_F;
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
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
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
	uniformClass = Atlas_U_O_Luchnik_Officer_whex_F;
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_Soldier_Repair_F.jpg";
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
	uniformClass = Atlas_U_O_Luchnik_whex_F;
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
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Soldier_F: O_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_Soldier_F.jpg";
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
	uniformClass = Atlas_U_O_Luchnik_whex_F;
	weapons[] =
	{
		Atlas_arifle_AK12_545_aco_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_AK12_545_aco_pointer_F,
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
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Soldier_HAT_F: O_Soldier_HAT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_Soldier_HAT_F.jpg";
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
	uniformClass = Atlas_U_O_Luchnik_RolledUp_whex_F;
	backpack = B_FieldPack_owcamo_OWHAT_F;
	weapons[] =
	{
		Atlas_arifle_AK12_545_aco_pointer_F,
		launch_O_Vorona_green_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_AK12_545_aco_pointer_F,
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
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Soldier_LAT_F: O_soldier_LAT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_Soldier_LAT_F.jpg";
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
	uniformClass = Atlas_U_O_Luchnik_whex_F;
	backpack = B_FieldPack_owcamo_OWLAT_F;
	weapons[] =
	{
		Atlas_arifle_AK12_545_aco_pointer_F,
		launch_RPG32_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_arifle_AK12_545_aco_pointer_F,
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
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Soldier_Lite_F: O_Soldier_lite_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_Soldier_Lite_F.jpg";
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
	uniformClass = Atlas_U_O_Luchnik_RolledUp_whex_F;
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
		Atlas_V_OCarrierLuchnik_whex_F,
		H_MilCap_whex_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierLuchnik_whex_F,
		H_MilCap_whex_F,
		DefaultManLinkedItems
	};
};
class Atlas_O_W_Soldier_SL_F: O_Soldier_SL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_Soldier_SL_F.jpg";
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
	uniformClass = Atlas_U_O_Luchnik_whex_F;
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
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_Soldier_TL_F: O_Soldier_TL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_Soldier_TL_F.jpg";
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
	uniformClass = Atlas_U_O_Luchnik_RolledUp_whex_F;
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
		Atlas_V_OCarrierLuchnik_GL_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierLuchnik_GL_whex_F,
		H_HelmetLuchnik_cover_whex_F,
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
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	backpack = B_RadioBag_01_whex_F;
	weapons[] =
    {
        Atlas_arifle_AK12_545_aco_pointer_F,
        hgun_Pistol_01_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_AK12_545_aco_pointer_F,
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_Soldier_UAV_F.jpg";
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
	uniformClass = Atlas_U_O_Luchnik_RolledUp_whex_F;
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
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		O_UavTerminal,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		O_UavTerminal,
		NVGoggles_OPFOR
	};
};
class Atlas_O_W_soldier_UAV_06_F: Atlas_O_W_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_Soldier_UAV_06_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_F0;
	backpack = O_UAV_06_backpack_F;
};
class Atlas_O_W_soldier_UAV_06_medical_F: Atlas_O_W_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_Soldier_UAV_06_medical_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_medical_F0;
	backpack = O_UAV_06_medical_backpack_F;
};
class Atlas_O_W_soldier_UGV_02_Demining_F: Atlas_O_W_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_Soldier_UGV_02_Demining_F.jpg";
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
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems
	};
	role = Unarmed;
	threat[] = {0.1,0.1,0.1};
};
class Atlas_O_W_Soldier_PG_F: O_soldier_PG_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_Soldier_F.jpg";
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
	uniformClass = Atlas_U_O_Luchnik_whex_F;
	backpack = B_Parachute;
	weapons[] =
	{
		arifle_AK12U_545_ACO_Pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_ACO_Pointer_F,
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
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		H_HelmetLuchnik_cover_whex_F,
		DefaultManLinkedItems,
		NVGoggles_OPFOR
	};
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

/* Belarusian SF - Belarus Spetsnaz*/
class Atlas_O_W_Soldier_recon_base: Atlas_O_W_Soldier_F
{
    scope = private;
    scopeCurator = private;
    textSingular = $STR_A3_nameSound_veh_infantry_SF_s;
    textPlural = $STR_A3_nameSound_veh_infantry_SF_p;
    nameSound = veh_infantry_SF_s;
    uniformClass = Atlas_U_O_CombatFatigues_whex_F;
    editorsubcategory = EdSubcat_Personnel_SpecialForces;
	items[] =
	{
		FirstAidKit,
		optic_Nightstalker
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_Nightstalker
	};
	linkedItems[] =
	{
		H_HelmetSpecter_cover_whex_co,
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_cover_whex_co,
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
    icon = iconManRecon;
	role = Rifleman;
};
class Atlas_O_W_Recon_F: Atlas_O_W_Soldier_recon_base
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_recon_F.jpg";
	author = $STR_A3_A_Ravenholme;
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_recon_F0;
	linkedItems[] =
	{
		H_HelmetSpecter_cover_whex_co,
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_cover_whex_co,
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
		arifle_AK12_545_arco_pointer_pbs_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
		Rangefinder
    };
    respawnWeapons[] =
    {
		arifle_AK12_545_arco_pointer_pbs_F,
		hgun_Rook40_snds_F,
        DefaultManWeapons,
		Rangefinder
    };
    magazines[] =
    {
		mag_10(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
    	mag_2(SmokeShell),
		mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
       	mag_10(30Rnd_545x39_AK12_Mag_F),
    	mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
    	mag_2(SmokeShell),
		mag_2(Chemlight_red)
    };
};
class Atlas_O_W_Recon_TL_F: Atlas_O_W_Soldier_Recon_base
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_recon_TL_F.jpg";
	author = $STR_A3_A_Ravenholme;
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Recon_TL_F0;
	linkedItems[] =
	{
		H_HelmetSpecter_cover_whex_co,
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_cover_whex_co,
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
		arifle_AK12_545_arco_pointer_pbs_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
		Rangefinder
    };
    respawnWeapons[] =
    {
		arifle_AK12_545_arco_pointer_pbs_F,
		hgun_Rook40_snds_F,
        DefaultManWeapons,
		Rangefinder
    };
    magazines[] =
    {
		mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
    	mag_2(SmokeShell),
		SMOKESHELLS_OPFOR,
		mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
       	mag_8(30Rnd_545x39_AK12_Mag_F),
    	mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
    	mag_2(SmokeShell),
		SMOKESHELLS_OPFOR,
		mag_2(Chemlight_red)
    };
	icon = iconManLeader;
	role = Rifleman;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Atlas_O_W_Recon_exp_F: Atlas_O_W_Soldier_Recon_base
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_Recon_exp_F.jpg";
	author = $STR_A3_A_Ravenholme;
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Recon_exp_F0;
	uniformClass = Atlas_U_O_CombatFatigues_02_whex_F;
	backpack = B_Carryall_owcamo_OWExp_F;
	linkedItems[] =
	{
		H_HelmetSpecter_cover_whex_co,
		Atlas_V_OCarrierLuchnik_GL_whex_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_cover_whex_co,
		Atlas_V_OCarrierLuchnik_GL_whex_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
		arifle_AK12U_545_ACO_Pointer_pbs_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
		Rangefinder
    };
    respawnWeapons[] =
    {
		arifle_AK12U_545_ACO_Pointer_pbs_F,
		hgun_Rook40_snds_F,
        DefaultManWeapons,
		Rangefinder
    };
    magazines[] =
    {
		mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
		mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade_East),
    	mag_2(SmokeShell),
		mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
       	mag_8(30Rnd_545x39_AK12_Mag_F),
    	mag_2(17Rnd_9x21_Mag),
		mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade_East),
    	mag_2(SmokeShell),
		mag_2(Chemlight_red)
    };
	role = Rifleman;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
	icon = iconManExplosive;
	picture = pictureExplosive;
};
class Atlas_O_W_Recon_AR_F: Atlas_O_W_Soldier_Recon_base
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_Recon_AR_F.jpg";
	author = $STR_A3_A_Ravenholme;
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_C_O_R_recon_AR_F0;
	linkedItems[] =
	{
		H_HelmetSpecter_cover_whex_co,
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_cover_whex_co,
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
		arifle_RPK12_545_ARCO_LP_PBS_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
		Rangefinder
    };
    respawnWeapons[] =
    {
		arifle_RPK12_545_ARCO_LP_PBS_F,
		hgun_Rook40_snds_F,
        DefaultManWeapons,
		Rangefinder
    };
    magazines[] =
    {
        mag_8(Aegis_60Rnd_545x39_Mag_Green_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_8(Aegis_60Rnd_545x39_Mag_Green_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
	icon = iconManMG;
	role = MachineGunner;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Atlas_O_W_Recon_M_F: Atlas_O_W_Soldier_Recon_base
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_Recon_M_F.jpg";
	author = $STR_A3_A_Ravenholme;
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_recon_M_F0;
	linkedItems[] =
	{
		H_HelmetSpecter_cover_whex_co,
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_cover_whex_co,
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
		Atlas_srifle_DMR_01_black_ARCO_IR_BI_PBS_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
		Rangefinder
    };
    respawnWeapons[] =
    {
		Atlas_srifle_DMR_01_black_ARCO_IR_BI_PBS_F,
		hgun_Rook40_snds_F,
        DefaultManWeapons,
		Rangefinder
    };
    magazines[] =
    {
        mag_10(10Rnd_762x54_Mag),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_10(10Rnd_762x54_Mag),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
	role = Marksman;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Atlas_O_W_Recon_medic_F: Atlas_O_W_Soldier_Recon_base
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_Recon_medic_F.jpg";
	author = $STR_A3_A_Ravenholme;
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_recon_medic_F0;
	backpack = B_FieldPack_owcamo_OWMedic_F;
	linkedItems[] =
	{
		H_HelmetSpecter_cover_whex_co,
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_cover_whex_co,
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
        arifle_AK12U_545_ACO_Pointer_pbs_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
		Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_AK12U_545_ACO_Pointer_pbs_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
		Rangefinder
    };
    magazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
       	mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_red)
    };
	icon = iconManMedic;
	picture = pictureHeal;
	role = CombatLifeSaver;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Atlas_O_W_recon_GL_F: Atlas_O_W_Soldier_recon_base
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_recon_GL_F.jpg";
	author = $STR_A3_A_Ravenholme;
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_C_O_R_recon_GL_F0;
	linkedItems[] =
	{
		H_HelmetSpecter_cover_whex_co,
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_cover_whex_co,
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
        arifle_AK12_GL_545_arco_IR_PBS_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
		Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_AK12_GL_545_arco_IR_PBS_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
		Rangefinder
    };
    magazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
       	mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
	role = Grenadier;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Atlas_O_W_Recon_LAT_F: Atlas_O_W_Soldier_Recon_base
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_Recon_LAT_F.jpg";
	author = $STR_A3_A_Ravenholme;
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_recon_LAT_F0;
	backpack = B_FieldPack_owcamo_OWLAT_F;
	linkedItems[] =
	{
		H_HelmetSpecter_cover_whex_co,
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_cover_whex_co,
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
		arifle_AK12U_545_ACO_Pointer_pbs_F,
        hgun_Rook40_snds_F,
		launch_RPG32_F,
        DefaultManWeapons,
		Rangefinder
    };
    respawnWeapons[] =
    {
		arifle_AK12U_545_ACO_Pointer_pbs_F,
		hgun_Rook40_snds_F,
		launch_RPG32_F,
        DefaultManWeapons,
		Rangefinder
    };
    magazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        RPG32_F,
		mag_2(HandGrenade_East),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
       	mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        RPG32_F,
  		mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
	icon = iconManAT;
	role = MissileSpecialist;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Atlas_O_W_recon_JTAC_F: Atlas_O_W_Soldier_recon_base
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_recon_JTAC_F.jpg";
	author = $STR_A3_A_Ravenholme;
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_recon_JTAC_F0;
	uniformClass = Atlas_U_O_CombatFatigues_02_whex_F;
	backpack = B_RadioBag_01_whex_F;
	linkedItems[] =
	{
		H_HelmetSpecter_cover_whex_co,
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_cover_whex_co,
		Atlas_V_OCarrierLuchnik_Lite_whex_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
        arifle_AK12_545_arco_pointer_pbs_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
		Laserdesignator_03
    };
    respawnWeapons[] =
    {
        arifle_AK12_545_arco_pointer_pbs_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
		Laserdesignator_03
    };
    magazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
       	mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
	role = SpecialOperative;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class Atlas_O_W_Recon_CQ_F: Atlas_O_W_Soldier_Recon_base
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_W_Recon_CQ_F.jpg";
	author = $STR_A3_A_Ravenholme;
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_B_recon_CQ_F0;
	uniformClass = Atlas_U_O_CombatFatigues_02_whex_F;
	linkedItems[] =
	{
		H_HelmetSpecter_cover_whex_co,
		Atlas_V_OCarrierLuchnik_CQB_whex_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecter_cover_whex_co,
		Atlas_V_OCarrierLuchnik_CQB_whex_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_OPFOR
	};
	weapons[] =
    {
        sgun_Mp153_black_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        sgun_Mp153_black_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_3(4Rnd_12Gauge_Pellets),
        mag_3(4Rnd_12Gauge_Slug),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
       	mag_3(4Rnd_12Gauge_Pellets),
        mag_3(4Rnd_12Gauge_Slug),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
};

/* Iranian Army Regulars */
class Atlas_O_Soldier_R_base_F: O_Soldier_F
{
	scope = private;
	uniformClass = U_O_LCF_noInsignia_hex_lxWS;
	headgearList[]={};
	editorSubcategory = EdSubcat_Personnel_Army;
	weapons[] =
    {
        Atlas_arifle_Katiba_ACO_IRFL_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_Katiba_ACO_IRFL_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_12(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
	respawnMagazines[] =
    {
        mag_12(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_alt_khk_F,
		H_O_Helmet_canvas_ocamo,
		NVGoggles_OPFOR,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_alt_khk_F,
		H_O_Helmet_canvas_ocamo,
		NVGoggles_OPFOR,
		DefaultManLinkedItems
	};
	/*class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'GryffinRegiment'] call bis_fnc_setUnitInsignia;";
		};
	class AttributeValues
		{
			unitInsignia = "GryffinRegiment";
		};*/
};
class Atlas_O_Soldier_R_A_F: Atlas_O_Soldier_R_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_Soldier_R_A_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_A_F0;
	backpack = B_FieldPack_cbr_ammo;
};
class Atlas_O_Soldier_R_AR_F: Atlas_O_Soldier_R_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_Soldier_R_AR_F.jpg";
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
	weapons[] =
	{
		Atlas_LMG_Zafir_Black_ACO_IRFL_F,
		hgun_Rook40_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Atlas_LMG_Zafir_Black_ACO_IRFL_F,
		hgun_Rook40_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_3(150rnd_762x54_box),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_3(150rnd_762x54_box),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
	};
};
class Atlas_O_Soldier_R_Medic_F: Atlas_O_Soldier_R_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_Soldier_R_Medic_F.jpg";
    scope = public;
  	scopeCurator = public;
	displayName = $STR_B_medic_F0;
	role = CombatLifeSaver;
	icon = iconManMedic;
	picture = pictureHeal;
	camouflage = 1.6;
	attendant = true;
	backpack = B_FieldPack_ocamo_medic;
	magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_MEDIC
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_MEDIC
    };
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_CQB_alt_khk_F,
		H_O_Helmet_canvas_ocamo,
		NVGoggles_OPFOR,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_CQB_alt_khk_F,
		H_O_Helmet_canvas_ocamo,
		NVGoggles_OPFOR,
		DefaultManLinkedItems
	};
};
class Atlas_O_Soldier_R_Engineer_F: Atlas_O_Soldier_R_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_Soldier_R_Engineer_F.jpg";
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
	backpack = B_Carryall_ocamo_Eng;
	weapons[] =
    {
        Atlas_arifle_Katiba_C_ACO_IRFL_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_Katiba_C_ACO_IRFL_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
};
class Atlas_O_Soldier_R_Exp_F: Atlas_O_Soldier_R_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_Soldier_R_Exp_F.jpg";
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
	backpack = B_Carryall_ocamo_Exp;
	weapons[] =
    {
        Atlas_arifle_Katiba_C_ACO_IRFL_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_Katiba_C_ACO_IRFL_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_GL_alt_khk_F,
		H_O_Helmet_canvas_ocamo,
		NVGoggles_OPFOR,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_GL_alt_khk_F,
		H_O_Helmet_canvas_ocamo,
		NVGoggles_OPFOR,
		DefaultManLinkedItems
	};
};
class Atlas_O_Soldier_R_GL_F: Atlas_O_Soldier_R_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_Soldier_R_GL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
    role = Grenadier;
	cost = 200000;
	weapons[] =
    {
        Atlas_arifle_Katiba_GL_ACO_IRFL_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_Katiba_GL_ACO_IRFL_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_GL_alt_khk_F,
		H_O_Helmet_canvas_ocamo,
		NVGoggles_OPFOR,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_GL_alt_khk_F,
		H_O_Helmet_canvas_ocamo,
		NVGoggles_OPFOR,
		DefaultManLinkedItems
	};
};
class Atlas_O_Soldier_R_HG_F: Atlas_O_Soldier_R_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_Soldier_R_HG_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_cfgVehicles_B_HeavyGunner_F0;
	role = MachineGunner;
	icon = iconManMG;
	cost = 125000;
	threat[] =
    {
        1,      // Soft
        0.1,    // Armor
        0.3     // Air
    };
	weapons[] =
    {
        Atlas_MMG_01_black_ARCO_BI_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_MMG_01_black_ARCO_BI_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_3(150Rnd_93x64_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_3(150Rnd_93x64_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(SmokeShell)
    };
};
class Atlas_O_Soldier_R_M_F: Atlas_O_Soldier_R_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_Soldier_R_M_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_M_F0;
	role = Marksman;
	cost = 250000;
	weapons[] =
    {
        Atlas_srifle_DMR_01_black_ARCO_IRFL_BI_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        Atlas_srifle_DMR_01_black_ARCO_IRFL_BI_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_10(10Rnd_762x54_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(10Rnd_762x54_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
};
class Atlas_O_Soldier_R_F: Atlas_O_Soldier_R_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_Soldier_R_F.jpg";
    scope = public;
    scopeCurator = public;
};
class Atlas_O_Soldier_R_AA_F: Atlas_O_Soldier_R_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_Soldier_R_AA_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_AA_F0;
	backpack = B_FieldPack_ocamo_AA;
	cost = 200000;
	icon = iconManAT;
	role = MissileSpecialist;
	threat[] = {1,0.7,0.3};
	weapons[] =
    {
        Atlas_arifle_Katiba_C_ACO_IRFL_F,
		launch_B_Titan_Coyote_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_Katiba_C_ACO_IRFL_F,
		launch_B_Titan_Coyote_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_12(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_12(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
};
class Atlas_O_Soldier_R_AT_F: Atlas_O_Soldier_R_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_Soldier_R_AT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_AT_F0;
	backpack = B_FieldPack_cbr_AT;
	cost = 200000;
	icon = iconManAT;
	role = MissileSpecialist;
	threat[] = {1,0.7,0.3};
	weapons[] =
    {
        Atlas_arifle_Katiba_C_ACO_IRFL_F,
		launch_O_Titan_short_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_Katiba_C_ACO_IRFL_F,
		launch_O_Titan_short_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_12(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_12(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
};
class Atlas_O_Soldier_R_LAT_F: Atlas_O_Soldier_R_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_Soldier_R_LAT_F.jpg";
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
	backpack = B_FieldPack_cbr_LAT;
	weapons[] =
    {
        Atlas_arifle_Katiba_ACO_IRFL_F,
		launch_RPG32_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_arifle_Katiba_ACO_IRFL_F,
		launch_RPG32_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        RPG32_F,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        RPG32_F,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
};
class Atlas_O_Soldier_R_SL_F: Atlas_O_Soldier_R_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_Soldier_R_SL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_SL_F0;
	role = Grenadier;
	icon = iconManLeader;
    cost = 500000;
	camouflage = 1.4;
	weapons[] =
    {
        arifle_Katiba_ARCO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons,
		Binocular
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ARCO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons,
		Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_green),
        mag_2(30Rnd_65x39_caseless_green_mag_Tracer),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        SmokeShell,
        SMOKESHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_green),
        mag_2(30Rnd_65x39_caseless_green_mag_Tracer),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        SmokeShell,
        SMOKESHELLS_OPFOR
    };
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_alt_khk_F,
		H_O_Helmet_canvas_ocamo,
		NVGoggles_OPFOR,
		DefaultManLeaderLinkedItems,
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_alt_khk_F,
		H_O_Helmet_canvas_ocamo,
		NVGoggles_OPFOR,
		DefaultManLeaderLinkedItems,
	};
};
class Atlas_O_Soldier_R_TL_F: Atlas_O_Soldier_R_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_Soldier_R_SL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_TL_F0;
	role = Grenadier;
	icon = iconManLeader;
    cost = 500000;
	camouflage = 1.4;
	weapons[] =
    {
        arifle_Katiba_GL_ARCO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons,
		Binocular
    };
    respawnWeapons[] =
    {
        arifle_Katiba_GL_ARCO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons,
		Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_green),
        mag_2(30Rnd_65x39_caseless_green_mag_Tracer),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_green),
        mag_2(30Rnd_65x39_caseless_green_mag_Tracer),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_OPFOR
    };
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_GL_alt_khk_F,
		H_O_Helmet_canvas_ocamo,
		NVGoggles_OPFOR,
		DefaultManLeaderLinkedItems,
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_GL_alt_khk_F,
		H_O_Helmet_canvas_ocamo,
		NVGoggles_OPFOR,
		DefaultManLeaderLinkedItems,
	};
};
class Atlas_O_Soldier_R_RadioOp_F: Atlas_O_Soldier_R_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_Soldier_R_RadioOp_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_C_B_W_RadioOperator_F0;
	backpack = B_RadioBag_01_hex_F;
};
class Atlas_O_Soldier_R_UAV_F: Atlas_O_Soldier_R_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_Soldier_R_UAV_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_B_SOLDIER_UAV_F0;
	uavHacker = true;
    cost = 150000;
	role = SpecialOperative;
	backpack = O_UAV_01_backpack_F;
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_alt_khk_F,
		H_O_Helmet_canvas_ocamo,
		NVGoggles_OPFOR,
		O_UAVTerminal,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_alt_khk_F,
		H_O_Helmet_canvas_ocamo,
		NVGoggles_OPFOR,
		O_UAVTerminal,
		DefaultManLinkedItems
	};
};
class Atlas_O_Crew_R_F: O_crew_F
{
	uniformClass = U_O_LCF_noInsignia_hex_lxWS;
	headgearList[]={};
	editorSubcategory = EdSubcat_Personnel_Army;
	weapons[] =
    {
        SMG_02_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        SMG_02_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_8(30Rnd_9x21_mag_smg_02),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
		SmokeShellRed
    };
	respawnMagazines[] =
    {
        mag_8(30Rnd_9x21_mag_smg_02),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
		SmokeShellRed
    };
	linkedItems[] =
	{
		V_BandolierB_khk,
		lxWS_H_tank_tan_F,
		NVGoggles_OPFOR,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_BandolierB_khk,
		lxWS_H_tank_tan_F,
		NVGoggles_OPFOR,
		DefaultManLinkedItems
	};
};

/* CSAT (Pacific) Marines */
class O_T_Soldier_F: O_Soldier_F{};
class Atlas_O_C_Marine_base_F: O_T_Soldier_F
{
	scope = private;
	uniformClass = Atlas_U_O_CombatFatigues_mhex_F;
	headgearList[]={};
	editorSubcategory = EdSubcat_Personnel_Marines;
	identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
    weapons[] =
    {
        arifle_CTAR_blk_ACO_Pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_CTAR_blk_ACO_Pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_blk_F,
		Atlas_H_HelmetCCH_HiCut_Cover_mhex_F,
		G_Balaclava_light_G_blk_F,
		O_NVGoggles_blk_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_blk_F,
		Atlas_H_HelmetCCH_HiCut_Cover_mhex_F,
		G_Balaclava_light_G_blk_F,
		O_NVGoggles_blk_F,
		DefaultManLinkedItems
	};
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'CSAT_SwordfishRegiment'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "CSAT_SwordfishRegiment";
	};
};
	class Atlas_O_C_Marine_A_F: Atlas_O_C_Marine_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_C_Marine_A_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_A_F0;
	uniformClass = Atlas_U_O_CombatFatigues_mhex_02_F;
	backpack = B_Carryall_black_OMAmmo_F;
};
class Atlas_O_C_Marine_AR_F: Atlas_O_C_Marine_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_C_Marine_AR_F.jpg";
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
	weapons[] =
	{
		arifle_CTARS_blk_ARCO_Pointer_F,
		hgun_Rook40_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_CTARS_blk_ARCO_Pointer_F,
		hgun_Rook40_F,
        DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(100Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(100Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        mag_2(SmokeShell)
    };
    linkedItems[] =
	{
		Atlas_V_OCarrierRig_cqb_blk_F,
		Atlas_H_HelmetCCH_HiCut_Cover_mhex_F,
		G_Balaclava_light_G_blk_F,
		O_NVGoggles_blk_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_cqb_blk_F,
		Atlas_H_HelmetCCH_HiCut_Cover_mhex_F,
		G_Balaclava_light_G_blk_F,
		O_NVGoggles_blk_F,
		DefaultManLinkedItems
	};
};
class Atlas_O_C_Marine_Medic_F: Atlas_O_C_Marine_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_C_Marine_Medic_F.jpg";
    scope = public;
  	scopeCurator = public;
	displayName = $STR_B_medic_F0;
	role = CombatLifeSaver;
	icon = iconManMedic;
	picture = pictureHeal;
	camouflage = 1.6;
	attendant = true;
	backpack = B_FieldPack_black_OMMedic_F;
	magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_MEDIC
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_MEDIC
    };
    linkedItems[] =
	{
		Atlas_V_OCarrierRig_cqb_blk_F,
		Atlas_H_HelmetCCH_HiCut_Cover_mhex_F,
		G_Balaclava_light_G_blk_F,
		O_NVGoggles_blk_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_cqb_blk_F,
		Atlas_H_HelmetCCH_HiCut_Cover_mhex_F,
		G_Balaclava_light_G_blk_F,
		O_NVGoggles_blk_F,
		DefaultManLinkedItems
	};
};
class Atlas_O_C_Marine_Engineer_F: Atlas_O_C_Marine_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_C_Marine_Engineer_F.jpg";
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
	backpack = B_Carryall_black_OMEng_F;
	magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_OPFOR
    };
    linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_blk_F,
		H_Watchcap_blk,
		G_AirPurifyingRespirator_02_black_F,
		O_NVGoggles_blk_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_blk_F,
		H_Watchcap_blk,
		G_AirPurifyingRespirator_02_black_F,
		O_NVGoggles_blk_F,
		DefaultManLinkedItems
	};
};
class Atlas_O_C_Marine_Exp_F: Atlas_O_C_Marine_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_C_Marine_Exp_F.jpg";
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
	backpack = B_Carryall_black_OMExp_F;
	uniformClass = Atlas_U_O_CombatFatigues_mhex_02_F;
	magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    linkedItems[] =
	{
		Atlas_V_OCarrierRig_GL_blk_F,
		Atlas_H_HelmetCCH_HiCut_Cover_mhex_F,
		G_Balaclava_light_G_blk_F,
		O_NVGoggles_blk_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_GL_blk_F,
		Atlas_H_HelmetCCH_HiCut_Cover_mhex_F,
		G_Balaclava_light_G_blk_F,
		O_NVGoggles_blk_F,
		DefaultManLinkedItems
	};
};
class Atlas_O_C_Marine_GL_F: Atlas_O_C_Marine_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_C_Marine_GL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
    role = Grenadier;
	cost = 200000;
	weapons[] =
    {
        arifle_CTAR_GL_blk_ACO_Pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_CTAR_GL_blk_ACO_Pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    linkedItems[] =
	{
		Atlas_V_OCarrierRig_GL_blk_F,
		Atlas_H_HelmetCCH_HiCut_Cover_mhex_F,
		G_Balaclava_light_G_blk_F,
		O_NVGoggles_blk_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_GL_blk_F,
		Atlas_H_HelmetCCH_HiCut_Cover_mhex_F,
		G_Balaclava_light_G_blk_F,
		O_NVGoggles_blk_F,
		DefaultManLinkedItems
	};
};
class Atlas_O_C_Marine_HG_F: Atlas_O_C_Marine_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_C_Marine_HG_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_cfgVehicles_B_HeavyGunner_F0;
	uniformClass = Atlas_U_O_CombatFatigues_mhex_02_F;
	role = MachineGunner;
	icon = iconManMG;
	cost = 125000;
	threat[] =
    {
        1,      // Soft
        0.1,    // Armor
        0.3     // Air
    };
	weapons[] =
    {
        Atlas_MMG_01_black_ARCO_BI_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Atlas_MMG_01_black_ARCO_BI_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_3(150Rnd_93x64_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_3(150Rnd_93x64_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(SmokeShell)
    };
   	linkedItems[] =
	{
		Atlas_V_OCarrierRig_cqb_blk_F,
		lxWS_H_BMask_base,
		G_Balaclava_light_blk_F,
		O_NVGoggles_blk_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_cqb_blk_F,
		lxWS_H_BMask_base,
		G_Balaclava_light_blk_F,
		O_NVGoggles_blk_F,
		DefaultManLinkedItems
	}; 
};
class Atlas_O_C_Marine_M_F: Atlas_O_C_Marine_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_C_Marine_M_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_M_F0;
	role = Marksman;
	cost = 250000;
	weapons[] =
    {
        srifle_DMR_07_blk_DMS_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        srifle_DMR_07_blk_DMS_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_10(20Rnd_650x39_Cased_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(20Rnd_650x39_Cased_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    linkedItems[] =
	{
		Atlas_V_OCarrierRig_lite_blk_F,
		H_Headset_Black_F,
		G_Balaclava_light_blk_F,
		O_NVGoggles_blk_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_lite_blk_F,
		H_Headset_Black_F,
		G_Balaclava_light_blk_F,
		O_NVGoggles_blk_F,
		DefaultManLinkedItems
	};
};
class Atlas_O_C_Marine_F: Atlas_O_C_Marine_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_C_Marine_F.jpg";
    scope = public;
    scopeCurator = public;
};
class Atlas_O_C_Marine_AA_F: Atlas_O_C_Marine_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_C_Marine_AA_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_AA_F0;
	backpack = B_FieldPack_black_OMAA_F;
	uniformClass = Atlas_U_O_CombatFatigues_mhex_02_F;
	cost = 200000;
	icon = iconManAT;
	role = MissileSpecialist;
	threat[] = {1,0.7,0.3};
	weapons[] =
    {
       	arifle_CTAR_blk_ACO_Pointer_F,
		launch_B_Titan_Olive_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_CTAR_blk_ACO_Pointer_F,
		launch_B_Titan_Olive_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_blk_F,
		Atlas_H_HelmetCCH_HiCut_Cover_mhex_F,
		G_Balaclava_light_G_blk_F,
		O_NVGoggles_blk_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_blk_F,
		Atlas_H_HelmetCCH_HiCut_Cover_mhex_F,
		G_Balaclava_light_G_blk_F,
		O_NVGoggles_blk_F,
		DefaultManLinkedItems
	};
};
class Atlas_O_C_Marine_AT_F: Atlas_O_C_Marine_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_C_Marine_AT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_AT_F0;
	backpack = B_FieldPack_black_OMAT_F;
	cost = 200000;
	icon = iconManAT;
	role = MissileSpecialist;
	threat[] = {1,0.7,0.3};
	weapons[] =
    {
        arifle_CTAR_blk_ACO_Pointer_F,
		launch_I_Titan_short_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_CTAR_blk_ACO_Pointer_F,
		launch_I_Titan_short_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_blk_F,
		Atlas_H_HelmetCCH_HiCut_Cover_mhex_F,
		G_Balaclava_light_G_blk_F,
		O_NVGoggles_blk_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_blk_F,
		Atlas_H_HelmetCCH_HiCut_Cover_mhex_F,
		G_Balaclava_light_G_blk_F,
		O_NVGoggles_blk_F,
		DefaultManLinkedItems
	};
};
class Atlas_O_C_Marine_LAT_F: Atlas_O_C_Marine_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_C_Marine_LAT_F.jpg";
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
	backpack = B_FieldPack_black_OMLAT_F;
	weapons[] =
    {
        arifle_CTAR_blk_ACO_Pointer_F,
		launch_RPG32_green_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_CTAR_blk_ACO_Pointer_F,
		launch_RPG32_green_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
	magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        RPG32_F,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        RPG32_F,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_blk_F,
		Atlas_H_HelmetCCH_HiCut_Cover_mhex_F,
		G_Balaclava_light_G_blk_F,
		O_NVGoggles_blk_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_blk_F,
		Atlas_H_HelmetCCH_HiCut_Cover_mhex_F,
		G_Balaclava_light_G_blk_F,
		O_NVGoggles_blk_F,
		DefaultManLinkedItems
	};
};
class Atlas_O_C_Marine_SL_F: Atlas_O_C_Marine_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_C_Marine_SL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_SL_F0;
	role = Grenadier;
	icon = iconManLeader;
    cost = 500000;
	camouflage = 1.4;
	weapons[] =
    {
        arifle_CTAR_blk_ARCO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons,
		Binocular
    };
    respawnWeapons[] =
    {
        arifle_CTAR_blk_ARCO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons,
		Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        mag_2(30Rnd_580x42_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        SmokeShell,
        SMOKESHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        mag_2(30Rnd_580x42_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        SmokeShell,
        SMOKESHELLS_OPFOR
    };
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_blk_F,
		Atlas_H_HelmetCCH_HiCut_Cover_mhex_F,
		G_Balaclava_light_G_blk_F,
		O_NVGoggles_blk_F,
		DefaultManLeaderLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_blk_F,
		Atlas_H_HelmetCCH_HiCut_Cover_mhex_F,
		G_Balaclava_light_G_blk_F,
		O_NVGoggles_blk_F,
		DefaultManLeaderLinkedItems
	};
};
class Atlas_O_C_Marine_TL_F: Atlas_O_C_Marine_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_C_Marine_SL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_TL_F0;
	uniformClass = Atlas_U_O_CombatFatigues_mhex_02_F;
	role = Grenadier;
	icon = iconManLeader;
    cost = 500000;
	camouflage = 1.4;
	weapons[] =
    {
        arifle_CTAR_GL_blk_ARCO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons,
		Binocular
    };
    respawnWeapons[] =
    {
        arifle_CTAR_GL_blk_ARCO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons,
		Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        mag_2(30Rnd_580x42_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        mag_2(30Rnd_580x42_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_OPFOR
    };
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_blk_F,
		Atlas_H_HelmetCCH_HiCut_Cover_mhex_F,
		G_Balaclava_light_G_blk_F,
		O_NVGoggles_blk_F,
		DefaultManLeaderLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_blk_F,
		Atlas_H_HelmetCCH_HiCut_Cover_mhex_F,
		G_Balaclava_light_G_blk_F,
		O_NVGoggles_blk_F,
		DefaultManLeaderLinkedItems
	};
};
class Atlas_O_C_Marine_RadioOp_F: Atlas_O_C_Marine_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_C_Marine_RadioOp_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_C_B_W_RadioOperator_F0;
	backpack = B_RadioBag_01_black_F;
};
class Atlas_O_C_Marine_UAV_F: Atlas_O_C_Marine_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_C_Marine_UAV_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_B_SOLDIER_UAV_F0;
	uniformClass = Atlas_U_O_CombatFatigues_mhex_02_F;
	uavHacker = true;
    cost = 150000;
	role = SpecialOperative;
	backpack = O_UAV_01_backpack_F;
	linkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_blk_F,
		Atlas_H_HelmetCCH_HiCut_Cover_mhex_F,
		G_Balaclava_light_G_blk_F,
		O_NVGoggles_blk_F,
		O_UAVTerminal,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		Atlas_V_OCarrierRig_Lite_blk_F,
		Atlas_H_HelmetCCH_HiCut_Cover_mhex_F,
		G_Balaclava_light_G_blk_F,
		O_NVGoggles_blk_F,
		O_UAVTerminal,
		DefaultManLinkedItems
	};
};
class Atlas_O_C_Marine_Crew_F: Atlas_O_C_Marine_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_O_C_Marine_Crew_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_crew_F0;
	uniformClass = Atlas_U_O_CombatUniform_mhex;
	engineer = true;
	cost = 90000;
	role = Crewman;
	camouflage = 1.6;
	weapons[] =
    {
        arifle_CTAR_blk_F,
        hgun_Rook40_F,
        DefaultManWeapons,
		Binocular
    };
    respawnWeapons[] =
    {
        arifle_CTAR_GL_blk_ARCO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons,
		Binocular
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
		mag_2(HandGrenade_East),
        SmokeShell,
		SmokeShellRed
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
		mag_2(HandGrenade_East),
        SmokeShell,
		SmokeShellRed
    };
	linkedItems[] =
	{
		V_BandolierB_blk_F,
		H_tank_black_F,
		O_NVGoggles_blk_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_BandolierB_blk_F,
		H_tank_black_F,
		O_NVGoggles_blk_F,
		DefaultManLinkedItems
	};
	
};