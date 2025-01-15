class CfgPatches
{
	class A3_Aegis_Soft_F_Aegis_Van_01
	{
		addonRootClass = A3_Aegis_Soft_F_Aegis;
		requiredAddons[] = {A3_Aegis_Soft_F_Aegis};
		requiredVersion = 0.1;
		units[] = 
		{
			/* From Civilian Rework */
			Aegis_C_Van_01_transport_Argana_F,
			Aegis_C_Van_01_box_Argana_F,
			Aegis_C_Van_01_fuel_Argana_F,
			Aegis_C_Van_01_transport_Malden_F,
			Aegis_C_Van_01_box_Malden_F,
			Aegis_C_Van_01_fuel_Malden_F,	
			Aegis_C_Van_01_transport_Enoch_F,
			Aegis_C_Van_01_box_Enoch_F,
			Aegis_C_Van_01_fuel_Enoch_F,
			Aegis_C_Van_01_transport_tanoa_F,
			Aegis_C_Van_01_box_tanoa_F,
			Aegis_C_Van_01_fuel_tanoa_F	
		};
		weapons[] = {/* Automated */};
	};
};