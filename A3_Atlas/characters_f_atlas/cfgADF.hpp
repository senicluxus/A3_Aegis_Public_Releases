/* ADF */

class Atlas_B_A_Man_Base_F: B_Soldier_base_F
{
    scope = private;
    scopeCurator = private;
	faction = Atlas_BLU_A_F;
	genericNames = AustralianMen;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_Euro,
		Head_Enoch,
		Head_NZ,
		G_NATO_default
	};
};
class Atlas_B_A_Soldier_base_F: Atlas_B_A_Man_Base_F
{
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo;
};
class Atlas_B_A_Soldier_F: Atlas_B_A_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo;
	linkedItems[] =
	{
		V_PlateCarrier2_aucamo_F,
		H_HelmetHBK_aucamo_headset_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_aucamo_F,
		H_HelmetHBK_aucamo_headset_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	weapons[] =
	{
		arifle_AUG_Holo_Pointer_F,
		hgun_P07_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_Holo_Pointer_F,
		hgun_P07_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	role = Rifleman;
};
class Atlas_B_A_Soldier_unarmed_F: Atlas_B_A_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_unarmed_F.jpg";
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] =
	{
		V_PlateCarrier2_aucamo_F,
		H_HelmetHBK_aucamo_headset_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_aucamo_F,
		H_HelmetHBK_aucamo_headset_F,
		DefaultManLinkedItems
	};
	role = Unarmed;
	threat[] = {0.1,0.1,0.1};
};
class Atlas_B_A_Soldier_A_F: Atlas_B_A_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_A_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_A_F0;
    uniformClass = Atlas_U_B_A_CombatUniform_aucamo;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_F,
		H_HelmetHBK_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_F,
		H_HelmetHBK_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_Carryall_aucamo_BAAmmo_F;
	weapons[] =
	{
		arifle_AUG_ACO_Pointer_F,
		hgun_P07_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_ACO_Pointer_F,
		hgun_P07_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_12(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_12(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
};
class Atlas_B_A_Soldier_AAR_F: Atlas_B_A_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_AAR_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_O_SOLDIERU_AAR_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_F,
		H_HelmetHBK_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_F,
		H_HelmetHBK_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_Kitbag_aucamo_BAAAR_F;
	weapons[] =
	{
		arifle_AUG_ACO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_AUG_ACO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	role = Assistant;
};
class Atlas_B_A_Soldier_AR_F: Atlas_B_A_Soldier_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_AR_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_soldier_AR_F0;
    uniformClass = Atlas_U_B_A_CombatUniform_aucamo;
	linkedItems[] =
	{
		V_PlateCarrier2_aucamo_F,
		H_HelmetHBK_aucamo_headset_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_aucamo_F,
		H_HelmetHBK_aucamo_headset_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	weapons[] =
	{
		LMG_03_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_03_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_3(200Rnd_556x45_Box_Red_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_3(200Rnd_556x45_Box_Red_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
	};
	cost = 220000;
	icon = iconManMG;
	role = MachineGunner;
	threat[] = {1,0.1,0.3};
};
class Atlas_B_A_Soldier_lite_F: Atlas_B_A_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_lite_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_lite_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_shortsleeve_aucamo;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_F,
		H_Booniehat_aucamo_hs_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_F,
		H_Booniehat_aucamo_hs_F,
		DefaultManLinkedItems
	};
	weapons[] =
	{
		arifle_AUG_C_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
        HandGrenade,
        SmokeShell
	};
	camouflage = 1.2;
	role = Rifleman;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_Euro,
		Head_Enoch,
		Head_NZ,
		G_NATO_casual
	};
};
class Atlas_B_A_Soldier_GL_F: Atlas_B_A_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_GL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
    uniformClass = Atlas_U_B_A_CombatUniform_aucamo;
	linkedItems[] =
	{
		V_PlateCarrierGL_aucamo_F,
		H_HelmetHBK_aucamo_headset_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierGL_aucamo_F,
		H_HelmetHBK_aucamo_headset_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	weapons[] =
	{
		arifle_AUG_GL_ACO_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_GL_ACO_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	cost = 130000;
	role = Grenadier;
	threat[] = {1,0.3,0.1};
};
class Atlas_B_A_soldier_M_F: Atlas_B_A_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_soldier_M_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_M_F0;
    uniformClass = Atlas_U_B_A_CombatUniform_shortsleeve_aucamo;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_F,
		H_HelmetHBK_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_F,
		H_HelmetHBK_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	weapons[] =
	{
		srifle_EBR_blk_MRCO_LP_BI_F,
		hgun_P07_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		srifle_EBR_blk_MRCO_LP_BI_F,
		hgun_P07_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(20Rnd_762x51_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(20Rnd_762x51_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	cost = 250000;
	role = Marksman;
};
class Atlas_B_A_Officer_F: Atlas_B_A_Soldier_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Officer_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_officer_F0;
    uniformClass = Atlas_U_B_A_CombatUniform_aucamo;
	linkedItems[] =
	{
		V_Rangemaster_belt_cbr,
		H_Beret_grn,
		ItemGPS,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Rangemaster_belt_cbr,
		H_Beret_grn,
		ItemGPS,
		DefaultManLinkedItems
	};
	weapons[] =
	{
		arifle_AUG_C_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
		mag_2(9Rnd_45ACP_Mag),
        SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
		mag_2(9Rnd_45ACP_Mag),
        SMOKESHELLS_BLUFOR
	};
    cost = 600000;
	camouflage = 1.6;
	icon = iconManOfficer;
	role = Rifleman;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_Euro,
		Head_Enoch,
		Head_NZ,
		G_NATO_casual
	};
};
class Atlas_B_A_Soldier_SL_F: Atlas_B_A_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_SL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_SL_F0;
    uniformClass = Atlas_U_B_A_CombatUniform_shortsleeve_aucamo;
	linkedItems[] =
	{
		V_PlateCarrierGL_aucamo_F,
		H_HelmetHBK_aucamo_headset_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierGL_aucamo_F,
		H_HelmetHBK_aucamo_headset_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
	weapons[] =
	{
		arifle_AUG_MRCO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_AUG_MRCO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(30Rnd_556x45_AUG_Mag_Tracer_F),
		mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
		mag_2(30Rnd_556x45_AUG_Mag_Tracer_F),
		mag_2(16Rnd_9x21_Mag),
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
class Atlas_B_A_Soldier_TL_F: Atlas_B_A_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_TL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_TL_F0;
    uniformClass = Atlas_U_B_A_CombatUniform_shortsleeve_aucamo;
	linkedItems[] =
	{
		V_PlateCarrierGL_aucamo_F,
		H_HelmetHBK_aucamo_headset_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_aucamo_F,
		H_HelmetHBK_aucamo_headset_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
	weapons[] =
	{
		arifle_AUG_GL_MRCO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_AUG_GL_MRCO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(30Rnd_556x45_AUG_Mag_Tracer_F),
		mag_2(16Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
		mag_2(30Rnd_556x45_AUG_Mag_Tracer_F),
		mag_2(16Rnd_9x21_Mag),
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
class Atlas_B_A_Survivor_F: Atlas_B_A_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Survivor_F.jpg";
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
class Atlas_B_A_RadioOperator_F: Atlas_B_A_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_RadioOperator_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
    uniformClass = Atlas_U_B_A_CombatUniform_shortsleeve_aucamo;
	linkedItems[] =
	{
		V_PlateCarrier2_aucamo_F,
		H_HelmetHBK_aucamo_headset_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_aucamo_F,
		H_HelmetHBK_aucamo_headset_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_RadioBag_01_aucamo_F;
	weapons[] =
	{
		arifle_AUG_Holo_Pointer_F,
		hgun_P07_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_Holo_Pointer_F,
		hgun_P07_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	role = RadioOperator;
};
class Atlas_B_A_Soldier_AA_F: Atlas_B_A_Soldier_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_AA_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_AA_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_F,
		H_HelmetHBK_aucamo_headset_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_F,
		H_HelmetHBK_aucamo_headset_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_Kitbag_aucamo_BAAA_F;
	weapons[] =
	{
		arifle_AUG_C_Holo_Pointer_F,
		launch_B_Titan_coyote_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_Holo_Pointer_F,
		launch_B_Titan_coyote_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
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
class Atlas_B_A_Soldier_AT_F: Atlas_B_A_Soldier_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_AT_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_soldier_AT_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_F,
		H_HelmetHBK_aucamo_headset_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_F,
		H_HelmetHBK_aucamo_headset_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_Kitbag_aucamo_BAAT_F;
	weapons[] =
	{
		arifle_AUG_C_Holo_Pointer_F,
		launch_O_Titan_short_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_Holo_Pointer_F,
		launch_O_Titan_short_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
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
class Atlas_B_A_Soldier_LAT_F: Atlas_B_A_Soldier_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_LAT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_LAT_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo;
	linkedItems[] =
	{
		V_PlateCarrier2_aucamo_F,
		H_HelmetHBK_aucamo_headset_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_aucamo_F,
		H_HelmetHBK_aucamo_headset_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_AssaultPack_aucamo_BALAT_F;
	weapons[] =
	{
		arifle_AUG_Holo_Pointer_F,
		launch_MRAWS_coyote_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_Holo_Pointer_F,
		launch_MRAWS_coyote_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
        MRAWS_HEAT_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
        MRAWS_HEAT_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	cost = 130000;
	threat[] = {0.8,0.8,0.3};
	icon = iconManAT;
	role = MissileSpecialist;
	secondaryAmmoCoef = 0.5;
};
class Atlas_B_A_Soldier_AAA_F: Atlas_B_A_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_AAA_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_AAA_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_F,
		H_HelmetHBK_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_F,
		H_HelmetHBK_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_Carryall_aucamo_BAAAA_F;
	weapons[] =
	{
		arifle_AUG_ACO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_AUG_ACO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class Atlas_B_A_Soldier_AAT_F: Atlas_B_A_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_AAT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_AAT_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_F,
		H_HelmetHBK_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_F,
		H_HelmetHBK_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_Carryall_aucamo_BAAAT_F;
	weapons[] =
	{
		arifle_AUG_ACO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_AUG_ACO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 130000;
	role = Assistant;
};
class Atlas_B_A_Support_GMG_F: Atlas_B_A_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Support_GMG_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_GMG_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo;
	linkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetHBK_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetHBK_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_GMG_01_Weapon_grn_F;
	weapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class Atlas_B_A_Support_MG_F: Atlas_B_A_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Support_MG_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_MG_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo;
	linkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetHBK_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetHBK_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_HMG_01_Weapon_grn_F;
	weapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class Atlas_B_A_Support_Mort_F: Atlas_B_A_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Support_Mort_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_Mort_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo;
	linkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetHBK_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetHBK_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_Mortar_01_Weapon_grn_F;
	weapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class Atlas_B_A_Support_AMG_F: Atlas_B_A_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Support_AMG_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_AMG_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo;
	linkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetHBK_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetHBK_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_HMG_01_support_grn_F;
	weapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class Atlas_B_A_Support_AMort_F: Atlas_B_A_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Support_AMort_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_AMort_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo;
	linkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetHBK_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetHBK_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_Mortar_01_support_grn_F;
	weapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class Atlas_B_A_Engineer_F: Atlas_B_A_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Engineer_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_engineer_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_shortsleeve_aucamo;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_F,
		H_HelmetHBK_aucamo_headset_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_F,
		H_HelmetHBK_aucamo_headset_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_Kitbag_aucamo_BAEng_F;
	weapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
	};
	engineer = true;
	canDeactivateMines = true;
	detectSkill = 31;
	camouflage = 1.6;
	icon = iconManEngineer;
	picture = pictureRepair;
	role = Sapper;
};
class Atlas_B_A_Soldier_Exp_F: Atlas_B_A_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_Exp_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_exp_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo;
    linkedItems[] =
    {
		V_PlateCarrierGL_aucamo_F,
		H_HelmetHBK_aucamo_chops_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierGL_aucamo_F,
		H_HelmetHBK_aucamo_chops_F,
		DefaultManLinkedItems,
		NVGoggles
    };
	backpack = B_Kitbag_aucamo_BAExp_F;
    weapons[] =
    {
        arifle_AUG_C_Pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AUG_C_Pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
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
class Atlas_B_A_soldier_Mine_F: Atlas_B_A_Soldier_Exp_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_soldier_Mine_F.jpg";
	displayName = $STR_A3_B_T_soldier_mine_F0;
	backpack = B_Carryall_aucamo_Mine;
};
class Atlas_B_A_Soldier_Repair_F: Atlas_B_A_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_Repair_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_Soldier_repair_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo;
    linkedItems[] =
    {
		V_PlateCarrier1_aucamo_F,
		H_HelmetHBK_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_F,
		H_HelmetHBK_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles
    };
	backpack = B_AssaultPack_aucamo_BARepair_F;
    weapons[] =
    {
        arifle_AUG_C_Pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AUG_C_Pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
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
class Atlas_B_A_Soldier_CBRN_F: Atlas_B_A_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_CBRN_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_A3_C_B_W_Soldier_CBRN_F0;
	uniformClass = Atlas_U_B_A_CBRN_Suit_01_Aucamo_F;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_F,
		H_HelmetHBK_aucamo_F,
		G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_F,
		H_HelmetHBK_aucamo_F,
		G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems,
		NVGoggles
	};
	backpack = B_CombinationUnitRespirator_01_F;
	weapons[] =
    {
        arifle_AUG_C_Holo_FL_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AUG_C_Holo_FL_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
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
class Atlas_B_A_Medic_F: Atlas_B_A_Soldier_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Medic_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_medic_F0;
    uniformClass = Atlas_U_B_A_CombatUniform_aucamo;
	linkedItems[] =
	{
		V_PlateCarrierGL_aucamo_F,
		H_HelmetHBK_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierGL_aucamo_F,
		H_HelmetHBK_aucamo_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_AssaultPack_aucamo_BAMedic_F;
	weapons[] =
	{
		arifle_AUG_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
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
class Atlas_B_A_Crew_F: Atlas_B_A_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Crew_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_crew_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_F,
		H_HelmetCrew_B,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_F,
		H_HelmetCrew_B,
		DefaultManLinkedItems,
		NVGoggles
	};
	weapons[] =
	{
		arifle_AUG_C_Holo_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_Holo_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	camouflage = 1.6;
	cost = 93000;
	role = Crewman;
    engineer = true;
};
class Atlas_B_A_Helipilot_F: Atlas_B_A_Soldier_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Helipilot_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Helipilot_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo;
    linkedItems[] =
    {
		V_TacVest_oli,
        H_PilotHelmetHeli_B_A,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
		V_TacVest_oli,
        H_PilotHelmetHeli_B_A,
        DefaultManLinkedItems,
        NVGoggles
    };
	weapons[] =
	{
		hgun_PDW2000_Holo_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		hgun_PDW2000_Holo_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_9x21_Mag),
        SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_9x21_Mag),
        SMOKESHELLS_BLUFOR
	};
	cost = 93000;
	role = Crewman;
	camouflage = 2.0;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_Euro,
		Head_Enoch,
		Head_NZ,
		G_NATO_pilot
	};
};
class Atlas_B_A_Helicrew_F: Atlas_B_A_Soldier_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Helicrew_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_helicrew_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo;
    linkedItems[] =
    {
		V_TacVest_oli,
        H_CrewHelmetHeli_B_A,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
		V_TacVest_oli,
        H_CrewHelmetHeli_B_A,
        DefaultManLinkedItems,
        NVGoggles
    };
	weapons[] =
	{
		arifle_AUG_C_Holo_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_Holo_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
        SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
        SMOKESHELLS_BLUFOR
	};
	role = Crewman;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_Euro,
		Head_Enoch,
		Head_NZ,
		G_NATO_pilot
	};
};
class Atlas_B_A_Soldier_UAV_F: Atlas_B_A_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_UAV_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_B_SOLDIER_UAV_F0;
    uniformClass = Atlas_U_B_A_CombatUniform_aucamo;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_F,
		H_HelmetHBK_aucamo_F,
        B_UavTerminal,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_F,
		H_HelmetHBK_aucamo_F,
        B_UavTerminal,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = Atlas_B_A_UAV_01_backpack_F;
	weapons[] =
    {
        arifle_AUG_C_ACO_Pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AUG_C_ACO_Pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	uavHacker = true;
    cost = 150000;
	role = SpecialOperative;
};
class Atlas_B_A_soldier_UAV_06_F: Atlas_B_A_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_soldier_UAV_06_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_F0;
	backpack = Atlas_B_A_UAV_06_backpack_F;
};
class Atlas_B_A_soldier_UAV_06_medical_F: Atlas_B_A_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_soldier_UAV_06_medical_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_medical_F0;
	backpack = UAV_06_medical_backpack_base_F;
};
class Atlas_B_A_soldier_UGV_02_Demining_F: Atlas_B_A_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_soldier_UGV_02_Demining_F.jpg";
	displayName = $STR_A3_C_B_soldier_UGV_02_Demining_F0;
	backpack = UGV_02_Demining_backpack_base_F;
};
class Atlas_B_A_Soldier_universal_F: Atlas_B_A_Soldier_F
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
class Atlas_B_A_Fighter_Pilot_F: Atlas_B_A_Soldier_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Fighter_Pilot_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_B_Fighter_Pilot_name;
	uniformClass = Atlas_U_B_A_PilotCoveralls;
    linkedItems[] =
    {
        H_PilotHelmetFighter_B_A,
        DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetFighter_B_A,
        DefaultManLinkedItems
    };
	weapons[] =
	{
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_2(16Rnd_9x21_Mag),
        SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_2(16Rnd_9x21_Mag),
        SMOKESHELLS_BLUFOR
	};
    cost = 165000;
    role = Crewman;
	camouflage = 2;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_Euro,
		Head_Enoch,
		Head_NZ,
		G_NATO_pilot
	};
};
class Atlas_B_A_Pilot_F: Atlas_B_A_Soldier_base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Pilot_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Pilot_F0;
	uniformClass = Atlas_U_B_A_PilotCoveralls;
	backpack = B_Parachute;
    linkedItems[] =
    {
		V_TacVest_oli,
        H_PilotHelmetHeli_B_A,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
		V_TacVest_oli,
        H_PilotHelmetHeli_B_A,
        DefaultManLinkedItems,
        NVGoggles
    };
	weapons[] =
	{
		hgun_PDW2000_Holo_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		hgun_PDW2000_Holo_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_9x21_Mag),
        SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_9x21_Mag),
        SMOKESHELLS_BLUFOR
	};
	cost = 93000;
	role = Crewman;
	camouflage = 2.0;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_Euro,
		Head_Enoch,
		Head_NZ,
		G_NATO_pilot
	};
};

/* ADF Arid */

class Atlas_B_A_Man_ard_Base_F: B_Soldier_base_F
{
    scope = private;
    scopeCurator = private;
	faction = Atlas_BLU_A_ard_F;
	genericNames = AustralianMen;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_Euro,
		Head_Enoch,
		Head_NZ,
		G_NATO_default
	};
};
class Atlas_B_A_Soldier_ard_base_F: Atlas_B_A_Man_ard_Base_F
{
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_ard;
};
class Atlas_B_A_Soldier_ard_F: Atlas_B_A_Soldier_ard_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_ard_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_ard;
	linkedItems[] =
	{
		V_PlateCarrier2_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_headset_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_headset_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	weapons[] =
	{
		arifle_AUG_Holo_Pointer_F,
		hgun_P07_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_Holo_Pointer_F,
		hgun_P07_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	role = Rifleman;
};
class Atlas_B_A_Soldier_unarmed_ard_F: Atlas_B_A_Soldier_ard_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_unarmed_ard_F.jpg";
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_headset_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_headset_F,
		DefaultManLinkedItems
	};
	role = Unarmed;
	threat[] = {0.1,0.1,0.1};
};
class Atlas_B_A_Soldier_A_ard_F: Atlas_B_A_Soldier_ard_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_A_ard_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_A_F0;
    uniformClass = Atlas_U_B_A_CombatUniform_aucamo_ard;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_Carryall_aucamo_BAAmmo_F;
	weapons[] =
	{
		arifle_AUG_ACO_Pointer_F,
		hgun_P07_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_ACO_Pointer_F,
		hgun_P07_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_12(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_12(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
};
class Atlas_B_A_Soldier_AAR_ard_F: Atlas_B_A_Soldier_ard_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_AAR_ard_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_O_SOLDIERU_AAR_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_ard;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_Kitbag_aucamo_BAAAR_F;
	weapons[] =
	{
		arifle_AUG_ACO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_AUG_ACO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	role = Assistant;
};
class Atlas_B_A_Soldier_AR_ard_F: Atlas_B_A_Soldier_ard_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_AR_ard_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_soldier_AR_F0;
    uniformClass = Atlas_U_B_A_CombatUniform_shortsleeve_aucamo_ard;
	linkedItems[] =
	{
		V_PlateCarrier2_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_headset_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_headset_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	weapons[] =
	{
		LMG_03_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_03_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_3(200Rnd_556x45_Box_Red_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_3(200Rnd_556x45_Box_Red_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
	};
	cost = 220000;
	icon = iconManMG;
	role = MachineGunner;
	threat[] = {1,0.1,0.3};
};
class Atlas_B_A_Soldier_lite_ard_F: Atlas_B_A_Soldier_ard_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_lite_ard_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_lite_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_ard;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_ard_F,
		H_Booniehat_aucamo_hs_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_ard_F,
		H_Booniehat_aucamo_hs_F,
		DefaultManLinkedItems
	};
	weapons[] =
	{
		arifle_AUG_C_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
        HandGrenade,
        SmokeShell
	};
	camouflage = 1.2;
	role = Rifleman;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_Euro,
		Head_Enoch,
		Head_NZ,
		G_NATO_casual
	};
};
class Atlas_B_A_Soldier_GL_ard_F: Atlas_B_A_Soldier_ard_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_GL_ard_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
    uniformClass = Atlas_U_B_A_CombatUniform_aucamo_ard;
	linkedItems[] =
	{
		V_PlateCarrierGL_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_headset_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierGL_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_headset_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	weapons[] =
	{
		arifle_AUG_GL_ACO_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_GL_ACO_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	cost = 130000;
	role = Grenadier;
	threat[] = {1,0.3,0.1};
};
class Atlas_B_A_soldier_M_ard_F: Atlas_B_A_Soldier_ard_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_soldier_M_ard_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_M_F0;
    uniformClass = Atlas_U_B_A_CombatUniform_aucamo_ard;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	weapons[] =
	{
		srifle_EBR_blk_MRCO_LP_BI_F,
		hgun_P07_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		srifle_EBR_blk_MRCO_LP_BI_F,
		hgun_P07_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(20Rnd_762x51_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(20Rnd_762x51_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	cost = 250000;
	role = Marksman;
};
class Atlas_B_A_Officer_ard_F: Atlas_B_A_Soldier_ard_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Officer_ard_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_officer_F0;
    uniformClass = Atlas_U_B_A_CombatUniform_aucamo_ard;
	linkedItems[] =
	{
		V_Rangemaster_belt_cbr,
		H_Beret_grn,
		ItemGPS,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Rangemaster_belt_cbr,
		H_Beret_grn,
		ItemGPS,
		DefaultManLinkedItems
	};
	weapons[] =
	{
		arifle_AUG_C_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
		mag_2(9Rnd_45ACP_Mag),
        SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
		mag_2(9Rnd_45ACP_Mag),
        SMOKESHELLS_BLUFOR
	};
    cost = 600000;
	camouflage = 1.6;
	icon = iconManOfficer;
	role = Rifleman;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_Euro,
		Head_Enoch,
		Head_NZ,
		G_NATO_casual
	};
};
class Atlas_B_A_Soldier_SL_ard_F: Atlas_B_A_Soldier_ard_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_SL_ard_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_SL_F0;
    uniformClass = Atlas_U_B_A_CombatUniform_shortsleeve_aucamo_ard;
	linkedItems[] =
	{
		V_PlateCarrierGL_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_headset_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierGL_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_headset_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
	weapons[] =
	{
		arifle_AUG_MRCO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_AUG_MRCO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(30Rnd_556x45_AUG_Mag_Tracer_F),
		mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
		mag_2(30Rnd_556x45_AUG_Mag_Tracer_F),
		mag_2(16Rnd_9x21_Mag),
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
class Atlas_B_A_Soldier_TL_ard_F: Atlas_B_A_Soldier_ard_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_TL_ard_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_TL_F0;
    uniformClass = Atlas_U_B_A_CombatUniform_shortsleeve_aucamo_ard;
	linkedItems[] =
	{
		V_PlateCarrierGL_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_headset_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierGL_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_headset_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
	weapons[] =
	{
		arifle_AUG_GL_MRCO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_AUG_GL_MRCO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(30Rnd_556x45_AUG_Mag_Tracer_F),
		mag_2(16Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
		mag_2(30Rnd_556x45_AUG_Mag_Tracer_F),
		mag_2(16Rnd_9x21_Mag),
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
class Atlas_B_A_Survivor_ard_F: Atlas_B_A_Soldier_ard_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Survivor_ard_F.jpg";
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
class Atlas_B_A_RadioOperator_ard_F: Atlas_B_A_Soldier_ard_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_RadioOperator_ard_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
    uniformClass = Atlas_U_B_A_CombatUniform_shortsleeve_aucamo_ard;
	linkedItems[] =
	{
		V_PlateCarrier2_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_headset_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_headset_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_RadioBag_01_aucamo_F;
	weapons[] =
	{
		arifle_AUG_Holo_Pointer_F,
		hgun_P07_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_Holo_Pointer_F,
		hgun_P07_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	role = RadioOperator;
};
class Atlas_B_A_Soldier_AA_ard_F: Atlas_B_A_Soldier_ard_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_AA_ard_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_AA_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_ard;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_headset_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_headset_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_Kitbag_aucamo_BAAA_F;
	weapons[] =
	{
		arifle_AUG_C_Holo_Pointer_F,
		launch_B_Titan_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_Holo_Pointer_F,
		launch_B_Titan_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
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
class Atlas_B_A_Soldier_AT_ard_F: Atlas_B_A_Soldier_ard_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_AT_ard_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_soldier_AT_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_ard;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_headset_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_headset_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_Kitbag_aucamo_BAAT_F;
	weapons[] =
	{
		arifle_AUG_C_Holo_Pointer_F,
		launch_B_Titan_short_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_Holo_Pointer_F,
		launch_B_Titan_short_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
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
class Atlas_B_A_Soldier_LAT_ard_F: Atlas_B_A_Soldier_ard_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_LAT_ard_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_LAT_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_shortsleeve_aucamo_ard;
	linkedItems[] =
	{
		V_PlateCarrier2_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_headset_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_headset_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_AssaultPack_aucamo_BALAT_F;
	weapons[] =
	{
		arifle_AUG_Holo_Pointer_F,
		launch_MRAWS_sand_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_Holo_Pointer_F,
		launch_MRAWS_sand_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
        MRAWS_HEAT_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
        MRAWS_HEAT_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	cost = 130000;
	threat[] = {0.8,0.8,0.3};
	icon = iconManAT;
	role = MissileSpecialist;
	secondaryAmmoCoef = 0.5;
};
class Atlas_B_A_Soldier_AAA_ard_F: Atlas_B_A_Soldier_ard_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_AAA_ard_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_AAA_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_ard;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_Carryall_aucamo_BAAAA_F;
	weapons[] =
	{
		arifle_AUG_ACO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_AUG_ACO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class Atlas_B_A_Soldier_AAT_ard_F: Atlas_B_A_Soldier_ard_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_AAT_ard_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_AAT_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_ard;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_Carryall_aucamo_BAAAT_F;
	weapons[] =
	{
		arifle_AUG_ACO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_AUG_ACO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 130000;
	role = Assistant;
};
class Atlas_B_A_Support_GMG_ard_F: Atlas_B_A_Soldier_ard_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Support_GMG_ard_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_GMG_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_ard;
	linkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetHBK_aucamo_arid_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetHBK_aucamo_arid_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_GMG_01_Weapon_grn_F;
	weapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class Atlas_B_A_Support_MG_ard_F: Atlas_B_A_Soldier_ard_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Support_MG_ard_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_MG_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_ard;
	linkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetHBK_aucamo_arid_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetHBK_aucamo_arid_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_HMG_01_Weapon_grn_F;
	weapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class Atlas_B_A_Support_Mort_ard_F: Atlas_B_A_Soldier_ard_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Support_Mort_ard_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_Mort_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_ard;
	linkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetHBK_aucamo_arid_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetHBK_aucamo_arid_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_Mortar_01_Weapon_grn_F;
	weapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class Atlas_B_A_Support_AMG_ard_F: Atlas_B_A_Soldier_ard_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Support_AMG_ard_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_AMG_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_ard;
	linkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetHBK_aucamo_arid_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetHBK_aucamo_arid_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_HMG_01_support_grn_F;
	weapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class Atlas_B_A_Support_AMort_ard_F: Atlas_B_A_Soldier_ard_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Support_AMort_ard_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_AMort_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_ard;
	linkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetHBK_aucamo_arid_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetHBK_aucamo_arid_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_Mortar_01_support_grn_F;
	weapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class Atlas_B_A_Engineer_ard_F: Atlas_B_A_Soldier_ard_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Engineer_ard_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_engineer_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_shortsleeve_aucamo_ard;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_headset_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_headset_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_Kitbag_aucamo_BAEng_F;
	weapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
	};
	engineer = true;
	canDeactivateMines = true;
	detectSkill = 31;
	camouflage = 1.6;
	icon = iconManEngineer;
	picture = pictureRepair;
	role = Sapper;
};
class Atlas_B_A_Soldier_Exp_ard_F: Atlas_B_A_Soldier_ard_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_Exp_ard_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_exp_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_ard;
    linkedItems[] =
    {
		V_PlateCarrierGL_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_chops_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierGL_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_chops_F,
		DefaultManLinkedItems,
		NVGoggles
    };
	backpack = B_Kitbag_aucamo_BAExp_F;
    weapons[] =
    {
        arifle_AUG_C_Pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AUG_C_Pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
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
class Atlas_B_A_soldier_Mine_ard_F: Atlas_B_A_Soldier_Exp_ard_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_soldier_Mine_ard_F.jpg";
	displayName = $STR_A3_B_T_soldier_mine_F0;
	backpack = B_Carryall_aucamo_Mine;
};
class Atlas_B_A_Soldier_Repair_ard_F: Atlas_B_A_Soldier_ard_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_Repair_ard_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_Soldier_repair_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_ard;
    linkedItems[] =
    {
		V_PlateCarrier1_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_F,
		DefaultManLinkedItems,
		NVGoggles
    };
	backpack = B_AssaultPack_aucamo_BARepair_F;
    weapons[] =
    {
        arifle_AUG_C_Pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AUG_C_Pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
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
class Atlas_B_A_Soldier_CBRN_ard_F: Atlas_B_A_Soldier_ard_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_CBRN_ard_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_A3_C_B_W_Soldier_CBRN_F0;
	uniformClass = Atlas_U_B_A_CBRN_Suit_01_Aucamo_F;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_F,
		G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_F,
		G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems,
		NVGoggles
	};
	backpack = B_CombinationUnitRespirator_01_F;
	weapons[] =
    {
        arifle_AUG_C_Holo_FL_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AUG_C_Holo_FL_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
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
class Atlas_B_A_Medic_ard_F: Atlas_B_A_Soldier_ard_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Medic_ard_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_medic_F0;
    uniformClass = Atlas_U_B_A_CombatUniform_aucamo_ard;
	linkedItems[] =
	{
		V_PlateCarrierGL_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierGL_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_AssaultPack_aucamo_BAMedic_F;
	weapons[] =
	{
		arifle_AUG_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
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
class Atlas_B_A_Crew_ard_F: Atlas_B_A_Soldier_ard_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Crew_ard_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_crew_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_shortsleeve_aucamo_ard;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_ard_F,
		H_HelmetCrew_B,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_ard_F,
		H_HelmetCrew_B,
		DefaultManLinkedItems,
		NVGoggles
	};
	weapons[] =
	{
		arifle_AUG_C_Holo_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_Holo_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	camouflage = 1.6;
	cost = 93000;
	role = Crewman;
    engineer = true;
};
class Atlas_B_A_Helipilot_ard_F: Atlas_B_A_Soldier_ard_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Helipilot_ard_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Helipilot_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_ard;
    linkedItems[] =
    {
		V_TacVest_oli,
        H_PilotHelmetHeli_B_A,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
		V_TacVest_oli,
        H_PilotHelmetHeli_B_A,
        DefaultManLinkedItems,
        NVGoggles
    };
	weapons[] =
	{
		hgun_PDW2000_Holo_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		hgun_PDW2000_Holo_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_9x21_Mag),
        SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_9x21_Mag),
        SMOKESHELLS_BLUFOR
	};
	cost = 93000;
	role = Crewman;
	camouflage = 2.0;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_Euro,
		Head_Enoch,
		Head_NZ,
		G_NATO_pilot
	};
};
class Atlas_B_A_Helicrew_ard_F: Atlas_B_A_Soldier_ard_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Helicrew_ard_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_helicrew_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_ard;
    linkedItems[] =
    {
		V_TacVest_oli,
        H_CrewHelmetHeli_B_A,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
		V_TacVest_oli,
        H_CrewHelmetHeli_B_A,
        DefaultManLinkedItems,
        NVGoggles
    };
	weapons[] =
	{
		arifle_AUG_C_Holo_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_Holo_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
        SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
        SMOKESHELLS_BLUFOR
	};
	role = Crewman;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_Euro,
		Head_Enoch,
		Head_NZ,
		G_NATO_pilot
	};
};
class Atlas_B_A_Soldier_UAV_ard_F: Atlas_B_A_Soldier_ard_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_UAV_ard_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_B_SOLDIER_UAV_F0;
    uniformClass = Atlas_U_B_A_CombatUniform_aucamo_ard;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_F,
        B_UavTerminal,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_ard_F,
		H_HelmetHBK_aucamo_arid_F,
        B_UavTerminal,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = Atlas_B_A_UAV_01_backpack_F;
	weapons[] =
    {
        arifle_AUG_C_ACO_Pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AUG_C_ACO_Pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	uavHacker = true;
    cost = 150000;
	role = SpecialOperative;
};
class Atlas_B_A_soldier_UAV_06_ard_F: Atlas_B_A_Soldier_UAV_ard_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_soldier_UAV_06_ard_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_F0;
	backpack = Atlas_B_A_UAV_06_backpack_F;
};
class Atlas_B_A_soldier_UAV_06_medical_ard_F: Atlas_B_A_Soldier_UAV_ard_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_soldier_UAV_06_medical_ard_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_medical_F0;
	backpack = UAV_06_medical_backpack_base_F;
};
class Atlas_B_A_soldier_UGV_02_Demining_ard_F: Atlas_B_A_Soldier_UAV_ard_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_soldier_UGV_02_Demining_ard_F.jpg";
	displayName = $STR_A3_C_B_soldier_UGV_02_Demining_F0;
	backpack = UGV_02_Demining_backpack_base_F;
};
class Atlas_B_A_Soldier_universal_ard_F: Atlas_B_A_Soldier_ard_F
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
/* class Atlas_B_A_Fighter_Pilot_ard_F: Atlas_B_A_Soldier_ard_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Fighter_Pilot_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_B_Fighter_Pilot_name;
	uniformClass = Atlas_U_B_A_PilotCoveralls;
    linkedItems[] =
    {
        H_PilotHelmetFighter_B_A,
        DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetFighter_B_A,
        DefaultManLinkedItems
    };
	weapons[] =
	{
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_2(16Rnd_9x21_Mag),
        SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_2(16Rnd_9x21_Mag),
        SMOKESHELLS_BLUFOR
	};
    cost = 165000;
    role = Crewman;
	camouflage = 2;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_Euro,
		Head_Enoch,
		Head_NZ,
		G_NATO_pilot
	};
}; */

/* ADF Tropic */

class Atlas_B_A_Man_trp_Base_F: B_Soldier_base_F
{
    scope = private;
    scopeCurator = private;
	faction = Atlas_BLU_A_trp_F;
	genericNames = AustralianMen;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_Euro,
		Head_Enoch,
		Head_NZ,
		G_NATO_default
	};
};
class Atlas_B_A_Soldier_trp_base_F: Atlas_B_A_Man_trp_Base_F
{
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_trp;
};
class Atlas_B_A_Soldier_trp_F: Atlas_B_A_Soldier_trp_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_trp_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_trp;
	linkedItems[] =
	{
		V_PlateCarrier2_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_headset_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_headset_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_AUG_Holo_Pointer_F,
		hgun_P07_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_Holo_Pointer_F,
		hgun_P07_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	role = Rifleman;
};
class Atlas_B_A_Soldier_unarmed_trp_F: Atlas_B_A_Soldier_trp_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_unarmed_trp_F.jpg";
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_headset_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_headset_F,
		DefaultManLinkedItems
	};
	role = Unarmed;
	threat[] = {0.1,0.1,0.1};
};
class Atlas_B_A_Soldier_A_trp_F: Atlas_B_A_Soldier_trp_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_A_trp_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_A_F0;
    uniformClass = Atlas_U_B_A_CombatUniform_aucamo_trp;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_Carryall_aucamo_BAAmmo_F;
	weapons[] =
	{
		arifle_AUG_ACO_Pointer_F,
		hgun_P07_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_ACO_Pointer_F,
		hgun_P07_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_12(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_12(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
};
class Atlas_B_A_Soldier_AAR_trp_F: Atlas_B_A_Soldier_trp_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_AAR_trp_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_O_SOLDIERU_AAR_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_trp;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_Kitbag_aucamo_BAAAR_F;
	weapons[] =
	{
		arifle_AUG_ACO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_AUG_ACO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	role = Assistant;
};
class Atlas_B_A_Soldier_AR_trp_F: Atlas_B_A_Soldier_trp_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_AR_trp_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_soldier_AR_F0;
    uniformClass = Atlas_U_B_A_CombatUniform_shortsleeve_aucamo_trp;
	linkedItems[] =
	{
		V_PlateCarrier2_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_headset_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_headset_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		LMG_03_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_03_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_3(200Rnd_556x45_Box_Red_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_3(200Rnd_556x45_Box_Red_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
	};
	cost = 220000;
	icon = iconManMG;
	role = MachineGunner;
	threat[] = {1,0.1,0.3};
};
class Atlas_B_A_Soldier_lite_trp_F: Atlas_B_A_Soldier_trp_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_lite_trp_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_lite_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_shortsleeve_aucamo_trp;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_trp_F,
		H_Booniehat_aucamo_hs_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_trp_F,
		H_Booniehat_aucamo_hs_F,
		DefaultManLinkedItems
	};
	weapons[] =
	{
		arifle_AUG_C_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
        HandGrenade,
        SmokeShell
	};
	camouflage = 1.2;
	role = Rifleman;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_Euro,
		Head_Enoch,
		Head_NZ,
		G_NATO_casual
	};
};
class Atlas_B_A_Soldier_GL_trp_F: Atlas_B_A_Soldier_trp_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_GL_trp_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
    uniformClass = Atlas_U_B_A_CombatUniform_aucamo_trp;
	linkedItems[] =
	{
		V_PlateCarrierGL_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_headset_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierGL_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_headset_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_AUG_GL_ACO_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_GL_ACO_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	cost = 130000;
	role = Grenadier;
	threat[] = {1,0.3,0.1};
};
class Atlas_B_A_soldier_M_trp_F: Atlas_B_A_Soldier_trp_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_soldier_M_trp_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_M_F0;
    uniformClass = Atlas_U_B_A_CombatUniform_aucamo_trp;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		srifle_EBR_blk_MRCO_LP_BI_F,
		hgun_P07_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		srifle_EBR_blk_MRCO_LP_BI_F,
		hgun_P07_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(20Rnd_762x51_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(20Rnd_762x51_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	cost = 250000;
	role = Marksman;
};
class Atlas_B_A_Officer_trp_F: Atlas_B_A_Soldier_trp_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Officer_trp_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_officer_F0;
    uniformClass = Atlas_U_B_A_CombatUniform_aucamo_trp;
	linkedItems[] =
	{
		V_Rangemaster_belt_cbr,
		H_Beret_grn,
		ItemGPS,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Rangemaster_belt_cbr,
		H_Beret_grn,
		ItemGPS,
		DefaultManLinkedItems
	};
	weapons[] =
	{
		arifle_AUG_C_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_F,
		hgun_ACPC2_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
		mag_2(9Rnd_45ACP_Mag),
        SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
		mag_2(9Rnd_45ACP_Mag),
        SMOKESHELLS_BLUFOR
	};
    cost = 600000;
	camouflage = 1.6;
	icon = iconManOfficer;
	role = Rifleman;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_Euro,
		Head_Enoch,
		Head_NZ,
		G_NATO_casual
	};
};
class Atlas_B_A_Soldier_SL_trp_F: Atlas_B_A_Soldier_trp_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_SL_trp_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_SL_F0;
    uniformClass = Atlas_U_B_A_CombatUniform_shortsleeve_aucamo_trp;
	linkedItems[] =
	{
		V_PlateCarrierGL_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_headset_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierGL_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_headset_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_AUG_MRCO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_AUG_MRCO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(30Rnd_556x45_AUG_Mag_Tracer_F),
		mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
		mag_2(30Rnd_556x45_AUG_Mag_Tracer_F),
		mag_2(16Rnd_9x21_Mag),
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
class Atlas_B_A_Soldier_TL_trp_F: Atlas_B_A_Soldier_trp_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_TL_trp_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_TL_F0;
    uniformClass = Atlas_U_B_A_CombatUniform_shortsleeve_aucamo_trp;
	linkedItems[] =
	{
		V_PlateCarrierGL_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_headset_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierGL_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_headset_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_AUG_GL_MRCO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_AUG_GL_MRCO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(30Rnd_556x45_AUG_Mag_Tracer_F),
		mag_2(16Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
		mag_2(30Rnd_556x45_AUG_Mag_Tracer_F),
		mag_2(16Rnd_9x21_Mag),
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
class Atlas_B_A_Survivor_trp_F: Atlas_B_A_Soldier_trp_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Survivor_trp_F.jpg";
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
class Atlas_B_A_RadioOperator_trp_F: Atlas_B_A_Soldier_trp_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_RadioOperator_trp_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
    uniformClass = Atlas_U_B_A_CombatUniform_shortsleeve_aucamo_trp;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_headset_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_headset_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_RadioBag_01_aucamo_F;
	weapons[] =
	{
		arifle_AUG_Holo_Pointer_F,
		hgun_P07_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_Holo_Pointer_F,
		hgun_P07_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	role = RadioOperator;
};
class Atlas_B_A_Soldier_AA_trp_F: Atlas_B_A_Soldier_trp_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_AA_trp_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_AA_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_trp;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_headset_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_headset_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_Kitbag_aucamo_BAAA_F;
	weapons[] =
	{
		arifle_AUG_C_Holo_Pointer_F,
		launch_B_Titan_olive_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_Holo_Pointer_F,
		launch_B_Titan_olive_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
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
class Atlas_B_A_Soldier_AT_trp_F: Atlas_B_A_Soldier_trp_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_AT_trp_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_soldier_AT_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_trp;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_headset_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_headset_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_Kitbag_aucamo_BAAT_F;
	weapons[] =
	{
		arifle_AUG_C_Holo_Pointer_F,
		launch_I_Titan_short_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_Holo_Pointer_F,
		launch_I_Titan_short_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
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
class Atlas_B_A_Soldier_LAT_trp_F: Atlas_B_A_Soldier_trp_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_LAT_trp_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_LAT_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_trp;
	linkedItems[] =
	{
		V_PlateCarrier2_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_headset_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_headset_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_AssaultPack_aucamo_BALAT_F;
	weapons[] =
	{
		arifle_AUG_Holo_Pointer_F,
		launch_MRAWS_green_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_Holo_Pointer_F,
		launch_MRAWS_green_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
        MRAWS_HEAT_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
        MRAWS_HEAT_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	cost = 130000;
	threat[] = {0.8,0.8,0.3};
	icon = iconManAT;
	role = MissileSpecialist;
	secondaryAmmoCoef = 0.5;
};
class Atlas_B_A_Soldier_AAA_trp_F: Atlas_B_A_Soldier_trp_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_AAA_trp_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_AAA_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_trp;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_Carryall_aucamo_BAAAA_F;
	weapons[] =
	{
		arifle_AUG_ACO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_AUG_ACO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class Atlas_B_A_Soldier_AAT_trp_F: Atlas_B_A_Soldier_trp_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_AAT_trp_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_AAT_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_trp;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_Carryall_aucamo_BAAAT_F;
	weapons[] =
	{
		arifle_AUG_ACO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_AUG_ACO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 130000;
	role = Assistant;
};
class Atlas_B_A_Support_GMG_trp_F: Atlas_B_A_Soldier_trp_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Support_GMG_trp_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_GMG_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_trp;
	linkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetHBK_aucamo_tropic_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetHBK_aucamo_tropic_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_GMG_01_Weapon_grn_F;
	weapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class Atlas_B_A_Support_MG_trp_F: Atlas_B_A_Soldier_trp_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Support_MG_trp_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_MG_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_trp;
	linkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetHBK_aucamo_tropic_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetHBK_aucamo_tropic_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_HMG_01_Weapon_grn_F;
	weapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class Atlas_B_A_Support_Mort_trp_F: Atlas_B_A_Soldier_trp_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Support_Mort_trp_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_Mort_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_trp;
	linkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetHBK_aucamo_tropic_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetHBK_aucamo_tropic_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_Mortar_01_Weapon_grn_F;
	weapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class Atlas_B_A_Support_AMG_trp_F: Atlas_B_A_Soldier_trp_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Support_AMG_trp_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_AMG_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_trp;
	linkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetHBK_aucamo_tropic_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetHBK_aucamo_tropic_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_HMG_01_support_grn_F;
	weapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class Atlas_B_A_Support_AMort_trp_F: Atlas_B_A_Soldier_trp_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Support_AMort_trp_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_AMort_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_trp;
	linkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetHBK_aucamo_tropic_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetHBK_aucamo_tropic_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_Mortar_01_support_grn_F;
	weapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	cost = 220000;
	role = Assistant;
};
class Atlas_B_A_Engineer_trp_F: Atlas_B_A_Soldier_trp_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Engineer_trp_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_engineer_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_shortsleeve_aucamo_trp;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_headset_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_headset_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_Kitbag_aucamo_BAEng_F;
	weapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_Pointer_F,
		hgun_P07_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
	};
	engineer = true;
	canDeactivateMines = true;
	detectSkill = 31;
	camouflage = 1.6;
	icon = iconManEngineer;
	picture = pictureRepair;
	role = Sapper;
};
class Atlas_B_A_Soldier_Exp_trp_F: Atlas_B_A_Soldier_trp_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_Exp_trp_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_exp_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_trp;
    linkedItems[] =
    {
		V_PlateCarrierGL_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_chops_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierGL_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_chops_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
    };
	backpack = B_Kitbag_aucamo_BAExp_F;
    weapons[] =
    {
        arifle_AUG_C_Pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AUG_C_Pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
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
class Atlas_B_A_soldier_Mine_trp_F: Atlas_B_A_Soldier_Exp_trp_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_soldier_Mine_trp_F.jpg";
	displayName = $STR_A3_B_T_soldier_mine_F0;
	backpack = B_Carryall_aucamo_Mine;
};
class Atlas_B_A_Soldier_Repair_trp_F: Atlas_B_A_Soldier_trp_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_Repair_trp_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_Soldier_repair_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_trp;
    linkedItems[] =
    {
		V_PlateCarrier1_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
    };
	backpack = B_AssaultPack_aucamo_BARepair_F;
    weapons[] =
    {
        arifle_AUG_C_Pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AUG_C_Pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
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
class Atlas_B_A_Soldier_CBRN_trp_F: Atlas_B_A_Soldier_trp_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_CBRN_trp_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_A3_C_B_W_Soldier_CBRN_F0;
	uniformClass = Atlas_U_B_A_CBRN_Suit_01_Aucamo_F;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_F,
		G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_F,
		G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_CombinationUnitRespirator_01_F;
	weapons[] =
    {
        arifle_AUG_C_Holo_FL_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AUG_C_Holo_FL_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
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
class Atlas_B_A_Medic_trp_F: Atlas_B_A_Soldier_trp_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Medic_trp_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_medic_F0;
    uniformClass = Atlas_U_B_A_CombatUniform_aucamo_trp;
	linkedItems[] =
	{
		V_PlateCarrierGL_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierGL_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_AssaultPack_aucamo_BAMedic_F;
	weapons[] =
	{
		arifle_AUG_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
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
class Atlas_B_A_Crew_trp_F: Atlas_B_A_Soldier_trp_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Crew_trp_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_crew_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_shortsleeve_aucamo_trp;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_trp_F,
		H_HelmetCrew_B,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_trp_F,
		H_HelmetCrew_B,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_AUG_C_Holo_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_Holo_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_556x45_AUG_Mag_F),
		mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	camouflage = 1.6;
	cost = 93000;
	role = Crewman;
    engineer = true;
};
class Atlas_B_A_Helipilot_trp_F: Atlas_B_A_Soldier_trp_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Helipilot_trp_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Helipilot_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_trp;
    linkedItems[] =
    {
		V_TacVest_oli,
        H_PilotHelmetHeli_B_A,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
		V_TacVest_oli,
        H_PilotHelmetHeli_B_A,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
	weapons[] =
	{
		hgun_PDW2000_Holo_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		hgun_PDW2000_Holo_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_9x21_Mag),
        SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_9x21_Mag),
        SMOKESHELLS_BLUFOR
	};
	cost = 93000;
	role = Crewman;
	camouflage = 2.0;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_Euro,
		Head_Enoch,
		Head_NZ,
		G_NATO_pilot
	};
};
class Atlas_B_A_Helicrew_trp_F: Atlas_B_A_Soldier_trp_base_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Helicrew_trp_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_helicrew_F0;
	uniformClass = Atlas_U_B_A_CombatUniform_aucamo_trp;
    linkedItems[] =
    {
		V_TacVest_oli,
        H_CrewHelmetHeli_B_A,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
		V_TacVest_oli,
        H_CrewHelmetHeli_B_A,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
	weapons[] =
	{
		arifle_AUG_C_Holo_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AUG_C_Holo_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
        SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_AUG_Mag_F),
        SMOKESHELLS_BLUFOR
	};
	role = Crewman;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_Euro,
		Head_Enoch,
		Head_NZ,
		G_NATO_pilot
	};
};
class Atlas_B_A_Soldier_UAV_trp_F: Atlas_B_A_Soldier_trp_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Soldier_UAV_trp_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_B_SOLDIER_UAV_F0;
    uniformClass = Atlas_U_B_A_CombatUniform_aucamo_trp;
	linkedItems[] =
	{
		V_PlateCarrier1_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_F,
        B_UavTerminal,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_aucamo_trp_F,
		H_HelmetHBK_aucamo_tropic_F,
        B_UavTerminal,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = Atlas_B_A_UAV_01_backpack_F;
	weapons[] =
    {
        arifle_AUG_C_ACO_Pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AUG_C_ACO_Pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_556x45_AUG_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	uavHacker = true;
    cost = 150000;
	role = SpecialOperative;
};
class Atlas_B_A_soldier_UAV_06_trp_F: Atlas_B_A_Soldier_UAV_trp_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_soldier_UAV_06_trp_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_F0;
	backpack = Atlas_B_A_UAV_06_backpack_F;
};
class Atlas_B_A_soldier_UAV_06_medical_trp_F: Atlas_B_A_Soldier_UAV_trp_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_soldier_UAV_06_medical_trp_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_medical_F0;
	backpack = UAV_06_medical_backpack_base_F;
};
class Atlas_B_A_soldier_UGV_02_Demining_trp_F: Atlas_B_A_Soldier_UAV_trp_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_soldier_UGV_02_Demining_trp_F.jpg";
	displayName = $STR_A3_C_B_soldier_UGV_02_Demining_F0;
	backpack = UGV_02_Demining_backpack_base_F;
};
class Atlas_B_A_Soldier_universal_trp_F: Atlas_B_A_Soldier_trp_F
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