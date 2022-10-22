/* BAF */
class B_A_Boat_Armed_01_hmg_F: Boat_Armed_01_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
            {damagehide,0},
            {barrel_recoil,0},
            {bolt_recoil,0},
            {turret_shake,0},
            {turret_shake_aside,0},
            {magazine_hide,0},
            {mainturret,0},
            {damagehideotocvez,0},
            {maingun,0.090000004},
            {damagehideotochlaven,0},
            {rearturret,-3.1600001},
            {reargun,0.090000004},
            {muzzleflash,0},
            {zaslehrot,395},
            {muzzleflash2,0},
            {zasleh2rot,370},
            {fuel,1},
            {mph,0},
            {rpm,0},
            {amps_random,0},
            {oil_random,0},
            {trim_random,0},
            {tmp_random,0},
            {volt_random,0},
            {drivingwheel,0},
            {ammo_belt_2_rotation_prep,0},
            {ammo_belt_2_rotation_main,0},
            {ammobelt_hide,0},
            {bullet001_2_hide,1},
            {bullet002_2_hide,1},
            {bullet003_2_hide,1},
            {bullet004_2_hide,1},
            {bullet005_2_hide,1},
            {bullet006_2_hide,1},
            {muzzle1_shake,0},
            {muzzle1_shake_back,0},
            {bolt_move_2,0},
            {positionlights,0}
		};
		hide[] =
		{
            zasleh,
            "p svetlo",
            "zadni svetlo",
            "brzdove svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 3.324;
		verticalOffsetWorld = -0.94;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Boat_Armed_01_hmg_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_Boat_Armed_01_HMG0;
	accuracy = 1.5;
	side = TWest;
	faction = BLU_A_F;
	crew = B_A_Soldier_F;
	typicalCargo[] =
	{
		B_A_Soldier_F,
		B_A_Soldier_F
	};
	textureList[] = {Blu,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Boat_F\Boat_Armed_01\Data\Boat_Armed_01_ext_CO.paa",
		"\A3\Boat_F\Boat_Armed_01\Data\Boat_Armed_01_int_CO.paa",
		"\A3\Boat_F\Boat_Armed_01\Data\Boat_Armed_01_crows_BLUFOR_CO.paa"
	};
};

/* BAF (Pacific) */
class B_A_Boat_Armed_01_hmg_tna_F: B_A_Boat_Armed_01_hmg_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
		{
            {damagehide,0},
            {barrel_recoil,0},
            {bolt_recoil,0},
            {turret_shake,0},
            {turret_shake_aside,0},
            {magazine_hide,0},
            {mainturret,0},
            {damagehideotocvez,0},
            {maingun,0.090000004},
            {damagehideotochlaven,0},
            {rearturret,-3.1600001},
            {reargun,0.090000004},
            {muzzleflash,0},
            {zaslehrot,395},
            {muzzleflash2,0},
            {zasleh2rot,370},
            {fuel,1},
            {mph,0},
            {rpm,0},
            {amps_random,0},
            {oil_random,0},
            {trim_random,0},
            {tmp_random,0},
            {volt_random,0},
            {drivingwheel,0},
            {ammo_belt_2_rotation_prep,0},
            {ammo_belt_2_rotation_main,0},
            {ammobelt_hide,0},
            {bullet001_2_hide,1},
            {bullet002_2_hide,1},
            {bullet003_2_hide,1},
            {bullet004_2_hide,1},
            {bullet005_2_hide,1},
            {bullet006_2_hide,1},
            {muzzle1_shake,0},
            {muzzle1_shake_back,0},
            {bolt_move_2,0},
            {positionlights,0}
		};
		hide[] =
	    {
		zasleh,
            "p svetlo",
            "zadni svetlo",
            "brzdove svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 3.324;
		verticalOffsetWorld = -0.94;
		init = "''";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Boat_Armed_01_hmg_tna_F.jpg";
	faction = BLU_A_tna_F;
	crew = B_A_Soldier_tna_F;
	typicalCargo[] =
	{
		B_A_Soldier_tna_F,
		B_A_Soldier_tna_F
	};
};