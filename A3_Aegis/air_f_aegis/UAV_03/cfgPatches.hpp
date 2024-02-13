class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_UAV_03
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] = {A3_Aegis_Air_F_Aegis};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBLUFOR.hpp" */
            B_UAV_03_dynamicLoadout_F,
            B_W_UAV_03_dynamicLoadout_F,
			Aegis_B_D_UAV_03_dynamicLoadout_F
        };
		weapons[] = {/* Automated */};
	};
};