class CfgPatches
{
	class A3_Aegis_Armor_F_Aegis_AFV_Wheeled_01
	{
		addonRootClass = A3_Aegis_Armor_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Armor_F_Aegis,
			A3_Armor_F_Tank_AFV_Wheeled_01
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBLUFOR.hpp" */
            B_W_AFV_Wheeled_01_cannon_F,
            B_W_AFV_Wheeled_01_up_cannon_F
        };
		weapons[] = {/* Automated */};
	};
};