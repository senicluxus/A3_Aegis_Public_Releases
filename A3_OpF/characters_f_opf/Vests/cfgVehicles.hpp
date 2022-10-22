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
	// Arma 3
	class Vest_Base_F;
	// Arma 3 Opposing Forces
	VEST_HOLDER(V_Pocketed_hunter_F,$STR_A3_O_CfgWeapons_V_Pocketed_hunter_F0)
	VEST_HOLDER(V_Pocketed_wdl_F,$STR_A3_O_CfgWeapons_V_Pocketed_wdl_F0)
};