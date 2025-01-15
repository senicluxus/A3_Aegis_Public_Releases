/* Karzeghistan */
class Atlas_B_K_Static_AA_F: Atlas_B_G_Static_AA_F
{
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Static_AA_F.jpg";
	faction = Atlas_BLU_K_F;
	crew = Atlas_B_K_Soldier_F;
	hiddenSelections[] =
	{
		camo_launcher,
		camo_tube
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_CO.paa",
		"\A3\Weapons_F_Beta\Launchers\Titan\Data\TubeL_CO.paa"
	};
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] =
		{
			B_AA_01_Weapon_F,
			B_HMG_01_support_F
		};
	};
};