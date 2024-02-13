class CfgPatches
{
    /* Definitions */
    #include "\A3_Aegis\macros_urls.hpp"

	class A3_Aegis_Data_F_Aegis
	{
		author = $STR_A3_A_AveryTheKitty;
		name = "Arma 3 Aegis - Main Configuration";
		url = linkAegis;
		requiredAddons[] =
		{
            A3_3DEN,
			A3_Data_F,
			A3_Data_F_Enoch,
			A3_Data_F_Enoch_Loadorder,
			A3_Data_F_Exp,
			Data_F_LXWS
		};
		requiredVersion = 0.1;
		units[] = {/* Automated */};
		weapons[] = {/* Automated */};
	};
};