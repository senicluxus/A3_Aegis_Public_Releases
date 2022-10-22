class CfgORBAT
{
	class BIS;
	class Atlas
	{
        #include "BLUFOR_31stPanzergrenadier.hpp"
        /* CSAT 7th Mechanized Regiment */
        class 7thMechanized
        {
            id = 7;
            text = "%1 %2 %3";
            textShort = "%1 %3";
            type = MechanizedInfantry;
            insignia = "\A3_Atlas\Missions_F_Atlas\Data\ORBAT\CSAT_BearRegiment_CA.paa";
            side = East;
            size = Regiment;
            commander = "Kamienski";
            commanderRank = Colonel;
            description = "The 7th Mechanized Infantry Regiment, nicknamed Bear Regiment, is a mainly mechanized force, using a mix of old Russian equipment and new CSAT arms deliveries.";
            class 7thFirstBn
            {
                id = 1;
                idType = 0;
                type = "Infantry";
                side = "East";
                size = "Battalion";
                commander = "Adamovič";
                commanderRank = "Major";
                text = "1st Infantry Battalion";
                textShort = "%1 %3";
                
                class FirstBnHQ
                {
                    id = 1;
                    idType = 0;
                    type = "HQ";
                    side = "East";
                    size = "Company";
                    commander = "Adamovič";
                    commanderRank = "Major";
                    text = "%2 %3";
                    textShort = "%2";
                };
                class FirstBnCompany1
                {
                    id = 1;
                    idType = 0;
                    type = "Infantry";
                    side = "East";
                    size = "Company";
                    commander = "RussianMen";
                    commanderRank = "Captain";
                    text = "%1 %2 %3";
                    textShort = "%1 %3";
                    assets[] = {{O_W_APC_Wheeled_02_rcws_v2_ghex_f,16}};
                };
                class FirstBnCompany2
                {
                    id = 2;
                    idType = 0;
                    type = "Infantry";
                    side = "East";
                    size = "Company";
                    commander = "RussianMen";
                    commanderRank = "Captain";
                    text = "%1 %2 %3";
                    textShort = "%1 %3";
                    assets[] = {{O_W_APC_Wheeled_02_rcws_v2_ghex_f,16}};
                };
                class FirstBnCompany3
                {
                    id = 3;
                    idType = 0;
                    type = "Infantry";
                    side = "East";
                    size = "Company";
                    commander = "RussianMen";
                    commanderRank = "Captain";
                    text = "%1 %2 %3";
                    textShort = "%1 %3";
                    assets[] = {{O_W_APC_Wheeled_02_rcws_v2_ghex_f,16}};
                };
                class FirstBnCompany4
                {
                    id = 4;
                    idType = 0;
                    type = "MechanizedInfantry";
                    side = "East";
                    size = "Company";
                    commander = "RussianMen";
                    commanderRank = "Captain";
                    text = "%1 %2 %3";
                    textShort = "%1 %3";
                    assets[] = {{O_W_APC_Tracked_02_cannon_ghex_f,16}};
                };
            };

            class 7thSecondBn
            {
                id = 2;
                idType = 0;
                type = "MechanizedInfantry";
                side = "East";
                size = "Battalion";
                commander = "Sviontak";
                commanderRank = "Major";
                text = "2nd Mechanized Infantry Battalion";
                textShort = "%1 %3";
                
                class SecondBnHQ
                {
                    id = 1;
                    idType = 0;
                    type = "HQ";
                    side = "East";
                    size = "Company";
                    commander = "Sviontak";
                    commanderRank = "Major";
                    text = "%2 %3";
                    textShort = "%2";
                };
                class SecondBnCompany1
                {
                    id = 1;
                    idType = 0;
                    type = "Armored";
                    side = "East";
                    size = "Company";
                    commander = "RussianMen";
                    commanderRank = "Captain";
                    text = "%1 %2 %3";
                    textShort = "%1 %3";
                    assets[] = {{O_W_MBT_02_cannon_ghex_f,14}};
                };
                class SecondBnCompany2
                {
                    id = 2;
                    idType = 0;
                    type = "MechanizedInfantry";
                    side = "East";
                    size = "Company";
                    commander = "RussianMen";
                    commanderRank = "Captain";
                    text = "%1 %2 %3";
                    textShort = "%1 %3";
                    assets[] = {{O_W_APC_Tracked_02_cannon_ghex_f,16}};
                };
                class SecondBnCompany3
                {
                    id = 3;
                    idType = 0;
                    type = "MechanizedInfantry";
                    side = "East";
                    size = "Company";
                    commander = "RussianMen";
                    commanderRank = "Captain";
                    text = "%1 %2 %3";
                    textShort = "%1 %3";
                    assets[] = {{O_W_APC_Tracked_02_cannon_ghex_f,16}};
                };
                class SecondBnCompany4
                {
                    id = 4;
                    idType = 0;
                    type = "Infantry";
                    side = "East";
                    size = "Company";
                    commander = "RussianMen";
                    commanderRank = "Captain";
                    text = "%1 %2 %3";
                    textShort = "%1 %3";
                    assets[] = {{O_W_APC_Wheeled_02_rcws_v2_ghex_f,16}};
                };
            };

            class 7thThirdBn
            {
                id = 3;
                idType = 0;
                side = "East";
                size = "Battalion";
                type = "Armored";
                commander = "Rasolka";
                commanderRank = "Major";
                text = "3rd Armor Battalion";
                textShort = "%1 %3";
            };

            class 7thFourthBn
            {
                id = 4;
                idType = 0;
                side = "East";
                size = "Squadron";
                type = "Cavalry";
                commander = "Skaryna";
                commanderRank = "Major";
                text = "4th Reconnaisance Squadron";
                textShort = "%1 %3";
            };
            
            class 7thFifthBn
            {
                id = 5;
                idType = 0;
                side = "East";
                size = "Battalion";
                type = "Helicopter";
                commander = "Krupin";
                commanderRank = "Major";
                text = "5th Air Assault Battalion";
                textShort = "%1 %3";
                
                class FifthBnSquadron1
                {
                    id = 1;
                    idType = 0;
                    side = "East";
                    size = "Company";
                    type = "Helicopter";
                    commander = "RussianMen";
                    commanderRank = "Captain";
                    text = "%1 Air Assault %3";
                    textShort = "Air Assault";
                    assets[] = {{O_W_Heli_Attack_02_dynamicLoadout_f,9}};
                };
                class FifthBnSquadron2
                {
                    id = 2;
                    idType = 0;
                    side = "East";
                    size = "Company";
                    type = "Helicopter";
                    commander = "RussianMen";
                    commanderRank = "Captain";
                    text = "%1 Air Cavalry %3";
                    textShort = "Air Cavalry";
                    assets[] = {{O_W_Heli_Light_02_dynamicLoadout_f,9}};
                };
                class FifthBnSquadron3
                {
                    id = 3;
                    idType = 0;
                    side = "East";
                    size = "Company";
                    type = "Helicopter";
                    commander = "RussianMen";
                    commanderRank = "Captain";
                    text = "%1 Air Cavalry %3";
                    textShort = "Air Cavalry";
                    assets[] = {{O_W_Heli_Light_02_dynamicLoadout_f,9}};
                };
                class FifthBnSquadron4
                {
                    id = 4;
                    idType = 0;
                    side = "East";
                    size = "Company";
                    type = "Helicopter";
                    commander = "RussianMen";
                    commanderRank = "Captain";
                    text = "%1 Air Utility %3";
                    textShort = "Air Utility";
                    assets[] = {{O_T_Heli_Transport_04_f,9}};
                };
            };
            class 7thSupportBn
            {
                id = 6;
                idType = 0;
                side = "East";
                size = "Battalion";
                type = "Support";
                commander = "Petrenko";
                commanderRank = "Major";
                text = "6th Support Battalion";
                textShort = "%1 %3";
                class brsupport
                {
                    id = 7;
                    idType = 0;
                    side = "East";
                    size = "Company";
                    type = "Support";
                    commander = "RussianMen";
                    commanderRank = "Captain";
                    text = "%2 %3";
                    textShort = "%2";
                };
                class brmedical
                {
                    id = 7;
                    idType = 0;
                    side = "East";
                    size = "Company";
                    type = "Medical";
                    commander = "RussianMen";
                    commanderRank = "Captain";
                    text = "%2 %3";
                    textShort = "%2";
                };
                class brmaintenance
                {
                    id = 7;
                    idType = 0;
                    side = "East";
                    size = "Company";
                    type = "Maintenance";
                    commander = "RussianMen";
                    commanderRank = "Captain";
                    text = "%2 %3";
                    textShort = "%2";
                };
                class brservice
                {
                    id = 7;
                    idType = 0;
                    side = "East";
                    size = "Company";
                    type = "Service";
                    commander = "RussianMen";
                    commanderRank = "Captain";
                    text = "%2 %3";
                    textShort = "%2";
                };
            };
        };
    };
};