class CfgPatches
{
	class A3_Aegis_Armor_F_Aegis_APC_Tracked_01
	{
		addonRootClass = A3_Aegis_Armor_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Armor_F_Aegis,
			A3_Armor_F_Beta_APC_Tracked_01,
			A3_Armor_F_Exp_APC_Tracked_01
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBLUFOR.hpp" */
            B_APC_Tracked_01_cannon_F,
            B_T_APC_Tracked_01_cannon_F,
            B_W_APC_Tracked_01_AA_F,
            B_W_APC_Tracked_01_cannon_F,
            B_W_APC_Tracked_01_CRV_F,
            B_W_APC_Tracked_01_rcws_F
        };
		weapons[] = {/* Automated */};
	};
};