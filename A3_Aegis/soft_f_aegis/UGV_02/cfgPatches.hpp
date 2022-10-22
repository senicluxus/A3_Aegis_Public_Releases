class CfgPatches
{
	class A3_Aegis_Soft_F_Aegis_UGV_02
	{
		addonRootClass = A3_Aegis_Soft_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Soft_F_Aegis,
			A3_Soft_F_Enoch_UGV_02,
			A3_Supplies_F_Enoch_Bags
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBLUFOR.hpp" */
            B_T_UGV_02_Demining_F,
            B_W_UGV_02_Demining_F,
            B_A_UGV_02_Demining_F,
            B_A_UGV_02_Demining_tna_F,
            B_A_UGV_02_Demining_wdl_F,

            /* From "cfgBLUFOR.hpp" */
            O_T_UGV_02_Demining_F,

            /* From "cfgRUS.hpp" */
            O_R_UGV_02_Demining_F,
            O_R_UGV_02_Demining_backpack_F,
            O_R_UGV_02_Demining_ard_F,

            /* From "cfgION.hpp" */
            B_ION_UGV_02_Demining_F,
            B_ION_UGV_02_Demining_backpack_F
        };
		weapons[] = {/* Automated */};
	};
};