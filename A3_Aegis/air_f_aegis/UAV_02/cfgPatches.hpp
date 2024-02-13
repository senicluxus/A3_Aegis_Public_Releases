class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_UAV_02
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] = {A3_Aegis_Air_F_Aegis};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBLUFOR.hpp" */
            B_T_UAV_02_dynamicLoadout_F,
            B_W_UAV_02_dynamicLoadout_F,
            Aegis_B_D_UAV_02_dynamicLoadout_F,
            B_A_UAV_02_dynamicLoadout_F,
            B_A_UAV_02_dynamicLoadout_tna_F,
            B_A_UAV_02_dynamicLoadout_wdl_F,
            
            /* From "cfgRUS.hpp" */
            O_R_UAV_02_dynamicLoadout_F,
            O_R_UAV_02_dynamicLoadout_ard_F
        };
		weapons[] = {/* Automated */};
	};
};