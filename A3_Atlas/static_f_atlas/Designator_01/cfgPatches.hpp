class CfgPatches
{
	class A3_Atlas_Static_F_Atlas_Designator_01
	{
		addonRootClass = A3_Atlas_Static_F_Atlas;
		requiredAddons[] = {A3_Atlas_Static_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            // Germany
            Atlas_B_G_Static_Designator_01_F,

            // ADF
            Atlas_B_A_Static_Designator_01_F,
            Atlas_B_A_Static_Designator_01_weapon_F,

            // IDF
            Atlas_I_I_Static_Designator_01_F,
            Atlas_I_I_Static_Designator_01_weapon_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};