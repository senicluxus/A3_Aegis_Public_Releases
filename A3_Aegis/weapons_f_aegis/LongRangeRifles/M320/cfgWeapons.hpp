class CfgWeapons
{
	class srifle_LRR_F;
	class Aegis_srifle_LRR_sand_F: srifle_LRR_F
	{
		displayName = "M320 LRR .408 (Sand)";	// todo localize
		baseWeapon = "Aegis_srifle_LRR_sand_F";
		picture = "A3_Aegis\weapons_f_aegis\LongRangeRifles\M320\UI\Aegis_srifle_LRR_sand_F_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {
			"A3_Aegis\weapons_f_aegis\LongRangeRifles\M320\Data\cheytac_m200_sand_co.paa"
		} ;
	};
	class Aegis_srifle_LRR_olive_F: Aegis_srifle_LRR_sand_F
	{
		displayName = "M320 LRR .408 (Olive)";	// todo localize
		baseWeapon = "Aegis_srifle_LRR_olive_F";
		picture = "A3_Aegis\weapons_f_aegis\LongRangeRifles\M320\UI\Aegis_srifle_LRR_olive_F_ca.paa";
		hiddenSelectionsTextures[] = {
			"A3_Aegis\weapons_f_aegis\LongRangeRifles\M320\Data\cheytac_m200_olive_co.paa"
		} ;
	};
};