class CfgVehicles
{
    /* Inheritance Tree */
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Components;
	};

    /* Arma 3 Aegis*/
	class Heli_Attack_03_base_F: Helicopter_Base_F
    {
		class Components: Components
		{
			class TransportPylonsComponent
			{
				class Pylons
				{
					class PylonLeft1
					{
						hardpoints[] += {B_SIDEARM};
					};
					class PylonLeft2
					{
						hardpoints[] += 
						{
							TITAN_NLOS_1RND,
							TITAN_NLOS_2RND
						};
					};
					class PylonLeft3
					{
						hardpoints[] +=
						{
							TITAN_NLOS_1RND,
							TITAN_NLOS_2RND
						};
					};
					class PylonRight3: PylonLeft3{};
					class PylonRight2: PylonLeft2{};
					class PylonRight1: PylonLeft1{};
				};
			};
		};
    };
};