class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_Heli_Transport_02
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Air_F_Aegis,
			A3_Air_F_Beta_Heli_Transport_02
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBLUFOR.hpp" */
            B_A_Heli_Transport_02_F,
            B_A_Heli_Transport_02_tna_F,
            B_A_Heli_Transport_02_wdl_F,

            /* From "cfgCivil.hpp" */
            C_Heli_Transport_02_civil_F,

            /* From "cfgION.hpp" */
            B_ION_Heli_Transport_02_F
        };
		weapons[] = {/* Automated */};
	};
};
