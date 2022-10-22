class CfgPatches
{
	class A3_Atlas_Air_F_Atlas_UAV_01
	{
		addonRootClass = A3_Atlas_Air_F_Atlas;
		requiredAddons[] = {A3_Atlas_Air_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            // Legionnaires
            Atlas_B_L_UAV_01_F,

            // Germany
            Atlas_B_G_UAV_01_F,

            // ADF
            Atlas_B_A_UAV_01_backpack_F,
            Atlas_B_A_UAV_01_F,

            // CDF
            Atlas_I_C_UAV_01_backpack_F,
            Atlas_I_C_UAV_01_F,

            // UNO
            Atlas_I_UNO_UAV_01_backpack_F,
            Atlas_I_UNO_UAV_01_F,
            Atlas_I_UNO_wdl_UAV_01_F,

            // IDF
            Atlas_I_I_UAV_01_backpack_F,
            Atlas_I_I_UAV_01_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};