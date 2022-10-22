/* AAF */
class I_UGV_01_rcws_F: UGV_01_rcws_base_F
{
    /* Turrets */
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            /* Weapons & Ammunition */
            magazines[] =
            {
                mag_2(200Rnd_127x99_mag_Tracer_Yellow),
                mag_2(64Rnd_40mm_G_belt)
            };
        };
        class CargoTurret_01: CargoTurret_01{};
    };
};
class I_UGV_01_medical_F: UGV_01_medical_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_UGV_01_medical_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TGuerrila;
    faction = IND_F;
    crew = I_UAV_AI_F;
    typicalCargo[] = {I_Soldier_lite_F};
    textureList[] = {Indep,1};
    hiddenSelectionsTextures[] =
    {
		"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_medevac_INDP_CO.paa",
        "\A3\Drones_F\Soft_F_Gamma\UGV_01\Data\UGV_01_int_INDP_CO.paa",
        "\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
    };
};