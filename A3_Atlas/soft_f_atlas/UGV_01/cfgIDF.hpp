class Atlas_I_I_UGV_01_F: UGV_01_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_UGV_01_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TGuerrila;
    faction = Atlas_IND_I_F;
    crew = I_UAV_AI;
    typicalCargo[] = {Atlas_I_I_Soldier_F};
    textureList[] = {Brown,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Soft_F_Atlas\UGV_01\Data\UGV_01_ext_brown_CO.paa",
        "\A3_Atlas\Soft_F_Atlas\UGV_01\Data\UGV_01_int_brown_CO.paa",
        "\A3_Atlas\Data_F_Atlas\Vehicles\Turret_brown_CO.paa"
    };
};
class Atlas_I_I_UGV_01_rcws_F: UGV_01_rcws_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_UGV_01_rcws_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TGuerrila;
    faction = Atlas_IND_I_F;
    crew = I_UAV_AI;
    typicalCargo[] = {Atlas_I_I_Soldier_F};
    textureList[] = {Brown,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Soft_F_Atlas\UGV_01\Data\UGV_01_ext_brown_CO.paa",
        "\A3_Atlas\Soft_F_Atlas\UGV_01\Data\UGV_01_int_brown_CO.paa",
        "\A3_Atlas\Data_F_Atlas\Vehicles\Turret_brown_CO.paa"
    };
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            magazines[] =
            {
                mag_2(200Rnd_127x99_mag_Tracer_Yellow),
                mag_2(64Rnd_40mm_G_belt)
            };
        };
        class CargoTurret_01: CargoTurret_01{};
    };
};
class Atlas_I_I_UGV_01_medical_F: UGV_01_medical_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_UGV_01_medical_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TGuerrila;
    faction = Atlas_IND_I_F;
    crew = I_UAV_AI;
    typicalCargo[] = {Atlas_I_I_Soldier_F};
    textureList[] = {Brown,1};
    hiddenSelectionsTextures[] =
    {
		"\A3_Atlas\Soft_F_Atlas\UGV_01\Data\UGV_01_ext_medevac_brown_CO.paa",
        "\A3_Atlas\Soft_F_Atlas\UGV_01\Data\UGV_01_int_brown_CO.paa",
        "\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
    };
};