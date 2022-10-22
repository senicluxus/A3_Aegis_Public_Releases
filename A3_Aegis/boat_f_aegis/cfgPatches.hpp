class CfgPatches
{
    /* Definitions */
    #include "\A3_Aegis\macros_urls.hpp"

	class A3_Aegis_Boat_F_Aegis
	{
		author = $STR_A3_A_AveryTheKitty;
		name = "Arma 3 Aegis - Boats and Submersibles";
		url = linkAegis;
		requiredAddons[] =
        {
            A3_Aegis_Data_F_Aegis,
            A3_Boat_F_Destroyer_Destroyer_01,
            A3_Boat_F_Gamma_Boat_Civil_04,
            A3_Boat_F_Jets_Carrier_01
        };
		requiredVersion = 0.1;
		units[] = {/* Automated */};
		weapons[] = {/* Automated */};
	};
};