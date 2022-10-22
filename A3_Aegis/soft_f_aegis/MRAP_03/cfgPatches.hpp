class CfgPatches
{
	class A3_Aegis_Soft_F_Aegis_MRAP_03
	{
		addonRootClass = A3_Aegis_Soft_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Soft_F_Aegis,
			A3_Soft_F_Beta_MRAP_03
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBLUFOR.hpp" */
            B_A_MRAP_03_F,
            B_A_MRAP_03_tna_F,
            B_A_MRAP_03_wdl_F,
            B_A_MRAP_03_hmg_F,
            B_A_MRAP_03_hmg_tna_F,
            B_A_MRAP_03_hmg_wdl_F,
            B_A_MRAP_03_gmg_F,
            B_A_MRAP_03_gmg_tna_F,
            B_A_MRAP_03_gmg_wdl_F
        };
		weapons[] = {/* Automated */};
	};
};