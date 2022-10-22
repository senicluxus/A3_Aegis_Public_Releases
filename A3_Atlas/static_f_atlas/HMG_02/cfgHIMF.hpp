class Atlas_B_H_HMG_02_F: HMG_02_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_H_HMG_02_F.jpg";
	scope = public;
	side = TWest;
	faction = Atlas_BLU_H_F;
	crew = Atlas_B_H_Soldier_F;
	class assembleInfo
	{
		primary = 0;
		base = "";
		assembleTo = "";
		dissasembleTo[] =
		{
			Atlas_B_H_HMG_02_weapon_F,
			Atlas_B_H_HMG_02_support_F
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
class Atlas_B_H_HMG_02_high_F: HMG_02_high_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_H_HMG_02_high_F.jpg";
	scope = public;
	side = TWest;
	faction = Atlas_BLU_H_F;
	crew = Atlas_B_H_Soldier_F;
	class assembleInfo
	{
		primary = 0;
		base = "";
		assembleTo = "";
		dissasembleTo[] =
		{
			Atlas_B_H_HMG_02_high_weapon_F,
			Atlas_B_H_HMG_02_support_high_F
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
class Atlas_B_H_HMG_02_support_F: B_HMG_02_support_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_B_H_HMG_02_support_F0;
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_oli_CO.paa"};
	picture = "\A3\Weapons_F\Ammoboxes\Bags\Data\UI\icon_B_C_Small_oli.paa";
	faction = Atlas_BLU_H_F;
};
class Atlas_B_H_HMG_02_support_high_F: B_HMG_02_support_high_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_B_H_HMG_02_support_high_F0;
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_oli_CO.paa"};
	picture = "\A3\Weapons_F\Ammoboxes\Bags\Data\UI\icon_B_C_Small_oli.paa";
	faction = Atlas_BLU_H_F;
};
class Atlas_B_H_HMG_02_weapon_F: B_HMG_02_weapon_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_B_H_HMG_02_weapon_F0;
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_oli_CO.paa"};
	picture = "\A3\Weapons_F\Ammoboxes\Bags\Data\UI\icon_B_C_Small_oli.paa";
	faction = Atlas_BLU_H_F;
	class assembleInfo: assembleInfo
	{
		assembleTo = Atlas_B_H_HMG_02_F;
	};
};
class Atlas_B_H_HMG_02_high_weapon_F: B_HMG_02_high_weapon_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_B_H_HMG_02_high_weapon_F0;
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_oli_CO.paa"};
	picture = "\A3\Weapons_F\Ammoboxes\Bags\Data\UI\icon_B_C_Small_oli.paa";
	faction = Atlas_BLU_H_F;
	class assembleInfo: assembleInfo
	{
		assembleTo = Atlas_B_H_HMG_02_high_F;
	};
};