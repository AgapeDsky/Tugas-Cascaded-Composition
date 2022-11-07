#include "fsm_led.h"

States_LED fsm_led :: computeState(uint8_t input_a, uint8_t input_b) {

    // Get current condition based on input
    condition = 0x00;
    condition |= ( input_a << 1 ) | input_b;

    // State 1 condition
    if (state == STATE_1_LED) {
        if (condition == 0b10) {
            // Shift 1 to right if only 1 button is detected
            state = STATE_2_LED;
        }
        else if (condition == 0b01) {
            // Shift 1 to left if only 1 button is detected
            state = STATE_4_LED;
        }
    }
    // State 2 condition
    else if (state == STATE_2_LED) {
        if (condition == 0b10) {
            // Shift 1 to right if only 1 button is detected
            state = STATE_3_LED;
        }
        else if (condition == 0b01) {
            // Shift 1 to left if only 1 button is detected
            state = STATE_1_LED;
        }
    }
    // State 3 condition
    else if (state == STATE_3_LED) {
        if (condition == 0b10) {
            // Shift 1 to right if only 1 button is detected
            state = STATE_4_LED;
        }
        else if (condition == 0b01) {
            // Shift 1 to left if only 1 button is detected
            state = STATE_2_LED;
        }
    }
    // State 4 condition
    else if (state == STATE_4_LED) {
        if (condition == 0b10) {
            // Shift 1 to right if only 1 button is detected
            state = STATE_1_LED;
        }
        else if (condition == 0b01) {
            // Shift 1 to left if only 1 button is detected
            state = STATE_3_LED;
        }
    }

    return state;
}

States_LED fsm_led :: getState() {
    return state;
}

uint8_t fsm_led :: getCondition() {
    return condition;
}