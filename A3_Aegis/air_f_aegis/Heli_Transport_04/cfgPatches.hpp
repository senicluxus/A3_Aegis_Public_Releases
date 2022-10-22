class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_Heli_Transport_04
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Air_F_Aegis,
			A3_Air_F_Heli_Heli_Transport_04
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgOPFOR.hpp" */
            O_T_Heli_Transport_04_F,
            O_T_Heli_Transport_04_ammo_F,
            O_T_Heli_Transport_04_bench_F,
            O_T_Heli_Transport_04_box_F,
            O_T_Heli_Transport_04_covered_F,
            O_T_Heli_Transport_04_fuel_F,
            O_T_Heli_Transport_04_medevac_F,
            O_T_Heli_Transport_04_repair_F,
            Land_Pod_Heli_Transport_04_ammo_ghex_F,
            Land_Pod_Heli_Transport_04_bench_ghex_F,
            Land_Pod_Heli_Transport_04_box_ghex_F,
            Land_Pod_Heli_Transport_04_covered_ghex_F,
            Land_Pod_Heli_Transport_04_fuel_ghex_F,
            Land_Pod_Heli_Transport_04_medevac_ghex_F,
            Land_Pod_Heli_Transport_04_repair_ghex_F,

            /* From "cfgRUS.hpp" */
            O_R_Heli_Transport_04_F,
            O_R_Heli_Transport_04_ammo_F,
            O_R_Heli_Transport_04_bench_F,
            O_R_Heli_Transport_04_box_F,
            O_R_Heli_Transport_04_covered_F,
            O_R_Heli_Transport_04_fuel_F,
            O_R_Heli_Transport_04_medevac_F,
            O_R_Heli_Transport_04_repair_F,
            O_R_Heli_Transport_04_ard_F,
            O_R_Heli_Transport_04_ammo_ard_F,
            O_R_Heli_Transport_04_bench_ard_F,
            O_R_Heli_Transport_04_box_ard_F,
            O_R_Heli_Transport_04_covered_ard_F,
            O_R_Heli_Transport_04_fuel_ard_F,
            O_R_Heli_Transport_04_medevac_ard_F,
            O_R_Heli_Transport_04_repair_ard_F
        };
		weapons[] = {/* Automated */};
	};
};