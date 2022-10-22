class Atlas_I_I_HMG_02_F: HMG_02_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_HMG_02_F.jpg";
	scope = public;
	side = TGuerrila;
	faction = Atlas_IND_I_F;
	crew = Atlas_I_I_Soldier_F;
	class assembleInfo
	{
		primary = 0;
		base = "";
		assembleTo = "";
		dissasembleTo[] =
		{
			Atlas_I_I_HMG_02_weapon_F,
			Atlas_I_I_HMG_02_support_F
		};
		displayName = "";
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {mag_4(100Rnd_127x99_mag_Tracer_Yellow)};
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
class Atlas_I_I_HMG_02_high_F: HMG_02_high_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_HMG_02_high_F.jpg";
	scope = public;
	side = TGuerrila;
	faction = Atlas_IND_I_F;
	crew = Atlas_I_I_Soldier_F;
	class assembleInfo
	{
		primary = 0;
		base = "";
		assembleTo = "";
		dissasembleTo[] =
		{
			Atlas_I_I_HMG_02_high_weapon_F,
			Atlas_I_I_HMG_02_support_high_F
		};
		displayName = "";
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {mag_4(100Rnd_127x99_mag_Tracer_Yellow)};
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
class Atlas_I_I_HMG_02_support_F: B_HMG_02_support_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_I_I_HMG_02_support_F0;
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_rgr_CO.paa"};
	picture = "\A3\Weapons_F\Ammoboxes\Bags\Data\UI\icon_B_C_Small_rgr.paa";
	faction = Atlas_IND_I_F;
};
class Atlas_I_I_HMG_02_support_high_F: B_HMG_02_support_high_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_I_I_HMG_02_support_high_F0;
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_rgr_CO.paa"};
	picture = "\A3\Weapons_F\Ammoboxes\Bags\Data\UI\icon_B_C_Small_rgr.paa";
	faction = Atlas_IND_I_F;
};
class Atlas_I_I_HMG_02_weapon_F: B_HMG_02_weapon_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_I_I_HMG_02_weapon_F0;
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_rgr_CO.paa"};
	picture = "\A3\Weapons_F\Ammoboxes\Bags\Data\UI\icon_B_C_Small_rgr.paa";
	faction = Atlas_IND_I_F;
	class assembleInfo: assembleInfo
	{
		assembleTo = Atlas_I_I_HMG_02_F;
	};
};
class Atlas_I_I_HMG_02_high_weapon_F: B_HMG_02_high_weapon_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_I_I_HMG_02_high_weapon_F0;
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_rgr_CO.paa"};
	picture = "\A3\Weapons_F\Ammoboxes\Bags\Data\UI\icon_B_C_Small_rgr.paa";
	faction = Atlas_IND_I_F;
	class assembleInfo: assembleInfo
	{
		assembleTo = Atlas_I_I_HMG_02_high_F;
	};
};