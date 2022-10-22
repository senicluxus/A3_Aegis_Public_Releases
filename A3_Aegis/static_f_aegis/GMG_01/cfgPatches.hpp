class CfgPatches
{
	class A3_Aegis_Static_F_Aegis_GMG_01
	{
		addonRootClass = A3_Aegis_Static_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Static_F_Aegis,
			A3_Static_F,
			A3_Static_F_Enoch_GMG_01,
			A3_Static_F_Exp_GMG_01,
			A3_Supplies_F_Enoch_Bags,
			A3_Supplies_F_Exp
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBLUFOR.hpp" */
            B_T_GMG_01_high_F,
            B_T_GMG_01_A_F,
            B_GMG_01_A_Weapon_grn_F,
            B_GMG_01_high_Weapon_grn_F,
            B_W_GMG_01_F,
            B_W_GMG_01_high_F,
            B_W_GMG_01_A_F,
            B_A_GMG_01_F,
            B_A_GMG_01_tna_F,
            B_A_GMG_01_wdl_F,
            B_A_GMG_01_high_F,
            B_A_GMG_01_high_tna_F,
            B_A_GMG_01_high_wdl_F,
            B_A_GMG_01_A_F,
            B_A_GMG_01_A_tna_F,
            B_A_GMG_01_A_wdl_F,

            /* From "cfgOPFOR.hpp" */
            O_T_GMG_01_F,
            O_T_GMG_01_high_F,
            O_T_GMG_01_A_F,
            O_A_GMG_01_F,
            O_A_GMG_01_high_F,

            /* From "cfgRUS.hpp" */
            O_R_GMG_01_F,
            O_R_GMG_01_high_F,
            O_R_GMG_01_A_F,
            O_R_GMG_01_Weapon_F,
            O_R_GMG_01_A_Weapon_F,
            O_R_GMG_01_high_Weapon_F,
            O_R_GMG_01_ard_F,
            O_R_GMG_01_high_ard_F,
            O_R_GMG_01_A_ard_F
        };
		weapons[] = {/* Automated */};
	};
};