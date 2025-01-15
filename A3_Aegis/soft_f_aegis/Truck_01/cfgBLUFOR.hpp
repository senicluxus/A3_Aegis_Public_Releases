/* US */
class B_Truck_01_transport_F;
class B_Truck_01_covered_F;
class B_Truck_01_mover_F;
class B_Truck_01_box_F;
class B_Truck_01_Repair_F;
class B_Truck_01_ammo_F;
class B_Truck_01_fuel_F;
class B_Truck_01_medical_F;

/* US (WDL_01) */
class B_W_Truck_01_mover_F: B_Truck_01_mover_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Truck_01_mover_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_W_F;
    crew = B_W_Soldier_F;
    typicalCargo[] = {B_W_Soldier_F};
    textureList[] = {WDL_01,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_01_wdl_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_02_wdl_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_mprimer_olive_CO.paa"
    };
    class TextureSources
        {
            class WDL_01
            {
                displayName = $STR_A3_A_TEXTURESOURCES_WOODLAND0;
                author = $STR_A3_A_BranFlakes;
                textures[] =
                {
                    "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_01_wdl_CO.paa",
                    "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_02_wdl_CO.paa",
                    "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_mprimer_olive_CO.paa"
                };
                factions[] = {};
            };
        };
};
class B_W_Truck_01_ammo_F: B_Truck_01_ammo_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Truck_01_ammo_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_W_F;
    crew = B_W_Soldier_F;
    typicalCargo[] = {B_W_Soldier_F};
    textureList[] = {WDL_01,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_01_wdl_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_02_wdl_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ammo_olive_CO.paa",
        "\A3\Structures_F\Data\Metal\Containers\containers_02_set_CO.paa"
    };
    class WDL_01
            {
                displayName = $STR_A3_A_TEXTURESOURCES_WOODLAND0;
                author = $STR_A3_A_BranFlakes;
                textures[] =
                {
                    "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_01_wdl_CO.paa",
                    "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_02_wdl_CO.paa",
                    "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ammo_olive_CO.paa",
                    "\A3\Structures_F\Data\Metal\Containers\containers_02_set_CO.paa"
    };
                factions[] = {};
            };
};
class B_W_Truck_01_box_F: B_Truck_01_box_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Truck_01_box_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_W_F;
    crew = B_W_Soldier_F;
    typicalCargo[] = {B_W_Soldier_F};
    textureList[] = {WDL_01,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_01_wdl_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_02_wdl_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ammo_olive_CO.paa",
        "\A3\Structures_F\Data\Metal\Containers\containers_02_set_CO.paa"
    };
    class TextureSources
        {
            class WDL_01
            {
                displayName = $STR_A3_A_TEXTURESOURCES_WOODLAND0;
                author = $STR_A3_A_BranFlakes;
                textures[] =
                {
                    "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_01_wdl_CO.paa",
                    "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_02_wdl_CO.paa",
                    "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ammo_olive_CO.paa",
                    "\A3\Structures_F\Data\Metal\Containers\containers_02_set_CO.paa"
                };
                factions[] = {};
            };
        };
};
class B_W_Truck_01_fuel_F: B_Truck_01_fuel_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Truck_01_fuel_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_W_F;
    crew = B_W_Soldier_F;
    typicalCargo[] = {B_W_Soldier_F};
    textureList[] = {WDL_01,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_01_wdl_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_02_wdl_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_Fuel_olive_CO.paa"
    };
    class TextureSources
        {
            class WDL_01
            {
                displayName = $STR_A3_A_TEXTURESOURCES_WOODLAND0;
                author = $STR_A3_A_BranFlakes;
                textures[] =
                {
                    "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_01_wdl_CO.paa",
                    "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_02_wdl_CO.paa",
                    "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_Fuel_olive_CO.paa"
                };
                factions[] = {};
            };
        };
};
class B_W_Truck_01_medical_F: B_Truck_01_medical_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Truck_01_medical_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_W_F;
    crew = B_W_Soldier_F;
    typicalCargo[] = {B_W_Soldier_F};
    textureList[] = {WDL_01,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_01_wdl_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_02_wdl_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_cargo_olive_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_cover_wdl_CO.paa"
    };
    class TextureSources
        {
            class WDL_01
            {
                displayName = $STR_A3_A_TEXTURESOURCES_WOODLAND0;
                author = $STR_A3_A_BranFlakes;
                textures[] =
                {
                    "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_01_wdl_CO.paa",
                    "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_02_wdl_CO.paa",
                    "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_cargo_olive_CO.paa",
                    "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_cover_wdl_CO.paa"
                };
                factions[] = {};
            };
        };
};
class B_W_Truck_01_Repair_F: B_Truck_01_Repair_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Truck_01_Repair_F.jpg";
    scope = public;
    scopeCurator = public;
	scopeArsenal = private;
	forceInGarage = false;
    side = TWest;
    faction = BLU_W_F;
    crew = B_W_Soldier_F;
    typicalCargo[] = {B_W_Soldier_F};
    textureList[] = {WDL_01,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_01_wdl_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_02_wdl_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ammo_olive_CO.paa",
        "\A3\Structures_F\Data\Metal\Containers\containers_02_set_CO.paa"
    };
    class TextureSources
        {
            class WDL_01
            {
                displayName = $STR_A3_A_TEXTURESOURCES_WOODLAND0;
                author = $STR_A3_A_BranFlakes;
                textures[] =
                {
                    "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_01_wdl_CO.paa",
                    "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_02_wdl_CO.paa",
                    "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ammo_olive_CO.paa",
                    "\A3\Structures_F\Data\Metal\Containers\containers_02_set_CO.paa"
                };
                factions[] = {};
            };
        };
};
class B_W_Truck_01_transport_F: B_Truck_01_transport_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Truck_01_transport_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_W_F;
    crew = B_W_Soldier_F;
    typicalCargo[] = {B_W_Soldier_F};
    textureList[] = {WDL_01,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_01_wdl_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_02_wdl_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_cargo_olive_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_cover_wdl_CO.paa"
    };
    class TextureSources
        {
            class WDL_01
            {
                displayName = $STR_A3_A_TEXTURESOURCES_WOODLAND0;
                author = $STR_A3_A_BranFlakes;
                textures[] =
                {
                    "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_01_wdl_CO.paa",
                    "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_02_wdl_CO.paa",
                    "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_cargo_olive_CO.paa",
                    "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_cover_wdl_CO.paa"
                };
                factions[] = {};
            };
        };
};
class B_W_Truck_01_covered_F: B_Truck_01_covered_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Truck_01_covered_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_W_F;
    crew = B_W_Soldier_F;
    typicalCargo[] = {B_W_Soldier_F};
    textureList[] = {WDL_01,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_01_wdl_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_02_wdl_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_cargo_olive_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_cover_wdl_CO.paa"
    };
    class TextureSources
        {
            class WDL_01
            {
                displayName = $STR_A3_A_TEXTURESOURCES_WOODLAND0;
                author = $STR_A3_A_BranFlakes;
                textures[] =
                {
                    "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_01_wdl_CO.paa",
                    "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_02_wdl_CO.paa",
                    "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_cargo_olive_CO.paa",
                    "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_cover_wdl_CO.paa"
                };
                factions[] = {};
            };
        };
};
class B_W_Truck_01_flatbed_F: Truck_01_flatbed_base_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Truck_01_flatbed_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_C_CfgVehicles_B_Truck_01_flatbed_F0;
    side = TWest;
    faction = BLU_W_F;
    crew = B_W_Soldier_F;
    typicalCargo[] = {B_W_Soldier_F};
	textureList[] = {WDL_01,1};
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_01_wdl_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_02_wdl_CO.paa",
        "\A3\Soft_F_Enoch\Truck_01\Data\Truck_01_ammo_pacific_CO.paa",
        "\A3\Soft_F_Enoch\Truck_01\Data\Truck_01_cargo_pacific_CO.paa"
    };
    class TextureSources
        {
            class WDL_01
            {
                displayName = $STR_A3_A_TEXTURESOURCES_WOODLAND0;
                author = $STR_A3_A_BranFlakes;
                textures[] =
                {
                    "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_01_wdl_CO.paa",
                    "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_02_wdl_CO.paa",
                    "\A3\Soft_F_Enoch\Truck_01\Data\Truck_01_ammo_pacific_CO.paa",
                    "\A3\Soft_F_Enoch\Truck_01\Data\Truck_01_cargo_pacific_CO.paa"
                };
                factions[] = {};
            };
        };
};
class B_W_Truck_01_cargo_F: Truck_01_cargo_base_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Truck_01_cargo_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_C_CfgVehicles_B_Truck_01_cargo_F0;
    side = TWest;
    faction = BLU_W_F;
    crew = B_W_Soldier_F;
    typicalCargo[] = {B_W_Soldier_F};
	textureList[] = {WDL_01,1};
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_01_wdl_CO.paa",
        "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_02_wdl_CO.paa",
        "\A3\Soft_F_Enoch\Truck_01\Data\Truck_01_ammo_pacific_CO.paa",
        "\A3\Soft_F_Enoch\Truck_01\Data\Truck_01_cargo_pacific_CO.paa"
    };
    class TextureSources
        {
            class WDL_01
            {
                displayName = $STR_A3_A_TEXTURESOURCES_WOODLAND0;
                author = $STR_A3_A_BranFlakes;
                textures[] =
                {
                    "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_01_wdl_CO.paa",
                    "\A3_Aegis\Soft_F_Aegis\Truck_01\Data\Truck_01_ext_02_wdl_CO.paa",
                    "\A3\Soft_F_Enoch\Truck_01\Data\Truck_01_ammo_pacific_CO.paa",
                    "\A3\Soft_F_Enoch\Truck_01\Data\Truck_01_cargo_pacific_CO.paa"
                };
                factions[] = {};
            };
        };
};

/* BAF */
class B_A_Truck_01_mover_F: B_Truck_01_mover_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_mover_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_A_F;
    crew = B_A_Soldier_F;
    typicalCargo[] = {B_A_Soldier_F};
    textureList[] = {Sand,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_01_CO.paa",
        "\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_02_CO.paa",
        "\A3\Soft_F_Gamma\Truck_01\Data\Truck_01_mprimer_CO.paa"
    };
};
class B_A_Truck_01_ammo_F: B_Truck_01_ammo_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_ammo_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_A_F;
    crew = B_A_Soldier_F;
    typicalCargo[] = {B_A_Soldier_F};
    textureList[] = {Sand,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_01_CO.paa",
        "\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_02_CO.paa",
        "\A3\Soft_F_Gamma\Truck_01\Data\Truck_01_ammo_CO.paa",
        "\A3\Structures_F\Data\Metal\Containers\containers_02_set_CO.paa"
    };
};
class B_A_Truck_01_box_F: B_Truck_01_box_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_box_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_A_F;
    crew = B_A_Soldier_F;
    typicalCargo[] = {B_A_Soldier_F};
    textureList[] = {Sand,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_01_CO.paa",
        "\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_02_CO.paa",
        "\A3\Soft_F_Gamma\Truck_01\Data\Truck_01_ammo_CO.paa",
        "\A3\Structures_F\Data\Metal\Containers\containers_02_set_CO.paa"
    };
};
class B_A_Truck_01_fuel_F: B_Truck_01_fuel_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_fuel_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_A_F;
    crew = B_A_Soldier_F;
    typicalCargo[] = {B_A_Soldier_F};
    textureList[] = {Sand,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_01_CO.paa",
        "\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_02_CO.paa",
        "\A3\Soft_F_Gamma\Truck_01\Data\Truck_01_Fuel_CO.paa"
    };
};
class B_A_Truck_01_medical_F: B_Truck_01_medical_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_medical_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_A_F;
    crew = B_A_Soldier_F;
    typicalCargo[] = {B_A_Soldier_F};
    textureList[] = {Sand,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_01_CO.paa",
        "\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_02_CO.paa",
        "\A3\Soft_F_Beta\Truck_01\Data\Truck_01_cargo_CO.paa",
        "\A3\Soft_F_Beta\Truck_01\Data\Truck_01_cover_CO.paa"
    };
};
class B_A_Truck_01_Repair_F: B_Truck_01_Repair_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_Repair_F.jpg";
    scope = public;
    scopeCurator = public;
	scopeArsenal = private;
	forceInGarage = false;
    side = TWest;
    faction = BLU_A_F;
    crew = B_A_Soldier_F;
    typicalCargo[] = {B_A_Soldier_F};
    textureList[] = {Sand,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_01_CO.paa",
        "\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_02_CO.paa",
        "\A3\Soft_F_Gamma\Truck_01\Data\Truck_01_ammo_CO.paa",
        "\A3\Structures_F\Data\Metal\Containers\containers_02_set_CO.paa"
    };
};
class B_A_Truck_01_transport_F: B_Truck_01_transport_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_transport_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_A_F;
    crew = B_A_Soldier_F;
    typicalCargo[] = {B_A_Soldier_F};
    textureList[] = {Sand,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_01_CO.paa",
        "\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_02_CO.paa",
        "\A3\Soft_F_Beta\Truck_01\Data\Truck_01_cargo_CO.paa",
        "\A3\Soft_F_Beta\Truck_01\Data\Truck_01_cover_CO.paa"
    };
};
class B_A_Truck_01_covered_F: B_Truck_01_covered_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_covered_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_A_F;
    crew = B_A_Soldier_F;
    typicalCargo[] = {B_A_Soldier_F};
    textureList[] = {Sand,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_01_CO.paa",
        "\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_02_CO.paa",
        "\A3\Soft_F_Beta\Truck_01\Data\Truck_01_cargo_CO.paa",
        "\A3\Soft_F_Beta\Truck_01\Data\Truck_01_cover_CO.paa"
    };
};
class B_A_Truck_01_flatbed_F: Truck_01_flatbed_base_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_flatbed_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_C_CfgVehicles_B_Truck_01_flatbed_F0;
    side = TWest;
    faction = BLU_A_F;
    crew = B_A_Soldier_F;
    typicalCargo[] = {B_A_Soldier_F};
	textureList[] = {Sand,1};
	hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_01_CO.paa",
        "\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_02_CO.paa",
        "\A3\Soft_F_Enoch\Truck_01\Data\Truck_01_ammo_CO.paa",
        "\A3\Soft_F_Enoch\Truck_01\Data\Truck_01_cargo_CO.paa"
    };
};
class B_A_Truck_01_cargo_F: Truck_01_cargo_base_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_cargo_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_C_CfgVehicles_B_Truck_01_cargo_F0;
    side = TWest;
    faction = BLU_A_F;
    crew = B_A_Soldier_F;
    typicalCargo[] = {B_A_Soldier_F};
	textureList[] = {Sand,1};
	hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_01_CO.paa",
        "\A3\Soft_F_Beta\Truck_01\Data\Truck_01_ext_02_CO.paa",
        "\A3\Soft_F_Enoch\Truck_01\Data\Truck_01_ammo_CO.paa",
        "\A3\Soft_F_Enoch\Truck_01\Data\Truck_01_cargo_CO.paa"
    };
};

/* BAF (Pacific) */
class B_A_Truck_01_mover_tna_F: B_A_Truck_01_mover_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_mover_tna_F.jpg";
    faction = BLU_A_tna_F;
    crew = B_A_Soldier_tna_F;
    typicalCargo[] = {B_A_Soldier_tna_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_01_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_02_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_mprimer_olive_CO.paa"
    };
};
class B_A_Truck_01_ammo_tna_F: B_A_Truck_01_ammo_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_ammo_tna_F.jpg";
    faction = BLU_A_tna_F;
    crew = B_A_Soldier_tna_F;
    typicalCargo[] = {B_A_Soldier_tna_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_01_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_02_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ammo_olive_CO.paa",
        "\A3\Structures_F\Data\Metal\Containers\containers_02_set_CO.paa"
    };
};
class B_A_Truck_01_box_tna_F: B_A_Truck_01_box_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_box_tna_F.jpg";
    faction = BLU_A_tna_F;
    crew = B_A_Soldier_tna_F;
    typicalCargo[] = {B_A_Soldier_tna_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_01_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_02_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ammo_olive_CO.paa",
        "\A3\Structures_F\Data\Metal\Containers\containers_02_set_CO.paa"
    };
};
class B_A_Truck_01_fuel_tna_F: B_A_Truck_01_fuel_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_fuel_tna_F.jpg";
    faction = BLU_A_tna_F;
    crew = B_A_Soldier_tna_F;
    typicalCargo[] = {B_A_Soldier_tna_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_01_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_02_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_Fuel_olive_CO.paa"
    };
};
class B_A_Truck_01_medical_tna_F: B_A_Truck_01_medical_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_medical_tna_F.jpg";
    faction = BLU_A_tna_F;
    crew = B_A_Soldier_tna_F;
    typicalCargo[] = {B_A_Soldier_tna_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_01_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_02_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_cargo_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_cover_olive_CO.paa"
    };
};
class B_A_Truck_01_Repair_tna_F: B_A_Truck_01_Repair_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_Repair_tna_F.jpg";
    faction = BLU_A_tna_F;
    crew = B_A_Soldier_tna_F;
    typicalCargo[] = {B_A_Soldier_tna_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_01_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_02_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ammo_olive_CO.paa",
        "\A3\Structures_F\Data\Metal\Containers\containers_02_set_CO.paa"
    };
};
class B_A_Truck_01_transport_tna_F: B_A_Truck_01_transport_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_transport_tna_F.jpg";
    faction = BLU_A_tna_F;
    crew = B_A_Soldier_tna_F;
    typicalCargo[] = {B_A_Soldier_tna_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_01_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_02_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_cargo_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_cover_olive_CO.paa"
    };
};
class B_A_Truck_01_covered_tna_F: B_A_Truck_01_covered_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_covered_tna_F.jpg";
    faction = BLU_A_tna_F;
    crew = B_A_Soldier_tna_F;
    typicalCargo[] = {B_A_Soldier_tna_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_01_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_02_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_cargo_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_cover_olive_CO.paa"
    };
};
class B_A_Truck_01_flatbed_tna_F: B_A_Truck_01_flatbed_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_flatbed_tna_F.jpg";
    faction = BLU_A_tna_F;
    crew = B_A_Soldier_tna_F;
    typicalCargo[] = {B_A_Soldier_tna_F};
	textureList[] = {Olive,1};
	hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_01_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_02_olive_CO.paa",
        "\A3\Soft_F_Enoch\Truck_01\Data\Truck_01_ammo_pacific_CO.paa",
        "\A3\Soft_F_Enoch\Truck_01\Data\Truck_01_cargo_pacific_CO.paa"
    };
};
class B_A_Truck_01_cargo_tna_F: B_A_Truck_01_cargo_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_cargo_tna_F.jpg";
    faction = BLU_A_tna_F;
    crew = B_A_Soldier_tna_F;
    typicalCargo[] = {B_A_Soldier_tna_F};
	textureList[] = {Olive,1};
	hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_01_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_02_olive_CO.paa",
        "\A3\Soft_F_Enoch\Truck_01\Data\Truck_01_ammo_pacific_CO.paa",
        "\A3\Soft_F_Enoch\Truck_01\Data\Truck_01_cargo_pacific_CO.paa"
    };
};

/* BAF (WDL_01) */
class B_A_Truck_01_mover_wdl_F: B_A_Truck_01_mover_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_mover_wdl_F.jpg";
    faction = BLU_A_wdl_F;
    crew = B_A_Soldier_wdl_F;
    typicalCargo[] = {B_A_Soldier_wdl_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_01_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_02_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_mprimer_olive_CO.paa"
    };
};
class B_A_Truck_01_ammo_wdl_F: B_A_Truck_01_ammo_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_ammo_wdl_F.jpg";
    faction = BLU_A_wdl_F;
    crew = B_A_Soldier_wdl_F;
    typicalCargo[] = {B_A_Soldier_wdl_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_01_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_02_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ammo_olive_CO.paa",
        "\A3\Structures_F\Data\Metal\Containers\containers_02_set_CO.paa"
    };
};
class B_A_Truck_01_box_wdl_F: B_A_Truck_01_box_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_box_wdl_F.jpg";
    faction = BLU_A_wdl_F;
    crew = B_A_Soldier_wdl_F;
    typicalCargo[] = {B_A_Soldier_wdl_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_01_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_02_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ammo_olive_CO.paa",
        "\A3\Structures_F\Data\Metal\Containers\containers_02_set_CO.paa"
    };
};
class B_A_Truck_01_fuel_wdl_F: B_A_Truck_01_fuel_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_fuel_wdl_F.jpg";
    faction = BLU_A_wdl_F;
    crew = B_A_Soldier_wdl_F;
    typicalCargo[] = {B_A_Soldier_wdl_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_01_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_02_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_Fuel_olive_CO.paa"
    };
};
class B_A_Truck_01_medical_wdl_F: B_A_Truck_01_medical_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_medical_wdl_F.jpg";
    faction = BLU_A_wdl_F;
    crew = B_A_Soldier_wdl_F;
    typicalCargo[] = {B_A_Soldier_wdl_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_01_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_02_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_cargo_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_cover_olive_CO.paa"
    };
};
class B_A_Truck_01_Repair_wdl_F: B_A_Truck_01_Repair_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_Repair_wdl_F.jpg";
    faction = BLU_A_wdl_F;
    crew = B_A_Soldier_wdl_F;
    typicalCargo[] = {B_A_Soldier_wdl_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_01_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_02_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ammo_olive_CO.paa",
        "\A3\Structures_F\Data\Metal\Containers\containers_02_set_CO.paa"
    };
};
class B_A_Truck_01_transport_wdl_F: B_A_Truck_01_transport_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_transport_wdl_F.jpg";
    faction = BLU_A_wdl_F;
    crew = B_A_Soldier_wdl_F;
    typicalCargo[] = {B_A_Soldier_wdl_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_01_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_02_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_cargo_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_cover_olive_CO.paa"
    };
};
class B_A_Truck_01_covered_wdl_F: B_A_Truck_01_covered_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_covered_wdl_F.jpg";
    faction = BLU_A_wdl_F;
    crew = B_A_Soldier_wdl_F;
    typicalCargo[] = {B_A_Soldier_wdl_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_01_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_02_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_cargo_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_cover_olive_CO.paa"
    };
};
class B_A_Truck_01_flatbed_wdl_F: B_A_Truck_01_flatbed_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_flatbed_wdl_F.jpg";
    faction = BLU_A_wdl_F;
    crew = B_A_Soldier_wdl_F;
    typicalCargo[] = {B_A_Soldier_wdl_F};
	textureList[] = {Olive,1};
	hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_01_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_02_olive_CO.paa",
        "\A3\Soft_F_Enoch\Truck_01\Data\Truck_01_ammo_pacific_CO.paa",
        "\A3\Soft_F_Enoch\Truck_01\Data\Truck_01_cargo_pacific_CO.paa"
    };
};
class B_A_Truck_01_cargo_wdl_F: B_A_Truck_01_cargo_F
{
    author = $STR_A3_A_BranFlakes;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_Truck_01_cargo_wdl_F.jpg";
    faction = BLU_A_wdl_F;
    crew = B_A_Soldier_wdl_F;
    typicalCargo[] = {B_A_Soldier_wdl_F};
	textureList[] = {Olive,1};
	hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_01_olive_CO.paa",
        "\A3\Soft_F_Exp\Truck_01\Data\Truck_01_ext_02_olive_CO.paa",
        "\A3\Soft_F_Enoch\Truck_01\Data\Truck_01_ammo_pacific_CO.paa",
        "\A3\Soft_F_Enoch\Truck_01\Data\Truck_01_cargo_pacific_CO.paa"
    };
};