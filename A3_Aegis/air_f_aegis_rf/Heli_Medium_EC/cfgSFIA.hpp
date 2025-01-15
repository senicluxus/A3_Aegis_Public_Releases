/* Base Class */
class I_Heli_EC_01A_military_RF;

/* SFIA Cougar (Unarmed) */
class Aegis_I_SFIA_EC_01A_Military_RF: I_Heli_EC_01A_military_RF
{
    author = "Rotators Collective";
    scope = protected;
    scopeCurator = protected;
    crew = I_SFIA_pilot_lxWS;
	faction = IND_SFIA_lxWS;
	side = TGuerilla;
    defaultUserMFDvalues[] = {0, 1, 0.3, 1};
	hiddenSelectionsTextures[] = 
    {
        "\lxRF\air_rf\heli_medium_ec\data\as332_exterior_01_sfia_co.paa",
        "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa", 
        "#(argb,512,512,1)r2t(rendertarget0,1.0)", 
        "\lxRF\air_rf\heli_medium_ec\data\as332_adds_01_sfia_co.paa", 
        "\lxRF\air_rf\heli_medium_ec\data\as332_exterior_01_sfia_co.paa", 
        "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa"
    };
	hiddenSelectionsMaterials[] = 
    {
        "\lxrf\air_rf\heli_medium_ec\data\as332_exterior_01.rvmat", 
        "\lxrf\air_rf\heli_medium_ec\data\as332_int_cargo.rvmat"
    };
	textureList[] = {CAMO_SFIA, 1};
	typicalCargo[] = {I_SFIA_pilot_lxWS};
    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellRed,2);
		mag_xx(30Rnd_762x39_Mag_F,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_Galat_lxWS,2);
	};
    animationList[] = {"hide_chin_plate", 1, "hide_chin_glass", 0, "hide_cm_dispenser", 0, "hide_ceiling_blanket", 0, "hide_engfilters_01", 1, "hide_engfilters_02", 0, "hide_rotordome", 1, "hide_ir_small", 1, "hide_ir_large", 1};
};
class Aegis_O_SFIA_EC_01A_Military_RF: Aegis_I_SFIA_EC_01A_Military_RF
{
    author = "Rotators Collective";
	scope = public;
	scopeCurator = public;
	editorPreview = "\A3_Aegis\Editorpreviews_F_Aegis\Data\CfgVehicles\Aegis_O_SFIA_EC_01A_Military_RF.jpg";
	faction = OPF_SFIA_lxWS;
	side = TEast;
	crew = O_SFIA_pilot_lxWS;
	typicalCargo[] = {O_SFIA_pilot_lxWS};
};