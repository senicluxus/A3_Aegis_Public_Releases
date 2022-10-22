class CfgPatches
{
	class A3_Opf_Soft_F_Opf_Quadbike_01
	{
		addonRootClass = A3_Opf_Soft_F_Opf;
		requiredAddons[] = {A3_Opf_Soft_F_Opf};
		requiredVersion = 0.1;
		units[] =
        {
            // Paramilitary
            Opf_O_P_Quadbike_01_F,

            // Separatists
            Opf_O_S_Quadbike_01_F,

            // Patriots
            Opf_I_P_Quadbike_01_F
        };
		weapons[] = {/* Automated */};
	};
};