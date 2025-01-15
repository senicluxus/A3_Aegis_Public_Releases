class CfgPatches
{
	class A3_Aegis_Supplies_F_Aegis_RF
	{
		author = $STR_A3_A_Ravenholme;
		name = "Arma 3 Aegis - Reaction Forces Supplies";
		requiredAddons[] = 
		{
			A3_Aegis_Supplies_F_Aegis,
			A3_Aegis_Data_F_Aegis,
			RF_Weapons
		};
		skipWhenMissingDependencies = 1;
		requiredVersion = 0.1;
		units[] = {/* Automated */};
		weapons[] = {/* Automated */};
	};
};