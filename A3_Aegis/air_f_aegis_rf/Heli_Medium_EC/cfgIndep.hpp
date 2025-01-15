/* AAF (Update turret Magazine )*/
class I_Heli_EC_02_RF: Heli_EC_02_base_RF
{
    /* Turrets */
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret
		{
			magazines[] = {"Aegis_2000Rnd_20mm_shells_yellow_rf", "Laserbatteries"};
		};	
	};
};