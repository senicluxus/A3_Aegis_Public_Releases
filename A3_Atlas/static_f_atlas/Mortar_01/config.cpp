#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class StaticMortar;
	class Mortar_01_base_F: StaticMortar
	{
		class TextureSources
		{
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3\Static_F\Mortar_01\Data\Mortar_01_CO.paa"};
				factions[] +=
				{
					Atlas_BLU_L_F,
					Atlas_BLU_G_F,
					Atlas_BLU_A_F,
					Atlas_IND_C_F,
					Atlas_IND_I_F
				};
			};
		};
	};
	class B_Mortar_01_F;
	class O_Mortar_01_F;
	class I_Mortar_01_F;
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo{};
	};
	class B_Mortar_01_support_F;
	class B_Mortar_01_weapon_F: Weapon_Bag_Base{};
	// Arma 3 Atlas
	#include "cfgOpfor_Aegis.hpp"		// Belarus
    #include "cfgLegion.hpp"		    // Legionnaires
	#include "cfgBlufor_Atlas.hpp"		// Germany
    #include "cfgOpfor_Atlas.hpp"		// Takistani Army
    #include "cfgVenezuela.hpp"			//Venezuela
	#include "cfgADF.hpp"				// ADF
	#include "cfgIDF.hpp"				// IDF
    // Deprecated classes
    #include "deprecated.hpp"
};