#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Plane_Base_F;
	class Plane_CAS_02_base_F: Plane_Base_F
	{
        /* Liveries */
		class TextureSources
		{
			class WoodlandHex
			{
				displayName = $STR_A3_A_TEXTURESOURCES_WHEX0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Air_F_Atlas\Plane_CAS_02\Data\Fighter02_ext01_WHEX_CO.paa",
					"\A3_Atlas\Air_F_Atlas\Plane_CAS_02\Data\Fighter02_ext02_WHEX_CO.paa"
				};
				factions[] = {};
			};
			class Ardistan
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ardi0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Air_F_Atlas\Plane_CAS_02\Data\Fighter02_ext01_ardi_CO.paa",
					"\A3_Atlas\Air_F_Atlas\Plane_CAS_02\Data\Fighter02_ext02_ardi_CO.paa"
				};
				factions[] = {};
			};
		};
	};
	class Plane_CAS_02_dynamicLoadout_base_F;
	class O_Plane_CAS_02_dynamicLoadout_F: Plane_CAS_02_dynamicLoadout_base_F
	{
		class EjectionSystem;
	};
    class Ejection_Seat_Plane_CAS_02_base_F;
	// Arma 3 Atlas
	#include "cfgOpfor_Aegis.hpp"       // Belarus
	#include "cfgVenezuela.hpp"
	#include "cfgArdistan.hpp"			//Ardistan
	/*
    #include "cfgCDF.hpp"				// CDF
    #include "cfgIDF.hpp"				// IDF
    */
    // Deprecated classes
    #include "deprecated.hpp"
};