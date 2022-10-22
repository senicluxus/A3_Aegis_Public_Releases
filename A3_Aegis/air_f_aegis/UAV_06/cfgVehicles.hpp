class CfgVehicles
{
    /* Inheritance Tree */
	class Helicopter_Base_F;
    class Weapon_Bag_Base;

    /* Bases */
	class UAV_06_base_F: Helicopter_Base_F
	{
        /* Liveries */
		class TextureSources
		{
			class Opfor;
			class Blufor;
			class ION
			{
				displayName = $STR_A3_A_TextureSources_ION0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Aegis\Air_F_Aegis\UAV_06\Data\B_ION_UAV_06_CO.paa"};
				factions[] = {};
			};
			class Rus
			{
				displayName = $STR_A3_A_TextureSources_Rus0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Aegis\Air_F_Aegis\UAV_06\Data\O_R_UAV_06_CO.paa"};
				factions[] = {};
			};
		};
	};
	class UAV_06_medical_base_F: UAV_06_base_F
	{
        /* Liveries */
		class TextureSources
		{
			class Blufor;
			class Opfor;
			class ION
			{
				displayName = $STR_A3_A_TextureSources_ION0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\UAV_06\Data\B_ION_UAV_06_medical_CO.paa",
					"\A3_Aegis\Air_F_Aegis\UAV_06\Data\B_ION_UAV_06_medical_CO.paa"
				};
				factions[] = {};
			};
			class Rus
			{
				displayName = $STR_A3_A_TextureSources_Rus0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\UAV_06\Data\O_R_UAV_06_medical_CO.paa",
					"\A3_Aegis\Air_F_Aegis\UAV_06\Data\O_R_UAV_06_medical_CO.paa"
				};
				factions[] = {};
			};
		};
	};
	class Box_UAV_06_base_F;
	class Box_UAV_06_medical_base_F;
	class UAV_06_backpack_base_F: Weapon_Bag_Base
	{
		class assembleInfo;
	};
	class UAV_06_medical_backpack_base_F: UAV_06_backpack_base_F{};

	/* Factions */
	class C_IDAP_UAV_06_medical_backpack_F: UAV_06_medical_backpack_base_F
	{
		displayName = $STR_A3_A_CfgVehicles_C_IDAP_UAV_06_medical_backpack_F0;
	};
    #include "cfgBLUFOR.hpp"    // US & BAF
    #include "cfgOPFOR.hpp"     // China
    #include "cfgRUS.hpp"       // Russia
    #include "cfgION.hpp"       // ION
	#include "cfgRaven.hpp"		// Raven
};