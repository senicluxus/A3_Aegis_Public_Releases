class CfgPatches
{
	class A3_Opf_Static_F_Opf_HMG_02
	{
		addonRootClass = A3_Opf_Static_F_Opf;
		requiredAddons[] =
		{
			A3_Aegis_Static_F_Aegis,
			A3_Opf_Static_F_Opf,
			A3_Static_F_Oldman_HMG_02
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgChKDZ.hpp" */
            Opf_O_S_HMG_02_F,
            Opf_O_S_HMG_02_high_F,
            Opf_I_S_HMG_02_F,
            Opf_I_S_HMG_02_high_F,

            /* From "cfgTKM.hpp" */
            Opf_I_I_HMG_02_F,
            Opf_I_I_HMG_02_high_F,
            Opf_O_I_HMG_02_F,
            Opf_O_I_HMG_02_high_F,

            /* From "cfgMilitia.hpp" */
            Opf_I_P_HMG_02_F,
            Opf_I_P_HMG_02_high_F
        };
		weapons[] = {/* Automated */};
	};
};