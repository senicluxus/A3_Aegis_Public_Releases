/* US */
class B_UGV_02_Science_F;

/* US (Pacific) */
class B_T_UGV_02_Demining_F: UGV_02_Demining_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_UGV_02_Demining_F.jpg";
	scope = public;
	displayName = $STR_A3_C_CfgVehicles_I_UGV_02_Demining_F0;
	side = TWest;
	faction = BLU_T_F;
	crew = B_UAV_AI;
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {B_UGV_02_Demining_backpack_F};
	};
};

/* US (Woodland) */
class B_W_UGV_02_Demining_F: UGV_02_Demining_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_UGV_02_Demining_F.jpg";
	scope = public;
	displayName = $STR_A3_C_CfgVehicles_I_UGV_02_Demining_F0;
	side = TWest;
	faction = BLU_W_F;
	crew = B_UAV_AI;
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {B_UGV_02_Demining_backpack_F};
	};
};

/* US (Desert) */
class Aegis_B_D_UGV_02_Demining_F: UGV_02_Demining_Base_F
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_UGV_02_Demining_F.jpg";
	scope = public;
	displayName = $STR_A3_C_CfgVehicles_I_UGV_02_Demining_F0;
	side = TWest;
	faction = BLU_NATO_lxWS;
	crew = B_UAV_AI;
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {B_UGV_02_Demining_backpack_F};
	};
};

/* BAF */
class B_A_UGV_02_Demining_F: UGV_02_Demining_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UGV_02_Demining_F.jpg";
	scope = public;
	displayName = $STR_A3_C_CfgVehicles_I_UGV_02_Demining_F0;
	side = TWest;
	faction = BLU_A_F;
	crew = B_UAV_AI;
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {B_UGV_02_Demining_backpack_F};
	};
};

/* BAF (Pacific) */
class B_A_UGV_02_Demining_tna_F: B_A_UGV_02_Demining_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UGV_02_Demining_tna_F.jpg";
	faction = BLU_A_tna_F;
};

/* BAF (Woodland) */
class B_A_UGV_02_Demining_wdl_F: B_A_UGV_02_Demining_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UGV_02_Demining_wdl_F.jpg";
	faction = BLU_A_wdl_F;
};