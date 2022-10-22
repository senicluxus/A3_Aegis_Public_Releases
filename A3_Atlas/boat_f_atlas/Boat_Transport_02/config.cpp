#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Apex
	class Boat_F;
	class Boat_Transport_02_base_F: Boat_F
	{
		class TextureSources
		{
			class Black
			{
				factions[] += {Atlas_BLU_H_F};
			};
		};
	};
	// Arma 3 Atlas
	#include "cfgHIMF.hpp"
    // Deprecated classes
    #include "deprecated.hpp"
};