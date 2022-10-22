class CfgVehicles
{
    /* Inheritance Tree */
    class Plane;
    class UAV: Plane
    {
        class Components;
    };

    /* Bases */
	class UAV_05_Base_F: UAV
	{
        /* Sensors & Components
        - Let's allow the UCAV Sentinel to equip AGM-154D JSOWs and AIM-120D AMRAAMs
        */
		class Components: Components
		{
			class TransportPylonsComponent
			{
				class pylons
				{
					class pylon1
					{
						hardpoints[] +=
                        {
                            B_AMRAAM_D_INT,
                            B_AGM_154
                        };
					};
					class pylon2;
				};
			};
		};

        /* Liveries */
		class TextureSources
		{
			class DarkGrey
			{
				displayName = $STR_A3_A_TextureSources_DarkGrey0;
				factions[] = {};
			};
			class DarkGreyCamo
			{
				displayName = $STR_A3_A_TextureSources_DarkGreyCamo0;
				factions[] = {};
			};
		};
	};

    /* Factions */
	#include "cfgBLUFOR.hpp"    // US
};