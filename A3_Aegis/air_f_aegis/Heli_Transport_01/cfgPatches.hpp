class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_Heli_Transport_01
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Air_F_Aegis,
			A3_Air_F_Beta_Heli_Transport_01,
			A3_Air_F_Exp_Heli_Transport_01
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBLUFOR.hpp" */
            B_Heli_Transport_01_medevac_F,
            B_T_Heli_Transport_01_F,
            B_T_Heli_Transport_01_medevac_F,
            B_W_Heli_Transport_01_F,
            B_W_Heli_Transport_01_medevac_F
        };
		weapons[] = {/* Automated */};
	};
};