#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Apex
	class VTOL_Base_F;
	class VTOL_01_base_F: VTOL_Base_F
	{
		class TextureSources
		{
			class Desert
			{
				displayName = $STR_A3_A_TEXTURESOURCES_DESERT0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Air_F_Atlas\VTOL_01\Data\VTOL_01_EXT01_desert_CO.paa",
					"\A3_Atlas\Air_F_Atlas\VTOL_01\Data\VTOL_01_EXT02_desert_CO.paa",
					"\A3_Atlas\Air_F_Atlas\VTOL_01\Data\VTOL_01_EXT03_desert_CO.paa",
					"\A3_Atlas\Air_F_Atlas\VTOL_01\Data\VTOL_01_EXT04_desert_CO.paa",
					"\A3_Atlas\Air_F_Atlas\VTOL_01\Data\VTOL_01_signs_desert_CA.paa"
				};
				factions[] = {Atlas_IND_I_F};
			};
		};
	};
	class VTOL_01_infantry_base_F;
	class VTOL_01_vehicle_base_F;
	// Arma 3 Atlas
	#include "cfgIDF.hpp"				// IDF
};