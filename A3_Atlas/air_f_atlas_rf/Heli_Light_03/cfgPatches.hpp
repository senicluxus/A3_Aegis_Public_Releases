class CfgPatches
{
    /* Definitions */
    #include "\A3_Aegis\macros_urls.hpp"

	class A3_Atlas_Air_F_Atlas_RF_Heli_Light_03
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
			RF_Air_Heli_Light_03
        };
		requiredVersion = 0.1;
        skipWhenMissingDependencies = 1;
		units[] = 
		{
		};
		weapons[] = {/* Automated */};
	};
};