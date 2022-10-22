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
            B_ION_Van_02_vehicle_F
        };
		weapons[] = {/* Automated */};
	};
};