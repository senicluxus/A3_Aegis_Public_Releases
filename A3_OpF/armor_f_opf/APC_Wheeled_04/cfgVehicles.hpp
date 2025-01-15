class CfgVehicles
{
    /* Inheritance Tree */
    class Wheeled_APC_F;
    class APC_Wheeled_04_base_F: Wheeled_APC_F
    {
        class TextureSources
        {
            class Sep_01
            {
                displayName = $STR_A3_O_TEXTURESOURCES_SEPARATIST_010;
                author = $STR_A3_A_Lukinator96;
                textures[] =
                {
                    "\A3_Opf\Armor_F_Opf\APC_Wheeled_04\Data\APC_Wheeled_04_body_Chdkz_CO.paa",
                    "\A3_Opf\Armor_F_Opf\APC_Wheeled_04\Data\APC_Wheeled_04_body2_Chdkz_CO.paa",
                    "\A3_Opf\Armor_F_Opf\APC_Wheeled_04\Data\APC_Wheeled_04_tow_chdkz_CO.paa",
                    "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Green_CO.paa",
                    "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
                };
            };
        };
    };
    class APC_Wheeled_04_export_base_F: APC_Wheeled_04_base_F
    {
        class TextureSources
        {
            class Sep_01
            {
                displayName = $STR_A3_O_TEXTURESOURCES_SEPARATIST_010;
                author = $STR_A3_A_Lukinator96;
                textures[] =
                {
                    "\A3_Opf\Armor_F_Opf\APC_Wheeled_04\Data\APC_Wheeled_04_export_body_Chdkz_CO.paa",
                    "\A3_Opf\Armor_F_Opf\APC_Wheeled_04\Data\APC_Wheeled_04_body2_Chdkz_CO.paa",
                    "\A3_Opf\Armor_F_Opf\APC_Wheeled_04\Data\APC_Wheeled_04_export_chdkz_CO.paa",
                };
            };
            class Para_01
            {
                displayName = $STR_A3_O_CfgFactionClasses_OPF_P_F0;
                author = $STR_A3_A_BranFlakes;
                textures[] =
                {
                    "\A3_Opf\Armor_F_Opf\APC_Wheeled_04\Data\APC_Wheeled_04_body_export_paramilitary_co.paa",
                    "\A3_Opf\Armor_F_Opf\APC_Wheeled_04\Data\APC_Wheeled_04_body2_paramilitary_co.paa",
                    "\A3_Opf\Armor_F_Opf\APC_Wheeled_04\Data\APC_Wheeled_04_export_Para_co.paa"
                };
            };
        };
    };

    /* Factions */
    #include "cfgChKDZ.hpp"         // Separatists
    #include "cfgPara.hpp"          // Paramilitary
};