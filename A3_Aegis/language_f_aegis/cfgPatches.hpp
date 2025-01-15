class CfgPatches
{
    /* Definitions */
    #include "\A3_Aegis\macros_urls.hpp"

	class A3_Aegis_Language_F_Aegis
	{
		author = $STR_A3_A_AveryTheKitty;
		name = "Arma 3 Aegis - Texts and Translations";
		url = linkAegis;
		requiredAddons[] =
        {
            A3_Aegis_Data_F_Aegis,
			A3_Language_F,
            A3_Language_F_Beta,
            A3_Language_F_Enoch,
			A3_Language_F_Exp,
			Language_f_lxWS
        };
		requiredVersion = 0.1;
		units[] = {/* Automated */};
		weapons[] = {/* Automated */};
	};
};