class CfgSoundSets
{
    /* Bases */
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class Rifle_silencerTail_Base_SoundSet;
	class Rifle_silencerInteriorTail_Base_SoundSet;
	class Pistol_Shot_Base_SoundSet;
	class Pistol_Tail_Base_SoundSet;
	class Pistol_InteriorTail_Base_SoundSet;
	class Pistol_silencerShot_Base_SoundSet;
	class Pistol_silencerTail_Base_SoundSet;
	class Pistol_silencerInteriorTail_Base_SoundSet;

    /* Arsenal */
	class SKS_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] =
		{
			SKS_closure_SoundShader,
			SKS_closeShot_SoundShader,
			SKS_midShot_SoundShader,
			SKS_distShot_SoundShader
		};
	};
	class SKS_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] =
		{
			SKS_tailDistant_SoundShader,
			SKS_tailForest_SoundShader,
			SKS_tailHouses_SoundShader,
			SKS_tailMeadows_SoundShader,
			SKS_tailTrees_SoundShader
		};
	};
	class SKS_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {SKS_tailInterior_SoundShader};
	};
};