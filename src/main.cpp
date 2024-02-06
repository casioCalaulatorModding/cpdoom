#include <appdef.hpp>
#include <sdk/calc/calc.hpp>
#include "doomg/doomgeneric/doomgeneric.h"

#include "CONFIG.h"

APP_NAME("DOOM");
APP_DESCRIPTION("A doom port for this calculator");
APP_AUTHOR("everyone at https://github.com/luke-e-gibson/doom-classpad")
APP_VERSION("0.0.0");

int main(int argc, char** argv)
{
    calcInit();
    doomgeneric_Create(argc, argv);
    fillScreen(BLACK);
    while (true)
    {
        doomgeneric_Tick();
    }
    


    calcEnd();
    return 0;
}