class CfgPatches
{
	class A3_Atlas_Soft_F_Atlas_UGV_02
	{
		addonRootClass = A3_Atlas_Soft_F_Atlas;
		requiredAddons[] = {A3_Atlas_Soft_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            // Germany
            Atlas_B_G_UGV_02_Demining_F,

            // ADF
            Atlas_B_A_UGV_02_Demining_backpack_F,
            Atlas_B_A_UGV_02_Demining_F,

            // CDF
            Atlas_I_C_UGV_02_Demining_backpack_F,
            Atlas_I_C_UGV_02_Demining_F,

            // UNO
            Atlas_I_UNO_UGV_02_Demining_backpack_F,
            Atlas_I_UNO_UGV_02_Demining_F,
            Atlas_I_UNO_wdl_UGV_02_Demining_F,

            // IDF
            Atlas_I_I_UGV_02_Demining_backpack_F,
            Atlas_I_I_UGV_02_Demining_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};