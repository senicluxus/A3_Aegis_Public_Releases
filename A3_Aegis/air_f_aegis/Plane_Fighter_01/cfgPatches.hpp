class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_Plane_Fighter_01
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] = {A3_Aegis_Air_F_Aegis};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBLUFOR.hpp" */
            B_T_Plane_Fighter_01_F,
            B_T_Plane_Fighter_01_Stealth_F,
            B_T_Ejection_Seat_Plane_Fighter_01_F,
            B_W_Plane_Fighter_01_F,
            B_W_Plane_Fighter_01_Stealth_F,
            B_W_Ejection_Seat_Plane_Fighter_01_F,
            B_D_Plane_Fighter_01_F,
            B_D_Plane_Fighter_01_Stealth_F,
            B_D_Ejection_Seat_Plane_Fighter_01_F
        };
		weapons[] = {/* Automated */};
	};
};