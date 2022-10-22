class CfgPatches
{
	class A3_Aegis_Supplies_F_Aegis_Ammoboxes
	{
		addonRootClass = A3_Aegis_Supplies_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Supplies_F_Aegis,
			A3_Supplies_F_Enoch_Ammoboxes,
			A3_Supplies_F_Exp_Ammoboxes,
            A3_Supplies_F_Orange_Ammoboxes,
			A3_Weapons_F_Ammoboxes
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgBLUFOR.hpp" */
            B_T_supplyCrate_F,
            Box_T_NATO_Ammo_F,
            Box_T_NATO_AmmoOrd_F,
            Box_T_NATO_AmmoVeh_F,
            Box_T_NATO_Equip_F,
            Box_T_NATO_Grenades_F,
            Box_T_NATO_Support_F,
            Box_T_NATO_Uniforms_F,
            Box_T_NATO_WpsLaunch_F,
            B_W_supplyCrate_F,
            Box_W_NATO_Ammo_F,
            Box_W_NATO_Equip_F,
            Box_W_NATO_Support_F,
            Box_W_NATO_Uniforms_F,
            Box_W_NATO_Wps_F,
            Box_W_NATO_WpsLaunch_F,
            Box_W_NATO_WpsSpecial_F,
            B_A_supplyCrate_F,
            B_A_supplyCrate_tropic_F,
            B_A_supplyCrate_wdl_F,
            Box_A_NATO_Ammo_F,
            Box_A_NATO_Ammo_tropic_F,
            Box_A_NATO_Ammo_wdl_F,
            Box_A_NATO_Equip_F,
            Box_A_NATO_Equip_tropic_F,
            Box_A_NATO_Equip_wdl_F,
            Box_A_NATO_Uniforms_F,
            Box_A_NATO_Uniforms_tropic_F,
            Box_A_NATO_Uniforms_wdl_F,
            Box_A_NATO_Wps_F,
            Box_A_NATO_Wps_tropic_F,
            Box_A_NATO_Wps_wdl_F,
            Box_A_NATO_WpsSpecial_F,
            Box_A_NATO_WpsSpecial_tropic_F,
            Box_A_NATO_WpsSpecial_wdl_F,

            /* From "cfgOPFOR.hpp" */
            Box_T_CSAT_Equip_F,
            Box_T_CSAT_Uniforms_F,
            Box_T_East_AmmoOrd_F,
            Box_T_East_AmmoVeh_F,
            Box_T_East_Grenades_F,
            Box_T_East_Support_F,
            Box_T_East_WpsLaunch_F,
            O_T_supplyCrate_F,
            Box_A_East_Ammo_F,
            Box_A_East_Wps_F,
            Box_A_East_WpsLaunch_F,
            O_A_supplyCrate_F,

            /* From "cfgViper.hpp" */
            V_supplyCrate_F,
            V_T_supplyCrate_F,

            /* From "cfgRUS.hpp" */
            Box_RUS_Ammo_F,
            Box_RUS_AmmoOrd_F,
            Box_RUS_AmmoVeh_F,
            Box_RUS_Equip_arid_F,
            Box_RUS_Equip_F,
            Box_RUS_Grenades_F,
            Box_RUS_Support_arid_F,
            Box_RUS_Support_F,
            Box_RUS_Uniforms_arid_F,
            Box_RUS_Uniforms_F,
            Box_RUS_Wps_F,
            Box_RUS_WpsLaunch_F,
            Box_RUS_WpsSpecial_arid_F,
            Box_RUS_WpsSpecial_F,
            O_R_supplyCrate_F,

            /* From "cfgION.hpp" */
            Box_ION_Equip_F
        };
		weapons[] = {/* Automated */};
	};
};