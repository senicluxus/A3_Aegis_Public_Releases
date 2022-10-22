class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_Plane_CAS_02
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Air_F_Aegis,
			A3_Air_F_EPC_Plane_CAS_02
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgOPFOR.hpp" */
            O_T_Ejection_Seat_Plane_CAS_02_F,
            O_T_Plane_CAS_02_dynamicLoadout_ghex_F,

            /* From "cfgRUS.hpp" */
            O_R_Ejection_Seat_Plane_CAS_02_F,
            O_R_Ejection_Seat_Plane_CAS_02_ard_F,
            O_R_Plane_CAS_02_dynamicLoadout_F,
            O_R_Plane_CAS_02_dynamicLoadout_ard_F
        };
		weapons[] = {/* Automated */};
	};
};