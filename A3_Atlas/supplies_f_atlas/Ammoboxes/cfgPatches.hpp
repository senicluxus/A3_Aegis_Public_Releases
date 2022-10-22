class CfgPatches
{
	class A3_Atlas_Supplies_F_Atlas_Ammoboxes
	{
		addonRootClass = A3_Atlas_Supplies_F_Atlas;
		requiredAddons[] = {A3_Atlas_Supplies_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            // Belarus
            Atlas_O_W_supplyCrate_F,

            // Legionnaires
            L_supplyCrate_F,
            
            // Germany
            Atlas_B_G_supplyCrate_F,

            // Takistani Army
            Box_TKA_Ammo_F,
            Box_TKA_Wps_F,
            Box_TKA_WpsLaunch_F,
            Atlas_O_T_supplyCrate_F,

            // HIMF
            Box_Tanoan_Ammo_F,
            Box_Tanoan_Wps_F,
            Box_Tanoan_WpsLaunch_F,
            H_supplyCrate_F,

            // IDF
            Atlas_I_I_supplyCrate_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};