class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_UAV_07
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] = {A3_Aegis_Air_F_Aegis};
		requiredVersion = 0.1;
		units[] =
        {
			/* AAF */
			Aegis_I_UAV_07_F,

			/* BAF */
			Aegis_B_A_UAV_07_F,
			Aegis_B_A_UAV_07_tna_F,
			Aegis_B_A_UAV_07_wdl_F,

			/* EAF */
			Aegis_I_E_UAV_07_F,
			Aegis_I_E_UAV_07_ard_F,
			Aegis_B_E_UAV_07_F,
			Aegis_B_E_UAV_07_ard_F
        };
		weapons[] = {/* Automated */};
	};
};