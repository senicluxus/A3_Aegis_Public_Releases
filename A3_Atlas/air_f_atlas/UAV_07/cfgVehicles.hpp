class CfgVehicles
{
    /* Inheritance Tree */
    #include "\A3_Aegis\cfgPlanes.hpp"
	class UAV: Plane
	{
		class NewTurret;
		class ViewPilot;
		class ViewOptics;
		class AnimationSources;
		class Components;
        class TextureSources;
	};

    /* Base Class */
    class Aegis_UAV_07_base_F: UAV
	{
        class TextureSources: TextureSources
		{
            class Luftwaffe
			{
				displayName = $STR_A3_A_TEXTURESOURCES_Luftwaffe0;
				author = $STR_A3_A_BranFlakes;
				textures[]=
				{
					"A3_Atlas\Air_f_Atlas\UAV_07\data\UAV_07_ext_01_variant_GER_CO.paa"
				};
				factions[]={};
			};
            class France
			{
				displayName = $STR_A3_A_TEXTURESOURCES_GreenFR0;
				author = $STR_A3_A_BranFlakes;
				textures[]=
				{
					"A3_Atlas\Air_f_Atlas\UAV_07\data\UAV_07_ext_01_variant_FR_CO.paa"
				};
				factions[]={};
			};
        };
    };

    /* Factions */
    #include "cfgBLUFOR_Atlas.hpp"      // Germany
    #include "cfgLegion.hpp"            // France
};