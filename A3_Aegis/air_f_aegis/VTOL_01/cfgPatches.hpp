class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_VTOL_01
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Air_F_Aegis,
			A3_Air_F_Exp_VTOL_01
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBLUFOR.hpp" */
            B_VTOL_01_infantry_F,
            B_VTOL_01_vehicle_F,
            B_VTOL_01_armed_F,
            B_W_VTOL_01_infantry_F,
            B_W_VTOL_01_vehicle_F,
            B_W_VTOL_01_armed_F,
            B_D_VTOL_01_infantry_F,
            B_D_VTOL_01_vehicle_F,
            B_D_VTOL_01_armed_F,
            B_A_VTOL_01_infantry_F,
            B_A_VTOL_01_vehicle_F,
            B_A_VTOL_01_infantry_tna_F,
            B_A_VTOL_01_vehicle_tna_F,
            B_A_VTOL_01_infantry_wdl_F,
            B_A_VTOL_01_vehicle_wdl_F
        };
		weapons[] = {/* Automated */};
	};
};