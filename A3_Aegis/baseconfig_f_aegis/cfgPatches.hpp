class CfgPatches
{
    /* Definitions */
    #include "\A3_Aegis\macros_urls.hpp"

	class A3_Aegis_BaseConfig_F_Aegis
	{
		author = $STR_A3_A_AveryTheKitty;
		name = "Arma 3 Aegis - Legacy Definitions";
		url = linkAegis;
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {/* Automated */};
		weapons[] = {/* Automated */};
	};

    /* Deprecated */
	#include "deprecated.hpp"
};