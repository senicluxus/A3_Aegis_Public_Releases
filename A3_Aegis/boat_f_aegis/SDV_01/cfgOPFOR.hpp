/* IAF */
class O_SDV_01_F: SDV_01_base_F
{
    textureList[] = {Opfor,1};
};

/* China */
class O_T_SDV_01_F: SDV_01_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
            {drivingwheel,0},
            {hidescope,0},
            {damagehide,0},
            {vrtule,0},
            {steering,0},
            {hidedrivingwheel,0},
            {damagehidedrivingwheel,0},
            {elevating,0},
            {drivingwheel_elev,0},
            {hidedrivingwheel_elev,0},
            {damagehidedrivingwheel_elev,0},
            {elevatingflapfl,0},
            {elevatingflapfr,0},
            {obsturret,0},
            {hideobsturret,0},
            {obsgun,0},
            {antenna,0},
            {damagehideantenna,0},
            {door_1_1,1},
            {hidedoor_1_1,0},
            {damagehidedoor_1_1,0},
            {door_1_2,1},
            {hidedoor_1_2,0},
            {damagehidedoor_1_2,0},
            {door_2_1,1},
            {hidedoor_2_1,0},
            {damagehidedoor_2_1,0},
            {door_2_2,1},
            {hidedoor_2_2,0},
            {damagehidedoor_2_2,0},
            {gauges,0},
            {indicatorcompass_1,0},
            {indicatorcompass_2,0},
            {fuel,1},
            {indicatorvertspeed,0},
            {display_on,0},
            {display_on_r,0},
            {ind_alt_1_10m,-0.8},
            {ind_alt_1_100m,-0.8},
            {ind_alt_2_10m,-0.8},
            {ind_alt_2_100m,-0.8},
            {ind_horizondive_1,0},
            {horizondive_1,0},
            {ind_horizondive_2,0},
            {ind_horizonbank_1,-0.01},
            {ind_horizonbank_2,-0.01},
            {ind_rpm,0}
		};
		hide[] =
		{
            zasleh,
            "l svetlo",
            "p svetlo",
            "zadni svetlo",
            "brzdove svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 1.874;
		verticalOffsetWorld = -0.806;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_SDV_01_F.jpg";
	scope = public;
	crew = O_T_Diver_F;
	faction = OPF_T_F;
	side = TEast;
	typicalCargo[] =
	{
		O_T_Soldier_F,
		O_T_Soldier_F
	};
	hiddenSelectionsTextures[] = {"\A3\Boat_F_Beta\SDV_01\Data\SDV_ext_OPFOR_CO.paa"};
	textureList[] = {Opfor,1};
};