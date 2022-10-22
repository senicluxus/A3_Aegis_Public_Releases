class CfgPatches
{
    /* Definitions */
    #include "\A3_Aegis\macros_urls.hpp"

	class A3_Aegis_Dubbing_Radio_F_Aegis
	{
		author = $STR_A3_A_AveryTheKitty;
		name = "Arma 3 Aegis - Radio Protocol";
		url = linkAegis;
		requiredAddons[] =
		{
			A3_Aegis_Data_F_Aegis,
			A3_Dubbing_Radio_F,
			A3_Dubbing_Radio_F_Enoch,
			A3_Dubbing_Radio_F_EXP
		};
		requiredVersion = 0.1;
		units[] = {/* Automated */};
		weapons[] = {/* Automated */};
	};
};