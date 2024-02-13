/* AAF */
class I_Soldier_base_F: SoldierGB
{
	modelSides[] = {TFriendly};
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
    linkedItems[] =
    {
        H_HelmetIA,
        V_PlateCarrierIA1_dgtl,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        H_HelmetIA,
        V_PlateCarrierIA1_dgtl,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    class EventHandlers;
};
class I_Soldier_02_F;
class I_Soldier_03_F: I_Soldier_base_F
{
	modelSides[] = {TFriendly};
};
class I_Soldier_04_F: I_Soldier_base_F
{
	modelSides[] = {TFriendly};
};
class I_soldier_F: I_Soldier_base_F
{
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_soldier_F.jpg";
};
class I_Soldier_lite_F: I_Soldier_02_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Soldier_lite_F.jpg";
    weapons[] =
    {
        arifle_Mk20C_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Mk20C_F,
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
        V_BandollierB_oli,
        H_MilCap_dgtl,
        DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_BandollierB_oli,
        H_MilCap_dgtl,
        DefaultManLinkedItems
    };
};
class I_Soldier_A_F: I_Soldier_02_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Soldier_A_F.jpg";
    weapons[] =
    {
        arifle_Mk20_ACO_pointer_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Mk20_ACO_pointer_F,
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
    linkedItems[] =
    {
        H_HelmetIA,
        V_PlateCarrierIA1_dgtl,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        H_HelmetIA,
        V_PlateCarrierIA1_dgtl,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class I_Soldier_GL_F: I_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Soldier_GL_F.jpg";
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    linkedItems[] =
    {
        H_HelmetIA,
        V_PlateCarrierIAGL_dgtl,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        H_HelmetIA,
        V_PlateCarrierIAGL_dgtl,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class I_Soldier_AR_F: I_Soldier_02_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Soldier_AR_F.jpg";
	magazines[] =
	{
        mag_3(200Rnd_65x39_cased_Box),
        mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_3(200Rnd_65x39_cased_Box),
        mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
        mag_2(SmokeShell)
	};
    linkedItems[] =
    {
        H_HelmetIA,
        V_PlateCarrierIA2_dgtl,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        H_HelmetIA,
        V_PlateCarrierIA2_dgtl,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class I_Soldier_SL_F: I_Soldier_02_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Soldier_SL_F.jpg";
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
};
class I_Soldier_TL_F: I_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Soldier_TL_F.jpg";
    weapons[] =
    {
        arifle_Mk20_GL_MRCO_pointer_F,
        hgun_ACPC2_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_Mk20_GL_MRCO_pointer_F,
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
    linkedItems[] =
    {
        H_HelmetIA,
        V_PlateCarrierIAGL_dgtl,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        H_HelmetIA,
        V_PlateCarrierIAGL_dgtl,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class I_Soldier_M_F: I_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Soldier_M_F.jpg";
    magazines[] =
    {
        mag_8(20Rnd_762x51_Mag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(20Rnd_762x51_Mag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        H_HelmetIA,
        V_PlateCarrierIA1_dgtl,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        H_HelmetIA,
        V_PlateCarrierIA1_dgtl,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class I_Soldier_LAT_F: I_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Soldier_LAT_F.jpg";
    weapons[] =
    {
        arifle_Mk20_ACO_pointer_F,
        launch_NLAW_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Mk20_ACO_pointer_F,
        launch_NLAW_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_6(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        NLAW_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        NLAW_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
    linkedItems[] =
    {
        H_HelmetIA,
        V_PlateCarrierIA2_dgtl,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        H_HelmetIA,
        V_PlateCarrierIA2_dgtl,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class I_Soldier_AT_F: I_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Soldier_AT_F.jpg";
    weapons[] =
    {
        arifle_Mk20C_ACO_pointer_F,
        launch_I_Titan_short_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Mk20C_ACO_pointer_F,
        launch_I_Titan_short_F,
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
    linkedItems[] =
    {
        H_HelmetIA,
        V_PlateCarrierIA2_dgtl,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        H_HelmetIA,
        V_PlateCarrierIA2_dgtl,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class I_Soldier_AA_F: I_Soldier_02_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Soldier_AA_F.jpg";
    weapons[] =
    {
        arifle_Mk20C_ACO_pointer_F,
        launch_I_Titan_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Mk20C_ACO_pointer_F,
        launch_I_Titan_F,
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
    linkedItems[] =
    {
        H_HelmetIA,
        V_PlateCarrierIA2_dgtl,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        H_HelmetIA,
        V_PlateCarrierIA2_dgtl,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class I_medic_F: I_Soldier_02_F
{
    backpack = I_AssaultPack_dgtl_Medic;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_medic_F.jpg";
	magazines[] =
	{
        mag_6(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellPurple
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellPurple
	};
    linkedItems[] =
    {
        H_HelmetIA,
        V_PlateCarrierIA2_dgtl,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        H_HelmetIA,
        V_PlateCarrierIA2_dgtl,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class I_Soldier_repair_F: I_Soldier_02_F
{
    backpack = I_AssaultPack_dgtl_Repair;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Soldier_repair_F.jpg";
    weapons[] =
    {
        arifle_Mk20C_pointer_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Mk20C_pointer_F,
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
    linkedItems[] =
    {
        H_HelmetIA,
        V_PlateCarrierIA2_dgtl,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        H_HelmetIA,
        V_PlateCarrierIA2_dgtl,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class I_Soldier_exp_F: I_Soldier_02_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Soldier_exp_F.jpg";
    weapons[] =
    {
        arifle_Mk20C_pointer_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Mk20C_pointer_F,
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
    linkedItems[] =
    {
        H_HelmetIA,
        V_PlateCarrierIAGL_dgtl,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        H_HelmetIA,
        V_PlateCarrierIAGL_dgtl,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class I_engineer_F: I_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_engineer_F.jpg";
    weapons[] =
    {
        arifle_Mk20C_pointer_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Mk20C_pointer_F,
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
    linkedItems[] =
    {
        H_HelmetIA,
        V_PlateCarrierIA1_dgtl,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        H_HelmetIA,
        V_PlateCarrierIA1_dgtl,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class I_crew_F: I_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_crew_F.jpg";
    uniformClass = U_Tank_green_F;
    weapons[] =
    {
        arifle_Mk20C_ACO_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Mk20C_ACO_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_4(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
    linkedItems[] =
    {
        H_HelmetCrew_I,
        V_TacVest_oli,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        H_HelmetCrew_I,
        V_TacVest_oli,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    engineer = true;
};
class I_helipilot_F: I_Soldier_03_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_helipilot_F.jpg";
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
        mag_4(30Rnd_9x21_Yellow_Mag),
        SMOKESHELLS_INDEP
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_9x21_Yellow_Mag),
        SMOKESHELLS_INDEP
	};
    linkedItems[] =
    {
        H_PilotHelmetHeli_I,
        V_TacVest_oli,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetHeli_I,
        V_TacVest_oli,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class I_pilot_F: I_Soldier_04_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_pilot_F.jpg";
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
        mag_4(30Rnd_9x21_Yellow_Mag),
        SMOKESHELLS_INDEP
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_9x21_Yellow_Mag),
        SMOKESHELLS_INDEP
	};
    linkedItems[] =
    {
        H_PilotHelmetHeli_I,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetHeli_I,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class I_helicrew_F: I_helipilot_F
{
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_helicrew_F.jpg";
    weapons[] =
    {
        arifle_Mk20C_ACO_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Mk20C_ACO_F,
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
    linkedItems[] =
    {
        H_CrewHelmetHeli_I,
        V_TacVest_oli,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        H_CrewHelmetHeli_I,
        V_TacVest_oli,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class I_officer_F: I_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_officer_F.jpg";
    weapons[] =
    {
        arifle_Mk20C_F,
        hgun_ACPC2_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_Mk20C_F,
        hgun_ACPC2_F,
        DefaultManWeapons,
        Binocular
    };
	modelSides[] = {TFriendly};
	magazines[] =
	{
        mag_4(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        SMOKESHELLS_INDEP
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_556x45_Stanag),
        mag_2(9Rnd_45ACP_Mag),
        SMOKESHELLS_INDEP
	};
    linkedItems[] =
    {
        V_Rangemaster_belt_oli,
        H_MilCap_dgtl,
        ItemGPS,
        DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_Rangemaster_belt_oli,
        H_MilCap_dgtl,
        ItemGPS,
        DefaultManLinkedItems
    };
};
class I_Story_Colonel_F: I_officer_F
{
    magazines[] = {};
    respawnMagazines[] = {};
};
class I_soldier_UAV_F: I_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_soldier_UAV_F.jpg";
    weapons[] =
    {
        arifle_Mk20C_ACO_pointer_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Mk20C_ACO_pointer_F,
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
    linkedItems[] =
    {
        H_HelmetIA,
        V_PlateCarrierIA2_dgtl,
        DefaultManLinkedItems,
        I_UavTerminal,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        H_HelmetIA,
        V_PlateCarrierIA2_dgtl,
        DefaultManLinkedItems,
        I_UavTerminal,
        NVGoggles_INDEP
    };
};
class I_Soldier_diver_base_F: I_Soldier_base_F
{
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\diver_suit_RUS_CO.paa",
        "\A3\Characters_F\Common\Data\diver_equip_RUS_CO.paa"
    };
	hiddenSelectionsMaterials[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\diver_suit.rvmat",
        "\A3\Characters_F\Common\Data\diver_equip.rvmat"
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
};
class I_diver_F: I_Soldier_diver_base_F
{
    backpack = "";
	modelSides[] = {TFriendly};
};
class I_diver_TL_F: I_Soldier_diver_base_F
{
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
};
class I_Soldier_sniper_base_F: I_Soldier_base_F
{
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
class I_Spotter_F: I_Soldier_sniper_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Spotter_F.jpg";
    weapons[] =
    {
        arifle_Mk20_MRCO_pointer_snds_F,
        hgun_ACPC2_snds_F,
        DefaultManWeapons,
        Laserdesignator_03
    };
    respawnWeapons[] =
    {
        arifle_Mk20_MRCO_pointer_snds_F,
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
class I_Sniper_F: I_Soldier_sniper_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Sniper_F.jpg";
    magazines[] =
    {
        mag_6(5Rnd_127x108_Mag),
        mag_2(9Rnd_45ACP_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(5Rnd_127x108_Mag),
        mag_2(9Rnd_45ACP_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
};
class I_Soldier_support_base_F: I_Soldier_base_F
{
	model = "\A3\Characters_F_Gamma\Guerrilla\IG_Guerrilla1_1.p3d";
	modelSides[] = {TFriendly};
    hiddenSelections[] =
    {
        camo1,
        camo2,
        camo3
    };
	hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F_Orange\Uniforms\Data\c_cloth1_olive_co.paa",
        "\A3\Characters_F_Beta\Indep\Data\IA_Soldier_01_Clothing_CO.paa"
    };
	weapons[] =
    {
        arifle_Mk20_ACO_pointer_F,
        hgun_ACPC2_F,
        DefaultManWeapons,
        Rangefinder
    };
	respawnWeapons[] =
    {
        arifle_Mk20_ACO_pointer_F,
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
	linkedItems[] =
	{
		H_HelmetIA,
		V_ChestrigF_oli,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetIA,
		V_ChestrigF_oli,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class I_Soldier_AAR_F: I_Soldier_support_base_F
{
	uniformClass = U_I_CombatUniform_shortsleeve;
	linkedItems[] =
	{
		H_HelmetIA,
		V_PlateCarrierIA1_dgtl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetIA,
		V_PlateCarrierIA1_dgtl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class I_Soldier_AAT_F: I_Soldier_support_base_F
{
	uniformClass = U_I_CombatUniform_shortsleeve;
	linkedItems[] =
	{
		H_HelmetIA,
		V_PlateCarrierIA1_dgtl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetIA,
		V_PlateCarrierIA1_dgtl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class I_Soldier_AAA_F: I_Soldier_AAT_F
{
	uniformClass = U_I_CombatUniform_shortsleeve;
	linkedItems[] =
	{
		H_HelmetIA,
		V_PlateCarrierIA1_dgtl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetIA,
		V_PlateCarrierIA1_dgtl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class I_support_MG_F: I_Soldier_support_base_F
{
	weapons[] =
    {
        arifle_Mk20C_pointer_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_Mk20C_pointer_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
};
class I_support_GMG_F: I_Soldier_support_base_F
{
	weapons[] =
    {
        arifle_Mk20C_pointer_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_Mk20C_pointer_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
};
class I_support_Mort_F: I_Soldier_support_base_F
{
	weapons[] =
    {
        arifle_Mk20C_pointer_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_Mk20C_pointer_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
};
class I_support_AMG_F: I_Soldier_support_base_F
{
	weapons[] =
    {
        arifle_Mk20C_pointer_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_Mk20C_pointer_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
};
class I_support_AMort_F: I_Soldier_support_base_F
{
	weapons[] =
    {
        arifle_Mk20C_pointer_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
	respawnWeapons[] =
    {
        arifle_Mk20C_pointer_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
};
class I_Soldier_VR_F: I_Soldier_base_F
{
	modelSides[] = {TFriendly};
};
class I_Protagonist_VR_F: I_Soldier_base_F
{
	modelSides[] = {TFriendly};
};
class I_Captain_Hladas_F: I_officer_F
{
	modelSides[] = {TFriendly};
};
class I_ghillie_base_F: I_Soldier_sniper_base_F
{
    magazines[] =
    {
        mag_6(5Rnd_127x108_Mag),
        mag_2(9Rnd_45ACP_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(5Rnd_127x108_Mag),
        mag_2(9Rnd_45ACP_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
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
};
class I_ghillie_lsh_F;
class I_ghillie_sard_F;
class I_ghillie_ard_F;
class I_Fighter_Pilot_F: I_pilot_F
{
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
    linkedItems[] =
    {
        H_PilotHelmetFighter_I,
        DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetFighter_I,
        DefaultManLinkedItems
    };
};
class I_Story_Crew_F: I_crew_F
{
	modelSides[] = {TFriendly};
};
class I_Soldier_CQ_F: I_Soldier_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Soldier_CQ_F.jpg";
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
        sgun_M4_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        sgun_M4_F,
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
    linkedItems[] =
    {
        H_HelmetIA,
        V_PlateCarrierIA2_dgtl,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        H_HelmetIA,
        V_PlateCarrierIA2_dgtl,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class I_ghillie_spotter_lsh_F: I_ghillie_lsh_F
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
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_ghillie_spotter_lsh_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_I_ghillie_spotter_lsh_F0;
    cost = 250000;
    weapons[] =
    {
        arifle_Mk20_MRCO_pointer_snds_F,
        hgun_ACPC2_snds_F,
        DefaultManWeapons,
        Laserdesignator_03
    };
    respawnWeapons[] =
    {
        arifle_Mk20_MRCO_pointer_snds_F,
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
class I_ghillie_spotter_sard_F: I_ghillie_sard_F
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
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_ghillie_spotter_sard_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_I_ghillie_spotter_sard_F0;
    cost = 250000;
    weapons[] =
    {
        arifle_Mk20_MRCO_pointer_snds_F,
        hgun_ACPC2_snds_F,
        DefaultManWeapons,
        Laserdesignator_03
    };
    respawnWeapons[] =
    {
        arifle_Mk20_MRCO_pointer_snds_F,
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
class I_ghillie_spotter_ard_F: I_ghillie_ard_F
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
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_ghillie_spotter_ard_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_I_ghillie_spotter_ard_F0;
    cost = 250000;
    weapons[] =
    {
        arifle_Mk20_MRCO_pointer_snds_F,
        hgun_ACPC2_snds_F,
        DefaultManWeapons,
        Laserdesignator_03
    };
    respawnWeapons[] =
    {
        arifle_Mk20_MRCO_pointer_snds_F,
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
class I_Soldier_CBRN_F: I_soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_Soldier_CBRN_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_Soldier_CBRN_F0;
	uniformClass = U_I_CBRN_Suit_01_AAF_F;
	linkedItems[] =
	{
		H_HelmetIA,
		G_AirPurifyingRespirator_01_F,
		V_PlateCarrierIA1_dgtl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetIA,
		G_AirPurifyingRespirator_01_F,
		V_PlateCarrierIA1_dgtl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_CombinationUnitRespirator_01_F;
	weapons[] =
    {
        arifle_Mk20C_ACO_flash_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Mk20C_ACO_flash_F,
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
class I_RadioOperator_F: I_soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_RadioOperator_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	uniformClass = U_I_CombatUniform_shortsleeve;
	linkedItems[] =
	{
		H_HelmetIA,
		V_PlateCarrierIA1_dgtl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetIA,
		V_PlateCarrierIA1_dgtl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_RadioBag_01_digi_F;
	weapons[] =
    {
        arifle_Mk20_ACO_pointer_F,
        hgun_ACPC2_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Mk20_ACO_pointer_F,
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
    role = RadioOperator;
};