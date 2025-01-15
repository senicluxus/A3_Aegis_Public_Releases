class CfgPatches
{
	class A3_Aegis_Soft_F_Aegis_Van_02
	{
		addonRootClass = A3_Aegis_Soft_F_Aegis;
		requiredAddons[] = {A3_Aegis_Soft_F_Aegis};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgION.hpp" */
            B_ION_Van_02_transport_F,
            B_ION_Van_02_vehicle_F,

			/* From "cfgEAF.hpp" */
			Aegis_I_E_Van_02_transport_ard_F,
			Aegis_I_E_Van_02_vehicle_ard_F,
			Aegis_I_E_Van_02_medevac_ard_F,
			Aegis_B_E_Van_02_medevac_F,
			Aegis_B_E_Van_02_MP_F,
			Aegis_B_E_Van_02_transport_F,
			Aegis_B_E_Van_02_Vehicle_F,
			Aegis_B_E_Van_02_transport_ard_F,
			Aegis_B_E_Van_02_Vehicle_ard_F,
			Aegis_B_E_Van_02_medevac_ard_F,

			/* From Civilian Rework */
			Aegis_C_Van_02_transport_Enoch_F,
			Aegis_C_Van_02_vehicle_Enoch_F,
			Aegis_C_Van_02_service_Enoch_F,
			Aegis_C_Van_02_medevac_Argana_F,
			Aegis_C_Van_02_transport_Argana_F,
			Aegis_C_Van_02_vehicle_Argana_F,
			Aegis_C_Van_02_Service_Argana_F,
			Aegis_C_Van_02_minibus_Malden_F,
			Aegis_C_Van_02_transport_Malden_F,
			Aegis_C_Van_02_service_Malden_F,
			Aegis_C_Van_02_medevac_Malden_F,
			Aegis_C_Van_02_medevac_Tanoa_F,
			Aegis_C_Van_02_transport_Tanoa_F,
			Aegis_C_Van_02_vehicle_Tanoa_F,
			Aegis_C_Van_02_service_Tanoa_F
        };
		weapons[] = {/* Automated */};
	};
};