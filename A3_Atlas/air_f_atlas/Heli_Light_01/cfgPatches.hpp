class CfgPatches
{
	class A3_Atlas_Air_F_Atlas_Heli_Light_01
	{
		addonRootClass = A3_Atlas_Air_F_Atlas;
		requiredAddons[] = {A3_Atlas_Air_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgIDF.hpp" */
            Atlas_I_I_Heli_Light_01_dynamicLoadout_F,
            Atlas_I_I_Heli_Light_01_F,
            Atlas_I_I_Heli_Light_01_recon_F
        };
		weapons[] = {/* Automated */};
	};
};