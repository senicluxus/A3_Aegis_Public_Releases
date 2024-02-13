class CfgPatches
{
	class A3_Aegis_Armor_F_Aegis_APC_Tracked_02
	{
		addonRootClass = A3_Aegis_Armor_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Armor_F_Aegis,
			A3_Armor_F_Beta_APC_Tracked_02
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgOPFOR.hpp" */
            O_A_APC_Tracked_02_cannon_F,
			Aegis_O_A_APC_Tracked_02_30mm_lxWS,

            /* From "cfgRUS.hpp" */
            O_R_APC_Tracked_02_cannon_F,
            O_R_APC_Tracked_02_AA_F,
            O_R_APC_Tracked_02_medical_F,
            O_R_APC_Tracked_02_cannon_ard_F,
            O_R_APC_Tracked_02_AA_ard_F,
            O_R_APC_Tracked_02_medical_ard_F,
			Aegis_O_R_APC_Tracked_02_30mm_lxWS,
			Aegis_O_R_APC_Tracked_02_30mm_ard_lxWS
        };
		weapons[] = {/* Automated */};
	};
};