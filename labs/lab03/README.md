# LAB03 NOTES

The code in this example has been tested on both the Raspberry Pi Pico hardware platform as well as the Woki online simulator for the Raspberry Pi Pico. There are some differences between using the Wokwi online simulator and the real Raspberry Pi Pico hardware however.

The `wokwi-pi-pico` component environment option in the `diagram.json` file also needs to be set to use `arduino-community` for the code to work correctly (proably a quirk of the simulator).

To run the demo on the simulator, rename the default `sketch.ino` file to be called `lab03.c` and overwrite the default content with the content of the `lab03.c` file in this repository. Create a new file and call it `lab03.S` (capital S in the extension is important). Also, make sure to update the `diagram.json` (but do not change the name).
