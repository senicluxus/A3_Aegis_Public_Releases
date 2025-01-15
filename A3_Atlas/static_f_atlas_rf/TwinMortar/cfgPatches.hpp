class CfgPatches
{
	class A3_Atlas_Static_F_Atlas_RF_TwinMortar
	{
		addonRootClass = A3_Atlas_Static_F_Atlas_RF;
		requiredAddons[] =
		{
			A3_Aegis_Static_F_Aegis_RF,
			A3_Atlas_Static_F_Atlas_RF,
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