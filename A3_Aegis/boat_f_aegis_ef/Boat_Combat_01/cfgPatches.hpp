class CfgPatches
{
    /* Definitions */
    #include "\A3_Aegis\macros_urls.hpp"

	class A3_Aegis_Boat_F_Aegis_EF_Combat_Boat_01
	{
		addonRootClass = A3_Aegis_Boat_F_Aegis_EF;
		requiredAddons[] =
        {
            A3_Aegis_Data_F_Aegis,
            EF_Data,
			EF_CombatBoat_C
        };
		requiredVersion = 0.1;
		skipWhenMissingDependencies = 1;
		units[] = 
		{
			/* From "cfgBLUFOR.hpp" */
			Aegis_B_W_CombatBoat_Unarmed_EF,
			Aegis_B_W_CombatBoat_HMG_EF,
			Aegis_B_W_CombatBoat_AT_EF,
			Aegis_B_A_CombatBoat_Unarmed_EF,
			Aegis_B_A_CombatBoat_HMG_EF,
			Aegis_B_A_CombatBoat_AT_EF,
			Aegis_B_A_CombatBoat_Unarmed_tna_EF,
			Aegis_B_A_CombatBoat_HMG_tna_EF,
			Aegis_B_A_CombatBoat_AT_tna_EF,
			Aegis_B_A_CombatBoat_Unarmed_wdl_EF,
			Aegis_B_A_CombatBoat_HMG_wdl_EF,
			Aegis_B_A_CombatBoat_AT_wdl_EF,

			/* From "cfgCTRG.hpp" */
			Aegis_B_CTRG_CombatBoat_Unarmed_EF,
			Aegis_B_CTRG_CombatBoat_HMG_EF,
			Aegis_B_CTRG_CombatBoat_AT_EF
		};
		weapons[] = {/* Automated */};
	};
};