class CfgPatches
{
	class A3_Aegis_Soft_F_Aegis_LSV_01
	{
		addonRootClass = A3_Aegis_Soft_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Soft_F_Aegis,
			A3_Soft_F_Exp_LSV_01
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBLUFOR.hpp" */
            B_LSV_01_light_F,
            B_T_LSV_01_light_F,
            B_W_LSV_01_armed_F,
            B_W_LSV_01_AT_F,
            B_W_LSV_01_light_F,
            B_W_LSV_01_unarmed_F,
            B_A_LSV_01_armed_F,
            B_A_LSV_01_armed_tna_F,
            B_A_LSV_01_armed_wdl_F,
            B_A_LSV_01_AT_F,
            B_A_LSV_01_AT_tna_F,
            B_A_LSV_01_AT_wdl_F,
            B_A_LSV_01_light_F,
            B_A_LSV_01_light_tna_F,
            B_A_LSV_01_light_wdl_F,
            B_A_LSV_01_unarmed_F,
            B_A_LSV_01_unarmed_tna_F,
            B_A_LSV_01_unarmed_wdl_F,

            /* From "cfgCTRG.hpp" */
            B_CTRG_LSV_01_light_sand_F,
            B_CTRG_LSV_01_armed_F,
            B_CTRG_LSV_01_armed_sand_F,
            B_CTRG_LSV_01_AT_F,
            B_CTRG_LSV_01_AT_sand_F,
            B_CTRG_LSV_01_unarmed_F,
            B_CTRG_LSV_01_unarmed_sand_F
        };
		weapons[] = {/* Automated */};
	};
};