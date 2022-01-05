# LAB02 NOTES

The code in this example has been tested on both the Raspberry Pi Pico hardware platform as well as the Woki online simulator for the Raspberry Pi Pico. There are some differences between using the Wokwi online simulator and the real Raspberry Pi Pico hardware however.

If using the simulator, the `pico/stdlib` include and the `stdio_uart_init()` function need to be commented out from the `lab02.c` file in order for the code to compile cleanly. The `wokwi-pi-pico` component environment option in the `diagram.json` file also needs to be set to use `arduino-community` for the code to work correctly (proably a quirk of the simulator).

To run the demo on the simulator, rename the default `sketch.ino` file to be called `lab02.c` and overwrite the default content with the content of the `lab02.c` file in this repository. Also, make sure to update the `diagram.json` (but do not change the name).