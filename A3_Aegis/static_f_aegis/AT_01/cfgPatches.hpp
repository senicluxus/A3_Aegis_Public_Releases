class CfgPatches
{
	class A3_Aegis_Static_F_Aegis_AT_01
	{
		addonRootClass = A3_Aegis_Static_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Static_F_Aegis,
			A3_Static_F_AT_01,
			A3_Static_F_Enoch_AT_01,
			A3_Static_F_Exp_AT_01,
			A3_Supplies_F_Enoch_Bags
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBLUFOR.hpp" */
            B_AT_01_Weapon_grn_F,
            B_W_Static_AT_F,
            B_A_Static_AT_F,
            B_A_Static_AT_tna_F,
            B_A_Static_AT_wdl_F,

            /* From "cfgOPFOR.hpp" */
            O_T_Static_AT_F,
            O_A_Static_AT_F,

            /* From "cfgRUS.hpp" */
            O_R_AT_01_weapon_F,
            O_R_Static_AT_ard_F,
            O_R_Static_AT_F
        };
		weapons[] = {/* Automated */};
	};
};