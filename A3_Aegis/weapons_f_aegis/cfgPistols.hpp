/* Pistols */
class hgun_ACPC2_F;
class hgun_P07_F: Pistol_Base_F
{
    magazines[] =
    {
        16Rnd_9x21_Mag_v2,
        16Rnd_9x21_red_Mag_v2,
        16Rnd_9x21_green_Mag_v2,
        16Rnd_9x21_yellow_Mag_v2,
        // Compatibility classes, these are hidden
        30Rnd_9x21_Mag,
        30Rnd_9x21_Red_Mag,
        30Rnd_9x21_Yellow_Mag,
        30Rnd_9x21_Green_Mag,
        16Rnd_9x21_Mag,
        16Rnd_9x21_red_Mag,
        16Rnd_9x21_green_Mag,
        16Rnd_9x21_yellow_Mag
    };
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class PointerSlot: asdg_PistolUnderRail
        {
            iconPosition[] =
            {
                0.39,   // X
                0.48    // Y
            };
            iconScale = 0.2;
        };
    };
};
class hgun_Pistol_heavy_01_F;
class hgun_Pistol_heavy_02_F: Pistol_Base_F
{
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot{};
    };
};
class hgun_Rook40_F: Pistol_Base_F
{
    magazines[] =
    {
        17Rnd_9x21_Mag,
        // Compatibility classes, these are hidden
        30Rnd_9x21_Mag,
        30Rnd_9x21_Red_Mag,
        30Rnd_9x21_Yellow_Mag,
        30Rnd_9x21_Green_Mag,
        16Rnd_9x21_Mag,
        16Rnd_9x21_red_Mag,
        16Rnd_9x21_green_Mag,
        16Rnd_9x21_yellow_Mag
    };
    magazineWell[] = {Rook40_9x21};
};
class hgun_Pistol_heavy_01_green_F;
class hgun_ACPC2_black_F: hgun_ACPC2_F
{
	author = $STR_A3_A_AveryTheKitty;
	baseWeapon = hgun_ACPC2_black_F;
	displayname = $STR_A3_A_CfgWeapons_hgun_ACPC2_black_F0;
	picture = "\A3_Aegis\Weapons_F_Aegis\Pistols\ACPC2\Data\UI\icon_hgun_ACPC2_black_F_X_CA.paa";
	hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Pistols\ACPC2\Data\ACPC2_black_CO.paa"};
	hiddenSelectionsMaterials[] = {"\A3_Aegis\Weapons_F_Aegis\Pistols\ACPC2\Data\ACPC2_black.rvmat"};
};
class hgun_Pistol_heavy_01_black_F: hgun_Pistol_heavy_01_F
{
	author = $STR_A3_A_AveryTheKitty;
	baseWeapon = hgun_Pistol_heavy_01_black_F;
	displayname = $STR_A3_A_CfgWeapons_hgun_Pistol_heavy_01_black_F0;
	picture = "\A3_Aegis\Weapons_F_Aegis\Pistols\Pistol_Heavy_01\Data\UI\icon_hgun_Pistol_heavy_01_black_F_X_CA.paa";
	hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Pistols\Pistol_Heavy_01\Data\Pistol_heavy_01_black_CO.paa"};
};