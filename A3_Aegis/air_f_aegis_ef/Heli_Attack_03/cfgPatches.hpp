class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_EF_Heli_Attack_03
	{
		addonRootClass = A3_Aegis_Air_F_Aegis_EF;
		requiredAddons[] = 
		{
			A3_Aegis_Air_F_Aegis,
			A3_Aegis_Air_F_Aegis_EF,
			EF_Data,
			EF_Weapons
		};
		requiredVersion = 0.1;
		skipWhenMissingDependencies = 1;
		units[] =
        {
        };
		weapons[] = {/* Automated */};
	};
};