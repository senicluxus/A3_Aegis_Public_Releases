class CfgPatches
{
	class A3_Aegis_Armor_F_Aegis_MBT_03
	{
		addonRootClass = A3_Aegis_Armor_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Armor_F_Aegis,
			A3_Armor_F_EPB_MBT_03
		};
		requiredVersion = 0.1;
		units[] = 
		{
			Aegis_I_E_MBT_03_cannon_F,
			Aegis_I_E_MBT_03_cannon_ard_F,
			Aegis_B_E_MBT_03_cannon_F,
			Aegis_B_E_MBT_03_cannon_ard_F
		};
		weapons[] = {/* Automated */};
	};
};