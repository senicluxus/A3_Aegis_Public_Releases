class CfgPatches
{
	class A3_Atlas_Air_F_Atlas_VTOL_01
	{
		addonRootClass = A3_Atlas_Air_F_Atlas;
		requiredAddons[] = {A3_Atlas_Air_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            // IDF
            Atlas_I_I_VTOL_01_infantry_F,
            Atlas_I_I_VTOL_01_vehicle_F,
			Atlas_I_I_VTOL_01_armed_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};