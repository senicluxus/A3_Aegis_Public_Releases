#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
    // Arma 3
	class Plane_Base_F;
	class Plane_Fighter_01_Base_F: Plane_Base_F
	{
		class EjectionSystem;
    };
	class Ejection_Seat_Plane_Fighter_01_base_F;
	class B_Plane_Fighter_01_F: Plane_Fighter_01_Base_F{};
	class B_Plane_Fighter_01_Stealth_F: Plane_Fighter_01_Base_F{};
    // Arma 3 Atlas
    #include "cfgBlufor_Atlas.hpp"      // Germany
    // Deprecated classes
    #include "deprecated.hpp"
};