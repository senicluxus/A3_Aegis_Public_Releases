class Atlas_B_A_HMG_02_F: HMG_02_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_HMG_02_F.jpg";
	scope = public;
	side = TWest;
	faction = Atlas_BLU_A_F;
	crew = Atlas_B_A_Soldier_F;
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
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {mag_4(100Rnd_127x99_mag_Tracer_Red)};
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
class Atlas_B_A_HMG_02_high_F: HMG_02_high_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_HMG_02_high_F.jpg";
	scope = public;
	side = TWest;
	faction = Atlas_BLU_A_F;
	crew = Atlas_B_A_Soldier_F;
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
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {mag_4(100Rnd_127x99_mag_Tracer_Red)};
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

/* ADF Arid */
class Atlas_B_A_HMG_02_ard_F: Atlas_B_A_HMG_02_F
{
	faction = Atlas_BLU_A_ard_F;
	crew = Atlas_B_A_Soldier_ard_F;
};
class Atlas_B_A_HMG_02_high_ard_F: Atlas_B_A_HMG_02_high_F
{
	faction = Atlas_BLU_A_ard_F;
	crew = Atlas_B_A_Soldier_ard_F;
};

/* ADF Tropic */
class Atlas_B_A_HMG_02_trp_F: Atlas_B_A_HMG_02_F
{
	faction = Atlas_BLU_A_trp_F;
	crew = Atlas_B_A_Soldier_trp_F;
};
class Atlas_B_A_HMG_02_high_trp_F: Atlas_B_A_HMG_02_high_F
{
	faction = Atlas_BLU_A_trp_F;
	crew = Atlas_B_A_Soldier_trp_F;
};