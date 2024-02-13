class CfgPatches
{
	class A3_Aegis_Armor_F_Aegis_APC_Wheeled_02
	{
		addonRootClass = A3_Aegis_Armor_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Armor_F_Aegis,
			A3_Armor_F_Beta_APC_Wheeled_02,
			A3_Armor_F_Exp_APC_Wheeled_02
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgOPFOR.hpp" */
            O_A_APC_Wheeled_02_rcws_v2_F,
			Aegis_O_A_APC_Wheeled_02_hmg_lxWS,
			Aegis_O_A_APC_Wheeled_02_unarmed_lxWS
        };
		weapons[] = {/* Automated */};
	};
};