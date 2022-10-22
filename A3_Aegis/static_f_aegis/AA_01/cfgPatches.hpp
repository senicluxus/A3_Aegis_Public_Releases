class CfgPatches
{
	class A3_Aegis_Static_F_Aegis_AA_01
	{
		addonRootClass = A3_Aegis_Static_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Static_F_Aegis,
			A3_Static_F_AA_01,
			A3_Static_F_Enoch_AA_01,
			A3_Static_F_Exp_AA_01,
			A3_Supplies_F_Enoch_Bags
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBLUFOR.hpp" */
            B_AA_01_Weapon_grn_F,
            B_W_Static_AA_F,
            B_A_Static_AA_F,
            B_A_Static_AA_tna_F,
            B_A_Static_AA_wdl_F,

            /* From "cfgOPFOR.hpp" */
            O_T_Static_AA_F,
            O_A_Static_AA_F,

            /* From "cfgRUS.hpp" */
            O_R_AA_01_weapon_F,
            O_R_Static_AA_ard_F,
            O_R_Static_AA_F
        };
		weapons[] = {/* Automated */};
	};
};