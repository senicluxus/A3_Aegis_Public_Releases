/* Smoke Shells
- Placed in CfgVehicles
*/

/* BLUFOR */
#define SMOKESHELLS_BLUFOR \
SmokeShellGreen, \
SmokeShellBlue, \
SmokeShellOrange

#define SMOKEGRENADES_BLUFOR \
1Rnd_SmokeBlue_Grenade_shell, \
1Rnd_SmokeGreen_Grenade_shell, \
1Rnd_SmokeOrange_Grenade_shell

#define SMOKESHELLS_BAG_BLUFOR \
mag_xx(SmokeShellGreen,1); \
mag_xx(SmokeShellBlue,1); \
mag_xx(SmokeShellOrange,1)



/* OPFOR */
#define SMOKESHELLS_OPFOR \
SmokeShellRed, \
SmokeShellOrange, \
SmokeShellYellow

#define SMOKEGRENADES_OPFOR \
1Rnd_SmokeRed_Grenade_shell, \
1Rnd_SmokeOrange_Grenade_shell, \
1Rnd_SmokeYellow_Grenade_shell

#define SMOKESHELLS_BAG_OPFOR \
mag_xx(SmokeShellRed,1); \
mag_xx(SmokeShellYellow,1); \
mag_xx(SmokeShellOrange,1)



/* Independent */
#define SMOKESHELLS_INDEP \
SmokeShellGreen, \
SmokeShellOrange, \
SmokeShellPurple

#define SMOKEGRENADES_INDEP \
1Rnd_SmokeGreen_Grenade_shell, \
1Rnd_SmokeOrange_Grenade_shell, \
1Rnd_SmokePurple_Grenade_shell

#define SMOKESHELLS_BAG_INDEP \
mag_xx(SmokeShellGreen,1); \
mag_xx(SmokeShellOrange,1); \
mag_xx(SmokeShellPurple,1)



/* Default
- These are strictly used by FIA, as far as I can tell
*/
#define SMOKESHELLS_DEFAULT \
SmokeShellGreen, \
SmokeShellRed, \
SmokeShellBlue

#define SMOKEGRENADES_DEFAULT \
1Rnd_SmokeGreen_Grenade_shell, \
1Rnd_SmokeRed_Grenade_shell, \
1Rnd_SmokeBlue_Grenade_shell

#define SMOKESHELLS_BAG_DEFAULT \
mag_xx(SmokeShellGreen,1); \
mag_xx(SmokeShellRed,1); \
mag_xx(SmokeShellBlue,1)



/* Combat Life Saver */
#define SMOKESHELLS_MEDIC \
SmokeShellRed, \
SmokeShellBlue, \
SmokeShellOrange

#define SMOKESHELLS_BAG_MEDIC \
mag_xx(SmokeShellRed,1); \
mag_xx(SmokeShellBlue,1); \
mag_xx(SmokeShellOrange,1)