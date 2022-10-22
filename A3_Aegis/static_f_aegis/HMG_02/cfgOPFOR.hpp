/* IAF */
class O_HMG_02_F: HMG_02_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_HMG_02_F.jpg";
    scope = public;
};
class O_HMG_02_high_F: HMG_02_high_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_HMG_02_high_F.jpg";
    scope = public;
};
class O_HMG_02_support_F: B_HMG_02_support_F
{
    scope = public;
};
class O_HMG_02_support_high_F: B_HMG_02_support_high_F
{
    scope = public;
};
class O_HMG_02_weapon_F: B_HMG_02_weapon_F
{
    scope = public;
};
class O_HMG_02_high_weapon_F: B_HMG_02_high_weapon_F
{
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_O_HMG_02_high_weapon_F0;
};

/* Argana */
class O_A_HMG_02_F: HMG_02_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_HMG_02_F.jpg";
	scope = public;
	side = TEast;
	faction = OPF_A_F;
	crew = O_A_soldier_F;
	class assembleInfo
	{
		primary = 0;
		base = "";
		assembleTo = "";
		dissasembleTo[] =
		{
            O_HMG_02_weapon_F,
            O_HMG_02_support_F
		};
		displayName = "";
	};

    /* Turrets */
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
            /* Weapons & Ammunition */
		    magazines[] = {mag_4(100Rnd_127x99_mag_Tracer_Green)};
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
class O_A_HMG_02_high_F: HMG_02_high_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_A_HMG_02_high_F.jpg";
	scope = public;
	side = TEast;
	faction = OPF_A_F;
	crew = O_A_soldier_F;
	class assembleInfo
	{
		primary = 0;
		base = "";
		assembleTo = "";
		dissasembleTo[] =
		{
            O_HMG_02_high_weapon_F,
            O_HMG_02_support_high_F
		};
		displayName = "";
	};

    /* Turrets */
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
            /* Weapons & Ammunition */
		    magazines[] = {mag_4(100Rnd_127x99_mag_Tracer_Green)};
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