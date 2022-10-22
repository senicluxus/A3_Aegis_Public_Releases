class Opf_I_R_LSV_02_armed_F: LSV_02_armed_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {damagehide,0},
            {damagehidevez,0},
            {damagehidehlaven,0},
            {wheel_1_1_destruct,0},
            {wheel_1_2_destruct,0},
            {wheel_1_3_destruct,0},
            {wheel_1_4_destruct,0},
            {wheel_2_1_destruct,0},
            {wheel_2_2_destruct,0},
            {wheel_2_3_destruct,0},
            {wheel_2_4_destruct,0},
            {wheel_1_1_destruct_unhide,0},
            {wheel_1_2_destruct_unhide,0},
            {wheel_1_3_destruct_unhide,0},
            {wheel_1_4_destruct_unhide,0},
            {wheel_2_1_destruct_unhide,0},
            {wheel_2_2_destruct_unhide,0},
            {wheel_2_3_destruct_unhide,0},
            {wheel_2_4_destruct_unhide,0},
            {wheel_1_3_damage,0},
            {wheel_1_4_damage,0},
            {wheel_2_3_damage,0},
            {wheel_2_4_damage,0},
            {wheel_1_3_damper_damage_backanim,0},
            {wheel_1_4_damper_damage_backanim,0},
            {wheel_2_3_damper_damage_backanim,0},
            {wheel_2_4_damper_damage_backanim,0},
            {wheel_1_1,0},
            {wheel_2_1,0},
            {wheel_1_2,0},
            {wheel_2_2,0},
            {daylights,0},
            {reverse_light,1},
            {wheel_1_1_damage,0},
            {wheel_1_2_damage,0},
            {wheel_2_1_damage,0},
            {wheel_2_2_damage,0},
            {wheel_1_1_damper_damage_backanim,0},
            {wheel_1_2_damper_damage_backanim,0},
            {wheel_2_1_damper_damage_backanim,0},
            {wheel_2_2_damper_damage_backanim,0},
            {wheel_1_1_damper,0},
            {wheel_2_1_damper,0},
            {wheel_1_2_damper,0},
            {wheel_2_2_damper,0},
            {drivingwheel,0},
            {indicatorspeed,0},
            {fuel,1},
            {steering_1_1,0},
            {steering_2_1,0},
            {hidegunner,0},
            {mainturret,0},
            {maingun,0},
            {minigun,0.33},
            {zasleh_rot,498},
            {zasleh_hide,0},
            {opticsfix,0},
            {wheel_1_1_damper_land_hack,0},
            {wheel_1_2_damper_land_hack,0},
            {wheel_2_1_damper_land_hack,0},
            {wheel_2_2_damper_land_hack,0},
            {magazine_reload_hide_1,0}
        };
		hide[] =
        {
            clan,
            zasleh,
            light_1,
            light_2,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 1.599;
		verticalOffsetWorld = -0.131;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_R_LSV_02_armed_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_R_LSV_02_armed_F0;
	side = TGuerrila;
	faction = Opf_IND_R_F;
	crew = Opf_I_R_soldier_F;
	typicalCargo[] = {Opf_I_R_soldier_F};
	textureList[] = {Black,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
	};
	class TransportMagazines
	{
		mag_xx(SmokeShell,4);
		mag_xx(HandGrenade,4);
		mag_xx(30Rnd_65x39_case_mag,8);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
	};
	class TransportWeapons
	{
		weap_xx(arifle_Abakan_F,2);
	};
};
class Opf_I_R_LSV_02_unarmed_F: LSV_02_unarmed_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {damagehide,0},
            {damagehidevez,0},
            {damagehidehlaven,0},
            {wheel_1_1_destruct,0},
            {wheel_1_2_destruct,0},
            {wheel_1_3_destruct,0},
            {wheel_1_4_destruct,0},
            {wheel_2_1_destruct,0},
            {wheel_2_2_destruct,0},
            {wheel_2_3_destruct,0},
            {wheel_2_4_destruct,0},
            {wheel_1_1_destruct_unhide,0},
            {wheel_1_2_destruct_unhide,0},
            {wheel_1_3_destruct_unhide,0},
            {wheel_1_4_destruct_unhide,0},
            {wheel_2_1_destruct_unhide,0},
            {wheel_2_2_destruct_unhide,0},
            {wheel_2_3_destruct_unhide,0},
            {wheel_2_4_destruct_unhide,0},
            {wheel_1_3_damage,0},
            {wheel_1_4_damage,0},
            {wheel_2_3_damage,0},
            {wheel_2_4_damage,0},
            {wheel_1_3_damper_damage_backanim,0},
            {wheel_1_4_damper_damage_backanim,0},
            {wheel_2_3_damper_damage_backanim,0},
            {wheel_2_4_damper_damage_backanim,0},
            {wheel_1_1,0},
            {wheel_2_1,0},
            {wheel_1_2,0},
            {wheel_2_2,0},
            {daylights,0},
            {reverse_light,1},
            {wheel_1_1_damage,0},
            {wheel_1_2_damage,0},
            {wheel_2_1_damage,0},
            {wheel_2_2_damage,0},
            {wheel_1_1_damper_damage_backanim,0},
            {wheel_1_2_damper_damage_backanim,0},
            {wheel_2_1_damper_damage_backanim,0},
            {wheel_2_2_damper_damage_backanim,0},
            {wheel_1_1_damper,0},
            {wheel_2_1_damper,0},
            {wheel_1_2_damper,0},
            {wheel_2_2_damper,0},
            {drivingwheel,0},
            {indicatorspeed,0},
            {fuel,1},
            {steering_1_1,0},
            {steering_2_1,0},
            {hidegunner,0},
            {mainturret,0},
            {maingun,0},
            {minigun,0},
            {zasleh_rot,0},
            {zasleh_hide,0},
            {opticsfix,0},
            {wheel_1_1_damper_land_hack,0},
            {wheel_1_2_damper_land_hack,0},
            {wheel_2_1_damper_land_hack,0},
            {wheel_2_2_damper_land_hack,0},
            {magazine_reload_hide_1,0}
        };
		hide[] =
        {
            clan,
            zasleh,
            light_1,
            light_2,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 1.598;
		verticalOffsetWorld = -0.132;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Opf\EditorPreviews_F_Opf\Data\CfgVehicles\I_R_LSV_02_unarmed_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_R_LSV_02_unarmed_F0;
	side = TGuerrila;
	faction = Opf_IND_R_F;
	crew = Opf_I_R_soldier_F;
	typicalCargo[] = {Opf_I_R_soldier_F};
	textureList[] = {Black,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
	};
	class TransportMagazines
	{
		mag_xx(SmokeShell,4);
		mag_xx(HandGrenade,4);
		mag_xx(30Rnd_65x39_case_mag,8);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
	};
	class TransportWeapons
	{
		weap_xx(arifle_Abakan_F,2);
	};
};