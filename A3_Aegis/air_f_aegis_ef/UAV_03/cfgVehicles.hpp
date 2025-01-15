class CfgVehicles
{
    /* Inheritance Tree */
    class Helicopter_Base_F;

    /* Bases */
	class UAV_03_base_F: Helicopter_Base_F
	{
		class Components;
	};
	class UAV_03_dynamicLoadout_base_F: UAV_03_base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				class Pylons
				{
					class Pylons1
					{
						hardpoints[] += {TITAN_NLOS_1RND};
					};
					class Pylons2
					{
						hardpoints[] += {TITAN_NLOS_1RND};
					};
					class Pylons3: Pylons2{};
					class Pylons4: Pylons1{};
				};
			};
		};
	};
};