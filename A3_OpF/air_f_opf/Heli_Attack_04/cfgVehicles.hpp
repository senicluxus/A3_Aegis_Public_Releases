class CfgVehicles
{
    // Arma 3
	class Helicopter_Base_F;
	class Heli_Attack_02_Base_F: Helicopter_Base_F
	{
		class Components;
		class Turrets;
	};
	// Arma 3 Aegis
	class Aegis_Heli_Attack_04_base_F: Heli_Attack_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				class Pylons
				{
					class PylonLeft1;
					class PylonLeft2;
					class PylonLeft3;
					class PylonRight1;
					class PylonRight2;
					class PylonRight3;
				};
				class Presets
				{
					class Empty;
					class Default;
					class AT;
					class HAT;
					class CAS;
				};
			};
		};
		class TextureSources
		{
			class Sep_01
			{
				displayName = $STR_A3_O_TEXTURESOURCES_SEPARATIST_010;
				author = $STR_A3_A_Ravenholme;
				textures[] = 
				{
					"\A3_Opf\air_f_Opf\Heli_Attack_04\Data\Heli_Attack_04_ext_01_CHKDZ_CO.paa",
					"\A3_Opf\air_f_Opf\Heli_Attack_04\Data\Heli_Attack_04_ext_02_CHKDZ_CO.paa",
					"\A3_Aegis\air_f_Aegis\Heli_Attack_04\Data\Skins\Heli_Attack_04_ext_03_grn_CO.paa"
				};
				faction[] = {};
			};
		};
	};

	/* Factions */
	#include "cfgChKDZ.hpp"		// Separatists
};