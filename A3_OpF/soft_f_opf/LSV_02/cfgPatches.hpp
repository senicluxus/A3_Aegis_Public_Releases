class CfgPatches
{
	class A3_Opf_Soft_F_Opf_LSV_02
	{
		addonRootClass = A3_Opf_Soft_F_Opf;
		requiredAddons[] =
		{
			A3_Opf_Soft_F_Opf,
			A3_Soft_F_Exp_LSV_02
		};
		requiredVersion = 0.1;
		units[] =
        {
            // Raven
            Opf_I_R_LSV_02_armed_F,
            Opf_I_R_LSV_02_unarmed_F
        };
		weapons[] = {/* Automated */};
	};
};