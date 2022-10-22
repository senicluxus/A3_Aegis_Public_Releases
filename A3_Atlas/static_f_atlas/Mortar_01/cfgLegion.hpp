class Atlas_B_L_Mortar_01_F: B_Mortar_01_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
			{mainturret,0},
			{maingun,0},
			{optics,0},
			{optics_stabilization,0},
			{legs_zeroing,0},
			{uplegs_zeroing,0}
		};
		hide[] =
		{
			light_back,
			"brzdove svetlo",
			clan,
			"podsvit pristroju",
			poskozeni
		};
		verticalOffset = 0.759;
		verticalOffsetWorld = 0.037;
		init = "''";
	};
	editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Mortar_01_F.jpg";
	faction = Atlas_BLU_L_F;
	crew = Atlas_B_L_Soldier_F;
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] =
		{
			B_Mortar_01_Weapon_grn_F,
			B_Mortar_01_support_grn_F
		};
	};
};