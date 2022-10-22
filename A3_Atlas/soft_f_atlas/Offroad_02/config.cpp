#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
    // Arma 3 Apex
	class Car;
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class Offroad_02_base_F: Car_F
	{
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret{};
			class CargoTurret_02: CargoTurret_01{};
			class CargoTurret_03: CargoTurret_02{};
		};
		class TextureSources
		{
			class Jungle
			{
				displayName = $STR_A3_TEXTURESOURCES_JUNGLE0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
                {
                    "\A3_Atlas\Soft_F_Atlas\Offroad_02\Data\Offroad_02_ext_jungle_CO.paa",
                    "\A3_Atlas\Soft_F_Atlas\Offroad_02\Data\Offroad_02_ext_jungle_CO.paa",
                    "\A3_Atlas\Soft_F_Atlas\Offroad_02\Data\Offroad_02_int_jungle_CO.paa",
                    "\A3_Atlas\Soft_F_Atlas\Offroad_02\Data\Offroad_02_int_jungle_CO.paa"
                };
				materials[] =
                {
                    "\A3\Soft_F_Exp\Offroad_02\Data\Offroad_02_ext_2_metal.rvmat",
                    "\A3\Soft_F_Exp\Offroad_02\Data\Offroad_02_ext_chrome.rvmat",
                    "\A3\Soft_F_Exp\Offroad_02\Data\Offroad_02_int_metal.rvmat",
                    "\A3\Soft_F_Exp\Offroad_02\Data\Offroad_02_int_chrome.rvmat"
                };
				factions[] = {Atlas_BLU_H_F};
			};
		};
    };
	class Offroad_02_unarmed_base_F;
	class Offroad_02_LMG_base_F: Offroad_02_base_F
	{
		class Turrets: Turrets
		{
			class LMG_Turret;
			class CargoTurret_01;
		};
	};
	class Offroad_02_AT_base_F;
    // Arma 3 Atlas
    #include "cfgHIMF.hpp"              // HIMF
    // Deprecated classes
    #include "deprecated.hpp"
};