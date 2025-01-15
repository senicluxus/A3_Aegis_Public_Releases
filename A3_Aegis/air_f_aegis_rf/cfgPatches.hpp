class CfgPatches
{
    /* Definitions */
    #include "\A3_Aegis\macros_urls.hpp"

	class A3_Aegis_Air_F_Aegis_RF
	{
		author = $STR_A3_A_Ravenholme;
		name = "Arma 3 Aegis - Reaction Force Aircraft";
		url = linkAegis;
		requiredAddons[] = 
        {
            A3_Aegis_Data_F_Aegis,
			A3_Aegis_Air_F_Aegis,
            RF_Air
        };
		requiredVersion = 0.1;
        skipWhenMissingDependencies = 1;
		units[] ={};
		weapons[] = {/* Automated */};
	};
};