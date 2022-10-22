/* CTRG */
class B_Kitbag_blk_CTRGexp_F: B_Kitbag_blk
{
    author = $STR_A3_A_Heliotrope;
    scope = protected;
    class TransportMagazines
    {
        mag_xx(ClaymoreDirectionalMine_Remote_Mag,2);
        mag_xx(APERSBoundingMine_Range_Mag,3);
        mag_xx(DemoCharge_Remote_Mag,1);
        mag_xx(SLAMDirectionalMine_Wire_Mag,2);
    };
    class TransportItems
    {
        item_xx(MineDetector,1);
        item_xx(ToolKit,1);
    };
};
class B_AssaultPack_blk_CTRGMedic_F: B_AssaultPack_blk
{
    author = $STR_A3_A_Heliotrope;
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
class B_AssaultPack_blk_CTRGLAT_F: B_AssaultPack_blk
{
    author = $STR_A3_A_Heliotrope;
    scope = protected;
    class TransportMagazines
    {
        mag_xx(NLAW_F,2);
    };
};
class B_AssaultPack_blk_CTRGLAT2_F: B_AssaultPack_blk
{
    author = $STR_A3_A_Heliotrope;
    scope = protected;
    class TransportMagazines
    {
        mag_xx(MRAWS_HEAT_F,2);
        mag_xx(MRAWS_HE_F,1);
    };
};