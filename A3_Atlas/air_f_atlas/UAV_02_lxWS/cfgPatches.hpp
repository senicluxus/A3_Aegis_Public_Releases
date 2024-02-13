class CfgPatches
{
	class A3_Atlas_Air_F_Atlas_UAV_02_lxWS
	{
		addonRootClass = A3_Atlas_Air_F_Atlas;
		requiredAddons[] =
		{
			A3_Aegis_Air_F_Aegis,
			A3_Atlas_Air_F_Atlas,
			A3_Air_F_Orange_UAV_01,
			A3_Drones_F_Air_F_Gamma_UAV_01,
			A3_Supplies_F_Orange_Bags,
            Air_F_lxWS
		};
		requiredVersion = 0.1;
		units[] =
        {
			/* From "cfgADF.hpp" */
			Atlas_B_A_UAV_02_lxWS,
			Atlas_B_A_UAV_02_ard_lxWS,
			Atlas_B_A_UAV_02_trp_lxWS,
			Atlas_B_A_UAV_02_backpack_lxWS,

			/* From "cfgIDF.hpp" */
			Atlas_I_I_UAV_02_lxWS,
			Atlas_I_I_UAV_02_backpack_lxWS
        };
		weapons[] = {/* Automated */};
	};
};