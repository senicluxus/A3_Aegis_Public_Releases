class CfgLights
{
    // Arma 3
	class CmeasuresLight
	{
		useFlare = true;
		flareSize = 10;
		flareMaxDistance = 2600;
	};
	class Chemlight_Green
	{
		color[] =
        {
            0.2,    // R
            1,      // G
            0,      // B
            1       // A
        };
		diffuse[] =
        {
            0.2,    // R
            1,      // G
            0       // B
        };
	};
	class Chemlight_Red: Chemlight_Green
	{
		color[] =
        {
            1,      // R
            0,      // G
            0.025,  // B
            1       // A
        };
		diffuse[] =
        {
            1,      // R
            0.0,    // G
            0.0025  // B
        };
	};
	class ChemLight_Yellow: Chemlight_Green
	{
		color[] =
        {
            1,      // R
            0.6,    // G
            0,      // B
            1       // A
        };
		diffuse[] =
        {
            1,      // R
            0.6,    // G
            0       // B
        };
	};
	class ChemLight_Blue: Chemlight_Green
	{
		color[] =
        {
            0,      // R
            0.6,    // G
            1,      // B
            1       // A
        };
		diffuse[] =
        {
            0,      // R
            0.6,    // G
            1       // B
        };
	};
	/*class IRBeacon
	{
		color[] = 
		{
			0.0099999998,	// R
			0.0099999998,	// G
			0.0099999998,	// B
			1				// A
		};
        ambient[] = 
		{.
			0.0049999999,	// R
			0.0049999999,	// G
			0.0049999999,	// B
			1				// A
		};
		diffuse[] =
        {
            0.0099999998,	// R
			0.0099999998,	// G
			0.0099999998,	// B
        };
		brightness=1;
		intensity=4000;
		drawLight=0;
		class Attenuation
		{
			start=0;
			constant=1;
			linear=0;
			quadratic=5;
		};
		position[]={0,0,0};
	}; */
    class FiredLightMed;
	class FiredLightCannon: FiredLightMed
	{
		useFlare = true;
		flareSize = 25;
		flareMaxDistance = 2600;
	};
	class RocketLight
	{
		useFlare = true;
		flareSize = 2;
		flareMaxDistance = 2600;
	};
	class SparksLight
	{
		useFlare = true;
		flareSize = 0.5;
		flareMaxDistance = 2600;
	};
	class SparksLightSabot
	{
		useFlare = true;
		flareSize = 1.5;
		flareMaxDistance = 2600;
	};
    // Arma 3 Aegis
	class FlareHandLight
	{
		color[] =
        {
            0.8,    // R
            0.25,   // G
            0.25    // B
        };
		ambient[] =
        {
            0,      // R
            0,      // G
            0,      // B
            0       // A
        };
		brightness = 100;
		intensity = 50000;
		drawLight = false;
		useFlare = true;
		flareSize = 2;
		flareMaxDistance = 2600;
		class Attenuation
		{
			start = 0;
			constant = 3;
			linear = 0;
			quadratic = 22;
		};
		position[] =
        {
            0,      // X
            0.14,   // Y
            0       // Z
        };
		diffuse[] =
        {
            0.8,    // R
            0.25,   // G
            0.25    // B
        };
	};
};