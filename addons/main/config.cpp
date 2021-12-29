#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"blud_satcom"};
        author = "johnb43";
        url = "https://github.com/johnb432/Vidda-Zeus-error-fix";
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        name = "Vidda - Zeus error fix";
        author = "johnb43";
        tooltipOwned = "Vidda - Zeus error fix";
        hideName = 0;
        hidePicture = 0;
        actionName = "Github";
        action = "https://github.com/johnb432/Vidda-Zeus-error-fix";
        description = "A mod to fix the error that pops up when entering the Zeus interface when VIDDA | LEGACY VERSION is loaded. Made by johnb43";
        overview = "A mod to fix the error that pops up when entering the Zeus interface when VIDDA | LEGACY VERSION is loaded. Made by johnb43";
    };
};

class CfgVehicles {
    class House_F;
    class blud_satcombunker_base: House_F {
        editorCategory = "EdCat_Structures";
        editorSubcategory = "EdSubcat_Military";
    };
    class blud_satcombunker_a: blud_satcombunker_base {
        displayName = "Big Bunker 1 (Vidda)";
    };
    class blud_satcombunker_c: blud_satcombunker_base {
        displayName = "Big Bunker 2 (Vidda)";
    };
    class blud_satcombunker_d: blud_satcombunker_base {
        displayName = "Big Bunker 3 (Vidda)";
    };
};
