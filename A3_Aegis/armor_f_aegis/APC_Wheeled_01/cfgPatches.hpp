class CfgPatches
{
	class A3_Aegis_Armor_F_Aegis_APC_Wheeled_01
	{
		addonRootClass = A3_Aegis_Armor_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Armor_F_Aegis,
			A3_Armor_F_Beta_APC_Wheeled_01,
			A3_Armor_F_Exp_APC_Wheeled_01,
            Vehicles_f_lxWS
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBLUFOR.hpp" */
            B_APC_Wheeled_01_medical_F,
            B_APC_Wheeled_01_cannon_v2_F,
            B_APC_Wheeled_01_arty_F,
            B_APC_Wheeled_01_atgm_lxWS_v2,
            B_T_APC_Wheeled_01_medical_F,
            B_T_APC_Wheeled_01_cannon_v2_F,
            B_T_APC_Wheeled_01_arty_F,
            B_T_APC_Wheeled_01_atgm_lxWS_v2,
            B_W_APC_Wheeled_01_medical_F,
            B_W_APC_Wheeled_01_cannon_v2_F,
            B_W_APC_Wheeled_01_arty_F,
            B_W_APC_Wheeled_01_mortar_lxWS,
            B_W_APC_Wheeled_01_command_lxWS,
            B_W_APC_Wheeled_01_atgm_lxWS_v2,
            B_A_APC_Wheeled_01_cannon_v3_F,
            B_A_APC_Wheeled_01_medical_F,
            B_A_APC_Wheeled_01_medical_tna_F,
            B_A_APC_Wheeled_01_cannon_v3_tna_F,
            B_A_APC_Wheeled_01_medical_wdl_F,
            B_A_APC_Wheeled_01_cannon_v3_wdl_F,
            B_D_APC_Wheeled_01_cannon_lxWS_v2,
            B_D_APC_Wheeled_01_atgm_lxWS_v2,
            
            /* From "cfgEAF.hpp" */
            Aegis_B_E_APC_Wheeled_01_cannon_v2_F,
            Aegis_B_E_APC_Wheeled_01_command_lxWS,
            Aegis_B_E_APC_Wheeled_01_mortar_lxWS,
            Aegis_B_E_APC_Wheeled_01_atgm_v2,
            Aegis_B_E_APC_Wheeled_01_medical_F,
            Aegis_I_E_APC_Wheeled_01_cannon_v2_F,
            Aegis_I_E_APC_Wheeled_01_command_lxWS,
            Aegis_I_E_APC_Wheeled_01_mortar_lxWS,
            Aegis_I_E_APC_Wheeled_01_atgm_v2,
            Aegis_I_E_APC_Wheeled_01_medical_F
        };
		weapons[] = {/* Automated */};
	};
};