class CfgPatches
{
	class A3_Opf_Air_F_Opf_UAV_02_lxWS
	{
		addonRootClass = A3_Opf_Air_F_Opf;
		requiredAddons[] =
		{
			A3_Opf_Air_F_Opf,
			A3_Air_F_Orange_UAV_01,
			A3_Drones_F_Air_F_Gamma_UAV_01,
			A3_Supplies_F_Orange_Bags,
            Air_F_lxWS
		};
		requiredVersion = 0.1;
		units[] =
        {
			/* From "cfgChKDZ.hpp" */
			Opf_O_S_UAV_02_IED_lxWS,
			Opf_O_S_UAV_02_IED_backpack_lxWS,

			/* From "cfgInsurgent.hpp" */
			Opf_I_I_UAV_02_IED_lxWS,
			Opf_I_I_UAV_02_IED_backpack_lxWS,
			
			/*From "cfgPartisans.hpp"*/
			Opf_B_P_UAV_02_IED_lxWS,
			Opf_B_P_UAV_02_IED_backpack_lxWS

        };
		weapons[] = {/* Automated */};
	};
};