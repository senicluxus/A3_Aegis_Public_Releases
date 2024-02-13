#define M203FRAMES 86

class m203_reload_1
{
	type = "translation";
	source = "reloadmagazine.1";
	selection = "m203_barrel";
	sourceAddress = "clamp";
	begin = "m203_slide_axis";
	end = "m203_slide_axis_end";
	minPhase = 0;
	maxPhase = 1;
	minValue = 7/M203FRAMES;
	maxValue = 13/M203FRAMES;
	memory = 1;
	offset0 = 0;
	offset1 = 0.55;
};
class m203_reload_2: m203_reload_1
{
	minValue = 69/M203FRAMES;
	maxValue = 73/M203FRAMES;
	offset0 = 0;
	offset1 = -0.55;
};
class m203_shell_reload_0
{
	type = "hide";
	source = "reloadmagazine.1";
	selection = "m203_shell_hide";
	sourceAddress = "clamp";
	minPhase = 0;
	maxPhase = 1;
	minValue = 0;
	maxValue = 1;
	hideValue = 0/M203FRAMES;
	unHideValue = 40/M203FRAMES;
};
class m203_shell_reload_1: m203_reload_1
{
	type = "rotationZ";
	source = "reloadmagazine.1";
	selection = "m203_shell";
	axis = "m203_shell_rot_axis";
	sourceAddress = "clamp";
	minPhase = 0;
	maxPhase = 1;
	minValue = 12/M203FRAMES;
	maxValue = 17/M203FRAMES;
	memory = 1;
	angle0 = 0;
	angle1 = rad 35;
};
class m203_shell_reload_2: m203_reload_1
{
	selection = "m203_shell";
	begin = "m203_shell_move_axis";
	end = "m203_shell_move_axis_end";
	minPhase = 0;
	maxPhase = 1;
	minValue = 12/M203FRAMES;
	maxValue = 17/M203FRAMES;
	memory = 1;
	offset0 = 0;
	offset1 = 1;
};
class m203_shell_reload_3: m203_shell_reload_0
{
	source = "reloadmagazine.1";
	selection = "m203_shell";
	hideValue = 17/M203FRAMES;
	unHideValue = 40/M203FRAMES;
};
class m203_shell_reload_4: m203_shell_reload_2
{
	minValue = 40/M203FRAMES;
	maxValue = 49/M203FRAMES;
	offset0 = 0;
	offset1 = -1;
};
class m203_shell_reload_5: m203_shell_reload_1
{
	minValue = 40/M203FRAMES;
	maxValue = 49/M203FRAMES;
	angle0 = 0;
	angle1 = rad -35;
};
class m203_shell_reload_6: m203_reload_1
{
	selection = "m203_shell";
	minValue = 50/M203FRAMES;
	maxValue = 53/M203FRAMES;
	offset0 = 0;
	offset1 = 0.55;
};
class m203_shell_reload_7: m203_shell_reload_6
{
	minValue = 69/M203FRAMES;
	maxValue = 73/M203FRAMES;
	offset0 = 0;
	offset1 = -0.55;
};