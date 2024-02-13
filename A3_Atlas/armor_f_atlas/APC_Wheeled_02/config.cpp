#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
    class Wheeled_APC_F;
    class APC_Wheeled_02_base_F : Wheeled_APC_F
    {
      class AnimationSources;
      class Turrets;
      /* Liveries */
		  class TextureSources
		  {
			  class WoodlandHex
			  {
				  displayName = $STR_A3_A_TEXTURESOURCES_WHEX0;
				  author = $STR_A3_A_BranFlakes;
				  textures[] =
				  {
					  "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_WHEX_CO.paa",
					  "\A3_Atlas\Armor_F_Atlas\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_WHEX_CO.paa",
					  "\A3_Atlas\Soft_F_Atlas\MRAP_02\Data\Turret_WHEX_CO.paa",
					  "\A3\Armor_F\Data\camonet_CSAT_Hex_Green_CO.paa",
					  "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
				  };
				  factions[] = {};
			  };
		  };
    };
    class APC_Wheeled_02_base_v2_F : APC_Wheeled_02_base_F
    {     
      class AnimationSources;
      class Turrets : Turrets
      {
         class MainTurret;
      };
    }; 
    class APC_Wheeled_02_hmg_base_lxws: APC_Wheeled_02_base_v2_F
    {
        class Turrets : Turrets
        {
            class mg_station;
        };
    };
    class APC_Wheeled_02_unarmed_base_lxws : APC_Wheeled_02_base_v2_F
    {
      class AnimationSources;
      class Turrets;
      /* Liveries */
		  class TextureSources
		  {
			  class WoodlandHex
			  {
				  displayName = $STR_A3_A_TEXTURESOURCES_WHEX0;
				  author = $STR_A3_A_BranFlakes;
				  textures[] =
				  {
      				"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_WHEX_CO.paa",
      				"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_WHEX_CO.paa",
      				"A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa",
      				"A3\armor_f\data\cage_csat_green_CO.paa",
      				"\A3_Atlas\Armor_F_Atlas\APC_Wheeled_02\data\apc_wheeled_02_adds_02_WHEX_CO.paa"
				  };
				  factions[] = {};
			  };
		  };
    };

	// Arma 3 Atlas
	#include "cfgOpfor_Aegis.hpp"		// Belarus
    #include "cfgOpfor_Atlas.hpp"       // Takistani Army
    // Deprecated classes
    #include "deprecated.hpp"
};