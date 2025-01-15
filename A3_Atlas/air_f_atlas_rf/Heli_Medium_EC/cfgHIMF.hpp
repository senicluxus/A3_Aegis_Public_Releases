/* HIMF Cougars */
class Atlas_B_H_Heli_EC_03_RF: Heli_EC_03_base_RF
{
	author = $STR_A3_A_BranFlakes;
	dlc = "rf";
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_H_Heli_EC_03_RF.jpg";
	side = TWest;
	faction = Atlas_BLU_H_F;
	crew = Atlas_B_H_Helipilot_F;
	typicalCargo[] = {Atlas_B_H_Helipilot_F};
	availableForSupportTypes[] = {"Drop", "Transport"};
	textureList[] = {Jungle_01,1};
	hiddenSelectionsTextures[] = 
    {
        "\A3_Atlas\air_f_atlas_rf\Heli_Medium_EC\Data\as332_exterior_jungle_co.paa",
		"\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa",
		"#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')",
		"\A3_Atlas\air_f_atlas_rf\Heli_Medium_EC\Data\as332_adds_jungle_CO.paa", 
		"\A3_Atlas\air_f_atlas_rf\Heli_Medium_EC\Data\as332_exterior_jungle_co.paa", 
		"\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa"
    };
	hiddenSelectionsMaterials[] = 
    {
        "\lxrf\air_rf\heli_medium_ec\data\as332_exterior_01.rvmat", 
        "\lxrf\air_rf\heli_medium_ec\data\as332_int_cargo.rvmat"
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
		weap_xx(Aegis_arifle_M16A4_FG_F,2);
	};
	animationList[] = {"hide_engfilters_01", 1, "hide_engfilters_02", 1, "hide_refuelprobe", 1, "hide_fueltanks", 1, "hide_rotordome",1, "hide_chin_plate", 0, "hide_chin_glass", 1, "hide_ceiling_blanket", 0, "hide_cm_dispenser", 0, "hide_winch", 0, "hide_ir_small", 0, "hide_ir_large", 1, "hide_mirror", 1, "hide_sensor", 1};
};
class Atlas_B_H_Heli_EC_04_military_RF: Heli_EC_04_military_base_RF
{
	author = $STR_A3_A_BranFlakes;
	dlc = "rf";
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\Atlas_B_H_Heli_EC_04_military_RF.jpg";
	side = TWest;
	faction = Atlas_BLU_H_F;
	crew = Atlas_B_H_Helipilot_F;
	typicalCargo[] = {Atlas_B_H_Helipilot_F};
	availableForSupportTypes[] = {"Drop", "Transport"};
	textureList[] = {Jungle_01,1};
	hiddenSelectionsTextures[] = 
    {
        "\A3_Atlas\air_f_atlas_rf\Heli_Medium_EC\Data\as332_exterior_jungle_co.paa",
		"\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa",
		"#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')",
		"\A3_Atlas\air_f_atlas_rf\Heli_Medium_EC\Data\as332_adds_jungle_CO.paa", 
		"\A3_Atlas\air_f_atlas_rf\Heli_Medium_EC\Data\as332_exterior_jungle_co.paa", 
		"\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa"
    };
	hiddenSelectionsMaterials[] = 
    {
        "\lxrf\air_rf\heli_medium_ec\data\as332_exterior_01.rvmat", 
        "\lxrf\air_rf\heli_medium_ec\data\as332_int_cargo.rvmat"
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
		weap_xx(Aegis_arifle_M16A4_FG_F,2);
	};
	animationList[] = {"hide_engfilters_01", 1, "hide_engfilters_02", 1, "hide_refuelprobe", 1, "hide_fueltanks", 1, "hide_rotordome",1, "hide_chin_plate", 0, "hide_chin_glass", 1, "hide_ceiling_blanket", 0, "hide_cm_dispenser", 0, "hide_winch", 0, "hide_ir_small", 0, "hide_ir_large", 1, "hide_mirror", 1, "hide_sensor", 1};
};