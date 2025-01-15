class CfgVehicles
{
	/* Inheritance Tree */
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
	};
	
    /* Bases */
    class UGV_01_base_F: Car_F
	{
        /* Liveries */
		class TextureSources
		{
			class Indep
            {
				factions[] = {};
            };
			class Opfor
            {
				factions[] = {};
            };
			class Blufor
            {
				factions[] = {};
            };
			class GreenHex
            {
				factions[] = {};
            };
			class Olive
            {
				factions[] = {};
            };
			class EAF
            {
				factions[] = {};
            };
			class Green
			{
				displayName = $STR_A3_TextureSources_Green0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_RUkhk_CO.paa"
				};
				factions[] = {};
			};
			class Ion
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ION_lxWS0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_ION_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_int_ION_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_ION_CO.paa"
				};
				factions[] = {};
			};
			class Black
			{
				displayName = $STR_A3_TextureSources_BLACK0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_Black_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_int_ION_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_ION_CO.paa"
				};
				factions[] = {};
			};
			class Syndikat
			{
				displayName = $STR_A3_cfgfactionclasses_ind_c_f0;
				author = "Lexx";
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_syn_CO.paa",
					"\A3\Soft_F_Exp\UGV_01\Data\UGV_01_int_ghex_CO.paa",
					"\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"
				};
				factions[] = {};
			};
			class EAF_Arid
			{
				displayName = $STR_A3_A_CfgFactionClasses_IND_E_ard_F0;
				author = $STR_A3_A_Grave;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_EAF_Arid_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_int_EAF_Arid_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\Turret_EAF_Arid_CO.paa"
				};
				factions[] = {};
			};
		};
	};
	class UGV_01_rcws_base_F: UGV_01_base_F
	{
        /* Turrets */
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
                /* Weapons & Ammunition */
				magazines[] =
				{
					mag_2(200Rnd_127x99_mag_Tracer_Red),
					mag_2(64Rnd_40mm_G_belt)
				};

                /* Optics */
				class ViewOptics: RCWSOptics
				{
					directionStabilized = false;
				};
			};
			class CargoTurret_01;
		};
	};
	class UGV_01_medical_base_F: UGV_01_base_F
	{
		displayName = $STR_A3_A_CfgVehicles_UGV_01_medical_base_F0;
		picture = "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UI\UGV_01_medical_CA.paa";
		icon = "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UI\map_UGV_01_medical_CA.paa";
		attendant = true;

        /* Inventory */
		class TransportItems
		{
			item_xx(MediKit,2);
			item_xx(FirstAidKit,10);
		};

        /* Liveries */
		class TextureSources: TextureSources
		{
			class Indep: Indep
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_medevac_INDP_CO.paa",
					"\A3\Drones_F\Soft_F_Gamma\UGV_01\Data\UGV_01_int_INDP_CO.paa",
					"\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
				};
			};
			class Opfor: Opfor
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_medevac_OPFOR_CO.paa",
					"\A3\Drones_F\Soft_F_Gamma\UGV_01\Data\UGV_01_int_OPFOR_CO.paa",
					"\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
				};
			};
			class Blufor: Blufor
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_medevac_CO.paa",
					"\A3\Drones_F\Soft_F_Gamma\UGV_01\Data\UGV_01_int_CO.paa",
					"\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
				};
			};
			class GreenHex: GreenHex
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_medevac_ghex_CO.paa",
					"\A3\Soft_F_Exp\UGV_01\Data\UGV_01_int_ghex_CO.paa",
					"\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
				};
			};
			class Olive: Olive
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_medevac_olive_CO.paa",
					"\A3\Soft_F_Exp\UGV_01\Data\UGV_01_int_olive_CO.paa",
					"\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
				};
			};
			class EAF: EAF
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_medevac_EAF_CO.paa",
					"\A3\Soft_F_Enoch\UGV_01\Data\UGV_01_int_EAF_CO.paa",
					"\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
				};
			};
			class EAF_Arid: EAF_Arid
			{
				displayName = $STR_A3_A_CfgFactionClasses_IND_E_ard_F0;
				author = $STR_A3_A_Grave;
				textures[] =
				{
        			"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_EAF_Medevac_Arid_CO.paa",
        			"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_int_EAF_Arid_CO.paa",
        			"\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
    			};
				factions[] = {};
			};
			class Green: Green
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_medevac_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_int_RUkhk_CO.paa",
					"\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
				};
			};
			class Ion: Ion
			{
				displayName = $STR_A3_TextureSources_BLACK0;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_medevac_ION_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_int_ION_CO.paa",
					"\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
				};
			};
		};
	};

    /* Factions */
    #include "cfgBLUFOR.hpp"    // US & BAF
    #include "cfgOPFOR.hpp"     // IAF & China
    #include "cfgIndep.hpp"     // AAF
	class C_IDAP_UGV_01_F: UGV_01_base_F
	{
		displayName = $STR_A3_A_CfgVehicles_C_IDAP_UGV_01_F0;
		picture = "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UI\UGV_01_medical_CA.paa";
		icon = "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UI\map_UGV_01_medical_CA.paa";
		attendant = true;
	};
    #include "cfgRUS.hpp"       // Russia
    #include "cfgEAF.hpp"       // LDF
    #include "cfgION.hpp"       // ION
	#include "cfgSyndikat.hpp"	// Syndikat
};