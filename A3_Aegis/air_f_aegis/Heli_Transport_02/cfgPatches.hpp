class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_Heli_Transport_02
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Air_F_Aegis,
			A3_Air_F_Beta_Heli_Transport_02
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBLUFOR.hpp" */
            B_A_Heli_Transport_02_F,
            B_A_Heli_Transport_02_tna_F,
            B_A_Heli_Transport_02_wdl_F,
			Aegis_B_A_Heli_Transport_02_F,
			Aegis_B_A_Heli_Transport_02_tna_F,
			Aegis_B_A_Heli_Transport_02_wdl_F

            /* From "cfgCivil.hpp" */
            C_Heli_Transport_02_civil_F,
			Aegis_C_Heli_Transport_02_VIP_F,
			Aegis_C_Heli_Transport_02_civil_F_malden,
			Aegis_C_Heli_Transport_02_VIP_F_malden,
			Aegis_C_Heli_Transport_02_civil_F_Tanoa,
			Aegis_C_Heli_Transport_02_VIP_F_Tanoa,
			Aegis_C_Heli_Transport_02_VIP_F_LXWS,

			/* From "cfgIndep.hpp" */
			Aegis_I_Heli_Transport_02_Heavy_F,

            /* From "cfgION.hpp" */
            B_ION_Heli_Transport_02_F,
			Aegis_B_ION_Heli_Transport_02_VIP_F,

			/* From "cfgUNA.hpp" */
			Aegis_B_UN_lxWS_Heli_Transport_02_VIP_F
        };
		weapons[] = {/* Automated */};
	};
};
