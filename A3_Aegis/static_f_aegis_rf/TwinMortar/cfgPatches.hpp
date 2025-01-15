class CfgPatches
{
	class A3_Aegis_Static_F_Aegis_RF_TwinMortar
	{
		addonRootClass = A3_Aegis_Static_F_Aegis_RF;
		requiredAddons[] =
		{
			A3_Aegis_Static_F_Aegis_RF,
			RF_Vehicles
		};
		requiredVersion = 0.1;
		skipWhenMissingDependencies = 1;
		units[] =
        {
			/* From "CfgBLUFOR.hpp" */
			Aegis_B_W_TwinMortar_RF,
			Aegis_B_D_TwinMortar_RF,
			Aegis_B_A_TwinMortar_RF,
			Aegis_B_A_TwinMortar_tna_RF,
			Aegis_B_A_TwinMortar_wdl_RF,

			/* From "cfgEAF.hpp" */
			Aegis_I_E_TwinMortar_RF,
			Aegis_I_E_TwinMortar_ard_RF,
			Aegis_B_E_TwinMortar_RF,
			Aegis_B_E_TwinMortar_ard_RF
        };
		weapons[] = {/* Automated */};
	};
};