class MFD
		{
			class AirplaneHUD
			{
				enableParallax=1;
				topLeft="MFD_1_TL";
				topRight="MFD_1_TR";
				bottomLeft="MFD_1_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0,1,0,0.1};
				turret[]={-1};
				class Bones
				{
					class PlaneOrientation
					{
						type="fixed";
						refreshRate=0.1;
						pos[]={0.44,0.52999997};
					};
					class ImpactPoint
					{
						type="vector";
						source="ImpactPoint";
						pos[]={0.44,0.52999997};
						pos0[]={0.44,0.47};
						pos10[]={1.12,1.21};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001};
					alpha=0.80000001;
					condition="on";
					class ImpactCross
					{
						width=4;
						type="line";
						points[]=
						{
							
							{
								"ImpactPoint",
								{0,-0.174118},
								1
							},
							
							{
								"ImpactPoint",
								{0,-0.032647099},
								1
							},
							{},
							
							{
								"ImpactPoint",
								{0,0.174118},
								1
							},
							
							{
								"ImpactPoint",
								{0,0.032647099},
								1
							},
							{},
							
							{
								"ImpactPoint",
								{-0.16,0},
								1
							},
							
							{
								"ImpactPoint",
								{-0.029999999,0},
								1
							},
							{},
							
							{
								"ImpactPoint",
								{0.16,0},
								1
							},
							
							{
								"ImpactPoint",
								{0.029999999,0},
								1
							}
						};
					};
				};
			};
			class MFD_Map
			{
				topLeft="MFD_MAP_TL";
				topRight="MFD_MAP_TR";
				bottomLeft="MFD_MAP_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0,1,0,0.1};
				enableParallax=0;
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={10,10,10,1};
					emissive[]={400,200,200,1};
				};
				class Bones
				{
					class MovementY
					{
						type="linear";
						source="user";
						sourceIndex=0;
						refreshRate=0.1;
						min=0;
						max=1;
						sourceScale=1;
						maxPos[]={0,1};
						minPos[]={0,0};
					};
					class MovementX: MovementY
					{
						sourceIndex=1;
						maxPos[]={0,0};
						minPos[]={1,0};
					};
				};
				class Draw
				{
					color[]={0.89999998,0,0};
					alpha=1;
					condition=1;
					class PlanePosition
					{
						width=8;
						type="line";
						points[]=
						{
							
							{
								"MovementY",
								1,
								"MovementX",
								1,
								{0.0277778,0.07},
								1
							},
							
							{
								"MovementY",
								1,
								"MovementX",
								1,
								{0.0277778,-0.029999999},
								1
							},
							
							{
								"MovementY",
								1,
								"MovementX",
								1,
								{-0.0277778,-0.029999999},
								1
							},
							
							{
								"MovementY",
								1,
								"MovementX",
								1,
								{-0.0277778,0.07},
								1
							},
							
							{
								"MovementY",
								1,
								"MovementX",
								1,
								{0.0277778,0.07},
								1
							}
						};
					};
					class BlackGroup
					{
						color[]={0,0,0};
						alpha=1;
						condition=1;
						class Cross
						{
							width=8;
							type="line";
							points[]=
							{
								
								{
									"MovementY",
									1,
									"MovementX",
									1,
									{-0.0277778,0.02},
									1
								},
								
								{
									"MovementY",
									1,
									"MovementX",
									1,
									{0.0277778,0.02},
									1
								},
								{},
								
								{
									"MovementY",
									1,
									"MovementX",
									1,
									{0,-0.029999999},
									1
								},
								
								{
									"MovementY",
									1,
									"MovementX",
									1,
									{0,0.07},
									1
								},
								{}
							};
						};
					};
				};
			};
		};