class CfgWeapons
{
    /* Inheritance Tree */
	class ItemCore;
	class HeadgearItem;

    /* Bases */
	class HelmetBase: ItemCore
	{
		class ItemInfo: HeadgearItem{};
	};

    /* Items */
	class H_HelmetB: ItemCore
	{
	  	class ItemInfo;
	};
	class H_HelmetB_camo;
	class H_HelmetB_light: H_HelmetB
	{
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_light_CA.paa";
		model = "\A3\Characters_F\Common\headgear_placeholder.p3d";
		descriptionShort = $STR_A3_SP_AL_I;
		class ItemInfo: ItemInfo
		{
			mass = 20;
			uniformModel = "\A3\Characters_F\Common\headgear_placeholder.p3d";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = HitHead;
					armor = 4;
					passThrough = 0.5;
				};
			};
		};
	};
	class H_Booniehat_khk: HelmetBase
	{
		allowedFacewear[] =
		{
			"",6.5,
			G_Aviator,1,
			G_Bandanna_aviator,1,
			G_Bandanna_beast,1,
			G_Bandanna_blk,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_shades,1,
			G_Bandanna_sport,1,
			G_Bandanna_tan,1,
			G_Bandanna_Skull1,1,
			G_Bandanna_Skull2,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_Booniehat_oli: H_Booniehat_khk
	{
		allowedFacewear[] =
		{
			"",6.5,
			G_Aviator,1,
			G_Bandanna_aviator,1,
			G_Bandanna_beast,1,
			G_Bandanna_blk,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_shades,1,
			G_Bandanna_sport,1,
			G_Bandanna_tan,1,
			G_Bandanna_Skull1,1,
			G_Bandanna_Skull2,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_Booniehat_mcamo: H_Booniehat_khk
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\booniehat_mcamo_CO.paa"};
	};
	class H_Booniehat_tan: H_Booniehat_khk
	{
		allowedFacewear[] =
		{
			"",6.5,
			G_Aviator,1,
			G_Bandanna_aviator,1,
			G_Bandanna_beast,1,
			G_Bandanna_blk,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_shades,1,
			G_Bandanna_sport,1,
			G_Bandanna_tan,1,
			G_Bandanna_Skull1,1,
			G_Bandanna_Skull2,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_Booniehat_dgtl: H_Booniehat_khk
	{
		allowedFacewear[] =
		{
			"",6.5,
			G_Aviator,1,
			G_Bandanna_aviator,1,
			G_Bandanna_beast,1,
			G_Bandanna_blk,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_shades,1,
			G_Bandanna_sport,1,
			G_Bandanna_tan,1,
			G_Bandanna_Skull1,1,
			G_Bandanna_Skull2,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_Booniehat_khk_hs: H_Booniehat_khk
	{
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_khk_hs0;
		allowedFacewear[] =
		{
			"",6.5,
			G_Aviator,1,
			G_Bandanna_aviator,1,
			G_Bandanna_beast,1,
			G_Bandanna_blk,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_shades,1,
			G_Bandanna_sport,1,
			G_Bandanna_tan,1,
			G_Bandanna_Skull1,1,
			G_Bandanna_Skull2,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_HelmetB_plain_mcamo: H_HelmetB
	{
		scope = public;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_plain_mcamo_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_HelmetB_plain_mcamo0;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\equip1_mcamo_CO.paa"};
	};
	class H_HelmetSpecB: H_HelmetB_plain_mcamo
	{
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecB0;
		class ItemInfo;
	};
	class H_HelmetSpecB_paint1: H_HelmetSpecB
	{
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecB_paint10;
	};
	class H_HelmetSpecB_paint2: H_HelmetSpecB
	{
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecB_paint20;
	};
	class H_HelmetSpecB_blk: H_HelmetSpecB
	{
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetSpecB_blk_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\equip1_black_CO.paa"};
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecB_blk0;
	};
	class H_HelmetSpecB_snakeskin: H_HelmetSpecB
	{
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecB_snakeskin0;
	};
	class H_HelmetSpecB_sand: H_HelmetSpecB
	{
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetSpecB_sand_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecB_sand0;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\equip1_sand_CO.paa"};
	};
	class H_HelmetIA: H_HelmetB
	{
	  	displayName = "Modular Helmet (Digi)";
		class ItemInfo;
	};
	class H_HelmetB_black: H_HelmetB
	{
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_black_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\equip1_black_CO.paa"};
	};
	class H_HelmetB_sand: H_HelmetB
	{
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_sand_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\equip1_sand_CO.paa"};
	};
	class H_Cap_red: HelmetBase
	{
		class ItemInfo;
	};
	class H_Cap_blu: H_Cap_red
	{
		allowedFacewear[] =
		{
			"",7.5,
			G_Aviator,1,
			G_Balaclava_blk,1,
			G_Balaclava_oli,1,
			G_Balaclava_Flecktarn,1,
			G_Balaclava_Tropentarn,1,
			G_Bandanna_aviator,1,
			G_Bandanna_beast,1,
			G_Bandanna_blk,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_shades,1,
			G_Bandanna_sport,1,
			G_Bandanna_tan,1,
			G_Bandanna_Skull1,1,
			G_Bandanna_Skull2,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_Cap_oli: H_Cap_red
	{
		allowedFacewear[] =
		{
			"",5,
			G_Aviator,1,
			G_Balaclava_blk,1,
			G_Balaclava_oli,1,
			G_Balaclava_Flecktarn,1,
			G_Balaclava_Tropentarn,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_tan,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_Cap_headphones: HelmetBase
	{
		hiddenSelections[] = {camo};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {camo};
		};
	};
	class H_Cap_tan: H_Cap_red
	{
		allowedFacewear[] =
		{
			"",7.5,
			G_Aviator,1,
			G_Balaclava_blk,1,
			G_Balaclava_oli,1,
			G_Balaclava_Flecktarn,1,
			G_Balaclava_Tropentarn,1,
			G_Bandanna_aviator,1,
			G_Bandanna_beast,1,
			G_Bandanna_blk,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_shades,1,
			G_Bandanna_sport,1,
			G_Bandanna_tan,1,
			G_Bandanna_Skull1,1,
			G_Bandanna_Skull2,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_Cap_blk: H_Cap_red
	{
		allowedFacewear[] =
		{
			"",7.5,
			G_Aviator,1,
			G_Balaclava_blk,1,
			G_Balaclava_oli,1,
			G_Balaclava_Flecktarn,1,
			G_Balaclava_Tropentarn,1,
			G_Bandanna_aviator,1,
			G_Bandanna_beast,1,
			G_Bandanna_blk,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_shades,1,
			G_Bandanna_sport,1,
			G_Bandanna_tan,1,
			G_Bandanna_Skull1,1,
			G_Bandanna_Skull2,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_Cap_brn_SPECOPS: H_Cap_red
	{
	 	displayName = $STR_A3_A_CfgWeapons_H_Cap_brn_SPECOPS0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Cap_brn_SPECOPS_CA.paa";
	  	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\capb_iran_CO.paa"};
	};
	class H_Cap_tan_specops_US: H_Cap_red
	{
		displayName = $STR_A3_A_CfgWeapons_H_Cap_tan_specops_US0;
	  	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\capb_us_CO.paa"};
	};
	class H_Cap_khaki_specops_UK: H_Cap_red{};
	class H_Cap_grn: H_Cap_red
	{
		allowedFacewear[] =
		{
			"",5,
			G_Aviator,1,
			G_Balaclava_blk,1,
			G_Balaclava_oli,1,
			G_Balaclava_Flecktarn,1,
			G_Balaclava_Tropentarn,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_tan,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_Cap_blk_Raven: H_Cap_red
	{
		allowedFacewear[] =
		{
			"",7.5,
			G_Aviator,1,
			G_Balaclava_blk,1,
			G_Balaclava_oli,1,
			G_Balaclava_Flecktarn,1,
			G_Balaclava_Tropentarn,1,
			G_Bandanna_aviator,1,
			G_Bandanna_beast,1,
			G_Bandanna_blk,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_shades,1,
			G_Bandanna_sport,1,
			G_Bandanna_tan,1,
			G_Bandanna_Skull1,1,
			G_Bandanna_Skull2,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_Cap_blk_ION: H_Cap_red{};
	class H_Cap_oli_hs: H_Cap_oli
	{
		allowedFacewear[] =
		{
			"",5,
			G_Aviator,1,
			G_Balaclava_blk,1,
			G_Balaclava_oli,1,
			G_Balaclava_Flecktarn,1,
			G_Balaclava_Tropentarn,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_tan,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_Cap_usblack: H_Cap_red
	{
	  	displayName = $STR_A3_A_CfgWeapons_H_Cap_usblack0;
	};
	class H_HelmetCrew_B: H_HelmetB
	{
        displayName = "Modular Crew Helmet (Olive)";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Beta\Indep\Data\armor1_oli_CO.paa"};
	};
    class H_HelmetCrew_O: H_HelmetCrew_B
    {
        displayName = "Modular Crew Helmet (Hex)";
    };
	class H_HelmetCrew_I: H_HelmetCrew_B
    {
        displayName = "Crew Helmet (Green)";
    };
	class H_PilotHelmetFighter_B: H_HelmetB
    {
        displayName = "Pilot Helmet (Black)";
    };
	class H_PilotHelmetFighter_O: H_PilotHelmetFighter_B
    {
        displayName = "Pilot Helmet (Olive)";
    };
	class H_PilotHelmetFighter_I: H_PilotHelmetFighter_B
	{
        displayName = "Pilot Helmet (White)";
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_PilotHelmetFighter_I_CA.paa";
	};
	class H_PilotHelmetHeli_B: H_HelmetB
	{
        displayName = "Heli Pilot Helmet (Black)";
		class ItemInfo;
	};
	class H_PilotHelmetHeli_O: H_PilotHelmetHeli_B
	{
        displayName = "Heli Pilot Helmet (Olive)";
		class ItemInfo;
	};
	class H_PilotHelmetHeli_I: H_PilotHelmetHeli_B
	{
		class ItemInfo;
	};
	class H_CrewHelmetHeli_B: H_HelmetB
    {
        displayName = "Heli Crew Helmet (Black)";
    };
	class H_CrewHelmetHeli_O: H_CrewHelmetHeli_B
	{
        displayName = "Heli Crew Helmet (Olive)";
		class ItemInfo;
	};
	class H_CrewHelmetHeli_I;
	class H_HelmetO_ocamo;
	class H_HelmetLeaderO_ocamo;
	class H_MilCap_ocamo;
	class H_MilCap_mcamo: H_MilCap_ocamo
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\cappatrol_multicam_CO.paa"};
	};
	class H_MilCap_oucamo: H_MilCap_ocamo
	{
		scope = public;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_MilCap_oucamo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\cappatrol_oucamo_CO.paa"};
	};
	class H_HelmetB_light_grass: H_HelmetB_light
	{
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_light_grass_CA.paa";
	};
	class H_HelmetB_light_snakeskin: H_HelmetB_light
	{
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_light_snakeskin_CA.paa";
	};
	class H_HelmetB_light_desert: H_HelmetB_light
	{
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_light_desert_CA.paa";
	};
	class H_HelmetB_light_black: H_HelmetB_light
	{
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_light_black_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\equip1_black_CO.paa"};
	};
	class H_HelmetB_light_sand: H_HelmetB_light
	{
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_light_sand_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\equip1_sand_CO.paa"};
	};
	class H_HelmetSpecO_ocamo;
	class H_Bandanna_surfer: HelmetBase
	{
		allowedFacewear[] =
		{
			"",4,
			G_Aviator,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_sport,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_Bandanna_khk: H_Bandanna_surfer
	{
		allowedFacewear[] =
		{
			"",6,
			G_Aviator,1,
			G_Bandanna_aviator,1,
			G_Bandanna_beast,1,
			G_Bandanna_blk,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_shades,1,
			G_Bandanna_sport,1,
			G_Bandanna_tan,1,
			G_Bandanna_Skull1,1,
			G_Bandanna_Skull2,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_Bandanna_khk_hs: H_Bandanna_khk
	{
		displayName = $STR_A3_A_CfgWeapons_H_Bandanna_khk_hs0;
		allowedFacewear[] =
		{
			"",6,
			G_Aviator,1,
			G_Bandanna_aviator,1,
			G_Bandanna_beast,1,
			G_Bandanna_blk,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_shades,1,
			G_Bandanna_sport,1,
			G_Bandanna_tan,1,
			G_Bandanna_Skull1,1,
			G_Bandanna_Skull2,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_Bandanna_cbr: H_Bandanna_surfer
	{
		allowedFacewear[] =
		{
			"",6,
			G_Aviator,1,
			G_Bandanna_aviator,1,
			G_Bandanna_beast,1,
			G_Bandanna_blk,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_shades,1,
			G_Bandanna_sport,1,
			G_Bandanna_tan,1,
			G_Bandanna_Skull1,1,
			G_Bandanna_Skull2,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_Bandanna_sgg: H_Bandanna_surfer
	{
		allowedFacewear[] =
		{
			"",4,
			G_Aviator,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_sport,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_Bandanna_sand: H_Bandanna_surfer
	{
		allowedFacewear[] =
		{
			"",4,
			G_Aviator,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_sport,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_Bandanna_surfer_blk: H_Bandanna_surfer
	{
		allowedFacewear[] =
		{
			"",6,
			G_Aviator,1,
			G_Bandanna_aviator,1,
			G_Bandanna_beast,1,
			G_Bandanna_blk,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_shades,1,
			G_Bandanna_sport,1,
			G_Bandanna_tan,1,
			G_Bandanna_Skull1,1,
			G_Bandanna_Skull2,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_Bandanna_surfer_grn: H_Bandanna_surfer
	{
		allowedFacewear[] =
		{
			"",4,
			G_Aviator,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_sport,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_Bandanna_gry: H_Bandanna_surfer
	{
		allowedFacewear[] =
		{
			"",6,
			G_Aviator,1,
			G_Bandanna_aviator,1,
			G_Bandanna_beast,1,
			G_Bandanna_blk,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_shades,1,
			G_Bandanna_sport,1,
			G_Bandanna_tan,1,
			G_Bandanna_Skull1,1,
			G_Bandanna_Skull2,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_Bandanna_blu: H_Bandanna_surfer
	{
		allowedFacewear[] =
		{
			"",6,
			G_Aviator,1,
			G_Bandanna_aviator,1,
			G_Bandanna_beast,1,
			G_Bandanna_blk,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_shades,1,
			G_Bandanna_sport,1,
			G_Bandanna_tan,1,
			G_Bandanna_Skull1,1,
			G_Bandanna_Skull2,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_Bandanna_camo: H_Bandanna_surfer
	{
		allowedFacewear[] =
		{
			"",6,
			G_Aviator,1,
			G_Bandanna_aviator,1,
			G_Bandanna_beast,1,
			G_Bandanna_blk,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_shades,1,
			G_Bandanna_sport,1,
			G_Bandanna_tan,1,
			G_Bandanna_Skull1,1,
			G_Bandanna_Skull2,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_Bandanna_mcamo: H_Bandanna_surfer
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\h_bandana_mcamo_CO.paa"};
	};
	class H_Shemag_khk;
	class H_Shemag_olive: H_Shemag_khk
	{
		allowedFacewear[] =
		{
			"",2,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_Shemag_olive_hs: H_Shemag_olive
	{
		allowedFacewear[] =
		{
			"",2,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_ShemagOpen_khk: HelmetBase
	{
		allowedFacewear[] =
		{
			"",2,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_ShemagOpen_tan: H_ShemagOpen_khk
	{
		allowedFacewear[] =
		{
			"",2,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_Beret_blk: HelmetBase
	{
		allowedFacewear[] =
		{
			"",7.5,
			G_Aviator,1,
			G_Balaclava_blk,1,
			G_Balaclava_oli,1,
			G_Balaclava_Flecktarn,1,
			G_Balaclava_Tropentarn,1,
			G_Bandanna_aviator,1,
			G_Bandanna_beast,1,
			G_Bandanna_blk,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_shades,1,
			G_Bandanna_sport,1,
			G_Bandanna_tan,1,
			G_Bandanna_Skull1,1,
			G_Bandanna_Skull2,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
		class ItemInfo;
	};
	class H_Beret_blk_POLICE: H_Beret_blk
	{
		scope = public;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Beret_blk_POLICE_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\headgear_beret01_police_CO.paa"};
	};
	class H_Beret_red: H_Beret_blk
	{
		scope = public;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Beret_red_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\headgear_beret01_red_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\headgear_beret01_red.rvmat"};
		class ItemInfo: ItemInfo
		{
			mass = 6;
			allowedSlots[] =
			{
				UNIFORM_SLOT,
				BACKPACK_SLOT,
				VEST_SLOT,
				HEADGEAR_SLOT
			};
			uniformModel = "\A3_Aegis\Characters_F_Aegis\Headgear\headgear_beret01.p3d";
			modelSides[] = {TCivilian};
		};
	};
	class H_Beret_grn: H_Beret_blk
	{
		scope = public;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Beret_grn_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\headgear_beret01_grn_CO.paa"};
	};
	class H_Beret_02: H_Beret_blk{};
	class H_Beret_grn_SF: H_Beret_02
	{
		scope = public;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Beret_grn_SF_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Beret_SF_01_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Beret_SF_01.rvmat"};
	};
	class H_Beret_brn_SF: H_Beret_02
	{
		scope = public;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Beret_brn_SF_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Beret_SAS_01_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Beret_SAS_01.rvmat"};
	};
	class H_Beret_ocamo: H_Beret_02
	{
		scope = public;
		//picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Beret_ocamo_CA.paa";
		model = "\A3\Characters_F\OPFOR\H_Beret_CSAT_01_F.p3d";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Beret_CSAT_02_CO.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 6;
			allowedSlots[] =
			{
				UNIFORM_SLOT,
				BACKPACK_SLOT,
				VEST_SLOT,
				HEADGEAR_SLOT
			};
			uniformModel = "\A3\Characters_F\OPFOR\H_Beret_CSAT_01_F.p3d";
			modelSides[] = {TCivilian};
		};
	};
	class H_Watchcap_blk: HelmetBase
	{
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Watchcap_blk_CA.paa";
		model = "\A3\Characters_F\Common\woolhat.p3d";
		allowedFacewear[] =
		{
			"",6,
			G_Aviator,1,
			G_Bandanna_aviator,1,
			G_Bandanna_beast,1,
			G_Bandanna_blk,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_shades,1,
			G_Bandanna_sport,1,
			G_Bandanna_tan,1,
			G_Bandanna_Skull1,1,
			G_Bandanna_Skull2,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\Common\woolhat.p3d";
		};
	};
	class H_Watchcap_cbr: H_Watchcap_blk
	{
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Watchcap_cbr_CA.paa";
		allowedFacewear[] =
		{
			"",6,
			G_Aviator,1,
			G_Bandanna_aviator,1,
			G_Bandanna_beast,1,
			G_Bandanna_blk,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_shades,1,
			G_Bandanna_sport,1,
			G_Bandanna_tan,1,
			G_Bandanna_Skull1,1,
			G_Bandanna_Skull2,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_Watchcap_khk: H_Watchcap_blk
	{
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Watchcap_khk_CA.paa";
		allowedFacewear[] =
		{
			"",6,
			G_Aviator,1,
			G_Bandanna_aviator,1,
			G_Bandanna_beast,1,
			G_Bandanna_blk,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_shades,1,
			G_Bandanna_sport,1,
			G_Bandanna_tan,1,
			G_Bandanna_Skull1,1,
			G_Bandanna_Skull2,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_Watchcap_camo: H_Watchcap_blk
	{
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Watchcap_camo_CA.paa";
		allowedFacewear[] =
		{
			"",6,
			G_Aviator,1,
			G_Bandanna_aviator,1,
			G_Bandanna_beast,1,
			G_Bandanna_blk,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_shades,1,
			G_Bandanna_sport,1,
			G_Bandanna_tan,1,
			G_Bandanna_Skull1,1,
			G_Bandanna_Skull2,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_Watchcap_sgg: H_Watchcap_blk
	{
		scope = public;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Watchcap_sgg_CA.paa";
	};
	class H_FakeHeadgear
	{
		allowedFacewear[] =
		{
			"",
			G_Aviator,
			G_Balaclava_blk,
			G_Balaclava_oli,
			G_Balaclava_Flecktarn,
			G_Balaclava_Tropentarn,
			G_Bandanna_aviator,
			G_Bandanna_beast,
			G_Bandanna_blk,
			G_Bandanna_khk,
			G_Bandanna_oli,
			G_Bandanna_shades,
			G_Bandanna_sport,
			G_Bandanna_tan,
			G_Bandanna_Skull1,
			G_Bandanna_Skull2,
			G_Shades_Black,
			G_Shades_Blue,
			G_Shades_Red,
			G_Shades_Green,
			G_Shades_Yellowred
		};
	};
	class H_HelmetB_TI_tna_F: H_HelmetB
	{
		displayName = $STR_A3_A_CfgWeapons_H_HelmetB_TI_tna_F0;
		descriptionShort = $STR_A3_SP_AL_V;
		class ItemInfo: HeadgearItem
		{
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Head
				{
					armor = 12;
				};
			};
		};
	};
	class H_HelmetB_TI_arid_F;
	class H_HelmetO_ViperSP_hex_F: H_HelmetB
	{
		class ItemInfo: HeadgearItem
		{
			subItems[] = {Integrated_NVG_TI_0_F};
		};
	};
	class H_HelmetB_tna_F: H_HelmetB
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetB_tna_F_CO.paa"};
	};
	class H_HelmetB_Enh_tna_F: H_HelmetSpecB
	{
		displayName = $STR_A3_A_CfgWeapons_H_HelmetB_Enh_tna_F0;
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetB_tna_F_CO.paa"};
	};
	class H_HelmetB_Light_tna_F: H_HelmetB_light
	{
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_Light_tna_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetB_tna_F_CO.paa"};
	};
	class H_HelmetCrew_O_ghex_F: H_HelmetCrew_O
    {
        displayName = "Modular Crew Helmet (Green Hex)";
    };
	class H_MilCap_tna_F: H_MilCap_ocamo
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_MilCap_tna_F_CO.paa"};
	};
	class H_MilCap_ghex_F: H_MilCap_ocamo
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_MilCap_ghex_F_CO.paa"};
	};
	class H_Booniehat_tna_F: H_Booniehat_khk
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Booniehat_tna_F_CO.paa"};
	};
	class H_Beret_gen_F: H_Beret_02
	{
	  	hiddenSelectionsMaterials[] = {"\A3\Characters_F_Exp\Headgear\Data\H_Beret_gen_F.rvmat"};
	};
	class H_Cap_oli_Syndikat_F: H_Cap_oli
	{
		allowedFacewear[] =
		{
			"",4,
			G_Aviator,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_tan,1,
			G_Bandanna_Skull1,1,
			G_Bandanna_Skull2,1,
			G_Bandanna_Syndikat1,1,
			G_Bandanna_Syndikat2,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_Cap_tan_Syndikat_F: H_Cap_tan
	{
		allowedFacewear[] =
		{
			"",6.5,
			G_Aviator,1,
			G_Bandanna_aviator,1,
			G_Bandanna_beast,1,
			G_Bandanna_blk,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_shades,1,
			G_Bandanna_sport,1,
			G_Bandanna_tan,1,
			G_Bandanna_Skull1,1,
			G_Bandanna_Skull2,1,
			G_Bandanna_Syndikat1,1,
			G_Bandanna_Syndikat2,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_Cap_blk_Syndikat_F: H_Cap_blk
	{
		allowedFacewear[] =
		{
			"",6.5,
			G_Aviator,1,
			G_Bandanna_aviator,1,
			G_Bandanna_beast,1,
			G_Bandanna_blk,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_shades,1,
			G_Bandanna_sport,1,
			G_Bandanna_tan,1,
			G_Bandanna_Skull1,1,
			G_Bandanna_Skull2,1,
			G_Bandanna_Syndikat1,1,
			G_Bandanna_Syndikat2,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_Cap_grn_Syndikat_F: H_Cap_grn
	{
		allowedFacewear[] =
		{
			"",4,
			G_Aviator,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_tan,1,
			G_Bandanna_Skull1,1,
			G_Bandanna_Skull2,1,
			G_Bandanna_Syndikat1,1,
			G_Bandanna_Syndikat2,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_FakeHeadgear_Syndikat_F
	{
		allowedFacewear[] =
		{
			G_Aviator,1,
			G_Bandanna_aviator,1,
			G_Bandanna_beast,1,
			G_Bandanna_blk,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_shades,1,
			G_Bandanna_sport,1,
			G_Bandanna_tan,1,
			G_Bandanna_Skull1,1,
			G_Bandanna_Skull2,1,
			G_Bandanna_Syndikat1,1,
			G_Bandanna_Syndikat2,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_I_Helmet_canvas_Green: H_HelmetIA
	{
	  	author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_I_Helmet_canvas_Green0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_I_Helmet_canvas_Green_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\headgear_helmet_canvas_Green_CO.paa"};
	};
	class H_Cap_Lyfe: H_Cap_red
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Cap_Lyfe0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Cap_Lyfe_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\capb_Lyfe_CO.paa"};
	};
	class H_Cap_MaldenTours: H_Cap_red
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Cap_MaldenTours0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Cap_MaldenTours_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\capb_MaldenTours_CO.paa"};
	};
	class H_EarProtectors_base_F;
	class H_HeadSet_base_F;
	class H_PASGT_basic_base_F;
	class H_PASGT_basic_olive_F: H_PASGT_basic_base_F
	{
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_PASGT_basic_olive_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_PASGT_olive_CO.paa"};
	};
	class H_PASGT_neckprot_base_F;
	class H_Tank_base_F;
    class H_Tank_black_F: H_Tank_base_F
    {
		displayName = "Soft Crew Helmet (Black)";
    };
	class lxWS_H_Tank_tan_F : HelmetBase
	{
		displayName = "Soft Crew Helmet (Tan)";
	};
	class H_HelmetHBK_base_F;
	class H_HelmetHBK_headset_base_F;
	class H_HelmetHBK_ear_base_F;
	class H_HelmetHBK_chops_base_F;
	class H_HelmetHBK_F: H_HelmetHBK_base_F
	{
		displayName = $STR_A3_A_CfgWeapons_H_HelmetHBK_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Enoch\Headgear\Data\H_HelmetHBK_01_CO.paa"};
	};
	class H_HelmetHBK_headset_F: H_HelmetHBK_headset_base_F
	{
		displayName = $STR_A3_A_CfgWeapons_H_HelmetHBK_headset_F0;
	};
	class H_HelmetHBK_ear_F: H_HelmetHBK_ear_base_F
	{
		displayName = $STR_A3_A_CfgWeapons_H_HelmetHBK_ear_F0;
	};
	class H_HelmetHBK_chops_F: H_HelmetHBK_chops_base_F
	{
		displayName = $STR_A3_A_CfgWeapons_H_HelmetHBK_chops_F0;
	};
	class H_HelmetAggressor_base_F;
	class H_HelmetAggressor_cover_base_F;
	class H_Booniehat_mgrn: H_Booniehat_khk{};
	class H_Booniehat_taiga: H_Booniehat_khk{};
	class H_Booniehat_eaf: H_Booniehat_khk{};
	class H_Booniehat_wdl: H_Booniehat_khk{};
	class H_HelmetB_light_wdl: H_HelmetB_light
	{
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_light_wdl_CA.paa";
	};
	class H_HelmetSpecB_wdl: H_HelmetSpecB
	{
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecB_wdl0;
	};
	class H_PilotHelmetFighter_I_E: H_PilotHelmetFighter_O
	{
        displayName = "Pilot Helmet (Green)";
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_PilotHelmetFighter_I_E_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\pilot_helmet_eaf_CO.paa"};
	};
	class H_PilotHelmetHeli_I_E: H_PilotHelmetHeli_O
	{
        displayName = "Heli Pilot Helmet (Green)";
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_PilotHelmetHeli_I_E_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\helmet_heli_eaf_CO.paa"};
	};
	class H_CrewHelmetHeli_I_E: H_CrewHelmetHeli_O
	{
        displayName = "Heli Crew Helmet (Green)";
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_CrewHelmetHeli_I_E_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\helmet_heli_eaf_CO.paa"};
	};
	class H_Beret_CSAT_01_F;
	class lxWS_H_Beret_Colonel : H_Beret_CSAT_01_F 
	{
		displayName = "$STR_A3_A_CfgWeapons_H_Beret_UNO_01_F0";
		picture = "\lxws\characters_f_lxws\headgear\a3\data\UI\icon_H_Beret_Colonel_ca";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Beret_UNO_01_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Beret_UNO_01.rvmat"};
	};
	class H_HelmetB_camo_mcamo: H_HelmetB_camo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetB_camo_mcamo0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_camo_mcamo_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\equip1_mcamo_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\ghillie2_CO.paa"
		};
	};
	class H_Booniehat_blk: H_Booniehat_khk
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_blk0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Booniehat_blk_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\booniehat_blk_CO.paa"};
	};
	class H_Booniehat_ocamo: H_Booniehat_khk
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_H_Booniehat_ocamo0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Booniehat_ocamo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\booniehat_ocamo_CO.paa"};
	};
	class H_Booniehat_oicamo: H_Booniehat_khk
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_oicamo0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Booniehat_oicamo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\booniehat_oicamo_CO.paa"};
	};
	class H_Booniehat_oli_hs: H_Booniehat_oli
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_oli_hs0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Booniehat_oli_hs_CA.paa";
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		allowedFacewear[] =
		{
			"",6.5,
			G_Aviator,1,
			G_Bandanna_aviator,1,
			G_Bandanna_beast,1,
			G_Bandanna_blk,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_shades,1,
			G_Bandanna_sport,1,
			G_Bandanna_tan,1,
			G_Bandanna_Skull1,1,
			G_Bandanna_Skull2,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	class H_Booniehat_mcamo_hs: H_Booniehat_mcamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_mcamo_hs0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Booniehat_mcamo_hs_CA.paa";
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	class H_Booniehat_dgtl_hs: H_Booniehat_dgtl
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_dgtl_hs0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Booniehat_dgtl_hs_CA.paa";
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		allowedFacewear[] =
		{
			"",6.5,
			G_Aviator,1,
			G_Bandanna_aviator,1,
			G_Bandanna_beast,1,
			G_Bandanna_blk,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_shades,1,
			G_Bandanna_sport,1,
			G_Bandanna_tan,1,
			G_Bandanna_Skull1,1,
			G_Bandanna_Skull2,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	class H_Booniehat_ocamo_hs: H_Booniehat_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_ocamo_hs0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Booniehat_ocamo_hs_CA.paa";
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	class H_Booniehat_oicamo_hs: H_Booniehat_oicamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_oicamo_hs0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Booniehat_oicamo_hs_CA.paa";
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	class H_HelmetSpecB_mcamo: H_HelmetSpecB
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecB_mcamo0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetSpecB_mcamo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\equip1_mcamo_CO.paa"};
	};
	class H_Cap_brn_SERO: H_Cap_red
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_H_Cap_brn_SERO0;
		picture = "\A3\Characters_F\Data\UI\icon_H_Cap_brn_SERO_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\capb_SERO_CO.paa"};
	};
	class H_Cap_oicamo: H_Cap_red
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Cap_oicamo0;
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Cap_brn_SPECOPS_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\capb_iran_CO.paa"};
	};
	class H_Cap_headphones_gry: H_Cap_headphones
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Cap_headphones_gry0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Cap_headphones_gry_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\capb_headphones_gry_CO.paa"};
	};
	class H_Cap_headphones_tan: H_Cap_headphones
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Cap_headphones_tan0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Cap_headphones_tan_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\capb_headphones_tan_CO.paa"};
	};
	class H_Cap_headphones_blk_ION: H_Cap_headphones
	{
		author = $STR_A3_A_Lexx;
		displayName = $STR_A3_A_CfgWeapons_H_Cap_headphones_blk_ION0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Cap_headphones_blk_ION_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\capb_headphones_ion_CO.paa"};
	};
	class H_Cap_headphones_blk: H_Cap_headphones
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Cap_headphones_blk0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Cap_headphones_blk_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\capb_headphones_blk_CO.paa"};
	};
	class H_Cap_brn_SPECOPS_hs: H_Cap_brn_SPECOPS
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Cap_brn_SPECOPS_hs_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Cap_brn_SPECOPS_hs0;
		model = "\A3\Characters_F_EPB\Common\capb_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\capb_hs.p3d";
		};
	};
	class H_Cap_tan_specops_US_hs: H_Cap_tan_specops_US
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Cap_tan_specops_US_hs_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Cap_tan_specops_US_hs0;
		model = "\A3\Characters_F_EPB\Common\capb_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\capb_hs.p3d";
		};
	};
	class H_Cap_khaki_specops_UK_hs: H_Cap_khaki_specops_UK
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Cap_khaki_specops_UK_hs_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Cap_khaki_specops_UK_hs0;
		model = "\A3\Characters_F_EPB\Common\capb_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\capb_hs.p3d";
		};
	};
	class H_Cap_blk_Raven_hs: H_Cap_blk_Raven
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Cap_blk_Raven_hs_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Cap_blk_Raven_hs0;
		model = "\A3\Characters_F_EPB\Common\capb_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\capb_hs.p3d";
		};
	};
	class H_Cap_blk_ION_hs: H_Cap_blk_ION
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Cap_blk_ION_hs_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Cap_blk_ION_hs0;
		model = "\A3\Characters_F_EPB\Common\capb_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\capb_hs.p3d";
		};
	};
	class H_Cap_usblack_hs: H_Cap_usblack
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Cap_usblack_hs_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Cap_usblack_hs0;
		model = "\A3\Characters_F_EPB\Common\capb_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\capb_hs.p3d";
		};
	};
	class H_Cap_oicamo_hs: H_Cap_oicamo
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Cap_oicamo_hs_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Cap_oicamo_hs0;
		model = "\A3\Characters_F_EPB\Common\capb_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\capb_hs.p3d";
		};
	};
	class H_PilotHelmetHeli_B_visor_up: H_PilotHelmetHeli_B
	{
	  	author = $STR_A3_A_AveryTheKitty;
		displayName = "Heli Pilot Helmet (Black, Visor-up)";
		model = "\A3\Characters_F\Common\headgear_helmet_heli_visor_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\Common\headgear_helmet_heli_visor_up.p3d";
		};
	};
	class H_PilotHelmetHeli_O_visor_up: H_PilotHelmetHeli_O
	{
	  	author = $STR_A3_A_AveryTheKitty;
		displayName = "Heli Pilot Helmet (Olive, Visor-up)";
		model = "\A3\Characters_F\Common\headgear_helmet_heli_visor_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\Common\headgear_helmet_heli_visor_up.p3d";
		};
	};
	class H_PilotHelmetHeli_I_visor_up: H_PilotHelmetHeli_I
	{
	  	author = $STR_A3_A_AveryTheKitty;
		displayName = "Heli Pilot Helmet [AAF] (Visor-up)";
		model = "\A3\Characters_F\Common\headgear_helmet_heli_visor_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\Common\headgear_helmet_heli_visor_up.p3d";
		};
	};
	class H_PilotHelmetHeli_I_E_visor_up: H_PilotHelmetHeli_I_E
	{
	  	author = $STR_A3_A_AveryTheKitty;
		displayName = "Heli Pilot Helmet (Green, Visor-up)";
		model = "\A3\Characters_F\Common\headgear_helmet_heli_visor_up.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\Common\headgear_helmet_heli_visor_up.p3d";
		};
	};
	class H_HelmetO_blk: H_HelmetO_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetO_blk0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetO_blk_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\tech_rus_CO.paa"};
	};
	class H_HelmetLeaderO_blk: H_HelmetLeaderO_ocamo
	{
	  	author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetLeaderO_blk0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetLeaderO_blk_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\tech_rus_CO.paa"};
	};
	class H_HelmetO_oicamo: H_HelmetO_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetO_oicamo0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetO_oicamo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\tech_oicamo_CO.paa"};
	};
	class H_HelmetLeaderO_oicamo: H_HelmetLeaderO_ocamo
	{
	  	author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetLeaderO_oicamo0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetLeaderO_oicamo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\tech_oicamo_CO.paa"};
	};
	class H_MilCap_tan: H_MilCap_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_MilCap_tan0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_MilCap_tan_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\cappatrol_tan_CO.paa"};
	};
	class H_MilCap_blk: H_MilCap_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_MilCap_blk0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_MilCap_blk_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPB\Common\Data\cappatrol_blk_CO.paa"};
	};
	class H_MilCap_oicamo: H_MilCap_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_MilCap_oicamo0;
		picture = "\A3\Characters_F\Data\UI\icon_H_Cap_patrol_ocamo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\cappatrol_oicamo_CO.paa"};
	};
	class H_HelmetB_light_mcamo: H_HelmetB_light
	{
	  	author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetB_light_mcamo0;
	  	picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_light_mcamo_CA.paa";
	  	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\equip1_mcamo_CO.paa"};
	};
	class H_HelmetSpecB_light: H_HelmetB_light
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetSpecB_light_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecB_light0;
		model = "\A3\Characters_F\BLUFOR\headgear_B_Helmet_light.p3d";
		descriptionShort = $STR_A3_SP_AL_I;
		class ItemInfo: ItemInfo
		{
			mass = 20;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_B_Helmet_light.p3d";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = HitHead;
					armor = 4;
					passThrough = 0.5;
				};
			};
		};
	};
	class H_HelmetSpecB_light_grass: H_HelmetSpecB_light
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecB_light_grass0;
		picture = "\A3\Characters_F\Data\UI\icon_H_HelmetB_light_grass_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPA\BLUFOR\Data\equip1_grass_CO.paa"};
	};
	class H_HelmetSpecB_light_desert: H_HelmetSpecB_light
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecB_light_desert0;
		picture = "\A3\Characters_F\Data\UI\icon_H_HelmetB_light_desert_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPA\BLUFOR\Data\equip1_desert_CO.paa"};
	};
	class H_HelmetSpecB_light_black: H_HelmetSpecB_light
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecB_light_black0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetSpecB_light_black_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\equip1_black_CO.paa"};
	};
	class H_HelmetSpecB_light_snakeskin: H_HelmetSpecB_light
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecB_light_snakeskin0;
		picture = "\A3\Characters_F\Data\UI\icon_H_HelmetB_light_snakeskin_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPA\BLUFOR\Data\equip1_snake_CO.paa"};
	};
	class H_HelmetSpecB_light_sand: H_HelmetSpecB_light
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecB_light_sand0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetSpecB_light_sand_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\equip1_sand_CO.paa"};
	};
	class H_HelmetSpecB_light_mcamo: H_HelmetSpecB_light
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecB_light_mcamo0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetSpecB_light_mcamo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\equip1_mcamo_CO.paa"};
	};
	class H_HelmetSpecO_oucamo: H_HelmetSpecO_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecO_oucamo0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetSpecO_oucamo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\OPFOR\Data\tech_oucamo_CO.paa"};
	};
	class H_HelmetSpecO_oicamo: H_HelmetSpecO_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecO_oicamo0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetSpecO_oicamo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\tech_oicamo_CO.paa"};
	};
	class H_Bandanna_mcamo_hs: H_Bandanna_mcamo
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Bandanna_mcamo_hs_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Bandanna_mcamo_hs0;
		model = "\A3\Characters_F_EPB\Civil\headgear_C_Bandana1_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Civil\headgear_C_Bandana1_hs.p3d";
		};
	};
	class H_Bandanna_camo_hs: H_Bandanna_camo
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Bandanna_camo_hs_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Bandanna_camo_hs0;
		model = "\A3\Characters_F_EPB\Civil\headgear_C_Bandana1_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Civil\headgear_C_Bandana1_hs.p3d";
		};
	};
	class H_ShemagOpen_khk_hs: H_ShemagOpen_khk
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_ShemagOpen_khk_hs_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_ShemagOpen_khk_hs0;
		model = "\A3\Characters_F_EPB\Guerrilla\headgear_shemagmask_hs.p3d";
		allowedFacewear[] =
		{
			"",2,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Guerrilla\headgear_shemagmask_hs.p3d";
		};
	};
	class H_ShemagOpen_tan_hs: H_ShemagOpen_tan
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_ShemagOpen_tan_hs_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_ShemagOpen_tan_hs0;
		model = "\A3\Characters_F_EPB\Guerrilla\headgear_shemagmask_hs.p3d";
		allowedFacewear[] =
		{
			"",2,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Guerrilla\headgear_shemagmask_hs.p3d";
		};
	};
	class H_Beret_brn: H_Beret_blk
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Beret_brn0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Beret_brn_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\headgear_beret01_brn_CO.paa"};
	};
	class H_Beret_gry: H_Beret_blk
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Beret_gry0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Beret_gry_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\headgear_beret01_gry_CO.paa"};
	};
	class H_Beret_AAF_01_F: H_Beret_CSAT_01_F
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Beret_AAF_01_F0;
		//picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Beret_AAF_01_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Beret_AAF_01_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Beret_AAF_01.rvmat"};
	};
	class H_Beret_UNO_01_F: H_Beret_CSAT_01_F
	{
		author = $STR_A3_A_Abb0tt;
		displayName = $STR_A3_A_CfgWeapons_H_Beret_UNO_01_F0;
		scope = protected;
		//picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Beret_UNO_01_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Beret_UNO_01_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Beret_UNO_01.rvmat"};
	};
	class H_Watchcap_red: H_Watchcap_blk
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Watchcap_red0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Watchcap_red_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\woolhat_red_CO.paa"};
	};
	class H_Watchcap_blk_hs: H_Watchcap_blk
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3\Characters_F\Data\UI\icon_H_Cap_beanie_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Watchcap_blk_hs0;
		model = "\A3\Characters_F\Civil\headgear_beaniehat01.p3d";
		allowedFacewear[] =
		{
			"",6,
			G_Aviator,1,
			G_Bandanna_aviator,1,
			G_Bandanna_beast,1,
			G_Bandanna_blk,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_shades,1,
			G_Bandanna_sport,1,
			G_Bandanna_tan,1,
			G_Bandanna_Skull1,1,
			G_Bandanna_Skull2,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\Civil\headgear_beaniehat01.p3d";
		};
	};
	class H_Watchcap_cbr_hs: H_Watchcap_cbr
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Watchcap_cbr_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Watchcap_cbr_hs0;
		model = "\A3\Characters_F\Civil\headgear_beaniehat01.p3d";
		allowedFacewear[] =
		{
			"",6,
			G_Aviator,1,
			G_Bandanna_aviator,1,
			G_Bandanna_beast,1,
			G_Bandanna_blk,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_shades,1,
			G_Bandanna_sport,1,
			G_Bandanna_tan,1,
			G_Bandanna_Skull1,1,
			G_Bandanna_Skull2,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\Civil\headgear_beaniehat01.p3d";
		};
	};
	class H_Watchcap_khk_hs: H_Watchcap_khk
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Watchcap_khk_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Watchcap_khk_hs0;
		model = "\A3\Characters_F\Civil\headgear_beaniehat01.p3d";
		allowedFacewear[] =
		{
			"",6,
			G_Aviator,1,
			G_Bandanna_aviator,1,
			G_Bandanna_beast,1,
			G_Bandanna_blk,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_shades,1,
			G_Bandanna_sport,1,
			G_Bandanna_tan,1,
			G_Bandanna_Skull1,1,
			G_Bandanna_Skull2,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\Civil\headgear_beaniehat01.p3d";
		};
	};
	class H_Watchcap_camo_hs: H_Watchcap_camo
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Watchcap_camo_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Watchcap_camo_hs0;
		model = "\A3\Characters_F\Civil\headgear_beaniehat01.p3d";
		allowedFacewear[] =
		{
			"",6,
			G_Aviator,1,
			G_Bandanna_aviator,1,
			G_Bandanna_beast,1,
			G_Bandanna_blk,1,
			G_Bandanna_khk,1,
			G_Bandanna_oli,1,
			G_Bandanna_shades,1,
			G_Bandanna_sport,1,
			G_Bandanna_tan,1,
			G_Bandanna_Skull1,1,
			G_Bandanna_Skull2,1,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\Civil\headgear_beaniehat01.p3d";
		};
	};
	class H_Headset_light: HelmetBase
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Headset_light_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Headset_light0;
		model = "\A3\Characters_F\Common\headset_light.p3d";
		hiddenSelections[] = {camo};
		descriptionShort = $STR_A3_SP_noarmor;
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\headset_3_CO.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\Common\headset_light.p3d";
			modelSides[] = {TCivilian};
			hiddenSelections[] = {camo};
			mass = 6;
		};
	};
	class H_HelmetO_ViperSP_oicamo_F: H_HelmetO_ViperSP_hex_F
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetO_ViperSP_oicamo_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetO_ViperSP_oicamo_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\headgear_ViperSP_oicamo_CO.paa"};
	};
	class H_HelmetB_Camo_tna_F: H_HelmetB_camo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetB_Camo_tna_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_Camo_tna_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetB_tna_F_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetB_Camo_tna_F_02_CO.paa"
		};
	};
	class H_HelmetB_Enh_Light_tna_F: H_HelmetSpecB_light
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetB_Enh_Light_tna_F0;
		picture = "\A3\Characters_F_Exp\Headgear\Data\UI\icon_H_HelmetB_Light_tna_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetB_tna_F_CO.paa"};
	};
	class H_HelmetCrew_B_oli_F: H_HelmetCrew_B
	{
	  	author = $STR_A3_A_AveryTheKitty;
        displayName = "Modular Crew Helmet (Green)";
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetCrew_B_oli_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\armor1_CO.paa"};
	};
	class H_Booniehat_tna_hs_F: H_Booniehat_tna_F
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Booniehat_tna_hs_F_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_tna_hs_F0;
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	class H_Booniehat_ghex_F: H_Booniehat_khk
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_ghex_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Booniehat_ghex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Booniehat_ghex_F_CO.paa"};
	};
	class H_Booniehat_ghex_hs_F: H_Booniehat_ghex_F
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Booniehat_ghex_hs_F_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_ghex_hs_F0;
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	class H_Cap_tna_F: H_Cap_red
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Cap_tna_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Cap_tna_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Cap_tna_F_CO.paa"};
	};
	class H_Cap_tna_hs_F: H_Cap_tna_F
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Cap_tna_hs_F_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Cap_tna_hs_F0;
		model = "\A3\Characters_F_EPB\Common\capb_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\capb_hs.p3d";
		};
	};
	class H_Cap_ghex_F: H_Cap_red
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Cap_ghex_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Cap_ghex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Cap_ghex_F_CO.paa"};
	};
	class H_Cap_ghex_hs_F: H_Cap_ghex_F
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Cap_ghex_hs_F_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Cap_ghex_hs_F0;
		model = "\A3\Characters_F_EPB\Common\capb_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\capb_hs.p3d";
		};
	};
	class H_Bandanna_tna_F: H_Bandanna_surfer
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Bandanna_tna_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Bandanna_tna_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Bandanna_tna_F_CO.paa"};
	};
	class H_Bandanna_tna_hs_F: H_Bandanna_tna_F
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Bandanna_tna_hs_F_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Bandanna_tna_hs_F0;
		model = "\A3\Characters_F_EPB\Civil\headgear_C_Bandana1_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Civil\headgear_C_Bandana1_hs.p3d";
		};
	};
	class H_EarProtectors_sand_F: H_EarProtectors_base_F
	{
		author = $STR_A3_A_POLPOX;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_EarProtectors_sand_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_EarProtectors_sand_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Construction_Sand_CO.paa"};
	};
	class H_EarProtectors_olive_F: H_EarProtectors_base_F
	{
		author = $STR_A3_A_POLPOX;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_EarProtectors_olive_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_EarProtectors_olive_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Construction_Olive_CO.paa"};
	};
	class H_HeadSet_sand_F: H_HeadSet_base_F
	{
		author = $STR_A3_A_POLPOX;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HeadSet_sand_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HeadSet_sand_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Construction_Sand_CO.paa"};
	};
	class H_HeadSet_olive_F: H_HeadSet_base_F
	{
		author = $STR_A3_A_POLPOX;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HeadSet_olive_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HeadSet_olive_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Construction_Olive_CO.paa"};
	};
	class lxWS_H_PASGT_goggles_UN_F: HelmetBase
	{
		displayName = $STR_A3_A_CfgWeapons_H_PASGT_goggles_UNO_F0;
		//picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_PASGT_goggles_UN_F.paa";
		hiddenSelectionsTextures[]= {
      	"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_PASGT_UNO_CO.paa",
      	"\lxws\characters_f_lxws\headgear\pmc\data\goggles_tactical_lxws_ca.paa"};
	};
	class lxWS_H_PASGT_basic_UN_F: HelmetBase
	{
		displayName = $STR_A3_A_CfgWeapons_H_PASGT_basic_UNO_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_PASGT_basic_UNO_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_PASGT_UNO_CO.paa"};
	};
	class lxWS_H_PASGT_goggles_olive_F : lxWS_H_PASGT_goggles_UN_F
	{
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_PASGT_goggles_green_F.paa";
		displayName=$STR_LXWS_HELMET_GOGGLES_olive;
		scope = public;
		hiddenSelectionsTextures[]= {
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_PASGT_olive_CO.paa",
			"\lxws\characters_f_lxws\headgear\pmc\data\goggles_tactical_lxws_ca.paa"};
	};
	class lxWS_H_PASGT_goggles_green_F : lxWS_H_PASGT_goggles_UN_F
	{
		picture = "\lxws\characters_f_lxws\headgear\a3\data\UI\icon_H_PASGT_goggles_olive_F_ca";
		displayName = $STR_A3_A_CfgWeapons_lxWS_H_PASGT_goggles_green_F0;
		scope = public;
		hiddenSelectionsTextures[] = {
			"\A3\Characters_F_Orange\Headgear\Data\H_PASGT_olive_CO.paa",
			"\lxws\characters_f_lxws\headgear\pmc\data\goggles_tactical_lxws_ca.paa"};
	};
	class H_PASGT_goggles_sand_F : lxWS_H_PASGT_goggles_UN_F
	{
		//picture = "\A3_Aegis\characters_f_aegis\headgear\data\UI\icon_H_PASGT_goggles_sand_F.paa";
		displayName = $STR_A3_A_CfgWeapons_H_PASGT_goggles_sand_F0;
		scope = public;
		hiddenSelectionsTextures[] = {
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_PASGT_sand_CO.paa",
			"\lxws\characters_f_lxws\headgear\pmc\data\goggles_tactical_lxws_ca.paa"};
	};
	class H_PASGT_basic_green_F: H_PASGT_basic_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_PASGT_basic_green_F0;
		picture = "\A3\Characters_F_Orange\Headgear\Data\UI\icon_H_PASGT_basic_olive_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Orange\Headgear\Data\H_PASGT_olive_CO.paa"};
	};
	class H_PASGT_basic_sand_F: H_PASGT_basic_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_PASGT_basic_sand_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_PASGT_basic_sand_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_PASGT_sand_CO.paa"};
	};
	class H_PASGT_basic_UNO_F: H_PASGT_basic_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = protected;
		displayName = $STR_A3_A_CfgWeapons_H_PASGT_basic_UNO_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_PASGT_basic_UNO_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_PASGT_UNO_CO.paa"};
	};
	class H_PASGT_neckprot_black_F: H_PASGT_neckprot_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_PASGT_neckprot_black_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_PASGT_neckprot_black_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Orange\Headgear\Data\H_PASGT_black_CO.paa"};
	};
	class H_HelmetHBK_olive_F: H_HelmetHBK_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_C_CfgWeapons_H_HelmetHBK_F0;
		picture = "\A3\Characters_F_Enoch\Headgear\Data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Enoch\Headgear\Data\H_HelmetHBK_01_olive_CO.paa"};
	};
	class H_HelmetHBK_olive_headset_F: H_HelmetHBK_headset_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetHBK_olive_headset_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetHBK_olive_headset_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Enoch\Headgear\Data\H_HelmetHBK_01_olive_CO.paa"};
	};
	class H_HelmetHBK_olive_ear_F: H_HelmetHBK_ear_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetHBK_olive_ear_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetHBK_olive_ear_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Enoch\Headgear\Data\H_HelmetHBK_01_olive_CO.paa"};
	};
	class H_HelmetHBK_olive_chops_F: H_HelmetHBK_chops_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetHBK_olive_chops_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetHBK_olive_chops_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Enoch\Headgear\Data\H_HelmetHBK_01_olive_CO.paa"};
	};
	class H_HelmetSpecter_base_F: HelmetBase
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = private;
		model = "\A3_Aegis\Characters_F_Aegis\Headgear\H_HelmetSpecter_F.p3d";
		hiddenSelections[] = {camo};
		descriptionShort = $STR_A3_SP_AL_II;
		class ItemInfo: ItemInfo
		{
			mass = 30;
			hiddenSelections[] = {camo};
			uniformModel = "\A3_Aegis\Characters_F_Aegis\Headgear\H_HelmetSpecter_F.p3d";
			modelSides[] =
			{
				TEast,
				TCivilian
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = HitHead;
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class H_HelmetSpecter_cover_base_F: H_HelmetSpecter_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		model = "\A3_Aegis\Characters_F_Aegis\Headgear\H_HelmetSpecter_cover_F.p3d";
		hiddenSelections[] =
		{
			camo1,
			camo2
		};
		class ItemInfo: ItemInfo
		{
			mass = 40;
			hiddenSelections[] =
			{
				camo1,
				camo2
			};
			uniformModel = "\A3_Aegis\Characters_F_Aegis\Headgear\H_HelmetSpecter_cover_F.p3d";
			modelSides[] =
			{
				TGuerrila,
				TCivilian
			};
	  	};
	};
	class H_HelmetSpecter_headset_base_F: H_HelmetSpecter_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		model = "\A3_Aegis\Characters_F_Aegis\Headgear\H_HelmetSpecter_headset_F.p3d";
		hiddenSelections[] =
		{
			camo1,
			camo2
		};
		class ItemInfo: ItemInfo
		{
			mass = 40;
			hiddenSelections[] =
			{
				camo1,
				camo2
			};
			uniformModel = "\A3_Aegis\Characters_F_Aegis\Headgear\H_HelmetSpecter_headset_F.p3d";
			modelSides[] =
			{
				TGuerrila,
				TCivilian
			};
	  	};
	};
	class H_HelmetSpecter_cover_UNO_F: H_HelmetSpecter_cover_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecter_cover_UNO_F0;
		//picture = "\A3_Opf\Characters_F_Opf\Headgear\Data\UI\icon_H_HelmetSpecter_cover_khaki_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_UNO_cover.paa"
		};
	};
	class H_HelmetSpecter_paint_F: H_HelmetSpecter_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = $STR_A3_O_CfgWeapons_H_HelmetSpecter_paint_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetSpecter_paint_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_paint_CO.paa"};
	};
	class H_HelmetSpecter_paint_headset_F: H_HelmetSpecter_headset_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = $STR_A3_O_CfgWeapons_H_HelmetSpecter_paint_headset_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetSpecter_paint_headset_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_paint_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_cover_khaki_CO.paa"
		};
	};
	class H_HelmetSpecter_F: H_HelmetSpecter_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecter_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetSpecter_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_CO.paa"};
	};
	class H_HelmetSpecter_black_F: H_HelmetSpecter_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecter_black_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetSpecter_black_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_black_CO.paa"};
	};
	class H_HelmetSpecter_brown_F: H_HelmetSpecter_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecter_brown_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetSpecter_brown_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_brown_CO.paa"};
	};
	class H_HelmetSpecter_headset_F: H_HelmetSpecter_headset_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecter_headset_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetSpecter_headset_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_cover_autumn_CO.paa"
		};
	};
	class H_HelmetSpecter_black_headset_F: H_HelmetSpecter_headset_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecter_black_headset_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetSpecter_black_headset_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_black_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_cover_autumn_CO.paa"
		};
	};
	class H_HelmetSpecter_brown_headset_F: H_HelmetSpecter_headset_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecter_brown_headset_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetSpecter_brown_headset_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_brown_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_cover_autumn_CO.paa"
		};
	};
	class H_HelmetSpecter_cover_whex_CO: H_HelmetSpecter_cover_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = protected;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecter_cover_whex_F0;
		//picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetSpecter_cover_whex_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_cover_whex_CO.paa"
		};
	};
	class H_HelmetSpecter_cover_khaki_F: H_HelmetSpecter_cover_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = $STR_A3_O_CfgWeapons_H_HelmetSpecter_cover_khaki_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetSpecter_cover_khaki_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_cover_khaki_CO.paa"
		};
	};
	class H_HelmetSpecter_cover_taiga_F: H_HelmetSpecter_cover_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = $STR_A3_O_CfgWeapons_H_HelmetSpecter_cover_taiga_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetSpecter_cover_taiga_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_cover_taiga_CO.paa"
		};
	};
	class H_HelmetAggressor_black_F: H_HelmetAggressor_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetAggressor_black_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetAggressor_black_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetAggressor_01_black_CO.paa"};
	};
	class H_Booniehat_mgrn_hs: H_Booniehat_mgrn
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Booniehat_mgrn_hs_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_mgrn_hs0;
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	class H_Booniehat_taiga_hs: H_Booniehat_taiga
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Booniehat_taiga_hs_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_taiga_hs0;
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	class H_Booniehat_eaf_hs: H_Booniehat_eaf
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Booniehat_eaf_hs_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_eaf_hs0;
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	class H_Booniehat_wdl_hs: H_Booniehat_wdl
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Booniehat_wdl_hs_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_wdl_hs0;
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	class H_Cap_eaf_F: H_Cap_red
	{
		author = $STR_A3_A_AveryTheKitty;
	  	displayName = $STR_A3_A_CfgWeapons_H_Cap_eaf_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Cap_eaf_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\capb_eaf_CO.paa"};
	};
	class H_Cap_eaf_hs_F: H_Cap_eaf_F
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Cap_eaf_hs_F_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Cap_eaf_hs_F0;
		model = "\A3\Characters_F_EPB\Common\capb_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\capb_hs.p3d";
		};
	};
	class H_HelmetB_camo_wdl: H_HelmetB_camo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetB_camo_wdl0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_camo_wdl_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3\Characters_F_Enoch\Headgear\Data\equip1_wdl_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\ghillie2_wdl_CO.paa"
		};
	};
	class H_HelmetSpecB_light_wdl: H_HelmetSpecB_light
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecB_light_wdl0;
		picture = "\A3\Characters_F_Enoch\Headgear\Data\UI\icon_H_HelmetB_light_wdl_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Enoch\Headgear\Data\equip1_wdl_CO.paa"};
	};
	class H_O_Helmet_canvas_ocamo: H_HelmetIA
	{
	  	author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_O_Helmet_canvas_ocamo0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_O_Helmet_canvas_ocamo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\headgear_helmet_canvas_ocamo_CO.paa"};
	};
	class H_O_Helmet_canvas_oucamo: H_HelmetIA
	{
	  	author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_O_Helmet_canvas_oucamo0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_O_Helmet_canvas_oucamo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\headgear_helmet_canvas_oucamo_CO.paa"};
	};
	class H_O_Helmet_canvas_ghex_F: H_HelmetIA
	{
	  	author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_O_Helmet_canvas_ghex_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_O_Helmet_canvas_ghex_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\headgear_helmet_canvas_hexgreen_CO.paa"};
	};
	class H_HelmetHBK_arid_F: H_HelmetHBK_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetHBK_arid_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetHBK_01_Arid_CO.paa"};
	};
	class H_HelmetHBK_arid_headset_F: H_HelmetHBK_headset_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetHBK_arid_headset_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetHBK_arid_headset_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetHBK_01_Arid_CO.paa"};
	};
	class H_HelmetHBK_arid_ear_F: H_HelmetHBK_ear_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetHBK_arid_ear_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetHBK_arid_ear_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetHBK_01_Arid_CO.paa"};
	};
	class H_HelmetHBK_arid_chops_F: H_HelmetHBK_chops_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetHBK_arid_chops_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetHBK_arid_chops_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetHBK_01_Arid_CO.paa"};
	};
	class H_Booniehat_eaf_arid: H_Booniehat_khk
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_eaf_arid0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Booniehat_eaf_arid_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\booniehat_eaf_arid_CO.paa"};
	};
	class H_Booniehat_eaf_arid_hs: H_Booniehat_eaf_arid
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Booniehat_eaf_arid_hs_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Booniehat_eaf_arid_hs0;
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	class H_MilCap_eaf_arid: H_MilCap_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_MilCap_eaf_arid0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_MilCap_eaf_arid_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\cappatrol_eaf_arid_CO.paa"};
	};
	class H_Cap_eaf_arid_F: H_Cap_red
	{
		author = $STR_A3_A_AveryTheKitty;
	  	displayName = $STR_A3_A_CfgWeapons_H_Cap_eaf_arid_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Cap_eaf_arid_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\capb_eaf_arid_CO.paa"};
	};
	class H_Cap_eaf_arid_hs_F: H_Cap_eaf_arid_F
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Cap_eaf_arid_F_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_H_Cap_eaf_arid_hs_F0;
		model = "\A3\Characters_F_EPB\Common\capb_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\capb_hs.p3d";
		};
	};
	class H_MK7_Base_F: H_HelmetB
    {
        author = "Bran Flakes and TacticalDruid";
        scope = protected;
        displayName = "MK7";
        picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_MK7_digi_ca.paa";
        model = "\A3_Aegis\Characters_F_Aegis\Headgear\H_Mk7_F";
        hiddenSelections[] = { "Camo","Camo2","Camo3" };
        hiddenSelectionsTextures[] =
        {
         	"\A3_Aegis\Characters_F_Aegis\Headgear\Data\MK7_AAF.tga",
         	"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_brown_CO.paa",
         	"\A3_Aegis\Characters_F_Aegis\Headgear\Data\equip_d_co.paa"
        };
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			hiddenSelections[] = {camo};
			uniformModel = "\A3_Aegis\Characters_F_Aegis\Headgear\H_MK7_F.p3d";
			modelSides[] =
			{
				TWest,
				TCivilian
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = HitHead;
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
    class H_MK7_AAF_F: H_MK7_Base_F // Ingame called the Service Helmet (Digi)
    {
        author = "Bran Flakes and TacticalDruid";
        scope = public;
        displayName = $STR_A3_A_CfgWeapons_H_MK7_AAF_F0;
        picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_MK7_digi_ca.paa";
        model = "\A3_Aegis\Characters_F_Aegis\Headgear\H_Mk7_F";
        hiddenSelections[] = { "Camo","Camo2","Camo3" };
        hiddenSelectionsTextures[] =
        {
         	"\A3_Aegis\Characters_F_Aegis\Headgear\Data\MK7_AAF.tga",
         	"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_brown_CO.paa",
         	"\A3_Aegis\Characters_F_Aegis\Headgear\Data\equip_d_co.paa"
        };
    };
	class H_MK7_oli_F: H_MK7_Base_F
    {
        author = "Bran Flakes and TacticalDruid";
        scope = public;
        displayName = $STR_A3_A_CfgWeapons_H_MK7_oli_F0;
       picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\H_MK7_oli_F_ca.paa";
        model = "\A3_Aegis\Characters_F_Aegis\Headgear\H_Mk7_F";
        hiddenSelections[] = { "Camo","Camo2","Camo3" };
        hiddenSelectionsTextures[] =
        {
         	"\A3_Aegis\Characters_F_Aegis\Headgear\Data\MK7_oli.tga",
         	"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_brown_CO.paa",
         	"\A3_Aegis\Characters_F_Aegis\Headgear\Data\equip_d_co.paa"
        };
    };
	class H_MK7_sand_F: H_MK7_Base_F
    {
        author = "Bran Flakes and TacticalDruid";
        scope = public;
        displayName = $STR_A3_A_CfgWeapons_H_MK7_Sand_F0;
        picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\H_MK7_sand_F_ca.paa";
        model = "\A3_Aegis\Characters_F_Aegis\Headgear\H_Mk7_F";
        hiddenSelections[] = { "Camo","Camo2","Camo3" };
        hiddenSelectionsTextures[] =
        {
         	"\A3_Aegis\Characters_F_Aegis\Headgear\Data\MK7_sand.tga",
         	"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_brown_CO.paa",
         	"\A3_Aegis\Characters_F_Aegis\Headgear\Data\equip_d_co.paa"
        };
    };
	class H_MK7_UN_F: H_MK7_Base_F
    {
        author = "Bran Flakes and TacticalDruid";
        scope = public;
        displayName = $STR_A3_A_CfgWeapons_H_MK7_UN_F0;
        picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\H_MK7_UN_F_ca.paa";
        model = "\A3_Aegis\Characters_F_Aegis\Headgear\H_Mk7_F";
        hiddenSelections[] = { "Camo","Camo2","Camo3" };
        hiddenSelectionsTextures[] =
        {
         	"\A3_Aegis\Characters_F_Aegis\Headgear\Data\MK7_UN.paa",
         	"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_brown_CO.paa",
         	"\A3_Aegis\Characters_F_Aegis\Headgear\Data\equip_d_co.paa"
        };
    };
	class H_I_Helmet_canvas_UN_F: H_HelmetIA
	{
	  	author = $STR_A3_A_BranFlakes;
		displayName = $STR_A3_A_CfgWeapons_H_I_Helmet_canvas_UN_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\H_I_Helmet_canvas_UN_F_ca.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\headgear_helmet_canvas_UN_CO.paa"};
	};
	class H_I_Helmet_canvas_CBR_F: H_HelmetIA
	{
	  	author = $STR_A3_A_BranFlakes;
		displayName = $STR_A3_A_CfgWeapons_H_I_Helmet_canvas_CBR_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\H_I_Helmet_canvas_CBR_F_ca.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Headgear\Data\headgear_helmet_canvas_CBR_CO.paa"};
	};
    /* Deprecated */
    #include "deprecated.hpp"
};