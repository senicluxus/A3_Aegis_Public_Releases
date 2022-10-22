/* IAF */
class O_Mortar_01_F;
class O_Mortar_01_weapon_F: B_Mortar_01_weapon_F{};

/* China */
class O_T_Mortar_01_F: O_Mortar_01_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Mortar_01_F.jpg";
	faction = OPF_T_F;
	crew = O_T_Soldier_F;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Static_F_Aegis\Mortar_01\Data\Mortar_01_ghex_CO.paa"};
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] =
		{
			O_T_Mortar_01_weapon_F,
			O_Mortar_01_support_F
		};
	};
};
class O_T_Mortar_01_weapon_F: O_Mortar_01_weapon_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	scopeCurator = private;
	faction = OPF_T_F;
	class assembleInfo: assembleInfo
	{
		assembleTo = O_T_Mortar_01_F;
	};
};

/* Argana */
class O_A_Mortar_01_F: O_Mortar_01_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_Mortar_01_F.jpg";
	faction = OPF_A_F;
	crew = O_A_soldier_F;
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