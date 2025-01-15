#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"

class CfgVehicles
{
	/* Inheritance Tree */
    #include "\A3_Aegis\cfgPlanes.hpp"

    /* Bases */
	class Plane_Civil_01_base_F: Plane_Base_F
	{
		class TextureSources
		{
			class HIMF
			{
				displayName = "HIMF";
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"A3_Atlas\Air_F_Atlas\Plane_Civil_01\Data\btt_ext_01_HIMF_CO.paa",
					"A3_Atlas\Air_F_Atlas\Plane_Civil_01\Data\btt_ext_02_HIMF_CO.paa",
					"A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
					"A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
				};
				factions[] = {};
			};
		};
	};
	// Arma 3 Atlas
	#include "cfgHIMF.hpp"				// HIMF
};