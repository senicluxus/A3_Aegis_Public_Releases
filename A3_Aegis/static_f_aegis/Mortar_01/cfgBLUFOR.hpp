/* US */
class B_Mortar_01_F;

/* US (Pacific) */
class B_Mortar_01_support_grn_F: I_Mortar_01_support_F
{
    scope = public;
    hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_rgr_CO.paa"};
    picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_rgr_CA.paa";
};
class B_Mortar_01_Weapon_grn_F: I_Mortar_01_weapon_F
{
    scope = public;
    hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_rgr_CO.paa"};
    picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_rgr_CA.paa";
    class assembleInfo: assembleInfo
    {
        assembleTo = B_T_Mortar_01_F;
    };
};

/* US (Woodland) */
class B_W_Mortar_01_F: B_Mortar_01_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Mortar_01_F.jpg";
	faction = BLU_W_F;
	crew = B_W_Soldier_F;
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

/* BAF */
class B_A_Mortar_01_F: B_Mortar_01_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Mortar_01_F.jpg";
	faction = BLU_A_F;
	crew = B_A_Soldier_F;
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] =
		{
            B_Mortar_01_weapon_F,
            B_Mortar_01_support_F
		};
	};
};

/* BAF (Pacific) */
class B_A_Mortar_01_tna_F: B_A_Mortar_01_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Mortar_01_tna_F.jpg";
	faction = BLU_A_tna_F;
	crew = B_A_Soldier_tna_F;
	class assembleInfo: assembleInfo
	{
		dissasembleTo[] =
		{
            B_Mortar_01_Weapon_grn_F,
            B_Mortar_01_support_grn_F
		};
	};
};

/* BAF (Woodland) */
class B_A_Mortar_01_wdl_F: B_A_Mortar_01_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Mortar_01_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	crew = B_A_Soldier_wdl_F;
	class assembleInfo: assembleInfo
	{
		dissasembleTo[] =
		{
            B_Mortar_01_Weapon_grn_F,
            B_Mortar_01_support_grn_F
		};
	};
};