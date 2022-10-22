/* US */
class B_Plane_Fighter_05_F: Plane_Fighter_05_Base_F
{
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
			{canopy_rot,0}
		};
		hide[] =
		{
			clan,
			zasleh,
			light,
			"zadni svetlo",
			autobacklit,
			poskozeni
		};
		verticalOffset = 2.445;
		verticalOffsetWorld =-0.051;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	author = $STR_A3_A_AveryTheKitty_and_OlliKoskelainen;
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Plane_Fighter_05_Base_US_F0;
};
class B_Plane_Fighter_05_Stealth_F: Plane_Fighter_05_Base_F
{
	author = $STR_A3_A_AveryTheKitty_and_OlliKoskelainen;
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Plane_Fighter_05_Stealth_US_F0;
	radarTargetSize = 0.4;

    /* Animation Sources */
	class AnimationSources: AnimationSources
	{
		class pylon_1_hide: pylon_1_hide
		{
		    initPhase = true;
		};
		class pylon_2_hide: pylon_2_hide
		{
		    initPhase = true;
		};
		class pylon_3_hide: pylon_3_hide
		{
		    initPhase = true;
		};
		class pylon_4_hide: pylon_4_hide
		{
		    initPhase = true;
		};
		class pylon_5_hide: pylon_5_hide
		{
		    initPhase = true;
		};
		class pylon_6_hide: pylon_6_hide
		{
		    initPhase = true;
		};
	};

    /* Sensors & Components */
	class Components: Components
	{
		class TransportPylonsComponent
		{
            UIPicture = "\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\UI\Plane_Fighter_05_3DEN_CA.paa";
            class pylons
            {
                class pylonDummy1
                {
                    attachment = "";
                    UIposition[] = {10,10};
                };
                class pylonDummy2: pylonDummy1{};
                class pylonDummy3: pylonDummy1{};
                class pylonDummy4: pylonDummy1{};
                class pylonDummy5: pylonDummy1{};
                class pylonDummy6: pylonDummy1{};
                class pylonBayRight1
                {
                    hardpoints[] =
                    {
                        B_AMRAAM_D_INT,
                        B_GBU12
                    };
                    priority = 4;
                    maxweight = 2500;
                    attachment = PylonMissile_Missile_AMRAAM_D_INT_x1;
                    UIposition[] = {0.33,0.35};
                    bay = 2;
                };
                class pylonBayLeft1: pylonBayRight1
                {
                    UIposition[] = {0.33,0.15};
                    mirroredMissilePos = 7;
                    bay = 1;
                };
                class pylonBayRight2: pylonBayRight1
                {
                    hardpoints[] =
                    {
                        B_AMRAAM_D_INT,
                        B_SDB_QUAD_RAIL,
						B_AGM_154,
                        B_GBU12
                    };
                    priority = 2;
                    attachment = PylonRack_Bomb_SDB_x4;
                    UIposition[] = {0.33,0.3};
                };
                class pylonBayLeft2: pylonBayLeft1
                {
                    hardpoints[] =
                    {
                        B_AMRAAM_D_INT,
                        B_SDB_QUAD_RAIL,
						B_AGM_154,
                        B_GBU12
                    };
                    attachment = PylonRack_Bomb_SDB_x4;
                    UIposition[] = {0.33,0.2};
                    mirroredMissilePos = 9;
                };
                class pylonCenter1
                {
                    hardpoints[] = {B_F38_CENTER_PYLON};
                    attachment = PylonWeapon_220Rnd_25mm_shells;
                    priority = 11;
                    maxweight = 1000;
                    UIposition[] = {0.33,0.25};
                };
            };
            class presets
            {
                class empty
                {
                    displayName = $STR_empty;
                    attachment[] = {};
                };
                class default
                {
                    displayName = $STR_vehicle_default;
                    attachment[] =
                    {
                        "",
                        "",
                        "",
                        "",
                        "",
                        "",
                        PylonMissile_Missile_AMRAAM_D_INT_x1,
                        PylonMissile_Missile_AMRAAM_D_INT_x1,
                        PylonRack_Bomb_SDB_x4,
                        PylonRack_Bomb_SDB_x4,
                        PylonWeapon_220Rnd_25mm_shells
                    };
                };
                class AA
                {
                    displayName = $STR_A3_Cfgmagazines_titan_aa_dns;
                    attachment[] =
                    {
                        "",
                        "",
                        "",
                        "",
                        "",
                        "",
                        PylonMissile_Missile_AMRAAM_D_INT_x1,
                        PylonMissile_Missile_AMRAAM_D_INT_x1,
                        PylonMissile_Missile_AMRAAM_D_INT_x1,
                        PylonMissile_Missile_AMRAAM_D_INT_x1,
                        PylonWeapon_220Rnd_25mm_shells
                    };
                };
                class CAS
                {
                    displayName = $STR_A3_SHOWCASE_FIXEDWINGS_BIS_TSKAAF_WP;
                    attachment[] =
                    {
                        "",
                        "",
                        "",
                        "",
                        "",
                        "",
                        PylonMissile_Missile_AMRAAM_D_INT_x1,
                        PylonMissile_Missile_AMRAAM_D_INT_x1,
                        PylonMissile_Bomb_GBU12_x1,
                        PylonMissile_Bomb_GBU12_x1,
                        PylonWeapon_220Rnd_25mm_shells
                    };
                };
                class Cluster
                {
                    displayName = $STR_A3_CfgVehicles_Pylons_Presets_Cluster0;
                    attachment[] =
                    {
                        "",
                        "",
                        "",
                        "",
                        "",
                        "",
                        PylonMissile_Missile_AMRAAM_D_INT_x1,
                        PylonMissile_Missile_AMRAAM_D_INT_x1,
                        PylonMissile_1Rnd_BombCluster_01_F,
                        PylonMissile_1Rnd_BombCluster_01_F,
                        PylonWeapon_220Rnd_25mm_shells
                    };
                };
            };
            class Bays
            {
                class BayLeft1
                {
                    bayOpenTime = 0.5;
                    openBayWhenWeaponSelected = 0;
                    autoCloseWhenEmptyDelay = 2;
                };
                class BayRight1
                {
                    bayOpenTime = 0.5;
                    openBayWhenWeaponSelected = 0;
                    autoCloseWhenEmptyDelay = 2;
                };
            };
		};
	};
};
class B_Ejection_Seat_Plane_Fighter_05_F: Ejection_Seat_Plane_Fighter_05_base_F
{
	class SimpleObject
	{
		eden = false;
		animate[] = {};
		hide[] =
		{
            zasleh,
            "zadni svetlo",
            "brzdove svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 0.002;
		verticalOffsetWorld = 0;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	side = TWest;
	faction = BLU_F;
	crew = B_Fighter_Pilot_F;
};

/* US (Pacific) */
class B_T_Plane_Fighter_05_F: B_Plane_Fighter_05_F
{
	author = $STR_A3_A_AveryTheKitty_and_OlliKoskelainen;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Plane_Fighter_05_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_T_F;
	crew = B_T_Fighter_Pilot_F;
	typicalCargo[] = {B_T_Fighter_Pilot_F};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = B_T_Ejection_Seat_Plane_Fighter_05_F;
	};
};
class B_T_Plane_Fighter_05_Stealth_F: B_Plane_Fighter_05_Stealth_F
{
	author = $STR_A3_A_AveryTheKitty_and_OlliKoskelainen;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Plane_Fighter_05_Stealth_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_T_F;
	crew = B_T_Fighter_Pilot_F;
	typicalCargo[] = {B_T_Fighter_Pilot_F};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = B_T_Ejection_Seat_Plane_Fighter_05_F;
	};
};
class B_T_Ejection_Seat_Plane_Fighter_05_F: Ejection_Seat_Plane_Fighter_05_base_F
{
	class SimpleObject
	{
		eden = false;
		animate[] = {};
		hide[] =
		{
            zasleh,
            "zadni svetlo",
            "brzdove svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 0.002;
		verticalOffsetWorld = 0;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	side = TWest;
	faction = BLU_T_F;
	crew = B_T_Fighter_Pilot_F;
};

/* US (Woodland) */
class B_W_Plane_Fighter_05_F: B_Plane_Fighter_05_F
{
	author = $STR_A3_A_AveryTheKitty_and_OlliKoskelainen;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Plane_Fighter_05_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Fighter_Pilot_F;
	typicalCargo[] = {B_W_Fighter_Pilot_F};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = B_W_Ejection_Seat_Plane_Fighter_05_F;
	};
};
class B_W_Plane_Fighter_05_Stealth_F: B_Plane_Fighter_05_Stealth_F
{
	author = $STR_A3_A_AveryTheKitty_and_OlliKoskelainen;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Plane_Fighter_05_Stealth_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Fighter_Pilot_F;
	typicalCargo[] = {B_W_Fighter_Pilot_F};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = B_W_Ejection_Seat_Plane_Fighter_05_F;
	};
};
class B_W_Ejection_Seat_Plane_Fighter_05_F: Ejection_Seat_Plane_Fighter_05_base_F
{
	class SimpleObject
	{
		eden = false;
		animate[] = {};
		hide[] =
		{
            zasleh,
            "zadni svetlo",
            "brzdove svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 0.002;
		verticalOffsetWorld = 0;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	side = TWest;
	faction = BLU_W_F;
	crew = B_W_Fighter_Pilot_F;
};

/* BAF */
class B_A_Plane_Fighter_05_F: B_Plane_Fighter_05_F
{
	author = $STR_A3_A_AveryTheKitty_and_OlliKoskelainen;
	displayName = $STR_A3_A_CfgVehicles_Plane_Fighter_05_Base_F0;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Plane_Fighter_05_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_A_F;
	crew = B_A_Fighter_Pilot_F;
	typicalCargo[] = {B_A_Fighter_Pilot_F};
	textureList[] = {DarkGrey,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext1_BAF_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext2_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext3_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_pylon_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext_glass_CA.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int1_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int2_CO.paa"
	};

    /* Liveries */
	class TextureSources: TextureSources
	{
		class DarkGrey: DarkGrey
		{
            textures[] =
            {
                "\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext1_BAF_CO.paa",
				"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext2_CO.paa",
				"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext3_CO.paa",
				"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_pylon_CO.paa",
				"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext_glass_CA.paa",
				"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int1_CO.paa",
				"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int2_CO.paa"
            };
            factions[] = {BLU_A_F};
		};
	};

	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = B_A_Ejection_Seat_Plane_Fighter_05_F;
	};
};
class B_A_Plane_Fighter_05_Stealth_F: B_Plane_Fighter_05_Stealth_F
{
	author = $STR_A3_A_AveryTheKitty_and_OlliKoskelainen;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Plane_Fighter_05_Stealth_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_A_F;
	displayName = $STR_A3_A_CfgVehicles_Plane_Fighter_05_Stealth_F0;
	crew = B_A_Fighter_Pilot_F;
	typicalCargo[] = {B_A_Fighter_Pilot_F};
	textureList[] = {DarkGrey,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext1_BAF_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext2_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext3_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_pylon_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext_glass_CA.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int1_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int2_CO.paa"
	};

    /* Liveries */
	class TextureSources: TextureSources
	{
		class DarkGrey: DarkGrey
		{
            textures[] =
            {
                "\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext1_BAF_CO.paa",
				"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext2_CO.paa",
				"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext3_CO.paa",
				"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_pylon_CO.paa",
				"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext_glass_CA.paa",
				"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int1_CO.paa",
				"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int2_CO.paa"
            };
            factions[] = {BLU_A_F};
		};
	};
    
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = B_A_Ejection_Seat_Plane_Fighter_05_F;
	};
};
class B_A_Ejection_Seat_Plane_Fighter_05_F: Ejection_Seat_Plane_Fighter_05_base_F
{
	class SimpleObject
	{
		eden = false;
		animate[] = {};
		hide[] =
		{
            zasleh,
            "zadni svetlo",
            "brzdove svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 0.002;
		verticalOffsetWorld = 0;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	side = TWest;
	faction = BLU_A_F;
	crew = B_A_Fighter_Pilot_F;
};

/* BAF (Pacific) */
class B_A_Plane_Fighter_05_tna_F: B_A_Plane_Fighter_05_F
{
	author = $STR_A3_A_AveryTheKitty_and_OlliKoskelainen;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Plane_Fighter_05_tna_F.jpg";
	faction = BLU_A_tna_F;
	crew = B_A_Fighter_Pilot_tna_F;
	typicalCargo[] = {B_A_Fighter_Pilot_tna_F};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = B_A_Ejection_Seat_Plane_Fighter_05_tna_F;
	};
};
class B_A_Plane_Fighter_05_Stealth_tna_F: B_A_Plane_Fighter_05_Stealth_F
{
	author = $STR_A3_A_AveryTheKitty_and_OlliKoskelainen;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Plane_Fighter_05_Stealth_tna_F.jpg";
	faction = BLU_A_tna_F;
	crew = B_A_Fighter_Pilot_tna_F;
	typicalCargo[] = {B_A_Fighter_Pilot_tna_F};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = B_A_Ejection_Seat_Plane_Fighter_05_tna_F;
	};
};
class B_A_Ejection_Seat_Plane_Fighter_05_tna_F: B_A_Ejection_Seat_Plane_Fighter_05_F
{
	class SimpleObject
	{
		eden = false;
		animate[] = {};
		hide[] =
		{
            zasleh,
            "zadni svetlo",
            "brzdove svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 0.002;
		verticalOffsetWorld = 0;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	author = $STR_A3_A_AveryTheKitty;
	faction = BLU_A_tna_F;
	crew = B_A_Fighter_Pilot_tna_F;
};

/* BAF (Woodland) */
class B_A_Plane_Fighter_05_wdl_F: B_A_Plane_Fighter_05_F
{
	author = $STR_A3_A_AveryTheKitty_and_OlliKoskelainen;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Plane_Fighter_05_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	crew = B_A_Fighter_Pilot_wdl_F;
	typicalCargo[] = {B_A_Fighter_Pilot_wdl_F};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = B_A_Ejection_Seat_Plane_Fighter_05_wdl_F;
	};
};
class B_A_Plane_Fighter_05_Stealth_wdl_F: B_A_Plane_Fighter_05_Stealth_F
{
	author = $STR_A3_A_AveryTheKitty_and_OlliKoskelainen;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Plane_Fighter_05_Stealth_wdl_F.jpg";
	faction = BLU_A_wdl_F;
	crew = B_A_Fighter_Pilot_wdl_F;
	typicalCargo[] = {B_A_Fighter_Pilot_wdl_F};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = B_A_Ejection_Seat_Plane_Fighter_05_wdl_F;
	};
};
class B_A_Ejection_Seat_Plane_Fighter_05_wdl_F: B_A_Ejection_Seat_Plane_Fighter_05_F
{
	class SimpleObject
	{
		eden = false;
		animate[] = {};
		hide[] =
		{
            zasleh,
            "zadni svetlo",
            "brzdove svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 0.002;
		verticalOffsetWorld = 0;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	author = $STR_A3_A_AveryTheKitty;
	faction = BLU_A_wdl_F;
	crew = B_A_Fighter_Pilot_wdl_F;
};

/* USMC */
class B_USMC_Plane_Fighter_05_F: Plane_Fighter_05_Base_F
{
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
			{canopy_rot,0}
		};
		hide[] =
		{
			clan,
			zasleh,
			light,
			"zadni svetlo",
			autobacklit,
			poskozeni
		};
		verticalOffset = 2.445;
		verticalOffsetWorld =-0.051;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = B_USMC_Ejection_Seat_Plane_Fighter_05_F;
	};
	author = $STR_A3_A_AveryTheKitty_and_OlliKoskelainen;
	faction = BLU_NATO_lxWS;
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_Plane_Fighter_05_Base_US_F0;
};
class B_USMC_Plane_Fighter_05_Stealth_F: Plane_Fighter_05_Base_F
{
	author = $STR_A3_A_AveryTheKitty_and_OlliKoskelainen;
	scope = public;
	faction = BLU_NATO_lxWS;
	displayName = $STR_A3_A_CfgVehicles_Plane_Fighter_05_Stealth_US_F0;
	radarTargetSize = 0.4;

	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = B_USMC_Ejection_Seat_Plane_Fighter_05_F;
	};

    /* Animation Sources */
	class AnimationSources: AnimationSources
	{
		class pylon_1_hide: pylon_1_hide
		{
		    initPhase = true;
		};
		class pylon_2_hide: pylon_2_hide
		{
		    initPhase = true;
		};
		class pylon_3_hide: pylon_3_hide
		{
		    initPhase = true;
		};
		class pylon_4_hide: pylon_4_hide
		{
		    initPhase = true;
		};
		class pylon_5_hide: pylon_5_hide
		{
		    initPhase = true;
		};
		class pylon_6_hide: pylon_6_hide
		{
		    initPhase = true;
		};
	};

    /* Sensors & Components */
	class Components: Components
	{
		class TransportPylonsComponent
		{
            UIPicture = "\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\UI\Plane_Fighter_05_3DEN_CA.paa";
            class pylons
            {
                class pylonDummy1
                {
                    attachment = "";
                    UIposition[] = {10,10};
                };
                class pylonDummy2: pylonDummy1{};
                class pylonDummy3: pylonDummy1{};
                class pylonDummy4: pylonDummy1{};
                class pylonDummy5: pylonDummy1{};
                class pylonDummy6: pylonDummy1{};
                class pylonBayRight1
                {
                    hardpoints[] =
                    {
                        B_AMRAAM_D_INT,
                        B_GBU12
                    };
                    priority = 4;
                    maxweight = 2500;
                    attachment = PylonMissile_Missile_AMRAAM_D_INT_x1;
                    UIposition[] = {0.33,0.35};
                    bay = 2;
                };
                class pylonBayLeft1: pylonBayRight1
                {
                    UIposition[] = {0.33,0.15};
                    mirroredMissilePos = 7;
                    bay = 1;
                };
                class pylonBayRight2: pylonBayRight1
                {
                    hardpoints[] =
                    {
                        B_AMRAAM_D_INT,
                        B_SDB_QUAD_RAIL,
						B_AGM_154,
                        B_GBU12
                    };
                    priority = 2;
                    attachment = PylonRack_Bomb_SDB_x4;
                    UIposition[] = {0.33,0.3};
                };
                class pylonBayLeft2: pylonBayLeft1
                {
                    hardpoints[] =
                    {
                        B_AMRAAM_D_INT,
                        B_SDB_QUAD_RAIL,
						B_AGM_154,
                        B_GBU12
                    };
                    attachment = PylonRack_Bomb_SDB_x4;
                    UIposition[] = {0.33,0.2};
                    mirroredMissilePos = 9;
                };
                class pylonCenter1
                {
                    hardpoints[] = {B_F38_CENTER_PYLON};
                    attachment = PylonWeapon_220Rnd_25mm_shells;
                    priority = 11;
                    maxweight = 1000;
                    UIposition[] = {0.33,0.25};
                };
            };
            class presets
            {
                class empty
                {
                    displayName = $STR_empty;
                    attachment[] = {};
                };
                class default
                {
                    displayName = $STR_vehicle_default;
                    attachment[] =
                    {
                        "",
                        "",
                        "",
                        "",
                        "",
                        "",
                        PylonMissile_Missile_AMRAAM_D_INT_x1,
                        PylonMissile_Missile_AMRAAM_D_INT_x1,
                        PylonRack_Bomb_SDB_x4,
                        PylonRack_Bomb_SDB_x4,
                        PylonWeapon_220Rnd_25mm_shells
                    };
                };
                class AA
                {
                    displayName = $STR_A3_Cfgmagazines_titan_aa_dns;
                    attachment[] =
                    {
                        "",
                        "",
                        "",
                        "",
                        "",
                        "",
                        PylonMissile_Missile_AMRAAM_D_INT_x1,
                        PylonMissile_Missile_AMRAAM_D_INT_x1,
                        PylonMissile_Missile_AMRAAM_D_INT_x1,
                        PylonMissile_Missile_AMRAAM_D_INT_x1,
                        PylonWeapon_220Rnd_25mm_shells
                    };
                };
                class CAS
                {
                    displayName = $STR_A3_SHOWCASE_FIXEDWINGS_BIS_TSKAAF_WP;
                    attachment[] =
                    {
                        "",
                        "",
                        "",
                        "",
                        "",
                        "",
                        PylonMissile_Missile_AMRAAM_D_INT_x1,
                        PylonMissile_Missile_AMRAAM_D_INT_x1,
                        PylonMissile_Bomb_GBU12_x1,
                        PylonMissile_Bomb_GBU12_x1,
                        PylonWeapon_220Rnd_25mm_shells
                    };
                };
                class Cluster
                {
                    displayName = $STR_A3_CfgVehicles_Pylons_Presets_Cluster0;
                    attachment[] =
                    {
                        "",
                        "",
                        "",
                        "",
                        "",
                        "",
                        PylonMissile_Missile_AMRAAM_D_INT_x1,
                        PylonMissile_Missile_AMRAAM_D_INT_x1,
                        PylonMissile_1Rnd_BombCluster_01_F,
                        PylonMissile_1Rnd_BombCluster_01_F,
                        PylonWeapon_220Rnd_25mm_shells
                    };
                };
            };
            class Bays
            {
                class BayLeft1
                {
                    bayOpenTime = 0.5;
                    openBayWhenWeaponSelected = 0;
                    autoCloseWhenEmptyDelay = 2;
                };
                class BayRight1
                {
                    bayOpenTime = 0.5;
                    openBayWhenWeaponSelected = 0;
                    autoCloseWhenEmptyDelay = 2;
                };
            };
		};
	};
};
class B_USMC_Ejection_Seat_Plane_Fighter_05_F: Ejection_Seat_Plane_Fighter_05_base_F
{
	class SimpleObject
	{
		eden = false;
		animate[] = {};
		hide[] =
		{
            zasleh,
            "zadni svetlo",
            "brzdove svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 0.002;
		verticalOffsetWorld = 0;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	side = TWest;
	faction = BLU_NATO_lxWS;
	crew = B_Fighter_Pilot_F;
};