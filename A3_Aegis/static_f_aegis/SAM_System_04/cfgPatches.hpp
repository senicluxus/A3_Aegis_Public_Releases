class CfgPatches
{
	class A3_Aegis_Static_F_Aegis_SAM_System_04
	{
		addonRootClass = A3_Aegis_Static_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Static_F_Aegis,
			A3_Static_F_Sams_SAM_System_04
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgOPFOR.hpp" */
            O_T_SAM_System_04_F,

            /* From "cfgRUS.hpp" */
            O_R_SAM_System_04_F,
            O_R_SAM_System_04_ard_F
        };
		weapons[] = {/* Automated */};
	};
};