#define UNIFORM_HOLDER(a,b) \
	class Item_##a##: Item_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = EdCat_Equipment; \
		editorSubcategory = EdSubcat_Uniforms; \
		vehicleClass = ItemsUniforms; \
		model = "\A3\Weapons_F\dummyweapon.p3d"; \
		class TransportItems \
		{ \
			item_xx(##a##,1); \
		}; \
	};

class CfgVehicles
{
	// Arma 3
	class Item_Base_F;
	class Item_U_B_CombatUniform_sgg: Item_Base_F
	{
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgWeapons_U_B_CombatUniform_sgg0;
	};
	class Item_U_B_CombatUniform_sgg_tshirt: Item_Base_F
	{
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgWeapons_U_B_CombatUniform_sgg_tshirt0;
	};
	class Item_U_B_CombatUniform_sgg_vest: Item_Base_F
	{
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_A_CfgWeapons_U_B_CombatUniform_sgg_vest0;
	};
	// Arma 3 Atlas
    // Civilians
	UNIFORM_HOLDER(Atlas_U_C_Uniform_01_shirt_pattern_F,"Commoner Outfit (Pattern)")
	UNIFORM_HOLDER(Atlas_U_C_Uniform_01_shirt_striped_F,"Commoner Outfit (Striped)")
	UNIFORM_HOLDER(Atlas_U_C_Uniform_01_shirt_white_F,"Commoner Outfit (White)")
	UNIFORM_HOLDER(Atlas_U_C_CommonerJacket_01_marroon_F,"Commoner Jacket (Marroon)")
	UNIFORM_HOLDER(Atlas_U_C_CommonerJacket_01_blue_F,"Commoner Jacket (Blue)")
	UNIFORM_HOLDER(Atlas_U_C_CommonerJacket_01_grey_F,"Commoner Jacket (Grey)")
	UNIFORM_HOLDER(Atlas_U_C_Uniform_01_tshirt_white_F,"Worn Clothes (White)")
	// Viper
	UNIFORM_HOLDER(Atlas_U_O_V_Soldier_Viper_whex_F,$STR_A3_A_CfgWeapons_U_O_V_Soldier_Viper_whex_F0)
	// Belarus
	UNIFORM_HOLDER(Atlas_U_O_W_CombatUniform_owcamo,$STR_A3_A_CfgWeapons_U_O_W_CombatUniform_owcamo0)
	UNIFORM_HOLDER(Atlas_U_O_W_PilotCoveralls,$STR_A3_A_CfgWeapons_U_O_W_PilotCoveralls0)
	UNIFORM_HOLDER(Atlas_U_O_W_OfficerUniform,$STR_A3_A_CfgWeapons_U_O_W_OfficerUniform0)
	UNIFORM_HOLDER(Atlas_U_O_officer_noInsignia_whex_F,$STR_A3_A_CfgWeapons_U_O_officer_noInsignia_whex_F0)
	// Bundeswehr
	UNIFORM_HOLDER(Atlas_U_B_G_CombatUniform_wdl,$STR_A3_A_CfgWeapons_U_B_G_CombatUniform_wdl0)
	UNIFORM_HOLDER(Atlas_U_B_G_CombatUniform_tshirt_wdl,$STR_A3_A_CfgWeapons_U_B_G_CombatUniform_tshirt_wdl0)
	UNIFORM_HOLDER(Atlas_U_B_G_CombatUniform_vest_wdl,$STR_A3_A_CfgWeapons_U_B_G_CombatUniform_vest_wdl0)
	UNIFORM_HOLDER(Atlas_U_B_G_HeliPilotCoveralls,$STR_A3_A_CfgWeapons_U_B_G_HeliPilotCoveralls0)
	UNIFORM_HOLDER(Atlas_U_Tank_wdl_F,$STR_A3_A_CfgWeapons_U_Tank_wdl_F0)
    // Takistani Army
	UNIFORM_HOLDER(Atlas_U_O_CombatUniform_semiarid,$STR_A3_A_CfgWeapons_U_O_CombatUniform_semiarid0)
	UNIFORM_HOLDER(Atlas_U_O_officer_noInsignia_semiarid_F,$STR_A3_A_CfgWeapons_U_O_officer_noInsignia_semiarid_F0)
    /*
	// ANZAC
	UNIFORM_HOLDER(Atlas_U_B_A_CombatUniform_aucamo,$STR_A3_A_CfgWeapons_U_B_A_CombatUniform_aucamo0)
	UNIFORM_HOLDER(Atlas_U_B_A_CombatUniform_shortsleeve_aucamo,$STR_A3_A_CfgWeapons_U_B_A_CombatUniform_shortsleeve_aucamo0)
	UNIFORM_HOLDER(Atlas_U_B_A_PilotCoveralls,$STR_A3_A_CfgWeapons_U_B_A_PilotCoveralls0)
	UNIFORM_HOLDER(Atlas_U_B_A_Wetsuit,$STR_A3_A_CfgWeapons_U_B_A_Wetsuit0)
	UNIFORM_HOLDER(Atlas_U_B_A_CBRN_Suit_01_Aucamo_F,$STR_A3_A_CfgWeapons_U_B_A_CBRN_Suit_01_Aucamo_F0)
    */
	// HIMF
	UNIFORM_HOLDER(Atlas_U_B_H_Soldier_F,$STR_A3_A_CfgWeapons_U_B_H_Soldier_F0)
	UNIFORM_HOLDER(Atlas_U_B_H_Soldier_2_F,$STR_A3_A_CfgWeapons_U_B_H_Soldier_2_F0)
	UNIFORM_HOLDER(Atlas_U_B_H_Soldier_3_F,$STR_A3_A_CfgWeapons_U_B_H_Soldier_3_F0)
	UNIFORM_HOLDER(Atlas_U_B_H_Officer_F,$STR_A3_A_CfgWeapons_U_B_H_Officer_F0)
	/*
    // CDF
	UNIFORM_HOLDER(Atlas_U_I_W_Uniform_01_F,$STR_A3_A_CfgWeapons_U_I_W_Uniform_01_F0)
	UNIFORM_HOLDER(Atlas_U_I_W_Uniform_01_tanktop_F,$STR_A3_A_CfgWeapons_U_I_W_Uniform_01_tanktop_F0)
	UNIFORM_HOLDER(Atlas_U_I_W_Uniform_01_shortsleeve_F,$STR_A3_A_CfgWeapons_U_I_W_Uniform_01_shortsleeve_F0)
	UNIFORM_HOLDER(Atlas_U_I_W_Uniform_01_officer_F,$STR_A3_A_CfgWeapons_U_I_W_Uniform_01_officer_F0)
	UNIFORM_HOLDER(Atlas_U_I_W_Uniform_01_coveralls_F,$STR_A3_A_CfgWeapons_U_I_W_Uniform_01_coveralls_F0)
	UNIFORM_HOLDER(Atlas_U_I_W_FullGhillie_wdl_F,$STR_A3_A_CfgWeapons_U_I_W_FullGhillie_wdl_F0)
	UNIFORM_HOLDER(Atlas_U_I_W_CBRN_Suit_01_Autumn_F,$STR_A3_A_CfgWeapons_U_I_W_CBRN_Suit_01_Autumn_F0)
    */
	// IDF
	UNIFORM_HOLDER(Atlas_U_I_I_CombatUniform_olive,$STR_A3_A_CfgWeapons_U_I_I_CombatUniform_olive0)
	UNIFORM_HOLDER(Atlas_U_I_I_CombatUniform_shortsleeve_olive,$STR_A3_A_CfgWeapons_U_I_I_CombatUniform_shortsleeve_olive0)
	UNIFORM_HOLDER(Atlas_U_I_I_GhillieSuit,$STR_A3_A_CfgWeapons_U_I_I_GhillieSuit0)
	UNIFORM_HOLDER(Atlas_U_I_I_OfficerUniform,$STR_A3_A_CfgWeapons_U_I_I_OfficerUniform0)
	UNIFORM_HOLDER(Atlas_U_I_I_Wetsuit,$STR_A3_A_CfgWeapons_U_I_I_Wetsuit0)
	UNIFORM_HOLDER(Atlas_U_Tank_olive_F,$STR_A3_A_CfgWeapons_U_Tank_olive_F0)
	UNIFORM_HOLDER(Atlas_U_I_I_CBRN_Suit_01_Olive_F,$STR_A3_A_CfgWeapons_U_I_I_CBRN_Suit_01_Olive_F0)
    // Deprecated classes
    DEPRECATED_CLASS(Item_U_O_V_Soldier_Viper_whex_F,Item_Atlas_U_O_V_Soldier_Viper_whex_F);
    DEPRECATED_CLASS(Item_U_O_W_CombatUniform_owcamo,Item_Atlas_U_O_W_CombatUniform_owcamo);
    DEPRECATED_CLASS(Item_U_O_W_PilotCoveralls,Item_Atlas_U_O_W_PilotCoveralls);
    DEPRECATED_CLASS(Item_U_O_W_OfficerUniform,Item_Atlas_U_O_W_OfficerUniform);
    DEPRECATED_CLASS(Item_U_O_officer_noInsignia_whex_F,Item_Atlas_U_O_officer_noInsignia_whex_F);
    DEPRECATED_CLASS(Item_U_B_G_CombatUniform_wdl,Item_Atlas_U_B_G_CombatUniform_wdl);
    DEPRECATED_CLASS(Item_U_B_G_CombatUniform_tshirt_wdl,Item_Atlas_U_B_G_CombatUniform_tshirt_wdl);
    DEPRECATED_CLASS(Item_U_B_G_CombatUniform_vest_wdl,Item_Atlas_U_B_G_CombatUniform_vest_wdl);
    DEPRECATED_CLASS(Item_U_B_G_HeliPilotCoveralls,Item_Atlas_U_B_G_HeliPilotCoveralls);
    DEPRECATED_CLASS(Item_U_Tank_wdl_F,Item_Atlas_U_Tank_wdl_F);
    DEPRECATED_CLASS(Item_U_O_CombatUniform_semiarid,Item_Atlas_U_O_CombatUniform_semiarid);
    DEPRECATED_CLASS(Item_U_O_officer_noInsignia_semiarid_F,Item_Atlas_U_O_officer_noInsignia_semiarid_F);
    DEPRECATED_CLASS(Item_U_B_H_Soldier_F,Item_Atlas_U_B_H_Soldier_F);
    DEPRECATED_CLASS(Item_U_B_H_Soldier_2_F,Item_Atlas_U_B_H_Soldier_2_F);
    DEPRECATED_CLASS(Item_U_B_H_Soldier_3_F,Item_Atlas_U_B_H_Soldier_3_F);
    DEPRECATED_CLASS(Item_U_B_H_Officer_F,Item_Atlas_U_B_H_Officer_F);
    DEPRECATED_CLASS(Item_U_I_I_CombatUniform_olive,Item_Atlas_U_I_I_CombatUniform_olive);
    DEPRECATED_CLASS(Item_U_I_I_CombatUniform_shortsleeve_olive,Item_Atlas_U_I_I_CombatUniform_shortsleeve_olive);
    DEPRECATED_CLASS(Item_U_I_I_GhillieSuit,Item_Atlas_U_I_I_GhillieSuit);
    DEPRECATED_CLASS(Item_U_I_I_OfficerUniform,Item_Atlas_U_I_I_OfficerUniform);
    DEPRECATED_CLASS(Item_U_I_I_Wetsuit,Item_Atlas_U_I_I_Wetsuit);
    DEPRECATED_CLASS(Item_U_Tank_olive_F,Item_Atlas_U_Tank_olive_F);
    DEPRECATED_CLASS(Item_U_I_I_CBRN_Suit_01_Olive_F,Item_Atlas_U_I_I_CBRN_Suit_01_Olive_F);
};