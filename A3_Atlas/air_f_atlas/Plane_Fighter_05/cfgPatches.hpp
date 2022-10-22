class CfgPatches
{
	class A3_Atlas_Air_F_Atlas_Plane_Fighter_05
	{
		addonRootClass = A3_Atlas_Air_F_Atlas;
		requiredAddons[] =
		{
			A3_Aegis_Air_F_Aegis_Plane_Fighter_05,
			A3_Atlas_Air_F_Atlas
		};
		requiredVersion = 0.1;
		units[] =
        {
            // ADF
            Atlas_B_A_Ejection_Seat_Plane_Fighter_05_F,
            Atlas_B_A_Plane_Fighter_05_F,
            Atlas_B_A_Plane_Fighter_05_Stealth_F,
			Atlas_B_A_Plane_Fighter_05_ard_F,
            Atlas_B_A_Plane_Fighter_05_Stealth_ard_F,
			Atlas_B_A_Plane_Fighter_05_trp_F,
            Atlas_B_A_Plane_Fighter_05_Stealth_trp_F,

            // IDF
            Atlas_I_I_Ejection_Seat_Plane_Fighter_05_F,
            Atlas_I_I_Plane_Fighter_05_F,
            Atlas_I_I_Plane_Fighter_05_Stealth_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};