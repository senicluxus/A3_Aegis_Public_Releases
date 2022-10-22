class CfgPatches
{
	class A3_Opf_Soft_F_Opf_Offroad_01
	{
		addonRootClass = A3_Opf_Soft_F_Opf;
		requiredAddons[] = {A3_Opf_Soft_F_Opf};
		requiredVersion = 0.1;
		units[] =
        {
            // Paramilitary
            Opf_O_P_Offroad_01_armed_F,
            Opf_O_P_Offroad_01_AT_F,
            Opf_O_P_Offroad_01_comms_F,
            Opf_O_P_Offroad_01_covered_F,
            Opf_O_P_Offroad_01_F,

            // Separatists
            Opf_O_S_Offroad_01_armed_F,
            Opf_O_S_Offroad_01_AT_F,
            Opf_O_S_Offroad_01_F,

            // Insurgents
            Opf_I_I_Offroad_01_armed_F,
            Opf_I_I_Offroad_01_AT_F,
            Opf_I_I_Offroad_01_F,

            // Patriots
            Opf_I_P_Offroad_01_armed_F,
            Opf_I_P_Offroad_01_covered_F,
            Opf_I_P_Offroad_01_F
        };
		weapons[] = {/* Automated */};
	};
};