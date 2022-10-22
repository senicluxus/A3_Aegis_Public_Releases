class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_Plane_Fighter_03
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Air_F_Aegis,
			A3_Air_F_Gamma_Plane_Fighter_03
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgOPFOR.hpp" */
            O_A_Ejection_Seat_Plane_Fighter_03_F,
            O_A_Plane_Fighter_03_dynamicLoadout_F
        };
		weapons[] = {/* Automated */};
	};
};
