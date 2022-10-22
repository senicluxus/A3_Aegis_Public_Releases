class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_Plane_Fighter_02
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] = {A3_Aegis_Air_F_Aegis};
		requiredVersion = 0.1;
		units[] = 
        {
            /* From "cfgOPFOR.hpp" */
            O_T_Plane_Fighter_02_ghex_F,
            O_T_Plane_Fighter_02_Stealth_ghex_F,
            O_T_Ejection_Seat_Plane_Fighter_02_F,

            /* From "cfgRUS.hpp" */
            O_R_Plane_Fighter_02_F,
            O_R_Plane_Fighter_02_Stealth_F,
            O_R_Ejection_Seat_Plane_Fighter_02_F,
            O_R_Plane_Fighter_02_ard_F,
            O_R_Plane_Fighter_02_Stealth_ard_F,
            O_R_Ejection_Seat_Plane_Fighter_02_ard_F
        };
		weapons[] = {/* Automated */};
	};
};