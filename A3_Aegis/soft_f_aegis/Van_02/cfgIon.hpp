/* ION */
class B_ION_Van_02_transport_F: Van_02_transport_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_Van_02_transport_F.jpg";
    scope = protected;
    scopeCurator = protected;
    side = TWest;
    faction = BLU_ION_F;
    crew = B_ION_Soldier_F;
    typicalCargo[] = {B_ION_Soldier_F};
	hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Orange\Van_02\Data\van_body_black_CO.paa",
        "\A3\Soft_F_Orange\Van_02\Data\van_wheel_transport_CO.paa",
        "\A3\Soft_F_Orange\Van_02\Data\van_glass_transport_CA.paa",
        "\A3\Soft_F_Orange\Van_02\Data\van_body_black_CO.paa"
    };
    textureList[] = {Black,1};
};
class B_ION_Van_02_vehicle_F: Van_02_vehicle_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_Van_02_vehicle_F.jpg";
    scope = protected;
    scopeCurator = protected;
    side = TWest;
    faction = BLU_ION_F;
    crew = B_ION_Soldier_F;
    typicalCargo[] = {B_ION_Soldier_F};
	hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Orange\Van_02\Data\van_body_black_CO.paa",
        "\A3\soft_f_orange\Van_02\Data\van_wheel_CO.paa",
        "\A3\soft_f_orange\Van_02\Data\van_glass_utility_CA.paa",
        "\A3\Soft_F_Orange\Van_02\Data\van_body_black_CO.paa"
    };
    textureList[] = {Black,1};
};