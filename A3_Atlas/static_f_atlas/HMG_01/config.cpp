#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class B_HMG_01_F;
	class O_HMG_01_F;
	class I_HMG_01_F;
	class B_HMG_01_A_F;
	class O_HMG_01_A_F;
	class I_HMG_01_A_F;
	class B_HMG_01_high_F;
	class O_HMG_01_high_F;
	class I_HMG_01_high_F;
	class B_HMG_01_support_F;
	class I_HMG_01_support_F: B_HMG_01_support_F
	{
		class assembleInfo;
	};
	class B_HMG_01_support_high_F;
	class I_HMG_01_support_high_F: B_HMG_01_support_high_F
	{
		class assembleInfo;
	};
	class B_HMG_01_weapon_F;
	class I_HMG_01_weapon_F: B_HMG_01_weapon_F
	{
		class assembleInfo;
	};
	class B_HMG_01_A_weapon_F;
	class I_HMG_01_A_weapon_F: B_HMG_01_A_weapon_F
	{
		class assembleInfo;
	};
	class B_HMG_01_high_weapon_F;
	class I_HMG_01_high_weapon_F: B_HMG_01_high_weapon_F
	{
		class assembleInfo;
	};
	// Arma 3 Atlas
	#include "cfgOpfor_Aegis.hpp"		// Belarus
    #include "cfgLegion.hpp"		    // Legionnaires
	#include "cfgBlufor_Atlas.hpp"		// Germany
    #include "cfgOpfor_Atlas.hpp"		// Takistani Army
	#include "cfgADF.hpp"				// ADF
	#include "cfgIDF.hpp"				// IDF
    // Deprecated classes
    #include "deprecated.hpp"
};