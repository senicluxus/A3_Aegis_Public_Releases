class CfgPatches
{
	class A3_Atlas_Air_F_Atlas_Heli_Light_03
	{
		addonRootClass = A3_Atlas_Air_F_Atlas;
		requiredAddons[] = {A3_Atlas_Air_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgLegion.hpp" */
            Atlas_B_L_Heli_Light_03_dynamicLoadout_F,
            Atlas_B_L_Heli_Light_03_unarmed_F
        };
		weapons[] = {/* Automated */};
	};
};