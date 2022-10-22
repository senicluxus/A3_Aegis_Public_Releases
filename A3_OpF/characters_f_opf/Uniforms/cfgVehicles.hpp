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
	// Arma 3 Opposing Forces
	// Paramilitary
	UNIFORM_HOLDER(Opf_U_O_ParamilitaryBody,$STR_A3_O_CfgWeapons_U_O_ParamilitaryBody0)
	// Raven
    /*
	UNIFORM_HOLDER(Opf_U_O_R_CombatUniform_tshirt_taiga_F,$STR_A3_O_CfgWeapons_U_O_R_CombatUniform_tshirt_taiga_F0)
	UNIFORM_HOLDER(Opf_U_O_R_CombatUniform_tshirt_arid_F,$STR_A3_O_CfgWeapons_U_O_R_CombatUniform_tshirt_arid_F0)
	*/
    // Separatists
	UNIFORM_HOLDER(Opf_U_O_S_Gorka_01_autumn_F,$STR_A3_O_CfgWeapons_U_O_S_Gorka_01_autumn_F0)
	UNIFORM_HOLDER(Opf_U_O_S_Gorka_01_summer_F,$STR_A3_O_CfgWeapons_U_O_S_Gorka_01_summer_F0)
	UNIFORM_HOLDER(Opf_U_O_S_Uniform_01_taiga_F,$STR_A3_O_CfgWeapons_U_O_S_Uniform_01_taiga_F0)
	UNIFORM_HOLDER(Opf_U_O_S_Uniform_01_arid_F,$STR_A3_O_CfgWeapons_U_O_S_Uniform_01_arid_F0)
	UNIFORM_HOLDER(Opf_U_O_S_Uniform_01_sweater_F,$STR_A3_O_CfgWeapons_U_O_S_Uniform_01_sweater_F0)
	// Insurgents
	UNIFORM_HOLDER(Opf_U_IG_Guerilla3_3_F,$STR_A3_O_CfgWeapons_U_IG_Guerilla3_3_F0)
	UNIFORM_HOLDER(Opf_U_I_I_Uniform_01_hex_F,$STR_A3_O_CfgWeapons_U_I_I_Uniform_01_hex_F0)
	UNIFORM_HOLDER(Opf_U_I_I_Uniform_01_urb_F,$STR_A3_O_CfgWeapons_U_I_I_Uniform_01_urb_F0)
	UNIFORM_HOLDER(Opf_U_I_I_Uniform_01_ghex_F,$STR_A3_O_CfgWeapons_U_I_I_Uniform_01_ghex_F0)
	UNIFORM_HOLDER(Opf_U_I_I_Uniform_01_tshirt_black_F,$STR_A3_O_CfgWeapons_U_I_I_Uniform_01_tshirt_black_F0)
    // Deprecated classes
    DEPRECATED_CLASS(Item_U_O_ParamilitaryBody,Item_Opf_U_O_ParamilitaryBody);
    DEPRECATED_CLASS(Item_U_O_S_Gorka_01_autumn_F,Item_Opf_U_O_S_Gorka_01_autumn_F);
    DEPRECATED_CLASS(Item_U_O_S_Gorka_01_summer_F,Item_Opf_U_O_S_Gorka_01_summer_F);
    DEPRECATED_CLASS(Item_U_O_S_Uniform_01_taiga_F,Item_Opf_U_O_S_Uniform_01_taiga_F);
    DEPRECATED_CLASS(Item_U_O_S_Uniform_01_arid_F,Item_Opf_U_O_S_Uniform_01_arid_F);
    DEPRECATED_CLASS(Item_U_O_S_Uniform_01_sweater_F,Item_Opf_U_O_S_Uniform_01_sweater_F);
    DEPRECATED_CLASS(Item_U_IG_Guerilla3_3_F,Item_Opf_U_IG_Guerilla3_3_F);
    DEPRECATED_CLASS(Item_U_I_I_Uniform_01_hex_F,Item_Opf_U_I_I_Uniform_01_hex_F);
    DEPRECATED_CLASS(Item_U_I_I_Uniform_01_urb_F,Item_Opf_U_I_I_Uniform_01_urb_F);
    DEPRECATED_CLASS(Item_U_I_I_Uniform_01_ghex_F,Item_Opf_U_I_I_Uniform_01_ghex_F);
    DEPRECATED_CLASS(Item_U_I_I_Uniform_01_tshirt_black_F,Item_Opf_U_I_I_Uniform_01_tshirt_black_F);
};