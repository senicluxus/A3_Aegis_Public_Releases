#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	class MBT_04_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics{};
				};
			};
		};
		class TextureSources
		{
			class Jungle
			{
				factions[] = {Atlas_BLU_H_F};
			};
		};
	};
	class MBT_04_cannon_base_F: MBT_04_base_F{};
	class MBT_04_command_base_F: MBT_04_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics{};
				};
			};
		};
	};
	// Arma 3 Atlas
	#include "cfgHIMF.hpp"              // HIMF
    // Deprecated classes
    #include "deprecated.hpp"
};