class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_VTOL_02
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] = {A3_Aegis_Air_F_Aegis};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgOPFOR.hpp" */
            O_VTOL_02_infantry_dynamicLoadout_F,
            O_VTOL_02_vehicle_dynamicLoadout_F
        };
		weapons[] = {/* Automated */};
	};
};
