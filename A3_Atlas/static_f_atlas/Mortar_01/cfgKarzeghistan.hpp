/* Karzeghistan */
class Atlas_B_K_Mortar_01_F: Atlas_B_G_Mortar_01_F
{
	faction = Atlas_BLU_K_F;
	crew = Atlas_B_K_Soldier_F;
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] =
		{
			B_Mortar_01_Weapon_F,
			B_Mortar_01_support_F
		};
	};
};