class CfgPatches
{
	class A3_Atlas_Air_F_Atlas_Heli_Transport_01
	{
		addonRootClass = A3_Atlas_Air_F_Atlas;
		requiredAddons[] = {A3_Atlas_Air_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgIDF.hpp" */
            Atlas_I_I_Heli_Transport_01_F,

			//ADF
			Atlas_B_A_Heli_Transport_01_F,
			Atlas_B_A_Heli_Transport_01_ard_F,
			Atlas_B_A_Heli_Transport_01_trp_F
        };
		weapons[] = {/* Automated */};
	};
};