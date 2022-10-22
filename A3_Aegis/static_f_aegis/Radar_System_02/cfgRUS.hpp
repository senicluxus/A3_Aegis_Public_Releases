/* Russia */
class O_R_Radar_System_02_F: Radar_System_02_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Radar_System_02_F.jpg";
	scope = public;
	scopeCurator = public;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Static_F_Aegis\Radar_System_02\Data\Radar_system_02_mat_01_RUkhk_CO.paa",
		"\A3_Aegis\Static_F_Aegis\Radar_System_02\Data\Radar_system_02_mat_02_RUkhk_CO.paa"
	};
	side = TEast;
	faction = OPF_R_F;
	crew = O_UAV_AI;
};

/* Russia (Mediterranean) */
class O_R_Radar_System_02_ard_F: O_R_Radar_System_02_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Radar_System_02_ard_F.jpg";
	faction = OPF_R_ard_F;
};