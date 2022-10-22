class CfgPatches
{
	class A3_Aegis_Boat_F_Aegis_Boat_Armed_01
	{
		addonRootClass = A3_Aegis_Boat_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Boat_F_Aegis,
			A3_Boat_F_Beta_Boat_Armed_01,
			A3_Boat_F_Boat_Armed_01
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBLUFOR.hpp" */
            B_A_Boat_Armed_01_hmg_F,
            B_A_Boat_Armed_01_hmg_tna_F,

            /* From "cfgRUS.hpp" */
            O_R_Boat_Armed_01_hmg_F,
            O_R_Boat_Armed_01_hmg_ard_F
        };
		weapons[] = {/* Automated */};
	};
};