/* Russia */
class O_R_APC_Wheeled_04_cannon_F: APC_Wheeled_04_base_F
{
    author = $STR_A3_A_AveryTheKitty_and_Lakarak;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_APC_Wheeled_04_cannon_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_crew_F;
	typicalCargo[] = {O_R_crew_F};
    textureList[] = {Green,1};
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body_RUkhk_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_RUkhk_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_tow_RUkhk_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Green_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
    };
    #include "SimpleObject.hpp"
};
class O_R_APC_Wheeled_04_cannon_v2_F: APC_Wheeled_04_base_v2_F
{
    author = $STR_A3_A_AveryTheKitty_and_Lakarak;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_APC_Wheeled_04_cannon_v2_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_crew_F;
	typicalCargo[] = {O_R_crew_F};
    textureList[] = {Green,1};
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_sprut_body_RUkhk_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_RUkhk_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\apc_wheeled_04_sprut_turret_co.paa",
        "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Green_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
    };
    #include "SimpleObject.hpp"
};

/* Russia (Mediterranean) */
class O_R_APC_Wheeled_04_cannon_ard_F: O_R_APC_Wheeled_04_cannon_F
{
    author = $STR_A3_A_AveryTheKitty_and_Lakarak;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_APC_Wheeled_04_cannon_ard_F.jpg";
	faction = OPF_R_ard_F;
	crew = O_R_crew_ard_F;
	typicalCargo[] = {O_R_crew_ard_F};

    /* Inventory */
    class TransportBackpacks
    {
        bag_xx(B_FieldPack_green_F,2);
    };
};
class O_R_APC_Wheeled_04_cannon_v2_ard_F: O_R_APC_Wheeled_04_cannon_v2_F
{
    author = $STR_A3_A_AveryTheKitty_and_Lakarak;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_APC_Wheeled_04_cannon_v2_F.jpg";
	faction = OPF_R_ard_F;
	crew = O_R_crew_ard_F;
	typicalCargo[] = {O_R_crew_ard_F};

    // Inventory
    class TransportBackpacks
    {
        bag_xx(B_FieldPack_green_F,2);
    };
};
