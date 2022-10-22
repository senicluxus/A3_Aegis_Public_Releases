class CfgMovesBasic
{
	class Default;
	class ManActions
	{
		GestureReloadSKS = "";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			GestureReloadSKS[] =
			{
				GestureReloadSKS,
				Gesture
			};
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			GestureReloadSKS[] =
			{
				GestureReloadSKSProne,
				Gesture
			};
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadSKS[] =
			{
				GestureReloadSKSContext,
				Gesture
			};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadSKS[] =
			{
				GestureReloadSKSContext,
				Gesture
			};
		};
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadSKS[] =
			{
				GestureReloadSKSContext,
				Gesture
			};
		};
		class PistolStandActions;
		class PistolProneActions: PistolStandActions
		{
			GestureReloadSKS[] =
			{
				GestureReloadSKSProne,
				Gesture
			};
		};
		class DeployedProneActions: RifleProneActions
		{
			GestureReloadSKS[] =
			{
				GestureReloadSKSProne,
				Gesture
			};
		};
	};
};
