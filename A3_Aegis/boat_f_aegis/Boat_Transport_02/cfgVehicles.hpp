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

	/* Factions */
    class I_C_Boat_Transport_02_F;
	#include "cfgGendarmerie.hpp"

    /* Deprecated */
    #include "deprecated.hpp"
};