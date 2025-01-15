class CfgWeapons
{
	class Rifle_Long_Base_F;
	class GM6_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class Aegis_srifle_GM6B_base_F: GM6_base_F
	{
		author = $STR_A3_A_Ravenholme;
		_generalMacro = Aegis_srifle_GM6B_base_F;
		model = "\A3\Weapons_F\LongRangeRifles\GM6\GM6_F.p3d";
		magazines[] = {"Aegis_5Rnd_127x99_Mag","Aegis_5Rnd_127x99_AP_Mag"};
	};
	class Aegis_srifle_GM6B_F: Aegis_srifle_GM6B_base_F
	{
		author = $STR_A3_A_Ravenholme;
		_generalMacro = Aegis_srifle_GM6B_F;
		baseWeapon = Aegis_srifle_GM6B_F;
		scope = public;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 480;
			class MuzzleSlot{};
			class CowsSlot: CowsSlot_Rail
			{
				iconPosition[] = {0.55,0.3};
				iconScale = 0.2;
			};
			/*class PointerSlot: asdg_FrontSideRail // Has Clipping, unfortunately.
        	{
            	iconPosition[] =
            	{
                	0.05,   // X
                	0.38    // Y
            	};
            	iconScale = 0.2;
        	};*/
		};
		inertia = 1.2;
		aimTransitionSpeed = 0.5;
		dexterity = 1.0;
		class ItemInfo
		{
			priority = 1;
		};
		displayName = $STR_A3_A_cfgweapons_Aegis_srifle_GM6B_F0;
		picture = "\A3\Weapons_F\LongRangeRifles\GM6\Data\UI\gear_gm6_X_CA.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_sniper_CA.paa";
		descriptionShort = $STR_A3_A_cfgweapons_Aegis_srifle_GM6B_1;

	};
	class Aegis_srifle_GM6B_sand_F: Aegis_srifle_GM6B_F
	{
		displayName = $STR_A3_A_cfgweapons_Aegis_srifle_GM6B_sand_F0;
		baseWeapon = "Aegis_srifle_GM6B_sand_F";
		picture = "A3_Aegis\weapons_f_aegis\LongRangeRifles\GM6\UI\Aegis_srifle_gm6_sand_F_ca.paa";
		hiddenSelections[] = {"camo","mat1","mat2"};
		hiddenSelectionsTextures[] = {
			"A3_Aegis\weapons_f_aegis\LongRangeRifles\GM6\Data\gm6_sand_co.paa"
		} ;
		hiddenSelectionsMaterials[] = {
			"",
			"A3_Aegis\weapons_f_aegis\LongRangeRifles\GM6\Data\gm6.rvmat",
			"a3\weapons_f_bootcamp\longrangerifles\gm6_camo\data\gm6_plastic_csat.rvmat"
		};
	};
	class Aegis_srifle_GM6B_khaki_F: Aegis_srifle_GM6B_sand_F
	{
		displayName = $STR_A3_A_cfgweapons_Aegis_srifle_GM6B_khk_F0;
		baseWeapon = "Aegis_srifle_GM6B_khaki_F";
		picture = "A3_Aegis\weapons_f_aegis\LongRangeRifles\GM6\UI\Aegis_srifle_gm6_olive_F_ca.paa";
		hiddenSelectionsTextures[] = {
			"A3_Aegis\weapons_f_aegis\LongRangeRifles\GM6\Data\gm6_olive_co.paa"
		};
	};
};