class CfgPatches
{
	class A3_Aegis_Soft_F_Aegis_RF_Pickup_01
	{
		addonRootClass = A3_Aegis_Soft_F_Aegis_RF;
		requiredAddons[] =
		{
			A3_Aegis_Soft_F_Aegis_RF,
			A3_Soft_F_Gamma_Offroad_01,
			A3_Soft_F_Offroad_01,
			RF_Vehicles
		};
		requiredVersion = 0.1;
		skipWhenMissingDependencies = 1;
		units[] =
        {
			/* From "cfgBLUFOR.hpp" */
			Aegis_B_Pickup_at_rf,
			Aegis_B_D_Pickup_RF,
			Aegis_B_D_Pickup_Comms_rf,
			Aegis_B_D_Pickup_mmg_rf,
			Aegis_B_D_Pickup_aat_rf,
			Aegis_B_D_Pickup_at_rf,
			Aegis_B_T_Pickup_at_rf,
			Aegis_B_W_Pickup_RF,
			Aegis_B_W_Pickup_Comms_rf,
			Aegis_B_W_Pickup_mmg_rf,
			Aegis_B_W_Pickup_aat_rf,
			Aegis_B_W_Pickup_at_rf,

			/* From "cfgCivil.hpp" */
			Aegis_C_Pickup_lxWS,
			Aegis_C_Pickup_Covered_lxWS,
			Aegis_C_Pickup_RF_Tanoa,
			Aegis_C_Pickup_Covered_RF_Tanoa,
			Aegis_C_Pickup_Repair_RF_Tanoa,
			Aegis_C_Pickup_RF_Enoch,
			Aegis_C_Pickup_Covered_RF_Enoch,
			Aegis_C_Pickup_Repair_RF_Enoch,
			Aegis_C_Pickup_RF_Malden,
			Aegis_C_Pickup_Covered_RF_Malden,
			Aegis_C_Pickup_Repair_RF_Malden,

			/* From "cfgCTRG.hpp" */
			Aegis_B_CTRG_Pickup_sand_RF,
			Aegis_B_CTRG_Pickup_Comms_sand_rf,
			Aegis_B_CTRG_Pickup_mmg_sand_rf,
			Aegis_B_CTRG_Pickup_hmg_sand_rf,
			Aegis_B_CTRG_Pickup_aat_sand_rf,
			Aegis_B_CTRG_Pickup_at_sand_rf,
			Aegis_B_CTRG_Pickup_RF,
			Aegis_B_CTRG_Pickup_Comms_rf,
			Aegis_B_CTRG_Pickup_mmg_rf,
			Aegis_B_CTRG_Pickup_hmg_rf,
			Aegis_B_CTRG_Pickup_aat_rf,
			Aegis_B_CTRG_Pickup_at_rf,

			/* From "cfgEAF.hpp" */
			Aegis_I_E_Pickup_HMG_RF,
			Aegis_I_E_Pickup_AAT_RF,
			Aegis_I_E_Pickup_AT_RF,
			Aegis_B_E_Pickup_RF,
			Aegis_B_E_Pickup_Covered_RF,
			Aegis_B_E_Pickup_Comms_RF,
			Aegis_B_E_Pickup_HMG_RF,
			Aegis_B_E_Pickup_AAT_RF,
			Aegis_B_E_Pickup_AT_RF,
			Aegis_I_E_Pickup_ard_RF,
			Aegis_I_E_Pickup_Covered_ard_RF,
			Aegis_I_E_Pickup_Comms_ard_RF,
			Aegis_I_E_Pickup_HMG_ard_RF,
			Aegis_I_E_Pickup_AAT_ard_RF,
			Aegis_I_E_Pickup_AT_ard_RF,
			Aegis_B_E_Pickup_ard_RF,
			Aegis_B_E_Pickup_Covered_ard_RF,
			Aegis_B_E_Pickup_Comms_ard_RF,
			Aegis_B_E_Pickup_HMG_ard_RF,
			Aegis_B_E_Pickup_AAT_ard_RF,
			Aegis_B_E_Pickup_AT_ard_RF,

			/* From "cfgION.hpp" */
			Aegis_B_ION_Pickup_HMG_RF,

			/* From "cfgOPFOR.hpp" */
			Aegis_O_A_Pickup_RF,
			Aegis_O_A_Pickup_Comms_RF,
			Aegis_O_A_Pickup_HMG_RF,
			Aegis_O_A_Pickup_MRL_RF,
			Aegis_O_A_Pickup_Fuel_RF

        };
		weapons[] = {/* Automated */};
	};
};