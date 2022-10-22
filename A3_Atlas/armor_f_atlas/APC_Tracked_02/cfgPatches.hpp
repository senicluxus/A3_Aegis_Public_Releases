class CfgPatches
{
	class A3_Atlas_Armor_F_Atlas_APC_Tracked_02
	{
		addonRootClass = A3_Atlas_Armor_F_Atlas;
		requiredAddons[] = {A3_Atlas_Armor_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            // Belarus
            Atlas_O_W_APC_Tracked_02_cannon_ghex_F,

            // Takistani Army
            Atlas_O_T_APC_Tracked_02_cannon_F,

            // CDF
            Atlas_I_C_APC_Tracked_02_cannon_F,
            Atlas_I_C_APC_Tracked_02_AA_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};