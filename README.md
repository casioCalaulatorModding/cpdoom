![New Project (3)](https://github.com/casioCalaulatorModding/doom-classpad/assets/84308737/60cda805-8dcf-400f-b9c8-d9fa6a2d8ff1)

# CPDOOM
A port of the Doom engine to the Casio FX-CP400 "ClassPad II". Based on genericdoom.

## Developing
### **!! Developing requires an Ubuntu base system !!**

#### Getting started
1. Clone this repo ```git clone https://github.com/luke-e-gibson/doom-classpad ```
2. Run install.sh inside of scripts folder ```./scripts/install ```
3. Run build-sdks.sh inside of script folder ```./scripts/build-sdks.sh ```
4. Every time you start developing or open a new terminal you need to run source.sh inside of script, as this adds sh4-elf tools to path and the required sdk aswell.
5. To build the project cd (change directories) into src and run make, this will make a bin file. Run make all to make a bin and hhk file. To learn more read it at the hollyhock-2 sdk. ``` cd src && make  ``` or ``` make all ```

## Prerequsites - Running CPDOOM
- A calculator modified with Hollyhock2 CFW (How? https://github.com/SnailMath/hollyhock-2)
- A device to transfer files from
- Mini-USB cable

## Installation of CPDOOM
### Notice: The first release is not yet out and these installation steps are subject to change.

1. Download the latest release of doom-cp400 from the releases page.
2. Unzip the folder to a place of your choice.
3. Open the new folder, and plug in your Hollyhock2 CFW CP-400 calculator.
4. Inside the calculator, click on the "Flash Transfer" option.
5. Drag the "cpdoom.bin" file from extracted folder into the root of your calculator.
6. Eject your calucator from your PC, and use the Hollyhock Launcher to launch Doom.

## Controls
| Action | Calculator bind |
| ------------- | ------------- |
| Move foward | DPAD Up  |
| Move backward | DPAD Down |
| Turn right | DPAD right |
| Turn left | DPAD left |
| Strafe left | Power (^) symbol |
| Strafe right | x |
| Fire weapon | EXE |
| Use (open) | - |
| Run | + |


## Prerequsites - Developing 
- A calculator modified with Hollyhock2 CFW (How? https://github.com/SnailMath/hollyhock-2)
- Git and GitHub account
- A Ubuntu bases system OR GitHub Codespaces
- Basic C, CPP, ASM (may not be needed) and git knowledge
- A device to transfer files from, ideally windows, to transfer the SDK from
- Mini-USB cable

## Have questions or want to help develop?

- Find our discord at: https://discord.gg/2sVbwgE6bn
- Find our subreddit at: https://www.reddit.com/r/classpad/
