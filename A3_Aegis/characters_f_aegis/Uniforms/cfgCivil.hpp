/* Civilians */
class U_C_Commoner1_1: Uniform_Base
{
    scope = public;
    displayName = $STR_A3_Scavenger_Clothes;
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\c_cloth1_CO.paa"};
};
class U_C_Commoner1_2: Uniform_Base
{
    scope = public;
    displayName = "Leisure Suit";
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\c_cloth2_CO.paa"};
};
class U_C_Commoner1_3: Uniform_Base
{
    scope = public;
    displayName = "Workout Clothes";
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\c_cloth4_CO.paa"};
};
class U_NikosBody: Uniform_Base
{
    scope = public;
    displayName = $STR_A3_A_CfgWeapons_U_NikosBody0;
};
class U_OrestesBody: Uniform_Base
{
    displayName = $STR_A3_A_CfgWeapons_U_OrestesBody0;
};
class U_C_Poor_2: Uniform_Base
{
	scope = public;
    displayName = $STR_A3_A_CfgWeapons_U_C_Poor_20;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_C_Poor_2_CA.paa";
};
class U_C_PriestBody: Uniform_Base
{
    scope = public;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_C_PriestBody_CA.paa";
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\priest_CO.paa"};
};
class U_NikosAgedBody: Uniform_Base
{
    scope = public;
    displayName = $STR_A3_A_CfgWeapons_U_NikosAgedBody0;
};
class U_Jayholder: Uniform_Base
{
    author = $STR_A3_A_Kydoimos;
    scope = public;
    displayName = $STR_A3_A_CfgWeapons_U_Jayholder0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_Jayholder_CA.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    hiddenSelections[] = {camo};
    hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\c_cloth1_jayholder_CO.paa"};
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = C_Jayholder;
        containerClass = Supply30;
        mass = 30;
    };
};
class U_C_Man_casual_7_F: Uniform_Base
{
    author = $STR_A3_A_AveryTheKitty;
    scope = public;
    displayName = $STR_A3_A_CfgWeapons_U_C_Man_casual_7_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_C_Man_casual_7_F_CA.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
    hiddenSelections[] = {camo};
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\IG_poloshirt_1_CO.paa"};
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = C_Man_casual_7_F;
        containerClass = Supply30;
        mass = 30;
    };
};
class U_C_Man_casual_8_F: Uniform_Base
{
    author = $STR_A3_A_AveryTheKitty;
    scope = public;
    displayName = $STR_A3_A_CfgWeapons_U_C_Man_casual_8_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_C_Man_casual_8_F_CA.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
    hiddenSelections[] = {camo};
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\IG_poloshirt_2_CO.paa"};
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = C_Man_casual_8_F;
        containerClass = Supply30;
        mass = 30;
    };
};
class U_C_Man_casual_9_F: Uniform_Base
{
    author = $STR_A3_A_AveryTheKitty;
    scope = public;
    displayName = $STR_A3_A_CfgWeapons_U_C_Man_casual_9_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_C_Man_casual_9_F_CA.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
    hiddenSelections[] = {camo};
    hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_C_Man_casual_9_F_CO.paa"};
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = C_Man_casual_9_F;
        containerClass = Supply30;
        mass = 30;
    };
};
class U_C_Uniform_Formal_01_striped_F: Uniform_Base
{
    author = $STR_A3_A_AveryTheKitty;
    scope = public;
    displayName = $STR_A3_A_CfgWeapons_U_C_Uniform_Formal_01_striped_F0;
    picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_C_Uniform_Formal_01_striped_F_CA.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    hiddenSelections[] = {camo};
    hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Formal_01_striped_CO.paa"};
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = C_Uniform_Formal_01_striped_F;
        containerClass = Supply30;
        mass = 30;
    };
};
class U_C_Uniform_Formal_01_white_F: Uniform_Base
{
    author = $STR_A3_A_AveryTheKitty;
    scope = public;
    displayName = $STR_A3_A_CfgWeapons_U_C_Uniform_Formal_01_white_F0;
    picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_C_Uniform_Formal_01_white_F_CA.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    hiddenSelections[] = {camo};
    hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Formal_01_white_CO.paa"};
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = C_Uniform_Formal_01_white_F;
        containerClass = Supply30;
        mass = 30;
    };
};
class U_C_Uniform_Formal_01_blue_F: Uniform_Base
{
    author = $STR_A3_A_AveryTheKitty;
    scope = public;
    displayName = $STR_A3_A_CfgWeapons_U_C_Uniform_Formal_01_blue_F0;
    picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_C_Uniform_Formal_01_blue_F_CA.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    hiddenSelections[] = {camo};
    hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Formal_01_blue_CO.paa"};
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = C_Uniform_Formal_01_blue_F;
        containerClass = Supply30;
        mass = 30;
    };
};
class U_C_CBRN_Suit_01_Black_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_C_CBRN_Suit_01_Black_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_C_CBRN_Suit_01_Black_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\CBRN_Suit_01_Black_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = C_CBRN_Man_Oversuit_01_Black_F;
		containerClass = Supply30;
		mass = 45;
	};
};
class U_C_CBRN_Suit_01_Yellow_F: Uniform_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	displayName = $STR_A3_A_CfgWeapons_U_C_CBRN_Suit_01_Yellow_F0;
	picture = "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\UI\icon_U_C_CBRN_Suit_01_Yellow_F_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\CBRN_Suit_01_Yellow_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = C_CBRN_Man_Oversuit_01_Yellow_F;
		containerClass = Supply30;
		mass = 45;
	};
};