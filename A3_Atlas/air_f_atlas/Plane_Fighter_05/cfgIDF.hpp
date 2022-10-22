class Atlas_I_I_Plane_Fighter_05_F: Plane_Fighter_05_Base_F
{
	author = $STR_A3_A_AveryTheKitty_and_OlliKoskelainen;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Plane_Fighter_05_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_I_I_Plane_Fighter_05_F0;
	side = TGuerrila;
	faction = Atlas_IND_I_F;
	crew = Atlas_I_I_Fighter_Pilot_F;
	typicalCargo[] = {Atlas_I_I_Fighter_Pilot_F};
	textureList[] = {Desert,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Air_F_Atlas\Plane_Fighter_05\Data\Plane_Fighter_05_ext1_desert_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext2_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext3_CO.paa",
		"\A3_Atlas\Air_F_Atlas\Plane_Fighter_05\Data\Plane_Fighter_05_pylon_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext_glass_CA.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int1_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int2_CO.paa"
	};
	class Components: Components
	{
		class TransportPylonsComponent: TransportPylonsComponent
		{
			class pylons: pylons
			{
				class pylons1: pylons1{};
				class pylons2: pylons2{};
				class pylons3: pylons3{};
				class pylons4: pylons4{};
				class pylons5: pylons5{};
				class pylons6: pylons6{};
				class pylonBayRight1: pylonBayRight1{};
				class pylonBayLeft1: pylonBayLeft1{};
				class pylonBayRight2: pylonBayRight2{};
				class pylonBayLeft2: pylonBayLeft2{};
				class pylonCenter1: pylonCenter1
				{
					hardpoints[] = {I_I_F38_CENTER_PYLON};
					attachment = PylonWeapon_220Rnd_25mm_shells_yellow;
				};
			};
			class presets: presets
			{
				class default: default
				{
					attachment[] =
					{
						PylonRack_Missile_BIM9X_x1,
						PylonRack_Missile_BIM9X_x1,
						PylonRack_Missile_AMRAAM_D_x2,
						PylonRack_Missile_AMRAAM_D_x2,
						PylonMissile_Bomb_GBU12_x1,
						PylonMissile_Bomb_GBU12_x1,
						PylonMissile_Missile_AMRAAM_D_INT_x1,
						PylonMissile_Missile_AMRAAM_D_INT_x1,
						PylonRack_Bomb_SDB_x4,
						PylonRack_Bomb_SDB_x4,
						PylonWeapon_220Rnd_25mm_shells_yellow
					};
				};
				class AA: AA
				{
					attachment[] =
					{
						PylonRack_Missile_BIM9X_x1,
						PylonRack_Missile_BIM9X_x1,
						PylonRack_Missile_BIM9X_x2,
						PylonRack_Missile_BIM9X_x2,
						PylonRack_Missile_AMRAAM_D_x2,
						PylonRack_Missile_AMRAAM_D_x2,
						PylonMissile_Missile_AMRAAM_D_INT_x1,
						PylonMissile_Missile_AMRAAM_D_INT_x1,
						PylonMissile_Missile_AMRAAM_D_INT_x1,
						PylonMissile_Missile_AMRAAM_D_INT_x1,
						PylonWeapon_220Rnd_25mm_shells_yellow
					};
				};
				class CAS: CAS
				{
					attachment[] =
					{
						PylonRack_Missile_BIM9X_x1,
						PylonRack_Missile_BIM9X_x1,
						PylonRack_Missile_AGM_02_x1,
						PylonRack_Missile_AGM_02_x1,
						PylonRack_Bomb_GBU12_x2,
						PylonRack_Bomb_GBU12_x2,
						PylonMissile_Bomb_GBU12_x1,
						PylonMissile_Bomb_GBU12_x1,
						PylonRack_Bomb_SDB_x4,
						PylonRack_Bomb_SDB_x4,
						PylonWeapon_220Rnd_25mm_shells_yellow
					};
				};
				class Cluster: Cluster
				{
					attachment[] =
					{
						PylonRack_Missile_BIM9X_x1,
						PylonRack_Missile_BIM9X_x1,
						PylonRack_Missile_AGM_02_x1,
						PylonRack_Missile_AGM_02_x1,
						PylonRack_2Rnd_BombCluster_01_F,
						PylonRack_2Rnd_BombCluster_01_F,
						PylonMissile_Missile_AMRAAM_D_INT_x1,
						PylonMissile_Missile_AMRAAM_D_INT_x1,
						PylonMissile_1Rnd_BombCluster_01_F,
						PylonMissile_1Rnd_BombCluster_01_F,
						PylonWeapon_220Rnd_25mm_shells_yellow
					};
				};
			};
            class Bays: Bays
            {
                class BayLeft1: BayLeft1{};
                class BayRight1: BayRight1{};
            };
        };
	};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = Atlas_I_I_Ejection_Seat_Plane_Fighter_05_F;
	};
};
class Atlas_I_I_Plane_Fighter_05_Stealth_F: Plane_Fighter_05_Base_F
{
	author = $STR_A3_A_AveryTheKitty_and_OlliKoskelainen;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Plane_Fighter_05_Stealth_F.jpg";
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_I_I_Plane_Fighter_05_Stealth_F0;
	side = TGuerrila;
	faction = Atlas_IND_I_F;
	crew = Atlas_I_I_Fighter_Pilot_F;
	typicalCargo[] = {Atlas_I_I_Fighter_Pilot_F};
	textureList[] = {Desert,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Air_F_Atlas\Plane_Fighter_05\Data\Plane_Fighter_05_ext1_desert_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext2_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext3_CO.paa",
		"\A3_Atlas\Air_F_Atlas\Plane_Fighter_05\Data\Plane_Fighter_05_pylon_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_ext_glass_CA.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int1_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_05\Data\Plane_Fighter_05_int2_CO.paa"
	};
	radarTargetSize = 0.4;
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
                        B_GBU12
                    };
                    attachment = PylonRack_Bomb_SDB_x4;
                    UIposition[] = {0.33,0.2};
                    mirroredMissilePos = 9;
                };
                class pylonCenter1
                {
                    hardpoints[] = {I_I_F38_CENTER_PYLON};
                    attachment = PylonWeapon_220Rnd_25mm_shells_yellow;
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
                        PylonWeapon_220Rnd_25mm_shells_yellow
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
                        PylonWeapon_220Rnd_25mm_shells_yellow
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
                        PylonMissile_Bomb_GBU12_x1,
                        PylonMissile_Bomb_GBU12_x1,
                        PylonRack_Bomb_SDB_x4,
                        PylonRack_Bomb_SDB_x4,
                        PylonWeapon_220Rnd_25mm_shells_yellow
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
                        PylonWeapon_220Rnd_25mm_shells_yellow
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
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = I_I_Ejection_Seat_Plane_Fighter_05_F;
	};
};
class Atlas_I_I_Ejection_Seat_Plane_Fighter_05_F: Ejection_Seat_Plane_Fighter_05_base_F
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
	side = TGuerrila;
	faction = Atlas_IND_I_F;
	crew = Atlas_I_I_Fighter_Pilot_F;
};