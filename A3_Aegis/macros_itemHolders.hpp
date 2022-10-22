/* Macros: Item Holders for 3DEN editor and Curator interface
- Placed in "cfgVehicles.hpp"
*/

// Primary weapons
#define WEAPON_HOLDER(a,b,c,d) \
	class Weapon_##a##: Weapon_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##c##; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = EdCat_Weapons; \
		editorSubcategory = ##d##; \
		vehicleClass = WeaponsPrimary; \
		class TransportWeapons \
		{ \
			class ##a## \
			{ \
				weapon = ##a##; \
				count = 1; \
			}; \
		}; \
		class TransportMagazines \
		{ \
			class ##b## \
			{ \
				magazine = ##b##; \
				count = 1; \
			}; \
		}; \
	}

// Primary weapons w/ grenades
#define WEAPON_HOLDER_WITH_GRENADE(a,b,c,d,e) \
	class Weapon_##a##: Weapon_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##d##; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = EdCat_Weapons; \
		editorSubcategory = ##e##; \
		vehicleClass = WeaponsPrimary; \
		class TransportWeapons \
		{ \
			class ##a## \
			{ \
				weapon = ##a##; \
				count = 1; \
			}; \
		}; \
		class TransportMagazines \
		{ \
			class ##b## \
			{ \
				magazine = ##b##; \
				count = 1; \
			}; \
			class ##c## \
			{ \
				magazine = ##c##; \
				count = 1; \
			}; \
		}; \
	}

// Handguns
#define PISTOL_HOLDER(a,b,c) \
	class Weapon_##a##: Pistol_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##c##; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = EdCat_Weapons; \
		editorSubcategory = EdSubcat_Pistols; \
		vehicleClass = WeaponsHandguns; \
		class TransportWeapons \
		{ \
			class ##a## \
			{ \
				weapon = ##a##; \
				count = 1; \
			}; \
		}; \
		class TransportMagazines \
		{ \
			class ##b## \
			{ \
				magazine = ##b##; \
				count = 1; \
			}; \
		}; \
	}

// Secondary weapons
#define LAUNCHER_HOLDER(a,b,c) \
	class Weapon_##a##: Launcher_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##c##; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = EdCat_Weapons; \
		editorSubcategory = EdSubcat_Launchers; \
		vehicleClass = WeaponsSecondary; \
		class TransportWeapons \
		{ \
			class ##a## \
			{ \
				weapon = ##a##; \
				count = 1; \
			}; \
		}; \
		class TransportMagazines \
		{ \
			class ##b## \
			{ \
				magazine = ##b##; \
				count = 1; \
			}; \
		}; \
	}

// Attachments
#define ACC_HOLDER(a,b,c,d,e) \
	class Item_##a##: Item_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = ##c##; \
		editorSubcategory = ##d##; \
		vehicleClass = ##e##; \
		class TransportItems \
		{ \
			class ##a## \
			{ \
				name = ##a##; \
				count = 1; \
			}; \
		}; \
	}

// Inventory items
#define ITEM_HOLDER(a,b) \
	class Item_##a##: Item_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = EdCat_Equipment; \
		editorSubcategory = EdSubcat_InventoryItems; \
		vehicleClass = Items; \
		model = "\A3\Weapons_F\DummyItem.p3d"; \
		class TransportItems \
		{ \
			class ##a## \
			{ \
				name = ##a##; \
				count = 1; \
			}; \
		}; \
	}

// Binoculars
#define BINOC_HOLDER(a,b) \
	class Item_##a##: Item_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = EdCat_Equipment; \
		editorSubcategory = EdSubcat_InventoryItems; \
		vehicleClass = Items; \
		model = "\A3\Weapons_F\DummyBinoc.p3d"; \
		class TransportItems \
		{ \
			class ##a## \
			{ \
				name = ##a##; \
				count = 1; \
			}; \
		}; \
	}

// NVGs
#define NVG_HOLDER(a,b) \
	class Item_##a##: Item_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = EdCat_Equipment; \
		editorSubcategory = EdSubcat_InventoryItems; \
		vehicleClass = Items; \
		model = "\A3\Weapons_F\DummyNVG.p3d"; \
		class TransportItems \
		{ \
			class ##a## \
			{ \
				name = ##a##; \
				count = 1; \
			}; \
		}; \
	}

// Headgear
#define HEADGEAR_HOLDER(a,b,c) \
	class Headgear_##a##: Headgear_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_AveryTheKitty; \
		editorCategory = EdCat_Equipment; \
		editorSubcategory = ##c##; \
		vehicleClass = ItemsHeadgear; \
		model = "\A3\Weapons_F\DummyCap.p3d"; \
		class TransportItems \
		{ \
			class ##a## \
			{ \
				name = ##a##; \
				count = 1; \
			}; \
		}; \
	}

// Uniforms
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
		model = "\A3\Weapons_F\DummyWeapon.p3d"; \
		class TransportItems \
		{ \
			class ##a## \
			{ \
				name = ##a##; \
				count = 1; \
			}; \
		}; \
	}

// Vests
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
			class ##a## \
			{ \
				name = ##a##; \
				count = 1; \
			}; \
		}; \
	}