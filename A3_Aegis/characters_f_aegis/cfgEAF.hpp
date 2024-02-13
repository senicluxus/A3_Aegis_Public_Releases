/* LDF */
class I_E_Man_Base_F;
class I_E_Soldier_base_F: I_E_Man_Base_F
{
	identityTypes[] =
    {
        LanguagePOL_F,
        Head_Enoch,
        Head_Euro,
        G_EAF_default
    };
};
class I_E_Soldier_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_F.jpg";
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_headset_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_headset_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
    magazines[] =
    {
		mag_10(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_10(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class I_E_Soldier_unarmed_F: I_E_Soldier_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_unarmed_F.jpg";
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_headset_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_headset_F,
		DefaultManLinkedItems
	};
};
class I_E_Soldier_A_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_A_F.jpg";
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	magazines[] =
	{
		mag_12(30Rnd_65x39_caseless_msbs_mag),
		mag_2(11Rnd_45ACP_Mag),
		mag_2(HandGrenade),
		mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_12(30Rnd_65x39_caseless_msbs_mag),
		mag_2(11Rnd_45ACP_Mag),
		mag_2(HandGrenade),
		mag_2(SmokeShell)
	};
};
class I_E_Soldier_AAR_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_AAR_F.jpg";
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_ico_pointer_F,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_ico_pointer_F,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
    };
};
class I_E_Soldier_AR_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_AR_F.jpg";
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_headset_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_headset_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
    weapons[] =
    {
        LMG_Mk200_black_MRCO_LP_F,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        LMG_Mk200_black_MRCO_LP_F,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_3(200Rnd_65x39_cased_Box_Red),
        mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_3(200Rnd_65x39_cased_Box_Red),
        mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        mag_2(SmokeShell)
    };
	threat[] =
    {
        1,      // Soft
        0.1,    // Armor
        0.3     // Air
    };
};
class I_E_Soldier_lite_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_lite_F.jpg";
	linkedItems[] =
	{
		V_CarrierRigKBT_01_EAF_F,
		H_MilCap_eaf,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_EAF_F,
		H_MilCap_eaf,
		DefaultManLinkedItems
	};
	weapons[] =
    {
        arifle_MSBS65_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_F,
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
	cost = 90000;
	identityTypes[] =
	{
		LanguagePOL_F,
		Head_Euro,
		Head_Enoch,
        G_NATO_casual
	};
};
class I_E_Soldier_GL_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_GL_F.jpg";
	linkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_EAF_F,
		H_HelmetHBK_headset_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_EAF_F,
		H_HelmetHBK_headset_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
	cost = 130000;
	threat[] =
    {
        1,      // Soft
        0.3,    // Armor
        0.1     // Air
    };
};
class I_E_soldier_M_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_soldier_M_F.jpg";
    weapons[] =
    {
        arifle_MSBS65_Mark_SOS_LP_BI_F,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_Mark_SOS_LP_BI_F,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class I_E_Officer_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Officer_F.jpg";
	linkedItems[] =
    {
        V_Rangemaster_belt_oli,
        H_Beret_EAF_01_F,
        DefaultManLeaderLinkedItems
    };
	respawnLinkedItems[] =
    {
        V_Rangemaster_belt_oli,
        H_Beret_EAF_01_F,
        DefaultManLeaderLinkedItems
    };
	weapons[] =
	{
		arifle_MSBS65_F,
		hgun_Pistol_heavy_01_green_MRD_F,
		DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_F,
		hgun_Pistol_heavy_01_green_MRD_F,
		DefaultManWeapons,
		Binocular
	};
	magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        SMOKESHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        SMOKESHELLS_BLUFOR
    };
    cost = 600000;
	identityTypes[] =
	{
		LanguagePOL_F,
		Head_Euro,
		Head_Enoch,
        G_NATO_casual
	};
};
class I_E_Soldier_SL_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_SL_F.jpg";
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_chops_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_chops_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
    {
        arifle_MSBS65_ico_pointer_F,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons,
		Binocular
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_ico_pointer_F,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons,
        Binocular
    };
	magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_msbs_mag),
        mag_2(30Rnd_65x39_caseless_msbs_mag_Tracer),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_msbs_mag),
        mag_2(30Rnd_65x39_caseless_msbs_mag_Tracer),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
    };
};
class I_E_Soldier_TL_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_TL_F.jpg";
    weapons[] =
    {
        arifle_MSBS65_GL_ico_pointer_F,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_GL_ico_pointer_F,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_msbs_mag),
        mag_2(30Rnd_65x39_caseless_msbs_mag_Tracer),
        mag_2(11Rnd_45ACP_Mag),
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
        mag_2(11Rnd_45ACP_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
};
class I_E_RadioOperator_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_RadioOperator_F.jpg";
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_headset_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_headset_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class I_E_Soldier_AA_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_AA_F.jpg";
	magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class I_E_Soldier_AT_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_AT_F.jpg";
	magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class I_E_Soldier_LAT_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_LAT_F.jpg";
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        NLAW_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        NLAW_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class I_E_Soldier_LAT2_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_LAT2_F.jpg";
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        MRAWS_HEAT_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        MRAWS_HEAT_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class I_E_Soldier_AAA_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_AAA_F.jpg";
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_ico_pointer_F,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_ico_pointer_F,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
    };
};
class I_E_Soldier_AAT_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_AAT_F.jpg";
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_ico_pointer_F,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_ico_pointer_F,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
    };
};
class I_E_Support_GMG_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Support_GMG_F.jpg";
	linkedItems[] =
	{
		V_ChestrigF_oli,
		H_HelmetHBK_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_oli,
		H_HelmetHBK_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_aco_pointer_F,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_aco_pointer_F,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
    };
};
class I_E_Support_MG_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Support_MG_F.jpg";
	linkedItems[] =
	{
		V_ChestrigF_oli,
		H_HelmetHBK_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_oli,
		H_HelmetHBK_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_aco_pointer_F,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_aco_pointer_F,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
    };
};
class I_E_Support_Mort_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Support_Mort_F.jpg";
	linkedItems[] =
	{
		V_ChestrigF_oli,
		H_HelmetHBK_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_oli,
		H_HelmetHBK_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_aco_pointer_F,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_aco_pointer_F,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
    };
};
class I_E_Support_AMG_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Support_AMG_F.jpg";
	linkedItems[] =
	{
		V_ChestrigF_oli,
		H_HelmetHBK_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_oli,
		H_HelmetHBK_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_aco_pointer_F,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_aco_pointer_F,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
    };
};
class I_E_Support_AMort_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Support_AMort_F.jpg";
	linkedItems[] =
	{
		V_ChestrigF_oli,
		H_HelmetHBK_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_oli,
		H_HelmetHBK_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_aco_pointer_F,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_aco_pointer_F,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
    };
};
class I_E_Soldier_Pathfinder_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_Pathfinder_F.jpg";
    scope = protected;
    scopeCurator = private;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_headset_F,
        G_Balaclava_light_eaf_F,
        DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_headset_F,
        G_Balaclava_light_eaf_F,
        DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
    {
        arifle_MSBS65_UBS_snds_ico_pointer_F,
        hgun_Pistol_heavy_01_green_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_UBS_snds_ico_pointer_F,
        hgun_Pistol_heavy_01_green_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(6Rnd_12Gauge_Pellets),
        mag_3(6Rnd_12Gauge_Slug),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        mag_2(I_IR_Grenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(6Rnd_12Gauge_Pellets),
        mag_3(6Rnd_12Gauge_Slug),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        mag_2(I_IR_Grenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
    role = SpecialOperative;
};
class I_E_Engineer_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Engineer_F.jpg";
	backpack = B_Carryall_eaf_eng_F;
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
    };
};
class I_E_Soldier_Exp_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_Exp_F.jpg";
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class I_E_soldier_Mine_F: I_E_Soldier_Exp_F
{
};
class I_E_Soldier_Repair_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_Repair_F.jpg";
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class I_E_Soldier_CBRN_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_CBRN_F.jpg";
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_F,
        G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_F,
        G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
    {
        arifle_MSBS65_aco_FL_f,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_aco_FL_f,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class I_E_Scientist_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Scientist_F.jpg";
	linkedItems[] =
	{
		V_ChestrigF_blk,
        G_AirPurifyingRespirator_01_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_blk,
        G_AirPurifyingRespirator_01_F,
		DefaultManLinkedItems
	};
    weapons[] =
    {
        SMG_03C_TR_black,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        SMG_03C_TR_black,
        DefaultManWeapons
    };
    magazines[] = {mag_4(50Rnd_570x28_SMG_03)};
    respawnMagazines[] = {mag_4(50Rnd_570x28_SMG_03)};
};
class I_E_Scientist_Unarmed_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Scientist_Unarmed_F.jpg";
	linkedItems[] =
	{
		V_ChestrigF_blk,
        G_AirPurifyingRespirator_01_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_blk,
        G_AirPurifyingRespirator_01_F,
		DefaultManLinkedItems
	};
    magazines[] = {};
    respawnMagazines[] = {};
};
class I_E_Medic_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Medic_F.jpg";
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_ear_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_ear_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC
    };
};
class I_E_Soldier_MP_F: I_E_Soldier_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_MP_F.jpg";
	weapons[] =
    {
        arifle_MSBS65_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_F,
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
	identityTypes[] =
	{
		LanguagePOL_F,
		Head_Euro,
		Head_Enoch,
        G_NATO_casual
	};
};
class I_E_Crew_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Crew_F.jpg";
	uniformClass = U_I_E_Uniform_01_coveralls_F;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_EAF_F,
		H_Tank_black_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_EAF_F,
		H_Tank_black_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
    weapons[] =
    {
        SMG_03C_black,
        hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons
    };
    respawnWeapons[] =
    {
        SMG_03C_black,
        hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons
    };
    magazines[] =
    {
        mag_4(50Rnd_570x28_SMG_03),
        mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
    };
    respawnMagazines[] =
    {
        mag_4(50Rnd_570x28_SMG_03),
        mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
    };
    engineer = true;
};
class I_E_Helipilot_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Helipilot_F.jpg";
    linkedItems[] =
    {
        V_CarrierRigKBT_01_EAF_F,
        H_PilotHelmetHeli_I_E,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        V_CarrierRigKBT_01_EAF_F,
        H_PilotHelmetHeli_I_E,
        DefaultManLinkedItems,
        NVGoggles_INDEP
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
	identityTypes[] =
	{
		LanguagePOL_F,
		Head_Euro,
		Head_Enoch,
        G_NATO_pilot
	};
};
class I_E_Helicrew_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Helicrew_F.jpg";
    linkedItems[] =
    {
        V_CarrierRigKBT_01_EAF_F,
        H_CrewHelmetHeli_I_E,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        V_CarrierRigKBT_01_EAF_F,
        H_CrewHelmetHeli_I_E,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
	weapons[] =
    {
        arifle_MSBS65_aco_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_aco_F,
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
	identityTypes[] =
	{
		LanguagePOL_F,
		Head_Euro,
		Head_Enoch,
        G_NATO_pilot
	};
};
class I_E_Soldier_UAV_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_UAV_F.jpg";
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_F,
        I_UAVTerminal,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_F,
        I_UAVTerminal,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class I_E_soldier_UAV_06_F: I_E_Soldier_UAV_F
{
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_soldier_UAV_06_F.jpg";
};
class I_E_soldier_UAV_06_medical_F: I_E_Soldier_UAV_F
{
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_soldier_UAV_06_medical_F.jpg";
};
class I_E_soldier_UAV_02_lxWS_F: I_E_Soldier_UAV_F
{
	displayName = "UAV Operator (AP-5)";
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_soldier_UAV_06_medical_F.jpg";
	backpack = Aegis_I_E_UAV_02_backpack_lxWS;
};
class I_E_soldier_UGV_02_Science_F: I_E_Soldier_UAV_F
{
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_soldier_UGV_02_Science_F.jpg";
};
class I_E_soldier_UGV_02_Demining_F: I_E_Soldier_UAV_F
{
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_soldier_UGV_02_Demining_F.jpg";
};
class I_E_Soldier_universal_F: I_E_Soldier_F
{
    scopeCurator = private;
};
class I_E_Soldier_CQ_F: I_E_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_CQ_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_A_CfgVehicles_B_Soldier_CQ_F0;
	uniformClass = U_I_E_Uniform_01_shortsleeve_F;
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_cqb_EAF_F,
		H_HelmetHBK_ear_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_cqb_EAF_F,
		H_HelmetHBK_ear_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
    weapons[] =
    {
        arifle_MSBS65_UBS_ico_pointer_F,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_UBS_ico_pointer_F,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(6Rnd_12Gauge_Pellets),
        mag_3(6Rnd_12Gauge_Slug),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(6Rnd_12Gauge_Pellets),
        mag_3(6Rnd_12Gauge_Slug),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    cost = 130000;
	threat[] =
    {
        1,      // Soft
        0.1,    // Armor
        0.1     // Air
    };
};
class I_E_JTAC_F: I_E_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_JTAC_F.jpg";
    scope = protected;
    scopeCurator = private;
    displayName = $STR_A3_B_CTRG_Soldier_JTAC_tna_F0;
	uniformClass = U_I_E_Uniform_01_F;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_RadioBag_01_eaf_F;
    weapons[] =
    {
        arifle_MSBS65_ico_pointer_F,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_ico_pointer_F,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
    magazines[] =
    {
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        Laserbatteries,
        SmokeShell,
        SMOKESHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        Laserbatteries,
        SmokeShell,
        SMOKESHELLS_BLUFOR
    };
    role = SpecialOperative;
};
class I_E_Soldier_recon_base: I_E_Soldier_base_F
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
    icon = iconManRecon;
	role = Rifleman;
	camouflage = 0.6;
	detectSkill = 18;
};
class I_E_recon_AR_F: I_E_Soldier_recon_base
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_recon_AR_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_C_O_R_recon_AR_F0;
	uniformClass = U_I_E_Uniform_01_tanktop_F;
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
		Aegis_V_CarrierRigKBT_01_recon_EAF_F,
		H_HelmetHBK_headset_F,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_EAF_F,
		H_HelmetHBK_headset_F,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	weapons[] =
    {
        LMG_Mk200_black_MRCO_LP_S_F,
        hgun_Pistol_heavy_01_green_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        LMG_Mk200_black_MRCO_LP_S_F,
        hgun_Pistol_heavy_01_green_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_3(200Rnd_65x39_cased_Box_Red),
        mag_2(11Rnd_45ACP_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_3(200Rnd_65x39_cased_Box_Red),
        mag_2(11Rnd_45ACP_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
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
class I_E_recon_exp_F: I_E_Soldier_recon_base
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_recon_exp_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_recon_exp_F0;
	uniformClass = U_I_E_Uniform_01_shortsleeve_F;
	backpack = B_Carryall_eaf_exp_F;
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_EAF_F,
		H_Booniehat_eaf_hs,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_EAF_F,
		H_Booniehat_eaf_hs,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	weapons[] =
    {
        arifle_SCAR_short_black_snds_holo_pointer_f,
        hgun_Pistol_heavy_01_green_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SCAR_short_black_snds_holo_pointer_f,
        hgun_Pistol_heavy_01_green_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(20Rnd_762x51_Mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(20Rnd_762x51_Mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
	canDeactivateMines = true;
	detectSkill = 38;
	icon = iconManExplosive;
	picture = pictureExplosive;
	role = Sapper;
};
class I_E_recon_GL_F: I_E_Soldier_recon_base
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_recon_GL_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_C_O_R_recon_GL_F0;
	uniformClass = U_I_E_Uniform_01_F;
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_EAF_F,
		H_HelmetHBK_headset_F,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_EAF_F,
		H_HelmetHBK_headset_F,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	weapons[] =
    {
        arifle_SCAR_GL_black_snds_mrco_pointer_f,
        hgun_Pistol_heavy_01_green_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SCAR_GL_black_snds_mrco_pointer_f,
        hgun_Pistol_heavy_01_green_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(20Rnd_762x51_Mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(20Rnd_762x51_Mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
	cost = 200000;
	role = Grenadier;
};
class I_E_recon_JTAC_F: I_E_Soldier_recon_base
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_recon_JTAC_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_recon_JTAC_F0;
	uniformClass = U_I_E_Uniform_01_sweater_F;
	backpack = B_RadioBag_01_eaf_F;
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_EAF_F,
		H_Watchcap_camo_hs,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_EAF_F,
		H_Watchcap_camo_hs,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	weapons[] =
    {
        arifle_SCAR_short_black_snds_holo_pointer_f,
        hgun_Pistol_heavy_01_green_snds_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
    respawnWeapons[] =
    {
        arifle_SCAR_short_black_snds_holo_pointer_f,
        hgun_Pistol_heavy_01_green_snds_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
    magazines[] =
    {
        mag_6(20Rnd_762x51_Mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        mag_2(I_IR_Grenade),
        Laserbatteries,
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(20Rnd_762x51_Mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        mag_2(I_IR_Grenade),
        Laserbatteries,
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
	role = SpecialOperative;
};
class I_E_recon_M_F: I_E_Soldier_recon_base
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_recon_M_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_recon_M_F0;
	uniformClass = U_I_E_Uniform_01_F;
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
		V_TacVest_camo,
		H_Booniehat_eaf_hs,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_camo,
		H_Booniehat_eaf_hs,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	weapons[] =
    {
        arifle_SCAR_black_DMS_LP_BI_S_F,
        hgun_Pistol_heavy_01_green_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_SCAR_black_DMS_LP_BI_S_F,
        hgun_Pistol_heavy_01_green_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_8(20Rnd_762x51_Mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_8(20Rnd_762x51_Mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
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
class I_E_recon_medic_F: I_E_Soldier_recon_base
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_recon_medic_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_recon_medic_F0;
	uniformClass = U_I_L_Uniform_01_deserter_F;
	backpack = B_AssaultPack_eaf_IEReconMedic_F;
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_EAF_F,
		H_HelmetHBK_ear_F,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_EAF_F,
		H_HelmetHBK_ear_F,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	weapons[] =
    {
        arifle_SCAR_short_black_snds_holo_pointer_f,
        hgun_Pistol_heavy_01_green_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SCAR_short_black_snds_holo_pointer_f,
        hgun_Pistol_heavy_01_green_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(20Rnd_762x51_Mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(20Rnd_762x51_Mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_blue)
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
class I_E_recon_F: I_E_Soldier_recon_base
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_recon_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_recon_F0;
	uniformClass = U_I_E_Uniform_01_F;
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_EAF_F,
		H_HelmetHBK_headset_F,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_EAF_F,
		H_HelmetHBK_headset_F,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	weapons[] =
    {
        arifle_SCAR_short_black_snds_mrco_pointer_f,
        hgun_Pistol_heavy_01_green_snds_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_SCAR_short_black_snds_mrco_pointer_f,
        hgun_Pistol_heavy_01_green_snds_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_10(20Rnd_762x51_Mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_10(20Rnd_762x51_Mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
};
class I_E_recon_LAT_F: I_E_Soldier_recon_base
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_recon_LAT_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_recon_LAT_F0;
	uniformClass = U_I_E_Uniform_01_F;
	backpack = B_AssaultPack_eaf_IELAT2_F;
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_EAF_F,
		H_HelmetHBK_ear_F,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_EAF_F,
		H_HelmetHBK_ear_F,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	weapons[] =
    {
        arifle_SCAR_short_black_snds_holo_pointer_f,
		launch_MRAWS_green_F,
        hgun_Pistol_heavy_01_green_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SCAR_short_black_snds_holo_pointer_f,
		launch_MRAWS_green_F,
        hgun_Pistol_heavy_01_green_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(20Rnd_762x51_Mag),
        mag_2(11Rnd_45ACP_Mag),
		MRAWS_HEAT_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(20Rnd_762x51_Mag),
        mag_2(11Rnd_45ACP_Mag),
		MRAWS_HEAT_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
	cost = 130000;
	threat[] = {1,0.6,0.1};
	secondaryAmmoCoef = 0.5;
	icon = iconManAT;
	role = MissileSpecialist;
};
class I_E_recon_TL_F: I_E_Soldier_recon_base
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_recon_TL_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_recon_TL_F0;
	uniformClass = U_I_E_Uniform_01_F;
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_EAF_F,
		H_HelmetHBK_chops_F,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_EAF_F,
		H_HelmetHBK_chops_F,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	weapons[] =
    {
        arifle_SCAR_grip_black_snds_mrco_pointer_f,
        hgun_Pistol_heavy_01_green_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_SCAR_grip_black_snds_mrco_pointer_f,
        hgun_Pistol_heavy_01_green_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_6(20Rnd_762x51_Mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(20Rnd_762x51_Mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_blue)
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
class I_E_Soldier_sniper_base: I_E_Soldier_base_F
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
	scope = private;
    vehicleClass = MenSniper;
	editorSubcategory = EdSubcat_Personnel_SpecialForces;
	role = Marksman;
	primaryAmmoCoef = 0.2;
	secondaryAmmoCoef = 0.05;
	handgunAmmoCoef = 0.1;
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
};
class I_E_ghillie_base_F: I_E_Soldier_sniper_base
{
    author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_cfgVehicles_O_ghillie_base_F0;
	uniformClass = U_I_E_FullGhillie_wdl_F;
	model = "\A3\Characters_F_Mark\INDEP\I_FullGhillie_F.p3d";
	role = Marksman;
	cost = 350000;
	threat[] =
    {
        1,      // Soft
        0.3,    // Armor
        0.3     // Air
    };
	camouflage = 0.4;
	armor = 2;
	armorStructural = 3;
	explosionShielding = 0.3;
	hiddenSelections[] =
	{
		camo,
		camo3,
		camo4
	};
	class Wounds
	{
		tex[] = {};
		mat[] =
		{
			"A3\Characters_F\BLUFOR\Data\clothing1.rvmat",
			"A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat",
			"A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat",
			"A3\Characters_F\Common\Data\basicbody.rvmat",
			"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
			"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
			"A3\Characters_F\Common\Data\coveralls.rvmat",
			"A3\Characters_F\Common\Data\coveralls_injury.rvmat",
			"A3\Characters_F\Common\Data\coveralls_injury.rvmat",
			"A3\Characters_F_Mark\Common\Data\ghillie_coverall.rvmat",
			"A3\Characters_F_Mark\Common\Data\ghillie_coverall_injury.rvmat",
			"A3\Characters_F_Mark\Common\Data\ghillie_coverall_injury.rvmat",
            INJURY_PERSONALITY_MATERIALS
		};
	};
	weapons[] =
	{
		srifle_LRR_LRPS_F,
		hgun_Pistol_heavy_01_green_snds_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		srifle_LRR_LRPS_F,
		hgun_Pistol_heavy_01_green_snds_F,
		DefaultManWeapons,
		Rangefinder
	};
	hideProxySelections[] = {ghillie_hide};
	magazines[] =
	{
		mag_6(7Rnd_408_Mag),
        mag_2(11Rnd_45ACP_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
	};
	respawnMagazines[] =
	{
		mag_6(7Rnd_408_Mag),
        mag_2(11Rnd_45ACP_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
	};
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
	linkedItems[] =
	{
		V_Chestrig_oli,
        DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_Chestrig_oli,
        DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
};
class I_E_ghillie_wdl_F: I_E_ghillie_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_ghillie_wdl_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_B_W_ghillie_wdl_F0;
	hiddenSelectionsTextures[] =
	{
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_coverall_EAF_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_threads_wdl_CA.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_threads_5LOD_wdl_CO.paa"
	};
};
class I_E_ghillie_spotter_wdl_F: I_E_ghillie_wdl_F
{
	author = $STR_A3_A_AveryTheKitty;
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_ghillie_spotter_wdl_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_B_W_ghillie_spotter_wdl_F0;
	cost = 250000;
    weapons[] =
    {
        arifle_SCAR_black_snds_mrco_pointer_f,
        hgun_Pistol_heavy_01_green_snds_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
    respawnWeapons[] =
    {
        arifle_SCAR_black_snds_mrco_pointer_f,
        hgun_Pistol_heavy_01_green_snds_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
    magazines[] =
    {
        mag_6(20Rnd_762x51_Mag),
        mag_2(11Rnd_45ACP_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(I_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(20Rnd_762x51_Mag),
        mag_2(11Rnd_45ACP_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(I_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
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
};
class I_E_Fighter_Pilot_F: I_E_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Fighter_Pilot_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_B_Fighter_Pilot_name;
	uniformClass = U_I_E_Uniform_01_pilot_F;
    linkedItems[] =
    {
        H_PilotHelmetFighter_I_E,
        DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetFighter_I_E,
        DefaultManLinkedItems
    };
	weapons[] =
    {
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_2(11Rnd_45ACP_Mag),
        SMOKESHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_2(11Rnd_45ACP_Mag),
        SMOKESHELLS_BLUFOR
    };
    cost = 165000;
    role = Crewman;
	camouflage = 2;
	identityTypes[] =
	{
		LanguagePOL_F,
		Head_Euro,
		Head_Enoch,
        G_NATO_pilot
	};
};

/* LDF (Arid) */

class I_E_Soldier_ard_F: I_E_Soldier_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_F;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_headset_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_headset_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
};
class I_E_Soldier_unarmed_ard_F: I_E_Soldier_unarmed_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_unarmed_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_F;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_headset_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_headset_F,
		DefaultManLinkedItems
	};
};
class I_E_Soldier_A_ard_F: I_E_Soldier_A_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_A_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_shortsleeve_F;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
    weapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
};
class I_E_Soldier_AAR_ard_F: I_E_Soldier_AAR_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_AAR_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_shortsleeve_F;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons,
		Rangefinder
	};
};
class I_E_Soldier_AR_ard_F: I_E_Soldier_AR_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_AR_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_shortsleeve_F;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_headset_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_headset_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
    weapons[] =
    {
        LMG_Mk200_plain_MRCO_LP_F,
        hgun_Pistol_heavy_01_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        LMG_Mk200_plain_MRCO_LP_F,
        hgun_Pistol_heavy_01_F,
        DefaultManWeapons
    };
};
class I_E_Soldier_lite_ard_F: I_E_Soldier_lite_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_lite_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_tanktop_F;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_EAF_F,
		H_MilCap_eaf_arid,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_EAF_F,
		H_MilCap_eaf_arid,
		DefaultManLinkedItems
	};
	weapons[] =
    {
        arifle_MSBS65_sand_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_sand_F,
        DefaultManWeapons
    };
};
class I_E_Soldier_GL_ard_F: I_E_Soldier_GL_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_GL_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_F;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_EAF_F,
		H_HelmetHBK_arid_headset_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_EAF_F,
		H_HelmetHBK_arid_headset_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
    {
        arifle_MSBS65_GL_sand_ico_pointer_F,
        hgun_Pistol_heavy_01_F,
        DefaultManWeapons,
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_GL_sand_ico_pointer_F,
        hgun_Pistol_heavy_01_F,
        DefaultManWeapons,
    };
};
class I_E_soldier_M_ard_F: I_E_Soldier_M_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_soldier_M_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_F;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_EAF_F,
		H_HelmetHBK_arid_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_EAF_F,
		H_HelmetHBK_arid_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
    weapons[] =
    {
        arifle_MSBS65_Mark_sand_SOS_LP_BI_F,
        hgun_Pistol_heavy_01_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_Mark_sand_SOS_LP_BI_F,
        hgun_Pistol_heavy_01_F,
        DefaultManWeapons,
        Rangefinder
    };
};
class I_E_Officer_ard_F: I_E_Officer_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Officer_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_officer_F;
	weapons[] =
	{
		arifle_MSBS65_sand_F,
		hgun_Pistol_heavy_01_MRD_F,
		DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_sand_F,
		hgun_Pistol_heavy_01_MRD_F,
		DefaultManWeapons,
		Binocular
	};
};
class I_E_Soldier_SL_ard_F: I_E_Soldier_SL_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_SL_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_shortsleeve_F;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_chops_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_chops_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
    {
        arifle_MSBS65_sand_ico_pointer_F,
        hgun_Pistol_heavy_01_F,
        DefaultManWeapons,
		Binocular
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_sand_ico_pointer_F,
        hgun_Pistol_heavy_01_F,
        DefaultManWeapons,
        Binocular
    };
};
class I_E_Soldier_TL_ard_F: I_E_Soldier_TL_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_TL_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_F;
    linkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_EAF_F,
		H_HelmetHBK_arid_ear_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_EAF_F,
		H_HelmetHBK_arid_ear_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
    weapons[] =
    {
        arifle_MSBS65_GL_sand_ico_pointer_F,
        hgun_Pistol_heavy_01_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_GL_sand_ico_pointer_F,
        hgun_Pistol_heavy_01_F,
        DefaultManWeapons,
        Binocular
    };
};
class I_E_RadioOperator_ard_F: I_E_RadioOperator_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_RadioOperator_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_shortsleeve_F;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_headset_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_headset_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
};
class I_E_Soldier_AA_ard_F: I_E_Soldier_AA_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_AA_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_F;
    linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_ear_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_ear_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		launch_B_Titan_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		launch_B_Titan_F,
		DefaultManWeapons
	};
};
class I_E_Soldier_AT_ard_F: I_E_Soldier_AT_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_AT_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_F;
    linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_ear_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_ear_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		launch_B_Titan_short_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		launch_B_Titan_short_F,
		DefaultManWeapons
	};
};
class I_E_Soldier_LAT_ard_F: I_E_Soldier_LAT_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_LAT_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_F;
    linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_ear_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_ear_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		launch_NLAW_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		launch_NLAW_F,
		DefaultManWeapons
	};
};
class I_E_Soldier_LAT2_ard_F: I_E_Soldier_LAT2_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_LAT2_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_F;
    linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_ear_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_ear_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		launch_MRAWS_sand_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		launch_MRAWS_sand_F,
		DefaultManWeapons
	};
};
class I_E_Soldier_AAA_ard_F: I_E_Soldier_AAA_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_AAA_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_shortsleeve_F;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
    };
};
class I_E_Soldier_AAT_ard_F: I_E_Soldier_AAT_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_AAT_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_shortsleeve_F;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
    };
};
class I_E_Support_GMG_ard_F: I_E_Support_GMG_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Support_GMG_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_shortsleeve_F;
	linkedItems[] =
	{
		V_ChestrigF_oli,
		H_HelmetHBK_arid_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_oli,
		H_HelmetHBK_arid_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_sand_aco_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_sand_aco_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
    };
};
class I_E_Support_MG_ard_F: I_E_Support_MG_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Support_MG_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_shortsleeve_F;
	linkedItems[] =
	{
		V_ChestrigF_oli,
		H_HelmetHBK_arid_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_oli,
		H_HelmetHBK_arid_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_sand_aco_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_sand_aco_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
    };
};
class I_E_Support_Mort_ard_F: I_E_Support_Mort_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Support_Mort_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_F;
	linkedItems[] =
	{
		V_ChestrigF_oli,
		H_HelmetHBK_arid_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_oli,
		H_HelmetHBK_arid_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_sand_aco_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_sand_aco_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
    };
};
class I_E_Support_AMG_ard_F: I_E_Support_AMG_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Support_AMG_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_shortsleeve_F;
	linkedItems[] =
	{
		V_ChestrigF_oli,
		H_HelmetHBK_arid_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_oli,
		H_HelmetHBK_arid_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_sand_aco_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_sand_aco_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
    };
};
class I_E_Support_AMort_ard_F: I_E_Support_AMort_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Support_AMort_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_shortsleeve_F;
	linkedItems[] =
	{
		V_ChestrigF_oli,
		H_HelmetHBK_arid_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_oli,
		H_HelmetHBK_arid_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_sand_aco_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_sand_aco_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_IR_Grenade),
        mag_2(SmokeShell)
    };
};
class I_E_Engineer_ard_F: I_E_Engineer_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Engineer_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_F;
    linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
    weapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
    };
};
class I_E_Soldier_Exp_ard_F: I_E_Soldier_Exp_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_Exp_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_shortsleeve_F;
    linkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_EAF_F,
		H_HelmetHBK_arid_chops_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_EAF_F,
		H_HelmetHBK_arid_chops_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
    weapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class I_E_soldier_Mine_ard_F: I_E_soldier_Mine_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_soldier_Mine_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_F;
    linkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_EAF_F,
		H_HelmetHBK_arid_chops_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_EAF_F,
		H_HelmetHBK_arid_chops_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
    weapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
};
class I_E_Soldier_Repair_ard_F: I_E_Soldier_Repair_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_Repair_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_F;
    linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
    weapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
};
class I_E_Medic_ard_F: I_E_Medic_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Medic_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_shortsleeve_F;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_ear_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_ear_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
    weapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
};
class I_E_Crew_ard_F: I_E_Crew_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Crew_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_shortsleeve_F;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_EAF_F,
		H_Tank_black_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_EAF_F,
		H_Tank_black_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
    weapons[] =
    {
        SMG_03C_khaki,
        hgun_Pistol_heavy_01_F,
		DefaultManWeapons
    };
    respawnWeapons[] =
    {
        SMG_03C_khaki,
        hgun_Pistol_heavy_01_F,
		DefaultManWeapons
    };
    magazines[] =
    {
        mag_4(50Rnd_570x28_SMG_03),
        mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
    };
    respawnMagazines[] =
    {
        mag_4(50Rnd_570x28_SMG_03),
        mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
    };
    engineer = true;
};
class I_E_Helipilot_ard_F: I_E_Helipilot_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Helipilot_ard_F.jpg";
    faction = IND_E_ard_F;
    weapons[] =
    {
        SMG_03C_khaki,
        hgun_Pistol_heavy_01_F,
		DefaultManWeapons
    };
    respawnWeapons[] =
    {
        SMG_03C_khaki,
        hgun_Pistol_heavy_01_F,
		DefaultManWeapons
    };
};
class I_E_Helicrew_ard_F: I_E_Helicrew_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Helicrew_ard_F.jpg";
    faction = IND_E_ard_F;
	weapons[] =
    {
        arifle_MSBS65_sand_aco_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_sand_aco_F,
        DefaultManWeapons
    };
};
class I_E_Soldier_UAV_ard_F: I_E_Soldier_UAV_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_UAV_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_shortsleeve_F;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_F,
        I_UAVTerminal,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_F,
        I_UAVTerminal,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
    weapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
};
class I_E_soldier_UAV_06_ard_F: I_E_soldier_UAV_06_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_soldier_UAV_06_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_shortsleeve_F;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_F,
        I_UAVTerminal,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_F,
        I_UAVTerminal,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
    weapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
};
class I_E_soldier_UAV_06_medical_ard_F: I_E_soldier_UAV_06_medical_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_soldier_UAV_06_medical_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_shortsleeve_F;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_F,
        I_UAVTerminal,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_F,
        I_UAVTerminal,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
    weapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
};
class I_E_soldier_UAV_02_lxWS_ard_F: I_E_soldier_UAV_02_lxWS_F
{
    author = $STR_A3_A_Ravenholme;
	displayName = "UAV Operator (AP-5)";
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_soldier_UAV_06_medical_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_shortsleeve_F;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_F,
        I_UAVTerminal,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_F,
        I_UAVTerminal,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
    weapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
};
class I_E_soldier_UGV_02_Science_ard_F: I_E_soldier_UGV_02_Science_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_soldier_UGV_02_Science_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_shortsleeve_F;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_F,
        I_UAVTerminal,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_F,
        I_UAVTerminal,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
    weapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
};
class I_E_soldier_UGV_02_Demining_ard_F: I_E_soldier_UGV_02_Demining_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_soldier_UGV_02_Demining_ard_F.jpg";
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_shortsleeve_F;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_F,
        I_UAVTerminal,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_F,
        I_UAVTerminal,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
    weapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
};
class I_E_Soldier_universal_ard_F: I_E_Soldier_universal_F
{
    author = $STR_A3_A_Ravenholme;
    scopeCurator = private;
    faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_F;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
    weapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_sand_ico_pointer_F,
		hgun_Pistol_heavy_01_F,
		DefaultManWeapons
	};
};
class I_E_Soldier_CQ_ard_F: I_E_Soldier_CQ_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_CQ_ard_F.jpg";
	faction = IND_E_ard_F;
    uniformClass = U_I_E_Uniform_01_arid_shortsleeve_F;
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_cqb_EAF_F,
		H_HelmetHBK_arid_ear_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_cqb_EAF_F,
		H_HelmetHBK_arid_ear_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
    weapons[] =
    {
        arifle_MSBS65_UBS_sand_ico_pointer_F,
        hgun_Pistol_heavy_01_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_UBS_sand_ico_pointer_F,
        hgun_Pistol_heavy_01_F,
        DefaultManWeapons
    };
};
class I_E_JTAC_ard_F: I_E_JTAC_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_JTAC_ard_F.jpg";
    faction = IND_E_ard_F;
	uniformClass = U_I_E_Uniform_01_arid_F;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_arid_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
		H_HelmetHBK_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
    weapons[] =
    {
        arifle_MSBS65_sand_ico_pointer_F,
        hgun_Pistol_heavy_01_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_sand_ico_pointer_F,
        hgun_Pistol_heavy_01_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
};
class I_E_recon_AR_ard_F: I_E_recon_AR_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_recon_AR_ard_F.jpg";
	faction = IND_E_ard_F;
	uniformClass = U_I_E_Uniform_01_arid_tanktop_F;
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_EAF_F,
		H_HelmetHBK_arid_headset_F,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_EAF_F,
		H_HelmetHBK_arid_headset_F,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	weapons[] =
    {
        LMG_Mk200_plain_MRCO_LP_S_F,
        hgun_Pistol_heavy_01_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        LMG_Mk200_plain_MRCO_LP_S_F,
        hgun_Pistol_heavy_01_snds_F,
        DefaultManWeapons
    };
};
class I_E_recon_exp_ard_F: I_E_recon_exp_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_recon_exp_ard_F.jpg";
	faction = IND_E_ard_F;
	uniformClass = U_I_E_Uniform_01_arid_shortsleeve_F;
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_EAF_F,
		H_Booniehat_eaf_arid_hs,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_EAF_F,
		H_Booniehat_eaf_arid_hs,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	weapons[] =
    {
        arifle_SCAR_short_snds_holo_pointer_f,
        hgun_Pistol_heavy_01_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SCAR_short_snds_holo_pointer_f,
        hgun_Pistol_heavy_01_snds_F,
        DefaultManWeapons
    };
};
class I_E_recon_GL_ard_F: I_E_recon_GL_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_recon_GL_ard_F.jpg";
	faction = IND_E_ard_F;
	uniformClass = U_I_E_Uniform_01_arid_F;
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_EAF_F,
		H_HelmetHBK_arid_headset_F,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_EAF_F,
		H_HelmetHBK_arid_headset_F,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	weapons[] =
    {
        arifle_SCAR_GL_snds_mrco_pointer_f,
        hgun_Pistol_heavy_01_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SCAR_GL_snds_mrco_pointer_f,
        hgun_Pistol_heavy_01_snds_F,
        DefaultManWeapons
    };
};
class I_E_recon_JTAC_ard_F: I_E_recon_JTAC_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_recon_JTAC_ard_F.jpg";
	faction = IND_E_ard_F;
	//uniformClass = U_I_E_Uniform_01_sweater_F;
	uniformClass = U_I_E_Uniform_01_arid_shortsleeve_F;
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_EAF_F,
		H_Watchcap_khk,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_EAF_F,
		H_Watchcap_khk,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	weapons[] =
    {
        arifle_SCAR_short_snds_holo_pointer_f,
        hgun_Pistol_heavy_01_snds_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
    respawnWeapons[] =
    {
        arifle_SCAR_short_snds_holo_pointer_f,
        hgun_Pistol_heavy_01_snds_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
};
class I_E_recon_M_ard_F: I_E_recon_M_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_recon_M_ard_F.jpg";
	faction = IND_E_ard_F;
	uniformClass = U_I_E_Uniform_01_arid_F;
	linkedItems[] =
	{
		V_TacVest_camo,
		H_Booniehat_eaf_arid_hs,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_camo,
		H_Booniehat_eaf_arid_hs,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	weapons[] =
    {
        arifle_SCAR_DMS_LP_BI_S_F,
        hgun_Pistol_heavy_01_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_SCAR_DMS_LP_BI_S_F,
        hgun_Pistol_heavy_01_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
};
class I_E_recon_medic_ard_F: I_E_recon_medic_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_recon_medic_ard_F.jpg";
	faction = IND_E_ard_F;
	//uniformClass = U_I_L_Uniform_01_deserter_F;
	uniformClass = U_I_E_Uniform_01_arid_tanktop_F;
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_EAF_F,
		H_HelmetHBK_arid_ear_F,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_EAF_F,
		H_HelmetHBK_arid_ear_F,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	weapons[] =
    {
        arifle_SCAR_short_snds_holo_pointer_f,
        hgun_Pistol_heavy_01_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SCAR_short_snds_holo_pointer_f,
        hgun_Pistol_heavy_01_snds_F,
        DefaultManWeapons
    };
};
class I_E_recon_ard_F: I_E_recon_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_recon_ard_F.jpg";
	faction = IND_E_ard_F;
	uniformClass = U_I_E_Uniform_01_arid_F;
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_EAF_F,
		H_HelmetHBK_arid_headset_F,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_EAF_F,
		H_HelmetHBK_arid_headset_F,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	weapons[] =
    {
        arifle_SCAR_short_snds_mrco_pointer_f,
        hgun_Pistol_heavy_01_snds_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_SCAR_short_snds_mrco_pointer_f,
        hgun_Pistol_heavy_01_snds_F,
        DefaultManWeapons,
        Binocular
    };
};
class I_E_recon_LAT_ard_F: I_E_recon_LAT_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_recon_LAT_ard_F.jpg";
	faction = IND_E_ard_F;
	uniformClass = U_I_E_Uniform_01_arid_F;
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_EAF_F,
		H_HelmetHBK_arid_ear_F,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_EAF_F,
		H_HelmetHBK_arid_ear_F,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	weapons[] =
    {
        arifle_SCAR_short_snds_holo_pointer_f,
		launch_MRAWS_green_F,
        hgun_Pistol_heavy_01_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SCAR_short_black_snds_holo_pointer_f,
		launch_MRAWS_sand_F,
        hgun_Pistol_heavy_01_snds_F,
        DefaultManWeapons
    };
};
class I_E_recon_TL_ard_F: I_E_recon_TL_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_recon_TL_ard_F.jpg";
	faction = IND_E_ard_F;
	uniformClass = U_I_E_Uniform_01_arid_F;
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_EAF_F,
		H_HelmetHBK_arid_chops_F,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_EAF_F,
		H_HelmetHBK_arid_chops_F,
        DefaultManLeaderLinkedItems,
		NVGogglesB_grn_F
	};
	weapons[] =
    {
        arifle_SCAR_grip_snds_mrco_pointer_f,
        hgun_Pistol_heavy_01_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_SCAR_grip_snds_mrco_pointer_f,
        hgun_Pistol_heavy_01_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
};
/*
class I_E_Soldier_sniper_base: I_E_Soldier_base_F
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
    textSingular = $STR_A3_nameSound_veh_infantry_sniper_s;
    textPlural = $STR_A3_nameSound_veh_infantry_sniper_p;
    nameSound = veh_infantry_sniper_s;
	scope = private;
    vehicleClass = MenSniper;
	editorSubcategory = EdSubcat_Personnel_SpecialForces;
	role = Marksman;
	primaryAmmoCoef = 0.2;
	secondaryAmmoCoef = 0.05;
	handgunAmmoCoef = 0.1;
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
};
class I_E_ghillie_base_F: I_E_Soldier_sniper_base
{
    author = $STR_A3_A_Ravenholme;
	displayName = $STR_A3_cfgVehicles_O_ghillie_base_F0;
	uniformClass = U_I_E_FullGhillie_wdl_F;
	model = "\A3\Characters_F_Mark\INDEP\I_FullGhillie_F.p3d";
	role = Marksman;
	cost = 350000;
	threat[] =
    {
        1,      // Soft
        0.3,    // Armor
        0.3     // Air
    };
	camouflage = 0.4;
	armor = 2;
	armorStructural = 3;
	explosionShielding = 0.3;
	hiddenSelections[] =
	{
		camo,
		camo3,
		camo4
	};
	class Wounds
	{
		tex[] = {};
		mat[] =
		{
			"A3\Characters_F\BLUFOR\Data\clothing1.rvmat",
			"A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat",
			"A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat",
			"A3\Characters_F\Common\Data\basicbody.rvmat",
			"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
			"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
			"A3\Characters_F\Common\Data\coveralls.rvmat",
			"A3\Characters_F\Common\Data\coveralls_injury.rvmat",
			"A3\Characters_F\Common\Data\coveralls_injury.rvmat",
			"A3\Characters_F_Mark\Common\Data\ghillie_coverall.rvmat",
			"A3\Characters_F_Mark\Common\Data\ghillie_coverall_injury.rvmat",
			"A3\Characters_F_Mark\Common\Data\ghillie_coverall_injury.rvmat",
            INJURY_PERSONALITY_MATERIALS
		};
	};
	weapons[] =
	{
		srifle_LRR_LRPS_F,
		hgun_Pistol_heavy_01_green_snds_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		srifle_LRR_LRPS_F,
		hgun_Pistol_heavy_01_green_snds_F,
		DefaultManWeapons,
		Rangefinder
	};
	hideProxySelections[] = {ghillie_hide};
	magazines[] =
	{
		mag_6(7Rnd_408_Mag),
        mag_2(11Rnd_45ACP_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
	};
	respawnMagazines[] =
	{
		mag_6(7Rnd_408_Mag),
        mag_2(11Rnd_45ACP_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
	};
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
	linkedItems[] =
	{
		V_Chestrig_oli,
        DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_Chestrig_oli,
        DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
};
class I_E_ghillie_wdl_F: I_E_ghillie_base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_ghillie_wdl_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_B_W_ghillie_wdl_F0;
	hiddenSelectionsTextures[] =
	{
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_coverall_EAF_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_threads_wdl_CA.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_threads_5LOD_wdl_CO.paa"
	};
};
class I_E_ghillie_spotter_wdl_F: I_E_ghillie_wdl_F
{
	author = $STR_A3_A_Ravenholme;
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_ghillie_spotter_wdl_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_B_W_ghillie_spotter_wdl_F0;
	cost = 250000;
    weapons[] =
    {
        arifle_SCAR_black_snds_mrco_pointer_f,
        hgun_Pistol_heavy_01_green_snds_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
    respawnWeapons[] =
    {
        arifle_SCAR_black_snds_mrco_pointer_f,
        hgun_Pistol_heavy_01_green_snds_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
    magazines[] =
    {
        mag_6(20Rnd_762x51_Mag),
        mag_2(11Rnd_45ACP_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(I_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(20Rnd_762x51_Mag),
        mag_2(11Rnd_45ACP_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(I_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
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
};*/
class I_E_Fighter_Pilot_ard_F: I_E_Fighter_Pilot_F
{
	faction = IND_E_ard_F;
	weapons[] =
    {
        hgun_Pistol_heavy_01_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        hgun_Pistol_heavy_01_F,
        DefaultManWeapons
    };
};