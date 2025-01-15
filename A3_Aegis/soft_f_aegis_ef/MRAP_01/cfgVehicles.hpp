class CfgVehicles
{
    /* Bases */
	class MRAP_01_gmg_base_F;
    class EF_MRAP_01_FSV_Base: MRAP_01_gmg_base_F
    {
        class TextureSources
        {
            class Sand
            {
                factions[] = {};
            };
            class Olive
            {
                factions[] = {};
            };
            class Woodland
			{
				DisplayName = $STR_A3_A_TEXTURESOURCES_WOODLAND0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
        			"\A3_Aegis\Soft_F_Aegis\MRAP_01\Data\MRAP_01_base_wdl_CO.paa",
        			"\A3\Soft_F_Exp\MRAP_01\Data\MRAP_01_adds_olive_CO.paa",
        			"\ef\ef_hunter\data\hunter_01_olive_CO.paa", 
                    "\ef\ef_hunter\data\hunter_02_olive_CO.paa"
    			};
				factions[] = {};
			};
        };
    };
    class EF_MRAP_01_LAAD_base: EF_MRAP_01_FSV_base{};
    class EF_MRAP_01_AT_base: EF_MRAP_01_FSV_base{};

    /* Factions */
    #include "cfgBLUFOR.hpp"    // US Factions
};