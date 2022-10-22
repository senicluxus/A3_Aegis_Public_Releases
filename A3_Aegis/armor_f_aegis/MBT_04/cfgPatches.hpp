class CfgPatches
{
	class A3_Aegis_Armor_F_Aegis_MBT_04
	{
		addonRootClass = A3_Aegis_Armor_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Armor_F_Aegis,
			A3_Armor_F_Tank_MBT_04
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgRUS.hpp" */
            O_R_MBT_04_cannon_F,
            O_R_MBT_04_command_F,
            O_R_MBT_04_cannon_ard_F,
            O_R_MBT_04_command_ard_F
        };
		weapons[] = {/* Automated */};
	};
};