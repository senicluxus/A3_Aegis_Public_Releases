class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_Heli_Light_03
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Air_F_Aegis,
			A3_Air_F_EPB_Heli_Light_03
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBLUFOR.hpp" */
            B_A_Heli_light_03_dynamicLoadout_F,
            B_A_Heli_light_03_unarmed_F,
            B_A_Heli_light_03_dynamicLoadout_tna_F,
            B_A_Heli_light_03_unarmed_tna_F,
            B_A_Heli_light_03_dynamicLoadout_wdl_F,
            B_A_Heli_light_03_unarmed_wdl_F
        };
		weapons[] = {/* Automated */};
	};
};