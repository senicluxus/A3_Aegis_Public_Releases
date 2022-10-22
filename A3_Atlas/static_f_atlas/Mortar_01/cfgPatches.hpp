class CfgPatches
{
	class A3_Atlas_Static_F_Atlas_Mortar_01
	{
		addonRootClass = A3_Atlas_Static_F_Atlas;
		requiredAddons[] =
		{
			A3_Atlas_Static_F_Atlas,
			A3_Static_F_Mortar_01
		};
		requiredVersion = 0.1;
		units[] =
        {
            // Belarus
            Atlas_O_W_Mortar_01_F,

            // Legionnaires
            Atlas_B_L_Mortar_01_F,

            // Germany
            Atlas_B_G_Mortar_01_F,

            // Takistani Army
            Atlas_O_T_Mortar_01_F,

            // ADF
            Atlas_B_A_Mortar_01_F,
            Atlas_B_A_Mortar_01_support_F,
            Atlas_B_A_Mortar_01_weapon_F,
            Atlas_B_A_Mortar_01_ard_F,
            Atlas_B_A_Mortar_01_trp_F,

            // CDF
            Atlas_I_C_Mortar_01_F,
            Atlas_I_C_Mortar_01_support_F,
            Atlas_I_C_Mortar_01_weapon_F,

            // IDF
            Atlas_I_I_Mortar_01_F,
            Atlas_I_I_Mortar_01_support_F,
            Atlas_I_I_Mortar_01_weapon_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};