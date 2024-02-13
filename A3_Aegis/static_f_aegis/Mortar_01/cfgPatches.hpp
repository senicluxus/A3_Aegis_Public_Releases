class CfgPatches
{
	class A3_Aegis_Static_F_Aegis_Mortar_01
	{
		addonRootClass = A3_Aegis_Static_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Static_F_Aegis,
			A3_Static_F_Enoch_Mortar_01,
			A3_Static_F_Exp_Mortar_01,
			A3_Static_F_Mortar_01,
			A3_Supplies_F_Enoch_Bags,
			A3_Supplies_F_Exp
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBLUFOR.hpp" */
            B_W_Mortar_01_F,
            B_A_Mortar_01_F,
            B_A_Mortar_01_tna_F,
            B_A_Mortar_01_wdl_F,

            /* From "cfgOPFOR.hpp" */
            O_T_Mortar_01_F,
            O_A_Mortar_01_F,

            /* From "cfgRUS.hpp" */
            O_R_Mortar_01_F,
            O_R_Mortar_01_support_F,
            O_R_Mortar_01_Weapon_F,
            O_R_Mortar_01_ard_F,

			/* From "cfgEAF.hpp" */
			Aegis_B_E_Mortar_01_F
			
        };
		weapons[] = {/* Automated */};
	};
};