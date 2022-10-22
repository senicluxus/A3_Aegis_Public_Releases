class CfgPatches
{
	class A3_Atlas_Soft_F_Atlas_MRAP_03
	{
		addonRootClass = A3_Atlas_Soft_F_Atlas;
		requiredAddons[] =
		{
			A3_Aegis_Soft_F_Aegis_MRAP_03,
			A3_Atlas_Soft_F_Atlas
		};
		requiredVersion = 0.1;
		units[] =
        {
            // Legionnaires
            Atlas_B_L_MRAP_03_F,
            Atlas_B_L_MRAP_03_gmg_F,
            Atlas_B_L_MRAP_03_hmg_F,

            // Bundeswehr
            Atlas_B_G_MRAP_03_F,
            Atlas_B_G_MRAP_03_gmg_F,
            Atlas_B_G_MRAP_03_hmg_F,

			// ADF
			Atlas_B_A_MRAP_03_F,
			Atlas_B_A_MRAP_03_gmg_F,
			Atlas_B_A_MRAP_03_hmg_F,
			Atlas_B_A_MRAP_03_ard_F,
			Atlas_B_A_MRAP_03_gmg_ard_F,
			Atlas_B_A_MRAP_03_hmg_ard_F,
			Atlas_B_A_MRAP_03_trp_F,
			Atlas_B_A_MRAP_03_gmg_trp_F,
			Atlas_B_A_MRAP_03_hmg_trp_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};