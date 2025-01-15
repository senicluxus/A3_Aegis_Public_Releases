class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_EF_Heli_Attack_01
	{
		addonRootClass = A3_Aegis_Air_F_Aegis_EF;
		requiredAddons[] = 
		{
			A3_Aegis_Air_F_Aegis,
			A3_Aegis_Air_F_Aegis_EF,
			EF_Data,
			EF_Weapons,
			EF_AH99
		};
		requiredVersion = 0.1;
		skipWhenMissingDependencies = 1;
		units[] =
        {
			/* From "cfgBLUFOR.hpp" */
			Aegis_B_T_AH99J_EF,
			Aegis_B_W_AH99J_EF
        };
		weapons[] = {/* Automated */};
	};
};