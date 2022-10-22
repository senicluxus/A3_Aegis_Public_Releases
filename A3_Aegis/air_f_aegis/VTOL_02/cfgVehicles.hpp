class CfgVehicles
{
    /* Inheritance Tree */
	class VTOL_Base_F;

    /* Bases */
	class VTOL_02_base_F: VTOL_Base_F
	{
		class TextureSources
		{
			class Hex
			{
				factions[] = {};
			};
			class GreenHex
			{
				factions[] = {};
			};
		};
	};
	class VTOL_02_infantry_dynamicLoadout_base_F;
	class VTOL_02_vehicle_dynamicLoadout_base_F;

	/* Factions */
	class O_T_VTOL_02_infantry_dynamicLoadout_F: VTOL_02_infantry_dynamicLoadout_base_F
	{
		textureList[] =
		{
			GreenHex,1,
			Grey,0
		};
	};
	class O_T_VTOL_02_vehicle_dynamicLoadout_F: VTOL_02_vehicle_dynamicLoadout_base_F
	{
		textureList[] =
		{
			GreenHex,1,
			Grey,0
		};
	};
	#include "cfgOPFOR.hpp"     // IAF
};