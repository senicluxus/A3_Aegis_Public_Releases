/* Dynamic Loadout Pylons */
class PylonWeapon_2000Rnd_762x51_Belt_T_Red: 2000Rnd_762x51_Belt_T_Red_Splash
{
	displayName = $STR_A3_A_CfgWeapons_LMG_Minigun0;
	model = "\A3\Weapons_F\DynamicLoadout\PylonPod_Minigun_Heli_Light_02.p3d";
	muzzlePos = machinegun_beg;
	muzzleEnd = machinegun_end;
	cartridgePos = machinegun_eject_pos;
	cartridgeVel = machinegun_eject_dir;
	hardpoints[] = {B_ORCA_RIGHT_PYLON};
	pylonWeapon = LMG_Minigun_heli;
	mass = 200;
};
class PylonWeapon_2000Rnd_762x51_Belt_T_Green: 2000Rnd_762x51_Belt_T_Green_Splash
{
	displayName = $STR_A3_A_CfgWeapons_LMG_Minigun0;
	model = "\A3\Weapons_F\DynamicLoadout\PylonPod_Minigun_Heli_Light_02.p3d";
	muzzlePos = machinegun_beg;
	muzzleEnd = machinegun_end;
	cartridgePos = machinegun_eject_pos;
	cartridgeVel = machinegun_eject_dir;
	hardpoints[] = {O_ORCA_RIGHT_PYLON};
	pylonWeapon = LMG_Minigun_heli;
	mass = 200;
};
class PylonWeapon_2000Rnd_762x51_Belt_T_Yellow: 2000Rnd_762x51_Belt_T_Yellow_Splash
{
	displayName = $STR_A3_A_CfgWeapons_LMG_Minigun0;
	model = "\A3\Weapons_F\DynamicLoadout\PylonPod_Minigun_Heli_Light_02.p3d";
	muzzlePos = machinegun_beg;
	muzzleEnd = machinegun_end;
	cartridgePos = machinegun_eject_pos;
	cartridgeVel = machinegun_eject_dir;
	hardpoints[] = {I_ORCA_RIGHT_PYLON};
	pylonWeapon = LMG_Minigun_heli;
	mass = 200;
};
class PylonRack_7Rnd_Rocket_50mm: 14Rnd_50mm_rockets
{
	displayName = $STR_A3_A_CfgMagazines_PylonRack_7Rnd_Rocket_50mm0;
	count = 7;
	model = "\A3_Aegis\Weapons_F_Aegis\DynamicLoadout\PylonPod_Rocket_50mm.p3d";
	muzzlePos = muzzlePos;
	muzzleEnd = muzzleEnd;
	hardpoints[] =
	{
		O_MISSILE_PYLON,
		O_S5
	};
	pylonWeapon = rockets_50mm;
	mass = 400;
	class mfdElements
	{
		class Plane_CAS_02
		{
			class Bones
			{
				class Center
				{
					type = fixed;
					pos[] = {0,0};
				};
			};
			class Draw
			{
				class BlackBackgroundGroup
				{
					color[] = {0,0,0};
					alpha = 1;
					class BlackBackground
					{
						type = polygon;
						points[] =
						{
							{
								{
									{0.1,0.11},1
								},
								{
									{0.17,0.11},1
								},
								{
									{0.17,0.33},1
								},
								{
									{0.1,0.33},1
								}
							}
						};
					};
				};
				class Default
				{
					condition = "(PylonAmmoRelative > 0.01) - PylonSelected";
					color[] = {1,1,1};
					alpha = 0.2;
					class Shape
					{
						type = polygon;
						texture = "\A3_Aegis\Weapons_F_Aegis\MFD\UI\icon_Place_CAS_02_Rocket_50mm_CA.paa";
						points[] =
						{
							{
								{
									{0.1,0.1},1
								},
								{
									{0.18,0.1},1
								},
								{
									{0.18,0.34},1
								},
								{
									{0.1,0.34},1
								}
							}
						};
					};
					class PylonText1
					{
						type = text;
						source = pylonammo;
						scale = 1;
						sourceScale = 1;
						align = center;
						pos[] =
						{
							{0.14,0.27},1
						};
						right[] =
						{
							{0.18,0.27},1
						};
						down[] =
						{
							{0.14,0.301},1
						};
					};
				};
				class Selected: Default
				{
					color[] = {0,0.12,0};
					condition = "(PylonSelected + PylonAmmoRelative) / 2";
					alpha = 1;
					class Shape: Shape{};
					class PylonText1: PylonText1{};
				};
				class Empty: Selected
				{
					condition = "PylonAmmoRelative <= 0";
					color[] = {1,0,0,1};
					class Shape: Shape{};
					class PylonText1: PylonText1{};
				};
			};
		};
		class VTOL_02
		{
			class Bones
			{
				class Center
				{
					type = fixed;
					pos[] = {0,0};
				};
				class R1: Center
				{
					pos[] = {0,0.0125};
				};
			};
			class Draw
			{
				class Default
				{
					condition = "PylonAmmoRelative > 0";
					color[] = {0.15,1,0.15,1};
					alpha = 0.22;
					class Shape
					{
						type = line;
						width = 2.0;
						points[] =
						{
							{
								R1,
								{0,-0.03},1
							},
							{
								R1,
								{0.012,-0.02598},1
							},
							{
								R1,
								{0.020784,-0.015},1
							},
							{
								R1,
								{0.024,0},1
							},
							{
								R1,
								{0.020784,0.015},1
							},
							{
								R1,
								{0.012,0.02598},1
							},
							{
								R1,
								{0,0.03},1
							},
							{
								R1,
								{-0.012,0.02598},1
							},
							{
								R1,
								{-0.020784,0.015},1
							},
							{
								R1,
								{-0.024,0},1
							},
							{
								R1,
								{-0.020784,-0.015},1
							},
							{
								R1,
								{-0.012,-0.02598},1
							},
							{
								R1,
								{0,-0.03},1
							},
							{}
						};
					};
					class PylonText1
					{
						type = text;
						source = static;
						text = RKT;
						scale = 1;
						sourceScale = 1;
						align = center;
						pos[] =
						{
							Center,1,
							{0,-0.051},1
						};
						right[] =
						{
							Center,1,
							{0.018,-0.051},1
						};
						down[] =
						{
							Center,1,
							{0,-0.03},1
						};
					};
					class PylonAmmo1
					{
						type = text;
						source = pylonammo;
						scale = 1;
						sourceScale = 1;
						align = center;
						pos[] =
						{
							{0,0},1
						};
						right[] =
						{
							{0.027,0},1
						};
						down[] =
						{
							{0,0.028},1
						};
					};
				};
				class Selected: Default
				{
					condition = "(PylonSelected + PylonAmmoRelative) / 2";
					alpha = 1;
					class Shape: Shape{};
					class PylonText1: PylonText1{};
				};
				class Empty: Selected
				{
					condition = "PylonAmmoRelative <= 0";
					color[] = {1,0,0,1};
					class Shape: Shape{};
					class PylonText1: PylonText1{};
					class PylonAmmo1: PylonAmmo1{};
					class Background
					{
						type = polygon;
						points[] =
						{
							{
								{
									R1,1,
									{0,0},1
								},
								{
									R1,
									{0.0169706,-0.0212132},1
								},
								{
									R1,
									{0.024,1.31134e-009},1
								},
								{
									R1,
									{0.0169706,0.0212132},1
								}
							},
							{
								{
									R1,1,
									{0,0},1
								},
								{
									R1,
									{0.0169706,0.0212132},1
								},
								{
									R1,
									{-2.09815e-009,0.03},1
								},
								{
									R1,
									{-0.0169706,0.0212132},1
								}
							},
							{
								{
									R1,1,
									{0,0},1
								},
								{
									R1,
									{-0.0169706,0.0212132},1
								},
								{
									R1,
									{-0.024,-3.57746e-010},1
								},
								{
									R1,
									{-0.0169706,-0.0212132},1
								}
							},
							{
								{
									R1,1,
									{0,0},1
								},
								{
									R1,
									{-0.0169706,-0.0212132},1
								},
								{
									R1,
									{4.19629e-009,-0.03},1
								},
								{
									R1,
									{0.0169706,-0.0212132},1
								}
							}
						};
					};
				};
			};
		};
	};
};
class PylonRack_20Rnd_Rocket_80mm: 38Rnd_80mm_rockets
{
	displayName = $STR_A3_A_CfgMagazines_PylonRack_20Rnd_Rocket_80mm0;
	count = 20;
	model = "\A3_Aegis\Weapons_F_Aegis\DynamicLoadout\PylonPod_Rocket_80mm.p3d";
	muzzlePos = muzzlePos;
	muzzleEnd = muzzleEnd;
	hardpoints[] =
	{
		O_MISSILE_PYLON,
		O_SKYFIRE
	};
	pylonWeapon = rockets_Skyfire;
	mass = 219;
	class mfdElements
	{
		class Plane_CAS_02
		{
			class Bones
			{
				class Center
				{
					type = fixed;
					pos[] = {0,0};
				};
			};
			class Draw
			{
				class BlackBackgroundGroup
				{
					color[] = {0,0,0};
					alpha = 1;
					class BlackBackground
					{
						type = polygon;
						points[] =
						{
							{
								{
									{0.1,0.11},1
								},
								{
									{0.17,0.11},1
								},
								{
									{0.17,0.33},1
								},
								{
									{0.1,0.33},1
								}
							}
						};
					};
				};
				class Default
				{
					condition = "(PylonAmmoRelative > 0.01) - PylonSelected";
					color[] = {1,1,1};
					alpha = 0.2;
					class Shape
					{
						type = polygon;
						texture = "\A3_Aegis\Weapons_F_Aegis\MFD\UI\icon_Place_CAS_02_Rocket_80mm_CA.paa";
						points[] =
						{
							{
								{
									{0.1,0.1},1
								},
								{
									{0.18,0.1},1
								},
								{
									{0.18,0.34},1
								},
								{
									{0.1,0.34},1
								}
							}
						};
					};
					class PylonText1
					{
						type = text;
						source = pylonammo;
						scale = 1;
						sourceScale = 1;
						align = center;
						pos[] =
						{
							{0.14,0.27},1
						};
						right[] =
						{
							{0.18,0.27},1
						};
						down[] =
						{
							{0.14,0.301},1
						};
					};
				};
				class Selected: Default
				{
					color[] = {0,0.12,0};
					condition = "(PylonSelected + PylonAmmoRelative) / 2";
					alpha = 1;
					class Shape: Shape{};
					class PylonText1: PylonText1{};
				};
				class Empty: Selected
				{
					condition = "PylonAmmoRelative <= 0";
					color[] = {1,0,0,1};
					class Shape: Shape{};
					class PylonText1: PylonText1{};
				};
			};
		};
		class VTOL_02
		{
			class Bones
			{
				class Center
				{
					type = fixed;
					pos[] = {0,0};
				};
				class R1: Center
				{
					pos[] = {0,0.0125};
				};
			};
			class Draw
			{
				class Default
				{
					condition = "PylonAmmoRelative > 0";
					color[] = {0.15,1,0.15,1};
					alpha = 0.22;
					class Shape
					{
						type = line;
						width = 2.0;
						points[] =
						{
							{
								R1,
								{0,-0.03},1
							},
							{
								R1,
								{0.012,-0.02598},1
							},
							{
								R1,
								{0.020784,-0.015},1
							},
							{
								R1,
								{0.024,0},1
							},
							{
								R1,
								{0.020784,0.015},1
							},
							{
								R1,
								{0.012,0.02598},1
							},
							{
								R1,
								{0,0.03},1
							},
							{
								R1,
								{-0.012,0.02598},1
							},
							{
								R1,
								{-0.020784,0.015},1
							},
							{
								R1,
								{-0.024,0},1
							},
							{
								R1,
								{-0.020784,-0.015},1
							},
							{
								R1,
								{-0.012,-0.02598},1
							},
							{
								R1,
								{0,-0.03},1
							},
							{}
						};
					};
					class PylonText1
					{
						type = text;
						source = static;
						text = RKT;
						scale = 1;
						sourceScale = 1;
						align = center;
						pos[] =
						{
							Center,1,
							{0,-0.051},1
						};
						right[] =
						{
							Center,1,
							{0.018,-0.051},1
						};
						down[] =
						{
							Center,1,
							{0,-0.03},1
						};
					};
					class PylonAmmo1
					{
						type = text;
						source = pylonammo;
						scale = 1;
						sourceScale = 1;
						align = center;
						pos[] =
						{
							{0,0},1
						};
						right[] =
						{
							{0.027,0},1
						};
						down[] =
						{
							{0,0.028},1
						};
					};
				};
				class Selected: Default
				{
					condition = "(PylonSelected + PylonAmmoRelative) / 2";
					alpha = 1;
					class Shape: Shape{};
					class PylonText1: PylonText1{};
				};
				class Empty: Selected
				{
					condition = "PylonAmmoRelative <= 0";
					color[] = {1,0,0,1};
					class Shape: Shape{};
					class PylonText1: PylonText1{};
					class PylonAmmo1: PylonAmmo1{};
					class Background
					{
						type = polygon;
						points[] =
						{
							{
								{
									R1,1,
									{0,0},1
								},
								{
									R1,
									{0.0169706,-0.0212132},1
								},
								{
									R1,
									{0.024,1.31134e-009},1
								},
								{
									R1,
									{0.0169706,0.0212132},1
								}
							},
							{
								{
									R1,1,
									{0,0},1
								},
								{
									R1,
									{0.0169706,0.0212132},1
								},
								{
									R1,
									{-2.09815e-009,0.03},1
								},
								{
									R1,
									{-0.0169706,0.0212132},1
								}
							},
							{
								{
									R1,1,
									{0,0},1
								},
								{
									R1,
									{-0.0169706,0.0212132},1
								},
								{
									R1,
									{-0.024,-3.57746e-010},1
								},
								{
									R1,
									{-0.0169706,-0.0212132},1
								}
							},
							{
								{
									R1,1,
									{0,0},1
								},
								{
									R1,
									{-0.0169706,-0.0212132},1
								},
								{
									R1,
									{4.19629e-009,-0.03},1
								},
								{
									R1,
									{0.0169706,-0.0212132},1
								}
							}
						};
					};
				};
			};
		};
	};
};
class PylonRack_6Rnd_Vikhr_missiles: 12Rnd_Vikhr_missiles
{
	displayName = $STR_A3_A_CfgMagazines_PylonRack_6Rnd_Vikhr_missiles0;
	count = 6;
	model = "\A3_Aegis\Weapons_F_Aegis\DynamicLoadout\PylonPod_Rocket_Vikhr_F.p3d";
	muzzlePos = muzzlePos;
	muzzleEnd = muzzleEnd;
	hardpoints[] =
	{
		O_MISSILE_PYLON,
		O_VIKHR
	};
	pylonWeapon = missiles_Vikhr;
	mass = 300;
	class mfdElements
	{
		class Plane_CAS_02
		{
			class Bones
			{
				class Center
				{
					type = fixed;
					pos[] = {0,0};
				};
			};
			class Draw
			{
				class BlackBackgroundGroup
				{
					color[] = {0,0,0};
					alpha = 1;
					class BlackBackground
					{
						type = polygon;
						points[] =
						{
							{
								{
									{0.1,0.11},1
								},
								{
									{0.17,0.11},1
								},
								{
									{0.17,0.33},1
								},
								{
									{0.1,0.33},1
								}
							}
						};
					};
				};
				class Default
				{
					condition = "(PylonAmmoRelative > 0.01) - PylonSelected";
					color[] = {1,1,1};
					alpha = 0.2;
					class Shape
					{
						type = polygon;
						texture = "\A3_Aegis\Weapons_F_Aegis\MFD\UI\icon_Place_CAS_02_Rocket_Vikhr_CA.paa";
						points[] =
						{
							{
								{
									{0.1,0.1},1
								},
								{
									{0.18,0.1},1
								},
								{
									{0.18,0.34},1
								},
								{
									{0.1,0.34},1
								}
							}
						};
					};
					class PylonText1
					{
						type = text;
						source = pylonammo;
						scale = 1;
						sourceScale = 1;
						align = center;
						pos[] =
						{
							{0.14,0.27},1
						};
						right[] =
						{
							{0.18,0.27},1
						};
						down[] =
						{
							{0.14,0.301},1
						};
					};
				};
				class Selected: Default
				{
					color[] = {0,0.12,0};
					condition = "(PylonSelected + PylonAmmoRelative) / 2";
					alpha = 1;
					class Shape: Shape{};
					class PylonText1: PylonText1{};
				};
				class Empty: Selected
				{
					condition = "PylonAmmoRelative <= 0";
					color[] = {1,0,0,1};
					class Shape: Shape{};
					class PylonText1: PylonText1{};
				};
			};
		};
		class VTOL_02
		{
			class Bones
			{
				class Center
				{
					type = fixed;
					pos[] = {0,0};
				};
				class R1: Center
				{
					pos[] = {0,0.0125};
				};
			};
			class Draw
			{
				class Default
				{
					condition = "PylonAmmoRelative > 0";
					color[] = {0.15,1,0.15,1};
					alpha = 0.22;
					class Shape
					{
						type = line;
						width = 2.0;
						points[] =
						{
							{
								R1,
								{0,-0.03},1
							},
							{
								R1,
								{0.012,-0.02598},1
							},
							{
								R1,
								{0.020784,-0.015},1
							},
							{
								R1,
								{0.024,0},1
							},
							{
								R1,
								{0.020784,0.015},1
							},
							{
								R1,
								{0.012,0.02598},1
							},
							{
								R1,
								{0,0.03},1
							},
							{
								R1,
								{-0.012,0.02598},1
							},
							{
								R1,
								{-0.020784,0.015},1
							},
							{
								R1,
								{-0.024,0},1
							},
							{
								R1,
								{-0.020784,-0.015},1
							},
							{
								R1,
								{-0.012,-0.02598},1
							},
							{
								R1,
								{0,-0.03},1
							},
							{}
						};
					};
					class PylonText1
					{
						type = text;
						source = static;
						text = RKT;
						scale = 1;
						sourceScale = 1;
						align = center;
						pos[] =
						{
							Center,1,
							{0,-0.051},1
						};
						right[] =
						{
							Center,1,
							{0.018,-0.051},1
						};
						down[] =
						{
							Center,1,
							{0,-0.03},1
						};
					};
					class PylonAmmo1
					{
						type = text;
						source = pylonammo;
						scale = 1;
						sourceScale = 1;
						align = center;
						pos[] =
						{
							{0,0},1
						};
						right[] =
						{
							{0.027,0},1
						};
						down[] =
						{
							{0,0.028},1
						};
					};
				};
				class Selected: Default
				{
					condition = "(PylonSelected + PylonAmmoRelative) / 2";
					alpha = 1;
					class Shape: Shape{};
					class PylonText1: PylonText1{};
				};
				class Empty: Selected
				{
					condition = "PylonAmmoRelative <= 0";
					color[] = {1,0,0,1};
					class Shape: Shape{};
					class PylonText1: PylonText1{};
					class PylonAmmo1: PylonAmmo1{};
					class Background
					{
						type = polygon;
						points[] =
						{
							{
								{
									R1,1,
									{0,0},1
								},
								{
									R1,
									{0.0169706,-0.0212132},1
								},
								{
									R1,
									{0.024,1.31134e-009},1
								},
								{
									R1,
									{0.0169706,0.0212132},1
								}
							},
							{
								{
									R1,1,
									{0,0},1
								},
								{
									R1,
									{0.0169706,0.0212132},1
								},
								{
									R1,
									{-2.09815e-009,0.03},1
								},
								{
									R1,
									{-0.0169706,0.0212132},1
								}
							},
							{
								{
									R1,1,
									{0,0},1
								},
								{
									R1,
									{-0.0169706,0.0212132},1
								},
								{
									R1,
									{-0.024,-3.57746e-010},1
								},
								{
									R1,
									{-0.0169706,-0.0212132},1
								}
							},
							{
								{
									R1,1,
									{0,0},1
								},
								{
									R1,
									{-0.0169706,-0.0212132},1
								},
								{
									R1,
									{4.19629e-009,-0.03},1
								},
								{
									R1,
									{0.0169706,-0.0212132},1
								}
							}
						};
					};
				};
			};
		};
	};
};
class PylonMissile_Bomb_AGM_154_x1: magazine_Bomb_AGM_154_x1
{
	count = 1;
	displayName = $STR_A3_A_Bomb_AGM_154_x1_magazine_name;
	model = "\A3_Aegis\Weapons_F_Aegis\DynamicLoadout\PylonPod_Bomb_06_x1_F.p3d";
	hardpoints[] = {B_AGM_154};
	pylonWeapon = weapon_AGM_154Launcher;
    class mfdElements{}; // TODO
};
class PylonWeapon_220Rnd_25mm_shells: 220Rnd_25mm_shells
{
	displayName = $STR_A3_gatling_25mm0;
	model = "\A3_Aegis\Weapons_F_Aegis\DynamicLoadout\PylonPod_GAU12_Cannon_25mm.p3d";
	muzzlePos = muzzlePos;
	muzzleEnd = muzzleEnd;
	hardpoints[] = {B_F38_CENTER_PYLON};
	pylonWeapon = gatling_25mm;
	mass = 800;
};
class PylonWeapon_250Rnd_20mm_shells: 250Rnd_20mm_shells
{
	displayName = $STR_A3_cannon_20mm0;
	model = "\A3_Aegis\Weapons_F_Aegis\DynamicLoadout\PylonPod_Cannon_20mm.p3d";
	muzzlePos = muzzlePos;
	muzzleEnd = muzzleEnd;
	hardpoints[] = {20MM_CANNON};
	pylonWeapon = cannon_20mm_Heli_Light_03;
	mass = 170;
};
class PylonMissile_12Rnd_230mm_rockets: 12Rnd_230mm_rockets
{
	displayName = $STR_A3_A_CfgMagazines_PylonMissile_12Rnd_230mm_rockets0;
	hardpoints[] = {UNI_MLRS};
	pylonWeapon = rockets_230mm_GAT;
};
class PylonMissile_12Rnd_230mm_rockets_cluster: 12Rnd_230mm_rockets_cluster
{
	displayName = $STR_A3_A_CfgMagazines_PylonMissile_12Rnd_230mm_rockets_cluster0;
	hardpoints[] = {UNI_MLRS};
	pylonWeapon = rockets_230mm_GAT;
};
class PylonMissile_12Rnd_230mm_rockets_guided: 12Rnd_230mm_rockets_guided
{
	displayName = $STR_A3_A_CfgMagazines_PylonMissile_12Rnd_230mm_rockets_guided0;
	hardpoints[] = {UNI_MLRS};
	pylonWeapon = rockets_230mm_GAT;
};
class PylonMissile_12Rnd_230mm_rockets_LG: 12Rnd_230mm_rockets_LG
{
	displayName = $STR_A3_A_CfgMagazines_PylonMissile_12Rnd_230mm_rockets_LG0;
	hardpoints[] = {UNI_MLRS};
	pylonWeapon = rockets_230mm_GAT;
};