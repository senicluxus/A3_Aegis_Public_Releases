class CfgVehicles
{
    /* Arma 3 Bases */
    class Boat_F;

    /* Expeditionary Forces Bases */
    class EF_CombatBoat_Base: Boat_F
    {
        class TextureSources
        {
            class Dazzle
			{
				factions[] = {};
			};
            class CSAT
			{
				factions[] = {};
			};
            class CTRG
			{
				factions[] = {};
			};
            class MJTF
			{
				factions[] = {};
			};
            class AAF
			{
				factions[] = {};
			};
            class Gendarmerie
			{
				factions[] = {};
			};
            class Spetsnaz
			{
				factions[] = {};
			};
            class CSAT_Hex
			{
                displayName = "CSAT (Hex)";
				author = "Tiny Gecko Studios";
				factions[] = {};
                textures[] = 
                {
                    "ef\ef_combatboat_t\data\combatboat_hull_1_CSAT_Hex_co.paa",
                    "ef\ef_combatboat_t\data\combatboat_hull_2_CSAT_Hex_co.paa",
                    "ef\ef_combatboat_t\data\combatboat_hull_3_CSAT_Hex_co.paa",
                    "ef\ef_combatboat_t\data\combatboat_armor_1_CSAT_Hex_co.paa",
                    "ef\ef_combatboat_t\data\combatboat_hmg_1_CSAT_Hex_co.paa",
                    "ef\ef_combatboat_t\data\combatboat_atgm_1_CSAT_Hex_co.paa"
                };
			};
        };
        class Turrets;
    };
	class EF_CombatBoat_Unarmed_Base: EF_CombatBoat_Base{};
	class EF_CombatBoat_HMG_Base: EF_CombatBoat_Base
    {
        class Turrets: Turrets
        {
            class MainTurret;
            class mg2_station;
            class mg3_station;
            class mg4_station;
            class mg5_station;
        };
    };
	class EF_CombatBoat_AT_Base: EF_CombatBoat_HMG_Base
    {
        class Turrets: Turrets
        {
            class MainTurret;
            class mg2_station;
            class mg3_station;
            class mg4_station;
            class mg5_station;
        };
    };

    class EF_CombatBoat_HMG_West_Base: EF_CombatBoat_HMG_Base
    {
        class Turrets: Turrets
        {
            class mg2_station: mg2_station
            {
                magazines[] = {"2000Rnd_762x51_Belt_T_Red", "2000Rnd_762x51_Belt_T_Red", "2000Rnd_762x51_Belt_T_Red"};
            };
            class mg3_station: mg3_station
            {
                magazines[] = {"2000Rnd_762x51_Belt_T_Red", "2000Rnd_762x51_Belt_T_Red", "2000Rnd_762x51_Belt_T_Red"};
            };
        };
    };
    class EF_CombatBoat_HMG_East_Base: EF_CombatBoat_HMG_Base
    {
        class Turrets: Turrets
        {
            class mg2_station: mg2_station
            {
                magazines[] = {"2000Rnd_762x51_Belt_T_Green", "2000Rnd_762x51_Belt_T_Green", "2000Rnd_762x51_Belt_T_Green"};
            };
            class mg3_station: mg3_station
            {
                magazines[] = {"2000Rnd_762x51_Belt_T_Green", "2000Rnd_762x51_Belt_T_Green", "2000Rnd_762x51_Belt_T_Green"};
            };
        };
    };
    class EF_CombatBoat_HMG_Indep_Base: EF_CombatBoat_HMG_Base
    {
        class Turrets: Turrets
        {
            class mg2_station: mg2_station
            {
                magazines[] = {"2000Rnd_762x51_Belt_T_Yellow", "2000Rnd_762x51_Belt_T_Yellow", "2000Rnd_762x51_Belt_T_Yellow"};
            };
            class mg3_station: mg3_station
            {
                magazines[] = {"2000Rnd_762x51_Belt_T_Yellow", "2000Rnd_762x51_Belt_T_Yellow", "2000Rnd_762x51_Belt_T_Yellow"};
            };
        };
    };

    class EF_CombatBoat_AT_West_Base: EF_CombatBoat_AT_Base
    {
        class Turrets: Turrets
        {
            class mg2_station: mg2_station
            {
                magazines[] = {"2000Rnd_762x51_Belt_T_Red", "2000Rnd_762x51_Belt_T_Red", "2000Rnd_762x51_Belt_T_Red"};
            };
            class mg3_station: mg3_station
            {
                magazines[] = {"2000Rnd_762x51_Belt_T_Red", "2000Rnd_762x51_Belt_T_Red", "2000Rnd_762x51_Belt_T_Red"};
            };
        };
    };
    class EF_CombatBoat_AT_East_Base: EF_CombatBoat_AT_Base
    {
        class Turrets: Turrets
        {
            class mg2_station: mg2_station
            {
                magazines[] = {"2000Rnd_762x51_Belt_T_Green", "2000Rnd_762x51_Belt_T_Green", "2000Rnd_762x51_Belt_T_Green"};
            };
            class mg3_station: mg3_station
            {
                magazines[] = {"2000Rnd_762x51_Belt_T_Green", "2000Rnd_762x51_Belt_T_Green", "2000Rnd_762x51_Belt_T_Green"};
            };
        };
    };
    class EF_CombatBoat_AT_Indep_Base: EF_CombatBoat_AT_Base
    {
        class Turrets: Turrets
        {
            class mg2_station: mg2_station
            {
                magazines[] = {"2000Rnd_762x51_Belt_T_Yellow", "2000Rnd_762x51_Belt_T_Yellow", "2000Rnd_762x51_Belt_T_Yellow"};
            };
            class mg3_station: mg3_station
            {
                magazines[] = {"2000Rnd_762x51_Belt_T_Yellow", "2000Rnd_762x51_Belt_T_Yellow", "2000Rnd_762x51_Belt_T_Yellow"};
            };
        };
    };

    /* Factions */
    #include "cfgBLUFOR.hpp"            // US & BAF
    #include "cfgCTRG.hpp"              // CTRG
    #include "cfgOPFOR.hpp"             // Iran & China
    #include "cfgRUS.hpp"               // Russia
};