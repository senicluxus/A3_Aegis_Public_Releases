class CfgPatches
{
	class A3_Opf_Armor_F_Opf_MBT_02
	{
		addonRootClass = A3_Opf_Armor_F_Opf;
		requiredAddons[] =
		{
			A3_Aegis_Armor_F_Aegis_MBT_02,
			A3_Opf_Armor_F_Opf
		};
		requiredVersion = 0.1;
		units[] =
        {
            // Separatists
            Opf_O_S_MBT_02_cannon_F
        };
		weapons[] = {/* Automated */};
	};
};