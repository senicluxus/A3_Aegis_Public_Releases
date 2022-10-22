#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Helicopter_Base_F;
	class UAV_01_base_F: Helicopter_Base_F
	{
		class TextureSources
		{
			class ADF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ADF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Atlas\Air_F_Atlas\UAV_01\Data\UAV_01_IDF_CO.paa"};
				factions[] = {BLU_O_F};
			};
			/*
			class CDF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_CDF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Atlas\Air_F_Atlas\UAV_01\Data\UAV_01_CDF_CO.paa"};
				factions[] = {IND_W_F};
			};
            */
			class IDF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_IDF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Atlas\Air_F_Atlas\UAV_01\Data\UAV_01_IDF_CO.paa"};
				factions[] = {Atlas_IND_I_F};
			};
		};
	};
	class B_UAV_01_F;
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};
	// Arma 3 Atlas
	#include "cfgLegion.hpp"		    // Legionnaires
	#include "cfgBlufor_Atlas.hpp"		// Germany
	#include "cfgADF.hpp"				// ADF
	#include "cfgIDF.hpp"				// IDF
	#include "cfgUNO.hpp"				// UNO
    // Deprecated classes
    #include "deprecated.hpp"
};