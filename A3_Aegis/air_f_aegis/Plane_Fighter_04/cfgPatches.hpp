class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_Plane_Fighter_04
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Air_F_Aegis,
			A3_Air_F_Jets_Plane_Fighter_04
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgEAF.hpp" */
            I_E_Plane_Fighter_04_F,
            I_Ejection_Seat_Plane_Fighter_04_F
        };
		weapons[] = {/* Automated */};
	};
};