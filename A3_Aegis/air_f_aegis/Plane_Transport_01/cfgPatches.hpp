class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_Plane_Transport_01
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] = {A3_Aegis_Air_F_Aegis};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgOPFOR.hpp" */
            O_Plane_Transport_01_infantry_F,
            O_Plane_Transport_01_vehicle_F,
            O_T_Plane_Transport_01_infantry_ghex_F,
            O_T_Plane_Transport_01_vehicle_ghex_F,

            /* From "cfgIndep.hpp" */
            I_Plane_Transport_01_infantry_F,
            I_Plane_Transport_01_vehicle_F,

            /* From "cfgCivil.hpp"*/
            Aegis_C_Plane_Transport_01_civil_F,
            Aegis_C_IDAP_Plane_Transport_01_civil_F
        };
		weapons[] = {/* Automated */};
	};
};
