class CfgPatches
{
	class A3_Opf_Air_F_Opf_Heli_Attack_04
	{
		addonRootClass = A3_Opf_Air_F_Opf;
		requiredAddons[] =
		{
			A3_Opf_Air_F_Opf,
			A3_Aegis_Air_F_Aegis
		};
		requiredVersion = 0.1;
		units[] =
        {
			/* From "cfgChKDZ.hpp" */
			Opf_O_S_Heli_Attack_04_F

        };
		weapons[] = {/* Automated */};
	};
};