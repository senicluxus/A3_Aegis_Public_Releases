class CfgVehicles
{
	/* Inheritance Tree */
	class Car_F;
	class Truck_F: Car_F
	{
		class AnimationSources;
        class EventHandlers;
	};

    /* Bases */
	class Truck_02_base_F: Truck_F
	{
		hiddenSelections[] =
		{
			camo1,
			camo2,
			camo3,
			camo4
		};
		class AnimationSources: AnimationSources
		{
			class spz_hide;
		};

        /* Liveries */
		class TextureSources
		{
			class Indep
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_INDP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_INDP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_INDP_CO.paa"
				};
				factions[] = {};
			};
			class Opfor
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_OPFOR_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
				};
				factions[] = {};
			};
			class OrangeBlue
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
			};
			class OrangeOlive
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_olive_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
			};
			class BlueBlue
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_blue_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
			};
			class BlueOlive
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_blue_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_olive_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
			};
			class GreenHex
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_ghex_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_ghex_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa"
				};
				factions[] = {};
			};
			class IDAP
			{
				textures[] =
				{
					"\A3\Soft_F_Orange\Truck_02\Data\Truck_02_kab_IDAP_CO.paa",
					"\A3\Soft_F_Orange\Truck_02\Data\Truck_02_kuz_IDAP_CO.paa",
					"\A3\Soft_F_Orange\Truck_02\Data\Truck_02_int_IDAP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
			};
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] = {};
			};
			class SFIA
			{
				displayName = $STR_LXWS_FACTION_SFIA;
				textures[] =
				{
					"lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_sfia_CO.paa",
					"lxws\vehicles_f_lxws\data\Truck_02\truck_02_kuz_africa_brown_CO.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
				};
				factions[] = {};
			};
			class Black
			{
				displayName = $STR_A3_TEXTURESOURCES_BLACK0;
				textures[] =
				{
					"\lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_black_CO.paa",
					"\a3\soft_f_beta\Truck_02\data\truck_02_kuz_olive_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
				factions[] = {};
			};
		};

        /* Scripts */
        class EventHandlers: EventHandlers
        {
            init = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
        };
	};
	class Truck_02_transport_base_F: Truck_02_base_F
	{
        /* Liveries */
		class TextureSources
		{
			class Indep
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_INDP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_INDP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_INDP_CO.paa"
				};
				factions[] = {};
			};
			class Opfor
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_OPFOR_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
				};
				factions[] = {};
			};
			class Orange
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
			};
			class Blue
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_blue_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
			};
			class GreenHex
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_ghex_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_ghex_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa"
				};
				factions[] = {};
			};
			class IDAP
			{
				textures[] =
				{
					"\A3\Soft_F_Orange\Truck_02\Data\Truck_02_kab_IDAP_CO.paa",
					"\A3\Soft_F_Orange\Truck_02\Data\Truck_02_kuz_IDAP_CO.paa",
					"\A3\Soft_F_Orange\Truck_02\Data\Truck_02_int_IDAP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
			};
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] = {};
			};
			class SFIA
			{
				displayName = $STR_LXWS_FACTION_SFIA;
				textures[] =
				{
					"lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_sfia_CO.paa",
					"lxws\vehicles_f_lxws\data\Truck_02\truck_02_kuz_africa_brown_CO.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
				};
				factions[] = {};
			};
			class Black
			{
				displayName = $STR_A3_TEXTURESOURCES_BLACK0;
				textures[] =
				{
					"\lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_black_CO.paa",
					"\a3\soft_f_beta\Truck_02\data\truck_02_kuz_olive_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
				factions[] = {};
			};
		};
	};
	class Truck_02_box_base_F: Truck_02_base_F
	{
        /* Liveries */
		class TextureSources
		{
			class Indep
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_INDP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_repair_INDP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_INDP_CO.paa"
				};
				factions[] = {};
			};
			class Opfor
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_repair_OPFOR_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
				};
				factions[] = {};
			};
			class OrangeOrange
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_repair_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
			};
			class OrangeGreen
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_repair_green_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
			};
			class BlueOrange
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_blue_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_repair_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
			};
			class BlueGreen
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_blue_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_repair_green_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
			};
			class GreenHex
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_ghex_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_repair_ghex_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa"
				};
				factions[] = {};
			};
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_repair_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] = {};
			};
			class SFIA
			{
				displayName = $STR_LXWS_FACTION_SFIA;
				textures[] =
				{
					"lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_sfia_CO.paa",
					"lxws\vehicles_f_lxws\data\Truck_02\zamak_repair_africa_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
				};
				factions[] = {};
			};
		};
	};
	class Truck_02_medical_base_F: Truck_02_box_base_F
	{
        /* Liveries */
		class TextureSources
		{
			class Indep
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_INDP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_INDP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_INDP_CO.paa"
				};
				factions[] = {};
			};
			class Opfor
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_OPFOR_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
				};
				factions[] = {};
			};
			class GreenHex
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_ghex_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_ghex_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa"
				};
				factions[] = {};
			};
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] = {};
			};
			class SFIA
			{
				displayName = $STR_LXWS_FACTION_SFIA;
				textures[] =
				{
					"lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_sfia_CO.paa",
					"lxws\vehicles_f_lxws\data\Truck_02\truck_02_kuz_africa_brown_CO.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
				};
				factions[] = {};
			};
		};
	};
	class Truck_02_Ammo_base_F: Truck_02_base_F
	{
        /* Liveries */
		class TextureSources
		{
			class Indep
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_INDP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_repair_INDP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_INDP_CO.paa"
				};
				factions[] = {};
			};
			class Opfor
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_repair_OPFOR_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
				};
				factions[] = {};
			};
			class GreenHex
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_ghex_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_repair_ghex_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa"
				};
				factions[] = {};
			};
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_repair_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] = {};
			};
			class SFIA
			{
				displayName = $STR_LXWS_FACTION_SFIA;
				textures[] =
				{
					"lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_sfia_CO.paa",
					"lxws\vehicles_f_lxws\data\Truck_02\zamak_repair_africa_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
				};
				factions[] = {};
			};
		};
	};
	class Truck_02_fuel_base_F: Truck_02_base_F
	{
        /* Liveries */
		class TextureSources
		{
			class Indep
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_INDP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_fuel_INDP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_INDP_CO.paa"
				};
				factions[] = {};
			};
			class Opfor
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_fuel_OPFOR_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
				};
				factions[] = {};
			};
			class Orange
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_fuel_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
			};
			class Blue
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_blue_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_fuel_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
			};
			class GreenHex
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_ghex_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_fuel_ghex_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa"
				};
				factions[] = {};
			};
			class IDAP
			{
				textures[] =
				{
					"\A3\Soft_F_Orange\Truck_02\Data\Truck_02_kab_IDAP_CO.paa",
					"\A3\Soft_F_Orange\Truck_02\Data\Truck_02_water_IDAP_CO.paa",
					"\A3\Soft_F_Orange\Truck_02\Data\Truck_02_int_IDAP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
			};
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_fuel_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] = {};
			};
			class SFIA
			{
				displayName = $STR_LXWS_FACTION_SFIA;
				textures[] =
				{
					"lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_sfia_CO.paa",
					"lxws\vehicles_f_lxws\data\Truck_02\truck_02_fuel_sfia_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
				};
				factions[] = {};
			};
		};
	};
	class Truck_02_MRL_base_F: Truck_02_base_F
	{
		hiddenSelections[] =
		{
			camo1,
			camo2,
			camo3,
			camo4
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_INDP_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
			"\A3\Soft_F_Gamma\Truck_02\Data\Truck_02_MRL_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_INDP_CO.paa"
		};

        /* Liveries */
		class TextureSources
		{
			class Indep
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_INDP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Gamma\Truck_02\Data\Truck_02_MRL_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_INDP_CO.paa"
				};
                factions[] = {};
			};
			class Opfor
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Gamma\Truck_02\Data\Truck_02_MRL_OPFOR_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
				};
                factions[] = {};
			};
			class GreenHex
			{
				displayName = $STR_A3_TEXTURESOURCES_GREENHEX0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_ghex_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_MRL_ghex_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa"
				};
                factions[] = {};
			};
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_MRL_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
                factions[] = {};
			};
			class SFIA
			{
				displayName = $STR_LXWS_FACTION_SFIA;
				textures[] =
				{
					"lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_sfia_CO.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"lxws\vehicles_f_lxws\data\Truck_02\zamak_mrl_brown_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
				};
				factions[] = {};
			};
		};
	};
	class Truck_02_water_base_F;
	class Truck_02_cargo_base_lxWS: Truck_02_Base_F
	{
      	hiddenSelections[] = {camo1, camo2, camo3, camo4, camo9};
		class TextureSources: TextureSources
		{
			class Indep
			{
				textures[] =
				{
					"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_indp_co.paa",
					"\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_indp_CO.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_INDP_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class Opfor
			{
				textures[] =
				{
					"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_opfor_co.paa",
					"\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_opfor_CO.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class GreenHex
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_ghex_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_cargo_ghex_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class SFIA
			{
				textures[] =
				{
					"lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_sfia_CO.paa",
					"\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_olive_CO.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class Brown
			{
				textures[] =
				{
					"lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_brown_CO.paa",
					"\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_black_CO.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class IDAP
			{
				textures[] =
				{
					"\A3\soft_f_orange\Truck_02\Data\Truck_02_kab_IDAP_co.paa",
					"\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_idap_CO.paa",
					"\A3\soft_f_orange\Truck_02\Data\Truck_02_int_IDAP_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_white_co.paa"
				};
				factions[] = {};
			};
			class Orange
			{
				textures[] =
				{
					"\a3\soft_f_beta\Truck_02\data\truck_02_kab_co.paa",
					"\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_black_CO.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class Blue
			{
				textures[] =
				{
					"\a3\soft_f_beta\Truck_02\data\truck_02_kab_blue_CO.paa",
					"\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_yellow_CO.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class Black
			{
				textures[] =
				{
					"\lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_black_CO.paa",
					"\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_black_CO.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class Daltgreen
			{
				textures[] =
				{
					"\lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_daltgreen_CO.paa",
					"\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_olive_CO.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class Green
			{
				textures[] =
				{
					"\lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_lime_CO.paa",
					"\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_olive_CO.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class Yellow
			{
				textures[] =
				{
					"\lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_yellow_CO.paa",
					"\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_yellow_CO.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class Sand
			{
				textures[] =
				{
					"\lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_sand_CO.paa",
					"\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_olive_CO.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class EAF
			{
				textures[] =
				{
					"\A3\soft_f_Enoch\Truck_02\Data\Truck_02_kab_EAF_co.paa",
					"\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_EAF_CO.paa",
					"\A3\soft_f_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
					"\A3\soft_f_Enoch\Truck_02\Data\Truck_02_chassis_EAF_co.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class RUS
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_cargo_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
		};
	};
	class Truck_02_box_base_lxWS: Truck_02_Base_F
	{
      	hiddenSelections[] = {camo1, camo2, camo3, camo4, camo9};
		class TextureSources: TextureSources
		{
			class Indep
			{
				textures[] =
				{
					"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_indp_co.paa",
					"\A3\soft_f_beta\Truck_02\Data\Truck_02_repair_indp_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_INDP_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class Opfor
			{
				textures[] =
				{
					"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_opfor_co.paa",
					"\A3\soft_f_beta\Truck_02\Data\Truck_02_repair_opfor_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class GreenHex
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_ghex_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_repair_ghex_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class SFIA
			{
				textures[] =
				{
					"lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_sfia_CO.paa",
					"lxws\vehicles_f_lxws\data\Truck_02\zamak_repair_africa_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class Brown
			{
				textures[] =
				{
					"lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_brown_CO.paa",
					"lxws\vehicles_f_lxws\data\Truck_02\zamak_repair_brown_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class OrangeOrange
			{
				textures[] =
				{
					"\a3\soft_f_beta\Truck_02\data\truck_02_kab_co.paa",
					"\a3\soft_f_beta\Truck_02\data\truck_02_repair_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class OrangeGreen
			{
				textures[] =
				{
					"\a3\soft_f_beta\Truck_02\data\truck_02_kab_co.paa",
					"\a3\soft_f_beta\Truck_02\data\truck_02_repair_green_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class BlueOrange
			{
				textures[] =
				{
					"\a3\soft_f_beta\Truck_02\data\truck_02_kab_blue_co.paa",
					"\a3\soft_f_beta\Truck_02\data\truck_02_repair_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class BlueGreen
			{
				textures[] =
				{
					"\a3\soft_f_beta\Truck_02\data\truck_02_kab_blue_co.paa",
					"\a3\soft_f_beta\Truck_02\data\truck_02_repair_green_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class IDAP
			{
				textures[] =
				{
					"\A3\soft_f_orange\Truck_02\Data\Truck_02_kab_IDAP_co.paa",
					"lxws\vehicles_f_lxws\data\Truck_02\zamak_repair_idap_co.paa",
					"\A3\soft_f_orange\Truck_02\Data\Truck_02_int_IDAP_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_white_co.paa"
				};
				factions[] = {};
			};
			class Daltgreen
			{
				textures[] =
				{
					"\lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_daltgreen_CO.paa",
					"\lxws\vehicles_f_lxws\data\Truck_02\Truck_02_repair_daltgreen_CO.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class EAF
			{
				textures[] =
				{
					"\A3\soft_f_Enoch\Truck_02\Data\Truck_02_kab_EAF_co.paa",
					"\A3\soft_f_Enoch\Truck_02\Data\Truck_02_repair_EAF_co.paa",
					"\A3\soft_f_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
					"\A3\soft_f_Enoch\Truck_02\Data\Truck_02_chassis_EAF_co.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class RUS
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_repair_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
		};
	};
	class Truck_02_Ammo_base_lxWS: Truck_02_Base_F
	{
      	hiddenSelections[] = {camo1, camo2, camo3, camo4, camo9};
		class TextureSources: TextureSources
		{
			class Indep
			{
				textures[] =
				{
					"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_indp_co.paa",
					"\A3\soft_f_beta\Truck_02\Data\Truck_02_repair_indp_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_INDP_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class Opfor
			{
				textures[] =
				{
					"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_opfor_co.paa",
					"\A3\soft_f_beta\Truck_02\Data\Truck_02_repair_OPFOR_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class GreenHex
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_ghex_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_repair_ghex_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class SFIA
			{
				textures[] =
				{
					"lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_sfia_CO.paa",
					"lxws\vehicles_f_lxws\data\Truck_02\zamak_repair_africa_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa",
               		"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class EAF
			{
				textures[] =
				{
					"\A3\soft_f_Enoch\Truck_02\Data\Truck_02_kab_EAF_co.paa",
					"\A3\soft_f_Enoch\Truck_02\Data\Truck_02_repair_EAF_co.paa",
					"\A3\soft_f_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa",
					"\A3\soft_f_Enoch\Truck_02\Data\Truck_02_chassis_EAF_co.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class RUS
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_repair_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
		};
	};
	class Truck_02_flatbed_base_lxWS: Truck_02_cargo_base_lxWS{};
	class Truck_02_aa_base_lxWS: Truck_02_Base_F
	{
		hiddenSelections[] = {camo1, camo2, camo3, camo4, camo5, camo6, camo7, camo8, camo9};
		hiddenSelectionsTextures[] = 
		{
			"lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_sfia_CO.paa",
			"\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_olive_CO.paa",
			"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa",
			"lxws\vehicles_f_lxws\zu23\data\zu23_base_sfia_co.paa",
			"lxws\vehicles_f_lxws\zu23\data\zu23_sfia_co.paa",
			"lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_sfia_co.paa",
			"lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_sfia_co.paa"
		};
		class TextureSources
		{
			class Indep
			{
				textures[] =
				{
					"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_indp_co.paa",
					"\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_indp_CO.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_INDP_CO.paa",
					"lxws\vehicles_f_lxws\zu23\data\zu23_base_green_co.paa",
					"lxws\vehicles_f_lxws\zu23\data\zu23_green_co.paa",
					"lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_green_co.paa",
					"lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_green_co.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class Opfor
			{
				textures[] =
				{
					"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_opfor_co.paa",
					"\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_opfor_CO.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa",
					"lxws\vehicles_f_lxws\zu23\data\zu23_base_green_co.paa",
					"lxws\vehicles_f_lxws\zu23\data\zu23_green_co.paa",
					"lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_green_co.paa",
					"lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_green_co.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class GreenHex
			{
				displayName = $STR_A3_TEXTURESOURCES_GREENHEX0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_ghex_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_cargo_ghex_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa",
					"lxws\vehicles_f_lxws\zu23\data\zu23_base_green_co.paa",
					"lxws\vehicles_f_lxws\zu23\data\zu23_green_co.paa",
					"lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_green_co.paa",
					"lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_green_co.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class SFIA
			{
				textures[] =
				{
					"lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_sfia_CO.paa",
					"\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_olive_CO.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa",
					"lxws\vehicles_f_lxws\zu23\data\zu23_base_sfia_co.paa",
					"lxws\vehicles_f_lxws\zu23\data\zu23_sfia_co.paa",
					"lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_sfia_co.paa",
					"lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_sfia_co.paa",
					"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class Brown
			{
				textures[] = 
				{
               		"lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_brown_CO.paa",
					"\lxws\vehicles_f_lxws\Truck_02\data\truck_02_cargo_olive_CO.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa",
					"lxws\vehicles_f_lxws\zu23\data\zu23_base_green_co.paa",
					"lxws\vehicles_f_lxws\zu23\data\zu23_green_co.paa",
					"lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_green_co.paa",
					"lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_green_co.paa",
               		"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
			class RUS
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_cargo_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa",
					"lxws\vehicles_f_lxws\zu23\data\zu23_base_green_co.paa",
					"lxws\vehicles_f_lxws\zu23\data\zu23_green_co.paa",
					"lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_green_co.paa",
					"lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_green_co.paa",
               		"lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
				};
				factions[] = {};
			};
		};
	};

    /* Factions */
    #include "cfgOPFOR.hpp" // IAF & China
    #include "cfgIndep.hpp" // AAF
    #include "cfgCivil.hpp" // Civilians
    #include "cfgIDAP.hpp"  // IDAP
    #include "cfgRUS.hpp"   // Russia
	
    #include "ION.h"
    #include "SFIA.h"
	#include "cargo_and_flatbed.h"
};