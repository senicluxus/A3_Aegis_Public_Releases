/* IAF */
class O_UGV_02_Science_F;
class O_UGV_02_Science_backpack_F;

/* China */
class O_T_UGV_02_Demining_F: UGV_02_Demining_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_UGV_02_Demining_F.jpg";
	scope = public;
	displayName = $STR_A3_C_CfgVehicles_O_UGV_02_Demining_F0;
	side = TEast;
	faction = OPF_T_F;
	crew = O_UAV_AI;
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {O_UGV_02_Demining_backpack_F};
	};
};