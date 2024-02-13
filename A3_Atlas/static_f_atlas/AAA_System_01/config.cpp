#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	class B_AAA_System_01_F;
	class Atlas_B_AAA_System_dark_01_F: B_AAA_System_01_F
	{
		faction = "BLU_A_F";
		hiddenSelectionsMaterials[] = {"A3_Atlas\static_f_atlas\AAA_System_01\data\AAA_system_dark_01.rvmat","A3_Atlas\static_f_atlas\AAA_System_01\data\AAA_system_dark_02.rvmat"};
		class TextureSources
		{
		};
		class Damage
		{
			tex[] = {};
			mat[] = {
				"a3\static_f_jets\aaa_system_01\data\AAA_system_01.rvmat",
				"A3_Atlas\static_f_atlas\AAA_System_01\data\AAA_system_dark_01_damage.rvmat",
				"A3_Atlas\static_f_atlas\AAA_System_01\data\AAA_system_dark_01_destruct.rvmat",
				"a3\static_f_jets\aaa_system_01\data\AAA_system_02.rvmat",
				"A3_Atlas\static_f_atlas\AAA_System_01\data\AAA_system_dark_02_damage.rvmat",
				"A3_Atlas\static_f_atlas\AAA_System_01\data\AAA_system_dark_02_destruct.rvmat"
			};
		};
	};
};