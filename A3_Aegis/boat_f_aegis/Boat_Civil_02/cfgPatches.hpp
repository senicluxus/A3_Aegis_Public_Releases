class CfgPatches
{
	class A3_Aegis_Boat_F_Aegis_Boat_Civil_02
	{
		addonRootClass = A3_Aegis_Boat_F_Aegis;
		requiredAddons[] = {A3_Aegis_Boat_F_Aegis};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgCivil.hpp" */
            C_Boat_Civil_02_F,
			Aegis_C_Boat_Civil_02_F_Malden,
			Aegis_C_Boat_Civil_02_F_Tanoa
        };
		weapons[] = {/* Automated */};
	};
};