/* Raven Security */
class Aegis_I_Raven_APC_Wheeled_04_export_F: APC_Wheeled_04_export_base_F
{
    author = $STR_A3_A_AveryTheKitty_Lukin_Lakarak;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\Aegis_I_Raven_APC_Wheeled_04_export_F.jpg";
	scope = public;
	scopeCurator = public;
	faction = IND_Raven_F;
	side = TGuerrila;
	crew = I_Raven_Crew_F;
	typicalCargo[] = {I_Raven_Crew_F};
    textureList[] = {Green,1};
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\APC_Wheeled_04_export_body_RUkhk_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\Data\APC_Wheeled_04_body2_RUkhk_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\APC_Wheeled_04\data\btr100a_turret_co.paa",
        "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Green_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
    };

    /* Inventory */
    class TransportBackpacks
    {
        bag_xx(B_FieldPack_green_F,2);
    };
    #include "SimpleObject.hpp"
};
/* Raven Security - OPFOR */
class Aegis_O_Raven_APC_Wheeled_04_export_F: Aegis_I_Raven_APC_Wheeled_04_export_F
{
    author = $STR_A3_A_AveryTheKitty_Lukin_Lakarak;
	faction = OPF_Raven_F;
	side = TEast;
	crew = O_Raven_Crew_F;
	typicalCargo[] = {O_Raven_Crew_F};
};