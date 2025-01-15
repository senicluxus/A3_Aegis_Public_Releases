class CfgPatches
{
	class A3_Aegis_Soft_F_Aegis_EF_MRAP_01
	{
		addonRootClass = A3_Aegis_Soft_F_Aegis_EF;
		requiredAddons[]=
		{
			A3_Aegis_Soft_F_Aegis,
			EF_Hunter
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 0.1;
		units[] = 
        {
            /* From "cfgBLUFOR.hpp" */
            Aegis_B_W_MRAP_01_FSV_EF,
            Aegis_B_W_MRAP_01_AT_EF,
            Aegis_B_W_MRAP_01_LAAD_EF

        };
		weapons[] = {/* Automated */};
	};
};