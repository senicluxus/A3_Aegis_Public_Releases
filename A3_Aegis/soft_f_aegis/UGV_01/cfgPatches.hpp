class CfgPatches
{
	class A3_Aegis_Soft_F_Aegis_UGV_01
	{
		addonRootClass = A3_Aegis_Soft_F_Aegis;
		requiredAddons[] =
		{
			A3_Drones_F_Soft_F_Gamma_UGV_01,
			A3_Aegis_Soft_F_Aegis,
			A3_Soft_F_Exp_UGV_01,
			A3_Soft_F_Orange_UGV_01
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBLUFOR.hpp" */
            B_UGV_01_medical_F,
            B_T_UGV_01_medical_olive_F,
            B_W_UGV_01_F,
            B_W_UGV_01_rcws_F,
            B_W_UGV_01_medical_F,
            B_A_UGV_01_F,
            B_A_UGV_01_tna_F,
            B_A_UGV_01_wdl_F,
            B_A_UGV_01_rcws_F,
            B_A_UGV_01_rcws_tna_F,
            B_A_UGV_01_rcws_wdl_F,
            B_A_UGV_01_medical_F,
            B_A_UGV_01_medical_tna_F,
            B_A_UGV_01_medical_wdl_F,

            /* From "cfgOPFOR.hpp" */
            O_UGV_01_medical_F,
            O_T_UGV_01_medical_ghex_F,

            /* From "cfgIndep.hpp" */
            I_UGV_01_medical_F,

            /* From "cfgRUS.hpp" */
            O_R_UGV_01_F,
            O_R_UGV_01_rcws_F,
            O_R_UGV_01_medical_F,
            O_R_UGV_01_ard_F,
            O_R_UGV_01_rcws_ard_F,
            O_R_UGV_01_medical_ard_F,

            /* From "cfgEAF.hpp" */
            I_E_UGV_01_medical_F,
            Aegis_B_E_UGV_01_F,
            Aegis_B_E_UGV_01_RCWS_F,
            Aegis_B_E_UGV_01_medical_F,

            /* From "cfgION.hpp" */
            Aegis_B_ION_UGV_01_F,
            Aegis_B_ION_UGV_01_rcws_F,
            Aegis_B_ION_UGV_01_medical_F,

            /* From "cfgSyndikat.hpp" */
            Aegis_I_C_UGV_01_F,
            Aegis_I_C_UGV_01_rcws_F
        };
		weapons[] = {/* Automated */};
	};
};