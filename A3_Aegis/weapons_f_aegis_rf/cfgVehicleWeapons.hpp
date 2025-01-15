/* Bases */
class RocketPods;
class MGun;
class SmokeLauncher;
class CMFlareLauncher: SmokeLauncher
{
    class Single;
    class Burst;
    class AIBurst;
};
class MissileLauncher;
class GMG_F;
class autocannon_Base_F;

/* Weapons */
class gatling_caseless_20mm_rf: CannonCore
{
    magazines[] += {"2000Rnd_20mm_shells_rf", "1000Rnd_20mm_shells_rf", "Aegis_2000rnd_20mm_shells_green_rf", "Aegis_1000rnd_20mm_shells_green_rf", "Aegis_2000rnd_20mm_shells_yellow_rf", "Aegis_1000rnd_20mm_shells_yellow_rf"};
};