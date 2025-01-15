class CfgPatches
{
	class A3_Atlas_Characters_F_Atlas_RF_Vests
	{
		addonRootClass = A3_Atlas_Characters_F_Atlas_RF;
		requiredAddons[] = 
		{
			A3_Atlas_Characters_F_Atlas_RF,
			A3_Aegis_Characters_F_Aegis_RF,
			A3_Aegis_Characters_F_Aegis_RF_Vests,
			RF_Characters
		};
		skipWhenMissingDependencies = 1;
		requiredVersion = 0.1;
		units[] = {/* Automated */};
		weapons[] = {/* Automated */};
	};
};