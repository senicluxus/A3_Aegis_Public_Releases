#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Laws of War
	class Helicopter_Base_F;
	class UAV_06_base_F: Helicopter_Base_F
	{
		class TextureSources
		{
			class Blufor;
			class ADF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ADF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
                {
                    "\A3_Atlas\Air_F_Atlas\UAV_06\Data\B_G_UAV_06_CO.paa",
                    "\A3_Atlas\Air_F_Atlas\UAV_06\Data\B_G_UAV_06_CO.paa"
                };
				factions[] = {Atlas_BLU_A_F};
			};
			class IDF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_IDF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Atlas\Air_F_Atlas\UAV_06\Data\I_I_UAV_06_CO.paa"};
				factions[]= {Atlas_IND_I_F};
			};
		};
	};
	class UAV_06_medical_base_F: UAV_06_base_F
	{
		class TextureSources
		{
			class Blufor;
			class ADF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ADF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
                {
                    "\A3_Atlas\Air_F_Atlas\UAV_06\Data\B_G_UAV_06_medical_CO.paa",
                    "\A3_Atlas\Air_F_Atlas\UAV_06\Data\B_G_UAV_06_medical_CO.paa"
                };
				factions[] = {Atlas_BLU_A_F};
			};
			class IDF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_IDF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Air_F_Atlas\UAV_06\Data\I_I_UAV_06_medical_CO.paa",
					"\A3_Atlas\Air_F_Atlas\UAV_06\Data\I_I_UAV_06_medical_CO.paa"
				};
				factions[] = {Atlas_IND_I_F};
			};
		};
	};
	class Box_UAV_06_base_F;
	class Box_UAV_06_medical_base_F;
    class Weapon_Bag_Base;
	class UAV_06_backpack_base_F: Weapon_Bag_Base
	{
		class assembleInfo;
	};
	class UAV_06_medical_backpack_base_F: UAV_06_backpack_base_F{};
	// Arma 3 Atlas
	#include "cfgBlufor_Atlas.hpp"      // Germany
	#include "cfgADF.hpp"				// ADF
	#include "cfgIDF.hpp"				// IDF
	#include "cfgUNO.hpp"				// UNO
    // Deprecated classes
    #include "deprecated.hpp"
};