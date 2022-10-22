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
	class MRAP_03_base_F: Car_F
	{
		class Turrets: Turrets
		{
			class CommanderTurret: MainTurret{};
		};

        /* Lights */
		class Reflectors
		{
			class Left
			{
				useFlare = true;
			};
		};

        /* Liveries */
		class TextureSources
		{
			class Blufor
			{
				factions[] = {};
			};
			class Olive
			{
				displayName = $STR_A3_TextureSources_Olive0;
				author = $STR_A3_A_AveryTheKitty;
				textures[]=
				{
					"\A3_Aegis\Soft_F_Aegis\MRAP_03\Data\MRAP_03_ext_olive_CO.paa",
					"\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa"
				};
				factions[] = {};
			};
		};
	};
	class MRAP_03_hmg_base_F: MRAP_03_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
			class CommanderTurret: CommanderTurret{};
		};
	};
	class MRAP_03_gmg_base_F: MRAP_03_hmg_base_F
	{
        /* Turrets */
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
                /* Weapons & Ammunition */
				magazines[] = {mag_2(64Rnd_40mm_G_belt)};
			};
			class CommanderTurret: CommanderTurret{};
		};
	};

    /* Factions */
	class I_MRAP_03_F;
    class I_MRAP_03_hmg_F: MRAP_03_hmg_base_F{};
    class I_MRAP_03_gmg_F;
    #include "cfgBLUFOR.hpp"    // BAF

    /* Deprecated */
    #include "deprecated.hpp"
};