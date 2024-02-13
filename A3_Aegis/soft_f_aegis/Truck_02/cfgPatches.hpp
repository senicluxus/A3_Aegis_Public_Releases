class CfgPatches
{
	class A3_Aegis_Soft_F_Aegis_Truck_02
	{
		addonRootClass = A3_Aegis_Soft_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Soft_F_Aegis,
			A3_Soft_F_Beta_Truck_02,
			A3_Soft_F_Enoch_Truck_02,
			A3_Soft_F_Exp_Truck_02,
			A3_Soft_F_Gamma_Truck_02,
			A3_Soft_F_Orange_Truck_02,
			Vehicles_F_lxWS_Truck_02
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgOpfor.hpp" */
            O_Truck_02_MRL_F,
            O_Truck_02_cargo_F,
            O_Truck_02_flatbed_F,
            O_T_Truck_02_MRL_F,
            O_T_Truck_02_cargo_F,
            O_T_Truck_02_flatbed_F,
            O_A_Truck_02_F,
            O_A_Truck_02_transport_F,
            O_A_Truck_02_box_F,
            O_A_Truck_02_medical_F,
            O_A_Truck_02_Ammo_F,
            O_A_Truck_02_fuel_F,
            Aegis_O_A_Truck_02_aa_F,

            /* From "cfgRUS.hpp" */
            O_R_Truck_02_F,
            O_R_Truck_02_transport_F,
            O_R_Truck_02_box_F,
            O_R_Truck_02_medical_F,
            O_R_Truck_02_Ammo_F,
            O_R_Truck_02_fuel_F,
            O_R_Truck_02_MRL_F,
            O_R_Truck_02_cargo_F,
            O_R_Truck_02_flatbed_F,
            O_R_Truck_02_ard_F,
            O_R_Truck_02_transport_ard_F,
            O_R_Truck_02_box_ard_F,
            O_R_Truck_02_medical_ard_F,
            O_R_Truck_02_Ammo_ard_F,
            O_R_Truck_02_fuel_ard_F,
            O_R_Truck_02_MRL_ard_F,
            O_R_Truck_02_cargo_ard_F,
            O_R_Truck_02_flatbed_ard_F,
            Aegis_O_R_Truck_02_aa_F,
            Aegis_O_R_Truck_02_aa_ard_F,

            /* From "CfgEAF.hpp" */
            Aegis_B_E_Truck_02_F,
            Aegis_B_E_Truck_02_transport_F,
            Aegis_B_E_Truck_02_ammo_F,
            Aegis_B_E_Truck_02_box_F,
            Aegis_B_E_Truck_02_fuel_F,
            Aegis_B_E_Truck_02_medical_F,
            Aegis_B_E_Truck_02_MRL_F,
            Aegis_B_E_Truck_02_cargo_lxWS,
            Aegis_B_E_Truck_02_flatbed_lxWS

        };
		weapons[] = {/* Automated */};
	};
};