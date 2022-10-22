class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class Rifle_silencerTail_Base_SoundSet;
	class Rifle_silencerInteriorTail_Base_SoundSet;
	// AUR 90 5.56 mm
	class AUG_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] =
		{
			AUG_Closure_SoundShader,
			AUG_closeShot_SoundShader,
			AUG_midShot_SoundShader,
			AUG_distShot_SoundShader
		};
	};
	class AUG_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] =
		{
			AUG_tailDistant_SoundShader,
			AUG_tailForest_SoundShader,
			AUG_tailHouses_SoundShader,
			AUG_tailMeadows_SoundShader,
			AUG_tailTrees_SoundShader
		};
	};
	class AUG_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {AUG_tailInterior_SoundShader};
	};
	class AUG_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] =
		{
			AUG_Closure_SoundShader,
			AUG_silencerShot_SoundShader
		};
	};
	class AUG_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] =
		{
			AUG_silencerTailTrees_SoundShader,
			AUG_silencerTailForest_SoundShader,
			AUG_silencerTailMeadows_SoundShader,
			AUG_silencerTailHouses_SoundShader
		};
	};
	class AUG_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {AUG_silencerTailInterior_SoundShader};
	};
	// G36 6.5 mm
	class G36_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] =
		{
			G36_Closure_SoundShader,
			G36_closeShot_SoundShader,
			G36_midShot_SoundShader,
			G36_distShot_SoundShader
		};
	};
	class G36_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] =
		{
			G36_tailForest_SoundShader,
			G36_tailHouses_SoundShader,
			G36_tailMeadows_SoundShader,
			G36_tailTrees_SoundShader
		};
	};
	class G36_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {G36_tailInterior_SoundShader};
	};
	class G36_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] =
		{
			G36_Closure_SoundShader,
			G36_silencerShot_SoundShader
		};
	};
	class G36_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] =
		{
			G36_silencerTailTrees_SoundShader,
			G36_silencerTailForest_SoundShader,
			G36_silencerTailMeadows_SoundShader,
			G36_silencerTailHouses_SoundShader
		};
	};
	class G36_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {G36_silencerTailInterior_SoundShader};
	};
};