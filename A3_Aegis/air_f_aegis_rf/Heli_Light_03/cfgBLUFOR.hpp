/* BAF (Pacific) */
class Aegis_B_A_Heli_light_03_dynamicLoadout_tna_RF: B_Heli_Light_03_dynamicLoadout_RF
{
    author = $STR_A3_A_Ravenholme;
    faction = BLU_A_tna_F;
	crew = B_A_Helipilot_tna_F;
	typicalCargo[] = {B_A_Soldier_lite_F};
	

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_khaki_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_C_khk_F,2);
	};
};
class Aegis_B_A_Heli_Light_03_unarmed_tna_RF: B_Heli_Light_03_unarmed_RF
{
    author = $STR_A3_A_Ravenholme;
    faction = BLU_A_tna_F;
	crew = B_A_Helipilot_tna_F;
	typicalCargo[] = {B_A_Soldier_lite_F};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_khaki_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_C_khk_F,2);
	};
};

/* BAF (Woodland) */
class Aegis_B_A_Heli_light_03_dynamicLoadout_wdl_RF: B_Heli_Light_03_dynamicLoadout_RF
{
    author = $STR_A3_A_Ravenholme;
    faction = BLU_A_wdl_F;
	crew = B_A_Helipilot_wdl_F;
	typicalCargo[] = {B_A_Soldier_lite_F};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_black_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_C_blk_F,2);
	};
};
class Aegis_B_A_Heli_Light_03_unarmed_wdl_RF: B_Heli_Light_03_unarmed_RF
{
    author = $STR_A3_A_Ravenholme;
    faction = BLU_A_wdl_F;
	crew = B_A_Helipilot_wdl_F;
	typicalCargo[] = {B_A_Soldier_lite_F};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_black_mag,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_C_blk_F,2);
	};
};