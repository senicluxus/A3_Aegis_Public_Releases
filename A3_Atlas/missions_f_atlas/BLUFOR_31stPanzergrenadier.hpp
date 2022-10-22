/*
class GermanArmy
{
    text = "German Army";
    textShort = "Heer";
    type = HQ;
    size = ArmyGroup;
    side = West;
    commander = GermanMen;
    class ArmyCommand
    {
        text = "Army Command";
        textShort = "Kdo H";
        type = HQ;
        size = Army;
        side = West;
        commander = GermanMen;
        class 1stPanzer
        {
            id = 1;
            text = "%1 Panzer %3";
            textShort = "PzBrig %1";
            type = Armored;
            side = West;
            size = Division;
            commander = GermanMen;
            class 21stPanzer
            {
                id = 21;
                text = "%1 Panzer %3";
                textShort = "PzBrig %1";
                type = Armored;
                side = West;
                size = Brigade;
                commander = GermanMen;
                */
                class 31stPanzergrenadier
                {
                    id = 31;
                    text = "%1 Panzergrenadier %3";
                    textShort = "PzBtl %1";
                    type = MechanizedInfantry;
                    insignia = "\A3_Atlas\Missions_F_Atlas\Data\ORBAT\NATO_31stBattalion_CA.paa";
                    side = West;
                    size = Battalion;
                    commander = "Rhekopf";
                    description = "The 31st Panzergrenadier Battalion comprises the German Army's primary expeditionary force. It is among the best equipped units in the German Army, surviving military expenditure cuts in the mid-2020s amidst a faltering European economy. It relies on its sister units for artillery and air support, however.";
                    class 1stCompany
                    {
                        id = 1;
                        type = HQ;
                        size = Company;
                        side = West;
                        commander = GermanMen;
                        text = "%1 %2 and Supply %3";
                        assets[] =
                        {
                            {B_E_Truck_01_Repair_F,4},
                            {B_E_Truck_01_fuel_F,4},
                            {B_E_Truck_01_transport_F,10}
                        };
                    };
                    class 2ndCompany: 1stCompany
                    {
                        id = 2;
                        text = "%1 %3";
                        textShort = "%1 %3";
                        type = Armored;
                        assets[] =
                        {
                            {B_E_MBT_03_cannon_F,8},
                            {B_E_LT_01_cannon_F,8}
                        };
                        class 1stPlatoon
                        {
                            id = 1;
                            type = Armored;
                            size = Platoon;
                            side = West;
                            commander = GermanMen;
                            assets[] =
                            {
                                {B_E_MBT_03_cannon_F,4}
                            };
                        };
                        class 2ndPlatoon: 1stPlatoon
                        {
                            id = 2;
                        };
                        class 3rdPlatoon: 1stPlatoon
                        {
                            id = 3;
                            assets[] =
                            {
                                {B_E_LT_01_cannon_F,2},
                                {B_E_LT_01_AT_F,2}
                            };
                        };
                        class 4thPlatoon: 3rdPlatoon
                        {
                            id = 4;
                        };
                    };
                    class 3rdCompany: 2ndCompany
                    {
                        id = 3;
                        type = MechanizedInfantry;
                        size = Company;
                        side = West;
                        commander = GermanMen;
                        assets[] =
                        {
                            {B_E_MBT_03_cannon_F,4},
                            {B_E_APC_Wheeled_03_cannon_F,12}
                        };
                        class 1stPlatoon
                        {
                            id = 1;
                            type = MechanizedInfantry;
                            size = Platoon;
                            side = West;
                            commander = GermanMen;
                            assets[] =
                            {
                                {B_E_MBT_03_cannon_F,1},
                                {B_E_APC_Wheeled_03_cannon_F,3}
                            };
                            class 1stSquad
                            {
                                id = 1;
                                type = Infantry;
                                size = Squad;
                                side = West;
                                commander = GermanMen;
                                assets[] =
                                {
                                    {B_E_MBT_03_cannon_F,1},
                                    {B_E_APC_Wheeled_03_cannon_F,1}
                                };
                            };
                            class 2ndSquad: 1stSquad
                            {
                                id = 2;
                                assets[] =
                                {
                                    {B_E_APC_Wheeled_03_cannon_F,1}
                                };
                            };
                            class 3rdSquad: 2ndSquad
                            {
                                id = 3;
                            };
                        };
                        class 2ndPlatoon: 1stPlatoon
                        {
                            id = 2;
                            class 1stSquad
                            {
                                id = 1;
                                type = Infantry;
                                size = Squad;
                                side = West;
                                commander = GermanMen;
                                assets[] =
                                {
                                    {B_E_MBT_03_cannon_F,1},
                                    {B_E_APC_Wheeled_03_cannon_F,1}
                                };
                            };
                            class 2ndSquad: 1stSquad
                            {
                                id = 2;
                                assets[] =
                                {
                                    {B_E_APC_Wheeled_03_cannon_F,1}
                                };
                            };
                            class 3rdSquad: 2ndSquad
                            {
                                id = 3;
                            };
                        };
                        class 3rdPlatoon: 1stPlatoon
                        {
                            id = 3;
                            class 1stSquad
                            {
                                id = 1;
                                type = Infantry;
                                size = Squad;
                                side = West;
                                commander = GermanMen;
                                assets[] =
                                {
                                    {B_E_MBT_03_cannon_F,1},
                                    {B_E_APC_Wheeled_03_cannon_F,1}
                                };
                            };
                            class 2ndSquad: 1stSquad
                            {
                                id = 2;
                                assets[] =
                                {
                                    {B_E_APC_Wheeled_03_cannon_F,1}
                                };
                            };
                            class 3rdSquad: 2ndSquad
                            {
                                id = 3;
                            };
                        };
                        class 4thPlatoon: 1stPlatoon
                        {
                            id = 4;
                            class 1stSquad
                            {
                                id = 1;
                                type = Infantry;
                                size = Squad;
                                side = West;
                                commander = GermanMen;
                                assets[] =
                                {
                                    {B_E_MBT_03_cannon_F,1},
                                    {B_E_APC_Wheeled_03_cannon_F,1}
                                };
                            };
                            class 2ndSquad: 1stSquad
                            {
                                id = 2;
                                assets[] =
                                {
                                    {B_E_APC_Wheeled_03_cannon_F,1}
                                };
                            };
                            class 3rdSquad: 2ndSquad
                            {
                                id = 3;
                            };
                        };
                    };
                    class 4thCompany: 3rdCompany
                    {
                        id = 4;
                        class 1stPlatoon
                        {
                            id = 1;
                            type = MechanizedInfantry;
                            size = Platoon;
                            side = West;
                            commander = GermanMen;
                            assets[] =
                            {
                                {B_E_MBT_03_cannon_F,1},
                                {B_E_APC_Wheeled_03_cannon_F,3}
                            };
                            class 1stSquad
                            {
                                id = 1;
                                type = Infantry;
                                size = Squad;
                                side = West;
                                commander = GermanMen;
                                assets[] =
                                {
                                    {B_E_MBT_03_cannon_F,1},
                                    {B_E_APC_Wheeled_03_cannon_F,1}
                                };
                            };
                            class 2ndSquad: 1stSquad
                            {
                                id = 2;
                                assets[] =
                                {
                                    {B_E_APC_Wheeled_03_cannon_F,1}
                                };
                            };
                            class 3rdSquad: 2ndSquad
                            {
                                id = 3;
                            };
                        };
                        class 2ndPlatoon: 1stPlatoon
                        {
                            id = 2;
                            class 1stSquad
                            {
                                id = 1;
                                type = Infantry;
                                size = Squad;
                                side = West;
                                commander = GermanMen;
                                assets[] =
                                {
                                    {B_E_MBT_03_cannon_F,1},
                                    {B_E_APC_Wheeled_03_cannon_F,1}
                                };
                            };
                            class 2ndSquad: 1stSquad
                            {
                                id = 2;
                                assets[] =
                                {
                                    {B_E_APC_Wheeled_03_cannon_F,1}
                                };
                            };
                            class 3rdSquad: 2ndSquad
                            {
                                id = 3;
                            };
                        };
                        class 3rdPlatoon: 1stPlatoon
                        {
                            id = 3;
                            class 1stSquad
                            {
                                id = 1;
                                type = Infantry;
                                size = Squad;
                                side = West;
                                commander = GermanMen;
                                assets[] =
                                {
                                    {B_E_MBT_03_cannon_F,1},
                                    {B_E_APC_Wheeled_03_cannon_F,1}
                                };
                            };
                            class 2ndSquad: 1stSquad
                            {
                                id = 2;
                                assets[] =
                                {
                                    {B_E_APC_Wheeled_03_cannon_F,1}
                                };
                            };
                            class 3rdSquad: 2ndSquad
                            {
                                id = 3;
                            };
                        };
                        class 4thPlatoon: 1stPlatoon
                        {
                            id = 4;
                            class 1stSquad
                            {
                                id = 1;
                                type = Infantry;
                                size = Squad;
                                side = West;
                                commander = GermanMen;
                                assets[] =
                                {
                                    {B_E_MBT_03_cannon_F,1},
                                    {B_E_APC_Wheeled_03_cannon_F,1}
                                };
                            };
                            class 2ndSquad: 1stSquad
                            {
                                id = 2;
                                assets[] =
                                {
                                    {B_E_APC_Wheeled_03_cannon_F,1}
                                };
                            };
                            class 3rdSquad: 2ndSquad
                            {
                                id = 3;
                            };
                        };
                    };
                    class 5thCompany: 1stCompany
                    {
                        id = 5;
                        text = "%1 %2 %3";
                        textShort = "%1 %3";
                        type = Support;
                        assets[] =
                        {
                            {B_E_LT_01_AA_F,6},
                            {B_E_LT_01_scout_F,2},
                            {B_E_MRAP_03_gmg_F,2},
                            {B_E_MRAP_03_hmg_F,4}
                        };
                        class 1stPlatoon
                        {
                            id = 1;
                            type = Recon;
                            size = Platoon;
                            side = West;
                            commander = GermanMen;
                            assets[] =
                            {
                                {B_E_MRAP_03_gmg_F,1},
                                {B_E_MRAP_03_hmg_F,2}
                            };
                        };
                        class 2ndPlatoon: 1stPlatoon
                        {
                            id = 2;
                        };
                        class 3rdPlatoon: 1stPlatoon
                        {
                            id = 3;
                            type = AntiAir;
                            assets[] =
                            {
                                {B_E_LT_01_AA_F,3},
                                {B_E_LT_01_scout_F,1}
                            };
                        };
                        class 4thPlatoon: 3rdPlatoon
                        {
                            id = 4;
                        };
                    };
                };
            /*
            };
        };
        class 8thAirborne
        {
            id = 8;
            text = "%1 Airborne %3";
            textShort = "LuftBrig %1";
            type = Helicopter;
            side = West;
            size = Division;
            commander = GermanMen;
        };
        class 10thPanzer: 8thAirborne
        {
            id = 10;
            text = "%1 Panzer %3";
            textShort = "PzBrig %1";
            type = Armored;
        };
        class TrainingCommand: 8thAirborne
        {
            text = "Traning Command";
            textShort = "AusbKdo";
            type = HQ;
        };
    };
};
*/