class CfgPatches
{
	class A3_Aegis_Characters_F_Aegis_RF
	{
		author = $STR_A3_A_Ravenholme;
		name = "Arma 3 Aegis - Reaction Forces Characters";
		requiredAddons[] =
		{
			A3_Aegis_Characters_F_Aegis,
			A3_Aegis_Data_F_Aegis,
            RF_Characters,
			A3_Characters_F_Enoch,
			A3_Characters_F_Heads,
			A3_Characters_F_Orange,
			A3_Characters_F_Tacops
		};
		requiredVersion = 0.1;
        skipWhenMissingDependencies = 1;
		units[] =
        {
			/* From "cfgBLUFOR.hpp"*/
			Aegis_B_T_support_CMort_RF,
			Aegis_B_W_support_CMort_RF,
			Aegis_B_D_support_CMort_RF,
			Aegis_B_A_Support_CMort_RF,
			Aegis_B_A_Support_CMort_tna_RF,
			Aegis_B_A_Support_CMort_wdl_RF,

			/* From "cfgEAF.hpp" */
			I_E_Support_CMort_ard_RF,
			Aegis_B_E_Support_CMort_RF,
			Aegis_B_E_Support_CMort_ard_RF,

			/* From "cfgIndep.hpp" */
			Aegis_I_recon_AR_F,
            Aegis_I_recon_exp_F,
            Aegis_I_recon_GL_F,
            Aegis_I_recon_JTAC_F,
            Aegis_I_recon_M_F,
            Aegis_I_recon_Medic_F,
            Aegis_I_recon_F,
            Aegis_I_recon_LAT_F,
            Aegis_I_recon_TL_F,

			/* From "cfgRaven.hpp" */
			I_Raven_Soldier_CQ_RF,
			O_Raven_Soldier_CQ_RF,

			/* From "cfgArgana.hpp" */
			Aegis_O_A_support_CMort_RF,

			/* From "cfgSFIA.hpp" */
			Aegis_O_SFIA_support_CMort_RF,

			/* From "cfgRUS.hpp" */
			Aegis_O_R_SoldierU_A_F,
			Aegis_O_R_SoldierU_AAR_F,
			Aegis_O_R_SoldierU_AR_F,
			Aegis_O_R_SoldierU_AHAT_F,
			Aegis_O_R_SoldierU_AAA_F,
			Aegis_O_R_engineerU_F,
			Aegis_O_R_soldierU_AA_F,
			Aegis_O_R_soldierU_exp_F,
			Aegis_O_R_SoldierU_M_F,
			Aegis_O_R_medicU_F,
			Aegis_O_R_SoldierU_LAT_F,
			Aegis_O_R_SoldierU_GL_F,
			Aegis_O_R_SoldierU_F,
			Aegis_O_R_SoldierU_HAT_F,
			Aegis_O_R_SoldierU_CQ_F,
			Aegis_O_R_SoldierU_SL_F,
			Aegis_O_R_SoldierU_TL_F,
			Aegis_O_R_RadioOperatorU_F,
			Aegis_O_R_SoldierU_unarmed_F,
			Aegis_O_R_SoldierU_Lite_F,
			Aegis_O_R_SharpshooterU_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};