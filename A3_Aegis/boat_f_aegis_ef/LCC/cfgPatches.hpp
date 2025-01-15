class CfgPatches
{
    /* Definitions */
    #include "\A3_Aegis\macros_urls.hpp"

	class A3_Aegis_Boat_F_Aegis_EF_LCC
	{
		addonRootClass = A3_Aegis_Boat_F_Aegis_EF;
		requiredAddons[] =
        {
            A3_Aegis_Data_F_Aegis,
            EF_Data,
			EF_LCC_C
        };
		requiredVersion = 0.1;
		skipWhenMissingDependencies = 1;
		units[] = 
		{
			/* From "cfgBLUFOR.hpp" */
			Aegis_B_A_LCC_01_EF,
			Aegis_B_A_LCC_01_Sideload_EF,
			Aegis_B_A_LCC_01_tna_EF,
			Aegis_B_A_LCC_01_Sideload_tna_EF,
			Aegis_B_A_LCC_01_wdl_EF,
			Aegis_B_A_LCC_01_Sideload_wdl_EF
			
		};
		weapons[] = {/* Automated */};
	};
};