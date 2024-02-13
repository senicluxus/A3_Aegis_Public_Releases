/* IAF */
class U_O_OfficerUniform_ocamo: Uniform_Base
{
	displayName = $STR_A3_A_CfgWeapons_U_O_OfficerUniform_ocamo0;
};
class U_O_SpecopsUniform_blk: Uniform_Base
{
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_SpecopsUniform_blk0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_O_SpecopsUniform_blk_CA.paa";
	class ItemInfo: UniformItem
	{
		uniformClass = O_Fatigues_01_blk_F;
	};
};
class U_O_CombatUniform_oicamo: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_CombatUniform_oicamo0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_O_CombatUniform_oicamo_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = O_Fatigues_01_oicamo_F;
		containerClass = Supply40;
		mass = 80;
	};
};
class U_O_OfficerUniform_oicamo: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_OfficerUniform_oicamo0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_O_OfficerUniform_oicamo_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = O_OfficerFatigues_01_oicamo_F;
		containerClass = Supply40;
		mass = 60;
	};
};
/*class Aegis_U_O_Luchnik_hex_F: Uniform_Base
{
	author = $STR_A3_A_Jamie;
	scope = public;
	displayName = $STR_A3_O_CfgWeapons_U_O_Luchnik_hex_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\Aegis_U_O_Luchnik_hex_F_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Aegis_O_Luchnik_01_hex_F;
		containerClass = Supply40;
		mass = 60;
	};
};
class Aegis_U_O_Luchnik_RolledUp_hex_F: Uniform_Base
{
	author = $STR_A3_A_Jamie;
	scope = public;
	displayName = $STR_A3_O_CfgWeapons_U_O_Luchnik_rolledup_hex_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\Aegis_U_O_Luchnik_RolledUp_hex_F_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Aegis_O_Luchnik_01_shortsleeve_hex_F;
		containerClass = Supply40;
		mass = 60;
	};
};*/
class Aegis_U_O_CombatUniform_tshirt_hex_F: Uniform_Base
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_CombatUniform_tshirt_hex_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\Aegis_U_O_CombatUniform_tshirt_hex_F_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Aegis_O_Fatigues_01_Tshirt_hex_F;
		containerClass = Supply40;
		mass = 60;
	};
};
class Aegis_U_O_CombatUniform_tshirt_urb_F: Uniform_Base
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_CombatUniform_tshirt_urb_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\Aegis_U_O_CombatUniform_tshirt_urb_F_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Aegis_O_Fatigues_01_Tshirt_urb_F;
		containerClass = Supply40;
		mass = 60;
	};
};
class Aegis_U_O_CombatFatigues_F: Uniform_Base
{
	author = $STR_A3_A_Jamie;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_CombatFatigues_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\Aegis_U_O_CombatFatigues_F_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Aegis_O_CombatFatigues_F;
		containerClass = Supply40;
		mass = 60;
	};
};
class Aegis_U_O_CombatFatigues_02_F: Uniform_Base
{
	author = $STR_A3_A_Jamie;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_CombatFatigues_02_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\Aegis_U_O_CombatFatigues_02_F_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Aegis_O_CombatFatigues_02_F;
		containerClass = Supply40;
		mass = 60;
	};
};
class U_O_LCF_noInsignia_hex_lxws: Uniform_Base
{
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Aegis_O_LightCombatFatigues_hex_F;
		containerClass = Supply40;
		mass = 60;
	};
};
class Aegis_U_O_LightCombatFatigues_urb_F: Uniform_Base
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_LightCombatFatigues_urb_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_O_officer_noInsignia_urb_F_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Aegis_O_LightCombatFatigues_urb_F;
		containerClass = Supply40;
		mass = 60;
	};
};
/* China */
class U_O_T_Pilot_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_T_Pilot_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_O_T_Pilot_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\pilot_suit_tna_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = O_T_Pilot_F;
		containerClass = Supply60;
		mass = 100;
	};
};
class U_O_C_D_Sniper_oicamo_F: Uniform_Base
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	displayName= $STR_A3_A_CfgWeapons_U_O_C_D_Sniper_oicamo_F0;
	picture="\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\U_O_C_D_Sniper_oicamo_F_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = O_C_D_Sniper_oicamo_F;
		containerClass = Supply40;
		mass = 100;
	};
};
/*class Aegis_U_O_Luchnik_ghex_F: Uniform_Base
{
	author = $STR_A3_A_Jamie;
	scope = public;
	displayName = $STR_A3_O_CfgWeapons_U_O_Luchnik_ghex_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\Aegis_U_O_Luchnik_ghex_F_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Aegis_O_Luchnik_01_ghex_F;
		containerClass = Supply40;
		mass = 60;
	};
};
class Aegis_U_O_Luchnik_RolledUp_ghex_F: Uniform_Base
{
	author = $STR_A3_A_Jamie;
	scope = public;
	displayName = $STR_A3_O_CfgWeapons_U_O_Luchnik_rolledup_ghex_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\Aegis_U_O_Luchnik_RolledUp_ghex_F_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Aegis_O_Luchnik_01_shortsleeve_ghex_F;
		containerClass = Supply40;
		mass = 60;
	};
};*/
class Aegis_U_O_CombatUniform_tshirt_ghex_F: Uniform_Base
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_CombatUniform_tshirt_ghex_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\Aegis_U_O_CombatUniform_tshirt_ghex_F_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Aegis_O_Fatigues_01_Tshirt_ghex_F;
		containerClass = Supply40;
		mass = 60;
	};
};
/*class Aegis_U_O_Luchnik_dst_F: Uniform_Base
{
	author = $STR_A3_A_Jamie;
	scope = public;
	displayName = $STR_A3_O_CfgWeapons_U_O_Luchnik_dst_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\Aegis_U_O_Luchnik_dst_F_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Aegis_O_Luchnik_01_dst_F;
		containerClass = Supply40;
		mass = 60;
	};
};
class Aegis_U_O_Luchnik_RolledUp_dst_F: Uniform_Base
{
	author = $STR_A3_A_Jamie;
	scope = public;
	displayName = $STR_A3_O_CfgWeapons_U_O_Luchnik_rolledup_dst_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\Aegis_U_O_Luchnik_RolledUp_dst_F_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Aegis_O_Luchnik_01_shortsleeve_dst_F;
		containerClass = Supply40;
		mass = 60;
	};
};*/
class Aegis_U_O_CombatUniform_tshirt_dst_F: Uniform_Base
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_CombatUniform_tshirt_dst_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\Aegis_U_O_CombatUniform_tshirt_dst_F_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Aegis_O_Fatigues_01_Tshirt_dst_F;
		containerClass = Supply40;
		mass = 60;
	};
};
class Aegis_U_O_CombatFatigues_ghex_F: Uniform_Base
{
	author = $STR_A3_A_Jamie;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_CombatFatigues_ghex_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\Aegis_U_O_CombatFatigues_ghex_F_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Aegis_O_CombatFatigues_ghex_F;
		containerClass = Supply40;
		mass = 60;
	};
};
class Aegis_U_O_CombatFatigues_02_ghex_F: Uniform_Base
{
	author = $STR_A3_A_Jamie;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_CombatFatigues_02_ghex_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\Aegis_U_O_CombatFatigues_02_ghex_F_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Aegis_O_CombatFatigues_02_ghex_F;
		containerClass = Supply40;
		mass = 60;
	};
};
class Aegis_U_O_CombatFatigues_dst_F: Uniform_Base
{
	author = $STR_A3_A_Jamie;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_CombatFatigues_dst_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\Aegis_U_O_CombatFatigues_dst_F_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Aegis_O_CombatFatigues_dst_F;
		containerClass = Supply40;
		mass = 60;
	};
};
class Aegis_U_O_CombatFatigues_02_dst_F: Uniform_Base
{
	author = $STR_A3_A_Jamie;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_CombatFatigues_02_dst_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\Aegis_U_O_CombatFatigues_02_dst_F_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Aegis_O_CombatFatigues_02_dst_F;
		containerClass = Supply40;
		mass = 60;
	};
};
class Aegis_U_O_LightCombatFatigues_ghex_F: Uniform_Base
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_LightCombatFatigues_ghex_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\Aegis_U_O_LightCombatFatigues_ghex_F_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Aegis_O_LightCombatFatigues_ghex_F;
		containerClass = Supply40;
		mass = 60;
	};
};
class Aegis_U_O_LightCombatFatigues_dst_F: Uniform_Base
{
	author = $STR_A3_A_Ravenholme;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_LightCombatFatigues_dst_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\Aegis_U_O_LightCombatFatigues_dst_F_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Aegis_O_LightCombatFatigues_dst_F;
		containerClass = Supply40;
		mass = 60;
	};
};

/* Argana */
class U_O_officer_noInsignia_urb_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_officer_noInsignia_urb_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_O_officer_noInsignia_urb_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = O_LightFatigues_01_urb_F;
		containerClass = Supply40;
		mass = 60;
	};
};
class U_O_T_officer_noInsignia_ghex_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_T_officer_noInsignia_ghex_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_O_T_officer_noInsignia_ghex_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = O_LightFatigues_01_ghex_F;
		containerClass = Supply40;
		mass = 60;
	};
};
class U_O_officer_noInsignia_oicamo_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_officer_noInsignia_oicamo_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_O_officer_noInsignia_oicamo_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = O_LightFatigues_01_oicamo_F;
		containerClass = Supply40;
		mass = 60;
	};
};

/* Generic Fatigues */
class Aegis_U_O_CombatFatigues_oli_F: Uniform_Base
{
	author = $STR_A3_A_Jamie;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_CombatFatigues_oli_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\Aegis_U_O_CombatFatigues_oli_F_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Aegis_O_CombatFatigues_oli_F;
		containerClass = Supply40;
		mass = 60;
	};
};
class Aegis_U_O_CombatFatigues_02_oli_F: Uniform_Base
{
	author = $STR_A3_A_Jamie;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_CombatFatigues_02_oli_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\Aegis_U_O_CombatFatigues_02_oli_F_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Aegis_O_CombatFatigues_02_oli_F;
		containerClass = Supply40;
		mass = 60;
	};
};
class Aegis_U_O_CombatFatigues_khk_F: Uniform_Base
{
	author = $STR_A3_A_Jamie;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_CombatFatigues_khk_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\Aegis_U_O_CombatFatigues_khk_F_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Aegis_O_CombatFatigues_khk_F;
		containerClass = Supply40;
		mass = 60;
	};
};
class Aegis_U_O_CombatFatigues_02_khk_F: Uniform_Base
{
	author = $STR_A3_A_Jamie;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_O_CombatFatigues_02_khk_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\Aegis_U_O_CombatFatigues_02_khk_F_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_OPFOR_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Aegis_O_CombatFatigues_02_khk_F;
		containerClass = Supply40;
		mass = 60;
	};
};