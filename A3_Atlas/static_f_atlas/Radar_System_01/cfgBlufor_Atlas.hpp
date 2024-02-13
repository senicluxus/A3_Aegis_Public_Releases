class Atlas_B_G_Radar_System_01_F: Radar_System_01_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Radar_System_01_F.jpg";
	scope = public;
	scopeCurator = public;
	hiddenSelectionsTextures[] =
	{
		"\A3\Static_F_Sams\Radar_System_01\Data\Radar_system_01_mat_01_olive_CO.paa",
		"\A3\Static_F_Sams\Radar_System_01\Data\Radar_system_01_mat_02_olive_CO.paa"
	};
	side = TWest;
	faction = Atlas_BLU_G_F;
	crew = B_UAV_AI;
};

/* Bundeswehr Arid */
class Atlas_B_G_Radar_System_01_ard_F: Atlas_B_G_Radar_System_01_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Radar_System_01_F.jpg";
	hiddenSelectionsTextures[] =
	{
		"\A3\Static_F_Sams\Radar_System_01\Data\Radar_system_01_mat_01_CO.paa",
		"\A3\Static_F_Sams\Radar_System_01\Data\Radar_system_01_mat_02_CO.paa"
	};
	side = TWest;
	faction = Atlas_BLU_G_ard_F;
	crew = B_UAV_AI;
};