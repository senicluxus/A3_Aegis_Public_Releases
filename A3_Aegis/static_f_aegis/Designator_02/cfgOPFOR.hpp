/* IAF */
class O_Static_Designator_02_F: Static_Designator_02_base_F
{
    displayName = $STR_A3_CfgVehicles_Static_Designator_01_base_F1;
};
class O_Static_Designator_02_weapon_F: Weapon_Bag_Base
{
    hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_compact_ocamo_CO.paa"};
    class assembleInfo;
};

/* China */
class O_T_Static_Designator_02_F: O_Static_Designator_02_F
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
            {mainelevation_05,0},
            {initturret,0},
            {initgun,0},
            {initelevation_01,0},
            {initelevation_02,0},
            {initelevation_03,0},
            {initelevation_04,0},
            {initelevation_05,0}
		};
		hide[] =
		{
            light_back,
            "brzdove svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 0.473;
		verticalOffsetWorld = -0.001;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Static_Designator_02_F.jpg";
	scope = public;
	side = TEast;
	faction = OPF_T_F;
	crew = O_UAV_AI;
	hiddenSelections[] =
	{
		camo,
		camo1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Static_F_Aegis\Designator_02\Data\LD02_remote_ghex_CO.paa",
		"\A3\Weapons_F_Exp\Binocular\Data\Laserdesignator_02_ghex_F_CO.paa"
	};
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] = {O_T_Static_Designator_02_weapon_F};
	};
};
class O_T_Static_Designator_02_weapon_F: O_Static_Designator_02_weapon_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_T_Static_Designator_02_weapon_F0;
	faction = OPF_T_F;
	picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_AssaultPack_ghex_F_CA.paa";
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\B_AssaultPack_ghex_F_CO.paa"};
	class assembleInfo: assembleInfo
	{
		assembleTo = O_T_Static_Designator_02_F;
	};
};