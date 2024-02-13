/* LDF */
class Aegis_I_E_Heli_Attack_03_F: Heli_Attack_03_base_F
{
    author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_E_Heli_Attack_03_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TGuerrila;
	faction = IND_E_F;
	crew = I_E_Helipilot_F;
	typicalCargo[] = {I_E_Helipilot_F};
    textureList[] = {EAF_01,1};
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_body_EAF_CO.paa",
        "\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_details_EAF_CO.paa",
        "\A3_Aegis\Air_F_Aegis\Heli_Attack_03\Data\Heli_Attack_03_adds_EAF_CO.paa"
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
		mag_xx(SmokeShellGreen,2);
		mag_xx(30Rnd_65x39_caseless_msbs_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MSBS65_F,2);
	};
};

/* BLUFOR LDF */
class Aegis_B_E_Heli_Attack_03_F: Aegis_I_E_Heli_Attack_03_F
{
    side = TWest;
	faction = BLU_EAF_F;
	crew = Aegis_B_E_Helipilot_F;
	typicalCargo[] = {Aegis_B_E_Helipilot_F};
};