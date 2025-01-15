class CfgVehicles
{
    /* Inheritance Tree */
	/* Arma 3 */
	class Heli_Attack_01_dynamicLoadout_base_F;

	/* Arma 3 Expeditionary Forces*/
	class EF_AH99J_dynamicLoadout_base: Heli_Attack_01_dynamicLoadout_base_F
	{
		class TextureSources
		{
			class Green
			{
				factions[] = {};
			};
			class MJTF
			{
				factions[] = {};
			};
			class Sand
			{
				factions[] = {};
			};
		};
	};

	/* Arma 3 Aegis */
	#include "cfgBLUFOR.hpp"	// US Woodland
};