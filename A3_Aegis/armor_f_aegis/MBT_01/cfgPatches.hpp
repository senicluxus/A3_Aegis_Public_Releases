class CfgPatches
{
	class A3_Aegis_Armor_F_Aegis_MBT_01
	{
		addonRootClass = A3_Aegis_Armor_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Armor_F_Aegis,
			A3_Armor_F_Gamma_MBT_01
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBLUFOR.hpp" */
            B_W_MBT_01_arty_F,
            B_W_MBT_01_cannon_F,
            B_W_MBT_01_mlrs_F,
            B_W_MBT_01_TUSK_F
        };
		weapons[] = {/* Automated */};
	};
};