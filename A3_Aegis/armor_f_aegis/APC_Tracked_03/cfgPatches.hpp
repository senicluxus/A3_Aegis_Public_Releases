class CfgPatches
{
	class A3_Aegis_Armor_F_Aegis_APC_Tracked_03
	{
		addonRootClass = A3_Aegis_Armor_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Armor_F_Aegis,
			A3_Armor_F_Enoch_APC_Tracked_03,
			A3_Armor_F_EPB_APC_Tracked_03
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBLUFOR.hpp" */
            B_A_APC_tracked_03_cannon_v2_F,
            B_A_APC_tracked_03_cannon_v2_tna_F,
            B_A_APC_tracked_03_cannon_v2_wdl_F,

            /* From "cfgIndep.hpp" */
            I_APC_tracked_03_cannon_v2_F,

            /* From "cfgEAF.hpp" */
            I_E_APC_tracked_03_cannon_v2_F
        };
		weapons[] = {/* Automated */};
	};
};