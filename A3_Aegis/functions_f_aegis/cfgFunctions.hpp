class CfgFunctions
{
	class A3_Warlords
	{
		class Warlords
		{
			class WLAirdrop
            {
			    file = "A3_Aegis\Functions_F_Aegis\Warlords\fn_WLAirdrop.sqf";
            };
        };
    };
	class A3_Aegis
	{
		tag = "Aegis";
		project = "arma3aegis";
		class Ambient
		{
			file = "A3_Aegis\Functions_F_Aegis\Ambient";
			class animalBehaviour
			{
				description = "Animal behaviour control. Called by Animals_F_Aegis\Data\Scripts\main.fsm.";
				headerType = 1;
			};
			class animalRandomization{};
		};
		class GUI
		{
			file = "A3_Aegis\Functions_F_Aegis\GUI";
			class initWorldScene{};
			class initWorldSceneVR{};
            class showHorizontalCompass
			{
				//postInit = true;
			};
        };
    };
};