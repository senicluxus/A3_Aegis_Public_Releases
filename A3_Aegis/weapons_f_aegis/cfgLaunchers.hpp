/* Launchers */
class launch_RPG32_F;
class launch_Titan_base;
class launch_Titan_short_base;
class launch_MRAWS_base_F;
class launch_MRAWS_olive_rail_F;
class launch_Vorona_base_F: Launcher_Base_F
{
    recoil = recoil_vorona;
};
class launch_RPG32_camo_F: launch_RPG32_F
{
    scope = public;
};
class launch_RPG32_black_F: launch_RPG32_F
{
	author = $STR_A3_A_AveryTheKitty;
	baseWeapon = launch_RPG32_black_F;
	displayName = $STR_A3_A_CfgWeapons_launch_RPG32_black_F0;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Weapons_F_Aegis\Launchers\RPG32\Data\RPG_32_body_black_CO.paa",
		"\A3\Weapons_F\Launchers\RPG32\Data\RPG_32_optics_CO.paa"
	};
	picture = "\A3_Aegis\Weapons_F_Aegis\Launchers\RPG32\Data\UI\icon_launch_RPG32_black_F_X_CA.paa";
};
class launch_O_Titan_camo_F: launch_Titan_base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_launch_O_Titan_camo_F0;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Weapons_F_Aegis\Launchers\Titan\Data\launcher_RUcamo_CO.paa",
		"\A3_Aegis\Weapons_F_Aegis\Launchers\Titan\Data\tubeL_RUcamo_CO.paa"
	};
	//picture = "\A3_Aegis\Weapons_F_Aegis\Launchers\Titan\Data\UI\icon_launch_O_Titan_camo_F_X_CA.paa";
};
class launch_Titan_blk_F: launch_Titan_base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_launch_Titan_blk_F0;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Weapons_F_Aegis\Launchers\Titan\Data\launcher_blk_CO.paa",
		"\A3_Aegis\Weapons_F_Aegis\Launchers\Titan\Data\tubeL_blk_CO.paa"
	};
	picture = "\A3_Aegis\Weapons_F_Aegis\Launchers\Titan\Data\UI\icon_launch_Titan_blk_F_X_CA.paa";
};
class launch_O_Titan_short_camo_F: launch_Titan_short_base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_launch_O_Titan_short_camo_F0;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Weapons_F_Aegis\Launchers\Titan\Data\launcher_RUcamo_CO.paa",
		"\A3_Aegis\Weapons_F_Aegis\Launchers\Titan\Data\tubeM_RUcamo_CO.paa"
	};
	//picture = "\A3_Aegis\Weapons_F_Aegis\Launchers\Titan\Data\UI\icon_launch_O_Titan_short_camo_F_X_CA.paa";
};
class launch_Titan_short_blk_F: launch_Titan_short_base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_launch_Titan_short_blk_F0;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Weapons_F_Aegis\Launchers\Titan\Data\launcher_blk_CO.paa",
		"\A3_Aegis\Weapons_F_Aegis\Launchers\Titan\Data\tubeM_blk_CO.paa"
	};
	picture = "\A3_Aegis\Weapons_F_Aegis\Launchers\Titan\Data\UI\icon_launch_Titan_short_blk_F_X_CA.paa";
};
class launch_MRAWS_black_F: launch_MRAWS_base_F
{
	author = $STR_A3_A_POLPOX;
	baseWeapon = launch_MRAWS_black_F;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_launch_MRAWS_black_F0;
	picture = "\A3_Aegis\Weapons_F_Aegis\Launchers\MRAWS\Data\UI\icon_launch_MRAWS_black_F_X_CA.paa";
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Weapons_F_Aegis\Launchers\MRAWS\Data\launch_MRAWS_black_01_F_CO.paa",
		"\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_CO.paa"
	};
};
class launch_MRAWS_black_rail_F: launch_MRAWS_olive_rail_F
{
	author = $STR_A3_A_POLPOX;
	baseWeapon = launch_MRAWS_black_rail_F;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_launch_MRAWS_black_rail_F0;
	picture = "\A3_Aegis\Weapons_F_Aegis\Launchers\MRAWS\Data\UI\icon_launch_MRAWS_black_rail_F_X_CA.paa";
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Weapons_F_Aegis\Launchers\MRAWS\Data\launch_MRAWS_black_01_F_CO.paa",
		"\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_rail_02_F_CO.paa"
	};
};