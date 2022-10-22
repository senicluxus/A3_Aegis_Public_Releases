/* Independent */
class Opf_I_I_HMG_02_F: HMG_02_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_T_HMG_02_F.jpg";
	scope = public;
	side = TGuerrila;
	faction = Opf_IND_I_F;
	crew = Opf_I_I_Soldier_1_F;
	class assembleInfo
	{
		primary = 0;
		base = "";
		assembleTo = "";
		dissasembleTo[] =
		{
			I_G_HMG_02_weapon_F,
			I_G_HMG_02_support_F
		};
		displayName = "";
	};

    /* Turrets */
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
            /* Weapons & Ammunition */
			magazines[] = {mag_4(100Rnd_127x99_mag_Tracer_Yellow)};
		};
	};

    /* Animation Sources */
	class AnimationSources: AnimationSources
	{
		class Hide_Shield: Hide_Shield
		{
			initPhase = true;
		};
		class Hide_Rail: Hide_Rail
		{
			initPhase = true;
		};
	};
};
class Opf_I_I_HMG_02_high_F: HMG_02_high_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_T_HMG_02_high_F.jpg";
	scope = public;
	side = TGuerrila;
	faction = Opf_IND_I_F;
	crew = Opf_I_I_Soldier_1_F;
	class assembleInfo
	{
		primary = 0;
		base = "";
		assembleTo = "";
		dissasembleTo[] =
		{
			I_G_HMG_02_high_weapon_F,
			I_G_HMG_02_support_high_F
		};
		displayName = "";
	};

    /* Turrets */
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
            /* Weapons & Ammunition */
			magazines[] = {mag_4(100Rnd_127x99_mag_Tracer_Yellow)};
		};
	};

    /* Animation Sources */
	class AnimationSources: AnimationSources
	{
		class Hide_Shield: Hide_Shield
		{
			initPhase = true;
		};
		class Hide_Rail: Hide_Rail
		{
			initPhase = true;
		};
	};
};
