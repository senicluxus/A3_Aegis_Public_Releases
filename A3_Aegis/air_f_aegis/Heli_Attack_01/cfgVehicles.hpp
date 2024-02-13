class CfgVehicles
{
    /* Inheritance Tree */
    class Helicopter;
	class Helicopter_Base_F: Helicopter
    {
        class Components;
    };

    /* Bases */
	class Heli_Attack_01_base_F: Helicopter_Base_F
	{
        /* Sensors & Components
        - Let's equip the AH-99 Blackfoot with a datalink so it can transmit targets to friendly forces
        */
		reportRemoteTargets = true;
		receiveRemoteTargets = true;
		reportOwnPosition = true;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
                        /*
                        - Let's buff the AH-99 Blackfoot's radar to 8 km for air targets, and 7 km for ground targets
                        - Source: https://en.wikipedia.org/wiki/Boeing%E2%80%93Sikorsky_RAH-66_Comanche#Specifications_(RAH-66A)
                        */
						class AirTarget
						{
							minRange = 8000;
							maxRange = 8000;
						};
						class GroundTarget
						{
							minRange = 7000;
							maxRange = 7000;
						};
                    };
                };
            };
        };

        /* Liveries */
		class TextureSources
		{
			class Green
			{
				displayName = $STR_A3_TextureSources_Green0;
				author = $STR_A3_BohemiaInteractive;
				textures[] = {"\A3\Air_F_Beta\Heli_Attack_01\Data\Heli_Attack_01_CO.paa"};
				factions[] = {};
			};
			class Black
			{
				displayName = $STR_A3_TextureSources_Black0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Attack_01\Data\Heli_Attack_01_black_CO.paa"};
				factions[] = {};
			};
			class BAF
			{
				displayName = $STR_A3_A_TextureSources_BAF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Attack_01\Data\Heli_Attack_01_BAF_CO.paa"};
				factions[] = {};
			};
			class Grey
			{
				displayName = $STR_A3_TextureSources_Grey0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Attack_01\Data\Heli_Attack_01_grey_CO.paa"};
				factions[] = {};
			};
			class Sand
			{
				displayName = $STR_A3_TEXTURESOURCES_SAND0;
				author = $STR_A3_A_Ravenholme;
				textures[] = {"\lxWS\air_f_lxWS\Data\NATO\lxWS_Heli_Attack_01_sand_CO.paa"};
				factions[] = {};
			};
		};
		textureList[] =
		{
			Green,1,
			Black,0
		};
	};

    /* Factions */
    #include "cfgBLUFOR.hpp"    // US & BAF
};