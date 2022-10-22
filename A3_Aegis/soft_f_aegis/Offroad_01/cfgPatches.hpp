class CfgPatches
{
	class A3_Aegis_Soft_F_Aegis_Offroad_01
	{
		addonRootClass = A3_Aegis_Soft_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Soft_F_Aegis,
			A3_Soft_F_Gamma_Offroad_01,
			A3_Soft_F_Offroad_01
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgSyndikat.hpp" */
            I_C_Offroad_01_F,
            I_C_Offroad_01_AT_F,
            I_C_Offroad_01_armed_F,

            /* From "cfgEAF.hpp" */
            I_E_Offroad_01_armed_F,

            /* From "cfgION.hpp" */
            B_ION_Offroad_01_F,
            B_ION_Offroad_01_covered_F,
            B_ION_Offroad_01_comms_F
        };
		weapons[] = {/* Automated */};
	};
};