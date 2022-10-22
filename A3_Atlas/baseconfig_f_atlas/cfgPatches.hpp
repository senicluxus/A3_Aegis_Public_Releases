#define BASECONFIGPATCH(a,b) \
	class ##a## \
	{ \
		requiredAddons[] = {##b##}; \
		requiredVersion = 0.1; \
		units[] = {}; \
		weapons[] = {}; \
	};

class CfgPatches
{
	class A3_Atlas_BaseConfig_F_Atlas
	{
		author = $STR_A3_A_AveryTheKitty;
		name = "Arma 3 Atlas - Legacy Definitions";
		url = "https://steamcommunity.com/sharedfiles/filedetails/?id=2225873516";
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {/* Auto-compiled by pboProject */};
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};