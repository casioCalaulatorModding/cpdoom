# CPDOOM
A port of the doom engine to the Casio FX-CP400 "ClassPad II". 

## Developing
## **!!Developing requires a ubuntu bases system!!**

#### Getting started
1. Clone this repo ```git clone https://github.com/luke-e-gibson/doom-classpad ```
2. run install.sh inside of scripts folder ```./scripts/install ```
3. run build-sdks.sh inside of script folder ```./scripts/build-sdks.sh ```
4. every time you start developing or open a new terminel you need to run source.sh inside of script as this adds sh4-elf toold to path and the required sdk as well
5. To build the project cd into src and run make this will make a bin file run make all to make a bin and hkk file to learn more read it at the hollyhock-2 sdk. ``` cd src && make  ``` or ``` make all ```

## Prerequsites - Running the project
- A calculator modded with Hollyhock2 CFW (How? https://github.com/SnailMath/hollyhock-2)
- A device to transfer files from
- Mini-USB cable

## Installation of doom
### Notice: The first release is not yet out and these installation steps are a work in progess.

1. Download the latest release of doom-cp400 from the releases page.
2. Unzip the folder to a place of your choice.
3. Open the new folder, and plug in your Hollyhock2 CFW CP-400 calculator.
4. Click on the "Flash Transfer" option.
5. Drag the "doom-cp400.bin" file from extracted folder into the root of your calculator.
6. Eject your calucator from your PC, and use the Hollyhock Launcher to launch Doom.


## Prerequsites - Developing 
- A calculator modded with Hollyhock2 CFW (How? https://github.com/SnailMath/hollyhock-2)
- Git and github account
- A ubuntu bases systeam or vm you can aslo use github codespaces
- Basic C, CPP, asm (Might not be need) and git knowledge
- A device to transfer files from manly windows as you need to install the sdk as well
- Mini-USB cable

## Have questions or want to help develop?

Find our discord at: https://discord.gg/2sVbwgE6bn
Find our subreddit at: https://www.reddit.com/r/classpad/
