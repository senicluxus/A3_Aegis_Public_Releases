class CfgWeaponCursors
{
	class default;

    /* GL Crosshair
    - For whatever reason, the default 'gl' crosshair doesn't work so this is a workaround
    */
	class mgl: default
	{
		texture = "\A3_Aegis\UI_F_Aegis\Data\CfgWeaponCursors\MGL_GS.paa";
		class Sections
		{
			class SectionLeft
			{
				uMin = 0;
				uMax = 0.375;
				vMin =  0.5 - (1 / 2);
				vMax =  0.5 + (1 / 2);
				xOffset = -30;
				yOffset = 0;
			};
			class SectionTop
			{
				uMin =  0.5 - (1 / 2);
				uMax =  0.5 + (1 / 2);
				vMin = 0;
				vMax = 0.375;
				xOffset = 0;
				yOffset = -30;
			};
			class SectionRight
			{
				uMin =  1 - 0.375;
				uMax =  1 - 0;
				vMin =  0.5 - (1 / 2);
				vMax =  0.5 + (1 / 2);
				xOffset = 30;
				yOffset = 0;
			};
			class SectionBottom
			{
				uMin =  0.5 - (1 / 2);
				uMax =  0.5 + (1 / 2);
				vMin =  1 - 0.375;
				vMax =  1 - 0;
				xOffset = 0;
				yOffset = 30;
			};
		};
	};
};