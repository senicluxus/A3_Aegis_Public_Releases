class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_UAV_01
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Air_F_Aegis,
			A3_Air_F_Orange_UAV_01,
			A3_Drones_F_Air_F_Gamma_UAV_01,
			A3_Supplies_F_Orange_Bags
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBLUFOR.hpp" */
            B_T_UAV_01_F,
            B_W_UAV_01_F,
            Aegis_B_D_UAV_01_F,
            B_A_UAV_01_F,
            B_A_UAV_01_tna_F,
            B_A_UAV_01_wdl_F,

            /* From "cfgOPFOR.hpp" */
            O_T_UAV_01_F,

            /* From "cfgRUS.hpp" */
            O_R_UAV_01_F,
            O_R_UAV_01_backpack_F,
            O_R_UAV_01_ard_F,

            /* From "cfgION.hpp" */
            B_ION_UAV_01_F,
            B_ION_UAV_01_backpack_F,

            /* From "cfgBluEAF.hpp" */
            Aegis_B_E_UAV_01_F,
            Aegis_B_E_UAV_01_backpack_F
        };
		weapons[] = {/* Automated */};
	};
};