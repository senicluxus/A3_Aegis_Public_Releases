class CfgPatches
{
    /* Definitions */
    #include "\A3_Aegis\macros_urls.hpp"

	class A3_Aegis_Air_F_Aegis_RF_Heli_Light_03
	{
		addonRootClass = A3_Aegis_Air_F_Aegis_RF;
		requiredAddons[] = 
        {
            A3_Aegis_Data_F_Aegis,
			A3_Aegis_Air_F_Aegis,
			A3_Aegis_Air_F_Aegis_Heli_Light_03,
            RF_Air,
			RF_Air_Heli_Light_03
        };
		requiredVersion = 0.1;
        skipWhenMissingDependencies = 1;
		units[] = 
		{
			B_Heli_Light_03_dynamicLoadout_RF,
			B_Heli_Light_03_unarmed_RF,
			Aegis_B_A_Heli_light_03_dynamicLoadout_tna_RF,
			Aegis_B_A_Heli_Light_03_unarmed_tna_RF,
			Aegis_B_A_Heli_light_03_dynamicLoadout_wdl_RF,
			Aegis_B_A_Heli_Light_03_unarmed_wdl_RF,
			Aegis_B_E_Heli_Light_03_dynamicLoadout_RF,
			Aegis_B_E_Heli_Light_03_unarmed_RF,
			Aegis_I_E_Heli_Light_03_dynamicLoadout_ard_RF,
			Aegis_I_E_Heli_Light_03_unarmed_ard_RF,
			Aegis_B_E_Heli_Light_03_dynamicloadout_ard_RF,
			Aegis_B_E_Heli_Light_03_unarmed_ard_RF

		};
		weapons[] = {/* Automated */};
	};
};