class CfgPatches
{
	class A3_Aegis_Armor_F_Aegis_APC_Wheeled_03
	{
		addonRootClass = A3_Aegis_Armor_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Armor_F_Aegis,
			A3_Armor_F_Gamma_APC_Wheeled_03
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgGuerrilla.hpp" */
            I_G_APC_Wheeled_03_cannon_F,
            B_G_APC_Wheeled_03_cannon_F,
            O_G_APC_Wheeled_03_cannon_F
        };
		weapons[] = {/* Automated */};
	};
};