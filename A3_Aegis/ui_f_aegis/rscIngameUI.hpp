class RscInGameUI
{
	class RscUnitInfo;
	class RscOptics_tws: RscUnitInfo
	{
		class CA_IGUI_elements_group: RscControlsGroup
		{
			class controls
			{
				class CA_Distance;
				class CA_VisionMode;
				class CA_FlirMode;
			};
		};
		class CA_NFOV_mode_group: RscControlsGroup
		{
			class controls
			{
				class CA_FOVModeNFOV;
			};
		};
		class CA_WFOV_mode_group: RscControlsGroup
		{
			class controls
			{
				class CA_FOVModeWFOV;
				class CA_BracketNFOV;
			};
		};
	};
	class Aegis_RscOptics_Punisher: RscOptics_tws
	{
		onLoad = "_this call Aegis_fnc_punisherHUD;";
		controls[] = {"CA_IGUI_elements_group"};
		class CA_IGUI_elements_group: CA_IGUI_elements_group
		{
			/*
			x = "0 * GUI_GRID_OLD_OPTICS_W + GUI_GRID_OLD_OPTICS_X";
			y = "0 * GUI_GRID_OLD_OPTICS_H + GUI_GRID_OLD_OPTICS_Y";
			w = "53.5 * GUI_GRID_OLD_OPTICS_W";
			h = "40 * GUI_GRID_OLD_OPTICS_H";
			*/
			class controls: controls
			{
				class CA_Distance: CA_Distance
				{
				//	idc = 198;
				//	sizeEx = "0.036*SafezoneH";
				//	shadow = 0;
				//	font = "EtelkaMonospacePro";
				//	text = "- - - -";
				//	x = "24.75 * GUI_GRID_OLD_OPTICS_W";
				//	y = "33.2 * GUI_GRID_OLD_OPTICS_H";
				//	w = "3.6 * GUI_GRID_OLD_OPTICS_W";
				//	h = "1.3 * GUI_GRID_OLD_OPTICS_H";
					x = 0;
					y = 0;
					w = 0;
					h = 0;
					colorText[] = {0.784,0,0,1};
					sizeEx = 0.0225*SafezoneH;
				};
				class CA_DistanceRealtime: CA_Distance
				{
					x = 38.3 * GUI_GRID_OLD_OPTICS_W;
					y = 25 * GUI_GRID_OLD_OPTICS_H;
					w = 3.6 * GUI_GRID_OLD_OPTICS_W;
					h = 1.3 * GUI_GRID_OLD_OPTICS_H;
					style = 0;
					idc = 183;
				};
				class Aegis_Distancetext: CA_DistanceRealtime
				{
					idc = -1;
					y = 26 * GUI_GRID_OLD_OPTICS_H;
					sizeEx = 0.0225*SafezoneH;
					text = "RNG";
				};
				class Aegis_RNG: CA_DistanceRealtime
				{
					idc = 51202;
					x = (38.1-3.6) * GUI_GRID_OLD_OPTICS_W;
					style = 1;
					sizeEx = 0.0275*SafezoneH;
					text = "----";
				};
				class Aegis_RNGtext: Aegis_RNG
				{
					idc = -1;
					y = 26 * GUI_GRID_OLD_OPTICS_H;
					sizeEx = 0.0225*SafezoneH;
					text = "A/B";
				};
				
				class DistanceBarReal: RscBackground
				{
					x = 38.3 * GUI_GRID_OLD_OPTICS_W;
					y = 19 * GUI_GRID_OLD_OPTICS_H;
					w = 0.1 * GUI_GRID_OLD_OPTICS_W;
					h = 6 * GUI_GRID_OLD_OPTICS_H;
					colorBackground[] = {0.784,0,0,1};
				};
				
				class DistanceBarRealDesignate: DistanceBarReal
				{
					idc = 51211;
					x = 38.3 * GUI_GRID_OLD_OPTICS_W;
					y = (19+3) * GUI_GRID_OLD_OPTICS_H;
					w = 0.35 * GUI_GRID_OLD_OPTICS_W;
					h = 3 * GUI_GRID_OLD_OPTICS_H;
				};
				
				class DistanceBarRealTop: DistanceBarReal
				{
					w = 0.5 * GUI_GRID_OLD_OPTICS_W;
					h = 0.1 * GUI_GRID_OLD_OPTICS_H;
				};
				class DistanceBarRealBottom: DistanceBarRealTop
				{
					y = (25-0.1) * GUI_GRID_OLD_OPTICS_H;
				};
				
				class DistanceBarAB: DistanceBarReal
				{
					x = 38.1 * GUI_GRID_OLD_OPTICS_W;
				};
				
				class DistanceBarABDesignate: DistanceBarAB
				{
					idc = 51212;
					x = (38.2-0.35) * GUI_GRID_OLD_OPTICS_W;
					y = (19+3) * GUI_GRID_OLD_OPTICS_H;
					w = 0.35 * GUI_GRID_OLD_OPTICS_W;
					h = 3 * GUI_GRID_OLD_OPTICS_H;
				};
				
				class DistanceBarABTop: DistanceBarAB
				{
					x = 37.7 * GUI_GRID_OLD_OPTICS_W;
					w = 0.5 * GUI_GRID_OLD_OPTICS_W;
					h = 0.1 * GUI_GRID_OLD_OPTICS_H;
				};
				class DistanceBarABlBottom: DistanceBarABTop
				{
					y = (25-0.1) * GUI_GRID_OLD_OPTICS_H;
				};
				
				class DistanceMax: CA_DistanceRealtime
				{
					x = (38.2-1.8) * GUI_GRID_OLD_OPTICS_W;
					y = 17.8 * GUI_GRID_OLD_OPTICS_H;
					w = 3.6 * GUI_GRID_OLD_OPTICS_W;
					h = 1.3 * GUI_GRID_OLD_OPTICS_H;
					style = 2;
					idc = -1;
					text = "1000";
					sizeEx = 0.018*SafezoneH;
				};
				
				class Aegis_ABModeText: CA_Distance
				{
					idc = -1;
					style = 1;
					text = "MODE:";
					x = 10 * GUI_GRID_OLD_OPTICS_W;
					y = 20.2 * GUI_GRID_OLD_OPTICS_H;
					w = 5.6 * GUI_GRID_OLD_OPTICS_W;
					h = 1.3 * GUI_GRID_OLD_OPTICS_H;
				};
				class Aegis_ABMode: Aegis_ABModeText
				{
					idc = 51201;
					style = 0;
					text = "A/B";
					x = (12+3.4) * GUI_GRID_OLD_OPTICS_W;
				};
				/*class Aegis_RNGText: Aegis_ABModeText
				{
					text = "A/B RNG:";
					y = (20.2+1.1*1) * GUI_GRID_OLD_OPTICS_H;
				};
				class Aegis_RNG: Aegis_ABMode
				{
					idc = 51202;
					text = "1000 m";
					y = (20.2+1.1*1) * GUI_GRID_OLD_OPTICS_H;
				};*/
				class Aegis_ETAText: Aegis_ABModeText
				{
					text = "ETA:";
					y = (20.2+1.1*1) * GUI_GRID_OLD_OPTICS_H;
				};
				class Aegis_ETA: Aegis_ABMode
				{
					idc = 51203;
					text = "N/A";
					y = (20.2+1.1*1) * GUI_GRID_OLD_OPTICS_H;
				};
				class Aegis_SNText: Aegis_ABModeText
				{
					text = "AMMO S/N:";
					y = (20.2+1.1*3) * GUI_GRID_OLD_OPTICS_H;
				};
				class Aegis_SN: Aegis_ABMode
				{
					idc = 51204;
					text = "";
					y = (20.2+1.1*3) * GUI_GRID_OLD_OPTICS_H;
				};
				class Aegis_Zero: Aegis_ABMode
				{
					style = 2;
					idc = 51205;
					text = "!ZEROING ENGAGED!";
					x = (-5 * GUI_GRID_W) + 0.5 - GUI_GRID_OLD_OPTICS_X;
					y = 26 * GUI_GRID_OLD_OPTICS_H;
					w = 10 * GUI_GRID_W;
					h = 1.3 * GUI_GRID_OLD_OPTICS_H;
				};
				delete CA_VisionMode;
				delete CA_FlirMode;
				/*class CA_VisionMode: CA_VisionMode
				{
				};
				class CA_FlirMode: CA_FlirMode
				{
				};*/
				/*
				class CA_VisionMode: RscText
				{
					idc = 152;
					style = 0;
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "FLIR";
					x = "8.8 * GUI_GRID_OLD_OPTICS_W";
					y = "18.7 * GUI_GRID_OLD_OPTICS_H";
					w = "3.5 * GUI_GRID_OLD_OPTICS_W";
					h = "1 * GUI_GRID_OLD_OPTICS_H";
				};
				class CA_FlirMode: RscText
				{
					idc = 153;
					style = 0;
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "BHOT";
					x = "11.8 * GUI_GRID_OLD_OPTICS_W";
					y = "18.7 * GUI_GRID_OLD_OPTICS_H";
					w = "4.5 * GUI_GRID_OLD_OPTICS_W";
					h = "1 * GUI_GRID_OLD_OPTICS_H";
				};*/
			};
		};
		/*class CA_NFOV_mode_group: CA_NFOV_mode_group
		{
			class controls;
		};
		class CA_WFOV_mode_group: CA_WFOV_mode_group
		{
			class controls;
		};*/
	};
	
	/*class RscOptics_Camera_lxWS
	{
		onLoad = "_this call Aegis_fnc_cameraFlash;";
	};*/
};