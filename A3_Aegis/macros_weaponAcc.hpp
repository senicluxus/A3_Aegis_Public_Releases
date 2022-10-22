/*
- Definitions for weapons presets
- Placed in CfgWeaponsAcc
*/

// Optics
#define LINKED_TOP(accessory) \
    class LinkedItemsOptic \
	{ \
		slot = CowsSlot; \
		item = accessory; \
	}

// Flashlights & Laser Pointers
#define LINKED_SIDE(accessory) \
    class LinkedItemsAcc \
	{ \
		slot = PointerSlot; \
		item = accessory; \
	}

// Suppressors
#define LINKED_MUZZLE(accessory) \
    class LinkedItemsMuzzle \
	{ \
		slot = MuzzleSlot; \
		item = accessory; \
	}

// Bipods
#define LINKED_UNDERBARREL(accessory) \
    class LinkedItemsUnder \
	{ \
		slot = UnderBarrelSlot; \
		item = accessory; \
	}