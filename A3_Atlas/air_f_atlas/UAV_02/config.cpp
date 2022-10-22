#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class UAV;
	class UAV_02_base_F: UAV
	{
		class TextureSources
		{
			class Blufor;
			class IDF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_IDF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Atlas\Air_F_Atlas\UAV_02\Data\UAV_02_IDF_CO.paa"};
				factions[] = {Atlas_IND_I_F};
			};
		};
	};
	class UAV_02_dynamicLoadout_base_F: UAV_02_base_F{};
	class B_UAV_02_dynamicLoadout_F: UAV_02_dynamicLoadout_base_F{};
	// Arma 3 Atlas
	#include "cfgBlufor_Atlas.hpp"      // Germany
    /*
	#include "cfgADF.hpp"				// ADF
	#include "cfgCDF.hpp"				// CDF
    */
	#include "cfgIDF.hpp"				// IDF
    // Deprecated classes
    #include "deprecated.hpp"
};