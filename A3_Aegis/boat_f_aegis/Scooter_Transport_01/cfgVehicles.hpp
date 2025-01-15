class CfgVehicles
{
    /* Bases */
	class Scooter_Transport_01_base_F;
	class C_Scooter_Transport_01_F: Scooter_Transport_01_base_F
	{
		crew = C_man_sport_1_F;
		typicalCargo[] =
		{
			C_man_sport_1_F
		};
	};	

	/* Factions */
	#include "cfgCivil.hpp"		// Civilian Rework Factions
};