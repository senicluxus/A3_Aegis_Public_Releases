class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_Heli_Transport_03
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Air_F_Aegis,
			A3_Air_F_Heli_Heli_Transport_03
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBLUFOR.hpp" */
            B_T_Heli_Transport_03_F,
            B_T_Heli_Transport_03_unarmed_F,
            B_W_Heli_Transport_03_F,
            B_W_Heli_Transport_03_unarmed_F,
			Aegis_B_D_Heli_Transport_03_F,
			Aegis_B_D_Heli_Transport_03_unarmed_F
        };
		weapons[] = {/* Automated */};
	};
};