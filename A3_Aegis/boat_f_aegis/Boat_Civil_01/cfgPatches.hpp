class CfgPatches
{
	class A3_Aegis_Boat_F_Aegis_Boat_Civil_01
	{
		addonRootClass = A3_Aegis_Boat_F_Aegis;
		requiredAddons[] = {A3_Aegis_Boat_F_Aegis};
		requiredVersion = 0.1;
		units[] =
        {
			/* From "cfgCivil.hpp" */
			Aegis_C_Boat_Civil_01_F_Malden,
			Aegis_C_Boat_Civil_01_Rescue_F_Malden,
			Aegis_C_Boat_Civil_01_F_Tanoa,
			Aegis_C_Boat_Civil_01_Rescue_F_Tanoa

        };
		weapons[] = {/* Automated */};
	};
};