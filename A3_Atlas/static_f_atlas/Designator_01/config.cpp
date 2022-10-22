#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Marksman
	class B_Static_Designator_01_F;
	class B_Static_Designator_01_weapon_F;
	// Arma 3 Aegis
	class I_Static_Designator_01_F;
	class I_Static_Designator_01_weapon_F: B_Static_Designator_01_weapon_F
	{
		class assembleInfo;
	};
	// Arma 3 Atlas
	#include "cfgBlufor_Atlas.hpp"		// Germany
	#include "cfgADF.hpp"				// ADF
	#include "cfgIDF.hpp"				// IDF
};