#include <appdef.hpp>
#include <sdk/calc/calc.hpp>

#include "CONFIG.h"

APP_NAME("DOOM");
APP_DESCRIPTION("A doom port for this calculator");
APP_AUTHOR("everyone at https://github.com/luke-e-gibson/doom-classpad")
APP_VERSION("0.0.0");

int main(int argc, char** argv)
{
    calcInit();
    
    fillScreen(BLACK);


    calcEnd();
    return 0;
}