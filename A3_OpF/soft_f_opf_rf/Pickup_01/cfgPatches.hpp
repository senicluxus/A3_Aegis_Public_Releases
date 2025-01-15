class CfgPatches
{
	class A3_Opf_Soft_F_Opf_RF_Pickup_01
	{
		addonRootClass = A3_Opf_Soft_F_Opf_RF;
		requiredAddons[] =
		{
			A3_Aegis_Soft_F_Aegis_RF,
			A3_Opf_Soft_F_Opf_RF,
			RF_Vehicles
		};
		requiredVersion = 0.1;
		skipWhenMissingDependencies = 1;
		units[] =
        {

        };
		weapons[] = {/* Automated */};
	};
};