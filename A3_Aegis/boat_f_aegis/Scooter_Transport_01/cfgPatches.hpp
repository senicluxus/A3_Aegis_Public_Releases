class CfgPatches
{
	class A3_Aegis_Boat_F_Aegis_Scooter_Transport_01
	{
		addonRootClass = A3_Aegis_Boat_F_Aegis;
		requiredAddons[] = {A3_Aegis_Boat_F_Aegis};
		requiredVersion = 0.1;
		units[] =
        {
			/* From "cfgCivil.hpp" */
			Aegis_C_Scooter_Transport_01_F_Malden,
			Aegis_C_Scooter_Transport_01_F_Tanoa

        };
		weapons[] = {/* Automated */};
	};
};