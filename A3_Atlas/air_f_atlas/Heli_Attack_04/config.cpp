#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
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
			class UNO
			{
				displayName = $STR_A3_A_TEXTURESOURCES_UNO0;
				author = $STR_A3_A_Ravenholme;
				textures[] = 
				{
					"\A3_Atlas\Air_F_Atlas\Heli_Attack_04\Data\Heli_Attack_04_ext_01_UN_CO.paa",
					"\A3_Atlas\Air_F_Atlas\Heli_Attack_04\Data\Heli_Attack_04_ext_02_UN_CO.paa",
					"\A3_Atlas\Air_F_Atlas\Heli_Attack_04\Data\Heli_Attack_04_ext_03_UN_CO.paa"
				};
				faction[] = {};
			};
			class WoodlandHex
			{
				displayName = $STR_A3_A_TEXTURESOURCES_WHEX0;
				author = $STR_A3_A_Ravenholme;
				textures[] = 
				{
					"\A3_Atlas\Air_F_Atlas\Heli_Attack_04\Data\Heli_Attack_04_ext_01_WHEX_CO.paa",
					"\A3_Atlas\Air_F_Atlas\Heli_Attack_04\Data\Heli_Attack_04_ext_02_WHEX_CO.paa",
					"\A3_Atlas\Air_F_Atlas\Heli_Attack_04\Data\Heli_Attack_04_ext_03_WHEX_CO.paa"
				};
				faction[] = {};
			};
			class Takistan
			{
				displayName = $STR_A3_A_TEXTURESOURCES_TKHEX0;
				author = $STR_A3_A_Ravenholme;
				textures[] = 
				{
					"\A3_Atlas\Air_F_Atlas\Heli_Attack_04\Data\Heli_Attack_04_ext_01_TK_CO.paa",
					"\A3_Atlas\Air_F_Atlas\Heli_Attack_04\Data\Heli_Attack_04_ext_02_TK_CO.paa",
					"\A3_Atlas\Air_F_Atlas\Heli_Attack_04\Data\Heli_Attack_04_ext_03_TK_CO.paa"
				};
				faction[] = {};
			};
			class Ardistan
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ardi0;
				author = $STR_A3_A_BranFlakes;
				textures[] = 
				{
					"\A3_Atlas\Air_F_Atlas\Heli_Attack_04\Data\Heli_Attack_04_ext_01_ardi_CO.paa",
					"\A3_Atlas\Air_F_Atlas\Heli_Attack_04\Data\Heli_Attack_04_ext_02_ardi_CO.paa",
					"\A3_Atlas\Air_F_Atlas\Heli_Attack_04\Data\Heli_Attack_04_ext_03_ardi_CO.paa"
				};
				faction[] = {};
			};
		};
	};
	
	// Arma 3 Atlas
	#include "cfgOpfor_Aegis.hpp"       // Belarus
	#include "cfgOpfor_Atlas.hpp"       // Takistani Army
	#include "cfgUNO.hpp"				// CDF UNO
	#include "cfgArdistan.hpp"			//Ardistan
};