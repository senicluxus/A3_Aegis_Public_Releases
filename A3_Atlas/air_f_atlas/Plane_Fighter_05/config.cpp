#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Plane;
	class Plane_Base_F: Plane
	{
		class AnimationSources;
		class Components;
	};
	// Arma 3 Aegis
	class Plane_Fighter_05_Base_F: Plane_Base_F
	{
		class AnimationSources: AnimationSources
		{
			class pylon_1_hide;
			class pylon_2_hide;
			class pylon_3_hide;
			class pylon_4_hide;
			class pylon_5_hide;
			class pylon_6_hide;
		};
        class Components: Components
        {
            class TransportPylonsComponent
            {
			    class pylons
                {
                    class pylons1;
                    class pylons2;
                    class pylons3;
                    class pylons4;
                    class pylons5;
                    class pylons6;
                    class pylonBayRight1;
                    class pylonBayLeft1;
                    class pylonBayRight2;
                    class pylonBayLeft2;
                    class pylonCenter1;
                };
			    class presets
                {
                    class default;
                    class AA;
                    class CAS;
                    class Cluster;
                };
                class Bays
                {
                    class BayLeft1;
                    class BayRight1;
                };
            };
        };
		class TextureSources
		{
			class ADF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ADF0;
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Atlas\Air_F_Atlas\Plane_Fighter_05\Data\Plane_Fighter_05_ext1_ADF_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext2_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext3_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_pylon_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext_glass_CA.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int1_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int2_CO.paa"
				};
				factions[] = {Atlas_BLU_A_F};
			};
			class Desert
			{
				displayName = $STR_A3_A_TEXTURESOURCES_DESERT0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Air_F_Atlas\Plane_Fighter_05\Data\Plane_Fighter_05_ext1_desert_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext2_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext3_CO.paa",
					"\A3_Atlas\Air_F_Atlas\Plane_Fighter_05\Data\Plane_Fighter_05_pylon_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext_glass_CA.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int1_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int2_CO.paa"
				};
				factions[] = {Atlas_IND_I_F};
			};
		};
		class EjectionSystem;
	};
	class B_Plane_Fighter_05_F: Plane_Fighter_05_Base_F{};
	class B_Plane_Fighter_05_Stealth_F: Plane_Fighter_05_Base_F{};
	class Ejection_Seat_Plane_Fighter_05_base_F;
	// Arma 3 Atlas
	#include "cfgADF.hpp"               // ADF
    #include "cfgIDF.hpp"				// IDF
    // Deprecated classes
    #include "deprecated.hpp"
};