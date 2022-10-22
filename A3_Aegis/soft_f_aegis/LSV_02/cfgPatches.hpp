class CfgPatches
{
	class A3_Aegis_Soft_F_Aegis_LSV_02
	{
		addonRootClass = A3_Aegis_Soft_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Soft_F_Aegis,
			A3_Soft_F_Exp_LSV_02
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgOPFOR.hpp" */
            O_A_LSV_02_armed_F,
            O_A_LSV_02_unarmed_F,
            O_A_LSV_02_AT_F,

            /* From "cfgViper.hpp" */
            O_V_LSV_02_armed_F,
            O_V_LSV_02_armed_ghex_F,
            O_V_LSV_02_unarmed_F,
            O_V_LSV_02_unarmed_ghex_F,
            O_V_LSV_02_AT_F,
            O_V_LSV_02_AT_ghex_F,

            /* From "cfgRUS.hpp" */
            O_R_LSV_02_armed_F,
            O_R_LSV_02_unarmed_F,
            O_R_LSV_02_AT_F,
            O_R_LSV_02_armed_ard_F,
            O_R_LSV_02_unarmed_ard_F,
            O_R_LSV_02_AT_ard_F
        };
		weapons[] = {/* Automated */};
	};
};