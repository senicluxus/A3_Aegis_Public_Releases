#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
    /* Inheritance Tree */
	class Helicopter_Base_H;

    /* Bases */
	class Heli_Light_02_base_F: Helicopter_Base_H
	{
		class TextureSources
		{
			class Marar
			{
				displayName = $STR_A3_A_TextureSources_Marar0;
				author = $STR_A3_A_BranFlakes;
				textures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_02\Data\Heli_Light_02_ext_Marar_CO.paa"};
				faction[] = {};
			};
			class UNO
			{
				displayName = $STR_A3_A_TEXTURESOURCES_UNO0;
				author = $STR_A3_A_BranFlakes;
				textures[] = {"\A3_Atlas\Air_F_Atlas\Heli_Light_02\Data\Heli_Light_02_ext_UN_CO.paa"};
				faction[] = {};
			};
		};
	};
	class Heli_Light_02_unarmed_base_F: Heli_Light_02_base_F{};
	class Heli_Light_02_dynamicLoadout_base_F: Heli_Light_02_base_F{};
	// Arma 3
	class O_Heli_Light_02_unarmed_F: Heli_Light_02_unarmed_base_F{};
	class O_Heli_Light_02_dynamicLoadout_F: Heli_Light_02_dynamicLoadout_base_F{};
	// Arma 3 Atlas
	#include "cfgOpfor_Aegis.hpp"       // Belarus
	#include "cfgOpfor_Atlas.hpp"       // Takistani Army
	#include "cfgVenezuela.hpp"			// Venezuela
	#include "cfgMarar.hpp"				// Marar
	#include "cfgUNO.hpp"				// United Nations
    // Deprecated classes
    #include "deprecated.hpp"
};