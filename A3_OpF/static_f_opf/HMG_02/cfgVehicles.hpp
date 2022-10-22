class CfgVehicles
{
    /* Inheritance Tree */
	class StaticWeapon;
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets;
	};

    /* Bases */
	class HMG_02_base_F: StaticMGWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class AnimationSources
		{
			class Hide_Shield;
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

    /* Factions */
	#include "cfgChKDZ.hpp"     // Separatists
	#include "cfgTKM.hpp"       // Insurgents
    /*
	#include "cfgMilitia.hpp"   // Preppers
    */

    /* Deprecated */
	#include "deprecated.hpp"
};