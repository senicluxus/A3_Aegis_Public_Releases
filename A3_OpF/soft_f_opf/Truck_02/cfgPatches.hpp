class CfgPatches
{
	class A3_Opf_Soft_F_Opf_Truck_02
	{
		addonRootClass = A3_Opf_Soft_F_Opf;
		requiredAddons[] = {A3_Opf_Soft_F_Opf};
		requiredVersion = 0.1;
		units[] =
        {
            // Paramilitary
            Opf_O_P_Truck_02_cargo_F,
            Opf_O_P_Truck_02_F,
            Opf_O_P_Truck_02_flatbed_F,
            Opf_O_P_Truck_02_transport_F,

            // Separatists
            Opf_O_S_Truck_02_cargo_F,
            Opf_O_S_Truck_02_F,
            Opf_O_S_Truck_02_flatbed_F,
            Opf_O_S_Truck_02_transport_F
        };
		weapons[] = {/* Automated */};
	};
};