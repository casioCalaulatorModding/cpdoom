#include "doomg/doomgeneric/doomgeneric.h"

void DG_Init();
void DG_DrawFrame(){};
void DG_SleepMs(uint32_t ms);
uint32_t DG_GetTicksMs();
int DG_GetKey(int* pressed, unsigned char* key);
void DG_SetWindowTitle(const char * title);