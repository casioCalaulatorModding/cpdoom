#include <appdef.hpp>
#include <sdk/calc/calc.hpp>
#include <sdk/os/lcd.hpp>
#include <sdk/os/debug.hpp>


#include <doomgeneric/doomgeneric.h>

/*
 * Fill this section in with some information about your app.
 * All fields are optional - so if you don't need one, take it out.
 */
APP_NAME("Doom")
APP_DESCRIPTION("Doom Port for this calculator")
APP_AUTHOR("Luke Gibson <luke.e.gibson@outlook.com> at https://github.com/luke-e-gibson/")
APP_VERSION("0.0.1")



extern "C" void main(int argc, char** argv) {
	calcInit(); //backup screen and init some variables
	doomgeneric_Create(argc, argv);
	// Put your app's code here!
	bool keepRunning = true;
	while (keepRunning)
	{
		doomgeneric_Tick();
		uint32_t key1, key2;
		getKey(&key1, &key2);
		if(testKey(key1, key2, KEY_BACKSPACE)){
			keepRunning = false;
		}
	}
	Debug_Printf(10, 1, false, 0, "Doom Cleanup%d", 42);
	calcEnd();
	
}