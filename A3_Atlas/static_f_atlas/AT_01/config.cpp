#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	/* Definitions */
    #include "\A3_Aegis\macros_supportBags.hpp"
	
	// Arma 3
	class B_static_AT_F;
	class O_static_AT_F;
	class O_R_Static_AT_F;
	class I_static_AT_F;
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};
	// Arma 3 Atlas
	#include "cfgOpfor_Aegis.hpp"		// Belarus
    #include "cfgLegion.hpp"		    // Legionnaires
	#include "cfgBlufor_Atlas.hpp"		// Germany
    #include "cfgOpfor_Atlas.hpp"		// Takistani Army
    #include "cfgVenezuela.hpp"			//Venezuela
	#include "cfgADF.hpp"				// ADF
	#include "cfgIDF.hpp"				// IDF
	#include "cfgArdistan.hpp"			// Ardistan
	#include "cfgKarzeghistan.hpp"		// Karzeghistan
    // Deprecated classes
    #include "deprecated.hpp"
};