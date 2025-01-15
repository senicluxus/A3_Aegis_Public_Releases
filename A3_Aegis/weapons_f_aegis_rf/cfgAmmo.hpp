class CfgAmmo
{
    /* Inheritance Tree */
    class Default;

    /* Bases */
	class BulletBase;
	class ammo_Penetrator_Base;
	class FlareCore;
	class ShotDeployBase;
    class SubmunitionBase;
	class MissileCore;

    /* Arma 3 */
    class B_20mm;

    /* Aegis */
    class Aegis_B_20mm_Tracer_Green;
    class Aegis_B_20mm_Tracer_Yellow;

    /* Aegis RF */
    class Aegis_B_20mm_Tracer_Green_RF: Aegis_B_20mm_Tracer_Green
	{
		author = "Rotators Collective";
		dlc = "rf";
		indirectHitRange = 3;
	};
    class Aegis_B_20mm_Tracer_Yellow_RF: Aegis_B_20mm_Tracer_Yellow
	{
		author = "Rotators Collective";
		dlc = "rf";
		indirectHitRange = 3;
	};
};