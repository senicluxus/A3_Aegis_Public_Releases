/* Karzeghistan */
class Atlas_B_K_Heli_light_03_dynamicLoadout_RF: B_Heli_Light_03_dynamicLoadout_RF
{
	author = $STR_A3_A_BranFlakes;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_K_Heli_light_03_dynamicLoadout_RF.jpg";
	scope = public;
	side = TWest;
	faction = Atlas_BLU_K_F;
	crew = Atlas_B_K_Helipilot_F;
	typicalCargo[] = {Atlas_B_K_Helipilot_F};
	hiddenSelectionsTextures[] =
	{
        "\A3_Atlas\Air_F_Atlas\Heli_Light_03\Data\Heli_Light_03_base_kzg_CO.paa",
        "\A3_Atlas\Air_F_Atlas_RF\Heli_Light_03\Data\Heli_Light_03_addons_kzg_CO.paa"
    };
	textureList[] =
    {
        KZG,1
    };
	magazines[] =
	{
		5000Rnd_762x51_Belt,
		168Rnd_CMFlare_Chaff_Magazine
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
		weap_xx(arifle_SPAR_01_blk_F,2);
	};
};
class Atlas_B_K_Heli_light_03_unarmed_RF: B_Heli_Light_03_unarmed_RF
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_K_Heli_light_03_unarmed_RF.jpg";
    scope = public;
    side = TWest;
    faction = Atlas_BLU_K_F;
    crew = Atlas_B_K_Helipilot_F;
    typicalCargo[] = {Atlas_B_K_Helipilot_F};
    hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Air_F_Atlas\Heli_Light_03\Data\Heli_Light_03_base_kzg_CO.paa",
        "\A3_Atlas\Air_F_Atlas_RF\Heli_Light_03\Data\Heli_Light_03_addons_kzg_CO.paa"
    };
    textureList[] =
    {
        KZG,1
    };
    magazines[] =
    {
        5000Rnd_762x51_Belt,
        168Rnd_CMFlare_Chaff_Magazine
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
        weap_xx(arifle_SPAR_01_blk_F,2);
    };
};