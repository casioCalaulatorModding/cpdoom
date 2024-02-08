#include "doomgeneric/doomgeneric/doomgeneric.h"


void DG_Init(){};
void DG_DrawFrame(){};
void DG_SleepMs(uint32_t ms){};
uint32_t DG_GetTicksMs(){
    uint32_t ms = 1;
    return ms;
};
int DG_GetKey(int* pressed, unsigned char* key){
    int keypreesed = 1;
    return keypreesed;
};
void DG_SetWindowTitle(const char * title){};