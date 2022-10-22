class RenderTargets
{
	class mirror_l
	{
		renderTarget = "mirror_l";
		class CameraView1
		{
			pointPosition = "PIP0_pos";
			pointDirection = "PIP0_dir";
			renderVisionMode = 4;
			renderQuality = 2;
			fov = 0.7;
		};
		BBoxes[] =
        {
            Mirror_L_TL,
            Mirror_L_TR,
            Mirror_L_BL,
            Mirror_L_BR
        };
	};
	class mirror_r
	{
		renderTarget = "mirror_r";
		class CameraView1
		{
			pointPosition = "PIP1_pos";
			pointDirection = "PIP1_dir";
			renderVisionMode = 4;
			renderQuality = 2;
			fov = 0.7;
		};
		BBoxes[] =
        {
            Mirror_R_TL,
            Mirror_R_TR,
            Mirror_R_BL,
            Mirror_R_BR
        };
	};
};