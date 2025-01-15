class CfgPatches
{
    /* Definitions */
    #include "\A3_Aegis\macros_urls.hpp"

	class A3_Aegis_Boat_F_Aegis_EF
	{
		author = $STR_A3_A_Ravenholme;
		name = "Arma 3 Aegis - Expeditionary Forces Boats";
		url = linkAegis;
		requiredAddons[] =
        {
            A3_Aegis_Data_F_Aegis,
            EF_Data
        };
		requiredVersion = 0.1;
		skipWhenMissingDependencies = 1;
		units[] = {/* Automated */};
		weapons[] = {/* Automated */};
	};
};