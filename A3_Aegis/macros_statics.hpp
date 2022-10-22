/*
- Macros useful for static turrets
- Placed in CfgVehicles
*/

#define ASSEMBLE_INFO(weapon,support) \
    class assembleInfo \
    { \
        primary = 0; \
        base = ""; \
        assembleTo = ""; \
        dissasembleTo[] = {##weapon##,##support##}; \
        displayName = ""; \
    };
