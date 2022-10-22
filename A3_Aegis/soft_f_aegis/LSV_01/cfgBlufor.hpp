/* US */
class B_LSV_01_armed_F: LSV_01_armed_base_F{};
class B_LSV_01_unarmed_F;
class B_LSV_01_light_F: LSV_01_light_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_LSV_01_light_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_F;
	crew = B_Soldier_F;
	typicalCargo[] = {B_Soldier_F};
	textureList[] =
	{
		Black,0,
		Olive,0,
		Sand,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa",
		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
	};
};
class B_LSV_01_armed_CTRG_F: B_LSV_01_armed_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	scopeCurator = private;
	crew = B_CTRG_Soldier_TL_F;
	forceInGarage = false;
	textureList[] =
	{
		Dazzle,0,
		Dazzle_02,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa",
		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
	};

    /* Turrets */
	class Turrets: Turrets
	{
		class CargoTurret_02: CargoTurret_02{};
		class CargoTurret_03: CargoTurret_03{};
		class TopTurret: MainTurret
		{
		dontCreateAi = true;
		};
		class CodRiverTurret: MainTurret
		{
		dontCreateAi = true;
		};
	};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag_red,16);
		mag_xx(150Rnd_556x45_Drum_Mag_F,6);
		mag_xx(HandGrenade,10);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		mag_xx(1Rnd_Smoke_Grenade_shell,4);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
		mag_xx(16Rnd_9x21_Mag,12);
		mag_xx(SmokeShell,4);
		mag_xx(SmokeShellGreen,4);
		mag_xx(SmokeShellOrange,4);
		mag_xx(SmokeShellBlue,4);
		mag_xx(NLAW_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SPAR_01_blk_F,2);
	};
};
class B_LSV_01_unarmed_CTRG_F: B_LSV_01_unarmed_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	scopeCurator = private;
	crew = B_CTRG_Soldier_TL_F;
	forceInGarage = false;
	textureList[] =
	{
		Dazzle,0,
		Dazzle_02,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa",
		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
	};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag_red,16);
		mag_xx(150Rnd_556x45_Drum_Mag_F,6);
		mag_xx(HandGrenade,10);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		mag_xx(1Rnd_Smoke_Grenade_shell,4);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
		mag_xx(16Rnd_9x21_Mag,12);
		mag_xx(SmokeShell,4);
		mag_xx(SmokeShellGreen,4);
		mag_xx(SmokeShellOrange,4);
		mag_xx(SmokeShellBlue,4);
		mag_xx(NLAW_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SPAR_01_blk_F,2);
	};
};

/* US (Pacific) */
class B_T_LSV_01_armed_F;
class B_T_LSV_01_AT_F: LSV_01_AT_base_F
{
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa",
        "\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_B_Titan_tna_F_01_CO.paa",
        "\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_B_Titan_short_tna_F_02_CO.paa"
    };
};
class B_T_LSV_01_unarmed_F;
class B_T_LSV_01_light_F: LSV_01_light_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_LSV_01_light_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_T_F;
	crew = B_T_Soldier_F;
	typicalCargo[] = {B_T_Soldier_F};
	textureList[] =
	{
		Black,0,
		Olive,1,
		Sand,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
	};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_khaki_mag,16);
		mag_xx(100Rnd_65x39_caseless_khaki_mag,6);
		mag_xx(HandGrenade,10);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		mag_xx(1Rnd_Smoke_Grenade_shell,4);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
		mag_xx(16Rnd_9x21_Mag,12);
		mag_xx(SmokeShell,4);
		mag_xx(SmokeShellGreen,4);
		mag_xx(SmokeShellOrange,4);
		mag_xx(SmokeShellBlue,4);
		mag_xx(NLAW_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MX_khk_F,2);
	};
};
class B_T_LSV_01_armed_CTRG_F: B_T_LSV_01_armed_F
{
    faction = BLU_CTRG_tna_F;
    textureList[] =
    {
        Dazzle,1,
        Dazzle_02,0
    };
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa",
        "\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
        "\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
        "\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
    };

    /* Inventory */
    class TransportMagazines
    {
        mag_xx(30Rnd_556x45_Stanag_red,16);
        mag_xx(150Rnd_556x45_Drum_Mag_F,6);
        mag_xx(HandGrenade,10);
        mag_xx(1Rnd_HE_Grenade_shell,10);
        mag_xx(1Rnd_Smoke_Grenade_shell,4);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
        mag_xx(16Rnd_9x21_Mag,12);
        mag_xx(SmokeShell,4);
        mag_xx(SmokeShellGreen,4);
        mag_xx(SmokeShellOrange,4);
        mag_xx(SmokeShellBlue,4);
        mag_xx(NLAW_F,2);
    };
    class TransportWeapons
    {
        weap_xx(arifle_SPAR_01_blk_F,2);
    };
};
class B_T_LSV_01_unarmed_CTRG_F: B_T_LSV_01_unarmed_F
{
    faction = BLU_CTRG_tna_F;
    textureList[] =
    {
        Dazzle,1,
        Dazzle_02,0
    };
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa",
        "\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
        "\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
        "\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
    };

    /* Inventory */
    class TransportMagazines
    {
        mag_xx(30Rnd_556x45_Stanag_red,16);
        mag_xx(150Rnd_556x45_Drum_Mag_F,6);
        mag_xx(HandGrenade,10);
        mag_xx(1Rnd_HE_Grenade_shell,10);
        mag_xx(1Rnd_Smoke_Grenade_shell,4);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
        mag_xx(16Rnd_9x21_Mag,12);
        mag_xx(SmokeShell,4);
        mag_xx(SmokeShellGreen,4);
        mag_xx(SmokeShellOrange,4);
        mag_xx(SmokeShellBlue,4);
        mag_xx(NLAW_F,2);
    };
    class TransportWeapons
    {
        weap_xx(arifle_SPAR_01_blk_F,2);
    };
};

/* US (Woodland) */
class B_W_LSV_01_armed_F: LSV_01_armed_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_LSV_01_armed_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Soldier_F;
	typicalCargo[] = {B_W_Soldier_F};
	textureList[] =
	{
		Black,0,
		Olive,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
	};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,16);
		mag_xx(100Rnd_65x39_caseless_black_mag,6);
		mag_xx(HandGrenade,10);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		mag_xx(1Rnd_Smoke_Grenade_shell,4);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
		mag_xx(16Rnd_9x21_Mag,12);
		mag_xx(SmokeShell,4);
		mag_xx(SmokeShellGreen,4);
		mag_xx(SmokeShellOrange,4);
		mag_xx(SmokeShellBlue,4);
		mag_xx(NLAW_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MX_Black_F,2);
	};

    /* Liveries */
	class TextureSources: TextureSources
	{
		class Olive: Olive
		{
            textures[] =
            {
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa",
                "\A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_INDP_CO.paa",
                "\A3\Weapons_F_Beta\Launchers\Titan\Data\TubeM_INDP_CO.paa"
            };
		};
	};
};
class B_W_LSV_01_AT_F: LSV_01_AT_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_LSV_01_AT_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Soldier_F;
	typicalCargo[] = {B_W_Soldier_F};
	textureList[] =
	{
		Black,0,
		Olive,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa",
		"\A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_INDP_CO.paa",
		"\A3\Weapons_F_Beta\Launchers\Titan\Data\TubeM_INDP_CO.paa"
	};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,16);
		mag_xx(100Rnd_65x39_caseless_black_mag,6);
		mag_xx(HandGrenade,10);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		mag_xx(1Rnd_Smoke_Grenade_shell,4);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
		mag_xx(16Rnd_9x21_Mag,12);
		mag_xx(SmokeShell,4);
		mag_xx(SmokeShellGreen,4);
		mag_xx(SmokeShellOrange,4);
		mag_xx(SmokeShellBlue,4);
		mag_xx(NLAW_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MX_Black_F,2);
	};

    /* Liveries */
	class TextureSources: TextureSources
	{
		class Olive: Olive
		{
            textures[] =
            {
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa",
                "\A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_INDP_CO.paa",
                "\A3\Weapons_F_Beta\Launchers\Titan\Data\TubeM_INDP_CO.paa"
            };
		};
	};
};
class B_W_LSV_01_unarmed_F: LSV_01_unarmed_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_LSV_01_unarmed_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Soldier_F;
	typicalCargo[] = {B_W_Soldier_F};
	textureList[] =
	{
		Black,0,
		Olive,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
	};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,16);
		mag_xx(100Rnd_65x39_caseless_black_mag,6);
		mag_xx(HandGrenade,10);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		mag_xx(1Rnd_Smoke_Grenade_shell,4);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
		mag_xx(16Rnd_9x21_Mag,12);
		mag_xx(SmokeShell,4);
		mag_xx(SmokeShellGreen,4);
		mag_xx(SmokeShellOrange,4);
		mag_xx(SmokeShellBlue,4);
		mag_xx(NLAW_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MX_Black_F,2);
	};

    /* Liveries */
	class TextureSources: TextureSources
	{
		class Olive: Olive
		{
            textures[] =
            {
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa",
                "\A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_INDP_CO.paa",
                "\A3\Weapons_F_Beta\Launchers\Titan\Data\TubeM_INDP_CO.paa"
            };
		};
	};
};
class B_W_LSV_01_light_F: LSV_01_light_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_LSV_01_light_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Soldier_F;
	typicalCargo[] = {B_W_Soldier_F};
	textureList[] =
	{
		Black,0,
		Olive,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
	};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,16);
		mag_xx(100Rnd_65x39_caseless_black_mag,6);
		mag_xx(HandGrenade,10);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		mag_xx(1Rnd_Smoke_Grenade_shell,4);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
		mag_xx(16Rnd_9x21_Mag,12);
		mag_xx(SmokeShell,4);
		mag_xx(SmokeShellGreen,4);
		mag_xx(SmokeShellOrange,4);
		mag_xx(SmokeShellBlue,4);
		mag_xx(NLAW_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_MX_Black_F,2);
	};

    /* Liveries */
	class TextureSources: TextureSources
	{
		class Olive: Olive
		{
            textures[] =
            {
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa",
                "\A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_INDP_CO.paa",
                "\A3\Weapons_F_Beta\Launchers\Titan\Data\TubeM_INDP_CO.paa"
            };
		};
	};
};

/* BAF */
class B_A_LSV_01_armed_F: LSV_01_armed_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_LSV_01_armed_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_A_F;
	crew = B_A_Soldier_F;
	typicalCargo[] = {B_A_Soldier_F};
	textureList[] =
	{
		Black,0,
		Sand,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa",
		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
	};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_mag,16);
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
		mag_xx(HandGrenade,10);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		mag_xx(1Rnd_Smoke_Grenade_shell,4);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
		mag_xx(17Rnd_9x21_Mag,12);
		mag_xx(SmokeShell,4);
		mag_xx(SmokeShellGreen,4);
		mag_xx(SmokeShellOrange,4);
		mag_xx(SmokeShellBlue,4);
		mag_xx(NLAW_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_snd_F,2);
	};
};
class B_A_LSV_01_AT_F: LSV_01_AT_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_LSV_01_AT_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_A_F;
	crew = B_A_Soldier_F;
	typicalCargo[] = {B_A_Soldier_F};
	textureList[] =
	{
		Black,0,
		Sand,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa",
		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa",
		"\A3\Weapons_F_Beta\Launchers\Titan\Data\launcher_CO.paa",
		"\A3\Weapons_F_Beta\Launchers\Titan\Data\tubem_CO.paa"
	};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_mag,16);
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
		mag_xx(HandGrenade,10);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		mag_xx(1Rnd_Smoke_Grenade_shell,4);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
		mag_xx(17Rnd_9x21_Mag,12);
		mag_xx(SmokeShell,4);
		mag_xx(SmokeShellGreen,4);
		mag_xx(SmokeShellOrange,4);
		mag_xx(SmokeShellBlue,4);
		mag_xx(NLAW_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_snd_F,2);
	};
};
class B_A_LSV_01_unarmed_F: LSV_01_unarmed_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_LSV_01_unarmed_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_A_F;
	crew = B_A_Soldier_F;
	typicalCargo[] = {B_A_Soldier_F};
	textureList[] =
	{
		Black,0,
		Sand,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa",
		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
	};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_mag,16);
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
		mag_xx(HandGrenade,10);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		mag_xx(1Rnd_Smoke_Grenade_shell,4);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
		mag_xx(17Rnd_9x21_Mag,12);
		mag_xx(SmokeShell,4);
		mag_xx(SmokeShellGreen,4);
		mag_xx(SmokeShellOrange,4);
		mag_xx(SmokeShellBlue,4);
		mag_xx(NLAW_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_snd_F,2);
	};
};
class B_A_LSV_01_light_F: LSV_01_light_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_LSV_01_light_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_A_F;
	crew = B_A_Soldier_F;
	typicalCargo[] = {B_A_Soldier_F};
	textureList[] =
	{
		Black,0,
		Sand,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa",
		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
	};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_mag,16);
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
		mag_xx(HandGrenade,10);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		mag_xx(1Rnd_Smoke_Grenade_shell,4);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
		mag_xx(17Rnd_9x21_Mag,12);
		mag_xx(SmokeShell,4);
		mag_xx(SmokeShellGreen,4);
		mag_xx(SmokeShellOrange,4);
		mag_xx(SmokeShellBlue,4);
		mag_xx(NLAW_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_snd_F,2);
	};
};

/* BAF (Pacific) */
class B_A_LSV_01_armed_tna_F: B_A_LSV_01_armed_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_LSV_01_armed_tna_F.jpg";
	faction = BLU_A_tna_F;
	crew = B_A_Soldier_tna_F;
	typicalCargo[] = {B_A_Soldier_tna_F};
	textureList[] =
	{
		Black,0,
		Olive,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
	};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_khaki_mag,16);
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
		mag_xx(HandGrenade,10);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		mag_xx(1Rnd_Smoke_Grenade_shell,4);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
		mag_xx(17Rnd_9x21_Mag,12);
		mag_xx(SmokeShell,4);
		mag_xx(SmokeShellGreen,4);
		mag_xx(SmokeShellOrange,4);
		mag_xx(SmokeShellBlue,4);
		mag_xx(NLAW_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_khk_F,2);
	};
};
class B_A_LSV_01_AT_tna_F: B_A_LSV_01_AT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_LSV_01_AT_tna_F.jpg";
	faction = BLU_A_tna_F;
	crew = B_A_Soldier_tna_F;
	typicalCargo[] = {B_A_Soldier_tna_F};
	textureList[] =
	{
		Black,0,
		Olive,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa",
		"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_B_Titan_tna_F_01_CO.paa",
		"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_B_Titan_short_tna_F_02_CO.paa"
	};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_khaki_mag,16);
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
		mag_xx(HandGrenade,10);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		mag_xx(1Rnd_Smoke_Grenade_shell,4);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
		mag_xx(17Rnd_9x21_Mag,12);
		mag_xx(SmokeShell,4);
		mag_xx(SmokeShellGreen,4);
		mag_xx(SmokeShellOrange,4);
		mag_xx(SmokeShellBlue,4);
		mag_xx(NLAW_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_khk_F,2);
	};
};
class B_A_LSV_01_unarmed_tna_F: B_A_LSV_01_unarmed_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_LSV_01_unarmed_tna_F.jpg";
	faction = BLU_A_tna_F;
	crew = B_A_Soldier_tna_F;
	typicalCargo[] = {B_A_Soldier_tna_F};
	textureList[] =
	{
		Black,0,
		Olive,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
	};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_khaki_mag,16);
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
		mag_xx(HandGrenade,10);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		mag_xx(1Rnd_Smoke_Grenade_shell,4);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
		mag_xx(17Rnd_9x21_Mag,12);
		mag_xx(SmokeShell,4);
		mag_xx(SmokeShellGreen,4);
		mag_xx(SmokeShellOrange,4);
		mag_xx(SmokeShellBlue,4);
		mag_xx(NLAW_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_khk_F,2);
	};
};
class B_A_LSV_01_light_tna_F: B_A_LSV_01_light_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_LSV_01_light_tna_F.jpg";
	faction = BLU_A_tna_F;
	crew = B_A_Soldier_tna_F;
	typicalCargo[] = {B_A_Soldier_tna_F};
	textureList[] =
	{
		Black,0,
		Olive,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
	};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_khaki_mag,16);
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
		mag_xx(HandGrenade,10);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		mag_xx(1Rnd_Smoke_Grenade_shell,4);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
		mag_xx(17Rnd_9x21_Mag,12);
		mag_xx(SmokeShell,4);
		mag_xx(SmokeShellGreen,4);
		mag_xx(SmokeShellOrange,4);
		mag_xx(SmokeShellBlue,4);
		mag_xx(NLAW_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_khk_F,2);
	};
};

/* BAF (Woodland) */
class B_A_LSV_01_armed_wdl_F: B_A_LSV_01_armed_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_LSV_01_armed_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	crew = B_A_Soldier_wdl_F;
	typicalCargo[] = {B_A_Soldier_wdl_F};
	textureList[] =
	{
		Black,0,
		Olive,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
	};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,16);
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
		mag_xx(HandGrenade,10);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		mag_xx(1Rnd_Smoke_Grenade_shell,4);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
		mag_xx(17Rnd_9x21_Mag,12);
		mag_xx(SmokeShell,4);
		mag_xx(SmokeShellGreen,4);
		mag_xx(SmokeShellOrange,4);
		mag_xx(SmokeShellBlue,4);
		mag_xx(NLAW_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_blk_F,2);
	};

    /* Liveries */
	class TextureSources: TextureSources
	{
		class Olive: Olive
		{
            textures[] =
            {
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa",
                "\A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_INDP_CO.paa",
                "\A3\Weapons_F_Beta\Launchers\Titan\Data\TubeM_INDP_CO.paa"
            };
		};
	};
};
class B_A_LSV_01_AT_wdl_F: B_A_LSV_01_AT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_LSV_01_AT_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	crew = B_A_Soldier_wdl_F;
	typicalCargo[] = {B_A_Soldier_wdl_F};
	textureList[] =
	{
		Black,0,
		Olive,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa",
		"\A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_INDP_CO.paa",
		"\A3\Weapons_F_Beta\Launchers\Titan\Data\TubeM_INDP_CO.paa"
	};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,16);
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
		mag_xx(HandGrenade,10);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		mag_xx(1Rnd_Smoke_Grenade_shell,4);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
		mag_xx(17Rnd_9x21_Mag,12);
		mag_xx(SmokeShell,4);
		mag_xx(SmokeShellGreen,4);
		mag_xx(SmokeShellOrange,4);
		mag_xx(SmokeShellBlue,4);
		mag_xx(NLAW_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_blk_F,2);
	};

    /* Liveries */
	class TextureSources: TextureSources
	{
		class Olive: Olive
		{
            textures[] =
            {
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa",
                "\A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_INDP_CO.paa",
                "\A3\Weapons_F_Beta\Launchers\Titan\Data\TubeM_INDP_CO.paa"
            };
		};
	};
};
class B_A_LSV_01_unarmed_wdl_F: B_A_LSV_01_unarmed_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_LSV_01_unarmed_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	crew = B_A_Soldier_wdl_F;
	typicalCargo[] = {B_A_Soldier_wdl_F};
	textureList[] =
	{
		Black,0,
		Olive,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
	};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,16);
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
		mag_xx(HandGrenade,10);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		mag_xx(1Rnd_Smoke_Grenade_shell,4);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
		mag_xx(17Rnd_9x21_Mag,12);
		mag_xx(SmokeShell,4);
		mag_xx(SmokeShellGreen,4);
		mag_xx(SmokeShellOrange,4);
		mag_xx(SmokeShellBlue,4);
		mag_xx(NLAW_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_blk_F,2);
	};

    /* Liveries */
	class TextureSources: TextureSources
	{
		class Olive: Olive
		{
            textures[] =
            {
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa",
                "\A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_INDP_CO.paa",
                "\A3\Weapons_F_Beta\Launchers\Titan\Data\TubeM_INDP_CO.paa"
            };
		};
	};
};
class B_A_LSV_01_light_wdl_F: B_A_LSV_01_light_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_LSV_01_light_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	crew = B_A_Soldier_wdl_F;
	typicalCargo[] = {B_A_Soldier_wdl_F};
	textureList[] =
	{
		Black,0,
		Olive,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
	};

    /* Inventory */
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_black_mag,16);
		mag_xx(200Rnd_65x39_cased_Box_Red,3);
		mag_xx(HandGrenade,10);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		mag_xx(1Rnd_Smoke_Grenade_shell,4);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
		mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
		mag_xx(17Rnd_9x21_Mag,12);
		mag_xx(SmokeShell,4);
		mag_xx(SmokeShellGreen,4);
		mag_xx(SmokeShellOrange,4);
		mag_xx(SmokeShellBlue,4);
		mag_xx(NLAW_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_SA80_blk_F,2);
	};

    /* Liveries */
	class TextureSources: TextureSources
	{
		class Olive: Olive
		{
            textures[] =
            {
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
                "\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa",
                "\A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_INDP_CO.paa",
                "\A3\Weapons_F_Beta\Launchers\Titan\Data\TubeM_INDP_CO.paa"
            };
		};
	};
};