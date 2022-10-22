class CfgPatches
{
	class A3_Aegis_Soft_F_Aegis_MRAP_01
	{
		addonRootClass = A3_Aegis_Soft_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Soft_F_Aegis,
			A3_Soft_F_MRAP_01
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBLUFOR.hpp" */
            B_W_MRAP_01_F,
            B_W_MRAP_01_gmg_F,
            B_W_MRAP_01_hmg_F
        };
		weapons[] = {/* Automated */};
	};
};