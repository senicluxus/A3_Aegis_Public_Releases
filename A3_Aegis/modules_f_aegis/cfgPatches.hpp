class CfgPatches
{
    /* Definitions */
    #include "\A3_Aegis\macros_urls.hpp"

	class A3_Aegis_Modules_F_Aegis
	{
		author = $STR_A3_A_AveryTheKitty;
		name = "Arma 3 Aegis - Scripted Modules";
		url = linkAegis;
		requiredAddons[] =
		{
			A3_Aegis_Data_F_Aegis,
			A3_Modules_F,
			A3_Modules_F_Curator_Animals,
			A3_Modules_F_Curator_Effects
		};
		requiredVersion = 0.1;
		units[] =
        {
            ModuleAnimalsCow_F,
            ModuleAnimalsCrow_F,
            ModuleAnimalsDog_F,
            ModuleAnimalsEagle_F
        };
		weapons[] = {/* Automated */};
	};
};