/* US */
class B_HMG_02_F: HMG_02_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_HMG_02_F.jpg";
    scope = public;
};
class B_HMG_02_high_F: HMG_02_high_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_HMG_02_high_F.jpg";
    scope = public;
};
class B_HMG_02_support_F: Bag_Base
{
    scope = public;
    hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_mcamo_CO.paa"};
};
class B_HMG_02_support_high_F: B_HMG_02_support_F
{
    scope = public;
    hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_mcamo_CO.paa"};
};
class B_HMG_02_weapon_F: Weapon_Bag_Base
{
    scope = public;
    hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_mcamo_CO.paa"};
    class assembleInfo: assembleInfo
    {
        base[] = {SUPPORT_BAGS_HMG_02};
		assembleTo = B_HMG_02_F;
    };
};
class B_HMG_02_high_weapon_F: Weapon_Bag_Base
{
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_B_HMG_02_high_weapon_F0;
    hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_mcamo_CO.paa"};
    class assembleInfo: assembleInfo
    {
        base[] = {SUPPORT_BAGS_HMG_02_HIGH};
		assembleTo = B_HMG_02_high_F;
    };
};

/* US (Pacific) */
class B_T_HMG_02_F: HMG_02_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_HMG_02_F.jpg";
	scope = public;
	side = TWest;
	faction = BLU_T_F;
	crew = B_T_Soldier_F;
	class assembleInfo
	{
		primary = 0;
		base = "";
		assembleTo = "";
		dissasembleTo[] =
		{
            B_HMG_02_Weapon_grn_F,
            B_HMG_02_support_grn_F
		};
		displayName = "";
	};

    /* Turrets */
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
            /* Weapons & Ammunition */
		    magazines[] = {mag_4(100Rnd_127x99_mag_Tracer_Red)};
		};
	};

    /* Animation Sources */
	class AnimationSources: AnimationSources
	{
		class Hide_Rail: Hide_Rail
		{
		    initPhase = false;
		};
	};
};
class B_T_HMG_02_high_F: HMG_02_high_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_HMG_02_high_F.jpg";
	scope = public;
	side = TWest;
	faction = BLU_T_F;
	crew = B_T_Soldier_F;
	class assembleInfo
	{
		primary = 0;
		base = "";
		assembleTo = "";
		dissasembleTo[] =
		{
            B_HMG_02_high_Weapon_grn_F,
            B_HMG_02_support_high_grn_F
		};
		displayName = "";
	};

    /* Turrets */
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
            /* Weapons & Ammunition */
		    magazines[] = {mag_4(100Rnd_127x99_mag_Tracer_Red)};
		};
	};

    /* Animation Sources */
	class AnimationSources: AnimationSources
	{
		class Hide_Rail: Hide_Rail
		{
		    initPhase = false;
		};
	};
};
class B_HMG_02_support_grn_F: B_HMG_02_support_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_B_HMG_02_support_grn_F0;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_rgr_CO.paa"};
	picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_rgr_CA.paa";
	faction = BLU_T_F;
};
class B_HMG_02_support_high_grn_F: B_HMG_02_support_high_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_B_HMG_02_support_high_grn_F0;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_rgr_CO.paa"};
	picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_rgr_CA.paa";
	faction = BLU_T_F;
};
class B_HMG_02_Weapon_grn_F: B_HMG_02_weapon_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_B_HMG_02_Weapon_grn_F0;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_rgr_CO.paa"};
	picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_rgr_CA.paa";
	faction = BLU_T_F;
	class assembleInfo: assembleInfo
    {
		assembleTo = B_T_HMG_02_F;
	};
};
class B_HMG_02_high_Weapon_grn_F: B_HMG_02_high_weapon_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_B_HMG_02_high_Weapon_grn_F0;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_rgr_CO.paa"};
	picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_rgr_CA.paa";
	faction = BLU_T_F;
	class assembleInfo: assembleInfo
	{
		assembleTo = B_T_HMG_02_high_F;
	};
};

/* US (Woodland) */
class B_W_HMG_02_F: HMG_02_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_HMG_02_F.jpg";
	scope = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Soldier_F;
	class assembleInfo
	{
		primary = 0;
		base = "";
		assembleTo = "";
		dissasembleTo[] =
		{
            B_HMG_02_Weapon_grn_F,
            B_HMG_02_support_grn_F
		};
		displayName = "";
	};

    /* Turrets */
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
            /* Weapons & Ammunition */
		    magazines[] = {mag_4(100Rnd_127x99_mag_Tracer_Red)};
		};
	};

    /* Animation Sources */
	class AnimationSources: AnimationSources
	{
		class Hide_Rail: Hide_Rail
		{
		    initPhase = false;
		};
	};
};
class B_W_HMG_02_high_F: HMG_02_high_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_HMG_02_high_F.jpg";
	scope = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Soldier_F;
	class assembleInfo
	{
		primary = 0;
		base = "";
		assembleTo = "";
		dissasembleTo[] =
		{
            B_HMG_02_high_Weapon_grn_F,
            B_HMG_02_support_high_grn_F
		};
		displayName = "";
	};

    /* Turrets */
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
            /* Weapons & Ammunition */
		    magazines[] = {mag_4(100Rnd_127x99_mag_Tracer_Red)};
		};
	};

    /* Animation Sources */
	class AnimationSources: AnimationSources
	{
		class Hide_Rail: Hide_Rail
		{
		    initPhase = false;
		};
	};
};

/* BAF */
class B_A_HMG_02_F: HMG_02_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_HMG_02_F.jpg";
	scope = public;
	side = TWest;
	faction = BLU_A_F;
	crew = B_A_Soldier_F;
	class assembleInfo
	{
		primary = 0;
		base = "";
		assembleTo = "";
		dissasembleTo[] =
		{
            B_HMG_02_weapon_F,
            B_HMG_02_support_F
		};
		displayName = "";
	};

    /* Turrets */
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
            /* Weapons & Ammunition */
		    magazines[] = {mag_4(100Rnd_127x99_mag_Tracer_Red)};
		};
	};

    /* Animation Sources */
	class AnimationSources: AnimationSources
	{
		class Hide_Rail: Hide_Rail
		{
		    initPhase = false;
		};
	};
};
class B_A_HMG_02_high_F: HMG_02_high_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_HMG_02_high_F.jpg";
	scope = public;
	side = TWest;
	faction = BLU_A_F;
	crew = B_A_Soldier_F;
	class assembleInfo
	{
		primary = 0;
		base = "";
		assembleTo = "";
		dissasembleTo[] =
		{
            B_HMG_02_high_weapon_F,
            B_HMG_02_support_high_F
		};
		displayName = "";
	};

    /* Turrets */
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
            /* Weapons & Ammunition */
		    magazines[] = {mag_4(100Rnd_127x99_mag_Tracer_Red)};
		};
	};

    /* Animation Sources */
	class AnimationSources: AnimationSources
	{
		class Hide_Rail: Hide_Rail
		{
		    initPhase = false;
		};
	};
};

/* BAF (Pacific) */
class B_A_HMG_02_tna_F: B_A_HMG_02_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_HMG_02_tna_F.jpg";
	faction = BLU_A_tna_F;
	crew = B_A_Soldier_tna_F;
	class assembleInfo: assembleInfo
	{
		dissasembleTo[] =
		{
            B_HMG_02_Weapon_grn_F,
            B_HMG_02_support_grn_F
		};
	};
};
class B_A_HMG_02_high_tna_F: B_A_HMG_02_high_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_HMG_02_high_tna_F.jpg";
	faction = BLU_A_tna_F;
	crew = B_A_Soldier_tna_F;
	class assembleInfo: assembleInfo
	{
		dissasembleTo[] =
		{
            B_HMG_02_Weapon_grn_F,
            B_HMG_02_support_grn_F
		};
	};
};

/* BAF (Woodland) */
class B_A_HMG_02_wdl_F: B_A_HMG_02_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_HMG_02_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	crew = B_A_Soldier_wdl_F;
	class assembleInfo: assembleInfo
	{
		dissasembleTo[] =
		{
            B_HMG_02_Weapon_grn_F,
            B_HMG_02_support_grn_F
		};
	};
};
class B_A_HMG_02_high_wdl_F: B_A_HMG_02_high_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_HMG_02_high_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	crew = B_A_Soldier_wdl_F;
	class assembleInfo: assembleInfo
	{
		dissasembleTo[] =
		{
            B_HMG_02_Weapon_grn_F,
            B_HMG_02_support_grn_F
		};
	};
};