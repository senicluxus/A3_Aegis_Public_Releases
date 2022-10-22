class CfgPatches
{
	class A3_Aegis_Static_F_Aegis_SAM_System_03
	{
		addonRootClass = A3_Aegis_Static_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Static_F_Aegis,
			A3_Static_F_Sams_SAM_System_03
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBLUFOR.hpp" */
            B_T_SAM_System_03_F,
            B_W_SAM_System_03_F,
            B_A_SAM_System_03_F,
            B_A_SAM_System_03_tna_F,
            B_A_SAM_System_03_wdl_F
        };
		weapons[] = {/* Automated */};
	};
};