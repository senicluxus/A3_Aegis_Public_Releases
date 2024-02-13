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
			Aegis_B_E_Van_02_medevac_F,
			Aegis_B_E_Van_02_MP_F,
			Aegis_B_E_Van_02_transport_F,
			Aegis_B_E_Van_02_Vehicle_F
        };
		weapons[] = {/* Automated */};
	};
};