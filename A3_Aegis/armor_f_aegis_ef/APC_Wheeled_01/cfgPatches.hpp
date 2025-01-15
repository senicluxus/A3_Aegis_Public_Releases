class CfgPatches
{
	class A3_Aegis_Armor_F_Aegis_EF_APC_Wheeled_01
	{
		addonRootClass = A3_Aegis_Armor_F_Aegis_EF;
		requiredAddons[]=
		{
			A3_Aegis_Armor_F_Aegis,
			EF_Data,
			EF_Marines
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 0.1;
		units[] = 
        {
            /* From "cfgMJTF.hpp" */
			Aegis_B_MJTF_D_APC_Wheeled_01_cannon_v2_F,
			Aegis_B_MJTF_D_APC_Wheeled_01_command_lxWS,
			Aegis_B_MJTF_D_APC_Wheeled_01_mortar_lxWS,
			Aegis_B_MJTF_D_APC_Wheeled_01_atgm_v2,
			Aegis_B_MJTF_D_APC_Wheeled_01_medical_F,
			Aegis_B_MJTF_W_APC_Wheeled_01_cannon_v2_F,
			Aegis_B_MJTF_W_APC_Wheeled_01_command_lxWS,
			Aegis_B_MJTF_W_APC_Wheeled_01_mortar_lxWS,
			Aegis_B_MJTF_W_APC_Wheeled_01_atgm_v2,
			Aegis_B_MJTF_W_APC_Wheeled_01_medical_F
        };
		weapons[] = {/* Automated */};
	};
};