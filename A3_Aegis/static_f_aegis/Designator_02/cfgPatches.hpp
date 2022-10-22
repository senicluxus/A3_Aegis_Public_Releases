class CfgPatches
{
	class A3_Aegis_Static_F_Aegis_Designator_02
	{
		addonRootClass = A3_Aegis_Static_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Static_F_Aegis,
			A3_Static_F_Mark_Designator_02
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgOPFOR.hpp" */
            O_T_Static_Designator_02_F,
            O_T_Static_Designator_02_weapon_F,
            
            /* From "cfgRUS.hpp" */
            O_R_Static_Designator_02_F,
            O_R_Static_Designator_02_weapon_F,
            O_R_Static_Designator_02_ard_F
        };
		weapons[] = {/* Automated */};
	};
};