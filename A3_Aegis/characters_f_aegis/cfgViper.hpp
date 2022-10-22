/* Viper */
class O_V_Soldier_base_F: O_Soldier_base_F
{
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_SF_s};
			speechPlural[] = {veh_infantry_SF_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_SF_s;
	textPlural = $STR_A3_nameSound_veh_infantry_SF_p;
	nameSound = veh_infantry_SF_s;
	faction = OPF_V_F;
	identityTypes[] =
	{
		LanguageCHI_F,
		Head_Asian,
		G_IRAN_default
	};
	weapons[] =
	{
		arifle_ARX_hex_ARCO_Pointer_Snds_F,
		hgun_Rook40_snds_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_ARX_hex_ARCO_Pointer_Snds_F,
		hgun_Rook40_snds_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		30Rnd_65x39_caseless_green,
		10Rnd_50BW_Mag_F,
		17Rnd_9x21_Mag,
		mag_2(Chemlight_red)
	};
	respawnMagazines[] =
	{
		30Rnd_65x39_caseless_green,
		10Rnd_50BW_Mag_F,
		17Rnd_9x21_Mag,
		mag_2(Chemlight_red)
	};
};
class O_V_Soldier_hex_F: O_V_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_V_Soldier_hex_F.jpg";
};
class O_V_Soldier_TL_hex_F: O_V_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_V_Soldier_TL_hex_F.jpg";
  	icon = iconManLeader;
};
class O_V_Soldier_Exp_hex_F: O_V_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_V_Soldier_Exp_hex_F.jpg";
	icon = iconManExplosive;
	picture = pictureExplosive;
	weapons[] =
	{
		arifle_ARX_hex_ARCO_Pointer_Snds_F,
		hgun_Rook40_snds_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_ARX_hex_ARCO_Pointer_Snds_F,
		hgun_Rook40_snds_F,
		DefaultManWeapons
	};
};
class O_V_Soldier_Medic_hex_F: O_V_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_V_Soldier_Medic_hex_F.jpg";
	weapons[] =
	{
		arifle_ARX_hex_ARCO_Pointer_Snds_F,
		hgun_Rook40_snds_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_ARX_hex_ARCO_Pointer_Snds_F,
		hgun_Rook40_snds_F,
		DefaultManWeapons
	};
};
class O_V_Soldier_M_hex_F: O_V_Soldier_base_F
{
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_V_Soldier_M_hex_F.jpg";
};
class O_V_Soldier_LAT_hex_F: O_V_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_V_Soldier_LAT_hex_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_O_V_Soldier_LAT_hex_F0;
	icon = iconManAT;
	weapons[] =
	{
		arifle_ARX_hex_ARCO_Pointer_Snds_F,
		launch_RPG32_F,
		hgun_Rook40_snds_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_ARX_hex_ARCO_Pointer_Snds_F,
		launch_RPG32_F,
		hgun_Rook40_snds_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		30Rnd_65x39_caseless_green,
		10Rnd_50BW_Mag_F,
		17Rnd_9x21_Mag,
		RPG32_F,
		mag_2(Chemlight_red)
	};
	respawnMagazines[] =
	{
		30Rnd_65x39_caseless_green,
		10Rnd_50BW_Mag_F,
		17Rnd_9x21_Mag,
		RPG32_F,
		mag_2(Chemlight_red)
	};
};
class O_V_Soldier_JTAC_hex_F: O_V_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_V_Soldier_JTAC_hex_F.jpg";
	magazines[] =
	{
		30Rnd_65x39_caseless_green,
		10Rnd_50BW_Mag_F,
		17Rnd_9x21_Mag,
		Laserbatteries,
		mag_2(Chemlight_red)
	};
	respawnMagazines[] =
	{
		30Rnd_65x39_caseless_green,
		10Rnd_50BW_Mag_F,
		17Rnd_9x21_Mag,
		Laserbatteries,
		mag_2(Chemlight_red)
	};
};

/* Viper (Pacific) */
class O_V_Soldier_ghex_F: O_V_Soldier_hex_F
{
	faction = OPF_V_tna_F;
	weapons[] =
	{
		arifle_ARX_ghex_ARCO_Pointer_Snds_F,
		hgun_Rook40_snds_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_ARX_ghex_ARCO_Pointer_Snds_F,
		hgun_Rook40_snds_F,
		DefaultManWeapons,
		Rangefinder
	};
};
class O_V_Soldier_TL_ghex_F: O_V_Soldier_TL_hex_F
{
	faction = OPF_V_tna_F;
};
class O_V_Soldier_Exp_ghex_F: O_V_Soldier_Exp_hex_F
{
	faction = OPF_V_tna_F;
	weapons[] =
	{
		arifle_ARX_ghex_ARCO_Pointer_Snds_F,
		hgun_Rook40_snds_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_ARX_ghex_ARCO_Pointer_Snds_F,
		hgun_Rook40_snds_F,
		DefaultManWeapons,
		Rangefinder
	};
};
class O_V_Soldier_Medic_ghex_F: O_V_Soldier_Medic_hex_F
{
	faction = OPF_V_tna_F;
	weapons[] =
	{
		arifle_ARX_ghex_ARCO_Pointer_Snds_F,
		hgun_Rook40_snds_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_ARX_ghex_ARCO_Pointer_Snds_F,
		hgun_Rook40_snds_F,
		DefaultManWeapons,
		Rangefinder
	};
};
class O_V_Soldier_M_ghex_F: O_V_Soldier_M_hex_F
{
	faction = OPF_V_tna_F;
};
class O_V_Soldier_LAT_ghex_F: O_V_Soldier_LAT_hex_F
{
	faction = OPF_V_tna_F;
	weapons[] =
	{
		arifle_ARX_ghex_ARCO_Pointer_Snds_F,
		launch_RPG32_ghex_F,
		hgun_Rook40_snds_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_ARX_ghex_ARCO_Pointer_Snds_F,
		launch_RPG32_ghex_F,
		hgun_Rook40_snds_F,
		DefaultManWeapons,
		Rangefinder
	};
};
class O_V_Soldier_JTAC_ghex_F: O_V_Soldier_JTAC_hex_F
{
	faction = OPF_V_tna_F;
};