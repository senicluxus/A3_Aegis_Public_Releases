class CfgVehicles
{
	/* Inheritance Tree */
	class Ship_F;
	class Boat_F: Ship_F
	{
		class NewTurret;
		class Turrets;
	};

    /* Bases */
	class Boat_Armed_01_base_F: Boat_F
	{
        /* Turrets */
		class Turrets: Turrets
		{
			class FrontTurret: NewTurret
			{
                /* Weapons & Ammunition */
				magazines[] = {mag_2(64Rnd_40mm_G_belt)};
			};
			class RearTurret: FrontTurret
			{
                /* Weapons & Ammunition */
				weapons[] = {HMG_static};
				magazines[] = {mag_3(100Rnd_127x99_mag_Tracer_Red)};

                /* Optics */
				gunnerOpticsModel = "\A3\Weapons_F_Gamma\Reticle\HMG_01_Optics_Gunner_F.p3d";
			};
		};

        /* Liveries */
		class TextureSources
		{
			class Blu
			{
				factions[] = {};
			};
			class Opfor
			{
				factions[] = {};
			};
			class Rus
			{
				displayName = $STR_A3_A_TextureSources_Rus0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Boat_F_Aegis\Boat_Armed_01\Data\Boat_Armed_01_ext_RUgrey_CO.paa",
					"\A3_Aegis\Boat_F_Aegis\Boat_Armed_01\Data\Boat_Armed_01_int_RUgrey_CO.paa",
					"\A3_Aegis\Boat_F_Aegis\Boat_Armed_01\Data\Boat_Armed_01_crows_RUgrey_CO.paa"
				};
				factions[] = {};
			};
		};
	};
	class Boat_Armed_01_minigun_base_F: Boat_Armed_01_base_F
	{
        /* Turrets */
		class Turrets: Turrets
		{
			class FrontTurret: FrontTurret{};
			class RearTurret: RearTurret
			{
                /* Weapons & Ammunition */
				magazines[] = {mag_2(1000Rnd_762x51_Belt_T_Red)};
			};
		};
	};

    /* Factions */
    #include "cfgBLUFOR.hpp"    // US
	class O_Boat_Armed_01_hmg_F: Boat_Armed_01_base_F
	{
        /* Turrets */
        class Turrets: Turrets
		{
			class FrontTurret: FrontTurret{};
			class RearTurret: RearTurret
			{
                /* Weapons & Ammunition */
				magazines[] = {mag_3(100Rnd_127x99_mag_Tracer_Green)};
			};
		};
	};
	class I_Boat_Armed_01_minigun_F: Boat_Armed_01_minigun_base_F
	{
        /* Turrets */
        class Turrets: Turrets
		{
			class FrontTurret: FrontTurret{};
			class RearTurret: RearTurret
			{
                /* Weapons & Ammunition */
				magazines[] = {mag_2(1000Rnd_762x51_Belt_T_Yellow)};
			};
		};
	};
    #include "cfgRUS.hpp"       // Russia
};