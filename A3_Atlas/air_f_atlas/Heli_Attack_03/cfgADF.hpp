/* ADF */
class Atlas_B_A_Heli_Attack_03_F: Heli_Attack_03_base_F
{
    author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_A_Heli_Attack_03_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_B_A_Heli_Attack_03_F0;
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Atlas_BLU_A_F;
	crew = Atlas_B_A_Helipilot_F;
	typicalCargo[] = {Atlas_B_A_Helipilot_F};
    textureList[] = {ADF,1};
	hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Air_F_Atlas\Heli_Attack_03\Data\Heli_Attack_03_Body_ADF_CO.paa",
        "\A3_Atlas\Air_F_Atlas\Heli_Attack_03\Data\Heli_Attack_03_details_ADF_CO.paa",
        "\A3_Atlas\Air_F_Atlas\Heli_Attack_03\Data\Heli_Attack_03_adds_ADF_CO.paa"
    };
    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_556x45_AUG_Mag_F,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AUG_F,2);
	};
};

/* ADF Arid */
class Atlas_B_A_Heli_Attack_03_ard_F: Atlas_B_A_Heli_Attack_03_F
{
	faction = Atlas_BLU_A_ard_F;
	crew = Atlas_B_A_Helipilot_ard_F;
	typicalCargo[] = {Atlas_B_A_Helipilot_ard_F};
};

/* ADF Tropic */
class Atlas_B_A_Heli_Attack_03_trp_F: Atlas_B_A_Heli_Attack_03_F
{
	faction = Atlas_BLU_A_trp_F;
	crew = Atlas_B_A_Helipilot_trp_F;
	typicalCargo[] = {Atlas_B_A_Helipilot_trp_F};
};