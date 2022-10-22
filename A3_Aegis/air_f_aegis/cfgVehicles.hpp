class CfgVehicles
{
	/* Planes: Definitions & Inheritance */
    #include "\A3_Aegis\cfgPlanes.hpp"

    class Plane_Fighter_03_base_F;
	class Plane_Fighter_03_dynamicLoadout_base_F: Plane_Fighter_03_base_F
	{
		class Components;
	};
	class B_Plane_CAS_01_dynamicLoadout_F;
    class B_Plane_CAS_01_Cluster_F: B_Plane_CAS_01_dynamicLoadout_F
    {
        class EjectionSystem;
    };
	class O_Plane_CAS_02_dynamicLoadout_F;
	class O_Plane_CAS_02_Cluster_F: O_Plane_CAS_02_dynamicLoadout_F
    {
        class EjectionSystem;
    };
	class B_Plane_Fighter_01_F;
	class B_Plane_Fighter_01_Cluster_F: B_Plane_Fighter_01_F
    {
        class EjectionSystem;
    };
	class O_Plane_Fighter_02_F;
	class O_Plane_Fighter_02_Cluster_F: O_Plane_Fighter_02_F
    {
        class EjectionSystem;
    };
	class I_Plane_Fighter_04_F;
	class I_Plane_Fighter_04_Cluster_F: I_Plane_Fighter_04_F
    {
        class EjectionSystem;
    };
    class O_Plane_Fighter_03_dynamicLoadout_F: Plane_Fighter_03_dynamicLoadout_base_F
    {
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
                    class pylons7;
                };
            };
        };
        class EjectionSystem;
    };
	class Plane_Fighter_05_Base_F: Plane_Base_F
    {
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
            };
        };
        class EjectionSystem;
    };
	class B_Plane_Fighter_05_F:Plane_Fighter_05_Base_F{};

    /* Factions */
    #include "cfgBLUFOR.hpp"    // US & BAF
    #include "cfgOPFOR.hpp"     // IAF, China, & Argana
    #include "cfgRUS.hpp"       // Russia
    #include "cfgEAF.hpp"       // LDF
};