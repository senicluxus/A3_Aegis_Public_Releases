class CfgPatches
{
	class A3_Atlas_Air_F_Atlas_Heli_Transport_02
	{
		addonRootClass = A3_Atlas_Air_F_Atlas;
		requiredAddons[] = {A3_Atlas_Air_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgGER.hpp" */
            Atlas_B_G_Heli_Transport_02_F,
    	    Atlas_B_G_Heli_Transport_02_ard_F,

			/* From "cfgUNO.hpp"*/
			Atlas_I_UNO__Heli_Transport_02_VIP_F,
			Atlas_I_UNO_Heli_Transport_02_Heavy_F
		};
		weapons[] = {/* Automated */};
	};
};