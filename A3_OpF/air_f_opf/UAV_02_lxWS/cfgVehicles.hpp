class CfgVehicles
{
    /* Inheritance Tree */
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};

    /* Bases */
	class UAV_02_IED_Base_lxWS;

    /* Factions */
	#include "cfgChKDZ.hpp"	// Separatists
	#include "cfgTKM.hpp"	// Insurgents
	#include "cfgPartisans.hpp"	// Partisans
};