#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	class B_SAM_System_01_F;
	class B_SAM_System_dark_01_F: B_SAM_System_01_F
	{
		faction = "BLU_A_F";
		hiddenSelectionsMaterials[] = {"A3_Atlas\static_f_atlas\SAM_System_01\data\SAM_system_dark_01.rvmat"};
		class TextureSources
		{
		};
		class Damage
		{
			tex[] = {};
			mat[] = {
				"A3\Static_F_Jets\SAM_system_01\data\SAM_system_01.rvmat",
				"A3_Atlas\static_f_atlas\SAM_System_01\data\SAM_system_dark_01_damage.rvmat",
				"A3_Atlas\static_f_atlas\SAM_System_01\data\SAM_system_dark_01_destruct.rvmat"
			};
		};
	};
};