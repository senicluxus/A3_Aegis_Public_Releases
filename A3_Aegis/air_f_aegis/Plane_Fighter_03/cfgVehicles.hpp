class CfgVehicles
{
    /* Inheritance Tree */
	class Plane_Base_F;

    /* Bases */
	class Ejection_Seat_Plane_Fighter_03_base_F;
	class Plane_Fighter_03_base_F: Plane_Base_F
	{
        /* Liveries */
		class TextureSources
		{
			class Hex
			{
				factions[] = {};
			};
			class Green
			{
				factions[] = {};
			};
			class Grey
			{
				factions[] = {};
			};
		};

        class Components;
		class EjectionSystem;
	};
	class Plane_Fighter_03_dynamicLoadout_base_F: Plane_Fighter_03_base_F
    {
        class AnimationSources;

        /* Sensors & Components */
		class Components: Components
		{
			class TransportPylonsComponent
			{
                class Pylons
				{
					class Pylons1;
					class Pylons2;
					class Pylons3;
					class Pylons4;
					class Pylons5;
					class Pylons6;
					class Pylons7;
				};
				class Presets
				{
					class Default;
					class AA;
					class AT;
					class CAS;
					class Cluster;
				};
			};
		};
	};

	/* Factions */
	class I_Plane_Fighter_03_CAS_F: Plane_Fighter_03_base_F
	{
		scopeCurator = private;
		displayName = $STR_A3_CfgVehicles_Plane_Fighter_03_base_F0;
    };
	class I_Plane_Fighter_03_AA_F: I_Plane_Fighter_03_CAS_F
	{
		scopeCurator = private;
		displayName = $STR_A3_CfgVehicles_Plane_Fighter_03_base_F0;
    };
	class I_Plane_Fighter_03_dynamicLoadout_F: Plane_Fighter_03_dynamicLoadout_base_F
	{
		scopeCurator = public;
		displayName = $STR_A3_CfgVehicles_Plane_Fighter_03_base_F0;
		textureList[] = {Green,1};
	};
	#include "cfgOPFOR.hpp"     // IAF & Argana
};