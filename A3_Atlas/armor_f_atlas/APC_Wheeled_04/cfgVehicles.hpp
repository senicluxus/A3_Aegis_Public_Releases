class CfgVehicles
{
    /* Inheritance Tree */
    class Wheeled_APC_F;
    class APC_Wheeled_04_base_F: Wheeled_APC_F
    {
        class TextureSources
        {
            class UNO
            {
                displayName = $STR_A3_A_TEXTURESOURCES_UNO0;
                author = "BranFlakes";
                textures[] =
                {
                    "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_body_UNO_CO.paa",
                    "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_body2_UNO_CO.paa",
                    "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_04\Data\APC_Wheeled_04_tow_UNO_CO.paa",
                    "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Green_CO.paa",
                    "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
                };
            };

        };
    };
    class O_R_APC_Wheeled_04_cannon_F: APC_Wheeled_04_base_F{};

    /* Factions */
    #include "cfgVenezuela.hpp"   // Venezuela
    #include "cfgUNO.hpp"         // UNO
};