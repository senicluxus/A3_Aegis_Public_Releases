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
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
	};

    /* Bases */
	class Offroad_01_base_F: Car_F
	{
		class EventHandlers;
	};
	class Offroad_01_civil_base_F: Offroad_01_base_F
	{
        /* Liveries */
		class TextureSources
		{
			class Black
			{
				displayName = $STR_A3_TextureSources_Black0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Soft_F_Enoch\Offroad_01\Data\Offroad_01_ext_blk_CO.paa",
					"\A3\Soft_F_Enoch\Offroad_01\Data\Offroad_01_ext_blk_CO.paa"
				};
				factions[] = {};
			};
		};
		textureList[] =
		{
			Red,1,
			Beige,1,
			White,1,
			Blue,1,
			Darkred,1,
			Bluecustom,1,
			Black,1
		};
	};
	class Offroad_01_repair_base_F;
	class Offroad_01_repair_military_base_F: Offroad_01_repair_base_F
	{
        /* Liveries */
		class TextureSources
		{
			class Guerrilla_01
			{
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				factions[] = {};
			};
			class Guerrilla_02
			{
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				factions[] = {};
			};
			class Guerrilla_03
			{
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				factions[] = {};
			};
			class Guerrilla_04
			{
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				factions[] = {};
			};
			class Guerrilla_05
			{
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				factions[] = {};
			};
			class Guerrilla_06
			{
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				factions[] = {};
			};
			class Guerrilla_07
			{
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				factions[] = {};
			};
			class Guerrilla_08
			{
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				factions[] = {};
			};
			class Guerrilla_09
			{
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				factions[] = {};
			};
			class Guerrilla_10
			{
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				factions[] = {};
			};
			class Guerrilla_11
			{
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				factions[] = {};
			};
			class Guerrilla_12
			{
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				factions[] = {};
			};
			class Guerrilla_13
			{
				displayName = "Guerrilla 13";
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Soft_F_Gamma\Offroad_01\Data\Offroad_01_ext_IG01_CO.paa",
					"\A3\Soft_F_Gamma\Offroad_01\Data\Offroad_01_ext_IG01_CO.paa"
				};
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				factions[] = {};
			};
		};
		textureList[] =
		{
			Guerilla_01,1,
			Guerilla_02,1,
			Guerilla_03,1,
			Guerilla_04,1,
			Guerilla_05,1,
			Guerilla_06,1,
			Guerilla_07,1,
			Guerilla_08,1,
			Guerilla_09,1,
			Guerilla_10,1,
			Guerilla_11,1,
			Guerilla_12,1,
			Guerilla_13,1
		};
	};
	class Offroad_01_military_base_F: Offroad_01_base_F
	{
		class AnimationSources;

        /* Liveries */
		class TextureSources
		{
			class Guerrilla_01
			{
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				factions[] = {};
			};
			class Guerrilla_02
			{
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				factions[] = {};
			};
			class Guerrilla_03
			{
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				factions[] = {};
			};
			class Guerrilla_04
			{
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				factions[] = {};
			};
			class Guerrilla_05
			{
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				factions[] = {};
			};
			class Guerrilla_06
			{
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				factions[] = {};
			};
			class Guerrilla_07
			{
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				factions[] = {};
			};
			class Guerrilla_08
			{
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				factions[] = {};
			};
			class Guerrilla_09
			{
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				factions[] = {};
			};
			class Guerrilla_10
			{
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				factions[] = {};
			};
			class Guerrilla_11
			{
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				factions[] = {};
			};
			class Guerrilla_12
			{
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				factions[] = {};
			};
			class Guerrilla_13
			{
				displayName = "Guerrilla 13";
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Soft_F_Gamma\Offroad_01\Data\Offroad_01_ext_IG01_CO.paa",
					"\A3\Soft_F_Gamma\Offroad_01\Data\Offroad_01_ext_IG01_CO.paa"
				};
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				factions[] = {};
			};
			class Brown
			{
				displayName = $STR_A3_TEXTURESOURCES_BROWN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_brn_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_brn_CO.paa"
				};
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				factions[] = {};
			};
			class Olive
			{
				displayName = $STR_A3_TEXTURESOURCES_OLIVE0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_oli_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_oli_CO.paa"
				};
				materials[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Offroad_01\Data\Offroad_01_ext_IG.rvmat",
					"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"
				};
				factions[] = {};
			};
		};
		textureList[] =
		{
			Guerilla_01,1,
			Guerilla_02,1,
			Guerilla_03,1,
			Guerilla_04,1,
			Guerilla_05,1,
			Guerilla_06,1,
			Guerilla_07,1,
			Guerilla_08,1,
			Guerilla_09,1,
			Guerilla_10,1,
			Guerilla_11,1,
			Guerilla_12,1,
			Guerilla_13,1
		};
	};
	class Offroad_01_armed_base_F: Offroad_01_military_base_F
	{
        /* Turrets */
		class Turrets: Turrets
		{
			class M2_Turret: MainTurret
			{
                /* Weapons & Ammunition */
				magazines[] = {mag_3(100Rnd_127x99_mag_Tracer_Yellow)};
			};
		};

        /* Animation Sources */
		class AnimationSources: AnimationSources
		{
			class Hide_Shield
			{
				initPhase = false;
			};
			class Hide_Rail;
		};
	};
	class Offroad_01_AT_base_F: Offroad_01_military_base_F
	{
        /* Turrets */
		class Turrets: Turrets
		{
			class AT_Turret: MainTurret
			{ 
                /* Weapons & Ammunition */
				magazines[] =
                {
                    mag_12(SPG9_HEAT),
                    mag_8(SPG9_HE)
                };
            };
		};
	};
	class Offroad_01_military_covered_base_F: Offroad_01_military_base_F
	{
		/* Liveries */
		class TextureSources
		{
			class Black
			{
				factions[] = {};
			};
		};
		class EventHandlers;
	};
	class Offroad_01_military_comms_base_F: Offroad_01_military_covered_base_F{};

    /* Factions */
	class I_G_Offroad_01_F: Offroad_01_military_base_F{};
	class I_G_Offroad_01_AT_F: Offroad_01_AT_base_F{};
	class I_G_Offroad_01_armed_F: Offroad_01_armed_base_F{};
	class B_G_Offroad_01_F: I_G_Offroad_01_F{};
    #include "cfgSyndikat.hpp"  // Syndikat
    #include "cfgEAF.hpp"       // LDF
    #include "cfgION.hpp"       // ION
};