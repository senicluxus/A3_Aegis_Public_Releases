class CfgPatches
{
    /* Definitions */
    #include "\A3_Aegis\macros_urls.hpp"

	class A3_Aegis_Functions_F_Aegis
	{
		author = $STR_A3_A_AveryTheKitty;
		name = "Arma 3 Aegis - Script Functions";
		url = linkAegis;
		requiredAddons[] =
        {
            A3_Aegis_Data_F_Aegis,
            A3_Functions_F_Warlords
        };
		requiredVersion = 0.1;
		units[] = {/* Automated */};
		weapons[] = {/* Automated */};
	};
};