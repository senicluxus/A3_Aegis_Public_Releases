class CfgPatches
{
	class A3_Aegis_Supplies_F_Aegis_CargoNets
	{
		addonRootClass = A3_Aegis_Supplies_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Supplies_F_Aegis,
            A3_Supplies_F_Enoch_Ammoboxes,
			A3_Supplies_F_Heli_CargoNets,
            A3_Supplies_F_Orange_CargoNets
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBLUFOR.hpp" */
            B_T_CargoNet_01_ammo_F,
            B_W_CargoNet_01_ammo_F,
            B_A_CargoNet_01_ammo_F,
            B_A_CargoNet_01_ammo_tropic_F,
            B_A_CargoNet_01_ammo_wdl_F,
            
            /* From "cfgOPFOR.hpp" */
            O_T_CargoNet_01_ammo_F,

            /* From "cfgRUS.hpp" */
            O_R_CargoNet_01_ammo_arid_F,
            O_R_CargoNet_01_ammo_F
        };
		weapons[] = {/* Automated */};
	};
};