class Atlas_O_T_HMG_02_F: HMG_02_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\_O_T_HMG_02_F.jpg";
	scope = public;
	side = TEast;
	faction = Atlas_OPF_T_F;
	crew = Atlas_O_T_soldier_F;
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
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
		    magazines[] = {mag_4(100Rnd_127x99_mag_Tracer_Green)};
		};
	};
	class AnimationSources: AnimationSources
	{
		class Hide_Rail: Hide_Rail
		{
		    initPhase = false;
		};
	};
};
class Atlas_O_T_HMG_02_high_F: HMG_02_high_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\_O_T_HMG_02_high_F.jpg";
	scope = public;
	side = TEast;
	faction = Atlas_OPF_T_F;
	crew = Atlas_O_T_soldier_F;
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
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
		    magazines[] = {mag_4(100Rnd_127x99_mag_Tracer_Green)};
		};
	};
	class AnimationSources: AnimationSources
	{
		class Hide_Rail: Hide_Rail
		{
		    initPhase = false;
		};
	};
};