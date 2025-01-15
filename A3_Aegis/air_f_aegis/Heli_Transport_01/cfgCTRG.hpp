/* CTRG */
class B_CTRG_Heli_Transport_01_sand_F: Heli_Transport_01_base_F
{
    displayName = $STR_A3_CfgVehicles_Heli_Transport_01_base_F0;
    typicalCargo[] = {B_CTRG_Soldier_v2_F};

    /* Inventory */
    class TransportMagazines
    {
        mag_xx(SmokeShell,2);
        mag_xx(SmokeShellBlue,2);
        delete _xx_30Rnd_556x45_Stanag;
        mag_xx(30Rnd_556x45_Stanag_red,4);
    };
};
class B_CTRG_Heli_Transport_01_tropic_F: Heli_Transport_01_base_F
{
    displayName = $STR_A3_CfgVehicles_Heli_Transport_01_base_F0;
    faction = BLU_CTRG_tna_F;
    class Turrets: Turrets
    {
        class CopilotTurret: CopilotTurret{};
        class MainTurret: MainTurret
        {
            gunnerType = B_T_Helicrew_F;
        };
        class RightDoorGun: RightDoorGun
        {
            gunnerType = B_T_Helicrew_F;
        };
    };

    /* Inventory */
    class TransportMagazines
    {
        mag_xx(SmokeShell,2);
        mag_xx(SmokeShellBlue,2);
        delete _xx_30Rnd_556x45_Stanag;
        mag_xx(30Rnd_556x45_Stanag_red,4);
    };
};