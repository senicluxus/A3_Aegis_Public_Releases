class CfgPatches
{
	class A3_Atlas_Armor_F_Atlas_APC_Wheeled_02
	{
		addonRootClass = A3_Atlas_Armor_F_Atlas;
		requiredAddons[] = {A3_Atlas_Armor_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            // Belarus
            Atlas_O_W_APC_Wheeled_02_rcws_v2_ghex_F,
			Atlas_O_W_APC_Wheeled_02_unarmed_lxWS,

			// HIMF
			Atlas_B_H_APC_Wheeled_02_unarmed_lxWS,
			Atlas_B_H_APC_Wheeled_02_hmg_lxWS,

            // Takistani Army
            Atlas_O_T_APC_Wheeled_02_rcws_v2_F,
			Atlas_O_T_APC_Wheeled_02_hmg_lxWS,
			Atlas_O_T_APC_Wheeled_02_unarmed_lxWS
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};