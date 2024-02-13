/* US */
class B_Static_Designator_01_F: Static_Designator_01_base_F
{
    displayName = $STR_A3_CfgVehicles_Static_Designator_01_base_F1;
};
class B_Static_Designator_01_weapon_F: Weapon_Bag_Base
{
    hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_compact_mcamo_CO.paa"};
    class assembleInfo;
};

/* US (Pacific) */
class B_T_Static_Designator_01_F: B_Static_Designator_01_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
            {mainturret,0},
            {maingun,0},
            {mainelevation_01,0},
            {mainelevation_02,0},
            {mainelevation_03,0},
            {mainelevation_04,0},
            {initturret,0},
            {initgun,0},
            {initelevation_01,0},
            {initelevation_02,0},
            {initelevation_03,0},
            {initelevation_04,0}
		};
		hide[] =
		{
            light_back,
            "brzdove svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 0.509;
		verticalOffsetWorld = 0.001;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Static_Designator_01_F.jpg";
	side = TWest;
	faction = BLU_T_F;
	crew = B_UAV_AI;
	hiddenSelections[] =
	{
		camo,
		camo1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Static_F_Enoch\Designator_01\Data\LD01_remote_khk_CO.paa",
		"\A3\Weapons_F_Exp\Binocular\Data\Laserdesignator_01_khk_F_CO.paa"
	};
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] = {B_T_Static_Designator_01_Weapon_F};
	};
};
class B_T_Static_Designator_01_Weapon_F: B_Static_Designator_01_weapon_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_B_T_Static_Designator_01_Weapon_F0;
	faction = BLU_T_F;
	picture = "\A3\Supplies_F_Exp\Bags\Data\UI\icon_B_AssaultPack_tna_F_CA.paa";
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\B_AssaultPack_tna_F_CO.paa"};
	class assembleInfo: assembleInfo
	{
		assembleTo = B_T_Static_Designator_01_F;
	};
};

/* US (Woodland) */
class B_W_Static_Designator_01_F: Static_Designator_01_base_F
{
    displayName = $STR_A3_CfgVehicles_Static_Designator_01_base_F1;
};
class B_W_Static_Designator_01_weapon_F: B_Static_Designator_01_weapon_F
{
    displayName = $STR_A3_A_CfgVehicles_B_W_Static_Designator_01_weapon_F0;
};

/* US (Desert) */
class Aegis_B_D_Static_Designator_01_F: B_Static_Designator_01_F
{
	author = $STR_A3_A_Ravenholme;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
            {mainturret,0},
            {maingun,0},
            {mainelevation_01,0},
            {mainelevation_02,0},
            {mainelevation_03,0},
            {mainelevation_04,0},
            {initturret,0},
            {initgun,0},
            {initelevation_01,0},
            {initelevation_02,0},
            {initelevation_03,0},
            {initelevation_04,0}
		};
		hide[] =
		{
            light_back,
            "brzdove svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 0.509;
		verticalOffsetWorld = 0.001;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Static_Designator_01_F.jpg";
	side = TWest;
	faction = BLU_NATO_LXWS;
	crew = B_UAV_AI;
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] = {B_Static_Designator_01_weapon_F};
	};
};

/* BAF */
class B_A_Static_Designator_01_F: B_Static_Designator_01_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
            {mainturret,0},
            {maingun,0},
            {mainelevation_01,0},
            {mainelevation_02,0},
            {mainelevation_03,0},
            {mainelevation_04,0},
            {initturret,0},
            {initgun,0},
            {initelevation_01,0},
            {initelevation_02,0},
            {initelevation_03,0},
            {initelevation_04,0}
		};
		hide[] =
		{
            light_back,
            "brzdove svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 0.509;
		verticalOffsetWorld = 0.001;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Static_Designator_01_F.jpg";
	side = TWest;
	faction = BLU_A_F;
	crew = B_UAV_AI;
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] = {B_Static_Designator_01_weapon_F};
	};
};

/* BAF (Pacific) */
class B_A_Static_Designator_01_tna_F: B_A_Static_Designator_01_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
            {mainturret,0},
            {maingun,0},
            {mainelevation_01,0},
            {mainelevation_02,0},
            {mainelevation_03,0},
            {mainelevation_04,0},
            {initturret,0},
            {initgun,0},
            {initelevation_01,0},
            {initelevation_02,0},
            {initelevation_03,0},
            {initelevation_04,0}
		};
		hide[] =
		{
            light_back,
            "brzdove svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 0.509;
		verticalOffsetWorld = 0.001;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Static_Designator_01_tna_F.jpg";
	faction = BLU_A_tna_F;
	hiddenSelections[] =
	{
		camo,
		camo1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Static_F_Enoch\Designator_01\Data\LD01_remote_khk_CO.paa",
		"\A3\Weapons_F_Exp\Binocular\Data\Laserdesignator_01_khk_F_CO.paa"
	};
	class assembleInfo: assembleInfo
	{
		dissasembleTo[] = {B_T_Static_Designator_01_Weapon_F};
	};
};

/* BAF (Woodland) */
class B_A_Static_Designator_01_wdl_F: B_A_Static_Designator_01_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
            {mainturret,0},
            {maingun,0},
            {mainelevation_01,0},
            {mainelevation_02,0},
            {mainelevation_03,0},
            {mainelevation_04,0},
            {initturret,0},
            {initgun,0},
            {initelevation_01,0},
            {initelevation_02,0},
            {initelevation_03,0},
            {initelevation_04,0}
		};
		hide[] =
		{
            light_back,
            "brzdove svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 0.509;
		verticalOffsetWorld = 0.001;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Static_Designator_01_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	hiddenSelections[] =
	{
		camo,
		camo1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Static_F_Enoch\Designator_01\Data\LD01_remote_khk_CO.paa",
		"\A3\Weapons_F_Exp\Binocular\Data\Laserdesignator_01_khk_F_CO.paa"
	};
	class assembleInfo: assembleInfo
	{
		dissasembleTo[] = {B_W_Static_Designator_01_weapon_F};
	};
};