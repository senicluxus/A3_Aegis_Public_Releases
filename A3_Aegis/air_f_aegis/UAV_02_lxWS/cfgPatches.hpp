class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_UAV_02_lxWS
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Air_F_Aegis,
			A3_Air_F_Orange_UAV_01,
			A3_Drones_F_Air_F_Gamma_UAV_01,
			A3_Supplies_F_Orange_Bags,
            Air_F_lxWS
		};
		requiredVersion = 0.1;
		units[] =
        {
			/* From "cfgBlufor.hpp" */
			Aegis_B_T_UAV_02_lxWS,
			Aegis_B_W_UAV_02_lxWS,
			Aegis_B_D_UAV_02_lxWS,
			Aegis_B_A_UAV_02_lxWS,
			Aegis_B_A_UAV_02_tna_lxWS,
			Aegis_B_A_UAV_02_wdl_lxWS,
			Aegis_B_CTRG_UAV_02_lxWS,
			Aegis_B_CTRG_UAV_02_tna_lxWS,
			Aegis_B_T_UAV_02_backpack_lxWS,
			Aegis_B_W_UAV_02_backpack_lxWS,
			Aegis_B_A_UAV_02_backpack_lxWS,
			Aegis_B_CTRG_UAV_02_backpack_lxWS,

			/* From "cfgEAF.hpp" */
			Aegis_I_E_UAV_02_lxWS,
			Aegis_I_E_UAV_02_backpack_lxWS,
			Aegis_B_E_UAV_02_lxWS,
			Aegis_B_E_UAV_02_backpack_lxWS,

			/* From "cfgOpfor.hpp" */
			Aegis_O_T_UAV_02_lxWS,
			Aegis_O_T_UAV_02_backpack_lxWS,

            /* From "cfgRaven.hpp" */
			Aegis_O_Raven_UAV_02_lxWS,
			Aegis_I_Raven_UAV_02_lxWS,
			Aegis_I_Raven_UAV_02_backpack_lxWS,

            /* From "cfgRUS.hpp" */
			Aegis_O_R_UAV_02_lxWS,
			Aegis_O_R_UAV_02_ard_lxWS,
			Aegis_O_R_UAV_02_backpack_lxWS,

			/* From "cfgSyndikat.hpp" */
			Aegis_I_C_UAV_02_IED_lxWS,
			Aegis_I_C_UAV_02_IED_backpack_lxWS
        };
		weapons[] = {/* Automated */};
	};
};