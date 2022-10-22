#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Oldman
	class StaticWeapon;
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets;
	};
	class HMG_02_base_F: StaticMGWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class AnimationSources
		{
			class Hide_Rail;
		};
	};
	class HMG_02_high_base_F: HMG_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
	};
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};
	class B_HMG_02_support_F;
	class B_HMG_02_support_high_F;
	class B_HMG_02_weapon_F: Weapon_Bag_Base{};
	class B_HMG_02_high_weapon_F: Weapon_Bag_Base{};
	// Arma 3 Atlas
    #include "cfgLegion.hpp"		    // Legionnaires
	#include "cfgBlufor_Atlas.hpp"		// Germany
    #include "cfgOpfor_Atlas.hpp"		// Takistani Army
    #include "cfgVenezuela.hpp"			//Venezuela
	#include "cfgADF.hpp"				// ADF
	#include "cfgHIMF.hpp"		        // HIMF
	#include "cfgIDF.hpp"				// IDF
    // Deprecated classes
    #include "deprecated.hpp"
};