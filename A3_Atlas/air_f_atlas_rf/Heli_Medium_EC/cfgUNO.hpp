/* Sahrani UNO */
class Atlas_I_UNO_Heli_EC_01A_military_RF: Heli_EC_01A_military_base_RF
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\Editorpreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_Heli_EC_01A_military_RF.jpg";
	scope = public;
	scopeCurator = public;
	side = TGuerrila;
	faction = Atlas_IND_UNO_F;
	crew = Atlas_I_UNO_Helipilot_F;
	typicalCargo[] = {Atlas_I_UNO_Helipilot_F};
	textureList[] = {UNO,1};
	hiddenSelectionsTextures[] = 
    {
        "\A3_Atlas\air_f_atlas_rf\Heli_Medium_EC\Data\as332_exterior_UN_co.paa",
        "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa",
        "#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')",
        "\A3_Atlas\air_f_atlas_rf\Heli_Medium_EC\Data\as332_adds_UN_CO.paa", 
        "\A3_Atlas\air_f_atlas_rf\Heli_Medium_EC\Data\as332_exterior_UN_co.paa", 
        "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa"
    };
	hiddenSelectionsMaterials[] = 
    {
        "\lxrf\air_rf\heli_medium_ec\data\as332_exterior_01.rvmat", 
        "\lxrf\air_rf\heli_medium_ec\data\as332_int_cargo.rvmat"
    };
	defaultUserMFDvalues[] = {0, 1, 0.3, 1};
	/* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
		mag_xx(30Rnd_556x45_stanag_sand_red,6);
	};
	class TransportWeapons
	{
		weap_xx(Aegis_arifle_M4A1_Short_sand_F,2);
	};
	availableForSupportTypes[] = {"Drop", "Transport"};
	animationList[] = {"hide_engfilters_01", 1, "hide_engfilters_02", 0, "hide_rotordome",0, "hide_chin_plate", 0, "hide_chin_glass", 1, "hide_ceiling_blanket", 0, "hide_cm_dispenser", 0, "hide_winch", 1, "hide_ir_small", 1, "hide_ir_large", 1, "hide_mirror", 1};
};
class Atlas_I_UNO_Heli_EC_02_RF: Heli_EC_02_base_RF
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Atlas\Editorpreviews_F_Atlas\Data\CfgVehicles\Atlas_I_UNO_Heli_EC_02_RF.jpg";
	scope = public;
	scopeCurator = public;
	side = TGuerrila;
	faction = Atlas_IND_UNO_F;
	crew = Atlas_I_UNO_Helipilot_F;
	typicalCargo[] = {Atlas_I_UNO_Helipilot_F};
	textureList[] = {UNO,1};
	hiddenSelectionsTextures[] = 
    {
        "\A3_Atlas\air_f_atlas_rf\Heli_Medium_EC\Data\as332_exterior_UN_co.paa",
        "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa",
        "#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')",
        "\A3_Atlas\air_f_atlas_rf\Heli_Medium_EC\Data\as332_adds_UN_CO.paa", 
        "\A3_Atlas\air_f_atlas_rf\Heli_Medium_EC\Data\as332_exterior_UN_co.paa", 
        "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa"
    };
	hiddenSelectionsMaterials[] = 
    {
        "\lxrf\air_rf\heli_medium_ec\data\as332_exterior_01.rvmat", 
        "\lxrf\air_rf\heli_medium_ec\data\as332_int_cargo.rvmat"
    };
	animationList[] = {"hide_engfilters_01", 1, "hide_engfilters_02", 0, "hide_rotordome", 0, "hide_chin_plate", 0, "hide_chin_glass", 1, "hide_ceiling_blanket", 0, "hide_cm_dispenser", 0, "hide_winch", 1, "hide_ir_small", 1, "hide_ir_large", 1, "hide_mirror", 1};
	/* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
		mag_xx(30Rnd_556x45_stanag_sand_red,6);
	};
	class TransportWeapons
	{
		weap_xx(Aegis_arifle_M4A1_Short_sand_F,2);
	};
	defaultUserMFDvalues[] = {0, 1, 0.3, 1};
};