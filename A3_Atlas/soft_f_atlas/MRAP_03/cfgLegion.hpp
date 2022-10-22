class Atlas_B_L_MRAP_03_F: MRAP_03_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_MRAP_03_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Atlas_BLU_L_F;
	crew = Atlas_B_L_Soldier_F;
	typicalCargo[] = {Atlas_B_L_Soldier_F};
	textureList[] = {Jagged,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Soft_F_Atlas\MRAP_03\Data\MRAP_03_ext_jagged_CO.paa",
		"\A3_Atlas\Soft_F_Atlas\MRAP_03\Data\Turret_jagged_CO.paa"
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,16);
		mag_xx(200Rnd_556x45_Box_Red_F,3);
		mag_xx(HandGrenade,10);
		mag_xx(SmokeShell,4);
		mag_xx(SmokeShellGreen,4);
		mag_xx(SmokeShellOrange,4);
		mag_xx(SmokeShellBlue,4);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		mag_xx(1Rnd_Smoke_Grenade_shell,4);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
		mag_xx(17Rnd_9x21_Mag,12);
		mag_xx(NLAW_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MSBS65_black_F,2);
	};
};
class Atlas_B_L_MRAP_03_gmg_F: MRAP_03_hmg_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_MRAP_03_gmg_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Atlas_BLU_L_F;
	crew = Atlas_B_L_Soldier_F;
	typicalCargo[] = {Atlas_B_L_Soldier_F};
	textureList[] = {Jagged,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Soft_F_Atlas\MRAP_03\Data\MRAP_03_ext_jagged_CO.paa",
		"\A3_Atlas\Soft_F_Atlas\MRAP_03\Data\Turret_jagged_CO.paa"
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {mag_2(200Rnd_127x99_mag_Tracer_Red)};
		};
		class CommanderTurret: CommanderTurret{};
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,16);
		mag_xx(200Rnd_556x45_Box_Red_F,3);
		mag_xx(HandGrenade,10);
		mag_xx(SmokeShell,4);
		mag_xx(SmokeShellGreen,4);
		mag_xx(SmokeShellOrange,4);
		mag_xx(SmokeShellBlue,4);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		mag_xx(1Rnd_Smoke_Grenade_shell,4);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
		mag_xx(17Rnd_9x21_Mag,12);
		mag_xx(NLAW_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MSBS65_black_F,2);
	};
};
class Atlas_B_L_MRAP_03_hmg_F: MRAP_03_gmg_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_L_MRAP_03_hmg_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Atlas_BLU_L_F;
	crew = Atlas_B_L_Soldier_F;
	typicalCargo[] = {Atlas_B_L_Soldier_F};
	textureList[] = {Jagged,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Soft_F_Atlas\MRAP_03\Data\MRAP_03_ext_jagged_CO.paa",
		"\A3_Atlas\Soft_F_Atlas\MRAP_03\Data\Turret_jagged_CO.paa"
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_msbs_mag,16);
		mag_xx(200Rnd_556x45_Box_Red_F,3);
		mag_xx(HandGrenade,10);
		mag_xx(SmokeShell,4);
		mag_xx(SmokeShellGreen,4);
		mag_xx(SmokeShellOrange,4);
		mag_xx(SmokeShellBlue,4);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		mag_xx(1Rnd_Smoke_Grenade_shell,4);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
		mag_xx(17Rnd_9x21_Mag,12);
		mag_xx(NLAW_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MSBS65_black_F,2);
	};
};