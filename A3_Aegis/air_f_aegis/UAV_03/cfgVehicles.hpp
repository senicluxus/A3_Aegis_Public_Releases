class CfgVehicles
{
    /* Inheritance Tree */
    class Helicopter_Base_F;

    /* Bases */
	class UAV_03_base_F: Helicopter_Base_F
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
					"\A3\Air_F_Exp\UAV_03\Data\UAV_03_1_CO.paa",
					"\A3\Air_F_Exp\UAV_03\Data\UAV_03_2_CO.paa"
				};
				factions[] = {};
			};
			class Black
			{
				displayName = $STR_A3_TextureSources_Black0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\UAV_03\Data\UAV_03_1_black_CO.paa",
					"\A3_Aegis\Air_F_Aegis\UAV_03\Data\UAV_03_2_black_CO.paa"
				};
				factions[] = {};
			};
		};
		textureList[] =
		{
			Green,1,
			Black,0
		};
	};
	class UAV_03_dynamicLoadout_base_F;

	/* Factions */
	#include "cfgBLUFOR.hpp"    // US
};