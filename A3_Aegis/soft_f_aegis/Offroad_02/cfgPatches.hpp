class CfgPatches
{
	class A3_Aegis_Soft_F_Aegis_Offroad_02
	{
		addonRootClass = A3_Aegis_Soft_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Soft_F_Aegis,
			A3_Soft_F_Exp_Offroad_02
		};
		requiredVersion = 0.1;
		units[] = 
		{
			/* From "cfgCivil.hpp"*/
			Aegis_C_Offroad_02_lxWS,
			Aegis_C_Offroad_02_F_Tanoa,
			Aegis_C_Offroad_02_F_Malden
		};
		weapons[] = {/* Automated */};
	};
};