class CfgPatches
{
    /* Definitions */
    #include "\A3_Aegis\macros_urls.hpp"

	class A3_Atlas_Air_F_Atlas_RF_Heli_Medium_EC
	{
		addonRootClass = A3_Atlas_Air_F_Atlas_RF;
		requiredAddons[] = 
        {
            A3_Aegis_Data_F_Aegis,
			A3_Aegis_Air_F_Aegis,
			A3_Aegis_Air_F_Aegis_Heli_Light_03,
			A3_Atlas_Data_F_Atlas,
			A3_Atlas_Air_F_Atlas,
            RF_Air,
			RF_Air_Heli_Medium_EC
        };
		requiredVersion = 0.1;
        skipWhenMissingDependencies = 1;
		units[] = 
		{
			/* French Foreign Legion */
			Atlas_B_L_Heli_EC_03_RF,
			Atlas_B_L_Heli_EC_04_military_RF,

			/* HIMF */
			Atlas_B_H_Heli_EC_03_RF,
			Atlas_B_H_Heli_EC_04_military_RF,

			/* Karzeghistan */
			Atlas_B_K_Heli_EC_03_RF,
			Atlas_B_K_Heli_EC_04_military_RF,

			/* UNO */
			Atlas_I_UNO_Heli_EC_01A_military_RF,
			Atlas_I_UNO_Heli_EC_02_RF
		};
		weapons[] = {/* Automated */};
	};
};