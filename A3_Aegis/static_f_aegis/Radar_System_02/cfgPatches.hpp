class CfgPatches
{
	class A3_Aegis_Static_F_Aegis_Radar_System_02
	{
		addonRootClass = A3_Aegis_Static_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Static_F_Aegis,
			A3_Static_F_Sams_Radar_System_02
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgOPFOR.hpp" */
            O_T_Radar_System_02_F,
            
            /* From "cfgRUS.hpp" */
            O_R_Radar_System_02_F,
            O_R_Radar_System_02_ard_F
        };
		weapons[] = {/* Automated */};
	};
};