class CfgPatches
{
	class A3_Aegis_Soft_F_Aegis_MRAP_02
	{
		addonRootClass = A3_Aegis_Soft_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Soft_F_Aegis,
			A3_Soft_F_Exp_MRAP_02,
			A3_Soft_F_MRAP_02
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgRUS.hpp" */
            O_R_MRAP_02_F,
            O_R_MRAP_02_hmg_F,
            O_R_MRAP_02_gmg_F,
            O_R_MRAP_02_ard_F,
            O_R_MRAP_02_hmg_ard_F,
            O_R_MRAP_02_gmg_ard_F
        };
		weapons[] = {/* Automated */};
	};
};