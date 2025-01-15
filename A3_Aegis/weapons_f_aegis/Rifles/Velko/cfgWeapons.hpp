class CfgWeapons
{
	class arifle_Velko_base_lxWS;
	class Aegis_arifle_Velko_oak: arifle_Velko_base_lxWS
	{
		scope = 2;
		displayName = "Velko R4 5.56 mm (Wood)";	// todo localize
		baseWeapon = "Aegis_arifle_Velko_oak";
		picture = "A3_Aegis\weapons_f_aegis\Rifles\Velko\UI\Aegis_arifle_Velko_oak_ca.paa";
		hiddenSelectionsTextures[] = {
			"lxWS\weapons_f_lxWS\Rifles\velko\data\galatr4_co.paa",
			"A3_Aegis\weapons_f_aegis\Rifles\Velko\data\handguard_oak_co.paa"
		};
	};
	class Aegis_arifle_Velko_sand: arifle_Velko_base_lxWS
	{
		scope = 2;
		displayName = "Velko R4 5.56 mm (Sand)";	// todo localize
		baseWeapon = "Aegis_arifle_Velko_sand";
		picture = "A3_Aegis\weapons_f_aegis\Rifles\Velko\UI\Aegis_arifle_Velko_sand_ca.paa";
		hiddenSelectionsTextures[] = {
			"A3_Aegis\weapons_f_aegis\Rifles\Velko\data\galatr4_sand_co.paa",
			"A3_Aegis\weapons_f_aegis\Rifles\Velko\data\handguard_sand_co.paa"
		};
	};

	class arifle_VelkoR5_lxWS;
	class Aegis_arifle_VelkoR5_oak: arifle_VelkoR5_lxWS
	{
		displayName = "Velko R5 5.56 mm (Wood)";	// todo localize
		baseWeapon = "Aegis_arifle_VelkoR5_oak";
		picture = "A3_Aegis\weapons_f_aegis\Rifles\Velko\UI\Aegis_arifle_VelkoR5_oak_ca.paa";
		hiddenSelectionsTextures[] = {
			"lxWS\weapons_1_f_lxWS\Rifles\velkor5\data\galatr5_co.paa",
			"lxWS\weapons_f_lxWS\Rifles\velko\data\hanguard_co.paa",
			"A3_Aegis\weapons_f_aegis\Rifles\Velko\data\r5handguard_oak_co.paa"
		};
	};
	class Aegis_arifle_VelkoR5_sand: arifle_VelkoR5_lxWS
	{
		displayName = "Velko R5 5.56 mm (Sand)";	// todo localize
		baseWeapon = "Aegis_arifle_VelkoR5_sand";
		picture = "A3_Aegis\weapons_f_aegis\Rifles\Velko\UI\Aegis_arifle_VelkoR5_sand_ca.paa";
		hiddenSelectionsTextures[] = {
			"A3_Aegis\weapons_f_aegis\Rifles\Velko\data\galatr4_sand_co.paa",
			"A3_Aegis\weapons_f_aegis\Rifles\Velko\data\handguard_sand_co.paa",
			"A3_Aegis\weapons_f_aegis\Rifles\Velko\data\r5handguard_sand_co.paa"
		};
	};
};