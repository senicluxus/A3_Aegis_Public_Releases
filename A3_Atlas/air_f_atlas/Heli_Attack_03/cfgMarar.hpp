/* BAF */
class Atlas_B_M_Heli_Attack_03_F: Heli_Attack_03_base_F
{
    author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_M_Heli_Attack_03_F.jpg";
	displayName = $STR_A3_A_CfgVehicles_B_M_Heli_Attack_03_F0;
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Atlas_BLU_M_F;
	crew = Atlas_B_M_Helipilot_F;
	typicalCargo[] = {Atlas_B_M_Helipilot_F};
    textureList[] = {Marar,1};
	hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Air_F_Atlas\Heli_Attack_03\Data\Heli_Attack_03_Body_Marar_CO.paa",
        "\A3_Atlas\Air_F_Atlas\Heli_Attack_03\Data\Heli_Attack_03_details_Marar_CO.paa",
        "\A3_Atlas\Air_F_Atlas\Heli_Attack_03\Data\Heli_Attack_03_adds_Marar_CO.paa"
    };
    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_556x45_Stanag_red,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_Mk20_plain_F,2);
	};
};