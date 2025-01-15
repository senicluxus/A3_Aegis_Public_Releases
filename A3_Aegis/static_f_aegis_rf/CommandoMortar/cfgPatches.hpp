class CfgPatches
{
	class A3_Aegis_Static_F_Aegis_RF_CommandoMortar
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
			/* Argana */
			Aegis_O_A_CommandoMortar_RF,

			/* SFIA */
			Aegis_O_SFIA_CommandoMortar_RF,

			/* Tura */
			Aegis_I_Tura_CommandoMortar_RF,
			Aegis_O_Tura_CommandoMortar_RF,
			Aegis_B_Tura_CommandoMortar_RF,

			/* US */
			Aegis_B_W_CommandoMortar_RF,
			Aegis_B_T_CommandoMortar_RF,
			Aegis_B_D_CommandoMortar_RF,

			/* BAF */
			Aegis_B_A_CommandoMortar_RF,
			Aegis_B_A_CommandoMortar_tna_RF,
			Aegis_B_A_CommandoMortar_wdl_RF,

			/* LDF */
			Aegis_I_E_CommandoMortar_ard_RF,
			Aegis_B_E_CommandoMortar_RF,
			Aegis_B_E_CommandoMortar_ard_RF
        };
		weapons[] = {/* Automated */};
	};
};