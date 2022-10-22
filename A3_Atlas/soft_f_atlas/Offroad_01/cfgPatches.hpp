class CfgPatches
{
	class A3_Atlas_Soft_F_Atlas_Offroad_01
	{
		addonRootClass = A3_Atlas_Soft_F_Atlas;
		requiredAddons[] = {A3_Atlas_Soft_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgUNO.hpp" */
            Atlas_I_UNO_Offroad_01_F,
            Atlas_I_UNO_Offroad_armed_01_F,
            Atlas_I_UNO_Offroad_01_covered_F,
            Atlas_I_UNO_Offroad_01_comms_F,
            Atlas_I_UNO_wdl_Offroad_01_F,
            Atlas_I_UNO_wdl_Offroad_armed_01_F,
            Atlas_I_UNO_wdl_Offroad_01_covered_F,
            Atlas_I_UNO_wdl_Offroad_01_comms_F
        };
		weapons[] = {/* Automated */};
	};
};