#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Bases
	class Car_F;
	class MRAP_02_base_F: Car_F
	{
		 /* Liveries */
		class TextureSources
		{
			class WoodlandHex
			{
				displayName = $STR_A3_A_TEXTURESOURCES_WHEX0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\MRAP_02\Data\MRAP_02_ext_01_Whex_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\MRAP_02\Data\MRAP_02_ext_02_Whex_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\MRAP_02\Data\Turret_whex_CO.paa"
				};
				factions[] = {};
			};
		};
	};
	class MRAP_02_hmg_base_F: MRAP_02_base_F{};
	class MRAP_02_gmg_base_F: MRAP_02_hmg_base_F{};

	// Arma 3
	class O_MRAP_02_F;
	class O_MRAP_02_hmg_F;
	class O_MRAP_02_gmg_F;
	// Arma 3 Atlas
	#include "cfgOpfor_Aegis.hpp"       // Belarus
    /*
	#include "cfgCDF.hpp"               // CDF
    */
    // Deprecated classes
    #include "deprecated.hpp"
};