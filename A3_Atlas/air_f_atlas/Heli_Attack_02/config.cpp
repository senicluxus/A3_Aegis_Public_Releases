#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	 /* Inheritance Tree */
    class Helicopter_Base_F;

    /* Bases */
	class Heli_Attack_02_base_F: Helicopter_Base_F
	{
    	/* Liveries */
		class TextureSources
		{
			class WoodlandHex
			{
				displayName = $STR_A3_A_TEXTURESOURCES_WHEX0;
				author = $STR_A3_A_Avery;
				textures[] = 
				{
					"\A3_Atlas\Air_F_Atlas\Heli_Attack_02\Data\Heli_Attack_02_body1_whex_CO.paa",
					"\A3_Atlas\Air_F_Atlas\Heli_Attack_02\Data\Heli_Attack_02_body2_whex_CO.paa"
				};
				faction[] = {};
			};	
		};
	};

	/* Arma 3 */
	class O_Heli_Attack_02_dynamicLoadout_F;
	/* Arma 3 Atlas */
	#include "cfgOpfor_Aegis.hpp"       // Belarus
	#include "cfgOpfor_Atlas.hpp"       // Takistani Army
	#include "cfgVenezuela.hpp"			//Venezuela
};