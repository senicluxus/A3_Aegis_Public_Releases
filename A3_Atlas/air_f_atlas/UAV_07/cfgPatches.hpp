class CfgPatches
{
	class A3_Atlas_Air_F_Atlas_UAV_07
	{
		addonRootClass = A3_Atlas_Air_F_Atlas;
		requiredAddons[] = 
		{
			A3_Aegis_Air_F_Aegis,
			A3_Atlas_Air_F_Atlas
		};
		requiredVersion = 0.1;
		units[] =
        {
			Atlas_B_G_UAV_07_F,
			Atlas_B_G_UAV_07_ard_F,
			Atlas_B_L_UAV_07_F
        };
		weapons[] = {/* Automated */};
	};
};