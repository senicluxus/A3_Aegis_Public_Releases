class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_Plane_Civil_01
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] = {A3_Aegis_Air_F_Aegis};
		requiredVersion = 0.1;
		units[] = 
		{
			/* From Civilian Rework */
			Aegis_C_Plane_Civil_01_F_LXWS,
			Aegis_C_Plane_Civil_01_racing_F_LXWS,
			Aegis_C_Plane_Civil_01_F_Enoch,
			Aegis_C_Plane_Civil_01_racing_F_Enoch,
			Aegis_C_Plane_Civil_01_F_malden,
			Aegis_C_Plane_Civil_01_racing_F_malden,
			Aegis_C_Plane_Civil_01_F_Tanoa,
			Aegis_C_Plane_Civil_01_racing_F_Tanoa
			
		};
		weapons[] = {/* Automated */};
	};
};