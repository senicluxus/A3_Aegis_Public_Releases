/* LDF */
class B_Carryall_oli_IEAmmo_F: B_Carryall_eaf_F{};
class B_Carryall_oli_IEAAR_F: B_Kitbag_eaf_F
{
	class TransportItems
	{
		item_xx(optic_tws_mg,1);
        delete _xx_bipod_03_F_blk;
		item_xx(bipod_01_F_blk,1);
		item_xx(muzzle_snds_H,1);
	};
};
class B_Carryall_eaf_IEAAR_F: B_Kitbag_eaf_F{};
class B_Carryall_eaf_IEAAA_F: B_Carryall_eaf_F{};
class B_Carryall_eaf_eng_F: B_Kitbag_eaf_F{};
class B_Carryall_eaf_exp_F: B_Kitbag_eaf_F{};
class B_Carryall_eaf_Mine_F: B_Carryall_eaf_F{};
class B_Fieldpack_oli_IEAA_F: B_Kitbag_eaf_F{};
class B_Fieldpack_oli_IEAT_F: B_Kitbag_eaf_F{};
class B_Fieldpack_oli_IELAT_F: B_AssaultPack_eaf_F{};
class B_FieldPack_oli_IELAT2_F: B_AssaultPack_eaf_F{};
class B_FieldPack_green_IEAA_F: B_Kitbag_eaf_F{};
class B_FieldPack_green_IEAT_F: B_Kitbag_eaf_F{};
class B_FieldPack_green_IELAT_F: B_AssaultPack_eaf_F{};
class B_FieldPack_green_IELAT2_F: B_AssaultPack_eaf_F{};
class B_FieldPack_green_IEMedic_F: B_AssaultPack_eaf_F
{
    class TransportMagazines
	{
		delete _xx_SmokeShellGreen;
		delete _xx_SmokeShellBlue;
		delete _xx_SmokeShellOrange;
    };
};
class B_AssaultPack_eaf_IEReconMedic_F: B_AssaultPack_eaf_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	class TransportMagazines
	{
        SMOKESHELLS_BAG_MEDIC;
	};
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,5);
	};
};