class CfgPatches
{
	class A3_Atlas_Static_F_Atlas_RF_CommandoMortar
	{
		addonRootClass = A3_Atlas_Static_F_Atlas_RF;
		requiredAddons[] =
		{
			A3_Atlas_Static_F_Atlas_RF,
			RF_Vehicles
		};
		requiredVersion = 0.1;
		skipWhenMissingDependencies = 1;
		units[] =
        {
			/* ADF */
			Atlas_B_A_CommandoMortar_RF,
			Atlas_B_A_CommandoMortar_trp_RF,
			Atlas_B_A_CommandoMortar_ard_RF,

			/* Bundeswehr */
			Atlas_B_G_CommandoMortar_RF,
			Atlas_B_G_CommandoMortar_ard_RF,

			/* HIMF */
			Atlas_B_H_CommandoMortar_RF,

			/* Karzeghistan */
			Atlas_B_K_CommandoMortar_RF,

			/* FFL */
			Atlas_B_L_CommandoMortar_RF,

			/* Marar */
			Atlas_B_M_CommandoMortar_RF,

			/* TKA */
			Atlas_O_T_CommandoMortar_RF
        };
		weapons[] = {/* Automated */};
	};
};