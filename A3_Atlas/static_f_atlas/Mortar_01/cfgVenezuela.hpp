class Atlas_O_VZ_Mortar_01_F: O_Mortar_01_F
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
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\O_W_Mortar_01_F.jpg";
	scope = protected;
	scopeCurator = protected;
	faction = Atlas_OPF_V_F;
	crew = Atlas_O_VZ_Soldier_F;
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] =
		{
            O_Mortar_01_weapon_F,
            O_Mortar_01_support_F
		};
	};
};