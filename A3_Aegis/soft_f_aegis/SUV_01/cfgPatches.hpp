class CfgPatches
{
	class A3_Aegis_Soft_F_Aegis_SUV_01
	{
		addonRootClass = A3_Aegis_Soft_F_Aegis;
		requiredAddons[] = {A3_Aegis_Soft_F_Aegis};
		requiredVersion = 0.1;
		units[] =
        {
			/* From "cfgCivil.hpp" */
			Aegis_C_SUV_01_lxWS,
			Aegis_C_SUV_01_F_Tanoa,
			Aegis_C_SUV_01_F_Enoch,
			Aegis_C_SUV_01_F_Malden,

            /* From "cfgION.hpp" */
            B_ION_SUV_01_F
        };
		weapons[] = {/* Automated */};
	};
};