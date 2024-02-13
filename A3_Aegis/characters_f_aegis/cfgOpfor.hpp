/* IAF */
class O_Soldier_base_F: SoldierEB
{
	modelSides[] = {TFriendly};
    hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F\OPFOR\Data\clothing_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\tech_CO.paa"
    };
    weapons[] =
    {
        arifle_Katiba_ARCO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ARCO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
    class EventHandlers;
};
class O_Soldier_02_F: O_Soldier_base_F
{
	modelSides[] = {TFriendly};
};
class O_Soldier_F: O_Soldier_base_F
{
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Soldier_F.jpg";
};
class O_officer_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_officer_F.jpg";
	modelSides[] = {TFriendly};
    weapons[] =
    {
        arifle_Katiba_C_F,
        hgun_Pistol_heavy_02_Yorris_F,
        DefaultManWeapons,
		Binocular
    };
    respawnWeapons[] =
    {
        arifle_Katiba_C_F,
        hgun_Pistol_heavy_02_Yorris_F,
        DefaultManWeapons,
		Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_green),
        mag_2(6Rnd_45ACP_Cylinder),
        SMOKESHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_green),
        mag_2(6Rnd_45ACP_Cylinder),
        SMOKESHELLS_OPFOR
    };
    linkedItems[] =
    {
        V_Rangemaster_belt_khk,
        H_Beret_CSAT_01_F,
        DefaultManLeaderLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_Rangemaster_belt_khk,
        H_Beret_CSAT_01_F,
        DefaultManLeaderLinkedItems
    };
};
class O_Soldier_lite_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Soldier_lite_F.jpg";
    weapons[] =
    {
        arifle_Katiba_C_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_C_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_4(30Rnd_65x39_caseless_green),
        HandGrenade_East,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_65x39_caseless_green),
        HandGrenade_East,
        SmokeShell
	};
    linkedItems[] =
    {
        V_BandollierB_khk,
        H_MilCap_ocamo,
        DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_BandollierB_khk,
        H_MilCap_ocamo,
        DefaultManLinkedItems
    };
};
class O_Soldier_GL_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Soldier_GL_F.jpg";
    weapons[] =
    {
        arifle_Katiba_GL_ACO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_GL_ACO_pointer_F,
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
        V_HarnessOGL_brn,
        H_HelmetO_ocamo,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_HarnessOGL_brn,
        H_HelmetO_ocamo,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_Soldier_AR_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Soldier_AR_F.jpg";
    weapons[] =
    {
        LMG_Zafir_ARCO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        LMG_Zafir_ARCO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_4(150Rnd_762x54_Box),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_4(150Rnd_762x54_Box),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_Soldier_SL_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Soldier_SL_F.jpg";
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
		V_TacVest_khk,
		H_HelmetLeaderO_ocamo,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_khk,
		H_HelmetLeaderO_ocamo,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_Soldier_TL_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Soldier_TL_F.jpg";
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
		V_HarnessOGL_brn,
		H_HelmetLeaderO_ocamo,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessOGL_brn,
		H_HelmetLeaderO_ocamo,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_soldier_M_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldier_M_F.jpg";
    weapons[] =
    {
        srifle_DMR_01_DMS_LP_BI_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        srifle_DMR_01_DMS_LP_BI_F,
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
    linkedItems[] =
    {
        V_HarnessO_brn,
        H_HelmetO_ocamo,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_HarnessO_brn,
        H_HelmetO_ocamo,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_Soldier_LAT_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Soldier_LAT_F.jpg";
    weapons[] =
    {
        arifle_Katiba_ACO_pointer_F,
        launch_RPG32_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ACO_pointer_F,
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
	linkedItems[] =
	{
        V_TacVest_khk,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
        V_TacVest_khk,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_medic_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_medic_F.jpg";
    weapons[] =
    {
        arifle_Katiba_ACO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ACO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
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
        V_TacVest_khk,
        H_HelmetO_ocamo,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_khk,
        H_HelmetO_ocamo,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_soldier_repair_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldier_repair_F.jpg";
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_soldier_exp_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldier_exp_F.jpg";
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
		V_TacVest_khk,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_khk,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_helipilot_F: O_Soldier_02_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_helipilot_F.jpg";
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
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
	};
    linkedItems[] =
    {
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_Soldier_A_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Soldier_A_F.jpg";
    weapons[] =
    {
        arifle_Katiba_ACO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ACO_pointer_F,
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
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_Soldier_AT_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Soldier_AT_F.jpg";
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
    linkedItems[] =
    {
        V_TacVest_khk,
        H_HelmetO_ocamo,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_khk,
        H_HelmetO_ocamo,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_Soldier_AA_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Soldier_AA_F.jpg";
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
    linkedItems[] =
    {
        V_TacVest_khk,
        H_HelmetO_ocamo,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_khk,
        H_HelmetO_ocamo,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_engineer_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_engineer_F.jpg";
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_OPFOR
    };
};
class O_crew_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_crew_F.jpg";
	uniformClass = U_O_CombatUniform_ocamo;
    linkedItems[] =
    {
        V_BandollierB_khk,
        H_HelmetCrew_O,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_BandollierB_khk,
        H_HelmetCrew_O,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    engineer = true;
};
class O_Pilot_F: O_helipilot_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Pilot_F.jpg";
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
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_helicrew_F: O_helipilot_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_helicrew_F.jpg";
	weapons[] =
	{
		arifle_Katiba_C_ACO_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_Katiba_C_ACO_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_4(30Rnd_65x39_caseless_green),
        SMOKESHELLS_OPFOR
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_65x39_caseless_green),
        SMOKESHELLS_OPFOR
	};
    linkedItems[] =
    {
        H_CrewHelmetHeli_O,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        H_CrewHelmetHeli_O,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_soldier_PG_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldier_PG_F.jpg";
	weapons[] =
	{
		arifle_Katiba_C_ACO_pointer_F,
        hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_Katiba_C_ACO_pointer_F,
        hgun_Rook40_F,
		DefaultManWeapons
	};
	linkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_Story_Colonel_F: O_officer_F
{
	scope = protected;
    scopeCurator = private;
};
class O_Story_CEO_F: O_Soldier_base_F
{
	scope = protected;
    scopeCurator = private;
};
class O_soldier_UAV_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldier_UAV_F.jpg";
    weapons[] =
    {
        arifle_Katiba_C_ACO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_C_ACO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_10(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_10(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
	};
    linkedItems[] =
    {
        H_HelmetO_ocamo,
        V_TacVest_khk,
        DefaultManLinkedItems,
        O_UavTerminal,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        H_HelmetO_ocamo,
        V_TacVest_khk,
        DefaultManLinkedItems,
        O_UavTerminal,
        O_NVGoggles_hex_F
    };
};
class O_Soldier_diver_base_F: O_Soldier_base_F
{
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\diver_suit_iran_CO.paa",
        "\A3\Characters_F\Common\Data\diver_equip_iran_CO.paa"
    };
	hiddenSelectionsMaterials[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\diver_suit.rvmat",
        "\A3\Characters_F\Common\Data\diver_equip.rvmat"
    };
    magazines[] =
    {
        mag_3(20Rnd_556x45_Stanag_green),
        mag_3(20Rnd_556x45_UW_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_3(20Rnd_556x45_Stanag_green),
        mag_3(20Rnd_556x45_UW_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
};
class O_diver_F: O_Soldier_diver_base_F
{
    backpack = "";
	modelSides[] = {TFriendly};
};
class O_diver_TL_F: O_Soldier_diver_base_F
{
    magazines[] =
    {
        mag_3(20Rnd_556x45_Stanag_green),
        mag_3(20Rnd_556x45_UW_mag),
        mag_2(17Rnd_9x21_Mag),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_3(20Rnd_556x45_Stanag_green),
        mag_3(20Rnd_556x45_UW_mag),
        mag_2(17Rnd_9x21_Mag),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
};
class O_diver_exp_F;
class O_Soldier_sniper_base_F: O_Soldier_base_F
{
    hiddenSelections[] =
    {
        camo1,
        camo2,
        camo3,
        insignia
    };
    hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F\OPFOR\Data\clothing_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\tech_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_desert_CO.paa"
    };
    linkedItems[] =
    {
        V_Chestrig_khk,
        DefaultManLeaderLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_Chestrig_khk,
        DefaultManLeaderLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_spotter_F: O_Soldier_sniper_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_spotter_F.jpg";
    weapons[] =
    {
        arifle_Katiba_ARCO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ARCO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
};
class O_sniper_F: O_Soldier_sniper_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_sniper_F.jpg";
    magazines[] =
    {
        mag_4(5Rnd_127x108_Mag),
        mag_2(5Rnd_127x108_APDS_Mag),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_4(5Rnd_127x108_Mag),
        mag_2(5Rnd_127x108_APDS_Mag),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
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
};
class O_Soldier_recon_base: O_Soldier_base_F
{
	identityTypes[] =
	{
		LanguagePER_F,
		Head_TK,
		G_IRAN_SF
	};
    icon = iconManRecon;
	uniformClass = U_O_CombatUniform_ocamo;
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
		V_HarnessOSpec_brn,
		H_HelmetSpecO_ocamo,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessOSpec_brn,
		H_HelmetSpecO_ocamo,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_recon_F: O_Soldier_recon_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_recon_F.jpg";
    weapons[] =
    {
        arifle_Katiba_C_ARCO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_Katiba_C_ARCO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
};
class O_recon_M_F: O_Soldier_recon_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_recon_M_F.jpg";
    weapons[] =
    {
        srifle_DMR_01_DMS_LP_BI_S_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        srifle_DMR_01_DMS_LP_BI_S_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_10(10Rnd_762x54_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_10(10Rnd_762x54_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
	linkedItems[] =
	{
		V_TacVest_khk,
		H_HelmetSpecO_blk,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_khk,
		H_HelmetSpecO_blk,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_blk_F
	};
};
class O_recon_LAT_F: O_Soldier_recon_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_recon_LAT_F.jpg";
	uniformClass = U_O_CombatUniform_ocamo;
    weapons[] =
    {
        arifle_Katiba_C_ACO_pointer_snds_F,
        launch_RPG32_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_C_ACO_pointer_snds_F,
        launch_RPG32_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        RPG32_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        RPG32_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
	linkedItems[] =
	{
		V_TacVest_khk,
		H_HelmetSpecO_blk,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_khk,
		H_HelmetSpecO_blk,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_blk_F
	};
};
class O_recon_medic_F: O_Soldier_recon_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_recon_medic_F.jpg";
    weapons[] =
    {
        arifle_Katiba_C_ACO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_C_ACO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_red)
    };
	linkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetSpecO_ocamo,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetSpecO_ocamo,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_recon_exp_F: O_Soldier_recon_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_recon_exp_F.jpg";
    weapons[] =
    {
        arifle_Katiba_C_ACO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_C_ACO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
	linkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetSpecO_blk,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetSpecO_blk,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_blk_F
	};
};
class O_recon_JTAC_F: O_Soldier_recon_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_recon_JTAC_F.jpg";
	backpack = B_RadioBag_01_hex_F;
    weapons[] =
    {
        arifle_Katiba_C_ACO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    respawnWeapons[] =
    {
        arifle_Katiba_C_ACO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
	linkedItems[] =
	{
		V_HarnessOGL_brn,
		H_HelmetSpecO_ocamo,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessOGL_brn,
		H_HelmetSpecO_ocamo,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_recon_TL_F: O_Soldier_recon_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_recon_TL_F.jpg";
    weapons[] =
    {
        arifle_Katiba_ARCO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ARCO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_green),
        mag_2(30Rnd_65x39_caseless_green_mag_Tracer),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		SmokeShell,
		SMOKESHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_green),
        mag_2(30Rnd_65x39_caseless_green_mag_Tracer),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		SmokeShell,
		SMOKESHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
	role = Rifleman;
	linkedItems[] =
	{
		V_HarnessOSpec_brn,
		H_HelmetLeaderO_ocamo,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessOSpec_brn,
		H_HelmetLeaderO_ocamo,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_Soldier_support_base_F: O_Soldier_base_F
{
	weapons[] =
	{
		arifle_Katiba_ACO_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_Katiba_ACO_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons,
		Rangefinder
	};
    magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnmagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_ChestrigF_khk,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_khk,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_Soldier_AAR_F: O_Soldier_support_base_F
{
	linkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_Soldier_AAT_F: O_Soldier_support_base_F
{
	linkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_Soldier_AAA_F: O_Soldier_AAT_F
{
	linkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_support_MG_F;
class O_support_GMG_F;
class O_support_Mort_F;
class O_support_AMG_F;
class O_support_AMort_F;
class O_Soldier_Urban_base: O_Soldier_base_F
{
    weapons[] =
    {
        arifle_Katiba_ARCO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ARCO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_HarnessO_gry,
		H_HelmetO_oucamo,
		DefaultManLinkedItems,
		O_NVGoggles_urb_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_gry,
		H_HelmetO_oucamo,
		DefaultManLinkedItems,
		O_NVGoggles_urb_F
	};
};
class O_soldierU_F;
class O_soldierU_AR_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldierU_AR_F.jpg";
    weapons[] =
    {
        LMG_Zafir_ARCO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        LMG_Zafir_ARCO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_4(150Rnd_762x54_Box),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_4(150Rnd_762x54_Box),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade_East,
        mag_2(SmokeShell)
    };
};
class O_soldierU_AAR_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldierU_AAR_F.jpg";
	weapons[] =
	{
		arifle_Katiba_ACO_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_Katiba_ACO_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons,
		Rangefinder
	};
    magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnmagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_HarnessO_gry,
		H_HelmetO_oucamo,
		DefaultManLinkedItems,
		O_NVGoggles_urb_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_gry,
		H_HelmetO_oucamo,
		DefaultManLinkedItems,
		O_NVGoggles_urb_F
	};
};
class O_soldierU_LAT_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldierU_LAT_F.jpg";
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
    linkedItems[] =
    {
        V_TacVest_gry,
        H_HelmetO_oucamo,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_gry,
        H_HelmetO_oucamo,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
};
class O_soldierU_AT_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldierU_AT_F.jpg";
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
    linkedItems[] =
    {
        V_TacVest_gry,
        H_HelmetO_oucamo,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_gry,
        H_HelmetO_oucamo,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
};
class O_soldierU_AAT_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldierU_AAT_F.jpg";
	weapons[] =
	{
		arifle_Katiba_ACO_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_Katiba_ACO_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons,
		Rangefinder
	};
    magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnmagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_HarnessO_gry,
		H_HelmetO_oucamo,
		DefaultManLinkedItems,
		O_NVGoggles_urb_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_gry,
		H_HelmetO_oucamo,
		DefaultManLinkedItems,
		O_NVGoggles_urb_F
	};
};
class O_soldierU_AA_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldierU_AA_F.jpg";
    weapons[] =
    {
        arifle_Katiba_C_ACO_pointer_F,
        launch_O_Titan_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_C_ACO_pointer_F,
        launch_O_Titan_F,
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
    linkedItems[] =
    {
        V_TacVest_gry,
        H_HelmetO_oucamo,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_gry,
        H_HelmetO_oucamo,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
};
class O_soldierU_AAA_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldierU_AAA_F.jpg";
	weapons[] =
	{
		arifle_Katiba_ACO_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_Katiba_ACO_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons,
		Rangefinder
	};
    magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnmagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_HarnessO_gry,
		H_HelmetO_oucamo,
		DefaultManLinkedItems,
		O_NVGoggles_urb_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_gry,
		H_HelmetO_oucamo,
		DefaultManLinkedItems,
		O_NVGoggles_urb_F
	};
};
class O_soldierU_TL_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldierU_TL_F.jpg";
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
		1Rnd_SmokeRed_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell,
		1Rnd_SmokeYellow_Grenade_shell
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
		1Rnd_SmokeRed_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell,
		1Rnd_SmokeYellow_Grenade_shell
    };
    linkedItems[] =
    {
        V_HarnessOGL_gry,
        H_HelmetLeaderO_oucamo,
        DefaultManLeaderLinkedItems,
        O_NVGoggles_urb_F
    };
    respawnLinkedItems[] =
    {
        V_HarnessOGL_gry,
        H_HelmetLeaderO_oucamo,
        DefaultManLeaderLinkedItems,
        O_NVGoggles_urb_F
    };
};
class O_SoldierU_SL_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldierU_SL_F.jpg";
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
        V_TacVest_gry,
        H_HelmetLeaderO_oucamo,
        DefaultManLeaderLinkedItems,
        O_NVGoggles_urb_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_gry,
        H_HelmetLeaderO_oucamo,
        DefaultManLeaderLinkedItems,
        O_NVGoggles_urb_F
    };
};
class O_soldierU_medic_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldierU_medic_F.jpg";
    weapons[] =
    {
        arifle_Katiba_ACO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ACO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
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
        V_TacVest_gry,
        H_HelmetO_oucamo,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_gry,
        H_HelmetO_oucamo,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
};
class O_soldierU_repair_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldierU_repair_F.jpg";
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
};
class O_soldierU_exp_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldierU_exp_F.jpg";
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
        V_TacVest_gry,
		H_HelmetO_oucamo,
		DefaultManLinkedItems,
		O_NVGoggles_urb_F
	};
	respawnLinkedItems[] =
	{
        V_TacVest_gry,
		H_HelmetO_oucamo,
		DefaultManLinkedItems,
		O_NVGoggles_urb_F
	};
};
class O_engineer_U_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_engineer_U_F.jpg";
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        SmokeShell,
        SMOKESHELLS_OPFOR
    };
};
class O_soldierU_M_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldierU_M_F.jpg";
    weapons[] =
    {
        srifle_DMR_01_DMS_LP_BI_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        srifle_DMR_01_DMS_LP_BI_F,
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
    linkedItems[] =
    {
        V_HarnessO_gry,
        H_HelmetO_oucamo,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
    respawnLinkedItems[] =
    {
        V_HarnessO_gry,
        H_HelmetO_oucamo,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
};
class O_soldierU_A_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldierU_A_F.jpg";
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
};
class O_SoldierU_GL_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_SoldierU_GL_F.jpg";
    weapons[] =
    {
        arifle_Katiba_GL_ACO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_GL_ACO_pointer_F,
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
        V_HarnessOGL_gry,
        H_HelmetO_oucamo,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
    respawnLinkedItems[] =
    {
        V_HarnessOGL_gry,
        H_HelmetO_oucamo,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
};
class O_Soldier_VR_F: O_Soldier_base_F
{
	modelSides[] = {TFriendly};
};
class O_Protagonist_VR_F: O_Soldier_base_F
{
	modelSides[] = {TFriendly};
};
class O_ghillie_base_F: O_Soldier_sniper_base_F
{
    magazines[] =
    {
        mag_4(5Rnd_127x108_Mag),
        mag_2(5Rnd_127x108_APDS_Mag),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_4(5Rnd_127x108_Mag),
        mag_2(5Rnd_127x108_APDS_Mag),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
};
class O_ghillie_lsh_F;
class O_ghillie_sard_F;
class O_ghillie_ard_F;
class O_Sharpshooter_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Sharpshooter_F.jpg";
    weapons[] =
    {
        srifle_DMR_05_KHS_LP_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        srifle_DMR_05_KHS_LP_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_8(10Rnd_93x64_DMR_05_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(10Rnd_93x64_DMR_05_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_Urban_Sharpshooter_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Urban_Sharpshooter_F.jpg";
    weapons[] =
    {
        srifle_DMR_05_KHS_LP_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        srifle_DMR_05_KHS_LP_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_8(10Rnd_93x64_DMR_05_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(10Rnd_93x64_DMR_05_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        V_HarnessO_gry,
        H_HelmetO_oucamo,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
    respawnLinkedItems[] =
    {
        V_HarnessO_gry,
        H_HelmetO_oucamo,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
};
class O_Pathfinder_F: O_Soldier_recon_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Pathfinder_F.jpg";
	magazines[] =
	{
        mag_8(10Rnd_127x54_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
	};
	respawnMagazines[] =
	{
        mag_8(10Rnd_127x54_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
	};
	linkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetSpecO_ocamo,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetSpecO_ocamo,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_HeavyGunner_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_HeavyGunner_F.jpg";
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
        V_HarnessO_brn,
        H_HelmetO_ocamo,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_HarnessO_brn,
        H_HelmetO_ocamo,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_Urban_HeavyGunner_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Urban_HeavyGunner_F.jpg";
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
        V_HarnessO_gry,
        H_HelmetO_oucamo,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
    respawnLinkedItems[] =
    {
        V_HarnessO_gry,
        H_HelmetO_oucamo,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
};
class O_Fighter_Pilot_F: O_Pilot_F
{
	magazines[] =
	{
        mag_2(17Rnd_9x21_Mag),
        SMOKESHELLS_OPFOR
	};
	respawnMagazines[] =
	{
        mag_2(17Rnd_9x21_Mag),
        SMOKESHELLS_OPFOR
	};
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
};
class O_Soldier_HAT_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Soldier_HAT_F.jpg";
    weapons[] =
    {
        arifle_Katiba_ACO_pointer_F,
        launch_O_Vorona_brown_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ACO_pointer_F,
        launch_O_Vorona_brown_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        Vorona_HEAT,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        Vorona_HEAT,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        V_TacVest_khk,
        H_HelmetO_ocamo,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_khk,
        H_HelmetO_ocamo,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_Soldier_AHAT_F: O_Soldier_support_base_F
{
	linkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_Soldier_CQ_F: O_Soldier_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Soldier_CQ_F.jpg";
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
        Aegis_sgun_AA40_ACO_LP_LxWS,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_sgun_AA40_ACO_LP_LxWS,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_3(8Rnd_12Gauge_AA40_Pellets_lxWS),
        mag_3(8Rnd_12Gauge_AA40_Slug_lxWS),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_3(8Rnd_12Gauge_AA40_Pellets_lxWS),
        mag_3(8Rnd_12Gauge_AA40_Slug_lxWS),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        V_TacVest_khk,
        H_HelmetO_ocamo,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_khk,
        H_HelmetO_ocamo,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_soldierU_CQ_F: O_Soldier_Urban_base
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldierU_CQ_F.jpg";
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
        Aegis_sgun_AA40_ACO_LP_LxWS,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_sgun_AA40_ACO_LP_LxWS,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_3(8Rnd_12Gauge_AA40_Pellets_lxWS),
        mag_3(8Rnd_12Gauge_AA40_Slug_lxWS),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_3(8Rnd_12Gauge_AA40_Pellets_lxWS),
        mag_3(8Rnd_12Gauge_AA40_Slug_lxWS),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        V_TacVest_gry,
        H_HelmetO_oucamo,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_gry,
        H_HelmetO_oucamo,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
};
class O_recon_CQ_F: O_Soldier_recon_base
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_recon_CQ_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_B_recon_CQ_F0;
    cost = 130000;
	threat[] =
    {
        1.0,    // Soft
        0.1,    // Armor
        0.1     // Air
    };
    weapons[] =
    {
        Aegis_sgun_AA40_ACO_LP_snds_LxWS,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_sgun_AA40_ACO_LP_snds_LxWS,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_3(8Rnd_12Gauge_AA40_Pellets_lxWS),
        mag_3(8Rnd_12Gauge_AA40_Slug_lxWS),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_3(8Rnd_12Gauge_AA40_Pellets_lxWS),
        mag_3(8Rnd_12Gauge_AA40_Slug_lxWS),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        V_TacVest_khk,
        H_HelmetSpecO_ocamo,
        DefaultManLeaderLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_khk,
        H_HelmetSpecO_ocamo,
        DefaultManLeaderLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_recon_AR_F: O_Soldier_recon_base
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_recon_AR_F.jpg";
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
    weapons[] =
    {
        LMG_Zafir_ARCO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        LMG_Zafir_ARCO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_4(150Rnd_762x54_Box),
        mag_2(17Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_4(150Rnd_762x54_Box),
        mag_2(17Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    linkedItems[] =
    {
        V_HarnessOSpec_brn,
        H_HelmetSpecO_blk,
        DefaultManLeaderLinkedItems,
        O_NVGoggles_blk_F
    };
    respawnLinkedItems[] =
    {
        V_HarnessOSpec_brn,
        H_HelmetSpecO_blk,
        DefaultManLeaderLinkedItems,
        O_NVGoggles_blk_F
    };
};
class O_recon_GL_F: O_Soldier_recon_base
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_recon_GL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_O_R_Recon_GL_F0;
    role = Grenadier;
    cost = 210000;
    weapons[] =
    {
        arifle_Katiba_GL_ARCO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_GL_ARCO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(Chemlight_red),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(Chemlight_red),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    linkedItems[] =
    {
        V_HarnessOGL_brn,
        H_HelmetSpecO_blk,
        DefaultManLeaderLinkedItems,
        O_NVGoggles_blk_F
    };
    respawnLinkedItems[] =
    {
        V_HarnessOGL_brn,
        H_HelmetSpecO_blk,
        DefaultManLeaderLinkedItems,
        O_NVGoggles_blk_F
    };
};
class O_ghillie_spotter_lsh_F: O_ghillie_lsh_F
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
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_ghillie_spotter_lsh_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_O_ghillie_spotter_lsh_F0;
    cost = 250000;
    weapons[] =
    {
        arifle_Katiba_ARCO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ARCO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
};
class O_ghillie_spotter_sard_F: O_ghillie_sard_F
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
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_ghillie_spotter_sard_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_O_ghillie_spotter_sard_F0;
    cost = 250000;
    weapons[] =
    {
        arifle_Katiba_ARCO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ARCO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
};
class O_ghillie_spotter_ard_F: O_ghillie_ard_F
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
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_ghillie_spotter_ard_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_O_ghillie_spotter_ard_F0;
    cost = 250000;
    weapons[] =
    {
        arifle_Katiba_ARCO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ARCO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
};
class O_Soldier_CBRN_F: O_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Soldier_CBRN_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_Soldier_CBRN_F0;
	uniformClass = U_O_CombatUniform_ocamo;
	linkedItems[] =
	{
		V_TacVest_khk,
		H_HelmetO_ocamo,
		G_AirPurifyingRespirator_02_sand_F,
		DefaultManCbrnLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_khk,
		H_HelmetO_ocamo,
		G_AirPurifyingRespirator_02_sand_F,
		DefaultManCbrnLinkedItems,
		O_NVGoggles_hex_F
	};
	weapons[] =
    {
        arifle_Katiba_C_ACO_flash_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_C_ACO_flash_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    cost = 93000;
	camouflage = 1.6;
    icon = iconManEngineer;
    picture = pictureRepair;
    role = Sapper;
};
class O_soldierU_CBRN_F: O_soldierU_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldierU_CBRN_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_Soldier_CBRN_F0;
	uniformClass = U_O_CombatUniform_oucamo;
	linkedItems[] =
	{
		V_TacVest_gry,
		H_HelmetO_oucamo,
		G_AirPurifyingRespirator_02_black_F,
		DefaultManCbrnLinkedItems,
		O_NVGoggles_urb_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_gry,
		H_HelmetO_oucamo,
		G_AirPurifyingRespirator_02_black_F,
		DefaultManCbrnLinkedItems,
		O_NVGoggles_urb_F
	};
	weapons[] =
    {
        arifle_Katiba_C_ACO_flash_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_C_ACO_flash_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    cost = 93000;
	camouflage = 1.6;
    icon = iconManEngineer;
    picture = pictureRepair;
    role = Sapper;
};
class O_RadioOperator_F: O_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_RadioOperator_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	uniformClass = U_O_CombatUniform_ocamo;
	linkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	backpack = B_RadioBag_01_hex_F;
	weapons[] =
    {
        arifle_Katiba_ACO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ACO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    role = RadioOperator;
};
class O_soldier_UGV_02_Demining_F: O_soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldier_UGV_02_Demining_F.jpg";
	displayName = $STR_A3_C_B_soldier_UGV_02_Demining_F0;
	backpack = O_UGV_02_Demining_backpack_F;
};
class O_Urban_RadioOperator_F: O_soldierU_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Urban_RadioOperator_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	uniformClass = U_O_CombatUniform_oucamo;
	linkedItems[] =
	{
		V_HarnessO_gry,
		H_HelmetO_oucamo,
		DefaultManLinkedItems,
		O_NVGoggles_urb_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_gry,
		H_HelmetO_oucamo,
		DefaultManLinkedItems,
		O_NVGoggles_urb_F
	};
	backpack = B_RadioBag_01_oucamo_F;
	weapons[] =
    {
        arifle_Katiba_ACO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ACO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    role = RadioOperator;
};

/* China */
class O_T_Soldier_A_F: O_Soldier_A_F
{
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
    magazines[] =
    {
        mag_12(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_12(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
};
class O_T_Soldier_AAR_F: O_Soldier_AAR_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Soldier_AAR_F.jpg";
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
    magazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnmagazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_HarnessO_ghex_F,
		H_HelmetO_ghex_F,
		DefaultManLinkedItems,
		O_NVGoggles_ghex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_ghex_F,
		H_HelmetO_ghex_F,
		DefaultManLinkedItems,
		O_NVGoggles_ghex_F
	};
};
class O_T_Support_AMG_F: O_support_AMG_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Support_AMG_F.jpg";
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
    magazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnmagazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
};
class O_T_Support_AMort_F: O_support_AMort_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Support_AMort_F.jpg";
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
    magazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnmagazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
};
class O_T_Soldier_AAA_F: O_Soldier_AAA_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Soldier_AAA_F.jpg";
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
    magazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnmagazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_HarnessO_ghex_F,
		H_HelmetO_ghex_F,
		DefaultManLinkedItems,
		O_NVGoggles_ghex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_ghex_F,
		H_HelmetO_ghex_F,
		DefaultManLinkedItems,
		O_NVGoggles_ghex_F
	};
};
class O_T_Soldier_AAT_F: O_Soldier_AAT_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Soldier_AAT_F.jpg";
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
    magazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnmagazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_HarnessO_ghex_F,
		H_HelmetO_ghex_F,
		DefaultManLinkedItems,
		O_NVGoggles_ghex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_ghex_F,
		H_HelmetO_ghex_F,
		DefaultManLinkedItems,
		O_NVGoggles_ghex_F
	};
};
class O_T_Soldier_AR_F: O_Soldier_AR_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Soldier_AR_F.jpg";
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
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
};
class O_T_Medic_F: O_medic_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Medic_F.jpg";
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
};
class O_T_Crew_F: O_crew_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Crew_F.jpg";
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
};
class O_T_Engineer_F: O_engineer_F
{
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
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
};
class O_T_Soldier_Exp_F: O_soldier_exp_F
{
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
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
};
class O_T_Soldier_GL_F: O_Soldier_GL_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Soldier_GL_F.jpg";
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
		V_HarnessOGL_ghex_F,
		H_HelmetO_ghex_F,
		DefaultManLinkedItems,
		O_NVGoggles_ghex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessOGL_ghex_F,
		H_HelmetO_ghex_F,
		DefaultManLinkedItems,
		O_NVGoggles_ghex_F
	};
};
class O_T_Support_GMG_F: O_support_GMG_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Support_GMG_F.jpg";
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
    magazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnmagazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
};
class O_T_Support_MG_F: O_support_MG_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Support_MG_F.jpg";
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
    magazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnmagazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
};
class O_T_Support_Mort_F: O_support_Mort_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Support_Mort_F.jpg";
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
    backpack = O_T_Mortar_01_weapon_F;
    magazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnmagazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
};
class O_T_Helicrew_F: O_helicrew_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Helicrew_F.jpg";
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
    uniformClass = U_O_T_Pilot_F;
    hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\pilot_suit_tna_CO.paa"};
    weapons[] =
	{
		arifle_CTAR_blk_ACO_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_CTAR_blk_ACO_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_4(30Rnd_580x42_Mag_F),
        SMOKESHELLS_OPFOR
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_580x42_Mag_F),
        SMOKESHELLS_OPFOR
	};
    linkedItems[] =
    {
        H_CrewHelmetHeli_O,
        DefaultManLinkedItems,
        O_NVGoggles_ghex_F
    };
    respawnLinkedItems[] =
    {
        H_CrewHelmetHeli_O,
        DefaultManLinkedItems,
        O_NVGoggles_ghex_F
    };
};
class O_T_Helipilot_F: O_helipilot_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Helipilot_F.jpg";
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
    uniformClass = U_O_T_Pilot_F;
    hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\pilot_suit_tna_CO.paa"};
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
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
	};
    linkedItems[] =
    {
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        O_NVGoggles_ghex_F
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        O_NVGoggles_ghex_F
    };
};
class O_T_Soldier_M_F: O_soldier_M_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Soldier_M_F.jpg";
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
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
        V_HarnessO_ghex_F,
        H_HelmetO_ghex_F,
        DefaultManLinkedItems,
        O_NVGoggles_ghex_F
    };
    respawnLinkedItems[] =
    {
        V_HarnessO_ghex_F,
        H_HelmetO_ghex_F,
        DefaultManLinkedItems,
        O_NVGoggles_ghex_F
    };
};
class O_T_Soldier_AA_F: O_Soldier_AA_F
{
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
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
};
class O_T_Soldier_AT_F: O_Soldier_AT_F
{
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
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
};
class O_T_Officer_F: O_officer_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Officer_F.jpg";
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_officer
    };
    weapons[] =
    {
        arifle_CTAR_blk_F,
        hgun_Pistol_heavy_02_Yorris_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_CTAR_blk_F,
        hgun_Pistol_heavy_02_Yorris_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        mag_2(6Rnd_45ACP_Cylinder),
        SMOKESHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        mag_2(6Rnd_45ACP_Cylinder),
        SMOKESHELLS_OPFOR
    };
    linkedItems[] =
    {
        V_Rangemaster_belt_ghex_F,
        H_Beret_CSAT_01_F,
        ItemGPS,
        DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_Rangemaster_belt_ghex_F,
        H_Beret_CSAT_01_F,
        ItemGPS,
        DefaultManLinkedItems
    };
    hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_tna_CO.paa"};
};
class O_T_Soldier_PG_F: O_soldier_PG_F
{
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
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
		V_HarnessO_ghex_F,
		H_HelmetO_ghex_F,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_ghex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_ghex_F,
		H_HelmetO_ghex_F,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_ghex_F
	};
};
class O_T_Pilot_F: O_Pilot_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Pilot_F.jpg";
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
    uniformClass = U_O_T_Pilot_F;
    hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\pilot_suit_tna_CO.paa"};
    linkedItems[] =
    {
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        O_NVGoggles_ghex_F
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        O_NVGoggles_ghex_F
    };
};
class O_T_Soldier_Repair_F: O_soldier_repair_F
{
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
};
class O_T_Soldier_F: O_Soldier_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Soldier_F.jpg";
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
    weapons[] =
    {
        arifle_CTAR_blk_ARCO_Pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_CTAR_blk_ARCO_Pointer_F,
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
};
class O_T_Soldier_LAT_F: O_Soldier_LAT_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Soldier_LAT_F.jpg";
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
    weapons[] =
    {
        arifle_CTAR_blk_ACO_Pointer_F,
        launch_RPG32_ghex_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_CTAR_blk_ACO_Pointer_F,
        launch_RPG32_ghex_F,
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
};
class O_T_Soldier_SL_F: O_Soldier_SL_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Soldier_SL_F.jpg";
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
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
		V_TacVest_oli,
		H_HelmetLeaderO_ghex_F,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_ghex_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_oli,
		H_HelmetLeaderO_ghex_F,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_ghex_F
	};
};
class O_T_Soldier_TL_F: O_Soldier_TL_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Soldier_TL_F.jpg";
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
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
};
class O_T_Soldier_UAV_F: O_soldier_UAV_F
{
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
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
};
class O_T_Soldier_UAV_02_lxWS_F: O_T_Soldier_UAV_F
{
    displayName = "UAV Operator (AP-5)";
    backpack = Aegis_O_T_UAV_02_backpack_lxWS;
};
class O_T_Diver_F: O_diver_F
{
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
};
class O_T_Diver_Exp_F: O_diver_exp_F
{
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
};
class O_T_Diver_TL_F: O_diver_TL_F
{
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
};
class O_T_Recon_Exp_F: O_recon_exp_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Recon_Exp_F.jpg";
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_SF
    };
    weapons[] =
    {
        arifle_CTAR_blk_ACO_Pointer_Snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_CTAR_blk_ACO_Pointer_Snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
	linkedItems[] =
	{
		V_HarnessO_ghex_F,
		H_HelmetSpecO_blk,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_ghex_F,
		H_HelmetSpecO_blk,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_blk_F
	};
};
class O_T_Recon_JTAC_F: O_recon_JTAC_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Recon_JTAC_F.jpg";
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_SF
    };
	backpack = B_RadioBag_01_ghex_F;
    weapons[] =
    {
        arifle_CTAR_blk_ACO_Pointer_Snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02_ghex_F
    };
    respawnWeapons[] =
    {
        arifle_CTAR_blk_ACO_Pointer_Snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02_ghex_F
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
        Laserbatteries,
        SmokeShell,
		SMOKESHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
	linkedItems[] =
	{
		H_HelmetSpecO_ghex_F,
		V_HarnessOGL_ghex_F,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_ghex_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecO_ghex_F,
		V_HarnessOGL_ghex_F,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_ghex_F
	};
};
class O_T_Recon_M_F: O_recon_M_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Recon_M_F.jpg";
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_SF
    };
    weapons[] =
    {
        srifle_DMR_07_blk_DMS_Snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        srifle_DMR_07_blk_DMS_Snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_10(20Rnd_650x39_Cased_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_10(20Rnd_650x39_Cased_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
	linkedItems[] =
	{
		V_TacVest_oli,
		H_HelmetSpecO_blk,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_oli,
		H_HelmetSpecO_blk,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_blk_F
	};
};
class O_T_Recon_Medic_F: O_recon_medic_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Recon_Medic_F.jpg";
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_SF
    };
    weapons[] =
    {
        arifle_CTAR_blk_ACO_Pointer_Snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_CTAR_blk_ACO_Pointer_Snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SMOKESHELLS_MEDIC,
        mag_2(Chemlight_red)
    };
};
class O_T_Recon_F: O_recon_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Recon_F.jpg";
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_SF
    };
    weapons[] =
    {
        arifle_CTAR_blk_ARCO_Pointer_Snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_CTAR_blk_ARCO_Pointer_Snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_10(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
	linkedItems[] =
	{
		V_HarnessOSpec_ghex_F,
		H_HelmetSpecO_ghex_F,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_ghex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessOSpec_ghex_F,
		H_HelmetSpecO_ghex_F,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_ghex_F
	};
};
class O_T_Recon_LAT_F: O_recon_LAT_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Recon_LAT_F.jpg";
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_SF
    };
    weapons[] =
    {
        arifle_CTAR_blk_ACO_Pointer_Snds_F,
        launch_RPG32_ghex_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_CTAR_blk_ACO_Pointer_Snds_F,
        launch_RPG32_ghex_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        RPG32_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        RPG32_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
	linkedItems[] =
	{
        V_TacVest_oli,
		H_HelmetSpecO_blk,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
        V_TacVest_oli,
		H_HelmetSpecO_blk,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_blk_F
	};
};
class O_T_Recon_TL_F: O_recon_TL_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Recon_TL_F.jpg";
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_SF
    };
    weapons[] =
    {
        arifle_CTAR_blk_ARCO_Pointer_Snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_CTAR_blk_ARCO_Pointer_Snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        mag_2(30Rnd_580x42_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		SmokeShell,
        SMOKESHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        mag_2(30Rnd_580x42_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		SmokeShell,
        SMOKESHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
	linkedItems[] =
	{
		V_HarnessOSpec_ghex_F,
		H_HelmetLeaderO_ghex_F,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_ghex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessOSpec_ghex_F,
		H_HelmetLeaderO_ghex_F,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_ghex_F
    };
};
class O_T_Sniper_F: O_sniper_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Sniper_F.jpg";
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
    hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa",
        "\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_tna_CO.paa"
    };
    magazines[] =
    {
        mag_4(5Rnd_127x108_Mag),
        mag_2(5Rnd_127x108_APDS_Mag),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_4(5Rnd_127x108_Mag),
        mag_2(5Rnd_127x108_APDS_Mag),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    linkedItems[] =
    {
        V_TacChestrig_oli_F,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_ghex_F
    };
    respawnLinkedItems[] =
    {
        V_TacChestrig_oli_F,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_ghex_F
    };
};
class O_T_Spotter_F: O_spotter_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Spotter_F.jpg";
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
    hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa",
        "\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_tna_CO.paa"
    };
    weapons[] =
    {
        arifle_CTAR_blk_ARCO_Pointer_Snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02_ghex_F
    };
    respawnWeapons[] =
    {
        arifle_CTAR_blk_ARCO_Pointer_Snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02_ghex_F
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
};
class O_T_ghillie_tna_F: O_ghillie_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_ghillie_tna_F.jpg";
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
    linkedItems[] =
    {
        V_TacChestrig_oli_F,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_ghex_F
    };
    respawnLinkedItems[] =
    {
        V_TacChestrig_oli_F,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_ghex_F
    };
};
class O_T_Soldier_HAT_F: O_Soldier_HAT_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Soldier_HAT_F.jpg";
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
    weapons[] =
    {
        arifle_CTAR_blk_ACO_Pointer_F,
        launch_O_Vorona_green_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_CTAR_blk_ACO_Pointer_F,
        launch_O_Vorona_green_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        Vorona_HEAT,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        Vorona_HEAT,
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
};
class O_T_Soldier_AHAT_F: O_Soldier_AHAT_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Soldier_AHAT_F.jpg";
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
    magazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnmagazines[] =
    {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_HarnessO_ghex_F,
		H_HelmetO_ghex_F,
		DefaultManLinkedItems,
		O_NVGoggles_ghex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_ghex_F,
		H_HelmetO_ghex_F,
		DefaultManLinkedItems,
		O_NVGoggles_ghex_F
	};
};
class O_T_Soldier_Lite_F: O_Soldier_lite_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Soldier_Lite_F.jpg";
    faction = OPF_T_F;
    genericNames = ChineseMen;
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
    uniformClass = U_O_T_Soldier_F;
    hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa",
        "\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"
    };
    weapons[] =
    {
        arifle_CTAR_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_CTAR_blk_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        HandGrenade_East,
        SmokeShell
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        HandGrenade_East,
        SmokeShell
    };
    linkedItems[] =
    {
        V_BandollierB_ghex_F,
        H_MilCap_ghex_F,
        DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_BandollierB_ghex_F,
        H_MilCap_ghex_F,
        DefaultManLinkedItems
    };
};
class O_T_Soldier_CQ_F: O_Soldier_CQ_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Soldier_CQ_F.jpg";
    faction = OPF_T_F;
    genericNames = ChineseMen;
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
    uniformClass = U_O_T_Soldier_F;
    hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa",
        "\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"
    };
    linkedItems[] =
    {
        V_TacVest_oli,
        H_HelmetO_ghex_F,
        DefaultManLinkedItems,
        O_NVGoggles_ghex_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_oli,
        H_HelmetO_ghex_F,
        DefaultManLinkedItems,
        O_NVGoggles_ghex_F
    };
};
class O_T_Recon_CQ_F: O_recon_CQ_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Recon_CQ_F.jpg";
    faction = OPF_T_F;
    genericNames = ChineseMen;
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_SF
    };
    uniformClass = U_O_T_Soldier_F;
    hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa",
        "\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"
    };
    linkedItems[] =
    {
        V_TacVest_oli,
        H_HelmetSpecO_ghex_F,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_ghex_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_oli,
        H_HelmetSpecO_ghex_F,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_ghex_F
    };
};
class O_T_Recon_AR_F: O_recon_AR_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Recon_AR_F.jpg";
    faction = OPF_T_F;
    genericNames = ChineseMen;
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_SF
    };
    uniformClass = U_O_T_Soldier_F;
    hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa",
        "\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"
    };
	weapons[] =
	{
		arifle_CTARS_blk_ARCO_Pointer_Snds_F,
	    hgun_Rook40_snds_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_CTARS_blk_ARCO_Pointer_Snds_F,
	    hgun_Rook40_snds_F,
		DefaultManWeapons
	};
    magazines[] =
    {
        mag_8(100Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_8(100Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(chemlight_red)
    };
    linkedItems[] =
    {
        V_HarnessOSpec_ghex_F,
        H_HelmetSpecO_blk,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_blk_F
    };
    respawnLinkedItems[] =
    {
        V_HarnessOSpec_ghex_F,
        H_HelmetSpecO_blk,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_blk_F
    };
};
class O_T_Recon_GL_F: O_recon_GL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Recon_GL_F.jpg";
    faction = OPF_T_F;
    genericNames = ChineseMen;
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_SF
    };
    uniformClass = U_O_T_Soldier_F;
    hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa",
        "\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"
    };
	weapons[] =
	{
        arifle_CTAR_GL_blk_ARCO_Pointer_Snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_CTAR_GL_blk_ARCO_Pointer_Snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(Chemlight_red),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(Chemlight_red),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    linkedItems[] =
    {
        V_HarnessOGL_ghex_F,
        H_HelmetSpecO_blk,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_blk_F
    };
    respawnLinkedItems[] =
    {
        V_HarnessOGL_ghex_F,
        H_HelmetSpecO_blk,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_blk_F
    };
};
class O_T_Sharpshooter_F: O_Sharpshooter_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Sharpshooter_F.jpg";
    faction = OPF_T_F;
    genericNames = ChineseMen;
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
    uniformClass = U_O_T_Soldier_F;
    hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa",
        "\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"
    };
    linkedItems[] =
    {
        V_HarnessO_ghex_F,
        H_HelmetO_ghex_F,
        DefaultManLinkedItems,
        O_NVGoggles_ghex_F
    };
    respawnLinkedItems[] =
    {
        V_HarnessO_ghex_F,
        H_HelmetO_ghex_F,
        DefaultManLinkedItems,
        O_NVGoggles_ghex_F
    };
};
class O_T_Pathfinder_F: O_Pathfinder_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Pathfinder_F.jpg";
    faction = OPF_T_F;
    genericNames = ChineseMen;
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_SF
    };
    uniformClass = U_O_T_Soldier_F;
    hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa",
        "\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"
    };
    weapons[] =
    {
        srifle_DMR_04_NS_LP_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02_ghex_F
    };
    respawnWeapons[] =
    {
        srifle_DMR_04_NS_LP_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02_ghex_F
    };
    linkedItems[] =
    {
        V_HarnessO_ghex_F,
        H_HelmetSpecO_ghex_F,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_ghex_F
    };
    respawnLinkedItems[] =
    {
        V_HarnessO_ghex_F,
        H_HelmetSpecO_ghex_F,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_ghex_F
    };
};
class O_T_HeavyGunner_F: O_HeavyGunner_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_HeavyGunner_F.jpg";
    faction = OPF_T_F;
    genericNames = ChineseMen;
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
    uniformClass = U_O_T_Soldier_F;
    hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa",
        "\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"
    };
    weapons[] =
    {
        MMG_01_ghex_ARCO_LP_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        MMG_01_ghex_ARCO_LP_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    linkedItems[] =
    {
        V_HarnessO_ghex_F,
        H_HelmetO_ghex_F,
        DefaultManLinkedItems,
        O_NVGoggles_ghex_F
    };
    respawnLinkedItems[] =
    {
        V_HarnessO_ghex_F,
        H_HelmetO_ghex_F,
        DefaultManLinkedItems,
        O_NVGoggles_ghex_F
    };
};
class O_T_ghillie_spotter_tna_F: O_T_ghillie_tna_F
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
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_ghillie_spotter_tna_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_O_T_ghillie_spotter_tna_F0;
    cost = 250000;
    weapons[] =
    {
        arifle_CTAR_blk_ARCO_Pointer_Snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02_ghex_F
    };
    respawnWeapons[] =
    {
        arifle_CTAR_blk_ARCO_Pointer_Snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02_ghex_F
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
        Laserbatteries,
        SmokeShell,
        SMOKESHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
        Laserbatteries,
        SmokeShell,
        SMOKESHELLS_OPFOR
    };
};
class O_T_Fighter_Pilot_F: O_Fighter_Pilot_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Fighter_Pilot_F.jpg";
    faction = OPF_T_F;
    genericNames = ChineseMen;
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
    uniformClass = U_O_T_Pilot_F;
    hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\pilot_suit_tna_CO.paa"};
};
class O_T_Soldier_CBRN_F: O_T_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Soldier_CBRN_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_Soldier_CBRN_F0;
	linkedItems[] =
	{
		V_TacVest_oli,
		H_HelmetO_ghex_F,
		G_AirPurifyingRespirator_02_olive_F,
		DefaultManCbrnLinkedItems,
		O_NVGoggles_ghex_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_oli,
		H_HelmetO_ghex_F,
		G_AirPurifyingRespirator_02_olive_F,
		DefaultManCbrnLinkedItems,
		O_NVGoggles_ghex_F
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
    cost = 93000;
	camouflage = 1.6;
    icon = iconManEngineer;
    picture = pictureRepair;
    role = Sapper;
};
class O_T_RadioOperator_F: O_T_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_RadioOperator_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	linkedItems[] =
	{
		V_HarnessO_ghex_F,
		H_HelmetO_ghex_F,
		DefaultManLinkedItems,
		O_NVGoggles_ghex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_ghex_F,
		H_HelmetO_ghex_F,
		DefaultManLinkedItems,
		O_NVGoggles_ghex_F
	};
	backpack = B_RadioBag_01_ghex_F;
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
    role = RadioOperator;
};
class O_T_soldier_UGV_02_Demining_F: O_T_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_soldier_UGV_02_Demining_F.jpg";
	displayName = $STR_A3_C_B_soldier_UGV_02_Demining_F0;
	backpack = O_UGV_02_Demining_backpack_F;
};
class O_T_Survivor_F: O_T_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Survivor_F.jpg";
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

/* Argana */
class O_A_soldier_base_F: O_officer_F
{
	modelSides[] = {TFriendly};
    editorSubcategory = EdSubcat_Personnel;
    identityTypes[] =
    {
        LanguageFRE_F,
        Head_TK,
        Head_African,
        lxWS_Head_African,
        G_IRAN_officer,
        G_IRAN_african
    };
    uniformClass = U_O_LCF_noInsignia_hex_lxWS;
	magazines[] = {};
	respawnMagazines[] = {};
    faction = OPF_A_F;
    genericNames = lxWS_WSaharaMen;
};
class O_A_soldier_A_F: O_A_soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_soldier_A_F.jpg";
	scope = public;
	linkedItems[] =
    {
        V_BandollierB_khk,
        H_MilCap_ocamo,
        DefaultManLinkedItems
    };
	respawnLinkedItems[] =
    {
        V_BandollierB_khk,
        H_MilCap_ocamo,
        DefaultManLinkedItems
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell)
    };
};
class O_A_soldier_AR_F: O_A_soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_soldier_AR_F.jpg";
    scope = public;
    linkedItems[] =
    {
        V_ChestrigF_khk,
        H_Cap_brn_SPECOPS,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_ChestrigF_khk,
        H_Cap_brn_SPECOPS,
		DefaultManLinkedItems
    };
    magazines[] =
    {
        mag_8(100Rnd_580x42_Mag_F),
        HandGrenade_Guer,
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(100Rnd_580x42_Mag_F),
        HandGrenade_Guer,
        mag_2(SmokeShell)
    };
};
class O_A_medic_F: O_A_soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_medic_F.jpg";
	scope = public;
	linkedItems[] =
    {
        V_BandollierB_khk,
        H_MilCap_ocamo,
        DefaultManLinkedItems
    };
	respawnLinkedItems[] =
    {
        V_BandollierB_khk,
        H_MilCap_ocamo,
        DefaultManLinkedItems
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade_Guer),
        SmokeShell,
        SMOKESHELLS_MEDIC
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade_Guer),
        SmokeShell,
        SMOKESHELLS_MEDIC
    };
};
class O_A_soldier_GL_F: O_A_soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_soldier_GL_F.jpg";
	scope = public;
    linkedItems[] =
    {
        V_ChestrigF_khk,
        H_Cap_brn_SPECOPS,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_ChestrigF_khk,
        H_Cap_brn_SPECOPS,
		DefaultManLinkedItems
    };
    weapons[] =
    {
        arifle_CTAR_GL_blk_aco_flash_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_CTAR_GL_blk_aco_flash_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
};
class O_A_soldier_M_F: O_A_soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_soldier_M_F.jpg";
	scope = public;
    linkedItems[] =
    {
        V_BandollierB_khk,
        H_MilCap_ocamo,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_BandollierB_khk,
        H_MilCap_ocamo,
		DefaultManLinkedItems
    };
    weapons[] =
    {
        srifle_DMR_07_blk_F_arco_flash_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        srifle_DMR_07_blk_F_arco_flash_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_10(20Rnd_650x39_Cased_Mag_F),
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(20Rnd_650x39_Cased_Mag_F),
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell)
    };
};
class O_A_officer_F: O_A_soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_officer_F.jpg";
	scope = public;
    uniformClass = U_O_Officer_noInsignia_hex_F;
    linkedItems[] =
    {
        V_Rangemaster_belt_khk,
        H_Beret_CSAT_01_F,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_Rangemaster_belt_khk,
        H_Beret_CSAT_01_F,
		DefaultManLinkedItems
    };
    weapons[] =
    {
        hgun_PDW2000_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        hgun_PDW2000_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_9x21_Mag),
        mag_3(17Rnd_9x21_Mag),
        SMOKESHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_9x21_Mag),
        mag_3(17Rnd_9x21_Mag),
        SMOKESHELLS_OPFOR
    };
};
class O_A_soldier_F: O_A_soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_soldier_F.jpg";
	scope = public;
    linkedItems[] =
    {
        V_ChestrigF_khk,
        H_PASGT_basic_sand_F,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_ChestrigF_khk,
        H_PASGT_basic_sand_F,
		DefaultManLinkedItems
    };
    magazines[] =
    {
        mag_10(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell)
    };
};
class O_A_soldier_LAT_F: O_A_soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_soldier_LAT_F.jpg";
	scope = public;
    linkedItems[] =
    {
        V_BandollierB_khk,
        H_PASGT_basic_sand_F,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_BandollierB_khk,
        H_PASGT_basic_sand_F,
		DefaultManLinkedItems
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        RPG32_F,
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        RPG32_F,
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell)
    };
};
class O_A_soldier_SL_F: O_A_soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_soldier_SL_F.jpg";
	scope = public;
    linkedItems[] =
    {
        V_Chestrig_khk,
        H_PASGT_basic_sand_F,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_Chestrig_khk,
        H_PASGT_basic_sand_F,
		DefaultManLinkedItems
    };
    weapons[] =
    {
        arifle_CTAR_blk_arco_flash_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_CTAR_blk_arco_flash_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        mag_2(30Rnd_580x42_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_Guer),
        SmokeShell,
        SMOKESHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        mag_2(30Rnd_580x42_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_Guer),
        SmokeShell,
        SMOKESHELLS_OPFOR
    };
};
class O_A_soldier_TL_F: O_A_soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_soldier_TL_F.jpg";
	scope = public;
    linkedItems[] =
    {
        V_Chestrig_khk,
        H_PASGT_basic_sand_F,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_Chestrig_khk,
        H_PASGT_basic_sand_F,
		DefaultManLinkedItems
    };
    weapons[] =
    {
        arifle_CTAR_GL_blk_arco_flash_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_CTAR_GL_blk_arco_flash_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        mag_2(30Rnd_580x42_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_Guer),
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
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade_Guer),
        SmokeShell,
        SMOKESHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		SMOKEGRENADES_OPFOR
    };
};
class O_A_soldier_AA_F: O_A_soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_soldier_AA_F.jpg";
	scope = public;
    linkedItems[] =
    {
        V_BandollierB_khk,
        H_Cap_brn_SPECOPS,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_BandollierB_khk,
        H_Cap_brn_SPECOPS,
		DefaultManLinkedItems
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        Titan_AA,
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        Titan_AA,
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell)
    };
};
class O_A_soldier_AT_F: O_A_soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_soldier_AT_F.jpg";
	scope = public;
    linkedItems[] =
    {
        V_BandollierB_khk,
        H_MilCap_ocamo,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_BandollierB_khk,
        H_MilCap_ocamo,
		DefaultManLinkedItems
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        Titan_AT,
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        Titan_AT,
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell)
    };
};
class O_A_crew_F: O_A_soldier_base_F
{
    author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_crew_F.jpg";
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {veh_infantry_s};
            speechPlural[] = {veh_infantry_p};
        };
    };
    textSingular = $STR_A3_nameSound_veh_infantry_s;
    textPlural = $STR_A3_nameSound_veh_infantry_p;
    nameSound = veh_infantry_s;
    scope = public;
    displayName = $STR_B_crew_F0;
    role = Crewman;
    cost = 90000;
    engineer = true;
    weapons[] =
    {
        hgun_PDW2000_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        hgun_PDW2000_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_9x21_Mag),
        mag_2(HandGrenade_Guer),
        SmokeShell
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_9x21_Mag),
        mag_2(HandGrenade_Guer),
        SmokeShell
    };
    linkedItems[] =
    {
        V_BandollierB_khk,
        H_Tank_black_F,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_BandollierB_khk,
        H_Tank_black_F,
		DefaultManLinkedItems
    };
};
class O_A_engineer_F: O_A_soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_engineer_F.jpg";
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {veh_infantry_s};
            speechPlural[] = {veh_infantry_p};
        };
    };
    textSingular = $STR_A3_nameSound_veh_infantry_s;
    textPlural = $STR_A3_nameSound_veh_infantry_p;
    nameSound = veh_infantry_s;
    scope = public;
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
        1.0,    // Soft
        0.5,    // Armor
        0.1     // Air
    };
	camouflage = 1.6;
    linkedItems[] =
    {
        V_BandollierB_khk,
        H_Cap_brn_SPECOPS,
		DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_BandollierB_khk,
        H_Cap_brn_SPECOPS,
		DefaultManLinkedItems
    };
    weapons[] =
    {
        arifle_CTAR_blk_flash_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_CTAR_blk_flash_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade_Guer),
        SmokeShell,
        SMOKESHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade_Guer),
        SmokeShell,
        SMOKESHELLS_OPFOR
    };
	backpack = B_AssaultPack_ocamo_Eng_F;
};
class O_A_helipilot_F: O_helipilot_F
{
    author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_helipilot_F.jpg";
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
    scope = public;
    genericNames = AfroMen;
	identityTypes[] =
	{
		LanguageFRE_F,
		Head_TK,
        Head_African,
        lxWS_Head_African,
		G_IRAN_default
	};
    faction = OPF_A_F;
	displayName = $STR_B_Helipilot_F0;
	role = Crewman;
	cost = 160000;
	camouflage = 2;
	uniformClass = U_O_officer_noInsignia_hex_F;
    linkedItems[] =
    {
        V_TacVest_khk,
        H_PilotHelmetHeli_O,
		DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_khk,
        H_PilotHelmetHeli_O,
		DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    weapons[] =
    {
        hgun_PDW2000_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        hgun_PDW2000_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_4(30Rnd_9x21_Mag),
        SMOKESHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_9x21_Mag),
        SMOKESHELLS_OPFOR
    };
};
class O_A_helicrew_F: O_A_helipilot_F
{
    author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_helicrew_F.jpg";
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
    scope = public;
	displayName = $STR_B_helicrew_F0;
	role = Crewman;
	cost = 80000;
    linkedItems[] =
    {
        V_TacVest_khk,
        H_CrewHelmetHeli_O,
		DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_khk,
        H_CrewHelmetHeli_O,
		DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    weapons[] =
    {
        arifle_CTAR_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_CTAR_blk_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        SMOKESHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        SMOKESHELLS_OPFOR
    };
};
class O_A_Fighter_Pilot_F: O_A_helipilot_F
{
    author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_Fighter_Pilot_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_B_Fighter_Pilot_name;
    role = Crewman;
    cost = 165000;
	camouflage = 2;
	uniformClass = U_O_PilotCoveralls;
    weapons[] =
    {
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_2(17Rnd_9x21_Mag),
        SMOKESHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_2(17Rnd_9x21_Mag),
        SMOKESHELLS_OPFOR
    };
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
};
class O_A_soldier_universal_F: O_A_soldier_F
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
class O_A_RadioOperator_F: O_A_soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_RadioOperator_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	linkedItems[] =
	{
		V_ChestrigF_khk,
		H_MilCap_ocamo,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_khk,
		H_MilCap_ocamo,
		DefaultManLinkedItems
	};
	backpack = B_RadioBag_01_hex_F;
	weapons[] =
    {
        arifle_CTAR_blk_flash_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_CTAR_blk_flash_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade_Guer),
        mag_2(SmokeShell)
    };
    role = RadioOperator;
};

/* Argana - Conscripts (West Sahara) */
class O_A_officer_lxWS : O_officer_F
{
    faction = OPF_A_F;
    editorSubcategory = EdSubcat_Personnel_Conscripts;
    class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'CSAT_ScimitarRegiment'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
			unitInsignia = "CSAT_ScimitarRegiment";
	};
};
class O_A_Soldier_TL_lxWS : O_Soldier_TL_F
{
    faction = OPF_A_F;
    editorSubcategory = EdSubcat_Personnel_Conscripts;
    class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'CSAT_ScimitarRegiment'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
			unitInsignia = "CSAT_ScimitarRegiment";
	};
};
class O_A_Soldier_lxWS : O_Soldier_F
{
    faction = OPF_A_F;
    editorSubcategory = EdSubcat_Personnel_Conscripts;
    class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'CSAT_ScimitarRegiment'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
			unitInsignia = "CSAT_ScimitarRegiment";
	};
};
class O_A_Soldier_GL_lxWS : O_Soldier_GL_F
{
    faction = OPF_A_F;
    editorSubcategory = EdSubcat_Personnel_Conscripts;
    class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'CSAT_ScimitarRegiment'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
			unitInsignia = "CSAT_ScimitarRegiment";
	};
};
class O_A_medic_lxWS : O_medic_F
{
    faction = OPF_A_F;
    editorSubcategory = EdSubcat_Personnel_Conscripts;
    class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'CSAT_ScimitarRegiment'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
			unitInsignia = "CSAT_ScimitarRegiment";
	};
};
class O_A_crew_lxWS : O_crew_F
{
    faction = OPF_A_F;
    editorSubcategory = EdSubcat_Personnel_Conscripts;
    class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'CSAT_ScimitarRegiment'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
			unitInsignia = "CSAT_ScimitarRegiment";
	};
};
class O_A_Soldier_AR_lxWS : O_Soldier_AR_F
{
    faction = OPF_A_F;
    editorSubcategory = EdSubcat_Personnel_Conscripts;
    class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'CSAT_ScimitarRegiment'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
			unitInsignia = "CSAT_ScimitarRegiment";
	};
};
class O_A_Soldier_LAT_lxWS: O_Soldier_LAT_F
{
    faction = OPF_A_F;
    editorSubcategory = EdSubcat_Personnel_Conscripts;
    class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'CSAT_ScimitarRegiment'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
			unitInsignia = "CSAT_ScimitarRegiment";
	};
};

/* China (Desert) */
class Aegis_O_C_D_Soldier_A_F: O_T_Soldier_A_F
{
    author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Soldier_A_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    backpack = B_Carryall_oicamo_OCDAmmo_F;
    weapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
	linkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Soldier_AAR_F: O_T_Soldier_AAR_F
{
    author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Soldier_AAR_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    backpack = B_Carryall_oicamo_OCDAAR_F;
    weapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
    linkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Support_AMG_F: O_T_Support_AMG_F
{
    author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Support_AMG_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    weapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
    linkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Support_AMort_F: O_T_Support_AMort_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Support_AMort_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    weapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
    linkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Soldier_AAA_F: O_T_Soldier_AAA_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Soldier_AAA_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    backpack = B_Carryall_oicamo_OCDAAA_F;
    weapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
    linkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Soldier_AAT_F: O_T_Soldier_AAT_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Soldier_AAT_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    backpack = B_Carryall_oicamo_OCDAAT_F;
    weapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
    linkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Soldier_AR_F: O_T_Soldier_AR_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Soldier_AR_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    weapons[] =
	{
		Aegis_arifle_CTARS_tan_ARCO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTARS_tan_ARCO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
    linkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Medic_F: O_T_Medic_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Medic_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    backpack = B_FieldPack_oicamo_Medic_F;
    weapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
    linkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Crew_F: O_T_Crew_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Crew_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    weapons[] =
	{
		Aegis_arifle_CTAR_tan_f,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTAR_tan_f,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
    linkedItems[] =
	{
		V_BandollierB_cbr,
		H_HelmetCrew_O,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_BandollierB_cbr,
		H_HelmetCrew_O,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Engineer_F: O_T_Engineer_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Engineer_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    backpack = B_carryall_oicamo_Eng_F;
    weapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
    linkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Soldier_Exp_F: O_T_Soldier_Exp_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Soldier_Exp_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    backpack = B_carryall_oicamo_Exp_F;
    weapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
    linkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Soldier_GL_F: O_T_Soldier_GL_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Soldier_GL_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    weapons[] =
	{
		Aegis_arifle_CTAR_GL_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTAR_GL_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
    linkedItems[] =
	{
		V_HarnessOGL_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessOGL_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Support_GMG_F: O_T_Support_GMG_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Support_GMG_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    weapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
    linkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Support_MG_F: O_T_Support_MG_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Support_MG_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    weapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
    linkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Support_Mort_F: O_T_Support_Mort_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Support_Mort_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    weapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
    linkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Helicrew_F: O_T_helicrew_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Helicrew_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_PilotCoveralls;
    weapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
    linkedItems[] =
    {
        H_CrewHelmetHeli_O,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        H_CrewHelmetHeli_O,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class Aegis_O_C_D_Helipilot_F: O_T_helipilot_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Helipilot_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_PilotCoveralls;
    linkedItems[] =
    {
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class Aegis_O_C_D_Soldier_M_F: O_T_Soldier_M_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Soldier_M_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    linkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Soldier_AA_F: O_T_Soldier_AA_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Soldier_AA_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    backpack = B_FieldPack_oicamo_AA_F;
    weapons[] =
    {
        Aegis_arifle_CTAR_tan_ACO_Pointer_F,
        launch_O_Titan_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_arifle_CTAR_tan_ACO_Pointer_F,
        launch_O_Titan_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    linkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Soldier_AT_F: O_T_Soldier_AT_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Soldier_AT_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    backpack = B_FieldPack_oicamo_AT_F;
    weapons[] =
    {
        Aegis_arifle_CTAR_tan_ACO_Pointer_F,
        launch_O_Titan_short_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_arifle_CTAR_tan_ACO_Pointer_F,
        launch_O_Titan_short_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    linkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Officer_F: O_T_Officer_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_OFficer_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_OfficerUniform_oicamo;
    weapons[] =
	{
		Aegis_arifle_CTAR_tan_F,
	    hgun_Pistol_Heavy_02_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTAR_tan_F,
	    hgun_Pistol_Heavy_02_F,
		DefaultManWeapons
	};
	linkedItems[] =
    {
        V_Rangemaster_belt_cbr,
        H_Beret_CSAT_01_F,
        ItemGPS,
        DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_Rangemaster_belt_cbr,
        H_Beret_CSAT_01_F,
        ItemGPS,
        DefaultManLinkedItems
    };
};
class Aegis_O_C_D_Soldier_PG_F: O_T_Soldier_PG_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Soldier_PG_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    weapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
    linkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Pilot_F: O_T_Pilot_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Pilot_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_Pilot_Coveralls;
    linkedItems[] =
    {
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class Aegis_O_C_D_Soldier_Repair_F: O_T_Soldier_Repair_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Soldier_Repair_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    backpack = B_FieldPack_oicamo_RepSpec_F;
    weapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
    linkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Soldier_F: O_T_Soldier_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Soldier_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    weapons[] =
	{
		Aegis_arifle_CTAR_tan_ARCO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTAR_tan_ARCO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
    linkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Soldier_LAT_F: O_T_Soldier_LAT_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Soldier_LAT_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    backpack = B_FieldPack_oicamo_LAT_F;
    weapons[] =
    {
        Aegis_arifle_CTAR_tan_ACO_Pointer_F,
        launch_RPG32_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_arifle_CTAR_tan_ACO_Pointer_F,
        launch_RPG32_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    linkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Soldier_SL_F: O_T_Soldier_SL_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Soldier_SL_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    weapons[] =
	{
		Aegis_arifle_CTAR_tan_ARCO_Pointer_F,
	    hgun_Rook40_F,
        Binocular,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTAR_tan_ARCO_Pointer_F,
	    hgun_Rook40_F,
        Binocular,
		DefaultManWeapons
	};
    linkedItems[] =
	{
		V_TacVest_brn,
		H_HelmetLeaderO_oicamo,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_brn,
		H_HelmetLeaderO_oicamo,
        DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Soldier_TL_F: O_T_Soldier_TL_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Soldier_TL_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    weapons[] =
	{
		Aegis_arifle_CTAR_GL_tan_ARCO_Pointer_F,
	    hgun_Rook40_F,
        Binocular,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTAR_GL_tan_ARCO_Pointer_F,
	    hgun_Rook40_F,
        Binocular,
		DefaultManWeapons
	};
    linkedItems[] =
	{
		V_HarnessOGL_oicamo,
		H_HelmetO_oicamo,
		DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessOGL_oicamo,
		H_HelmetO_oicamo,
		DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Soldier_UAV_F: O_T_Soldier_UAV_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Soldier_UAV_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    weapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
    linkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Soldier_HAT_F: O_T_Soldier_HAT_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Soldier_HAT_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    backpack = B_FieldPack_oicamo_HAT_F;
    weapons[] =
    {
        Aegis_arifle_CTAR_tan_ACO_Pointer_F,
        launch_O_Vorona_brown_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_arifle_CTAR_tan_ACO_Pointer_F,
        launch_O_Vorona_brown_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    linkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Soldier_AHAT_F: O_T_Soldier_AHAT_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Soldier_AHAT_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    backpack = B_Carryall_oicamo_OCDAHAT_F;
    weapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
    linkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Soldier_Lite_F: O_T_Soldier_Lite_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Soldier_Lite_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    weapons[] =
	{
		Aegis_arifle_CTAR_tan_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTAR_tan_F,
		DefaultManWeapons
	};
    linkedItems[] =
	{
		V_BandollierB_cbr,
        H_MilCap_oicamo,
        DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_BandollierB_cbr,
        H_MilCap_oicamo,
        DefaultManLinkedItems
	};
};
class Aegis_O_C_D_Soldier_CQ_F: O_T_Soldier_CQ_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Soldier_CQ_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    weapons[] =
    {
        Aegis_sgun_AA40_tan_ACO_LP_LxWS,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_sgun_AA40_tan_ACO_LP_LxWS,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_3(8Rnd_12Gauge_AA40_Pellets_tan_lxWS),
        mag_3(8Rnd_12Gauge_AA40_Slug_tan_lxWS),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_3(8Rnd_12Gauge_AA40_Pellets_tan_lxWS),
        mag_3(8Rnd_12Gauge_AA40_Slug_tan_lxWS),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade_East),
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        V_TacVest_brn,
        H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_brn,
        H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
    };
};
class Aegis_O_C_D_HeavyGunner_F: O_T_HeavyGunner_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_HeavyGunner_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    weapons[] =
    {
        Aegis_MMG_01_tan_ARCO_LP_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_MMG_01_tan_ARCO_LP_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    linkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Fighter_Pilot_F: O_T_Fighter_Pilot_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Fighter_Pilot_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_Pilot_F;
};
class Aegis_O_C_D_Soldier_CBRN_F: O_T_Soldier_CBRN_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Soldier_CBRN_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    weapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
    linkedItems[] =
    {
        V_TacVest_brn,
        H_HelmetO_oicamo,
        G_AirPurifyingRespirator_02_sand_F,
		DefaultManCbrnLinkedItems,
		O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_brn,
        H_HelmetO_oicamo,
        G_AirPurifyingRespirator_02_sand_F,
		DefaultManCbrnLinkedItems,
		O_NVGoggles_hex_F
    };
};
class Aegis_O_C_D_RadioOperator_F: O_T_RadioOperator_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_RadioOperator_F.jpg";
    faction = OPF_CD_F;
    backpack = B_RadioBag_01_oicamo_F;
    uniformClass = U_O_CombatUniform_oicamo;
    weapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
    linkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Soldier_UGV_02_Demining_F: Aegis_O_C_D_Soldier_UAV_F
{
    author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_soldier_UGV_02_Demining_F.jpg";
	displayName = $STR_A3_C_B_soldier_UGV_02_Demining_F0;
	backpack = O_UGV_02_Demining_backpack_F;
};
class O_T_Soldier_UAV_06_F;
class Aegis_O_C_D_Soldier_UAV_06_F: O_T_Soldier_UAV_06_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Soldier_UAV_06_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    weapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
    linkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_T_Soldier_UAV_06_medical_F;
class Aegis_O_C_D_Soldier_UAV_06_medical_F: O_T_Soldier_UAV_06_medical_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Soldier_UAV_06_medical_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    weapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
    linkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_T_Soldier_unarmed_F;
class Aegis_O_C_D_Soldier_unarmed_F: O_T_Soldier_unarmed_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Soldier_Unarmed_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    linkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Sharpshooter_F: O_T_Sharpshooter_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Sharpshooter_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    linkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetO_oicamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Recon_Exp_F: O_T_Recon_Exp_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Recon_Exp_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    backpack = B_carryall_oicamo_Exp_F;
    weapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_Snds_F,
	    hgun_Rook40_snds_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_Snds_F,
	    hgun_Rook40_snds_F,
		DefaultManWeapons
	};
    linkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetSpecO_oicamo,
		DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetSpecO_oicamo,
		DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Recon_JTAC_F: O_T_Recon_JTAC_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Recon_JTAC_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    backpack = B_RadioBag_01_oicamo_F;
    weapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_Snds_F,
	    hgun_Rook40_snds_F,
        Laserdesignator_02,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_Snds_F,
	    hgun_Rook40_snds_F,
        laserdesignator_02,
		DefaultManWeapons
	};
    linkedItems[] =
	{
		V_HarnessOGL_oicamo,
		H_HelmetSpecO_oicamo,
		DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessOGL_oicamo,
		H_HelmetSpecO_oicamo,
		DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Recon_M_F: O_T_Recon_M_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Recon_M_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    linkedItems[] =
	{
		V_TacVest_brn,
		H_HelmetSpecO_oicamo,
		DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_brn,
		H_HelmetSpecO_oicamo,
		DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Recon_Medic_F: O_T_Recon_Medic_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Recon_Medic_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    backpack = B_FieldPack_oicamo_Medic_F;
    weapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_Snds_F,
	    hgun_Rook40_snds_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTAR_tan_ACO_Pointer_Snds_F,
	    hgun_Rook40_snds_F,
		DefaultManWeapons
	};
    linkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetSpecO_oicamo,
		DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetSpecO_oicamo,
		DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Recon_F: O_T_Recon_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Recon_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    weapons[] =
	{
		Aegis_arifle_CTAR_tan_ARCO_Pointer_Snds_F,
	    hgun_Rook40_snds_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTAR_tan_ARCO_Pointer_Snds_F,
	    hgun_Rook40_snds_F,
		DefaultManWeapons
	};
    linkedItems[] =
	{
		V_HarnessOSpec_oicamo,
		H_HelmetSpecO_oicamo,
		DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessOSpec_oicamo,
		H_HelmetSpecO_oicamo,
		DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Recon_LAT_F: O_T_Recon_LAT_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Recon_LAT_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    backpack = B_FieldPack_oicamo_LAT_F;
    weapons[] =
    {
        Aegis_arifle_CTAR_tan_ACO_Pointer_Snds_F,
        launch_RPG32_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_arifle_CTAR_tan_ACO_Pointer_Snds_F,
        launch_RPG32_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    linkedItems[] =
	{
		V_TacVest_brn,
		H_HelmetSpecO_oicamo,
		DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_brn,
		H_HelmetSpecO_oicamo,
		DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Recon_TL_F: O_T_Recon_TL_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Recon_TL_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    weapons[] =
	{
		Aegis_arifle_CTAR_tan_ARCO_Pointer_Snds_F,
	    hgun_Rook40_snds_F,
        Rangefinder,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTAR_tan_ARCO_Pointer_Snds_F,
	    hgun_Rook40_snds_F,
        Rangefinder,
		DefaultManWeapons
	};
    linkedItems[] =
	{
		V_HarnessOSpec_oicamo,
		H_HelmetLeaderO_oicamo,
		DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessOSpec_oicamo,
		H_HelmetLeaderO_oicamo,
		DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Sniper_F: O_sniper_F
{
    Author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Sniper_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_C_D_Sniper_oicamo_F;
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_oicamo_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\tech_oicamo_CO.paa",
        "\A3\characters_f\Common\Data\ghillie_desert_CO.paa"
    };
    weapons[]=
	{
		srifle_GM6_LRPS_F,
		hgun_Rook40_snds_F,
		DefaultManWeapons,
		Rangefinder
		};
	respawnWeapons[]=
	{
		srifle_GM6_LRPS_F,
		hgun_Rook40_snds_F,
		DefaultManWeapons,
		Rangefinder
	};
    magazines[] =
    {
        mag_4(5Rnd_127x108_Mag),
        mag_2(5Rnd_127x108_APDS_Mag),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_4(5Rnd_127x108_Mag),
        mag_2(5Rnd_127x108_APDS_Mag),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    linkedItems[] =
    {
        V_TacChestrig_cbr_F,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_TacChestrig_cbr_F,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class Aegis_O_C_D_Spotter_F: O_spotter_F
{
    Author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Spotter_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_C_D_Sniper_oicamo_F;
    identityTypes[] =
    {
        LanguageCHI_F,
        Head_Asian,
        G_IRAN_default
    };
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_oicamo_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\tech_oicamo_CO.paa",
        "\A3\characters_f\Common\Data\ghillie_desert_CO.paa"
    };
    weapons[] =
    {
        Aegis_arifle_CTAR_tan_ARCO_Pointer_Snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    respawnWeapons[] =
    {
        Aegis_arifle_CTAR_tan_ARCO_Pointer_Snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    linkedItems[] =
    {
        V_TacChestrig_cbr_F,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_TacChestrig_cbr_F,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class Aegis_O_C_D_Recon_CQ_F: O_T_Recon_CQ_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Recon_CQ_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    weapons[] =
    {
        Aegis_sgun_AA40_tan_ACO_LP_snds_LxWS,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        Aegis_sgun_AA40_tan_ACO_LP_snds_LxWS,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_3(8Rnd_12Gauge_AA40_Pellets_tan_lxWS),
        mag_3(8Rnd_12Gauge_AA40_Slug_tan_lxWS),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_3(8Rnd_12Gauge_AA40_Pellets_tan_lxWS),
        mag_3(8Rnd_12Gauge_AA40_Slug_tan_lxWS),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell)
    };
    linkedItems[] =
	{
		V_TacVest_brn,
		H_HelmetSpecO_oicamo,
		DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_brn,
		H_HelmetSpecO_oicamo,
		DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Recon_AR_F: O_T_Recon_AR_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Recon_AR_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    weapons[] =
	{
		Aegis_arifle_CTARS_tan_ARCO_Pointer_Snds_F,
	    hgun_Rook40_snds_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTARS_tan_ARCO_Pointer_Snds_F,
	    hgun_Rook40_snds_F,
		DefaultManWeapons
	};
    linkedItems[] =
	{
		V_HarnessOSpec_oicamo,
		H_HelmetSpecO_oicamo,
		DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessOSpec_oicamo,
		H_HelmetSpecO_oicamo,
		DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Recon_GL_F: O_T_Recon_GL_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Recon_GL_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    weapons[] =
	{
		Aegis_arifle_CTAR_GL_tan_ARCO_Pointer_Snds_F,
	    hgun_Rook40_snds_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		Aegis_arifle_CTAR_GL_tan_ARCO_Pointer_Snds_F,
	    hgun_Rook40_snds_F,
		DefaultManWeapons
	};
    linkedItems[] =
	{
		V_HarnessOGL_oicamo,
		H_HelmetSpecO_oicamo,
		DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessOGL_oicamo,
		H_HelmetSpecO_oicamo,
		DefaultManLeaderLinkedItems,
		O_NVGoggles_hex_F
	};
};
class Aegis_O_C_D_Pathfinder_F: O_T_Pathfinder_F
{
    Author = $STR_A3_A_Ravenholme;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_O_C_D_Pathfinder_F.jpg";
    faction = OPF_CD_F;
    uniformClass = U_O_CombatUniform_oicamo;
    linkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetSpecO_oicamo,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_oicamo,
		H_HelmetSpecO_oicamo,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};