/* US */
class B_Soldier_base_F: SoldierWB
{
	modelSides[] = {TFriendly};
    hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing1_CO.paa"};
    class Eventhandlers;
    weapons[] =
    {
        arifle_MX_Hamr_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_Hamr_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_10(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_10(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
    linkedItems[] =
    {
        V_PlateCarrier1_mtp,
        H_HelmetSpecB_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier1_mtp,
        H_HelmetSpecB_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_Soldier_02_f: B_Soldier_base_F
{
	modelSides[] = {TFriendly};
    hiddenSelections[] =
    {
        camo,
        camo2
    };
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing1_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\basicbody_green_CO.paa"
    };
};
class B_Soldier_03_f: B_Soldier_base_F
{
	modelSides[] = {TFriendly};
};
class B_Soldier_04_f: B_Soldier_base_F
{
	modelSides[] = {TFriendly};
};
class B_Soldier_05_f: B_Soldier_base_F
{
	modelSides[] = {TFriendly};
};
class B_Soldier_F: B_Soldier_base_F
{
    //editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Soldier_F.jpg";
};
class B_RangeMaster_F: B_Soldier_base_F
{
	modelSides[] = {TFriendly};
};
class B_Soldier_lite_F: B_Soldier_03_f
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Soldier_lite_F.jpg";
    weapons[] =
    {
        arifle_MXC_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MXC_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_4(30Rnd_65x39_caseless_mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_65x39_caseless_mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
    {
        V_BandollierB_rgr,
        H_MilCap_mcamo,
        DefaultManLinkedItems
    };
	respawnLinkedItems[] =
    {
        V_BandollierB_rgr,
        H_MilCap_mcamo,
        DefaultManLinkedItems
    };
};
class B_Soldier_GL_F: B_Soldier_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Soldier_GL_F.jpg";
    weapons[] =
    {
        arifle_MX_GL_ACO_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_GL_ACO_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    linkedItems[] =
    {
        V_PlateCarrierGL_mtp,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrierGL_mtp,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_soldier_AR_F: B_Soldier_02_f
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_soldier_AR_F.jpg";
    weapons[] =
    {
        arifle_MX_SW_Hamr_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_SW_Hamr_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(100Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(100Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        V_PlateCarrier2_rgr,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier2_rgr,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_Soldier_SL_F: B_Soldier_03_f
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Soldier_SL_F.jpg";
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_mag),
        mag_2(30Rnd_65x39_caseless_mag_Tracer),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_mag),
        mag_2(30Rnd_65x39_caseless_mag_Tracer),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
    };
    linkedItems[] =
    {
        V_PlateCarrierGL_mtp,
        H_HelmetSpecB_mcamo,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrierGL_mtp,
        H_HelmetSpecB_mcamo,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_Soldier_TL_F: B_Soldier_03_f
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Soldier_TL_F.jpg";
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_mag),
        mag_2(30Rnd_65x39_caseless_mag_Tracer),
        mag_2(16Rnd_9x21_Mag),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_mag),
        mag_2(30Rnd_65x39_caseless_mag_Tracer),
        mag_2(16Rnd_9x21_Mag),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
    linkedItems[] =
    {
        V_PlateCarrierGL_rgr,
        H_HelmetSpecB_sand,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrierGL_rgr,
        H_HelmetSpecB_sand,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_soldier_M_F: B_Soldier_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_soldier_M_F.jpg";
    weapons[] =
    {
        arifle_MXM_MOS_LP_BI_F,
        hgun_P07_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_MXM_MOS_LP_BI_F,
        hgun_P07_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        V_PlateCarrier1_mtp,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier1_mtp,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_soldier_LAT_F: B_Soldier_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_soldier_LAT_F.jpg";
    weapons[] =
    {
        arifle_MX_Holo_pointer_F,
        launch_NLAW_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_Holo_pointer_F,
        launch_NLAW_F,
        hgun_P07_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        NLAW_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        NLAW_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
};
class B_medic_F: B_Soldier_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_medic_F.jpg";
    uniformClass = U_B_CombatUniform_mcam;
    weapons[] =
    {
        arifle_MX_Holo_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_Holo_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC
    };
    linkedItems[] =
    {
        V_PlateCarrierSpec_rgr,
        H_HelmetSpecB_sand,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrierSpec_rgr,
        H_HelmetSpecB_sand,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_soldier_repair_F: B_Soldier_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_soldier_repair_F.jpg";
    weapons[] =
    {
        arifle_MXC_Holo_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MXC_Holo_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_sand,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_sand,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_soldier_exp_F: B_Soldier_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_soldier_exp_F.jpg";
    weapons[] =
    {
        arifle_MXC_Holo_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MXC_Holo_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        V_PlateCarrierGL_rgr,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrierGL_rgr,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_Helipilot_F: B_Soldier_04_f
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Helipilot_F.jpg";
	modelSides[] = {TFriendly};
	linkedItems[] =
	{
		H_PilotHelmetHeli_B,
		V_TacVest_blk,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		H_PilotHelmetHeli_B,
		V_TacVest_blk,
		DefaultManLinkedItems,
		NVGoggles
	};
	weapons[] =
	{
		SMG_01_black_Holo_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_01_black_Holo_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_4(30Rnd_45ACP_Mag_SMG_01),
        SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_45ACP_Mag_SMG_01),
        SMOKESHELLS_BLUFOR
	};
};
class B_Soldier_A_F: B_Soldier_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Soldier_A_F.jpg";
    weapons[] =
    {
        arifle_MX_ACO_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_ACO_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_12(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_12(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
    linkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_soldier_AT_F: B_Soldier_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_soldier_AT_F.jpg";
    weapons[] =
    {
        arifle_MXC_Holo_pointer_F,
        launch_B_Titan_short_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MXC_Holo_pointer_F,
        launch_B_Titan_short_F,
        hgun_P07_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
    linkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_soldier_AA_F: B_Soldier_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_soldier_AA_F.jpg";
    weapons[] =
    {
        arifle_MXC_Holo_pointer_F,
        launch_B_Titan_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MXC_Holo_pointer_F,
        launch_B_Titan_F,
        hgun_P07_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
    linkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_engineer_F: B_Soldier_03_f
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_engineer_F.jpg";
    weapons[] =
    {
        arifle_MXC_Holo_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MXC_Holo_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
    };
    linkedItems[] =
	{
		V_PlateCarrier1_mtp,
		H_HelmetB_plain_mcamo,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_mtp,
		H_HelmetB_plain_mcamo,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_crew_F: B_Soldier_03_f
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_crew_F.jpg";
	weapons[] =
    {
        arifle_MXC_Holo_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MXC_Holo_F,
        hgun_P07_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_4(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_PlateCarrier1_rgr,
		H_HelmetCrew_B,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_rgr,
		H_HelmetCrew_B,
		DefaultManLinkedItems,
		NVGoggles
	};
    engineer = true;
};
class B_officer_F: B_Soldier_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_officer_F.jpg";
    weapons[] =
    {
        arifle_MXC_F,
        hgun_Pistol_heavy_01_MRD_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_MXC_F,
        hgun_Pistol_heavy_01_MRD_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_mag),
        mag_2(11Rnd_45ACP_Mag),
        SMOKESHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_mag),
        mag_2(11Rnd_45ACP_Mag),
        SMOKESHELLS_BLUFOR
    };
	linkedItems[] =
    {
        V_Rangemaster_belt,
        H_MilCap_mcamo,
        ItemGPS,
        DefaultManLinkedItems
    };
	respawnLinkedItems[] =
    {
        V_Rangemaster_belt,
        H_MilCap_mcamo,
        ItemGPS,
        DefaultManLinkedItems
    };
};
class B_Pilot_F: B_Soldier_05_f
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Pilot_F.jpg";
	modelSides[] = {TFriendly};
	weapons[] =
	{
		SMG_01_black_Holo_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_01_black_Holo_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_4(30Rnd_45ACP_Mag_SMG_01),
        SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_45ACP_Mag_SMG_01),
        SMOKESHELLS_BLUFOR
	};
    linkedItems[] =
    {
        H_PilotHelmetHeli_B,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetHeli_B,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_helicrew_F: B_Helipilot_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_helicrew_F.jpg";
	modelSides[] = {TFriendly};
	weapons[] =
	{
		arifle_MXC_Holo_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Holo_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_4(30Rnd_65x39_caseless_mag),
        SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_65x39_caseless_mag),
        SMOKESHELLS_BLUFOR
	};
	linkedItems[] =
	{
        V_TacVest_blk,
		H_CrewHelmetHeli_B,
		DefaultManLinkedItems,
        NVGoggles
	};
	respawnLinkedItems[] =
	{
        V_TacVest_blk,
		H_CrewHelmetHeli_B,
		DefaultManLinkedItems,
        NVGoggles
	};
};
class B_soldier_PG_F: B_Soldier_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_soldier_PG_F.jpg";
    weapons[] =
    {
        arifle_MXC_ACO_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MXC_ACO_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_10(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_10(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
    linkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_sand,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_sand,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_soldier_UAV_F: B_Soldier_03_f
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_soldier_UAV_F.jpg";
    uniformClass = U_B_CombatUniform_mcam_vest;
    weapons[] =
    {
        arifle_MXC_ACO_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MXC_ACO_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_10(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_10(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
    linkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        B_UavTerminal,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        B_UavTerminal,
        NVGoggles
    };
};
class B_Soldier_unarmed_F: B_Soldier_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Soldier_unarmed_F.jpg";
    linkedItems[] =
    {
        V_PlateCarrier1_mtp,
        H_HelmetSpecB_mcamo,
        DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier1_mtp,
        H_HelmetSpecB_mcamo,
        DefaultManLinkedItems
    };
};
class B_Soldier_diver_base_F: B_Soldier_base_F
{
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\diver_suit_NATO_CO.paa",
        "\A3\Characters_F\Common\Data\diver_equip_NATO_CO.paa"
    };
	hiddenSelectionsMaterials[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\diver_suit.rvmat",
        "\A3\Characters_F\Common\Data\diver_equip.rvmat"
    };
    magazines[] =
    {
        mag_3(20Rnd_556x45_Stanag_red),
        mag_3(20Rnd_556x45_UW_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_3(20Rnd_556x45_Stanag_red),
        mag_3(20Rnd_556x45_UW_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
};
class B_diver_F: B_Soldier_diver_base_F
{
    backpack = "";
	modelSides[] = {TFriendly};
};
class B_diver_exp_F;
class B_diver_TL_F: B_Soldier_diver_base_F
{
    weapons[] =
    {
        arifle_SDAR_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_SDAR_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_3(20Rnd_556x45_Stanag_red),
        mag_3(20Rnd_556x45_UW_mag),
        mag_2(16Rnd_9x21_Mag),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_3(20Rnd_556x45_Stanag_red),
        mag_3(20Rnd_556x45_UW_mag),
        mag_2(16Rnd_9x21_Mag),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
};
class B_Soldier_recon_base: B_Soldier_base_F
{
    icon = iconManRecon;
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
};
class B_recon_F: B_Soldier_recon_base
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_recon_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_SF
	};
    weapons[] =
    {
        arifle_SPAR_01_snd_RCO_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_snd_RCO_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_10(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier1_rgr,
        H_HelmetSpecB_light,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_rgr,
        H_HelmetSpecB_light,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
};
class B_recon_LAT_F: B_Soldier_recon_base
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_recon_LAT_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_SF
	};
    weapons[] =
    {
        arifle_SPAR_01_snd_Holo_Pointer_Snds_F,
        launch_NLAW_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_snd_Holo_Pointer_Snds_F,
        launch_NLAW_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier2_rgr,
        H_HelmetB_light,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_rgr,
        H_HelmetB_light,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
};
class B_recon_exp_F: B_Soldier_recon_base
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_recon_exp_F.jpg";
    weapons[] =
    {
        arifle_SPAR_01_snd_Holo_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_snd_Holo_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier1_rgr,
        H_Booniehat_mcamo_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_rgr,
        H_Booniehat_mcamo_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
};
class B_recon_medic_F: B_Soldier_recon_base
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_recon_medic_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_SF
	};
    weapons[] =
    {
        arifle_SPAR_01_snd_Holo_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_snd_Holo_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier1_rgr,
        H_HelmetB_light_sand,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_rgr,
        H_HelmetB_light_sand,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
};
class B_recon_TL_F: B_Soldier_recon_base
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_recon_TL_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_SF
	};
    weapons[] =
    {
        arifle_SPAR_01_snd_RCO_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_snd_RCO_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    role = Rifleman;
    magazines[] =
    {
        mag_4(30Rnd_556x45_Stanag_Sand_red),
        mag_2(30Rnd_556x45_Stanag_Sand_Tracer_Red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_556x45_Stanag_Sand_red),
        mag_2(30Rnd_556x45_Stanag_Sand_Tracer_Red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier2_rgr,
        H_HelmetSpecB_light_desert,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_rgr,
        H_HelmetSpecB_light_desert,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
};
class B_recon_M_F: B_Soldier_recon_base
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_recon_M_F.jpg";
    weapons[] =
    {
        arifle_SPAR_03_snd_MOS_Pointer_Snds_Bipod_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_SPAR_03_snd_MOS_Pointer_Snds_Bipod_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_8(20Rnd_762x51_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_8(20Rnd_762x51_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_TacVest_oli,
        H_Booniehat_mcamo_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_TacVest_oli,
        H_Booniehat_mcamo_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
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
class B_recon_JTAC_F: B_Soldier_recon_base
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_recon_JTAC_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_SF
	};
	backpack = B_RadioBag_01_mtp_F;
    weapons[] =
    {
        arifle_SPAR_01_snd_Holo_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_snd_Holo_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier1_rgr,
        H_Watchcap_camo_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_rgr,
        H_Watchcap_camo_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
};
class B_Soldier_sniper_base_F: B_Soldier_base_F
{
	items[] =
	{
		FirstAidKit,
		optic_tws_sniper,
        muzzle_snds_408_sand
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_tws_sniper,
        muzzle_snds_408_sand
	};
    linkedItems[] =
    {
        V_Chestrig_rgr,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_Chestrig_rgr,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_spotter_F: B_Soldier_sniper_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_spotter_F.jpg";
    weapons[] =
    {
        arifle_SPAR_01_snd_RCO_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_snd_RCO_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
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
class B_sniper_F: B_Soldier_sniper_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_sniper_F.jpg";
    magazines[] =
    {
        mag_6(7Rnd_408_Mag),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(7Rnd_408_Mag),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
};
class B_Story_Protagonist_F: B_Soldier_02_f
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Story_Protagonist_F.jpg";
	modelSides[] = {TFriendly};
    weapons[] =
    {
        arifle_MX_GL_Hamr_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_GL_Hamr_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    linkedItems[] =
    {
        V_PlateCarrier_Kerry,
        H_HelmetSpecB_mcamo,
        DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier_Kerry,
        H_HelmetSpecB_mcamo,
        DefaultManLinkedItems
    };
};
class B_Story_Pilot_F: B_Soldier_base_F
{
	scope = protected;
	scopeCurator = private;
};
class b_soldier_survival_F: B_Soldier_base_F
{
	modelSides[] = {TFriendly};
    hiddenSelections[] =
    {
        camo,
        camo1,
        camo2,
        camo3
    };
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing1_CO.paa",
        "\A3\Characters_F\Common\Data\diver_suit_nato_CO.paa",
        "\A3\Characters_F\Common\Data\diver_equip_nato_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\basicbody_green_CO.paa"
    };
};
class B_Soldier_support_base_F: B_Soldier_base_F
{
	weapons[] =
	{
		arifle_MX_ACO_pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MX_ACO_pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
        mag_8(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_ChestrigF_rgr,
        H_HelmetB_plain_mcamo,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_rgr,
        H_HelmetB_plain_mcamo,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_soldier_AAR_F: B_Soldier_support_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_soldier_AAR_F.jpg";
	linkedItems[] =
	{
		V_PlateCarrier1_rgr,
        H_HelmetB_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_rgr,
        H_HelmetB_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_soldier_AAT_F: B_Soldier_support_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_soldier_AAT_F.jpg";
    uniformClass = U_B_CombatUniform_mcam;
	linkedItems[] =
	{
		V_PlateCarrier1_rgr,
        H_HelmetB_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_rgr,
        H_HelmetB_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_soldier_AAA_F: B_Soldier_support_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_soldier_AAA_F.jpg";
    uniformClass = U_B_CombatUniform_mcam;
	linkedItems[] =
	{
		V_PlateCarrier1_rgr,
        H_HelmetB_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_rgr,
        H_HelmetB_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_support_MG_F: B_Soldier_support_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_support_MG_F.jpg";
	weapons[] =
	{
		arifle_MXC_ACO_pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_ACO_pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
};
class B_support_GMG_F: B_Soldier_support_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_support_GMG_F.jpg";
	weapons[] =
	{
		arifle_MXC_ACO_pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_ACO_pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
};
class B_support_Mort_F: B_Soldier_support_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_support_Mort_F.jpg";
	weapons[] =
	{
		arifle_MXC_ACO_pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_ACO_pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
};
class B_support_AMG_F: B_Soldier_support_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_support_AMG_F.jpg";
	weapons[] =
	{
		arifle_MXC_ACO_pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_ACO_pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
};
class B_support_AMort_F: B_Soldier_support_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_support_AMort_F.jpg";
	weapons[] =
	{
		arifle_MXC_ACO_pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_ACO_pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
};
class B_Soldier_VR_F: B_Soldier_base_F
{
	modelSides[] = {TFriendly};
};
class B_Protagonist_VR_F: B_Soldier_base_F
{
	modelSides[] = {TFriendly};
};
class B_Captain_Pettka_F: B_Soldier_02_f
{
	modelSides[] = {TFriendly};
};
class B_ghillie_base_F: B_Soldier_sniper_base_F
{
    magazines[] =
    {
        mag_6(7Rnd_408_Mag),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(7Rnd_408_Mag),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	items[] =
	{
		FirstAidKit,
		optic_tws_sniper,
        muzzle_snds_408_sand
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_tws_sniper,
        muzzle_snds_408_sand
	};
};
class B_ghillie_lsh_F: B_ghillie_base_F
{
    //editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ghillie_lsh_F.jpg";
};
class B_ghillie_sard_F: B_ghillie_base_F
{
    //editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ghillie_sard_F.jpg";
};
class B_ghillie_ard_F: B_ghillie_base_F
{
    //editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ghillie_ard_F.jpg";
};
class B_Sharpshooter_F: B_Soldier_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Sharpshooter_F.jpg";
    weapons[] =
    {
        srifle_DMR_03_tan_AMS_LP_F,
        hgun_P07_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        srifle_DMR_03_tan_AMS_LP_F,
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
    linkedItems[] =
    {
        V_PlateCarrier1_mtp,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier1_mtp,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_Recon_Sharpshooter_F: B_Soldier_recon_base
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Recon_Sharpshooter_F.jpg";
    weapons[] =
    {
        srifle_EBR_blk_DMS_LP_BI_S_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        srifle_EBR_blk_DMS_LP_BI_S_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_8(20Rnd_762x51_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_8(20Rnd_762x51_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
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
		V_TacVest_oli,
        H_Cap_tan_specops_US_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_TacVest_oli,
        H_Cap_tan_specops_US_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
};
class B_HeavyGunner_F: B_Soldier_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_HeavyGunner_F.jpg";
	displayName = $STR_A3_CfgVehicles_B_HeavyGunner_F0;
	model = "\A3\Characters_F\BLUFOR\B_Soldier_02.p3d";
    weapons[] =
    {
        MMG_02_sand_RCO_LP_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        MMG_02_sand_RCO_LP_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_3(130Rnd_338_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_3(130Rnd_338_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
	uniformClass = U_B_CombatUniform_mcam_tshirt;
};
class B_Deck_Crew_F: B_Helipilot_F
{
	linkedItems[] =
	{
		H_HelmetCrew_B_oli_F,
        V_DeckCrew_yellow_F,
        DefaultManLeaderLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_HelmetCrew_B_oli_F,
        V_DeckCrew_yellow_F,
        DefaultManLeaderLinkedItems
	};
};
class B_Fighter_Pilot_F: B_Pilot_F
{
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
	linkedItems[] =
	{
		H_PilotHelmetFighter_B,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_PilotHelmetFighter_B,
		DefaultManLinkedItems
	};
};
class B_Patrol_HeavyGunner_F: B_HeavyGunner_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Patrol_HeavyGunner_F.jpg";
	linkedItems[] =
    {
        H_HelmetB_camo_mcamo,
        V_PlateCarrier2_rgr,
        DefaultManLinkedItems,
        NVGoggles
    };
	respawnLinkedItems[] =
    {
        H_HelmetB_camo_mcamo,
        V_PlateCarrier2_rgr,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_Patrol_Soldier_A_F: B_Soldier_A_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Patrol_Soldier_A_F.jpg";
	linkedItems[] =
    {
        H_HelmetB_camo_mcamo,
        V_PlateCarrier2_rgr,
        DefaultManLinkedItems,
        NVGoggles
    };
	respawnLinkedItems[] =
    {
        H_HelmetB_camo_mcamo,
        V_PlateCarrier2_rgr,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_soldier_mine_F: B_soldier_exp_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_soldier_mine_F.jpg";
	backpack = B_Carryall_mcamo_Mine;
};
class B_soldier_LAT2_F: B_Soldier_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_soldier_LAT2_F.jpg";
    weapons[] =
    {
        arifle_MX_Holo_pointer_F,
        launch_MRAWS_sand_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_Holo_pointer_F,
        launch_MRAWS_sand_F,
        hgun_P07_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        MRAWS_HEAT_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        MRAWS_HEAT_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
};
class B_CBRN_Man_Oversuit_01_MTP_F;
class B_Soldier_CQ_F: B_Soldier_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Soldier_CQ_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_B_Soldier_CQ_F0;
    cost = 130000;
    threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.1     // Air
    };
    weapons[] =
    {
        sgun_KSG_ACO_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        sgun_KSG_ACO_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_3(8Rnd_12Gauge_Pellets),
        mag_3(8Rnd_12Gauge_Slug),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_3(8Rnd_12Gauge_Pellets),
        mag_3(8Rnd_12Gauge_Slug),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        V_PlateCarrier1_mtp,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier1_mtp,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_recon_CQ_F: B_Soldier_recon_base
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_recon_CQ_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_SF
	};
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_B_recon_CQ_F0;
    cost = 130000;
    threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.1     // Air
    };
	uniformClass = U_B_CombatUniform_mcam_vest;
    weapons[] =
    {
        sgun_KSG_ACO_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        sgun_KSG_ACO_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_3(8Rnd_12Gauge_Pellets),
        mag_3(8Rnd_12Gauge_Slug),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_3(8Rnd_12Gauge_Pellets),
        mag_3(8Rnd_12Gauge_Slug),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    linkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_light_desert,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_light_desert,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_Soldier_MG_F: B_Soldier_03_f
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
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Soldier_MG_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_CfgVehicles_B_Patrol_Soldier_MG_F0;
    role = MachineGunner;
    icon = iconManMG;
    cost = 125000;
    threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
    weapons[] =
    {
        LMG_Mk200_plain_RCO_LP_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        LMG_Mk200_plain_RCO_LP_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_3(200Rnd_65x39_cased_Box_Red),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_3(200Rnd_65x39_cased_Box_Red),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        V_PlateCarrier2_mtp,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier2_mtp,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_recon_AR_F: B_Soldier_recon_base
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_recon_AR_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_SF
	};
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_O_R_Recon_AR_F0;
    role = MachineGunner;
    icon = iconManMG;
    cost = 220000;
    threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
	uniformClass = U_B_CombatUniform_mcam_tshirt;
	weapons[] =
	{
		arifle_SPAR_02_snd_RCO_Pointer_Snds_Bipod_F,
		hgun_P07_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SPAR_02_snd_RCO_Pointer_Snds_Bipod_F,
		hgun_P07_snds_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(150Rnd_556x45_Drum_Sand_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(150Rnd_556x45_Drum_Sand_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
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
        V_PlateCarrier2_rgr,
        H_HelmetSpecB_light_snakeskin,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier2_rgr,
        H_HelmetSpecB_light_snakeskin,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_recon_GL_F: B_Soldier_recon_base
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_recon_GL_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_SF
	};
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_O_R_Recon_GL_F0;
    role = Grenadier;
    cost = 210000;
	uniformClass = U_B_CombatUniform_mcam_vest;
    weapons[] =
    {
        arifle_SPAR_01_GL_snd_RCO_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_GL_snd_RCO_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(Chemlight_green),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(Chemlight_green),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    linkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_light,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_light,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_recon_MG_F: B_Soldier_recon_base
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_recon_MG_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_SF
	};
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_A_CfgVehicles_B_recon_MG_F0;
    role = MachineGunner;
    icon = iconManMG;
    cost = 220000;
    threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.3     // Air
    };
	uniformClass = U_B_CombatUniform_mcam;
	weapons[] =
	{
		LMG_Mk200_plain_RCO_LP_S_F,
		hgun_P07_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_Mk200_plain_RCO_LP_S_F,
		hgun_P07_snds_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_3(200Rnd_65x39_cased_Box_Red),
        mag_2(16Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_3(200Rnd_65x39_cased_Box_Red),
        mag_2(16Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
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
        V_PlateCarrier2_rgr,
        H_HelmetB_light_desert,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier2_rgr,
        H_HelmetB_light_desert,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_ghillie_spotter_lsh_F: B_ghillie_lsh_F
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
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ghillie_spotter_lsh_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_B_ghillie_spotter_lsh_F0;
    cost = 250000;
    weapons[] =
    {
        arifle_SPAR_01_snd_RCO_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_snd_RCO_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
        SMOKESHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
        SMOKESHELLS_BLUFOR
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
class B_ghillie_spotter_sard_F: B_ghillie_sard_F
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
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ghillie_spotter_sard_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_B_ghillie_spotter_sard_F0;
    cost = 250000;
    weapons[] =
    {
        arifle_SPAR_01_snd_RCO_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_snd_RCO_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
        SMOKESHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
        SMOKESHELLS_BLUFOR
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
class B_ghillie_spotter_ard_F: B_ghillie_ard_F
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
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ghillie_spotter_ard_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_B_ghillie_spotter_ard_F0;
    cost = 250000;
    weapons[] =
    {
        arifle_SPAR_01_snd_RCO_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_snd_RCO_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
        SMOKESHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
        SMOKESHELLS_BLUFOR
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
class B_Soldier_CBRN_F: B_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Soldier_CBRN_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_Soldier_CBRN_F0;
	uniformClass = U_B_CBRN_Suit_01_MTP_F;
	linkedItems[] =
	{
        V_PlateCarrier1_rgr,
        H_HelmetB_plain_mcamo,
        G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
        V_PlateCarrier1_rgr,
        H_HelmetB_plain_mcamo,
        G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems,
		NVGoggles
	};
	backpack = B_CombinationUnitRespirator_01_F;
	weapons[] =
    {
        arifle_MXC_Holo_flash_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MXC_Holo_flash_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_mag),
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
class B_RadioOperator_F: B_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_RadioOperator_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	uniformClass = U_B_CombatUniform_mcam_vest;
	linkedItems[] =
	{
        V_PlateCarrier1_mtp,
        H_HelmetB_plain_mcamo,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
        V_PlateCarrier1_mtp,
        H_HelmetB_plain_mcamo,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_RadioBag_01_mtp_F;
	weapons[] =
    {
        arifle_MX_Holo_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_Holo_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    role = RadioOperator;
};

/* US (Pacific) */
class B_T_Soldier_A_F: B_Soldier_A_F
{
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	magazines[] =
	{
        mag_12(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_12(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_F_tna_CO.paa"};
};
class B_T_Soldier_AAR_F: B_soldier_AAR_F
{
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	backpack = B_Kitbag_tna_BTAAR_F;
	magazines[] =
	{
        mag_8(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		H_HelmetB_tna_F,
		V_PlateCarrier1_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_tna_F,
		V_PlateCarrier1_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_01_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_AR_F_tna_02_CO.paa"
	};
};
class B_T_Support_AMG_F: B_support_AMG_F
{
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	weapons[] =
	{
		arifle_MXC_khk_ACO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_khk_ACO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_8(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_01_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_AR_F_tna_02_CO.paa"
	};
};
class B_T_Support_AMort_F: B_support_AMort_F
{
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	weapons[] =
	{
		arifle_MXC_khk_ACO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_khk_ACO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_8(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_01_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_AR_F_tna_02_CO.paa"
	};
};
class B_T_Soldier_AAA_F: B_soldier_AAA_F
{
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_T_Soldier_F;
	magazines[] =
	{
        mag_8(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		H_HelmetB_tna_F,
		V_PlateCarrier1_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_tna_F,
		V_PlateCarrier1_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_F_tna_CO.paa"};
};
class B_T_Soldier_AAT_F: B_soldier_AAT_F
{
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_T_Soldier_F;
	magazines[] =
	{
        mag_8(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		H_HelmetB_tna_F,
		V_PlateCarrier1_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_tna_F,
		V_PlateCarrier1_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_F_tna_CO.paa"};
};
class B_T_Soldier_AR_F: B_soldier_AR_F
{
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	weapons[] =
	{
		arifle_MX_SW_khk_Hamr_Pointer_F,
		hgun_P07_khk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MX_SW_khk_Hamr_Pointer_F,
		hgun_P07_khk_F,
		DefaultManWeapons
	};
    magazines[] =
    {
        mag_6(100Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(100Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
    };
	hiddenSelectionsTextures[] =
	{
		"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_01_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_AR_F_tna_02_CO.paa"
	};
};
class B_T_Medic_F: B_medic_F
{
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_T_Soldier_F;
	weapons[] =
	{
		arifle_MX_khk_Holo_Pointer_F,
		hgun_P07_khk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MX_khk_Holo_Pointer_F,
		hgun_P07_khk_F,
		DefaultManWeapons
	};
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC
    };
    linkedItems[] =
    {
        V_PlateCarrierSpec_tna_F,
        H_HelmetB_Enh_tna_F,
        DefaultManLinkedItems,
        NVGoggles_tna_F
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrierSpec_tna_F,
        H_HelmetB_Enh_tna_F,
        DefaultManLinkedItems,
        NVGoggles_tna_F
    };
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_F_tna_CO.paa"};
};
class B_T_Crew_F: B_crew_F
{
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	weapons[] =
    {
        arifle_MXC_khk_Holo_F,
        hgun_P07_khk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MXC_khk_Holo_F,
        hgun_P07_khk_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_4(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_PlateCarrier1_tna_F,
		H_HelmetCrew_B_oli_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_tna_F,
		H_HelmetCrew_B_oli_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
};
class B_T_Engineer_F: B_engineer_F
{
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	magazines[] =
	{
        mag_4(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_PlateCarrier1_tna_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_tna_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_SL_F_tna_CO.paa"};
};
class B_T_Soldier_Exp_F: B_soldier_exp_F
{
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_PlateCarrierGL_tna_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierGL_tna_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_F_tna_CO.paa"};
};
class B_T_Soldier_GL_F: B_Soldier_GL_F
{
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	weapons[] =
	{
		arifle_MX_GL_khk_ACO_Pointer_F,
		hgun_P07_khk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MX_GL_khk_ACO_Pointer_F,
		hgun_P07_khk_F,
		DefaultManWeapons
	};
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
	linkedItems[] =
	{
		V_PlateCarrierGL_tna_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierGL_tna_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_F_tna_CO.paa"};
};
class B_T_Support_GMG_F: B_support_GMG_F
{
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	weapons[] =
	{
		arifle_MXC_khk_ACO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_khk_ACO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_8(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_01_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_AR_F_tna_02_CO.paa"
	};
};
class B_T_Support_MG_F: B_support_MG_F
{
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	weapons[] =
	{
		arifle_MXC_khk_ACO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_khk_ACO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_8(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_01_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_AR_F_tna_02_CO.paa"
	};
};
class B_T_Support_Mort_F: B_support_Mort_F
{
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	weapons[] =
	{
		arifle_MXC_khk_ACO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_khk_ACO_Pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_8(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_01_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_AR_F_tna_02_CO.paa"
	};
};
class B_T_Helicrew_F: B_helicrew_F
{
	weapons[] =
	{
		arifle_MXC_khk_Holo_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_khk_Holo_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_4(30Rnd_65x39_caseless_khaki_mag),
        SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_65x39_caseless_khaki_mag),
        SMOKESHELLS_BLUFOR
	};
	linkedItems[] =
	{
		V_TacVest_blk,
		H_CrewHelmetHeli_B,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_blk,
		H_CrewHelmetHeli_B,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
};
class B_T_Helipilot_F: B_Helipilot_F
{
	weapons[] =
	{
		SMG_01_khk_Holo_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_01_khk_Holo_F,
		DefaultManWeapons
	};
	linkedItems[] =
	{
		V_TacVest_blk,
		H_PilotHelmetHeli_B,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_blk,
		H_PilotHelmetHeli_B,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
};
class B_T_soldier_M_F: B_soldier_M_F
{
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	weapons[] =
	{
		arifle_MXM_khk_MOS_Pointer_Bipod_F,
		hgun_P07_khk_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MXM_khk_MOS_Pointer_Bipod_F,
		hgun_P07_khk_F,
		DefaultManWeapons,
		Rangefinder
	};
    magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_F_tna_CO.paa"};
};
class B_T_Soldier_AA_F: B_soldier_AA_F
{
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_PlateCarrier1_tna_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_tna_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_F_tna_CO.paa"};
};
class B_T_Soldier_AT_F: B_soldier_AT_F
{
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_PlateCarrier1_tna_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_tna_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_F_tna_CO.paa"};
};
class B_T_Officer_F: B_officer_F
{
	weapons[] =
	{
		arifle_MXC_khk_F,
		hgun_Pistol_heavy_01_black_MRD_F,
		DefaultManWeapons,
        Binocular
	};
	respawnWeapons[] =
	{
		arifle_MXC_khk_F,
		hgun_Pistol_heavy_01_black_MRD_F,
		DefaultManWeapons,
        Binocular
	};
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_khaki_mag),
        mag_2(11Rnd_45ACP_Mag),
        SMOKESHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_khaki_mag),
        mag_2(11Rnd_45ACP_Mag),
        SMOKESHELLS_BLUFOR
    };
	linkedItems[] =
	{
		V_Rangemaster_belt_tna_F,
		H_MilCap_tna_F,
		DefaultManLeaderLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Rangemaster_belt_tna_F,
		H_MilCap_tna_F,
		DefaultManLeaderLinkedItems
	};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_F_tna_CO.paa"};
};
class B_T_Soldier_PG_F: B_soldier_PG_F
{
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
    weapons[] =
    {
        arifle_MXC_khk_ACO_Pointer_F,
        hgun_P07_khk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MXC_khk_ACO_Pointer_F,
        hgun_P07_khk_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_10(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_10(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_PlateCarrier1_tna_F,
		H_HelmetB_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_tna_F,
		H_HelmetB_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_F_tna_CO.paa"};
};
class B_T_Pilot_F: B_Pilot_F
{
	weapons[] =
	{
		SMG_01_khk_Holo_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_01_khk_Holo_F,
		DefaultManWeapons
	};
    linkedItems[] =
    {
        H_PilotHelmetHeli_B,
        DefaultManLinkedItems,
        NVGoggles_tna_F
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetHeli_B,
        DefaultManLinkedItems,
        NVGoggles_tna_F
    };
};
class B_T_Soldier_Repair_F: B_soldier_repair_F
{
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	weapons[] =
	{
		arifle_MXC_khk_Holo_Pointer_F,
		hgun_P07_khk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_khk_Holo_Pointer_F,
		hgun_P07_khk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_PlateCarrier1_tna_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_tna_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_F_tna_CO.paa"};
};
class B_T_Soldier_F: B_Soldier_F
{
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
    weapons[] =
    {
        arifle_MX_khk_Hamr_Pointer_F,
        hgun_P07_khk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_khk_Hamr_Pointer_F,
        hgun_P07_khk_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_10(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_10(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_PlateCarrier1_tna_F,
		H_HelmetB_Enh_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_tna_F,
		H_HelmetB_Enh_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_F_tna_CO.paa"};
};
class B_T_Soldier_LAT_F: B_soldier_LAT_F
{
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
    weapons[] =
    {
        arifle_MX_khk_Holo_Pointer_F,
		launch_NLAW_F,
        hgun_P07_khk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_khk_Holo_Pointer_F,
		launch_NLAW_F,
        hgun_P07_khk_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        NLAW_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        NLAW_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_F_tna_CO.paa"};
};
class B_T_Soldier_SL_F: B_Soldier_SL_F
{
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_T_Soldier_SL_F;
	weapons[] =
    {
        arifle_MX_khk_Hamr_Pointer_F,
        hgun_P07_khk_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_MX_khk_Hamr_Pointer_F,
        hgun_P07_khk_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_khaki_mag),
        mag_2(30Rnd_65x39_caseless_khaki_mag_Tracer),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_khaki_mag),
        mag_2(30Rnd_65x39_caseless_khaki_mag_Tracer),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
    };
    linkedItems[] =
    {
        V_PlateCarrierGL_tna_F,
        H_HelmetB_Enh_tna_F,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_tna_F
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrierGL_tna_F,
        H_HelmetB_Enh_tna_F,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_tna_F
    };
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_SL_F_tna_CO.paa"};
};
class B_T_Soldier_TL_F: B_Soldier_TL_F
{
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_T_Soldier_SL_F;
	weapons[] =
    {
        arifle_MX_GL_khk_Hamr_Pointer_F,
        hgun_P07_khk_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_MX_GL_khk_Hamr_Pointer_F,
        hgun_P07_khk_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_khaki_mag),
        mag_2(30Rnd_65x39_caseless_khaki_mag_Tracer),
        mag_2(16Rnd_9x21_Mag),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_khaki_mag),
        mag_2(30Rnd_65x39_caseless_khaki_mag_Tracer),
        mag_2(16Rnd_9x21_Mag),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
    linkedItems[] =
    {
        V_PlateCarrierGL_tna_F,
        H_HelmetB_Enh_tna_F,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_tna_F
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrierGL_tna_F,
        H_HelmetB_Enh_tna_F,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_tna_F
    };
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_SL_F_tna_CO.paa"};
};
class B_T_Soldier_UAV_F: B_soldier_UAV_F
{
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_T_Soldier_SL_F;
	weapons[] =
    {
        arifle_MXC_khk_ACO_Pointer_F,
        hgun_P07_khk_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_MXC_khk_ACO_Pointer_F,
        hgun_P07_khk_F,
        DefaultManWeapons,
        Binocular
    };
	magazines[] =
	{
        mag_10(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_10(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_PlateCarrier1_tna_F,
		H_HelmetB_tna_F,
		B_UavTerminal,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_tna_F,
		H_HelmetB_tna_F,
		B_UavTerminal,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_SL_F_tna_CO.paa"};
};
class B_T_Diver_F: B_diver_F
{
	weapons[] =
	{
		arifle_SDAR_F,
		hgun_P07_khk_Snds_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SDAR_F,
		hgun_P07_khk_Snds_F,
		DefaultManWeapons
	};
};
class B_T_Diver_Exp_F: B_diver_exp_F
{
	weapons[] =
	{
		arifle_SDAR_F,
		hgun_P07_khk_Snds_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SDAR_F,
		hgun_P07_khk_Snds_F,
		DefaultManWeapons
	};
};
class B_T_Diver_TL_F: B_diver_TL_F
{
	weapons[] =
	{
		arifle_SDAR_F,
		hgun_P07_khk_Snds_F,
		DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_SDAR_F,
		hgun_P07_khk_Snds_F,
		DefaultManWeapons,
		Binocular
	};
};
class B_T_Recon_Exp_F: B_recon_exp_F
{
    weapons[] =
    {
        arifle_SPAR_01_khk_Holo_Pointer_Snds_F,
        hgun_P07_khk_Snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_khk_Holo_Pointer_Snds_F,
        hgun_P07_khk_Snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier1_tna_F,
        H_Booniehat_tna_hs_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_tna_F,
        H_Booniehat_tna_hs_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_01_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_AR_F_tna_02_CO.paa"
	};
};
class B_T_Recon_JTAC_F: B_recon_JTAC_F
{
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_T_NATO_SF
	};
	backpack = B_RadioBag_01_tropic_F;
    weapons[] =
	{
		arifle_SPAR_01_khk_Holo_Pointer_Snds_F,
		hgun_P07_khk_Snds_F,
        DefaultManWeapons,
		Laserdesignator_01_khk_F
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_khk_Holo_Pointer_Snds_F,
		hgun_P07_khk_Snds_F,
        DefaultManWeapons,
		Laserdesignator_01_khk_F
	};
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier1_tna_F,
        H_Watchcap_camo_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_tna_F,
        H_Watchcap_camo_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
};
class B_T_Recon_M_F: B_recon_M_F
{
	weapons[] =
	{
		arifle_SPAR_03_khk_MOS_Pointer_Snds_Bipod_F,
		hgun_P07_khk_Snds_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_SPAR_03_khk_MOS_Pointer_Snds_Bipod_F,
		hgun_P07_khk_Snds_F,
		DefaultManWeapons,
		Rangefinder
	};
    magazines[] =
    {
        mag_8(20Rnd_762x51_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_8(20Rnd_762x51_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_TacVest_grn,
		H_Booniehat_tna_hs_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_Booniehat_tna_hs_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
};
class B_T_Recon_Medic_F: B_recon_medic_F
{
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_T_NATO_SF
	};
    weapons[] =
    {
		arifle_SPAR_01_khk_Holo_Pointer_Snds_F,
		hgun_P07_khk_Snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_khk_Holo_Pointer_Snds_F,
		hgun_P07_khk_Snds_F,
        DefaultManWeapons
	};
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier1_tna_F,
        H_HelmetB_Light_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_tna_F,
        H_HelmetB_Light_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_01_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_AR_F_tna_02_CO.paa"
	};
};
class B_T_Recon_F: B_recon_F
{
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_T_NATO_SF
	};
    weapons[] =
    {
        arifle_SPAR_01_khk_RCO_Pointer_Snds_F,
        hgun_P07_khk_Snds_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_khk_RCO_Pointer_Snds_F,
        hgun_P07_khk_Snds_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_10(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
        H_HelmetB_Enh_Light_tna_F,
		V_PlateCarrier1_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
        H_HelmetB_Enh_Light_tna_F,
		V_PlateCarrier1_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
};
class B_T_Recon_LAT_F: B_recon_LAT_F
{
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_T_NATO_SF
	};
	backpack = B_AssaultPack_rgr_BTLAT_F;
    weapons[] =
    {
        arifle_SPAR_01_khk_Holo_Pointer_Snds_F,
        launch_NLAW_F,
        hgun_P07_khk_Snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_khk_Holo_Pointer_Snds_F,
        launch_NLAW_F,
        hgun_P07_khk_Snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier2_tna_F,
        H_HelmetB_Light_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_tna_F,
        H_HelmetB_Light_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_01_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_AR_F_tna_02_CO.paa"
	};
};
class B_T_Recon_TL_F: B_recon_TL_F
{
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_T_NATO_SF
	};
    weapons[] =
    {
        arifle_SPAR_01_khk_RCO_Pointer_Snds_F,
        hgun_P07_khk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_khk_RCO_Pointer_Snds_F,
        hgun_P07_khk_Snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_4(30Rnd_556x45_Stanag_red),
        mag_2(30Rnd_556x45_Stanag_Tracer_Red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_556x45_Stanag_red),
        mag_2(30Rnd_556x45_Stanag_Tracer_Red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier2_tna_F,
        H_HelmetB_Enh_Light_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_tna_F,
        H_HelmetB_Enh_Light_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
};
class B_T_Sniper_F: B_sniper_F
{
	items[] =
	{
		FirstAidKit,
		optic_tws_sniper,
		muzzle_snds_408_green
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_tws_sniper,
		muzzle_snds_408_green
	};
    linkedItems[] =
    {
        V_Chestrig_rgr,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_tna_F
    };
    respawnLinkedItems[] =
    {
        V_Chestrig_rgr,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_tna_F
    };
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_F_tna_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_sniper_F_tna_CO.paa"
	};
};
class B_T_Spotter_F: B_spotter_F
{
    weapons[] =
    {
        arifle_SPAR_01_khk_RCO_Pointer_Snds_F,
        hgun_P07_khk_Snds_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_khk_RCO_Pointer_Snds_F,
        hgun_P07_khk_Snds_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
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
    linkedItems[] =
    {
        V_Chestrig_rgr,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_tna_F
    };
    respawnLinkedItems[] =
    {
        V_Chestrig_rgr,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_tna_F
    };
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_F_tna_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_sniper_F_tna_CO.paa"
	};
};
class B_T_ghillie_tna_F: B_ghillie_base_F
{
	weapons[] =
	{
		srifle_LRR_tna_LRPS_F,
		hgun_P07_khk_Snds_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		srifle_LRR_tna_LRPS_F,
		hgun_P07_khk_Snds_F,
		DefaultManWeapons,
		Rangefinder
	};
	items[] =
	{
		FirstAidKit,
		optic_tws_sniper,
		muzzle_snds_408_green
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_tws_sniper,
		muzzle_snds_408_green
	};
	linkedItems[] =
	{
		V_Chestrig_rgr,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_Chestrig_rgr,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
};
class B_T_Soldier_unarmed_F: B_T_Soldier_F
{
	linkedItems[] =
	{
		V_PlateCarrier1_tna_F,
		H_HelmetB_Enh_tna_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_tna_F,
		H_HelmetB_Enh_tna_F,
		DefaultManLinkedItems
	};
};
class B_T_soldier_mine_F: B_T_soldier_exp_F
{
	backpack = B_Carryall_tna_BTMine_F;
};
class B_T_Soldier_LAT2_F: B_soldier_LAT2_F
{
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
    weapons[] =
    {
        arifle_MX_khk_Holo_Pointer_F,
		launch_MRAWS_green_F,
        hgun_P07_khk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_khk_Holo_Pointer_F,
		launch_MRAWS_green_F,
        hgun_P07_khk_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        MRAWS_HEAT_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        MRAWS_HEAT_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_PlateCarrier2_tna_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_tna_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_F_tna_CO.paa"};
};
class B_T_Soldier_Lite_F: B_Soldier_lite_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Soldier_Lite_F.jpg";
	faction = BLU_T_F;
	uniformClass = U_B_T_Soldier_SL_F;
	weapons[] =
	{
		arifle_MXC_khk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_khk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_4(30Rnd_65x39_caseless_khaki_mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_65x39_caseless_khaki_mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_BandollierB_tna_F,
		H_MilCap_tna_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_BandollierB_tna_F,
		H_MilCap_tna_F,
		DefaultManLinkedItems
	};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_SL_F_tna_CO.paa"};
};
class B_T_Soldier_CQ_F: B_Soldier_CQ_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Soldier_CQ_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	faction = BLU_T_F;
	uniformClass = U_B_T_Soldier_F;
	weapons[] =
	{
		sgun_KSG_ACO_F,
		hgun_P07_khk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		sgun_KSG_ACO_F,
		hgun_P07_khk_F,
		DefaultManWeapons
	};
	linkedItems[] =
	{
		V_PlateCarrier1_tna_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_tna_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_F_tna_CO.paa"};
};
class B_T_Recon_CQ_F: B_recon_CQ_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Recon_CQ_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_T_NATO_SF
	};
	faction = BLU_T_F;
	uniformClass = U_B_T_Soldier_SL_F;
	weapons[] =
	{
		sgun_KSG_ACO_F,
		hgun_P07_khk_Snds_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		sgun_KSG_ACO_F,
		hgun_P07_khk_Snds_F,
		DefaultManWeapons
	};
	linkedItems[] =
	{
		V_PlateCarrier1_tna_F,
		H_HelmetB_Light_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_tna_F,
		H_HelmetB_Light_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_F_tna_CO.paa"};
};
class B_T_Soldier_MG_F: B_soldier_MG_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Soldier_MG_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	faction = BLU_T_F;
	uniformclass  = U_B_T_Soldier_F;
	weapons[] =
	{
		LMG_Mk200_khk_Hamr_Pointer_Bipod_F,
		hgun_P07_khk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_Mk200_khk_Hamr_Pointer_Bipod_F,
		hgun_P07_khk_F,
		DefaultManWeapons
	};
	linkedItems[] =
	{
		V_PlateCarrier2_tna_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_tna_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_SL_F_tna_CO.paa"};
};
class B_T_Recon_AR_F: B_recon_AR_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Recon_AR_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_T_NATO_SF
	};
	faction = BLU_T_F;
	uniformClass = U_B_T_Soldier_AR_F;
	weapons[] =
	{
		arifle_SPAR_02_khk_RCO_Pointer_Snds_Bipod_F,
		hgun_P07_khk_Snds_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SPAR_02_khk_RCO_Pointer_Snds_Bipod_F,
		hgun_P07_khk_Snds_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(150Rnd_556x45_Drum_Green_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(150Rnd_556x45_Drum_Green_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		V_PlateCarrier2_tna_F,
		H_HelmetB_Enh_Light_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_tna_F,
		H_HelmetB_Enh_Light_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_F_tna_CO.paa"};
};
class B_T_Recon_GL_F: B_recon_GL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Recon_GL_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_T_NATO_SF
	};
	faction = BLU_T_F;
	uniformClass = U_B_T_Soldier_SL_F;
	weapons[] =
	{
        arifle_SPAR_01_GL_khk_RCO_Pointer_Snds_F,
        hgun_P07_khk_Snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_GL_khk_RCO_Pointer_Snds_F,
        hgun_P07_khk_Snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(Chemlight_green),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(Chemlight_green),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
	linkedItems[] =
	{
		V_PlateCarrier1_tna_F,
		H_HelmetB_Light_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_tna_F,
		H_HelmetB_Light_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_F_tna_CO.paa"};
};
class B_T_Sharpshooter_F: B_Sharpshooter_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Sharpshooter_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	faction = BLU_T_F;
	uniformclass  = U_B_T_Soldier_F;
	weapons[] =
	{
		srifle_DMR_03_khaki_AMS_LP_BI_F,
		hgun_P07_khk_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		srifle_DMR_03_khaki_AMS_LP_BI_F,
		hgun_P07_khk_F,
		DefaultManWeapons,
		Rangefinder
	};
	linkedItems[] =
	{
		V_PlateCarrier1_tna_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_tna_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_F_tna_CO.paa"};
};
class B_T_Recon_Sharpshooter_F: B_Recon_Sharpshooter_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Recon_Sharpshooter_F.jpg";
	faction = BLU_T_F;
	uniformclass  = U_B_T_Soldier_F;
	weapons[] =
	{
		srifle_EBR_khk_DMS_LP_BI_S_F,
		hgun_P07_khk_Snds_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		srifle_EBR_khk_DMS_LP_BI_S_F,
		hgun_P07_khk_Snds_F,
		DefaultManWeapons,
		Rangefinder
	};
	linkedItems[] =
	{
		V_TacVest_grn,
		H_Cap_tna_hs_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_Cap_tna_hs_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_F_tna_CO.paa"};
};
class B_T_HeavyGunner_F: B_HeavyGunner_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_HeavyGunner_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	faction = BLU_T_F;
	uniformclass  = U_B_T_Soldier_AR_F;
	weapons[] =
	{
		MMG_02_khaki_RCO_LP_F,
		hgun_P07_khk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		MMG_02_khaki_RCO_LP_F,
		hgun_P07_khk_F,
		DefaultManWeapons
	};
	linkedItems[] =
	{
		V_PlateCarrier1_tna_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_tna_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_01_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_AR_F_tna_02_CO.paa"
	};
};
class B_T_Recon_MG_F: B_recon_MG_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Recon_MG_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_T_NATO_SF
	};
	faction = BLU_T_F;
	uniformClass = U_B_T_Soldier_F;
	weapons[] =
	{
		LMG_Mk200_khk_Hamr_Pointer_Bipod_Snds_F,
		hgun_P07_khk_Snds_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_Mk200_khk_Hamr_Pointer_Bipod_Snds_F,
		hgun_P07_khk_Snds_F,
		DefaultManWeapons
	};
	linkedItems[] =
	{
		H_HelmetB_Light_tna_F,
		V_PlateCarrier2_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_Light_tna_F,
		V_PlateCarrier2_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_BT_Soldier_SL_F_tna_CO.paa"};
};
class B_T_ghillie_spotter_tna_F: B_T_ghillie_tna_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_ghillie_spotter_tna_F.jpg";
	scope = public;
	scopeCurator = public;
    displayName = $STR_A3_A_CfgVehicles_O_T_ghillie_spotter_tna_F0;
	cost = 250000;
	weapons[] =
	{
		arifle_SPAR_01_khk_RCO_Pointer_Snds_F,
		hgun_P07_khk_Snds_F,
		DefaultManWeapons,
		Laserdesignator_01_khk_F
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_khk_RCO_Pointer_Snds_F,
		hgun_P07_khk_Snds_F,
		DefaultManWeapons,
		Laserdesignator_01_khk_F
	};
	magazines[] =
	{
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
};
class B_T_Fighter_Pilot_F: B_Fighter_Pilot_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Fighter_Pilot_F.jpg";
	faction = BLU_T_F;
	weapons[] =
	{
		hgun_P07_khk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		hgun_P07_khk_F,
		DefaultManWeapons
	};
};
class B_T_Soldier_CBRN_F: B_T_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Soldier_CBRN_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_Soldier_CBRN_F0;
	uniformClass = U_B_CBRN_Suit_01_Tropic_F;
	linkedItems[] =
	{
		V_PlateCarrier1_tna_F,
		H_HelmetB_tna_F,
		G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_tna_F,
		H_HelmetB_tna_F,
		G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems,
		NVGoggles_tna_F
	};
	backpack = B_CombinationUnitRespirator_01_F;
	weapons[] =
    {
        arifle_MXC_khk_Holo_Flash_F,
        hgun_P07_khk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MXC_khk_Holo_Flash_F,
        hgun_P07_khk_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_khaki_mag),
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
class B_T_RadioOperator_F: B_T_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_RadioOperator_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	uniformClass = U_B_T_Soldier_SL_F;
	linkedItems[] =
	{
		V_PlateCarrier1_tna_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_tna_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	backpack = B_RadioBag_01_tropic_F;
	weapons[] =
    {
        arifle_MX_khk_Holo_Pointer_F,
        hgun_P07_khk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_khk_Holo_Pointer_F,
        hgun_P07_khk_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_khaki_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    role = RadioOperator;
};
class B_T_soldier_UGV_02_Demining_F: B_T_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_soldier_UGV_02_Demining_F.jpg";
	displayName = $STR_A3_C_B_soldier_UGV_02_Demining_F0;
	backpack = B_UGV_02_Demining_backpack_F;
};
class B_T_soldier_UAV_02_LxWS_F: B_T_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_soldier_UAV_02_LxWS_F.jpg";
	displayName = "UAV Operator (AP-5)";
	backpack = Aegis_B_T_UAV_02_backpack_lxWS;
};
class B_T_Survivor_F: B_T_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Survivor_F.jpg";
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

/* US (Woodland) */
class B_W_Soldier_A_F: B_Soldier_A_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_A_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	weapons[] =
	{
		arifle_MX_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MX_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_12(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_12(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
};
class B_W_Soldier_AAR_F: B_soldier_AAR_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_AAR_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	backpack = B_Kitbag_rgr_BWAAR;
	weapons[] =
	{
		arifle_MX_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons,
        Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MX_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons,
        Rangefinder
	};
	magazines[] =
	{
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Support_AMG_F: B_support_AMG_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Support_AMG_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	backpack = B_HMG_01_support_grn_F;
	weapons[] =
	{
		arifle_MXC_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Support_AMort_F: B_support_AMort_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Support_AMort_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	backpack = B_Mortar_01_support_grn_F;
	weapons[] =
	{
		arifle_MXC_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Soldier_AAA_F: B_soldier_AAA_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_AAA_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	weapons[] =
	{
		arifle_MX_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons,
        Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MX_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons,
        Rangefinder
	};
	magazines[] =
	{
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Soldier_AAT_F: B_soldier_AAT_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_AAT_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	weapons[] =
	{
		arifle_MX_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons,
        Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MX_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons,
        Rangefinder
	};
	magazines[] =
	{
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Soldier_AR_F: B_soldier_AR_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_AR_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	weapons[] =
	{
		arifle_MX_SW_Black_Hamr_pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MX_SW_Black_Hamr_pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
    magazines[] =
    {
        mag_6(100Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(100Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
    };
};
class B_W_Medic_F: B_medic_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Medic_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_CombatUniform_mcam_wdl_f;
	weapons[] =
	{
		arifle_MX_Black_Holo_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MX_Black_Holo_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC
    };
    linkedItems[] =
    {
        V_PlateCarrierSpec_wdl,
        H_HelmetSpecB_wdl,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrierSpec_wdl,
        H_HelmetSpecB_wdl,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class B_W_Crew_F: B_crew_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Crew_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	weapons[] =
    {
        arifle_MXC_Black_Holo_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MXC_Black_Holo_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_4(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetCrew_B_oli_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetCrew_B_oli_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Engineer_F: B_engineer_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Engineer_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	backpack = B_Kitbag_wdl_BWEng_F;
	weapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_4(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Soldier_Exp_F: B_soldier_exp_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_Exp_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	backpack = B_Kitbag_rgr_Exp;
	weapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        V_PlateCarrierGL_wdl,
        H_HelmetB_plain_wdl,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrierGL_wdl,
        H_HelmetB_plain_wdl,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class B_W_Soldier_GL_F: B_Soldier_GL_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_GL_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	weapons[] =
	{
		arifle_MX_GL_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MX_GL_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
	linkedItems[] =
	{
		V_PlateCarrierGL_wdl,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierGL_wdl,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Support_GMG_F: B_support_GMG_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Support_GMG_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	backpack = B_GMG_01_Weapon_grn_F;
	weapons[] =
	{
		arifle_MXC_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Support_MG_F: B_support_MG_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Support_MG_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	backpack = B_HMG_01_Weapon_grn_F;
	weapons[] =
	{
		arifle_MXC_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Support_Mort_F: B_support_Mort_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Support_Mort_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	backpack = B_Mortar_01_Weapon_grn_F;
	weapons[] =
	{
		arifle_MXC_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_rgr,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Helicrew_F: B_helicrew_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Helicrew_F.jpg";
	weapons[] =
	{
		arifle_MXC_Black_Holo_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_Holo_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_4(30Rnd_65x39_caseless_black_mag),
        SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_65x39_caseless_black_mag),
        SMOKESHELLS_BLUFOR
	};
	linkedItems[] =
	{
		V_TacVest_blk,
		H_CrewHelmetHeli_B,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacVest_blk,
		H_CrewHelmetHeli_B,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Helipilot_F: B_Helipilot_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Helipilot_F.jpg";
	weapons[] =
	{
		SMG_01_Black_Holo_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_01_Black_Holo_F,
		DefaultManWeapons
	};
	linkedItems[] =
	{
		V_TacVest_blk,
		H_PilotHelmetHeli_B,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacVest_blk,
		H_PilotHelmetHeli_B,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_soldier_M_F: B_soldier_M_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_soldier_M_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	weapons[] =
	{
		arifle_MXM_Black_MOS_Pointer_Bipod_F,
		hgun_P07_blk_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MXM_Black_MOS_Pointer_Bipod_F,
		hgun_P07_blk_F,
		DefaultManWeapons,
		Rangefinder
	};
    magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Soldier_AA_F: B_soldier_AA_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_AA_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	backpack = B_Kitbag_wdl_BWAA_F;
	weapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_F,
        launch_B_Titan_olive_F,
		hgun_P07_blk_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_F,
        launch_B_Titan_olive_F,
		hgun_P07_blk_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Soldier_AT_F: B_soldier_AT_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_AT_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	backpack = B_Kitbag_wdl_BWAT_F;
	weapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_F,
        launch_I_Titan_short_F,
		hgun_P07_blk_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_F,
        launch_I_Titan_short_F,
		hgun_P07_blk_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Officer_F: B_officer_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Officer_F.jpg";
	weapons[] =
	{
		arifle_MXC_Black_F,
		hgun_Pistol_heavy_01_black_MRD_F,
		DefaultManWeapons,
        Binocular
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_F,
		hgun_Pistol_heavy_01_black_MRD_F,
		DefaultManWeapons,
        Binocular
	};
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_black_mag),
        mag_2(11Rnd_45ACP_Mag),
        SMOKESHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_black_mag),
        mag_2(11Rnd_45ACP_Mag),
        SMOKESHELLS_BLUFOR
    };
	linkedItems[] =
	{
		V_Rangemaster_belt,
		H_MilCap_wdl,
		DefaultManLeaderLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Rangemaster_belt,
		H_MilCap_wdl,
		DefaultManLeaderLinkedItems
	};
};
class B_W_Soldier_Repair_F: B_soldier_repair_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_Repair_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	weapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Soldier_F: B_Soldier_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
    weapons[] =
    {
        arifle_MX_Black_Hamr_pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_Black_Hamr_pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetSpecB_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetSpecB_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Soldier_LAT_F: B_soldier_LAT_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_LAT_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
    weapons[] =
    {
        arifle_MX_Black_Holo_Pointer_F,
        launch_NLAW_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_Black_Holo_Pointer_F,
        launch_NLAW_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        NLAW_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        NLAW_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_PlateCarrier2_wdl,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_wdl,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Soldier_LAT2_F: B_soldier_LAT2_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_LAT2_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
    weapons[] =
    {
        arifle_MX_Black_Holo_Pointer_F,
        launch_MRAWS_green_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_Black_Holo_Pointer_F,
        launch_MRAWS_green_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        MRAWS_HEAT_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        MRAWS_HEAT_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_PlateCarrier2_wdl,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_wdl,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Soldier_SL_F: B_Soldier_SL_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_SL_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	weapons[] =
    {
        arifle_MX_Black_Hamr_pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_MX_Black_Hamr_pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_black_mag),
        mag_2(30Rnd_65x39_caseless_black_mag_Tracer),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_black_mag),
        mag_2(30Rnd_65x39_caseless_black_mag_Tracer),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR
    };
    linkedItems[] =
    {
        V_PlateCarrierGL_wdl,
        H_HelmetSpecB_wdl,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrierGL_wdl,
        H_HelmetSpecB_wdl,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class B_W_Soldier_TL_F: B_Soldier_TL_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_TL_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	weapons[] =
    {
        arifle_MX_GL_Black_Hamr_pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_MX_GL_Black_Hamr_pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_black_mag),
        mag_2(30Rnd_65x39_caseless_black_mag_Tracer),
        mag_2(16Rnd_9x21_Mag),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_black_mag),
        mag_2(30Rnd_65x39_caseless_black_mag_Tracer),
        mag_2(16Rnd_9x21_Mag),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
    };
    linkedItems[] =
    {
        V_PlateCarrierGL_wdl,
        H_HelmetSpecB_wdl,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrierGL_wdl,
        H_HelmetSpecB_wdl,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class B_W_Soldier_CBRN_F: B_W_Soldier_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_CBRN_F.jpg";
	linkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetB_plain_wdl,
		G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetB_plain_wdl,
		G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
    {
        arifle_MXC_Black_Holo_FL_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MXC_Black_Holo_FL_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class B_W_RadioOperator_F: B_W_Soldier_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_RadioOperator_F.jpg";
	linkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
    {
        arifle_MX_Black_Holo_Pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_Black_Holo_Pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class B_W_Soldier_UAV_F: B_soldier_UAV_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_UAV_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	weapons[] =
	{
		arifle_MXC_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetB_plain_wdl,
		B_UavTerminal,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetB_plain_wdl,
		B_UavTerminal,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_soldier_UGV_02_Science_F: B_W_Soldier_UAV_F
{
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_soldier_UGV_02_Science_F.jpg";
};
class B_W_soldier_UGV_02_Demining_F: B_W_Soldier_UAV_F
{
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_soldier_UGV_02_Demining_F.jpg";
};
class B_W_soldier_UAV_02_LxWS_F: B_W_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_soldier_UAV_02_LxWS_F.jpg";
	displayName = "UAV Operator (AP-5)";
	backpack = Aegis_B_W_UAV_02_backpack_lxWS;
};
class B_W_Soldier_unarmed_F: B_W_Soldier_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_unarmed_F.jpg";
	linkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetSpecB_wdl,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetSpecB_wdl,
		DefaultManLinkedItems
	};
};
class B_GhillieSuit_01_wdl_F: B_sniper_F
{
	scope = protected;
	scopeCurator = private;
	uniformClass = U_B_GhillieSuit_wdl_f;
	hiddenSelections[] =
	{
		camo,
		camo3
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_mcam_wdl_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_wdl_CO.paa"
	};
};
class B_W_Soldier_PG_F: B_soldier_PG_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_PG_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	faction = BLU_W_F;
	uniformClass = U_B_CombatUniform_mcam_wdl_f;
    weapons[] =
    {
        arifle_MXC_Black_ACO_Pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MXC_Black_ACO_Pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetB_plain_wdl,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetB_plain_wdl,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Pilot_F: B_Pilot_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Pilot_F.jpg";
	faction = BLU_W_F;
	weapons[] =
	{
		SMG_01_Black_Holo_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_01_Black_Holo_F,
		DefaultManWeapons
	};
    linkedItems[] =
    {
        H_PilotHelmetHeli_B,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetHeli_B,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class B_W_Soldier_Lite_F: B_Soldier_lite_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_Lite_F.jpg";
	faction = BLU_W_F;
	uniformClass = U_B_CombatUniform_vest_mcam_wdl_f;
	weapons[] =
	{
		arifle_MXC_Black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_4(30Rnd_65x39_caseless_black_mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_65x39_caseless_black_mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_BandollierB_rgr,
		H_MilCap_wdl,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_BandollierB_rgr,
		H_MilCap_wdl,
		DefaultManLinkedItems
	};
};
class B_W_Soldier_CQ_F: B_Soldier_CQ_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_CQ_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	faction = BLU_W_F;
	uniformClass = U_B_CombatUniform_mcam_wdl_f;
	weapons[] =
	{
		sgun_KSG_ACO_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		sgun_KSG_ACO_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	linkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Soldier_MG_F: B_soldier_MG_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_MG_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	faction = BLU_W_F;
	uniformClass = U_B_CombatUniform_vest_mcam_wdl_f;
	weapons[] =
	{
		LMG_Mk200_black_RCO_LP_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_Mk200_black_RCO_LP_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	linkedItems[] =
	{
		V_PlateCarrier2_wdl,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_wdl,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_soldier_UAV_06_F: B_W_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_soldier_UAV_06_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_F0;
	backpack = B_UAV_06_backpack_F;
};
class B_W_soldier_UAV_06_medical_F: B_W_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_soldier_UAV_06_medical_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_medical_F0;
	backpack = B_UAV_06_medical_backpack_F;
};
class B_W_Sharpshooter_F: B_Sharpshooter_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Sharpshooter_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	faction = BLU_W_F;
	uniformClass = U_B_CombatUniform_mcam_wdl_f;
	weapons[] =
	{
		srifle_DMR_03_AMS_LP_BI_F,
		hgun_P07_blk_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		srifle_DMR_03_AMS_LP_BI_F,
		hgun_P07_blk_F,
		DefaultManWeapons,
		Rangefinder
	};
	linkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Recon_Sharpshooter_F: B_Recon_Sharpshooter_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Recon_Sharpshooter_F.jpg";
	faction = BLU_W_F;
	uniformclass = U_B_CombatUniform_mcam_wdl_f;
	weapons[] =
	{
		srifle_EBR_blk_DMS_LP_BI_S_F,
		hgun_P07_blk_Snds_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		srifle_EBR_blk_DMS_LP_BI_S_F,
		hgun_P07_blk_Snds_F,
		DefaultManWeapons,
		Rangefinder
	};
	linkedItems[] =
	{
		V_TacVest_grn,
		H_Cap_usblack_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_Cap_usblack_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_HeavyGunner_F: B_HeavyGunner_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_HeavyGunner_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	faction = BLU_W_F;
	uniformClass = U_B_CombatUniform_tshirt_mcam_wdL_f;
	weapons[] =
	{
		MMG_02_black_RCO_LP_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		MMG_02_black_RCO_LP_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	linkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Fighter_Pilot_F: B_Fighter_Pilot_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Fighter_Pilot_F.jpg";
	faction = BLU_W_F;
	weapons[] =
	{
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		hgun_P07_blk_F,
		DefaultManWeapons
	};
};
class B_W_Recon_AR_F: B_recon_AR_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Recon_AR_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_W_NATO_SF
	};
	faction = BLU_W_F;
	uniformClass = U_B_CombatUniform_tshirt_mcam_wdL_f;
	weapons[] =
	{
		arifle_SPAR_02_blk_RCO_Pointer_Snds_Bipod_F,
		hgun_P07_blk_Snds_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SPAR_02_blk_RCO_Pointer_Snds_Bipod_F,
		hgun_P07_blk_Snds_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(150Rnd_556x45_Drum_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(150Rnd_556x45_Drum_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		V_PlateCarrier2_wdl,
		H_HelmetSpecB_light_wdl,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_wdl,
		H_HelmetSpecB_light_wdl,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Recon_Exp_F: B_recon_exp_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Recon_Exp_F.jpg";
	faction = BLU_W_F;
	uniformClass = U_B_CombatUniform_tshirt_mcam_wdL_f;
	backpack = B_AssaultPack_rgr_ReconExp;
	weapons[] =
	{
		arifle_SPAR_01_blk_Holo_Pointer_Snds_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_blk_Holo_Pointer_Snds_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons
	};
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_Booniehat_wdl_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_Booniehat_wdl_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Recon_GL_F: B_recon_GL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Recon_GL_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_W_NATO_SF
	};
	faction = BLU_W_F;
	uniformClass = U_B_CombatUniform_vest_mcam_wdl_f;
	weapons[] =
	{
		arifle_SPAR_01_GL_blk_RCO_Pointer_Snds_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_GL_blk_RCO_Pointer_Snds_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons
	};
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(Chemlight_green),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(Chemlight_green),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
	linkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetB_light_wdl,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetB_light_wdl,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Recon_JTAC_F: B_recon_JTAC_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Recon_JTAC_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_W_NATO_SF
	};
	faction = BLU_W_F;
	uniformClass = U_B_CombatUniform_mcam_wdl_f;
	backpack = B_RadioBag_01_wdl_F;
    weapons[] =
	{
		arifle_SPAR_01_blk_Holo_Pointer_Snds_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Laserdesignator_01_khk_F
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_blk_Holo_Pointer_Snds_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Laserdesignator_01_khk_F
	};
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier1_wdl,
        H_Watchcap_camo_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_wdl,
        H_Watchcap_camo_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Recon_MG_F: B_recon_MG_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Recon_MG_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_W_NATO_SF
	};
	faction = BLU_W_F;
	uniformClass = U_B_CombatUniform_mcam_wdl_f;
	weapons[] =
	{
		LMG_Mk200_black_RCO_LP_S_F,
		hgun_P07_blk_Snds_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_Mk200_black_RCO_LP_S_F,
		hgun_P07_blk_Snds_F,
		DefaultManWeapons
	};
	linkedItems[] =
	{
		V_PlateCarrier2_wdl,
		H_HelmetB_light_wdl,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_wdl,
		H_HelmetB_light_wdl,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Recon_M_F: B_recon_M_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Recon_M_F.jpg";
	faction = BLU_W_F;
	uniformClass = U_B_CombatUniform_mcam_wdl_f;
	weapons[] =
	{
		arifle_SPAR_03_blk_MOS_Pointer_Bipod_Snds_F,
		hgun_P07_blk_Snds_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_SPAR_03_blk_MOS_Pointer_Bipod_Snds_F,
		hgun_P07_blk_Snds_F,
		DefaultManWeapons,
		Rangefinder
	};
	linkedItems[] =
	{
		V_TacVest_grn,
		H_Booniehat_wdl_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_Booniehat_wdl_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Recon_Medic_F: B_recon_medic_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Recon_Medic_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_W_NATO_SF
	};
	faction = BLU_W_F;
	uniformClass = U_B_CombatUniform_tshirt_mcam_wdL_f;
	backpack = B_AssaultPack_rgr_ReconMedic;
	weapons[] =
	{
		arifle_SPAR_01_blk_Holo_Pointer_Snds_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_blk_Holo_Pointer_Snds_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons
	};
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier1_wdl,
        H_HelmetB_light_wdl,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_wdl,
        H_HelmetB_light_wdl,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Recon_F: B_recon_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Recon_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_W_NATO_SF
	};
	faction = BLU_W_F;
	uniformClass = U_B_CombatUniform_vest_mcam_wdl_f;
    weapons[] =
    {
        arifle_SPAR_01_blk_RCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_blk_RCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_10(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier1_wdl,
        H_HelmetSpecB_light_wdl,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_wdl,
        H_HelmetSpecB_light_wdl,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Recon_LAT_F: B_recon_LAT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Recon_LAT_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_W_NATO_SF
	};
	faction = BLU_W_F;
	uniformClass = U_B_CombatUniform_tshirt_mcam_wdL_f;
	backpack = B_AssaultPack_rgr_ReconLAT;
	weapons[] =
	{
		arifle_SPAR_01_blk_Holo_Pointer_Snds_F,
		launch_NLAW_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_blk_Holo_Pointer_Snds_F,
		launch_NLAW_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons
	};
	magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier2_wdl,
        H_HelmetB_light_wdl,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_wdl,
        H_HelmetB_light_wdl,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Recon_CQ_F: B_recon_CQ_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Recon_CQ_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_W_NATO_SF
	};
	faction = BLU_W_F;
	uniformClass = U_B_CombatUniform_vest_mcam_wdl_f;
    weapons[] =
	{
		sgun_KSG_ACO_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		sgun_KSG_ACO_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_3(8Rnd_12Gauge_Pellets),
		mag_3(8Rnd_12Gauge_Slug),
		mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
		mag_3(8Rnd_12Gauge_Pellets),
		mag_3(8Rnd_12Gauge_Slug),
		mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetB_light_wdl,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_wdl,
		H_HelmetB_light_wdl,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Recon_TL_F: B_recon_TL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Recon_TL_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_W_NATO_SF
	};
	faction = BLU_W_F;
	uniformClass = U_B_CombatUniform_vest_mcam_wdl_f;
    weapons[] =
	{
		arifle_SPAR_01_blk_RCO_Pointer_Snds_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_blk_RCO_Pointer_Snds_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Rangefinder
	};
    magazines[] =
    {
        mag_4(30Rnd_556x45_Stanag_red),
        mag_2(30Rnd_556x45_Stanag_Tracer_Red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_556x45_Stanag_red),
        mag_2(30Rnd_556x45_Stanag_Tracer_Red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier2_wdl,
        H_HelmetSpecB_light_wdl,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_wdl,
        H_HelmetSpecB_light_wdl,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Sniper_F: B_sniper_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Sniper_F.jpg";
	faction = BLU_W_F;
	uniformClass = U_B_GhillieSuit_wdl_f;
	weapons[] =
	{
		srifle_LRR_LRPS_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		srifle_LRR_LRPS_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Rangefinder
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
        V_Chestrig_rgr,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        V_Chestrig_rgr,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class B_W_Spotter_F: B_spotter_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Spotter_F.jpg";
	faction = BLU_W_F;
	uniformClass = U_B_GhillieSuit_wdl_f;
    weapons[] =
    {
        arifle_SPAR_01_blk_RCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_blk_RCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    linkedItems[] =
    {
        V_Chestrig_rgr,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        V_Chestrig_rgr,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class B_W_ghillie_wdl_F: B_ghillie_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_ghillie_wdl_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_B_W_ghillie_wdl_F0;
	faction = BLU_W_F;
	uniformClass = U_B_W_FullGhillie_wdl_F;
	hiddenSelectionsTextures[] =
	{
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_coverall_NATO_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_threads_wdl_CA.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_threads_5LOD_wdl_CO.paa"
	};
	weapons[] =
	{
		srifle_LRR_LRPS_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		srifle_LRR_LRPS_F,
		hgun_P07_blk_Snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_6(7Rnd_408_Mag),
		mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
		mag_6(7Rnd_408_Mag),
		mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
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
        V_Chestrig_rgr,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        V_Chestrig_rgr,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class B_W_ghillie_spotter_wdl_F: B_W_ghillie_wdl_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_ghillie_spotter_wdl_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_B_W_ghillie_spotter_wdl_F0;
	cost = 250000;
    weapons[] =
    {
        arifle_SPAR_01_blk_RCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_blk_RCO_Pointer_Snds_F,
        hgun_P07_blk_Snds_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
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
    linkedItems[] =
    {
        V_Chestrig_rgr,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        V_Chestrig_rgr,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};

/* BAF */
class B_A_Soldier_A_F: B_Soldier_A_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_A_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_mtp_f;
	backpack = B_Carryall_mcamo_BAAmmo_F;
	weapons[] =
	{
		arifle_SA80_snd_aco_pointer_f,
		hgun_G17_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_snd_aco_pointer_f,
		hgun_G17_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_12(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_12(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_MTP_F,
		H_HelmetB_camo_mcamo,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_MTP_F,
		H_HelmetB_camo_mcamo,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_A_Soldier_AAR_F: B_soldier_AAR_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_AAR_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_tshirt_mtp_f;
	backpack = B_TacticalPack_mcamo_BAAAR_F;
	weapons[] =
	{
		arifle_SA80_snd_aco_pointer_f,
		hgun_G17_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_SA80_snd_aco_pointer_f,
		hgun_G17_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
    {
		mag_8(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_8(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Coyote_F,
		H_HelmetB_camo_mcamo,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Coyote_F,
		H_HelmetB_camo_mcamo,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_A_Support_AMG_F: B_support_AMG_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Support_AMG_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_tshirt_mtp_f;
	backpack = B_HMG_01_support_F;
	weapons[] =
	{
		arifle_SA80_C_snd_aco_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_snd_aco_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_TacChestrig_cbr_F,
		H_HelmetB_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_cbr_F,
		H_HelmetB_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_A_Support_AMort_F: B_support_AMort_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Support_AMort_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		Head_Enoch,
		G_NATO_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_tshirt_mtp_f;
	backpack = B_Mortar_01_support_F;
	weapons[] =
	{
		arifle_SA80_C_snd_aco_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_snd_aco_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_TacChestrig_cbr_F,
		H_HelmetB_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_cbr_F,
		H_HelmetB_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_A_Soldier_AAA_F: B_soldier_AAA_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_AAA_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_mtp_f;
	backpack = B_Carryall_mcamo_AAA;
	weapons[] =
	{
		arifle_SA80_snd_aco_pointer_f,
		hgun_G17_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_SA80_snd_aco_pointer_f,
		hgun_G17_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
    {
		mag_8(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_8(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Coyote_F,
		H_HelmetB_camo_mcamo,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Coyote_F,
		H_HelmetB_camo_mcamo,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_A_Soldier_AAT_F: B_soldier_AAT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_AAT_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_mtp_f;
	backpack = B_Carryall_mcamo_AAT;
	weapons[] =
	{
		arifle_SA80_snd_aco_pointer_f,
		hgun_G17_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_SA80_snd_aco_pointer_f,
		hgun_G17_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
    {
		mag_8(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_8(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Coyote_F,
		H_HelmetB_camo_mcamo,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Coyote_F,
		H_HelmetB_camo_mcamo,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_A_Soldier_AR_F: B_soldier_AR_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_AR_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_tshirt_mtp_f;
	weapons[] =
	{
		LMG_Mk200_plain_RCO_LP_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_Mk200_plain_RCO_LP_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_3(200Rnd_65x39_cased_Box_Red),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_3(200Rnd_65x39_cased_Box_Red),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Coyote_F,
		H_HelmetB_camo_mcamo,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Coyote_F,
		H_HelmetB_camo_mcamo,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_A_Medic_F: B_medic_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Medic_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_mtp_f;
	backpack = B_TacticalPack_mcamo_BAMedic_F;
	weapons[] =
	{
		arifle_SA80_snd_holo_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_snd_holo_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_MTP_F,
		H_HelmetSpecB_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_MTP_F,
		H_HelmetSpecB_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_A_Crew_F: B_crew_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Crew_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_vest_mtp_f;
	weapons[] =
	{
		arifle_SA80_C_snd_holo_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_snd_holo_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_mag),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_mag),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_MTP_F,
		H_HelmetCrew_B,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_MTP_F,
		H_HelmetCrew_B,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_A_Engineer_F: B_engineer_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Engineer_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_vest_mtp_f;
	backpack = B_Kitbag_mcamo_Eng;
	weapons[] =
	{
		arifle_SA80_C_snd_holo_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_snd_holo_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Coyote_F,
		H_HelmetB_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Coyote_F,
		H_HelmetB_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_A_Soldier_Exp_F: B_soldier_exp_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_Exp_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_mtp_f;
	backpack = B_Kitbag_rgr_Exp;
	weapons[] =
	{
		arifle_SA80_C_snd_holo_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_snd_holo_pointer_f,
		hgun_G17_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Coyote_F,
		H_HelmetB_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Coyote_F,
		H_HelmetB_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_A_soldier_mine_F: B_A_Soldier_Exp_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_soldier_mine_F.jpg";
	displayName = $STR_A3_B_T_soldier_mine_F0;
	backpack = B_Carryall_mcamo_Mine;
};
class B_A_Soldier_GL_F: B_Soldier_GL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_GL_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_mtp_f;
	weapons[] =
	{
		arifle_SA80_GL_snd_aco_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_GL_snd_aco_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_mag),
		mag_2(17Rnd_9x21_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_mag),
		mag_2(17Rnd_9x21_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_MTP_F,
		H_HelmetB_camo_mcamo,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_MTP_F,
		H_HelmetB_camo_mcamo,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_A_Support_GMG_F: B_support_GMG_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Support_GMG_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_tshirt_mtp_f;
	backpack = B_GMG_01_weapon_F;
	weapons[] =
	{
		arifle_SA80_C_snd_aco_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_snd_aco_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_TacChestrig_cbr_F,
		H_HelmetB_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_cbr_F,
		H_HelmetB_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_A_Support_MG_F: B_support_MG_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Support_MG_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_tshirt_mtp_f;
	backpack = B_HMG_01_weapon_F;
	weapons[] =
	{
		arifle_SA80_C_snd_aco_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_snd_aco_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_TacChestrig_cbr_F,
		H_HelmetB_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_cbr_F,
		H_HelmetB_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_A_Support_Mort_F: B_support_Mort_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Support_Mort_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_tshirt_mtp_f;
	backpack = B_Mortar_01_weapon_F;
	weapons[] =
	{
		arifle_SA80_C_snd_aco_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_snd_aco_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_TacChestrig_cbr_F,
		H_HelmetB_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_cbr_F,
		H_HelmetB_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_A_Helicrew_F: B_helicrew_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Helicrew_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_pilot
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_mtp_f;
	weapons[] =
	{
		arifle_SA80_C_snd_holo_f,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_snd_holo_f,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_mag),
		SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_mag),
		SMOKESHELLS_BLUFOR
	};
    linkedItems[] =
    {
		V_CarrierRigKBT_01_MTP_F,
        H_CrewHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
		V_CarrierRigKBT_01_MTP_F,
        H_CrewHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_A_Helipilot_F: B_Helipilot_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Helipilot_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_pilot
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_mtp_f;
	weapons[] =
	{
		SMG_04_snd_Holo_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_04_snd_Holo_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(40Rnd_460x30_Mag_F),
		SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(40Rnd_460x30_Mag_F),
		SMOKESHELLS_BLUFOR
	};
    linkedItems[] =
    {
		V_CarrierRigKBT_01_MTP_F,
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
		V_CarrierRigKBT_01_MTP_F,
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_A_soldier_M_F: B_soldier_M_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_soldier_M_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_mtp_f;
	weapons[] =
	{
		srifle_DMR_02_sniper_AMS_LP_F,
		hgun_G17_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		srifle_DMR_02_sniper_AMS_LP_F,
		hgun_G17_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_10(10Rnd_338_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(10Rnd_338_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_MTP_F,
		H_HelmetB_camo_mcamo,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_MTP_F,
		H_HelmetB_camo_mcamo,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_A_Soldier_AA_F: B_soldier_AA_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_AA_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_mtp_f;
	backpack = B_AssaultPack_mcamo_AA;
	weapons[] =
	{
		arifle_SA80_C_snd_holo_pointer_f,
		launch_B_Titan_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_snd_holo_pointer_f,
		launch_B_Titan_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_mag),
		mag_2(17Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_mag),
		mag_2(17Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_MTP_F,
		H_HelmetB_camo,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_MTP_F,
		H_HelmetB_camo,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_A_Soldier_AT_F: B_soldier_AT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_AT_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_mtp_f;
	backpack = B_AssaultPack_mcamo_AT;
	weapons[] =
	{
		arifle_SA80_C_snd_holo_pointer_f,
		launch_B_Titan_short_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_snd_holo_pointer_f,
		launch_B_Titan_short_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_mag),
		mag_2(17Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_mag),
		mag_2(17Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_MTP_F,
		H_HelmetB_camo,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_MTP_F,
		H_HelmetB_camo,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_A_Officer_F: B_officer_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Officer_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_casual
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_mtp_f;
	weapons[] =
	{
		arifle_SA80_C_snd_F,
		hgun_G17_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_snd_F,
		hgun_G17_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_mag),
		mag_2(17Rnd_9x21_Mag),
		SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_mag),
		mag_2(17Rnd_9x21_Mag),
		SMOKESHELLS_BLUFOR
	};
	linkedItems[] =
	{
		V_Rangemaster_belt_cbr,
		H_Beret_red,
		DefaultManLeaderLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Rangemaster_belt_cbr,
		H_Beret_red,
		DefaultManLeaderLinkedItems
	};
};
class B_A_Soldier_PG_F: B_soldier_PG_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_PG_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_mtp_f;
	backpack = B_Parachute;
	weapons[] =
	{
		arifle_SA80_C_snd_aco_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_snd_aco_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_65x39_caseless_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_65x39_caseless_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Coyote_F,
		H_HelmetB_camo,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Coyote_F,
		H_HelmetB_camo,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
};
class B_A_Pilot_F: B_Pilot_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Pilot_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_pilot
	};
    scope = public;
    scopeCurator = public;
	backpack = B_Parachute;
	weapons[] =
	{
		SMG_04_snd_Holo_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_04_snd_Holo_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(40Rnd_460x30_Mag_F),
		SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(40Rnd_460x30_Mag_F),
		SMOKESHELLS_BLUFOR
	};
    linkedItems[] =
    {
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_A_Soldier_Repair_F: B_soldier_repair_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_Repair_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_mtp_f;
	backpack = B_TacticalPack_mcamo_BARepair_F;
	weapons[] =
	{
		arifle_SA80_C_snd_holo_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_snd_holo_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Coyote_F,
		H_HelmetB_plain_mcamo,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Coyote_F,
		H_HelmetB_plain_mcamo,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_A_Soldier_F: B_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_mtp_f;
	weapons[] =
	{
		arifle_SA80_snd_arco_pointer_f,
		hgun_G17_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_snd_arco_pointer_f,
		hgun_G17_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_MTP_F,
		H_HelmetB_camo_mcamo,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_MTP_F,
		H_HelmetB_camo_mcamo,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_A_Soldier_LAT_F: B_soldier_LAT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_LAT_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_mtp_f;
	backpack = B_TacticalPack_mcamo_BALAT_F;
	weapons[] =
	{
		arifle_SA80_snd_holo_pointer_f,
		launch_NLAW_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_snd_holo_pointer_f,
		launch_NLAW_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_mag),
		mag_2(17Rnd_9x21_Mag),
		NLAW_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_mag),
		mag_2(17Rnd_9x21_Mag),
		NLAW_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_MTP_F,
		H_HelmetB_camo,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_MTP_F,
		H_HelmetB_camo,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_A_Soldier_Lite_F: B_Soldier_lite_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_Lite_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_casual
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_vest_mtp_f;
	weapons[] =
	{
		arifle_SA80_C_snd_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_snd_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_MTP_F,
		H_Headset_light,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_MTP_F,
		H_Headset_light,
		DefaultManLinkedItems
	};
};
class B_A_Soldier_CQ_F: B_Soldier_CQ_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_CQ_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_mtp_f;
	weapons[] =
	{
		sgun_M4_ACO_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		sgun_M4_ACO_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_3(8Rnd_12Gauge_Pellets),
		mag_3(8Rnd_12Gauge_Slug),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_3(8Rnd_12Gauge_Pellets),
		mag_3(8Rnd_12Gauge_Slug),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_cqb_cbr_F,
		H_HelmetB_camo_mcamo,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_cqb_cbr_F,
		H_HelmetB_camo_mcamo,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_A_Soldier_SL_F: B_Soldier_SL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_SL_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_default
	};
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_A_CfgVehicles_B_A_Soldier_SL_F0;
	uniformClass = U_B_UBACS_vest_mtp_f;
	weapons[] =
	{
		arifle_SA80_snd_arco_pointer_f,
		hgun_G17_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_SA80_snd_arco_pointer_f,
		hgun_G17_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_mag),
		mag_2(30Rnd_65x39_caseless_mag_Tracer),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_mag),
		mag_2(30Rnd_65x39_caseless_mag_Tracer),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_MTP_F,
		H_HelmetB_camo_mcamo,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_MTP_F,
		H_HelmetB_camo_mcamo,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
};
class B_A_Soldier_TL_F: B_Soldier_TL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_TL_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_vest_mtp_f;
	weapons[] =
	{
		arifle_SA80_GL_snd_arco_pointer_f,
		hgun_G17_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_SA80_GL_snd_arco_pointer_f,
		hgun_G17_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_mag),
		mag_2(30Rnd_65x39_caseless_mag_Tracer),
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
		mag_4(30Rnd_65x39_caseless_mag),
		mag_2(30Rnd_65x39_caseless_mag_Tracer),
		mag_2(17Rnd_9x21_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Coyote_F,
		H_HelmetB_camo,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Coyote_F,
		H_HelmetB_camo,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
};
class B_A_Soldier_CBRN_F: B_A_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_CBRN_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_Soldier_CBRN_F0;
	uniformClass = U_B_A_CBRN_Suit_01_MTP_F;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_MTP_F,
		H_HelmetB_plain_mcamo,
		G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_MTP_F,
		H_HelmetB_plain_mcamo,
		G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems,
		NVGoggles
	};
	backpack = B_CombinationUnitRespirator_01_F;
	weapons[] =
    {
        arifle_SA80_C_snd_holo_FL_f,
        hgun_G17_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SA80_C_snd_holo_FL_f,
        hgun_G17_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
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
class B_A_RadioOperator_F: B_A_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_RadioOperator_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	uniformClass = U_B_UBACS_vest_mtp_f;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_MTP_F,
		H_HelmetB_camo_mcamo,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_MTP_F,
		H_HelmetB_camo_mcamo,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_RadioBag_01_mtp_F;
	weapons[] =
    {
        arifle_SA80_snd_holo_pointer_f,
        hgun_G17_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SA80_snd_holo_pointer_f,
        hgun_G17_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    role = RadioOperator;
};
class B_A_Survivor_F: B_A_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Survivor_F.jpg";
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
class B_A_Soldier_UAV_F: B_soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_UAV_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_mtp_f;
	backpack = B_UAV_01_backpack_F;
	weapons[] =
	{
		arifle_SA80_C_snd_aco_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_snd_aco_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_65x39_caseless_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_65x39_caseless_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Coyote_F,
		H_HelmetB_camo_mcamo,
		DefaultManLinkedItems,
		B_UavTerminal,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Coyote_F,
		H_HelmetB_camo_mcamo,
		DefaultManLinkedItems,
		B_UavTerminal,
		NVGoggles
	};
};
class B_A_soldier_UAV_06_F: B_A_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_soldier_UAV_06_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_F0;
	backpack = B_UAV_06_backpack_F;
};
class B_A_soldier_UAV_06_medical_F: B_A_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_soldier_UAV_06_medical_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_medical_F0;
	backpack = B_UAV_06_medical_backpack_F;
};
class B_A_soldier_UGV_02_Demining_F: B_A_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_soldier_UGV_02_Demining_F.jpg";
	displayName = $STR_A3_C_B_soldier_UGV_02_Demining_F0;
	backpack = B_UGV_02_Demining_backpack_F;
};
class B_A_soldier_UAV_02_LxWS_F: B_A_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_soldier_UAV_02_LxWS_F.jpg";
	displayName = "UAV Operator (AP-5)";
	backpack = Aegis_B_A_UAV_02_backpack_lxWS;
};
class B_A_Diver_F: B_diver_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Diver_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_diver
	};
    scope = public;
    scopeCurator = public;
	weapons[] =
	{
		arifle_SDAR_F,
		hgun_G17_snds_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SDAR_F,
		hgun_G17_snds_F,
		DefaultManWeapons
	};
    magazines[] =
    {
		mag_3(20Rnd_556x45_Stanag_red),
		mag_3(20Rnd_556x45_UW_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
		mag_3(20Rnd_556x45_Stanag_red),
		mag_3(20Rnd_556x45_UW_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
};
class B_A_Diver_Exp_F: B_diver_exp_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Diver_Exp_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_diver
	};
    scope = public;
    scopeCurator = public;
	weapons[] =
	{
		arifle_SDAR_F,
		hgun_G17_snds_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SDAR_F,
		hgun_G17_snds_F,
		DefaultManWeapons
	};
    magazines[] =
    {
		mag_3(20Rnd_556x45_Stanag_red),
		mag_3(20Rnd_556x45_UW_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
		mag_3(20Rnd_556x45_Stanag_red),
		mag_3(20Rnd_556x45_UW_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
};
class B_A_Diver_TL_F: B_diver_TL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Diver_TL_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_diver
	};
    scope = public;
    scopeCurator = public;
    weapons[] =
    {
		arifle_SDAR_F,
		hgun_G17_snds_F,
		DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_SDAR_F,
		hgun_G17_snds_F,
		DefaultManWeapons,
		Binocular
	};
    magazines[] =
    {
		mag_3(20Rnd_556x45_Stanag_red),
		mag_3(20Rnd_556x45_UW_mag),
		mag_2(17Rnd_9x21_Mag),
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
		mag_3(20Rnd_556x45_Stanag_red),
		mag_3(20Rnd_556x45_UW_mag),
		mag_2(17Rnd_9x21_Mag),
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
};
class B_A_Recon_AR_F: B_recon_AR_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_AR_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_SF
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_tshirt_mtp_f;
	weapons[] =
	{
		arifle_MX_SW_Hamr_pointer_snds_F,
		hgun_G17_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MX_SW_Hamr_pointer_snds_F,
		hgun_G17_snds_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(100Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(100Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_mtp_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_mtp_F,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_mtp_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_mtp_F,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
};
class B_A_Recon_Exp_F: B_recon_exp_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_Exp_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_recon
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_tshirt_mtp_f;
	weapons[] =
	{
		arifle_MXC_Holo_pointer_snds_F,
		hgun_G17_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Holo_pointer_snds_F,
		hgun_G17_snds_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		V_PlateCarrierL_CTRG,
		H_Booniehat_mcamo_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierL_CTRG,
		H_Booniehat_mcamo_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
};
class B_A_Recon_GL_F: B_recon_GL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_GL_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_SF
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_vest_mtp_f;
	weapons[] =
	{
        arifle_MX_GL_RCO_pointer_snds_F,
        hgun_G17_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_GL_RCO_pointer_snds_F,
        hgun_G17_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(Chemlight_green),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(Chemlight_green),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	linkedItems[] =
	{
		V_PlateCarrierL_CTRG,
        Aegis_H_Helmet_FASTMT_Cover_UK_mtp_F,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierL_CTRG,
        Aegis_H_Helmet_FASTMT_Cover_UK_mtp_F,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
};
class B_A_Recon_JTAC_F: B_recon_JTAC_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_JTAC_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_recon
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_mtp_f;
	backpack = B_RadioBag_01_mtp_F;
	weapons[] =
	{
		arifle_MX_Holo_pointer_snds_F,
		hgun_G17_snds_F,
        DefaultManWeapons,
		Laserdesignator
	};
	respawnWeapons[] =
	{
		arifle_MX_Holo_pointer_snds_F,
		hgun_G17_snds_F,
        DefaultManWeapons,
		Laserdesignator
	};
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		V_PlateCarrierL_CTRG,
        H_Watchcap_camo_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierL_CTRG,
        H_Watchcap_camo_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
};
class B_A_Recon_MG_F: B_recon_MG_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_MG_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_SF
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_mtp_f;
	weapons[] =
	{
		LMG_Mk200_plain_RCO_LP_S_F,
		hgun_G17_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_Mk200_plain_RCO_LP_S_F,
		hgun_G17_snds_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_3(200Rnd_65x39_cased_Box_Red),
        mag_2(17Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_3(200Rnd_65x39_cased_Box_Red),
        mag_2(17Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_mtp_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_mtp_F,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_mtp_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_mtp_F,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
};
class B_A_Recon_M_F: B_recon_M_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_M_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_recon
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_mtp_f;
	weapons[] =
	{
		arifle_MXM_MOS_LP_BI_S_F,
		hgun_G17_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MXM_MOS_LP_BI_S_F,
		hgun_G17_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_mtp_F,
		H_Booniehat_mcamo_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_mtp_F,
		H_Booniehat_mcamo_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
};
class B_A_Recon_Medic_F: B_recon_medic_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_Medic_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_SF
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_tshirt_mtp_f;
	backpack = B_TacticalPack_mcamo_BAReconMedic_F;
	weapons[] =
	{
		arifle_MXC_Holo_pointer_snds_F,
		hgun_G17_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Holo_pointer_snds_F,
		hgun_G17_snds_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_mtp_F,
        Aegis_H_Helmet_FASTMT_Cover_UK_mtp_F,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_mtp_F,
        Aegis_H_Helmet_FASTMT_Cover_UK_mtp_F,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
};
class B_A_Recon_F: B_recon_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_SF
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_vest_mtp_f;
	weapons[] =
	{
		arifle_MX_RCO_pointer_snds_F,
		hgun_G17_snds_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_MX_RCO_pointer_snds_F,
		hgun_G17_snds_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
        mag_10(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_10(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_mtp_F,
        Aegis_H_Helmet_FASTMT_Cover_UK_mtp_F,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_mtp_F,
        Aegis_H_Helmet_FASTMT_Cover_UK_mtp_F,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
};
class B_A_Recon_LAT_F: B_recon_LAT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_LAT_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_SF
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_tshirt_mtp_f;
	backpack = B_TacticalPack_mcamo_BAReconLAT_F;
	weapons[] =
	{
		arifle_MX_Holo_pointer_snds_F,
		launch_NLAW_F,
		hgun_G17_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MX_Holo_pointer_snds_F,
		launch_NLAW_F,
		hgun_G17_snds_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(17Rnd_9x21_Mag),
        NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_mtp_F,
        Aegis_H_Helmet_FASTMT_Cover_UK_mtp_F,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_mtp_F,
        Aegis_H_Helmet_FASTMT_Cover_UK_mtp_F,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
};
class B_A_Recon_CQ_F: B_recon_CQ_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_CQ_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_SF
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_vest_mtp_f;
	weapons[] =
	{
		sgun_M4_ACO_F,
		hgun_G17_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		sgun_M4_ACO_F,
		hgun_G17_snds_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_3(8Rnd_12Gauge_Pellets),
		mag_3(8Rnd_12Gauge_Slug),
		mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
		mag_3(8Rnd_12Gauge_Pellets),
		mag_3(8Rnd_12Gauge_Slug),
		mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		V_PlateCarrierL_CTRG,
		Aegis_H_Helmet_FASTMT_Cover_UK_mtp_F,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrierL_CTRG,
		Aegis_H_Helmet_FASTMT_Cover_UK_mtp_F,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
};
class B_A_Recon_Sharpshooter_F: B_Recon_Sharpshooter_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_Sharpshooter_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_recon
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_mtp_f;
	weapons[] =
	{
		srifle_DMR_02_sniper_AMS_LP_S_F,
		hgun_G17_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		srifle_DMR_02_sniper_AMS_LP_S_F,
		hgun_G17_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_10(10Rnd_338_Mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
		mag_10(10Rnd_338_Mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_mtp_F,
		H_Cap_khaki_specops_UK_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_mtp_F,
		H_Cap_khaki_specops_UK_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
};
class B_A_Recon_TL_F: B_recon_TL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_TL_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_SF
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_vest_mtp_f;
	weapons[] =
	{
		arifle_MX_RCO_pointer_snds_F,
		hgun_G17_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MX_RCO_pointer_snds_F,
		hgun_G17_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_mag),
		mag_2(30Rnd_65x39_caseless_mag_Tracer),
		mag_2(17Rnd_9x21_Mag),
		mag_2(MiniGrenade),
		SmokeShell,
		SMOKESHELLS_BLUFOR,
		mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_mag),
		mag_2(30Rnd_65x39_caseless_mag_Tracer),
		mag_2(17Rnd_9x21_Mag),
		mag_2(MiniGrenade),
		SmokeShell,
		SMOKESHELLS_BLUFOR,
		mag_2(Chemlight_green)
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
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_mtp_F,
        Aegis_H_Helmet_FASTMT_Cover_UK_mtp_F,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_mtp_F,
        Aegis_H_Helmet_FASTMT_Cover_UK_mtp_F,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
};
class B_A_Soldier_universal_F: B_A_Soldier_F
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
class B_A_Soldier_unarmed_F: B_A_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_unarmed_F.jpg";
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_MTP_F,
		H_HelmetB_camo_mcamo,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_MTP_F,
		H_HelmetB_camo_mcamo,
		DefaultManLinkedItems
	};
	role = Unarmed;
	threat[] =
    {
        0.1,    // Soft
        0.1,    // Armor
        0.1     // Air
    };
};
class B_A_HeavyGunner_F: B_HeavyGunner_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_HeavyGunner_F.jpg";
    faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_UBACS_tshirt_mtp_f;
	weapons[] =
	{
		MMG_02_sand_RCO_LP_F,
		hgun_G17_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		MMG_02_sand_RCO_LP_F,
		hgun_G17_F,
		DefaultManWeapons
	};
    magazines[] =
    {
        mag_3(130Rnd_338_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_3(130Rnd_338_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Coyote_F,
		H_HelmetB_camo,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Coyote_F,
		H_HelmetB_camo,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_A_ghillie_ard_F: B_ghillie_ard_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_ghillie_ard_F.jpg";
	faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO_camo_arid,
		G_NATO_sniper
	};
    scope = public;
    scopeCurator = public;
	weapons[] =
	{
		//srifle_WF50_LRPS_F,
        srifle_LRR_camo_LRPS_F,
		hgun_G17_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		//srifle_WF50_LRPS_F,
        srifle_LRR_camo_LRPS_F,
		hgun_G17_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
    magazines[] =
    {
        mag_6(7Rnd_408_Mag),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(7Rnd_408_Mag),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    /*
	magazines[] =
	{
		mag_6(5Rnd_127x99_Mag),
		mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
		mag_6(5Rnd_127x99_Mag),
		mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
    */
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
		V_TacChestrig_cbr_F,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_cbr_F,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
};
class B_A_ghillie_lsh_F: B_ghillie_lsh_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_ghillie_lsh_F.jpg";
	faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO_camo_lush,
		G_NATO_sniper
	};
    scope = public;
    scopeCurator = public;
	weapons[] =
	{
		//srifle_WF50_LRPS_F,
        srifle_LRR_camo_LRPS_F,
		hgun_G17_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		//srifle_WF50_LRPS_F,
        srifle_LRR_camo_LRPS_F,
		hgun_G17_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
    magazines[] =
    {
        mag_6(7Rnd_408_Mag),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(7Rnd_408_Mag),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    /*
	magazines[] =
	{
		mag_6(5Rnd_127x99_Mag),
		mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
		mag_6(5Rnd_127x99_Mag),
		mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
    */
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
		V_TacChestrig_cbr_F,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_cbr_F,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
};
class B_A_ghillie_sard_F: B_ghillie_sard_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_ghillie_sard_F.jpg";
	faction = BLU_A_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO_camo_semiarid,
		G_NATO_sniper
	};
    scope = public;
    scopeCurator = public;
	weapons[] =
	{
		//srifle_WF50_LRPS_F,
        srifle_LRR_camo_LRPS_F,
		hgun_G17_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		//srifle_WF50_LRPS_F,
        srifle_LRR_camo_LRPS_F,
		hgun_G17_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
    magazines[] =
    {
        mag_6(7Rnd_408_Mag),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(7Rnd_408_Mag),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    /*
	magazines[] =
	{
		mag_6(5Rnd_127x99_Mag),
		mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
		mag_6(5Rnd_127x99_Mag),
		mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
    */
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
		V_TacChestrig_cbr_F,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_cbr_F,
		DefaultManLeaderLinkedItems,
		NVGoggles
	};
};
class B_A_ghillie_spotter_ard_F: B_A_ghillie_ard_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_ghillie_spotter_ard_F.jpg";
	scope = public;
    displayName = $STR_A3_A_CfgVehicles_B_ghillie_spotter_ard_F0;
	cost = 250000;
	weapons[] =
	{
		arifle_MX_RCO_pointer_snds_F,
		hgun_G17_snds_F,
        DefaultManWeapons,
		Laserdesignator
	};
	respawnWeapons[] =
	{
		arifle_MX_RCO_pointer_snds_F,
		hgun_G17_snds_F,
        DefaultManWeapons,
		Laserdesignator
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_mag),
		mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_mag),
		mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
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
class B_A_ghillie_spotter_lsh_F: B_A_ghillie_lsh_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_ghillie_spotter_lsh_F.jpg";
	scope = public;
    displayName = $STR_A3_A_CfgVehicles_B_ghillie_spotter_lsh_F0;
	cost = 250000;
	weapons[] =
	{
		arifle_MX_RCO_pointer_snds_F,
		hgun_G17_snds_F,
        DefaultManWeapons,
		Laserdesignator
	};
	respawnWeapons[] =
	{
		arifle_MX_RCO_pointer_snds_F,
		hgun_G17_snds_F,
        DefaultManWeapons,
		Laserdesignator
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_mag),
		mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_mag),
		mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
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
class B_A_ghillie_spotter_sard_F: B_A_ghillie_sard_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_ghillie_spotter_sard_F.jpg";
	scope = public;
    displayName = $STR_A3_A_CfgVehicles_B_ghillie_spotter_sard_F0;
	cost = 250000;
	weapons[] =
	{
		arifle_MX_RCO_pointer_snds_F,
		hgun_G17_snds_F,
        DefaultManWeapons,
		Laserdesignator
	};
	respawnWeapons[] =
	{
		arifle_MX_RCO_pointer_snds_F,
		hgun_G17_snds_F,
        DefaultManWeapons,
		Laserdesignator
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_mag),
		mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_mag),
		mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
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
class B_A_Fighter_Pilot_F: B_A_Pilot_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Fighter_Pilot_F.jpg";
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_pilot
	};
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_B_Fighter_Pilot_name;
    role = Crewman;
    cost = 165000;
	camouflage = 2;
	uniformClass = U_B_PilotCoveralls;
	weapons[] =
	{
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_2(17Rnd_9x21_Mag),
		SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_2(17Rnd_9x21_Mag),
		SMOKESHELLS_BLUFOR
	};
    linkedItems[] =
    {
        H_PilotHelmetFighter_B,
        DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetFighter_B,
        DefaultManLinkedItems
    };
};

/* BAF (Pacific) */
class B_A_Soldier_A_tna_F: B_A_Soldier_A_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_A_tna_F.jpg";
	faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_tna_f;
	backpack = B_Carryall_tna_BAAmmo_F;
	weapons[] =
	{
		arifle_SA80_khk_aco_pointer_f,
		hgun_G17_khaki_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_khk_aco_pointer_f,
		hgun_G17_khaki_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_12(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_12(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Soldier_AAR_tna_F: B_A_Soldier_AAR_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_AAR_tna_F.jpg";
	faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_tshirt_tna_f;
	backpack = B_TacticalPack_tna_BAAAR_F;
	weapons[] =
	{
		arifle_SA80_khk_aco_pointer_f,
		hgun_G17_khaki_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_SA80_khk_aco_pointer_f,
		hgun_G17_khaki_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Support_AMG_tna_F: B_A_Support_AMG_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Support_AMG_tna_F.jpg";
    faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_tshirt_tna_f;
	backpack = B_HMG_01_support_grn_F;
	weapons[] =
	{
		arifle_SA80_C_khk_aco_pointer_f,
		hgun_G17_khaki_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_khk_aco_pointer_f,
		hgun_G17_khaki_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Support_AMort_tna_F: B_A_Support_AMort_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Support_AMort_tna_F.jpg";
    faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_tshirt_tna_f;
	backpack = B_Mortar_01_support_grn_F;
	weapons[] =
	{
		arifle_SA80_C_khk_aco_pointer_f,
		hgun_G17_khaki_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_khk_aco_pointer_f,
		hgun_G17_khaki_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Soldier_AAA_tna_F: B_A_Soldier_AAA_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_AAA_tna_F.jpg";
	faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_tna_f;
	backpack = B_Carryall_oli_BTAAA_F;
	weapons[] =
	{
		arifle_SA80_khk_aco_pointer_f,
		hgun_G17_khaki_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_SA80_khk_aco_pointer_f,
		hgun_G17_khaki_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Soldier_AAT_tna_F: B_A_Soldier_AAT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_AAT_tna_F.jpg";
	faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_tna_f;
	backpack = B_Carryall_oli_BTAAT_F;
	weapons[] =
	{
		arifle_SA80_khk_aco_pointer_f,
		hgun_G17_khaki_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_SA80_khk_aco_pointer_f,
		hgun_G17_khaki_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Soldier_AR_tna_F: B_A_Soldier_AR_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_AR_tna_F.jpg";
	faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_tshirt_tna_f;
	weapons[] =
	{
		LMG_Mk200_khk_Hamr_Pointer_Bipod_F,
		hgun_G17_khaki_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_Mk200_khk_Hamr_Pointer_Bipod_F,
		hgun_G17_khaki_F,
		DefaultManWeapons
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Medic_tna_F: B_A_Medic_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Medic_tna_F.jpg";
	faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_tna_f;
	backpack = B_TacticalPack_tna_BAMedic_F;
	weapons[] =
	{
		arifle_SA80_khk_holo_pointer_f,
		hgun_G17_khaki_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_khk_holo_pointer_f,
		hgun_G17_khaki_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_khaki_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_khaki_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_Enh_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_Enh_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Crew_tna_F: B_A_Crew_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Crew_tna_F.jpg";
	faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_vest_tna_f;
	weapons[] =
	{
		arifle_SA80_C_khk_holo_f,
		hgun_G17_khaki_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_khk_holo_f,
		hgun_G17_khaki_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_khaki_mag),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_khaki_mag),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_Olive_F,
		H_HelmetCrew_B_oli_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_Olive_F,
		H_HelmetCrew_B_oli_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Engineer_tna_F: B_A_Engineer_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Engineer_tna_F.jpg";
	faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_vest_tna_f;
	backpack = B_Kitbag_rgr_BTEng_F;
	weapons[] =
	{
		arifle_SA80_C_khk_holo_pointer_f,
		hgun_G17_khaki_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_khk_holo_pointer_f,
		hgun_G17_khaki_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_khaki_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_khaki_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Soldier_Exp_tna_F: B_A_Soldier_Exp_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_Exp_tna_F.jpg";
	faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_tna_f;
	backpack = B_Kitbag_rgr_BTExp_F;
	weapons[] =
	{
		arifle_SA80_C_khk_holo_pointer_f,
		hgun_G17_khaki_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_khk_holo_pointer_f,
		hgun_G17_khaki_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_khaki_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_khaki_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Olive_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Olive_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_soldier_mine_tna_F: B_A_Soldier_Exp_tna_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_soldier_mine_tna_F.jpg";
	displayName = $STR_A3_B_T_soldier_mine_F0;
	backpack = B_Carryall_tna_BTMine_F;
};
class B_A_Soldier_GL_tna_F: B_A_Soldier_GL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_GL_tna_F.jpg";
	faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_tna_f;
	weapons[] =
	{
		arifle_SA80_GL_khk_aco_pointer_f,
		hgun_G17_khaki_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_GL_khk_aco_pointer_f,
		hgun_G17_khaki_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_khaki_mag),
		mag_2(17Rnd_9x21_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_khaki_mag),
		mag_2(17Rnd_9x21_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Support_GMG_tna_F: B_A_Support_GMG_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Support_GMG_tna_F.jpg";
    faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_tshirt_tna_f;
	backpack = B_GMG_01_Weapon_grn_F;
	weapons[] =
	{
		arifle_SA80_C_khk_aco_pointer_f,
		hgun_G17_khaki_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_khk_aco_pointer_f,
		hgun_G17_khaki_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Support_MG_tna_F: B_A_Support_MG_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Support_MG_tna_F.jpg";
    faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_tshirt_tna_f;
	backpack = B_HMG_01_Weapon_grn_F;
	weapons[] =
	{
		arifle_SA80_C_khk_aco_pointer_f,
		hgun_G17_khaki_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_khk_aco_pointer_f,
		hgun_G17_khaki_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Support_Mort_tna_F: B_A_Support_Mort_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Support_Mort_tna_F.jpg";
    faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_tshirt_tna_f;
	backpack = B_Mortar_01_Weapon_grn_F;
	weapons[] =
	{
		arifle_SA80_C_khk_aco_pointer_f,
		hgun_G17_khaki_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_khk_aco_pointer_f,
		hgun_G17_khaki_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Helicrew_tna_F: B_A_Helicrew_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Helicrew_tna_F.jpg";
	faction = BLU_A_tna_F;
	uniformClass = U_B_UBACS_tna_f;
	weapons[] =
	{
		arifle_SA80_C_khk_holo_f,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_khk_holo_f,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_khaki_mag),
		SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_khaki_mag),
		SMOKESHELLS_BLUFOR
	};
    linkedItems[] =
    {
		V_CarrierRigKBT_01_Olive_F,
        H_CrewHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles_tna_F
    };
    respawnLinkedItems[] =
    {
		V_CarrierRigKBT_01_Olive_F,
        H_CrewHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles_tna_F
    };
};
class B_A_Helipilot_tna_F: B_A_Helipilot_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Helipilot_tna_F.jpg";
	faction = BLU_A_tna_F;
	uniformClass = U_B_UBACS_tna_f;
	weapons[] =
	{
		SMG_04_khk_Holo_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_04_khk_Holo_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(40Rnd_460x30_Mag_F),
		SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(40Rnd_460x30_Mag_F),
		SMOKESHELLS_BLUFOR
	};
    linkedItems[] =
    {
		V_CarrierRigKBT_01_Olive_F,
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles_tna_F
    };
    respawnLinkedItems[] =
    {
		V_CarrierRigKBT_01_Olive_F,
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles_tna_F
    };
};
class B_A_soldier_M_tna_F: B_A_soldier_M_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_soldier_M_tna_F.jpg";
	faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_tna_f;
	weapons[] =
	{
		srifle_DMR_02_AMS_LP_BI_F,
		hgun_G17_khaki_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		srifle_DMR_02_AMS_LP_BI_F,
		hgun_G17_khaki_F,
        DefaultManWeapons,
		Rangefinder
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Soldier_AA_tna_F: B_A_Soldier_AA_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_AA_tna_F.jpg";
	faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_tna_f;
	backpack = B_Kitbag_rgr_BTAA_F;
	weapons[] =
	{
		arifle_SA80_C_khk_holo_pointer_f,
		launch_B_Titan_tna_F,
		hgun_G17_khaki_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_khk_holo_pointer_f,
		launch_B_Titan_tna_F,
		hgun_G17_khaki_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_khaki_mag),
		mag_2(17Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_khaki_mag),
		mag_2(17Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Soldier_AT_tna_F: B_A_Soldier_AT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_AT_tna_F.jpg";
	faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_tna_f;
	backpack = B_Kitbag_rgr_BTAT_F;
	weapons[] =
	{
		arifle_SA80_C_khk_holo_pointer_f,
		launch_B_Titan_short_tna_F,
		hgun_G17_khaki_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_khk_holo_pointer_f,
		launch_B_Titan_short_tna_F,
		hgun_G17_khaki_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_khaki_mag),
		mag_2(17Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_khaki_mag),
		mag_2(17Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Officer_tna_F: B_A_Officer_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Officer_tna_F.jpg";
	faction = BLU_A_tna_F;
	uniformClass = U_B_UBACS_tna_f;
	weapons[] =
	{
		arifle_SA80_C_khk_F,
		hgun_G17_khaki_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_khk_F,
		hgun_G17_khaki_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_khaki_mag),
		mag_2(17Rnd_9x21_Mag),
		SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_khaki_mag),
		mag_2(17Rnd_9x21_Mag),
		SMOKESHELLS_BLUFOR
	};
	linkedItems[] =
	{
		V_Rangemaster_belt_tna_F,
		H_Beret_red,
		DefaultManLeaderLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Rangemaster_belt_tna_F,
		H_Beret_red,
		DefaultManLeaderLinkedItems
	};
};
class B_A_Soldier_PG_tna_F: B_A_Soldier_PG_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_PG_tna_F.jpg";
    faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_tna_f;
	backpack = B_Parachute;
	weapons[] =
	{
		arifle_SA80_C_khk_aco_pointer_f,
		hgun_G17_khaki_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_khk_aco_pointer_f,
		hgun_G17_khaki_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_65x39_caseless_khaki_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_65x39_caseless_khaki_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Pilot_tna_F: B_A_Pilot_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Pilot_tna_F.jpg";
    faction = BLU_A_tna_F;
	weapons[] =
	{
		SMG_04_khk_Holo_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_04_khk_Holo_F,
        DefaultManWeapons
	};
    linkedItems[] =
    {
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles_tna_F
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles_tna_F
    };
};
class B_A_Soldier_Repair_tna_F: B_A_Soldier_Repair_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_Repair_tna_F.jpg";
	faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_tna_f;
	backpack = B_TacticalPack_tna_BARepair_F;
	weapons[] =
	{
		arifle_SA80_C_khk_holo_pointer_f,
		hgun_G17_khaki_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_khk_holo_pointer_f,
		hgun_G17_khaki_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_khaki_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_khaki_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Soldier_tna_F: B_A_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_tna_F.jpg";
	faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_tna_f;
	weapons[] =
	{
		arifle_SA80_khk_arco_pointer_f,
		hgun_G17_khaki_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_khk_arco_pointer_f,
		hgun_G17_khaki_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_65x39_caseless_khaki_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_65x39_caseless_khaki_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Soldier_LAT_tna_F: B_A_Soldier_LAT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_LAT_tna_F.jpg";
	faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_tna_f;
	backpack = B_TacticalPack_tna_BALAT_F;
	weapons[] =
	{
		arifle_SA80_khk_holo_pointer_f,
		launch_NLAW_F,
		hgun_G17_khaki_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_khk_holo_pointer_f,
		launch_NLAW_F,
		hgun_G17_khaki_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_khaki_mag),
		mag_2(17Rnd_9x21_Mag),
		NLAW_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_khaki_mag),
		mag_2(17Rnd_9x21_Mag),
		NLAW_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Soldier_Lite_tna_F: B_A_Soldier_Lite_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_Lite_tna_F.jpg";
    faction = BLU_A_tna_F;
	uniformClass = U_B_UBACS_vest_tna_f;
	weapons[] =
	{
		arifle_SA80_C_khk_F,
		hgun_G17_khaki_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_khk_F,
		hgun_G17_khaki_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_khaki_mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_khaki_mag),
        HandGrenade,
        SmokeShell
	};
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
};
class B_A_Soldier_CQ_tna_F: B_A_Soldier_CQ_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_CQ_tna_F.jpg";
	faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_tna_f;
	weapons[] =
	{
		sgun_M4_ACO_F,
		hgun_G17_khaki_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		sgun_M4_ACO_F,
		hgun_G17_khaki_F,
        DefaultManWeapons
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_cqb_olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_cqb_olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Soldier_SL_tna_F: B_A_Soldier_SL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_SL_tna_F.jpg";
	faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_vest_tna_f;
	weapons[] =
	{
		arifle_SA80_khk_arco_pointer_f,
		hgun_G17_khaki_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_SA80_khk_arco_pointer_f,
		hgun_G17_khaki_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_khaki_mag),
		mag_2(30Rnd_65x39_caseless_khaki_mag_Tracer),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_khaki_mag),
		mag_2(30Rnd_65x39_caseless_khaki_mag_Tracer),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Soldier_TL_tna_F: B_A_Soldier_TL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_TL_tna_F.jpg";
	faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_vest_tna_f;
	weapons[] =
	{
		arifle_SA80_GL_khk_arco_pointer_f,
		hgun_G17_khaki_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_SA80_GL_khk_arco_pointer_f,
		hgun_G17_khaki_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_khaki_mag),
		mag_2(30Rnd_65x39_caseless_khaki_mag_Tracer),
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
		mag_4(30Rnd_65x39_caseless_khaki_mag),
		mag_2(30Rnd_65x39_caseless_khaki_mag_Tracer),
		mag_2(17Rnd_9x21_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
	};
	linkedItems[] =
	{
		H_HelmetB_Camo_tna_F,
		V_CarrierRigKBT_01_heavy_Olive_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_Camo_tna_F,
		V_CarrierRigKBT_01_heavy_Olive_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Soldier_CBRN_tna_F: B_A_Soldier_tna_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_CBRN_tna_F.jpg";
    displayName = $STR_A3_C_B_W_Soldier_CBRN_F0;
    role = Sapper;
    icon = iconManEngineer;
    picture = pictureRepair;
    cost = 93000;
	camouflage = 1.6;
	uniformClass = U_B_CBRN_Suit_01_Tropic_F;
	backpack = B_CombinationUnitRespirator_01_F;
	weapons[] =
    {
        arifle_SA80_C_khk_holo_FL_f,
        hgun_G17_khaki_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SA80_C_khk_holo_FL_f,
        hgun_G17_khaki_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_tna_F,
		G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_tna_F,
		G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems,
		NVGoggles_tna_F
	};
    class EventHandlers: EventHandlers
    {
        class BIN_CBRN_INIT
        {
            init = "_this call bin_fnc_CBRNHoseInit;";
        };
    };
};
class B_A_RadioOperator_tna_F: B_A_Soldier_tna_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_RadioOperator_tna_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	uniformClass = U_B_UBACS_vest_tna_f;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	backpack = B_RadioBag_01_tropic_F;
	weapons[] =
    {
        arifle_SA80_khk_holo_pointer_f,
        hgun_G17_khaki_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SA80_khk_holo_pointer_f,
        hgun_G17_khaki_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    role = RadioOperator;
};
class B_A_Survivor_tna_F: B_A_Soldier_tna_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Survivor_tna_F.jpg";
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
class B_A_Soldier_UAV_tna_F: B_A_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_UAV_tna_F.jpg";
    faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_tna_f;
	weapons[] =
	{
		arifle_SA80_C_khk_aco_pointer_f,
		hgun_G17_khaki_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_khk_aco_pointer_f,
		hgun_G17_khaki_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_65x39_caseless_khaki_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_65x39_caseless_khaki_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLinkedItems,
		B_UavTerminal,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLinkedItems,
		B_UavTerminal,
		NVGoggles_tna_F
	};
};
class B_A_soldier_UAV_06_tna_F: B_A_Soldier_UAV_tna_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_soldier_UAV_06_tna_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_F0;
	backpack = B_UAV_06_backpack_F;
};
class B_A_soldier_UAV_06_medical_tna_F: B_A_Soldier_UAV_tna_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_soldier_UAV_06_medical_tna_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_medical_F0;
	backpack = B_UAV_06_medical_backpack_F;
};
class B_A_soldier_UGV_02_Demining_tna_F: B_A_Soldier_UAV_tna_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_soldier_UGV_02_Demining_tna_F.jpg";
	displayName = $STR_A3_C_B_soldier_UGV_02_Demining_F0;
	backpack = B_UGV_02_Demining_backpack_F;
};
class B_A_soldier_UAV_02_tna_LxWS_F: B_A_Soldier_UAV_tna_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_soldier_UAV_02_tna_LxWS_F.jpg";
	displayName = "UAV Operator (AP-5)";
	backpack = Aegis_B_A_UAV_02_backpack_lxWS;
};
class B_A_Diver_tna_F: B_A_Diver_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Diver_tna_F.jpg";
	faction = BLU_A_tna_F;
	weapons[] =
	{
		arifle_SDAR_F,
		hgun_G17_khaki_snds_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SDAR_F,
		hgun_G17_khaki_snds_F,
		DefaultManWeapons
	};
};
class B_A_Diver_Exp_tna_F: B_A_Diver_Exp_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Diver_Exp_tna_F.jpg";
	faction = BLU_A_tna_F;
	weapons[] =
	{
		arifle_SDAR_F,
		hgun_G17_khaki_snds_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SDAR_F,
		hgun_G17_khaki_snds_F,
		DefaultManWeapons
	};
};
class B_A_Diver_TL_tna_F: B_A_Diver_TL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Diver_TL_tna_F.jpg";
	faction = BLU_A_tna_F;
    weapons[] =
    {
		arifle_SDAR_F,
		hgun_G17_khaki_snds_F,
		DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_SDAR_F,
		hgun_G17_khaki_snds_F,
		DefaultManWeapons,
		Binocular
	};
};
class B_A_Recon_AR_tna_F: B_A_Recon_AR_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_AR_tna_F.jpg";
	faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_T_NATO_SF
	};
	uniformClass = U_B_UBACS_tshirt_tna_f;
	weapons[] =
	{
		arifle_MX_SW_khk_Hamr_Pointer_Snds_F,
		hgun_G17_khaki_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MX_SW_khk_Hamr_Pointer_Snds_F,
		hgun_G17_khaki_snds_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(100Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(100Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Recon_Exp_tna_F: B_A_Recon_Exp_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_Exp_tna_F.jpg";
	faction = BLU_A_tna_F;
	uniformClass = U_B_UBACS_tshirt_tna_f;
	backpack = B_Kitbag_rgr_BTReconExp_F;
	weapons[] =
	{
		arifle_MXC_khk_Holo_Pointer_Snds_F,
		hgun_G17_khaki_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_khk_Holo_Pointer_Snds_F,
		hgun_G17_khaki_snds_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		H_Booniehat_tna_hs_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		H_Booniehat_tna_hs_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Recon_GL_tna_F: B_A_Recon_GL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_GL_tna_F.jpg";
	faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_T_NATO_SF
	};
	uniformClass = U_B_UBACS_vest_tna_f;
	weapons[] =
	{
        arifle_MX_GL_khk_Hamr_Pointer_Snds_F,
        hgun_G17_khaki_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_GL_khk_Hamr_Pointer_Snds_F,
        hgun_G17_khaki_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(Chemlight_green),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(Chemlight_green),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Recon_JTAC_tna_F: B_A_Recon_JTAC_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_JTAC_tna_F.jpg";
	faction = BLU_A_tna_F;
	uniformClass = U_B_UBACS_tna_f;
	backpack = B_RadioBag_01_tropic_F;
	weapons[] =
	{
		arifle_MX_khk_Holo_Pointer_Snds_F,
		hgun_G17_khaki_snds_F,
        DefaultManWeapons,
		Laserdesignator_01_khk_F
	};
	respawnWeapons[] =
	{
		arifle_MX_khk_Holo_Pointer_Snds_F,
		hgun_G17_khaki_snds_F,
        DefaultManWeapons,
		Laserdesignator_01_khk_F
	};
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
        H_Watchcap_camo_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
        H_Watchcap_camo_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Recon_MG_tna_F: B_A_Recon_MG_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_MG_tna_F.jpg";
	faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_T_NATO_SF
	};
	uniformClass = U_B_UBACS_tna_f;
	weapons[] =
	{
		LMG_Mk200_khk_Hamr_Pointer_Bipod_Snds_F,
		hgun_G17_khaki_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_Mk200_khk_Hamr_Pointer_Bipod_Snds_F,
		hgun_G17_khaki_snds_F,
        DefaultManWeapons
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Recon_M_tna_F: B_A_Recon_M_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_M_tna_F.jpg";
	faction = BLU_A_tna_F;
	uniformClass = U_B_UBACS_tna_f;
	weapons[] =
	{
		arifle_MXM_khk_MOS_Pointer_Bipod_Snds_F,
		hgun_G17_khaki_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MXM_khk_MOS_Pointer_Bipod_Snds_F,
		hgun_G17_khaki_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		H_Booniehat_tna_hs_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		H_Booniehat_tna_hs_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Recon_Medic_tna_F: B_A_Recon_Medic_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_Medic_tna_F.jpg";
	faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_T_NATO_SF
	};
	uniformClass = U_B_UBACS_tshirt_tna_f;
	backpack = B_TacticalPack_tna_BAReconMedic_F;
	weapons[] =
	{
		arifle_MXC_khk_Holo_Pointer_Snds_F,
		hgun_G17_khaki_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_khk_Holo_Pointer_Snds_F,
		hgun_G17_khaki_snds_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Recon_tna_F: B_A_Recon_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_tna_F.jpg";
	faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_T_NATO_SF
	};
	uniformClass = U_B_UBACS_vest_tna_f;
	weapons[] =
	{
		arifle_MX_khk_Hamr_Pointer_Snds_F,
		hgun_G17_khaki_snds_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_MX_khk_Hamr_Pointer_Snds_F,
		hgun_G17_khaki_snds_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
        mag_10(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_10(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Recon_LAT_tna_F: B_A_Recon_LAT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_LAT_tna_F.jpg";
	faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_T_NATO_SF
	};
	uniformClass = U_B_UBACS_tshirt_tna_f;
	backpack = B_TacticalPack_tna_BAReconLAT_F;
	weapons[] =
	{
		arifle_MX_khk_Holo_Pointer_Snds_F,
		launch_NLAW_F,
		hgun_G17_khaki_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MX_khk_Holo_Pointer_Snds_F,
		launch_NLAW_F,
		hgun_G17_khaki_snds_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Recon_CQ_tna_F: B_A_Recon_CQ_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_CQ_tna_F.jpg";
	faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_T_NATO_SF
	};
	uniformClass = U_B_UBACS_vest_tna_f;
	weapons[] =
	{
		sgun_M4_ACO_F,
		hgun_G17_khaki_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		sgun_M4_ACO_F,
		hgun_G17_khaki_snds_F,
        DefaultManWeapons
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Recon_Sharpshooter_tna_F: B_A_Recon_Sharpshooter_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_Sharpshooter_tna_F.jpg";
    faction = BLU_A_tna_F;
	uniformClass = U_B_UBACS_tna_f;
	weapons[] =
	{
		srifle_DMR_02_AMS_LP_BI_S_F,
		hgun_G17_khaki_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		srifle_DMR_02_AMS_LP_BI_S_F,
		hgun_G17_khaki_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		H_Cap_khaki_specops_UK_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		H_Cap_khaki_specops_UK_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Recon_TL_tna_F: B_A_Recon_TL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_TL_tna_F.jpg";
	faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_T_NATO_SF
	};
	uniformClass = U_B_UBACS_vest_tna_f;
	weapons[] =
	{
		arifle_MX_khk_Hamr_Pointer_Snds_F,
		hgun_G17_khaki_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MX_khk_Hamr_Pointer_Snds_F,
		hgun_G17_khaki_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_khaki_mag),
		mag_2(30Rnd_65x39_caseless_khaki_mag_Tracer),
		mag_2(17Rnd_9x21_Mag),
		mag_2(MiniGrenade),
		SmokeShell,
		SMOKESHELLS_BLUFOR,
		mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_khaki_mag),
		mag_2(30Rnd_65x39_caseless_khaki_mag_Tracer),
		mag_2(17Rnd_9x21_Mag),
		mag_2(MiniGrenade),
		SmokeShell,
		SMOKESHELLS_BLUFOR,
		mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_tna_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_Soldier_universal_tna_F: B_A_Soldier_tna_F
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
class B_A_Soldier_unarmed_tna_F: B_A_Soldier_tna_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_unarmed_tna_F.jpg";
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLinkedItems
	};
	role = Unarmed;
	threat[] =
    {
        0.1,    // Soft
        0.1,    // Armor
        0.1     // Air
    };
};
class B_A_HeavyGunner_tna_F: B_A_HeavyGunner_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_HeavyGunner_tna_F.jpg";
	faction = BLU_A_tna_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_tshirt_tna_f;
	weapons[] =
	{
		MMG_02_khaki_RCO_LP_F,
		hgun_G17_khaki_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		MMG_02_khaki_RCO_LP_F,
		hgun_G17_khaki_F,
		DefaultManWeapons
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_Camo_tna_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
};
class B_A_ghillie_tna_F: B_ghillie_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_ghillie_tna_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_O_T_ghillie_tna_F0;
	faction = BLU_A_tna_F;
	uniformClass = U_B_T_FullGhillie_tna_F;
	hiddenSelectionsTextures[] =
	{
        "\A3\Characters_F_Exp\BLUFOR\Data\ghillie_coverall_NATO_CO.paa",
        "\A3\Characters_F_Exp\BLUFOR\Data\ghillie_threads_tna_CA.paa",
        "\A3\Characters_F_Exp\BLUFOR\Data\ghillie_threads_5LOD_tna_CO.paa"
	};
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_sniper
	};
	weapons[] =
	{
		//srifle_WF50_LRPS_F,
        srifle_LRR_tna_LRPS_F,
		hgun_G17_khaki_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		//srifle_WF50_LRPS_F,
        srifle_LRR_tna_LRPS_F,
		hgun_G17_khaki_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
    magazines[] =
    {
        mag_6(7Rnd_408_Mag),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(7Rnd_408_Mag),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    /*
	magazines[] =
	{
		mag_6(5Rnd_127x99_Mag),
		mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
		mag_6(5Rnd_127x99_Mag),
		mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
    */
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
        V_TacChestrig_grn_F,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_tna_F
    };
    respawnLinkedItems[] =
    {
        V_TacChestrig_grn_F,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_tna_F
    };
};
class B_A_ghillie_spotter_tna_F: B_A_ghillie_tna_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_ghillie_spotter_tna_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_T_ghillie_spotter_tna_F0;
	cost = 250000;
    weapons[] =
    {
        arifle_MX_khk_Hamr_Pointer_Snds_F,
        hgun_G17_khaki_snds_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
    respawnWeapons[] =
    {
        arifle_MX_khk_Hamr_Pointer_Snds_F,
        hgun_G17_khaki_snds_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_khaki_mag),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
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
class B_A_Fighter_Pilot_tna_F: B_A_Pilot_tna_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Fighter_Pilot_tna_F.jpg";
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_pilot
	};
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_B_Fighter_Pilot_name;
    role = Crewman;
    cost = 165000;
	camouflage = 2;
	uniformClass = U_B_PilotCoveralls;
	weapons[] =
	{
		hgun_G17_khaki_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		hgun_G17_khaki_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_2(17Rnd_9x21_Mag),
		SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_2(17Rnd_9x21_Mag),
		SMOKESHELLS_BLUFOR
	};
    linkedItems[] =
    {
        H_PilotHelmetFighter_B,
        DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetFighter_B,
        DefaultManLinkedItems
    };
};

/* BAF (Woodland) */
class B_A_Soldier_A_wdl_F: B_A_Soldier_A_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_A_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_wdl_f;
	backpack = B_Carryall_wdl_BAAmmo_F;
	weapons[] =
	{
		arifle_SA80_blk_aco_pointer_f,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_blk_aco_pointer_f,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_12(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_12(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Soldier_AAR_wdl_F: B_A_Soldier_AAR_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_AAR_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_tshirt_wdl_f;
	backpack = B_TacticalPack_rgr_BAAAR_F;
	weapons[] =
	{
		arifle_SA80_blk_aco_pointer_f,
		hgun_G17_black_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_SA80_blk_aco_pointer_f,
		hgun_G17_black_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Support_AMG_wdl_F: B_A_Support_AMG_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Support_AMG_wdl_F.jpg";
    faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_tshirt_wdl_f;
	backpack = B_HMG_01_support_grn_F;
	weapons[] =
	{
		arifle_SA80_C_blk_aco_pointer_f,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_blk_aco_pointer_f,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Support_AMort_wdl_F: B_A_Support_AMort_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Support_AMort_wdl_F.jpg";
    faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_tshirt_wdl_f;
	backpack = B_Mortar_01_support_grn_F;
	weapons[] =
	{
		arifle_SA80_C_blk_aco_pointer_f,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_blk_aco_pointer_f,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Soldier_AAA_wdl_F: B_A_Soldier_AAA_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_AAA_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_wdl_f;
	backpack = B_Carryall_wdl_BWAAA_F;
	weapons[] =
	{
		arifle_SA80_blk_aco_pointer_f,
		hgun_G17_black_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_SA80_blk_aco_pointer_f,
		hgun_G17_black_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Soldier_AAT_wdl_F: B_A_Soldier_AAT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_AAT_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_wdl_f;
	backpack = B_Carryall_wdl_BWAAT_F;
	weapons[] =
	{
		arifle_SA80_blk_aco_pointer_f,
		hgun_G17_black_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_SA80_blk_aco_pointer_f,
		hgun_G17_black_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Soldier_AR_wdl_F: B_A_Soldier_AR_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_AR_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_tshirt_wdl_f;
	weapons[] =
	{
		LMG_Mk200_black_RCO_LP_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_Mk200_black_RCO_LP_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Medic_wdl_F: B_A_Medic_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Medic_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_wdl_f;
	backpack = B_TacticalPack_rgr_BAMedic_F;
	weapons[] =
	{
		arifle_SA80_blk_holo_pointer_f,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_blk_holo_pointer_f,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetSpecB_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetSpecB_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Crew_wdl_F: B_A_Crew_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Crew_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_vest_wdl_f;
	weapons[] =
	{
		arifle_SA80_C_blk_holo_f,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_blk_holo_f,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_Olive_F,
		H_HelmetCrew_B_oli_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_Olive_F,
		H_HelmetCrew_B_oli_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Engineer_wdl_F: B_A_Engineer_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Engineer_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_vest_wdl_f;
	backpack = B_Kitbag_wdl_BWEng_F;
	weapons[] =
	{
		arifle_SA80_C_blk_holo_pointer_f,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_blk_holo_pointer_f,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Soldier_Exp_wdl_F: B_A_Soldier_Exp_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_Exp_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_wdl_f;
	backpack = B_Kitbag_rgr_Exp;
	weapons[] =
	{
		arifle_SA80_C_blk_holo_pointer_f,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_blk_holo_pointer_f,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Olive_F,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Olive_F,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_soldier_mine_wdl_F: B_A_Soldier_Exp_wdl_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_soldier_mine_wdl_F.jpg";
	displayName = $STR_A3_B_T_soldier_mine_F0;
	backpack = B_Carryall_wdl_Mine;
};
class B_A_Soldier_GL_wdl_F: B_A_Soldier_GL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_GL_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_wdl_f;
	weapons[] =
	{
		arifle_SA80_GL_blk_aco_pointer_f,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_GL_blk_aco_pointer_f,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Support_GMG_wdl_F: B_A_Support_GMG_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Support_GMG_wdl_F.jpg";
    faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_tshirt_wdl_f;
	backpack = B_GMG_01_Weapon_grn_F;
	weapons[] =
	{
		arifle_SA80_C_blk_aco_pointer_f,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_blk_aco_pointer_f,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Support_MG_wdl_F: B_A_Support_MG_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Support_MG_wdl_F.jpg";
    faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_tshirt_wdl_f;
	backpack = B_HMG_01_Weapon_grn_F;
	weapons[] =
	{
		arifle_SA80_C_blk_aco_pointer_f,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_blk_aco_pointer_f,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Support_Mort_wdl_F: B_A_Support_Mort_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Support_Mort_wdl_F.jpg";
    faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_tshirt_wdl_f;
	backpack = B_Mortar_01_Weapon_grn_F;
	weapons[] =
	{
		arifle_SA80_C_blk_aco_pointer_f,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_blk_aco_pointer_f,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Helicrew_wdl_F: B_A_Helicrew_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Helicrew_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	uniformClass = U_B_UBACS_wdl_f;
	weapons[] =
	{
		arifle_SA80_C_blk_holo_f,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_blk_holo_f,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_black_mag),
		SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_black_mag),
		SMOKESHELLS_BLUFOR
	};
    linkedItems[] =
    {
		V_CarrierRigKBT_01_Olive_F,
        H_CrewHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
		V_CarrierRigKBT_01_Olive_F,
        H_CrewHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class B_A_Helipilot_wdl_F: B_A_Helipilot_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Helipilot_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	uniformClass = U_B_UBACS_wdl_f;
	weapons[] =
	{
		SMG_04_blk_Holo_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_04_blk_Holo_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(40Rnd_460x30_Mag_F),
		SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(40Rnd_460x30_Mag_F),
		SMOKESHELLS_BLUFOR
	};
    linkedItems[] =
    {
		V_CarrierRigKBT_01_Olive_F,
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
		V_CarrierRigKBT_01_Olive_F,
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class B_A_soldier_M_wdl_F: B_A_soldier_M_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_soldier_M_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_wdl_f;
	weapons[] =
	{
		srifle_DMR_02_AMS_LP_BI_F,
		hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		srifle_DMR_02_AMS_LP_BI_F,
		hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Soldier_AA_wdl_F: B_A_Soldier_AA_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_AA_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_wdl_f;
	backpack = B_Kitbag_wdl_BWAA_F;
	weapons[] =
	{
		arifle_SA80_C_blk_holo_pointer_f,
		launch_B_Titan_olive_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_blk_holo_pointer_f,
		launch_B_Titan_olive_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Soldier_AT_wdl_F: B_A_Soldier_AT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_AT_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_wdl_f;
	backpack = B_Kitbag_wdl_BWAT_F;
	weapons[] =
	{
		arifle_SA80_C_blk_holo_pointer_f,
		launch_I_Titan_short_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_blk_holo_pointer_f,
		launch_I_Titan_short_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Officer_wdl_F: B_A_Officer_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Officer_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	uniformClass = U_B_UBACS_wdl_f;
	weapons[] =
	{
		arifle_SA80_C_blk_F,
		hgun_G17_black_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_blk_F,
		hgun_G17_black_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
		SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
		SMOKESHELLS_BLUFOR
	};
	linkedItems[] =
	{
		V_Rangemaster_belt,
		H_Beret_red,
		DefaultManLeaderLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_Rangemaster_belt,
		H_Beret_red,
		DefaultManLeaderLinkedItems
	};
};
class B_A_Soldier_PG_wdl_F: B_A_Soldier_PG_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_PG_wdl_F.jpg";
    faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_wdl_f;
	backpack = B_Parachute;
	weapons[] =
	{
		arifle_SA80_C_blk_aco_pointer_f,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_blk_aco_pointer_f,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Pilot_wdl_F: B_A_Pilot_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Pilot_wdl_F.jpg";
    faction = BLU_A_wdl_F;
	weapons[] =
	{
		SMG_04_blk_Holo_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_04_blk_Holo_F,
        DefaultManWeapons
	};
    linkedItems[] =
    {
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class B_A_Soldier_Repair_wdl_F: B_A_Soldier_Repair_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_Repair_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_wdl_f;
	backpack = B_TacticalPack_rgr_BARepair_F;
	weapons[] =
	{
		arifle_SA80_C_blk_holo_pointer_f,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_blk_holo_pointer_f,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_plain_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Soldier_wdl_F: B_A_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_wdl_f;
	weapons[] =
	{
		arifle_SA80_blk_arco_pointer_f,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_blk_arco_pointer_f,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Soldier_LAT_wdl_F: B_A_Soldier_LAT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_LAT_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_wdl_f;
	backpack = B_TacticalPack_rgr_BALAT_F;
	weapons[] =
	{
		arifle_SA80_blk_holo_pointer_f,
		launch_NLAW_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_blk_holo_pointer_f,
		launch_NLAW_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
		NLAW_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
		NLAW_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Soldier_Lite_wdl_F: B_A_Soldier_Lite_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_Lite_wdl_F.jpg";
    faction = BLU_A_wdl_F;
	uniformClass = U_B_UBACS_vest_wdl_f;
	weapons[] =
	{
		arifle_SA80_C_blk_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_blk_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_black_mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_black_mag),
        HandGrenade,
        SmokeShell
	};
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
};
class B_A_Soldier_CQ_wdl_F: B_A_Soldier_CQ_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_CQ_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_wdl_f;
	weapons[] =
	{
		sgun_M4_ACO_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		sgun_M4_ACO_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_cqb_olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_cqb_olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Soldier_SL_wdl_F: B_A_Soldier_SL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_SL_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_vest_wdl_f;
	weapons[] =
	{
		arifle_SA80_blk_arco_pointer_f,
		hgun_G17_black_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_SA80_blk_arco_pointer_f,
		hgun_G17_black_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_black_mag),
		mag_2(30Rnd_65x39_caseless_black_mag_Tracer),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_black_mag),
		mag_2(30Rnd_65x39_caseless_black_mag_Tracer),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Soldier_TL_wdl_F: B_A_Soldier_TL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_TL_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_vest_wdl_f;
	weapons[] =
	{
		arifle_SA80_GL_blk_arco_pointer_f,
		hgun_G17_black_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_SA80_GL_blk_arco_pointer_f,
		hgun_G17_black_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_black_mag),
		mag_2(30Rnd_65x39_caseless_black_mag_Tracer),
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
		mag_4(30Rnd_65x39_caseless_black_mag),
		mag_2(30Rnd_65x39_caseless_black_mag_Tracer),
		mag_2(17Rnd_9x21_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_BLUFOR
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Soldier_CBRN_wdl_F: B_A_Soldier_wdl_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_CBRN_wdl_F.jpg";
    displayName = $STR_A3_C_B_W_Soldier_CBRN_F0;
    role = Sapper;
    icon = iconManEngineer;
    picture = pictureRepair;
    cost = 93000;
	camouflage = 1.6;
	uniformClass = U_B_CBRN_Suit_01_Wdl_F;
	backpack = B_CombinationUnitRespirator_01_F;
	weapons[] =
    {
        arifle_SA80_C_blk_holo_FL_f,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SA80_C_blk_holo_FL_f,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_plain_wdl,
		G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_plain_wdl,
		G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems,
		NVGoggles_INDEP
	};
    class EventHandlers: EventHandlers
    {
        class BIN_CBRN_INIT
        {
            init = "_this call bin_fnc_CBRNHoseInit;";
        };
    };
};
class B_A_RadioOperator_wdl_F: B_A_Soldier_wdl_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_RadioOperator_wdl_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	uniformClass = U_B_UBACS_vest_wdl_f;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_RadioBag_01_wdl_F;
	weapons[] =
    {
        arifle_SA80_blk_holo_pointer_f,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SA80_blk_holo_pointer_f,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    role = RadioOperator;
};
class B_A_Survivor_wdl_F: B_A_Soldier_wdl_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Survivor_wdl_F.jpg";
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
class B_A_Soldier_UAV_wdl_F: B_A_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_UAV_wdl_F.jpg";
    faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_wdl_f;
	weapons[] =
	{
		arifle_SA80_C_blk_aco_pointer_f,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SA80_C_blk_aco_pointer_f,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLinkedItems,
		B_UavTerminal,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLinkedItems,
		B_UavTerminal,
		NVGoggles_INDEP
	};
};
class B_A_soldier_UAV_06_wdl_F: B_A_soldier_UAV_wdl_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_soldier_UAV_06_wdl_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_F0;
	backpack = B_UAV_06_backpack_F;
};
class B_A_soldier_UAV_06_medical_wdl_F: B_A_soldier_UAV_wdl_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_soldier_UAV_06_medical_wdl_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_medical_F0;
	backpack = B_UAV_06_medical_backpack_F;
};
class B_A_soldier_UGV_02_Demining_wdl_F: B_A_Soldier_UAV_wdl_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_soldier_UGV_02_Demining_wdl_F.jpg";
	displayName = $STR_A3_C_B_soldier_UGV_02_Demining_F0;
	backpack = B_UGV_02_Demining_backpack_F;
};
class B_A_soldier_UAV_02_wdl_LxWS_F: B_A_Soldier_UAV_wdl_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_soldier_UAV_02_wdl_LxWS_F.jpg";
	displayName = "UAV Operator (AP-5)";
	backpack = Aegis_B_A_UAV_02_backpack_lxWS;
};
class B_A_Recon_AR_wdl_F: B_A_Recon_AR_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_AR_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_W_NATO_SF
	};
	uniformClass = U_B_UBACS_tshirt_wdl_f;
	weapons[] =
	{
		arifle_MX_SW_Black_Hamr_Pointer_Bipod_Snds_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MX_SW_Black_Hamr_Pointer_Bipod_Snds_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(100Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(100Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_wdl_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_wdl_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Recon_Exp_wdl_F: B_A_Recon_Exp_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_Exp_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	uniformClass = U_B_UBACS_tshirt_wdl_f;
	backpack = B_AssaultPack_rgr_ReconExp;
	weapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_Snds_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_Snds_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		H_Booniehat_wdl_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		H_Booniehat_wdl_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Recon_GL_wdl_F: B_A_Recon_GL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_GL_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_W_NATO_SF
	};
	uniformClass = U_B_UBACS_vest_wdl_f;
	weapons[] =
	{
        arifle_MX_GL_Black_Hamr_Pointer_Snds_F,
        hgun_G17_black_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_GL_Black_Hamr_Pointer_Snds_F,
        hgun_G17_black_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(Chemlight_green),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(Chemlight_green),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_wdl_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_wdl_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Recon_JTAC_wdl_F: B_A_Recon_JTAC_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_JTAC_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_W_NATO_SF
	};
	uniformClass = U_B_UBACS_wdl_f;
	backpack = B_RadioBag_01_wdl_F;
	weapons[] =
	{
		arifle_MX_Black_Holo_Pointer_Snds_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons,
		Laserdesignator_01_khk_F
	};
	respawnWeapons[] =
	{
		arifle_MX_Black_Holo_Pointer_Snds_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons,
		Laserdesignator_01_khk_F
	};
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_BLUFOR,
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
        H_Watchcap_camo_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
        H_Watchcap_camo_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Recon_MG_wdl_F: B_A_Recon_MG_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_MG_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_W_NATO_SF
	};
	uniformClass = U_B_UBACS_wdl_f;
	weapons[] =
	{
		LMG_Mk200_black_RCO_LP_S_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_Mk200_black_RCO_LP_S_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_wdl_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_wdl_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Recon_M_wdl_F: B_A_Recon_M_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_M_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	uniformClass = U_B_UBACS_wdl_f;
	weapons[] =
	{
		arifle_MXM_Black_MOS_Pointer_Bipod_Snds_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MXM_Black_MOS_Pointer_Bipod_Snds_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		H_Booniehat_wdl_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		H_Booniehat_wdl_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Recon_Medic_wdl_F: B_A_Recon_Medic_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_Medic_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_W_NATO_SF
	};
	uniformClass = U_B_UBACS_tshirt_wdl_f;
	backpack = B_TacticalPack_rgr_BAReconMedic_F;
	weapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_Snds_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_Snds_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_wdl_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_wdl_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Recon_wdl_F: B_A_Recon_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_W_NATO_SF
	};
	uniformClass = U_B_UBACS_vest_wdl_f;
	weapons[] =
	{
		arifle_MX_Black_Hamr_Pointer_Snds_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_MX_Black_Hamr_Pointer_Snds_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_wdl_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_wdl_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Recon_LAT_wdl_F: B_A_Recon_LAT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_LAT_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_W_NATO_SF
	};
	uniformClass = U_B_UBACS_tshirt_wdl_f;
	backpack = B_TacticalPack_rgr_BAReconLAT_F;
	weapons[] =
	{
		arifle_MX_Black_Holo_Pointer_Snds_F,
		launch_NLAW_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MX_Black_Holo_Pointer_Snds_F,
		launch_NLAW_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_wdl_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_wdl_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Recon_CQ_wdl_F: B_A_Recon_CQ_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_CQ_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_W_NATO_SF
	};
	uniformClass = U_B_UBACS_vest_wdl_f;
	weapons[] =
	{
		sgun_M4_ACO_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		sgun_M4_ACO_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_wdl_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_wdl_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Recon_Sharpshooter_wdl_F: B_A_Recon_Sharpshooter_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_Sharpshooter_wdl_F.jpg";
    faction = BLU_A_wdl_F;
	uniformClass = U_B_UBACS_wdl_f;
	weapons[] =
	{
		srifle_DMR_02_AMS_LP_BI_S_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		srifle_DMR_02_AMS_LP_BI_S_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		H_Cap_khaki_specops_UK_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		H_Cap_khaki_specops_UK_hs,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Recon_TL_wdl_F: B_A_Recon_TL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Recon_TL_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_W_NATO_SF
	};
	uniformClass = U_B_UBACS_vest_wdl_f;
	weapons[] =
	{
		arifle_MX_Black_Hamr_Pointer_Snds_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MX_Black_Hamr_Pointer_Snds_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_black_mag),
		mag_2(30Rnd_65x39_caseless_black_mag_Tracer),
		mag_2(17Rnd_9x21_Mag),
		mag_2(MiniGrenade),
		SmokeShell,
		SMOKESHELLS_BLUFOR,
		mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_black_mag),
		mag_2(30Rnd_65x39_caseless_black_mag_Tracer),
		mag_2(17Rnd_9x21_Mag),
		mag_2(MiniGrenade),
		SmokeShell,
		SMOKESHELLS_BLUFOR,
		mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_wdl_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		Aegis_V_CarrierRigKBT_01_recon_olive_F,
		Aegis_H_Helmet_FASTMT_Cover_UK_wdl_F,
		DefaultManLeaderLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_Soldier_universal_wdl_F: B_A_Soldier_wdl_F
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
class B_A_Soldier_unarmed_wdl_F: B_A_Soldier_wdl_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Soldier_unarmed_wdl_F.jpg";
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLinkedItems
	};
	role = Unarmed;
	threat[] =
    {
        0.1,    // Soft
        0.1,    // Armor
        0.1     // Air
    };
};
class B_A_HeavyGunner_wdl_F: B_A_HeavyGunner_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_HeavyGunner_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_UBACS_tshirt_wdl_f;
	weapons[] =
	{
		MMG_02_black_RCO_LP_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		MMG_02_black_RCO_LP_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_camo_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_A_ghillie_wdl_F: B_ghillie_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_ghillie_wdl_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_B_W_ghillie_wdl_F0;
	faction = BLU_A_wdl_F;
	uniformClass = U_B_W_FullGhillie_wdl_F;
	hiddenSelectionsTextures[] =
	{
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_coverall_NATO_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_threads_wdl_CA.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_threads_5LOD_wdl_CO.paa"
	};
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_sniper
	};
	weapons[] =
	{
		//srifle_WF50_LRPS_F,
        srifle_LRR_LRPS_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		//srifle_WF50_LRPS_F,
        srifle_LRR_LRPS_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
    magazines[] =
    {
        mag_6(7Rnd_408_Mag),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(7Rnd_408_Mag),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    /*
	magazines[] =
	{
		mag_6(5Rnd_127x99_Mag),
		mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
		mag_6(5Rnd_127x99_Mag),
		mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
    */
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
        V_TacChestrig_grn_F,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        V_TacChestrig_grn_F,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class B_A_ghillie_spotter_wdl_F: B_A_ghillie_wdl_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_ghillie_spotter_wdl_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_B_W_ghillie_spotter_wdl_F0;
	cost = 250000;
    weapons[] =
    {
        arifle_MX_Black_Hamr_Pointer_Snds_F,
        hgun_G17_black_snds_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
    respawnWeapons[] =
    {
        arifle_MX_Black_Hamr_Pointer_Snds_F,
        hgun_G17_black_snds_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
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
class B_A_Fighter_Pilot_wdl_F: B_A_Pilot_wdl_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Fighter_Pilot_wdl_F.jpg";
	identityTypes[] =
	{
		LanguageENGB_F,
		Head_NATO,
		G_NATO_pilot
	};
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_B_Fighter_Pilot_name;
    role = Crewman;
    cost = 165000;
	camouflage = 2;
	uniformClass = U_B_PilotCoveralls;
	weapons[] =
	{
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_2(17Rnd_9x21_Mag),
		SMOKESHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_2(17Rnd_9x21_Mag),
		SMOKESHELLS_BLUFOR
	};
    linkedItems[] =
    {
        H_PilotHelmetFighter_B,
        DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetFighter_B,
        DefaultManLinkedItems
    };
};