class CfgVehicles
{
	// Arma 3
	class Car_F;
	class Offroad_01_base_F: Car_F{};
    class Offroad_01_military_base_F: Offroad_01_base_F
    {
        class Turrets;
        class TextureSources
        {
            class UNO
            {
                displayName = $STR_A3_A_TEXTURESOURCES_UNO0;
                author = "BranFlakes";
                textures[] =
                {
                    "\A3_Atlas\Soft_F_Atlas\Offroad_01\Data\Offroad_01_ext_UN_CO.paa",
                    "\A3_Atlas\Soft_F_Atlas\Offroad_01\Data\Offroad_01_ext_UN_CO.paa"
                };
            };
        };
    };
    class Offroad_01_armed_base_F: Offroad_01_military_base_F{};
    class Offroad_01_military_covered_base_F: Offroad_01_military_base_F
    {
        class TextureSources
        {
            class UNO
            {
                displayName = $STR_A3_A_TEXTURESOURCES_UNO0;
                author = "BranFlakes";
                textures[] =
                {
                    "\A3_Atlas\Soft_F_Atlas\Offroad_01\Data\Offroad_01_ext_UN_CO.paa",
                    "\A3_Atlas\Soft_F_Atlas\Offroad_01\Data\Offroad_01_ext_UN_CO.paa",
                    "\A3_Atlas\Soft_F_Atlas\Offroad_01\Data\Offroad_01_ext_cover_UN_CO.paa"
                };
            };
        };
        class EventHandlers;
    };
    class Offroad_01_military_comms_base_F: Offroad_01_military_covered_base_F{};
    class I_G_Offroad_01_F: Offroad_01_military_base_F{};
	// Arma 3 Atlas
	#include "cfgUNO.hpp"               // UNO
};
