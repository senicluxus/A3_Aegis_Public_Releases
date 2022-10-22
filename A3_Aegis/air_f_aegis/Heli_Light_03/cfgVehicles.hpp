class CfgVehicles
{
    /* Inheritance Tree */
	class Helicopter_Base_F;

    /* Bases */
	class Heli_light_03_base_F: Helicopter_Base_F
	{
		class Components;

        /* Liveries */
		class TextureSources
		{
			class Green
			{
				textures[] =
				{
					"\A3\Air_F_EPB\Heli_Light_03\Data\Heli_Light_03_base_CO.paa",
					"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_HAF_CO.paa",
					"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_HAF_CA.paa"
				};
			};
			class Indep
			{
				textures[] =
				{
					"\A3\Air_F_EPB\Heli_Light_03\Data\Heli_Light_03_base_INDP_CO.paa",
					"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_HAF_CO.paa",
					"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_HAF_CA.paa"
				};
			};
			class BAF
			{
				displayName = $STR_A3_A_TextureSources_BAF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Light_03\Data\Heli_Light_03_base_BAF_CO.paa",
					"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa",
					"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa"
				};
				factions[] = {};
			};
			class Grey
			{
				displayName = $STR_A3_TextureSources_Grey0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Light_03\Data\Heli_Light_03_base_grey_CO.paa",
					"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa",
					"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa"
				};
				factions[] = {};
			};
		};
	};
	class Heli_light_03_dynamicLoadout_base_F: Heli_light_03_base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				class Pylons
				{
					class PylonLeft1
					{
						hardpoints[] += {20MM_CANNON};
					};
					class PylonRight1: PylonLeft1{};
				};
			};
		};
	};
	class Heli_light_03_unarmed_base_F;

	/* Factions */
	class I_Heli_light_03_dynamicLoadout_F: Heli_light_03_dynamicLoadout_base_F
	{
		hiddenSelections[] =
		{
			camo,
			ammobox,
			ammobox_sign
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Air_F_EPB\Heli_Light_03\Data\Heli_Light_03_base_INDP_CO.paa",
			"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_HAF_CO.paa",
			"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_HAF_CA.paa"
		};
	};
	class I_Heli_light_03_unarmed_F: Heli_light_03_unarmed_base_F
	{
		hiddenSelectionsTextures[] = {"\A3\Air_F_EPB\Heli_Light_03\Data\Heli_Light_03_base_INDP_CO.paa"};
		textureList[] = {Indep,1};
	};
	#include "cfgBLUFOR.hpp"    // BAF
};