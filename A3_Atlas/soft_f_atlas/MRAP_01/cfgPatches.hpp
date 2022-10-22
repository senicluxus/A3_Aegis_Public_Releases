class CfgPatches
{
	class A3_Atlas_Soft_F_Atlas_MRAP_01
	{
		addonRootClass = A3_Atlas_Soft_F_Atlas;
		requiredAddons[] = {A3_Atlas_Soft_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            // IDF
            Atlas_I_I_MRAP_01_F,
            Atlas_I_I_MRAP_01_gmg_F,
            Atlas_I_I_MRAP_01_hmg_F,

			// Marar
			Atlas_B_M_MRAP_01_F,
			Atlas_B_M_MRAP_01_gmg_F,
			Atlas_B_M_MRAP_01_hmg_F,

			// United Nations (Sahrani)
			Atlas_I_UNO_MRAP_01_F,
			Atlas_I_UNO_M_MRAP_01_gmg_F,
			Atlas_I_UNO_MRAP_01_hmg_F,

			//United Nations (Chernarus)
			Atlas_I_UNO_wdl_MRAP_01_F,
			Atlas_I_UNO_wdl_M_MRAP_01_gmg_F,
			Atlas_I_UNO_wdl_MRAP_01_hmg_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};