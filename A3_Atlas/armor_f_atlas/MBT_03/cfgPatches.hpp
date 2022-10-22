class CfgPatches
{
	class A3_Atlas_Armor_F_Atlas_MBT_03
	{
		addonRootClass = A3_Atlas_Armor_F_Atlas;
		requiredAddons[] = {A3_Atlas_Armor_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            // Bundeswehr
            Atlas_B_G_MBT_03_cannon_F,
            Atlas_B_G_MBT_03_cannon_ard_F,

			// ADF
			Atlas_B_A_MBT_03_cannon_F,
			Atlas_B_A_MBT_03_cannon_ard_F,
			Atlas_B_A_MBT_03_cannon_trp_F
        };
		weapons[] = {/* Automated */};
	};
};