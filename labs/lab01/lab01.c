#include "pico/stdlib.h"

/*! \brief  Function to make the led blink
*
*   The function accepts the pin number and delay period as
*   parameters and turn the LED on and off periodically according to the     
*
*   @param LED_PIN LED_PIN holds the information for which led light we're going to blink
*   @param LED_DELAY LED_DELAY hold the info for the period of time between blinking events
* 
*   @return void this function returns nothing (void)
*/

void blink_fn(uint LED_PIN, uint LED_DELAY){
    // Toggle the LED on and then sleep for delay period
        gpio_put(LED_PIN, 1); 
        sleep_ms(LED_DELAY);

        // Toggle the LED off and then sleep for delay period
        gpio_put(LED_PIN, 0);
        sleep_ms(LED_DELAY);
}


/**
 * @brief EXAMPLE - BLINK_C
 *        Simple example to initialise the built-in LED on
 *        the Raspberry Pi Pico and then flash it forever. 
 * 
 * @return int  Application return code (zero for success).
 */

int main() {

    // Specify the PIN number and sleep delay
    const uint LED_PIN   =  25;
    const uint LED_DELAY = 500;

    // Setup the LED pin as an output.
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    // Do forever...
    while (true) {
        blink_fn(LED_PIN,LED_DELAY); // this calls the blink function and makes the LED blink indefinitely
    }

    // Should never get here due to infinite while-loop.
    return 0;
}


