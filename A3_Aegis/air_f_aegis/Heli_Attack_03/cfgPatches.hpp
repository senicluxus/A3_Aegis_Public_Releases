class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_Heli_Attack_03
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] = {A3_Aegis_Air_F_Aegis};
		requiredVersion = 0.1;
		units[] =
        {
			/* From "cfgBLUFOR.hpp" */
			Aegis_B_A_Heli_Attack_03_F,
			Aegis_B_A_Heli_Attack_03_tna_F,
			Aegis_B_A_Heli_Attack_03_wdl_F,
			Aegis_B_Heli_Attack_03_F,
			Aegis_B_T_Heli_Attack_03_F,
			Aegis_B_W_Heli_Attack_03_F,
			Aegis_B_D_Heli_Attack_03_F,

            /* From "cfgIndep.hpp" */
            I_Heli_Attack_03_F
        };
		weapons[] = {/* Automated */};
	};
};