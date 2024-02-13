#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	class B_Ship_MRLS_01_F;
	class Atlas_B_Ship_MRLS_dark_01_F: B_Ship_MRLS_01_F
	{
		faction = "BLU_A_F";
		hiddenSelectionsMaterials[] = {"A3_Atlas\static_f_atlas\Ship_MRLS_01\data\Ship_MRLS_dark_01.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {
				"A3\Static_F_Destroyer\Ship_MRLS_01\Data\Ship_MRLS_01.rvmat",
				"A3_Atlas\static_f_atlas\Ship_MRLS_01\data\Ship_MRLS_dark_01_damage.rvmat",
				"A3_Atlas\static_f_atlas\Ship_MRLS_01\data\Ship_MRLS_dark_01_destruct.rvmat"
			};
		};
	};
};