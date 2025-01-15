class CfgPatches
{
	class A3_Atlas_Characters_F_Atlas_RF
	{
		author = $STR_A3_A_Ravenholme;
		name = "Arma 3 Atlas - Reaction Forces Characters";
		requiredAddons[] =
		{
			A3_Aegis_Characters_F_Aegis,
			A3_Atlas_Data_F_Atlas,
            A3_Atlas_Characters_F_Atlas,
            RF_Characters,
			A3_Characters_F_Enoch,
			A3_Characters_F_Heads,
			A3_Characters_F_Orange,
			A3_Characters_F_Tacops
		};
		requiredVersion = 0.1;
        skipWhenMissingDependencies = 1;
		units[] =
        {
			/* From "cfgADF.hpp" */
			Atlas_B_A_support_CMort_RF,
			Atlas_B_A_support_CMort_ard_RF,
			Atlas_B_A_support_CMort_trp_RF,

			/* From "cfgGER.hpp "*/
			Atlas_B_G_support_CMort_RF,
			Atlas_B_G_support_CMort_ard_RF,

			/* From "cfgHIMF.hpp" */
			Atlas_B_H_support_CMort_RF,

            /* From "cfgIndep.hpp" */
			Atlas_I_Pathfinder_AR_F,
			Atlas_I_Pathfinder_Exp_F,
			Atlas_I_Pathfinder_GL_F,
			Atlas_I_Pathfinder_M_F,
			Atlas_I_Pathfinder_Medic_F,
			Atlas_I_Pathfinder_F,
			Atlas_I_Pathfinder_AT_F,
			Atlas_I_Pathfinder_SL_F,
			Atlas_I_Pathfinder_TL_F,
			Atlas_I_Pathfinder_RadioOperator_F,
			Atlas_I_Pathfinder_CMort_F,
			Atlas_I_Pathfinder_UAV_RF_F,

			/* From "cfgKarzeg.hpp" */
			Atlas_B_K_support_CMort_RF,

			/* From "cfgLegion.hpp" */
			Atlas_B_L_support_CMort_RF,

			/* From "cfgMarar.hpp" */
			Atlas_B_M_support_CMort_RF,

			/* From "cfgTKA.hpp" */
			Atlas_O_T_support_CMort_RF

        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};