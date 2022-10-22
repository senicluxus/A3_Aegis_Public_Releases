class CfgVehicles
{
    /* Definitions */
    #include "\A3_Aegis\macros_supportBags.hpp"

	/* Inheritance Tree */
	class StaticMortar;
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo{};
	};

    /* Bases */
	class Mortar_01_base_F: StaticMortar
	{
        /* Liveries */
		class TextureSources
		{
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3\Static_F\Mortar_01\Data\Mortar_01_CO.paa"};
				factions[] = {};
			};
			class Hex
			{
				displayName = $STR_A3_TEXTURESOURCES_HEX0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3\Static_F\Mortar_01\Data\Mortar_01_OPFOR_CO.paa"};
				factions[] = {};
			};
			class GreenHex
			{
				displayName = $STR_A3_TEXTURESOURCES_GREENHEX0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Aegis\Static_F_Aegis\Mortar_01\Data\Mortar_01_ghex_CO.paa"};
				factions[] = {};
			};
		};
	};

	/* Factions */
    class B_Mortar_01_support_F: Bag_Base
    {
        hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_mcamo_CO.paa"};
    };
    class B_Mortar_01_weapon_F: Weapon_Bag_Base
    {
        hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_mcamo_CO.paa"};
        class assembleInfo: assembleInfo
        {
            base[] = {SUPPORT_BAGS_MORTAR_01};
        };
    };
	class I_Mortar_01_support_F;
	class I_Mortar_01_weapon_F: B_Mortar_01_weapon_F{};
    #include "cfgBLUFOR.hpp"    // US & BAF
    #include "cfgOPFOR.hpp"     // IAF, China & Argana
    #include "cfgRUS.hpp"       // Russia
	class I_E_Mortar_01_support_F: I_Mortar_01_support_F
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_eaf_CO.paa"};
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_eaf_F_CA.paa";
	};
	class I_E_Mortar_01_Weapon_F: I_Mortar_01_weapon_F
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_eaf_CO.paa"};
		picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_eaf_F_CA.paa";
	};
};