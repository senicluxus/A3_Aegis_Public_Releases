class CfgPatches
{
	class A3_Aegis_Boat_F_Aegis_Boat_Transport_02
	{
		addonRootClass = A3_Aegis_Boat_F_Aegis;
		requiredAddons[] = {A3_Aegis_Boat_F_Aegis};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgGendarmerie.hpp" */
            B_GEN_Boat_Transport_02_F
        };
		weapons[] = {/* Automated */};
	};
};