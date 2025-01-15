class CfgPatches
{
    /* Definitions */
    #include "\A3_Aegis\macros_urls.hpp"

	class A3_Aegis_Air_F_Aegis_RF_Heli_Medium_EC
	{
		addonRootClass = A3_Aegis_Air_F_Aegis_RF;
		requiredAddons[] = 
        {
            A3_Aegis_Data_F_Aegis,
			A3_Aegis_Air_F_Aegis,
			A3_Aegis_Air_F_Aegis_Heli_Light_03,
            RF_Air,
			RF_Air_Heli_Medium_EC
        };
		requiredVersion = 0.1;
        skipWhenMissingDependencies = 1;
		units[] = 
		{
			/* From "cfgBLUFOR.hpp" */
			Aegis_B_T_Heli_EC_03_RF,
			Aegis_B_T_Heli_EC_04_military_RF,
			Aegis_B_W_Heli_EC_03_RF,
			Aegis_B_W_Heli_EC_04_military_RF,
			Aegis_B_D_Heli_EC_03_RF,
			Aegis_B_D_Heli_04_military_RF,

			/* From "cfgCivil.hpp" */
			Aegis_C_Heli_EC_01_civ_RF_lxWS,
			Aegis_C_Heli_EC_01A_civ_RF_lxWS,
			Aegis_C_Heli_EC_01_civ_RF_tanoa,
			Aegis_C_Heli_EC_01A_civ_RF_tanoa,
			Aegis_C_Heli_EC_04_Rescue_RF_tanoa,
			Aegis_C_Heli_EC_01_civ_RF_Enoch,
			Aegis_C_Heli_EC_01A_civ_RF_Enoch,
			Aegis_C_Heli_EC_04_Rescue_RF_Enoch,
			Aegis_C_Heli_EC_01_civ_RF_Malden,
			Aegis_C_Heli_EC_01A_civ_RF_Malden,
			Aegis_C_Heli_EC_04_Rescue_RF_Malden,

			/* From "cfgEAF.hpp" */
			Aegis_B_E_Heli_EC_01A_military_RF,
			Aegis_I_E_Heli_EC_01A_military_RF_ard,
			Aegis_B_E_Heli_EC_01A_military_RF_ard,

			/* From "cfgOPFOR.hpp" */
			Aegis_O_A_Heli_EC_01A_military_RF,
			Aegis_O_A_Heli_EC_02_RF,

			/* From "cfgSFIA.hpp" */
			Aegis_O_SFIA_EC_01A_Military_RF
			
		};
		weapons[] = {/* Automated */};
	};
};