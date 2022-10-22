#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Enoch
	class UGV_02_Demining_Base_F;
	class UGV_02_Science_Base_F;
	class Weapon_Bag_Base;
	class UGV_02_backpack_base_F: Weapon_Bag_Base
	{
		class assembleInfo;
	};
	class UGV_02_Science_backpack_base_F: UGV_02_backpack_base_F{};
	class UGV_02_Demining_backpack_base_F: UGV_02_backpack_base_F{};
	// Arma 3 Atlas
	#include "cfgBlufor_Atlas.hpp"		// Germany
	#include "cfgADF.hpp"               // ADF
	#include "cfgIDF.hpp"				// IDF
	#include "cfgUNO.hpp"				// UNO
    // Deprecated classes
    #include "deprecated.hpp"
};