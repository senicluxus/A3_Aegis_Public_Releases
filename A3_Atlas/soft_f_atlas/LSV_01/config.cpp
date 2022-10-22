#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Car_F;
	class LSV_01_base_F: Car_F
	{
		class TextureSources
        {
			class Olive;
        };
    };
	class LSV_01_armed_base_F: LSV_01_base_F{};
	class LSV_01_unarmed_base_F: LSV_01_base_F{};
	class LSV_01_light_base_F: LSV_01_base_F{};
	class LSV_01_AT_base_F: LSV_01_base_F{};
	// Arma 3 Atlas
	#include "cfgLegion.hpp"               // Legionnaires
    // Deprecated classes
    #include "deprecated.hpp"
};