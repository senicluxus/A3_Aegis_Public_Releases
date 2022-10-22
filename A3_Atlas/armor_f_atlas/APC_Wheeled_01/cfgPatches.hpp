class CfgPatches
{
	class Atlas_B_M_APC_Wheeled_01_cannon_v2_F
	{
		addonRootClass = A3_Atlas_Armor_F_Atlas;
		requiredAddons[] = {A3_Atlas_Armor_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
			//ADF
			Atlas_B_A_APC_Wheeled_01_cannon_v2_F,
			Atlas_B_A_APC_Wheeled_01_cannon_v2_ard_F,
			Atlas_B_A_APC_Wheeled_01_cannon_v2_trp_F,

			//Marar
            Atlas_B_M_APC_Wheeled_01_cannon_v2_F
        };
		weapons[] = {/* Automated */};
	};
};