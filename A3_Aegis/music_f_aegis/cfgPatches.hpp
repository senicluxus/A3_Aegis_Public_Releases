class CfgPatches
{
    /* Definitions */
    #include "\A3_Aegis\macros_urls.hpp"

	class A3_Aegis_Music_F_Aegis
	{
		author = $STR_A3_A_AveryTheKitty;
		name = "Arma 3 Aegis - Soundtrack";
		url = linkAegis;
		requiredAddons[] =
		{
			A3_Aegis_Data_F_Aegis,
			A3_Music_F,
			A3_Music_F_EPA,
			A3_Music_F_EPB
		};
		requiredVersion = 0.1;
		units[] = {/* Automated */};
		weapons[] = {/* Automated */};
	};
};