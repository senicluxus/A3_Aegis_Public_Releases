/* Argana */
class Aegis_O_A_Heli_EC_01A_military_RF: Heli_EC_01A_military_base_RF
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\Aegis_O_A_Heli_EC_01A_military_RF.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_A_F;
	crew = O_A_Helipilot_F;
	typicalCargo[] = {O_A_Helipilot_F};
	textureList[] = {CSAT,1};
	hiddenSelectionsTextures[] = 
    {
        "\A3_Aegis\air_f_aegis_rf\Heli_Medium_EC\Data\as332_exterior_hex_co.paa",
		"\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa",
		"#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')",
		"\A3_Aegis\air_f_aegis_rf\Heli_Medium_EC\Data\as332_adds_hex_CO.paa", 
		"\A3_Aegis\air_f_aegis_rf\Heli_Medium_EC\Data\as332_exterior_hex_co.paa", 
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
		mag_xx(SmokeShellRed,2);
		mag_xx(30Rnd_580x42_Mag_F,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_CTAR_blk_F,2);
	};
	availableForSupportTypes[] = {"Drop", "Transport"};
	animationList[] = {"hide_engfilters_01", 1, "hide_engfilters_02", 0, "hide_rotordome",0, "hide_chin_plate", 0, "hide_chin_glass", 1, "hide_ceiling_blanket", 0, "hide_cm_dispenser", 0, "hide_winch", 1, "hide_ir_small", 1, "hide_ir_large", 1, "hide_mirror", 1};
};
class Aegis_O_A_Heli_EC_02_RF: Heli_EC_02_base_RF
{
	author = $STR_A3_A_Ravenholme;
	editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\Aegis_O_A_Heli_EC_02_RF.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_A_F;
	crew = O_A_Helipilot_F;
	typicalCargo[] = {O_A_Helipilot_F};
	textureList[] = {CSAT,1};
	hiddenSelectionsTextures[] = 
    {
        "\A3_Aegis\air_f_aegis_rf\Heli_Medium_EC\Data\as332_exterior_hex_co.paa",
		"\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa",
		"#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')",
		"\A3_Aegis\air_f_aegis_rf\Heli_Medium_EC\Data\as332_adds_hex_CO.paa", 
		"\A3_Aegis\air_f_aegis_rf\Heli_Medium_EC\Data\as332_exterior_hex_co.paa", 
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
		mag_xx(SmokeShellRed,2);
		mag_xx(30Rnd_580x42_Mag_F,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_CTAR_blk_F,2);
	};
	defaultUserMFDvalues[] = {0, 1, 0.3, 1};

	/* Turrets */
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret
		{
			magazines[] = {"Aegis_2000Rnd_20mm_shells_green_rf", "Laserbatteries"};
		};	
	};
};