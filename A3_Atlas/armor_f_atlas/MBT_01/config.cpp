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
	class MBT_01_base_F: Tank_F
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
	class B_MBT_01_base_F: MBT_01_base_F{};
	class B_MBT_01_cannon_F: B_MBT_01_base_F{};
	class MBT_01_arty_base_F: MBT_01_base_F
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
	class B_MBT_01_arty_base_F: MBT_01_arty_base_F{};
	class B_MBT_01_arty_F: B_MBT_01_arty_base_F{};
	class B_MBT_01_TUSK_F;
	// Arma 3 Atlas
	#include "cfgIDF.hpp"               // IDF
    // Deprecated classes
    #include "deprecated.hpp"
};