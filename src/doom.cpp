#include <doomgeneric/doomgeneric.h>
#include <sdk/os/lcd.hpp>
#include <sdk/os/input.hpp>
#include <sdk/os/mem.hpp>
#include <sdk/calc/calc.hpp>


void DG_Init()
{
    fillScreen(color(0, 0, 0));
};

void DG_DrawFrame()
{
    uint16_t gbscreenBuffer16 = (uint16_t) DG_ScreenBuffer;
    vram = &gbscreenBuffer16;
};

void DG_SleepMs(uint32_t ms)
{

};

uint32_t DG_GetTicksMs()
{
    uint32_t time = 0;
    return time;
};

int DG_GetKey(int* pressed, unsigned char* key)
{
    return 0;
};

void DG_SetWindowTitle(const char * title)
{
    //nothing to do here
};
