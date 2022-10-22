class CfgMovesBasic
{
	class Default;
	class ManActions
	{
		GestureReloadSA80 = "";
		GestureReloadWF50 = "";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			GestureReloadSA80[] =
			{
				GestureReloadSA80,
				Gesture
			};
			GestureReloadWF50[] =
			{
				GestureReloadWF50,
				Gesture
			};
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			GestureReloadSA80[] =
			{
				GestureReloadSA80Prone,
				Gesture
			};
			GestureReloadWF50[] =
			{
				GestureReloadWF50Prone,
				Gesture
			};
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadSA80[] =
			{
				GestureReloadSA80Context,
				Gesture
			};
			GestureReloadWF50[] =
			{
				GestureReloadWF50Context,
				Gesture
			};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadSA80[] =
			{
				GestureReloadSA80Context,
				Gesture
			};
			GestureReloadWF50[] =
			{
				GestureReloadWF50Context,
				Gesture
			};
		};
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadSA80[] =
			{
				GestureReloadSA80Context,
				Gesture
			};
			GestureReloadWF50[] =
			{
				GestureReloadWF50Context,
				Gesture
			};
		};
		class PistolStandActions;
		class PistolProneActions: PistolStandActions
		{
			GestureReloadSA80[] =
			{
				GestureReloadSA80Prone,
				Gesture
			};
			GestureReloadWF50[] =
			{
				GestureReloadWF50Prone,
				Gesture
			};
		};
		class DeployedProneActions: RifleProneActions
		{
			GestureReloadSA80[] =
			{
				GestureReloadSA80Prone,
				Gesture
			};
			GestureReloadWF50[] =
			{
				GestureReloadWF50Prone,
				Gesture
			};
		};
	};
};
