#include "bigcat.h"

void keyboard_pre_init_kb(void) {
    // Set our LED pins as output
    setPinOutput(D1);
    setPinOutput(D2);
    setPinOutput(D3);
    keyboard_pre_init_user();
}

bool led_update_kb(led_t led_state) {
    bool res = led_update_user(led_state);
    if(res) {
        // writePin sets the pin high for 1 and low for 0.
        // In this example the pins are inverted, setting
        // it low/0 turns it on, and high/1 turns the LED off.
        // This behavior depends on whether the LED is between the pin
        // and VCC or the pin and GND.
        writePin(D1, led_state.caps_lock);
        writePin(D2, led_state.num_lock);
        writePin(D3, led_state.scroll_lock);
    }
    return res;
}
