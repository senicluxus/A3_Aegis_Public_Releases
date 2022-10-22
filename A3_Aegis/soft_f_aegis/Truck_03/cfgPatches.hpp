class CfgPatches
{
	class A3_Aegis_Soft_F_Aegis_Truck_03
	{
		addonRootClass = A3_Aegis_Soft_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Soft_F_Aegis,
			A3_Soft_F_EPC_Truck_03,
			A3_Soft_F_Exp_Truck_03
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgRUS.hpp" */
            O_R_Truck_03_transport_F,
            O_R_Truck_03_covered_F,
            O_R_Truck_03_repair_F,
            O_R_Truck_03_ammo_F,
            O_R_Truck_03_fuel_F,
            O_R_Truck_03_medical_F,
            O_R_Truck_03_transport_ard_F,
            O_R_Truck_03_covered_ard_F,
            O_R_Truck_03_repair_ard_F,
            O_R_Truck_03_ammo_ard_F,
            O_R_Truck_03_fuel_ard_F,
            O_R_Truck_03_medical_ard_F
        };
		weapons[] = {/* Automated */};
	};
};