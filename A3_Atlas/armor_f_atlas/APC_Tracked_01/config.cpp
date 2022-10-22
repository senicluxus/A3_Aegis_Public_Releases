#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class CommanderOptics;
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
	class APC_Tracked_01_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
			class CommanderOptics: CommanderOptics{};
		};
	};
	class B_APC_Tracked_01_base_F: APC_Tracked_01_base_F{};
	class B_APC_Tracked_01_rcws_F: B_APC_Tracked_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class MainTurret: MainTurret{};
				class CommanderOptics: CommanderOptics{};
			};
		};
	};
	class B_APC_Tracked_01_CRV_F: B_APC_Tracked_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
			class CommanderOptics: CommanderOptics{};
		};
	};
	class B_APC_Tracked_01_AA_F: B_APC_Tracked_01_base_F
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
	#include "cfgIDF.hpp"               // IDF
    // Deprecated classes
    #include "deprecated.hpp"
};