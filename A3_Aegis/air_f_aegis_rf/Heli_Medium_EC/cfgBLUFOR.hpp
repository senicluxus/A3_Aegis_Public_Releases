/* US (base classes) */
class B_Heli_EC_03_RF;
class B_Heli_EC_04_military_RF;

/* US (Pacific) */
class Aegis_B_T_Heli_EC_03_RF: B_Heli_EC_03_RF
{
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_T_F;
	crew = B_T_helipilot_F;
	typicalCargo[] = {B_T_helicrew_F};
	textureList[] = {OLIVE, 1, TAN, 0, MARINE, 0};
    class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_khaki_mag,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_khk_F,2);
	};
};
class Aegis_B_T_Heli_EC_04_military_RF: B_Heli_EC_04_military_RF
{
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_T_F;
	crew = B_T_helipilot_F;
	typicalCargo[] = {B_T_helicrew_F};
	textureList[] = {OLIVE, 1, TAN, 0, MARINE, 0};
    class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_khaki_mag,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_khk_F,2);
	};
};

/* US (Woodland) */
class Aegis_B_W_Heli_EC_03_RF: B_Heli_EC_03_RF
{
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_helipilot_F;
	typicalCargo[] = {B_W_helicrew_F};
	textureList[] = {OLIVE, 1, TAN, 0, MARINE, 0};
    class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_Black_F,2);
	};
};
class Aegis_B_W_Heli_EC_04_military_RF: B_Heli_EC_04_military_RF
{
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_helipilot_F;
	typicalCargo[] = {B_W_helicrew_F};
	textureList[] = {OLIVE, 1, TAN, 0, MARINE, 0};
    class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MXC_Black_F,2);
	};
};

/* US (Desert) */
class Aegis_B_D_Heli_EC_03_RF: B_Heli_EC_03_RF
{
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_NATO_lxWS;
	crew = B_D_HeliPilot_lxWS;
	typicalCargo[] = {B_D_helicrew_lxWS};
	textureList[] = {OLIVE, 0, TAN, 1, MARINE, 0};
    hiddenSelectionsTextures[] = 
    {
        "\lxRF\air_rf\heli_medium_ec\data\as332_exterior_09_tan_co.paa", 
        "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa", 
        "#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')", 
        "\lxRF\air_rf\heli_medium_ec\data\as332_adds_09_tan_co.paa", 
        "\lxRF\air_rf\heli_medium_ec\data\as332_exterior_09_tan_co.paa", 
        "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa"
    };
};
class Aegis_B_D_Heli_EC_04_military_RF: B_Heli_EC_04_military_RF
{
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_NATO_lxWS;
	crew = B_D_HeliPilot_lxWS;
	typicalCargo[] = {B_D_helicrew_lxWS};
	textureList[] = {OLIVE, 0, TAN, 1, MARINE, 0};
    hiddenSelectionsTextures[] = 
    {
        "\lxRF\air_rf\heli_medium_ec\data\as332_exterior_09_tan_co.paa", 
        "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa", 
        "#(rgb,1024,1024,1)ui('lxRF_MFDMinimap','lxRF_MFDMinimap')", 
        "\lxRF\air_rf\heli_medium_ec\data\as332_adds_09_tan_co.paa", 
        "\lxRF\air_rf\heli_medium_ec\data\as332_exterior_09_tan_co.paa", 
        "\lxRF\air_rf\heli_medium_ec\data\as332_int_cargo_co.paa"
    };
};