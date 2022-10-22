class CfgVehicles
{
	/* Inheritance Tree */
	class Car;
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret;
        };
	};

    /* Bases */
	class Offroad_02_base_F: Car_F
	{
		class CargoTurret;
		class Turrets: Turrets
		{
            class CargoTurret_01: CargoTurret{};
            class CargoTurret_02: CargoTurret_01{};
            class CargoTurret_03: CargoTurret_02{};
        };
	};
	class Offroad_02_AT_base_F: Offroad_02_base_F
	{
        /* Turrets */
		class Turrets: Turrets
		{
			class AT_Turret: MainTurret
			{ 
                /* Weapons & Ammunition */
				magazines[] =
                {
                    mag_12(SPG9_HEAT),
                    mag_8(SPG9_HE)
                };
            };
			class CargoTurret_01: CargoTurret{};
        };
	};
};