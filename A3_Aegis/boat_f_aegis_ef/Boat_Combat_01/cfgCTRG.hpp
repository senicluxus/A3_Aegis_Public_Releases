/* CTRG (Pacific) */
class EF_B_CombatBoat_Unarmed_CTRG: EF_CombatBoat_Unarmed_Base
{
    faction = BLU_CTRG_tna_F;
};
class EF_B_CombatBoat_HMG_CTRG: EF_CombatBoat_HMG_West_Base
{
    faction = BLU_CTRG_tna_F;
};
class EF_B_CombatBoat_AT_CTRG: EF_CombatBoat_AT_West_Base
{
    faction = BLU_CTRG_tna_F;
};

/* CTRG (Mediterranean) */
class Aegis_B_CTRG_CombatBoat_Unarmed_EF: EF_B_CombatBoat_Unarmed_CTRG
{
    author = $STR_A3_A_Ravenholme;
	scope = public;
	scopeCurator = public;
    faction = BLU_CTRG_F;
	crew = B_CTRG_Soldier_v2_F;
	typicalCargo[] = {B_CTRG_Soldier_v2_F};
    /* Inventory */
	class TransportWeapons
	{
		weap_xx(arifle_MX_Black_F,3);
		weap_xx(launch_NLAW_F,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,24);
		mag_xx(100Rnd_65x39_caseless_black_mag,12);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(1Rnd_HE_Grenade_shell,3);
		mag_xx(3Rnd_HE_Grenade_shell,1);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,3);
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellGreen,8);
		mag_xx(SmokeShellOrange,8);
		mag_xx(SmokeShellBlue,8);
		mag_xx(NLAW_F,5);
		mag_xx(Titan_AT,2);
		mag_xx(Titan_AP,2);
		mag_xx(Titan_AA,2);
	};
};
class Aegis_B_CTRG_CombatBoat_HMG_EF: EF_B_CombatBoat_HMG_CTRG
{
    author = $STR_A3_A_Ravenholme;
	scope = public;
	scopeCurator = public;
    faction = BLU_CTRG_F;
	crew = B_CTRG_Soldier_v2_F;
	typicalCargo[] = {B_CTRG_Soldier_v2_F};
    /* Inventory */
	class TransportWeapons
	{
		weap_xx(arifle_MX_Black_F,3);
		weap_xx(launch_NLAW_F,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,24);
		mag_xx(100Rnd_65x39_caseless_black_mag,12);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(1Rnd_HE_Grenade_shell,3);
		mag_xx(3Rnd_HE_Grenade_shell,1);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,3);
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellGreen,8);
		mag_xx(SmokeShellOrange,8);
		mag_xx(SmokeShellBlue,8);
		mag_xx(NLAW_F,5);
		mag_xx(Titan_AT,2);
		mag_xx(Titan_AP,2);
		mag_xx(Titan_AA,2);
	};
};
class Aegis_B_CTRG_CombatBoat_AT_EF: EF_B_CombatBoat_HMG_CTRG
{
    author = $STR_A3_A_Ravenholme;
	scope = public;
	scopeCurator = public;
    faction = BLU_CTRG_F;
	crew = B_CTRG_Soldier_v2_F;
	typicalCargo[] = {B_CTRG_Soldier_v2_F};
    /* Inventory */
	class TransportWeapons
	{
		weap_xx(arifle_MX_Black_F,3);
		weap_xx(launch_NLAW_F,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,24);
		mag_xx(100Rnd_65x39_caseless_black_mag,12);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(1Rnd_HE_Grenade_shell,3);
		mag_xx(3Rnd_HE_Grenade_shell,1);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,3);
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellGreen,8);
		mag_xx(SmokeShellOrange,8);
		mag_xx(SmokeShellBlue,8);
		mag_xx(NLAW_F,5);
		mag_xx(Titan_AT,2);
		mag_xx(Titan_AP,2);
		mag_xx(Titan_AA,2);
	};
};