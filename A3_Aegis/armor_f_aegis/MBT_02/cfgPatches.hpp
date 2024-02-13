class CfgPatches
{
	class A3_Aegis_Armor_F_Aegis_MBT_02
	{
		addonRootClass = A3_Aegis_Armor_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Armor_F_Aegis,
			A3_Armor_F_Exp_MBT_02,
			A3_Armor_F_Gamma_MBT_02,
			A3_Armor_F_Decade_MBT_02
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgOPFOR.hpp" */
            O_A_MBT_02_cannon_F,

            /* From "cfgRUS.hpp" */
            O_R_MBT_02_cannon_F,
            O_R_MBT_02_arty_F,
            O_R_MBT_02_cannon_ard_F,
            O_R_MBT_02_arty_ard_F,
			Aegis_O_R_MBT_02_railgun_F,
			Aegis_O_R_MBT_02_railgun_ard_F
        };
		weapons[] = {/* Automated */};
	};
};