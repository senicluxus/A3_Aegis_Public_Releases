#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{

	class MBT_02_base_F;
	// Arma 3
	class O_MBT_02_base_F: MBT_02_base_F
	{
		class TextureSources
		{
			class Sep_01
			{
				displayName = "Separatist";
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_OpF\armor_f_opf\MBT_02\Data\MBT_02_body_opf_CO.paa",
					"\A3_OpF\armor_f_opf\MBT_02\Data\MBT_02_turret_opf_CO.paa",
					"\A3_OpF\armor_f_opf\MBT_02\Data\MBT_02_opf_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_green_CO.paa"
				};
				factions[] = {};
			};
		};
	};
    class O_MBT_02_cannon_F: O_MBT_02_base_F{};
	// Arma 3 Opposing Forces
	#include "cfgChKDZ.hpp"				// Separatists
	// Deprecated classes
	#include "deprecated.hpp"
};