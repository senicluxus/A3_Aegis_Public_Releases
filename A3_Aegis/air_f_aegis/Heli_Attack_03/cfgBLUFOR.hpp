/* BAF */
class Aegis_B_A_Heli_Attack_03_F: Heli_Attack_03_base_F
{
    author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_B_A_Heli_Attack_03_F.jpg";
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
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_B_A_Heli_Attack_03_tna_F.jpg";
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
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_B_A_Heli_Attack_03_wdl_F.jpg";
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