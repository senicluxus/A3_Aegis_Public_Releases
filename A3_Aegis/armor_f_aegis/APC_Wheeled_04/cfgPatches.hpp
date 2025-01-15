class CfgPatches
{
	class A3_Aegis_Armor_F_Aegis_APC_Wheeled_04
	{
		addonRootClass = A3_Aegis_Armor_F_Aegis;
		requiredAddons[] = {A3_Aegis_Armor_F_Aegis};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgRUS.hpp" */
            O_R_APC_Wheeled_04_cannon_F,
            O_R_APC_Wheeled_04_cannon_v2_F,
            O_R_APC_Wheeled_04_cannon_ard_F,
            O_R_APC_Wheeled_04_cannon_v2_ard_F,

			/* From "cfgSFIA.hpp" */
			Aegis_O_SFIA_APC_Wheeled_04_export_F,
			Aegis_O_SFIA_APC_Wheeled_04_cannon_v2_F,

			/* From "cfgIndep.hpp" */
			Aegis_I_APC_Wheeled_04_cannon_v2_F,
			Aegis_I_APC_Wheeled_04_export_F,

			/* From "cfgGuerrilla.hpp" */
			Aegis_I_G_APC_Wheeled_04_export_F,
			Aegis_B_G_APC_Wheeled_04_export_F,
			Aegis_O_G_APC_Wheeled_04_export_F,

			/* From "cfgTura.hpp" */
			Aegis_B_Tura_APC_Wheeled_04_export_F,
			Aegis_I_Tura_APC_Wheeled_04_export_F,
			Aegis_O_Tura_APC_Wheeled_04_export_F,

			/* From "cfgRaven.hpp" */
			Aegis_I_Raven_APC_Wheeled_04_export_F,
			Aegis_O_Raven_APC_Wheeled_04_export_F,

			/* From "cfgCSAT.hpp"	*/
			Aegis_O_A_APC_Wheeled_04_export_F
        };
		weapons[] = {/* Automated */};
	};
};