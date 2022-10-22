#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Plane_Base_F;
	class Ejection_Seat_Plane_Fighter_03_base_F;
	class Plane_Fighter_03_base_F: Plane_Base_F
	{
		class TextureSources
		{
			class Hex
			{
				factions[] += {Atlas_OPF_T_F};
			};
			class Grey
			{
				factions[] += {Atlas_OPF_T_F};
			};
		};
		class AnimationSources;
		class EjectionSystem;
	};
	class Plane_Fighter_03_dynamicLoadout_base_F: Plane_Fighter_03_base_F{};
	// Arma 3 Aegis
	class O_Plane_Fighter_03_dynamicLoadout_F: Plane_Fighter_03_dynamicLoadout_base_F{};
	// Arma 3 Atlas
	#include "cfgOpfor_Atlas.hpp"		// Takistani Army
    /*
	#include "cfgCDF.hpp"		        // CDF
    */
};