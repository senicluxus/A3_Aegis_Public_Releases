class CfgPatches
{
	class A3_Atlas_Armor_F_Atlas_MBT_04
	{
		addonRootClass = A3_Atlas_Armor_F_Atlas;
		requiredAddons[] =
		{
			A3_Atlas_Armor_F_Atlas,
			A3_Armor_F_Tank_MBT_04
		};
		requiredVersion = 0.1;
		units[] =
        {
            // HIMF
            Atlas_B_H_MBT_04_cannon_F,
            Atlas_B_H_MBT_04_command_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};