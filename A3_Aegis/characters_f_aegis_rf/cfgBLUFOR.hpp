/* US Base Classes */
class B_T_Support_AMort_F;
class B_W_Support_AMort_F;
class B_D_Support_AMort_lxWS;
class B_HeliPilot_F;
class B_Soldier_03_f;

/* US */
class B_Crew_F: B_Soldier_03_f
{
	editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\B_Crew_RF.jpg";
    linkedItems[] =
	{
		Aegis_V_PlateCarrier_RF_rgr,
		H_HelmetCrew_B,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier_RF_rgr,
		H_HelmetCrew_B,
		DefaultManLinkedItems,
		NVGoggles
	};
};

/* US (Pacific) */
class Aegis_B_T_support_CMort_RF: B_T_Support_AMort_F
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\Aegis_B_T_support_CMort_RF.jpg";
	displayName = $STR_LXRF_Soldier_Mortar;
	backpack = B_CommandoMortar_weapon_RF;
};
class B_T_Crew_F: B_crew_F
{
	editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\B_T_Crew_RF.jpg";
	linkedItems[] =
	{
		Aegis_V_PlateCarrier_RF_tna,
		H_HelmetCrew_B_oli_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier_RF_tna,
		H_HelmetCrew_B_oli_F,
		DefaultManLinkedItems,
		NVGoggles_tna_F
	};
};

/* US (Woodland) */
class Aegis_B_W_support_CMort_RF: B_W_Support_AMort_F
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\Aegis_B_W_support_CMort_RF.jpg";
	displayName = $STR_LXRF_Soldier_Mortar;
	backpack = B_CommandoMortar_weapon_RF;
};
class B_W_Crew_F: B_crew_F
{
	editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\B_W_Crew_RF.jpg";
	linkedItems[] =
	{
		Aegis_V_PlateCarrier_RF_wdl,
		H_HelmetCrew_B_oli_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier_RF_wdl,
		H_HelmetCrew_B_oli_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};

/* US (Desert) */
class Aegis_B_D_support_CMort_RF: B_D_Support_AMort_lxWS
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\Aegis_B_W_support_CMort_RF.jpg";
	displayName = $STR_LXRF_Soldier_Mortar;
	backpack = B_D_CTRG_CommandoMortar_weapon_RF;
};
class B_D_crew_lxWS: B_crew_F
{
	editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\B_D_crew_lxWS_RF.jpg";
	linkedItems[] =
	{
		Aegis_V_PlateCarrier_RF_desert,
		H_HelmetCrew_B,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		Aegis_V_PlateCarrier_RF_desert,
		H_HelmetCrew_B,
		DefaultManLinkedItems,
		NVGoggles
	};
};

/* BAF Base Classes */
class B_A_Support_AMort_F;
class B_A_Support_AMort_tna_F;
class B_A_Support_AMort_wdl_F;

/* BAF */
class Aegis_B_A_Support_CMort_RF: B_A_Support_AMort_F
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\Aegis_B_A_support_CMort_RF.jpg";
	displayName = $STR_LXRF_Soldier_Mortar;
	backpack = B_CommandoMortar_weapon_RF;
};
class B_A_HeliPilot_F: B_HeliPilot_F
{
	editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\B_A_HeliPilot_RF.jpg";
    linkedItems[] =
    {
		V_CarrierRigKBT_01_MTP_F,
        H_PilotHelmetHeli_MilGreen_RF,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
		V_CarrierRigKBT_01_MTP_F,
        H_PilotHelmetHeli_MilGreen_RF,
        DefaultManLinkedItems,
        NVGoggles
    };
};

/* BAF (Pacific) */
class Aegis_B_A_Support_CMort_tna_RF: B_A_Support_AMort_tna_F
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\Aegis_B_A_support_CMort_tna_RF.jpg";
	displayName = $STR_LXRF_Soldier_Mortar;
	backpack = B_CommandoMortar_weapon_RF;
};
class B_A_Helipilot_tna_F: B_A_Helipilot_F
{
	editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\B_A_HeliPilot_tna_RF.jpg";
    linkedItems[] =
    {
		V_CarrierRigKBT_01_Olive_F,
        H_PilotHelmetHeli_MilGreen_RF,
        DefaultManLinkedItems,
        NVGoggles_tna_F
    };
    respawnLinkedItems[] =
    {
		V_CarrierRigKBT_01_Olive_F,
        H_PilotHelmetHeli_MilGreen_RF,
        DefaultManLinkedItems,
        NVGoggles_tna_F
    };
};

/* BAF (Woodland) */
class Aegis_B_A_Support_CMort_wdl_RF: B_A_Support_AMort_wdl_F
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\Aegis_B_A_support_CMort_wdl_RF.jpg";
	displayName = $STR_LXRF_Soldier_Mortar;
	backpack = B_CommandoMortar_weapon_RF;
};
class B_A_Helipilot_wdl_F: B_A_Helipilot_F
{
	editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\B_A_HeliPilot_wdl_RF.jpg";
    linkedItems[] =
    {
		V_CarrierRigKBT_01_Olive_F,
        H_PilotHelmetHeli_MilGreen_RF,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
		V_CarrierRigKBT_01_Olive_F,
        H_PilotHelmetHeli_MilGreen_RF,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};