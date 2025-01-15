/* US */
class Aegis_B_Heli_Attack_03_F: Heli_Attack_03_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgVehicles_B_US_Heli_Attack_03_F0;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_B_Heli_Attack_03_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_F;
	crew = B_Helipilot_F;
	typicalCargo[] = {B_Helipilot_F};
    textureList[] = {Green,1};
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_body_green_CO.paa",
        "\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_details_green_CO.paa",
        "\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_adds_green_CO.paa"
    };

    /* Turrets */
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            /* Weapons & Ammunition */
            magazines[] =
            {
                1200Rnd_Gatling_30mm_Heli_Attack_03_F,
                Laserbatteries
            };
        };
    };

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_F,2);
	};
};
/* US (Pacific) */
class Aegis_B_T_Heli_Attack_03_F: Aegis_B_Heli_Attack_03_F
{
	faction = BLU_T_F;
	crew = B_T_Helipilot_F;
	typicalCargo[] = {B_T_Helipilot_F};
	/* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_khaki_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_khk_F,2);
	};
};
/* US (Woodland) */
class Aegis_B_W_Heli_Attack_03_F: Aegis_B_Heli_Attack_03_F
{
	faction = BLU_W_F;
	crew = B_W_Helipilot_F;
	typicalCargo[] = {B_W_Helipilot_F};
	/* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_black_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_Black_F,2);
	};
};
/* US (Desert) */
class Aegis_B_D_Heli_Attack_03_F: Aegis_B_Heli_Attack_03_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_B_D_Heli_Attack_03_F.jpg";
	faction = BLU_NATO_lxWS;
	crew = B_D_Helipilot_lxWS;
	typicalCargo[] = {B_D_Helipilot_lxWS};
	textureList[] = {Sand,1};
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_body_sand_CO.paa",
        "\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_details_sand_CO.paa",
        "\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_adds_sand_CO.paa"
    };
};

/* BAF */
class Aegis_B_A_Heli_Attack_03_F: Heli_Attack_03_base_F
{
    author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgVehicles_B_BAF_Heli_Attack_03_F0;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_B_A_Heli_Attack_03_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_A_F;
	crew = B_A_Helipilot_F;
	typicalCargo[] = {B_A_Helipilot_F};
    textureList[] = {BAF,1};
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_body_CO.paa",
        "\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_details_CO.paa",
        "\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_adds_CO.paa"
    };

    /* Turrets */
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            /* Weapons & Ammunition */
            magazines[] =
            {
                1200Rnd_Gatling_30mm_Heli_Attack_03_F,
                Laserbatteries
            };
        };
    };

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_C_snd_F,2);
	};
};

/* BAF (Pacific) */
class Aegis_B_A_Heli_Attack_03_tna_F: Aegis_B_A_Heli_Attack_03_F
{
	author = $STR_A3_A_AveryTheKitty;
	faction = BLU_A_tna_F;
	crew = B_A_Helipilot_tna_F;
	typicalCargo[] = {B_A_Helipilot_tna_F};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_khaki_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_C_khk_F,2);
	};
};

/* BAF (Woodland) */
class B_A_Heli_Attack_03_wdl_F: Aegis_B_A_Heli_Attack_03_F
{
	author = $STR_A3_A_AveryTheKitty;
	faction = BLU_A_wdl_F;
	crew = B_A_Helipilot_wdl_F;
	typicalCargo[] = {B_A_Helipilot_wdl_F};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_black_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_C_blk_F,2);
	};
};

