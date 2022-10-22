class Atlas_B_A_MRAP_03_F: MRAP_03_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_MRAP_03_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Atlas_BLU_A_F;
	crew = Atlas_B_A_Soldier_F;
	typicalCargo[] = {Atlas_B_A_Soldier_F};
	textureList[] = {ADF,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Soft_F_Atlas\MRAP_03\Data\MRAP_03_ext_aus_CO.paa",
		"\A3_Atlas\Soft_F_Atlas\MRAP_03\Data\Turret_aus_CO.paa"
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_AUG_Mag_F,16);
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
		mag_xx(16Rnd_9x21_Mag,12);
		mag_xx(Titan_AT,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AUG_F,2);
	};
};
class Atlas_B_A_MRAP_03_hmg_F: MRAP_03_hmg_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_MRAP_03_hmg_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Atlas_BLU_A_F;
	crew = Atlas_B_A_Soldier_F;
	typicalCargo[] = {Atlas_B_A_Soldier_F};
	textureList[] = {ADF,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Soft_F_Atlas\MRAP_03\Data\MRAP_03_ext_aus_CO.paa",
		"\A3_Atlas\Soft_F_Atlas\MRAP_03\Data\Turret_aus_CO.paa"
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
		mag_xx(30Rnd_556x45_AUG_Mag_F,16);
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
		mag_xx(16Rnd_9x21_Mag,12);
		mag_xx(Titan_AT,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AUG_F,2);
	};
};
class Atlas_B_A_MRAP_03_gmg_F: MRAP_03_gmg_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_MRAP_03_gmg_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Atlas_BLU_A_F;
	crew = Atlas_B_A_Soldier_F;
	typicalCargo[] = {Atlas_B_A_Soldier_F};
	textureList[] = {ADF,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Soft_F_Atlas\MRAP_03\Data\MRAP_03_ext_aus_CO.paa",
		"\A3_Atlas\Soft_F_Atlas\MRAP_03\Data\Turret_aus_CO.paa"
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_AUG_Mag_F,16);
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
		mag_xx(16Rnd_9x21_Mag,12);
		mag_xx(Titan_AT,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AUG_F,2);
	};
};

/* ADF Arid */
class Atlas_B_A_MRAP_03_ard_F: Atlas_B_A_MRAP_03_F
{
	faction = Atlas_BLU_A_ard_F;
	crew = Atlas_B_A_Soldier_ard_F;
	typicalCargo[] = {Atlas_B_A_Soldier_ard_F};
};

class Atlas_B_A_MRAP_03_gmg_ard_F: Atlas_B_A_MRAP_03_gmg_F
{
	faction = Atlas_BLU_A_ard_F;
	crew = Atlas_B_A_Soldier_ard_F;
	typicalCargo[] = {Atlas_B_A_Soldier_ard_F};
};

class Atlas_B_A_MRAP_03_hmg_ard_F: Atlas_B_A_MRAP_03_hmg_F
{
	faction = Atlas_BLU_A_ard_F;
	crew = Atlas_B_A_Soldier_ard_F;
	typicalCargo[] = {Atlas_B_A_Soldier_ard_F};
};

/* ADF Tropic */
class Atlas_B_A_MRAP_03_trp_F: Atlas_B_A_MRAP_03_F
{
	faction = Atlas_BLU_A_trp_F;
	crew = Atlas_B_A_Soldier_trp_F;
	typicalCargo[] = {Atlas_B_A_Soldier_trp_F};
};

class Atlas_B_A_MRAP_03_gmg_trp_F: Atlas_B_A_MRAP_03_gmg_F
{
	faction = Atlas_BLU_A_trp_F;
	crew = Atlas_B_A_Soldier_trp_F;
	typicalCargo[] = {Atlas_B_A_Soldier_trp_F};
};

class Atlas_B_A_MRAP_03_hmg_trp_F: Atlas_B_A_MRAP_03_hmg_F
{
	faction = Atlas_BLU_A_trp_F;
	crew = Atlas_B_A_Soldier_trp_F;
	typicalCargo[] = {Atlas_B_A_Soldier_trp_F};
};