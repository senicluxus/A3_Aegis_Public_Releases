class CfgPatches
{
	class A3_Aegis_Boat_F_Aegis_SDV_01
	{
		addonRootClass = A3_Aegis_Boat_F_Aegis;
		requiredAddons[] = {A3_Aegis_Boat_F_Aegis};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBLUFOR.hpp" */
            B_T_SDV_01_F,
            B_A_SDV_01_F,
            B_A_SDV_01_tna_F,

            /* From "cfgOPFOR.hpp" */
            O_T_SDV_01_F,

            /* From "cfgRUS.hpp" */
            O_R_SDV_01_F,
            O_R_SDV_01_ard_F
        };
		weapons[] = {/* Automated */};
	};
};