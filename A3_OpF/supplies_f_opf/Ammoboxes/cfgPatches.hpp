class CfgPatches
{
	class A3_Opf_Supplies_F_Opf_Ammoboxes
	{
		addonRootClass = A3_Opf_Supplies_F_Opf;
		requiredAddons[] = {A3_Opf_Supplies_F_Opf};
		requiredVersion = 0.1;
		units[] =
        {
            // Paramilitary
            Box_Para_Wps_F,
            Box_Para_Ammo_F,
            Box_Para_WpsLaunch_F,

            // Raven
            Box_IR_Equip_F,

            // Separatists
            Box_ChDKZ_Ammo_F,
            Box_ChDKZ_Wps_F,
            Box_ChDKZ_WpsLaunch_F,

            // Insurgents
            Box_TKM_Ammo_F,
            Box_TKM_Wps_F,
            Box_TKM_WpsLaunch_F,

            // Preppers
            Box_Preppers_Wps_F,
            Box_Preppers_Ammo_F,
            Box_Preppers_WpsLaunch_F
        };
		weapons[] = {/* Automated */};
	};
};