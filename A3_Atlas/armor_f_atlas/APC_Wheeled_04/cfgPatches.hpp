class CfgPatches
{
	class A3_Atlas_Armor_F_Atlas_APC_Wheeled_04
	{
		addonRootClass = A3_Atlas_Armor_F_Atlas;
		requiredAddons[] = {A3_Atlas_Armor_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgVenezuela.hpp" */
            Atlas_O_VZ_APC_Wheeled_04_cannon_F,

			/* From "cfgUNO.hpp" */
			Atlas_I_UNO_wdl_APC_Wheeled_04_cannon_F,
			Atlas_I_UNO_APC_Wheeled_04_cannon_F
        };
		weapons[] = {/* Automated */};
	};
};