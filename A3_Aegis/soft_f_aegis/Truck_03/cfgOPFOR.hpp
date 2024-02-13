/* IAF */
class O_Truck_03_transport_F: Truck_03_base_F
{
    /* Liveries */
    class TextureSources
    {
        class Green
        {
            displayName = $STR_A3_TextureSources_Green0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUkhk_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUkhk_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_cargo_RUkhk_CO.paa"
            };
            factions[] = {};
        };
        /*class Rus
        {
            displayName = $STR_A3_A_TextureSources_Rus0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUcamo_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUcamo_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_cargo_RUcamo_CO.paa"
            };
            factions[] = {};
        };*/
    };
};
class O_Truck_03_covered_F: Truck_03_base_F
{
    /* Liveries */
    class TextureSources
    {
        class Green
        {
            displayName = $STR_A3_TextureSources_Green0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUkhk_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUkhk_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_cargo_RUkhk_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_cover_RUkhk_CO.paa"
            };
            factions[] = {};
        };
        /*class Rus
        {
            displayName = $STR_A3_A_TextureSources_Rus0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUcamo_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUcamo_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_cargo_RUcamo_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_cover_RUcamo_CO.paa"
            };
            factions[] = {};
        };*/
    };
};
class O_Truck_03_repair_F: Truck_03_base_F
{
    /* Liveries */
    class TextureSources
    {
        class Green
        {
            displayName = $STR_A3_TextureSources_Green0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUkhk_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUkhk_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ammo_RUkhk_CO.paa"
            };
            factions[] = {};
        };
        /*class Rus
        {
            displayName = $STR_A3_A_TextureSources_Rus0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUcamo_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUcamo_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ammo_RUcamo_CO.paa"
            };
            factions[] = {};
        };*/
    };
};
class O_Truck_03_ammo_F: Truck_03_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Truck_03_ammo_F.jpg";
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa",
        "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa",
        "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Containers_02_set_CO.paa"
    };

    /* Liveries */
    class TextureSources
    {
        class Hex
        {
            textures[] =
            {
                "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa",
                "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa",
                "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Containers_02_set_CO.paa"
            };
        };
        class GreenHex
        {
            textures[] =
            {
                "\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
                "\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
                "\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Containers_02_set_ghex_CO.paa"
            };
        };
        class Green
        {
            displayName = $STR_A3_TextureSources_Green0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUkhk_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUkhk_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_cargo_RUkhk_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Containers_02_set_RUkhk_CO.paa"
            };
            factions[] = {};
        };
        /*class Rus
        {
            displayName = $STR_A3_A_TextureSources_Rus0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUcamo_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUcamo_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_cargo_RUcamo_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Containers_02_set_RUkhk_CO.paa"
            };
            factions[] = {};
        };*/
    };
};
class O_Truck_03_fuel_F: Truck_03_base_F
{
    /* Liveries */
    class TextureSources
    {
        class Green
        {
            displayName = $STR_A3_TextureSources_Green0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUkhk_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUkhk_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_fuel_RUkhk_CO.paa"
            };
            factions[] = {};
        };
        /*class Rus
        {
            displayName = $STR_A3_A_TextureSources_Rus0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUcamo_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUcamo_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_fuel_RUcamo_CO.paa"
            };
            factions[] = {};
        };*/
    };
};
class O_Truck_03_medical_F: Truck_03_base_F
{
    /* Liveries */
    class TextureSources
    {
        class Green
        {
            displayName = $STR_A3_TextureSources_Green0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUkhk_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUkhk_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_cargo_RUkhk_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_cover_RUkhk_CO.paa"
            };
            factions[] = {};
        };
        /*class Rus
        {
            displayName = $STR_A3_A_TextureSources_Rus0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext01_RUcamo_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_ext02_RUcamo_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_cargo_RUcamo_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Truck_03_cover_RUcamo_CO.paa"
            };
            factions[] = {};
        };*/
    };
};

/* China */
class O_T_Truck_03_ammo_ghex_F: O_Truck_03_ammo_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Truck_03_ammo_ghex_F.jpg";
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
        "\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
        "\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Containers_02_set_ghex_CO.paa"
    };
};