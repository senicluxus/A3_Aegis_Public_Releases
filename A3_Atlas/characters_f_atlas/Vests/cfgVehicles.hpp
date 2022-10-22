#define VEST_HOLDER(a,b) \
	class Vest_##a##: Vest_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = EdCat_Equipment; \
		editorSubcategory = EdSubcat_Vests; \
		vehicleClass = ItemsVests; \
		class TransportItems \
		{ \
			item_xx(##a##,1); \
		}; \
	};

class CfgVehicles
{
	class Vest_Base_F;
	// Arma 3 Atlas
	VEST_HOLDER(V_HarnessO_tan,$STR_A3_A_CfgWeapons_V_HarnessO_tan0)
	VEST_HOLDER(V_HarnessOGL_tan,$STR_A3_A_CfgWeapons_V_HarnessOGL_tan0)
	VEST_HOLDER(V_HarnessO_whex_F,$STR_A3_A_CfgWeapons_V_HarnessO_whex_F0)
	VEST_HOLDER(V_HarnessOGL_whex_F,$STR_A3_A_CfgWeapons_V_HarnessOGL_whex_F0)
	VEST_HOLDER(V_HarnessOSpec_tan,$STR_A3_A_CfgWeapons_V_HarnessOSpec_tan0)
	VEST_HOLDER(V_HarnessOSpec_whex_F,$STR_A3_A_CfgWeapons_V_HarnessOSpec_whex_F0)
	VEST_HOLDER(V_PlateCarrierIA1_grn,$STR_A3_A_CfgWeapons_V_PlateCarrierIA1_grn0)
	VEST_HOLDER(V_PlateCarrierIA2_grn,$STR_A3_A_CfgWeapons_V_PlateCarrierIA2_grn0)
	VEST_HOLDER(V_PlateCarrierIAGL_grn,$STR_A3_A_CfgWeapons_V_PlateCarrierIAGL_grn0)
	VEST_HOLDER(V_TacVest_tan,$STR_A3_A_CfgWeapons_V_TacVest_tan0)
	VEST_HOLDER(V_SmershVest_01_khaki_F,$STR_A3_A_CfgWeapons_V_SmershVest_01_khaki_F0)
	VEST_HOLDER(V_SmershVest_01_radio_khaki_F,$STR_A3_A_CfgWeapons_V_SmershVest_01_radio_khaki_F0)
	VEST_HOLDER(V_SmershVest_01_olive_F,$STR_A3_A_CfgWeapons_V_SmershVest_01_olive_F0)
	VEST_HOLDER(V_SmershVest_01_radio_olive_F,$STR_A3_A_CfgWeapons_V_SmershVest_01_radio_olive_F0)
    /*
	VEST_HOLDER(V_RebreatherB_O,$STR_A3_A_CfgWeapons_V_RebreatherB_O0)
    */
	VEST_HOLDER(V_RebreatherI_I,$STR_A3_A_CfgWeapons_V_RebreatherI_I0)
};