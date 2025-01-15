class CfgVehicles
{
	/* Inheritance Tree */
	class Boat_F;

    /* Bases */
	class Boat_Transport_02_base_F: Boat_F
	{
        /* Liveries */
		class TextureSources
		{
			class Black
			{
				factions[] = {};
			};
		};
	};
	class C_Boat_Transport_02_F: Boat_Transport_02_base_F
	{
		crew = C_man_sport_1_F;
		typicalCargo[] =
		{
			C_man_sport_1_F,
			C_man_sport_1_F
		};
	};	

	/* Factions */
    class I_C_Boat_Transport_02_F;
	#include "cfgGendarmerie.hpp"
	#include "cfgCivil.hpp"

    /* Deprecated */
    #include "deprecated.hpp"
};