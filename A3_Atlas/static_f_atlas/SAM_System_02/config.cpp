#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	class B_SAM_System_02_F;
	class Atlas_B_SAM_System_dark_02_F: B_SAM_System_02_F
	{
		faction = "BLU_A_F";
		hiddenSelectionsMaterials[] = {"A3_Atlas\static_f_atlas\SAM_System_02\data\SAM_system_dark_02.rvmat"};
		class TextureSources
		{
		};
		class Damage
		{
			tex[] = {};
			mat[] = {
				"A3\Static_F_Jets\SAM_system_02\data\SAM_system_02.rvmat",
				"A3_Atlas\static_f_atlas\SAM_System_02\data\SAM_system_dark_02_damage.rvmat",
				"A3_Atlas\static_f_atlas\SAM_System_02\data\SAM_system_dark_02_destruct.rvmat"
			};
		};
	};
};