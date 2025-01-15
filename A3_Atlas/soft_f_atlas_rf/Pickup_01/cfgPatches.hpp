class CfgPatches
{
	class A3_Atlas_Soft_F_Atlas_RF_Pickup_01
	{
		addonRootClass = A3_Atlas_Soft_F_Atlas_RF;
		requiredAddons[] =
		{
			A3_Aegis_Soft_F_Aegis_RF,
			A3_Atlas_Soft_F_Atlas_RF,
			RF_Vehicles
		};
		requiredVersion = 0.1;
		skipWhenMissingDependencies = 1;
		units[] =
        {
			/* From "cfgGER.hpp" */
			Atlas_B_G_Pickup_F,
			Atlas_B_G_Pickup_Comms_F,
			Atlas_B_G_Pickup_HMG_F,
			Atlas_B_G_Pickup_aat_F,
			Atlas_B_G_Pickup_AT_F,
			Atlas_B_G_Pickup_covered_MP_rf,
			Atlas_B_G_Pickup_ard_F,
			Atlas_B_G_Pickup_Comms_ard_F,
			Atlas_B_G_Pickup_HMG_ard_F,
			Atlas_B_G_Pickup_aat_ard_F,
			Atlas_B_G_Pickup_AT_ard_F,

			/* From "cfgIDF.hpp" */
			Atlas_I_I_Pickup_F,
			Atlas_I_I_Pickup_Comms_F,
			Atlas_I_I_Pickup_HMG_F,
			Atlas_I_I_Pickup_aat_F,
			Atlas_I_I_Pickup_AT_F,

			/* From "cfgKZG.hpp" */
			Atlas_B_K_Pickup_F,
			Atlas_B_K_Pickup_Comms_F,
			Atlas_B_K_Pickup_HMG_F,
			Atlas_B_K_Pickup_aat_F,
			Atlas_B_K_Pickup_at_F,

			/* From "cfgUNO.hpp" */
			Atlas_I_UNO_Pickup_F,
			Atlas_I_UNO_Pickup_Comms_F,
			Atlas_I_UNO_Pickup_HMG_F,
			Atlas_I_UNO_Pickup_aat_F,
			Atlas_I_UNO_wdl_Pickup_F,
			Atlas_I_UNO_wdl_Pickup_Comms_F,
			Atlas_I_UNO_wdl_Pickup_HMG_F,
			Atlas_I_UNO_wdl_Pickup_aat_F

        };
		weapons[] = {/* Automated */};
	};
};