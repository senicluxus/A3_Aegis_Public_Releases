class Atlas_B_H_Boat_Transport_02_F: Boat_Transport_02_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = false;
		animate[] =
		{
            {compass_rot,0},
            {engine_rot,0},
            {gearstick_rot,0},
            {propeller_rot,0},
            {steeringwheel_rot,0},
            {fuel_rot,1},
            {mph_rot,0},
            {oil_rot,1},
            {rpm_rot,0},
            {trim_rot,0}
		};
		hide[] =
		{
            zasleh,
            "zadni svetlo",
            "brzdove svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 1.317;
		verticalOffsetWorld = -0.681;
		init = "''";
	};
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_H_Boat_Transport_02_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Atlas_BLU_H_F;
	crew = Atlas_B_H_Soldier_F;
	typicalCargo[] =
	{
		Atlas_B_H_Soldier_F,
		Atlas_B_H_Soldier_F
	};
	textureList[] = {Black,1};
	hiddenSelectionsTextures[] =
	{
		"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_CO.paa",
		"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_CO.paa"
	};
};