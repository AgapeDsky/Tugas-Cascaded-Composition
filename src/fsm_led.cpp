#include "fsm_led.h"

States_LED fsm_led :: computeState(uint8_t input_a, uint8_t input_b) {

    condition = 0x00;
    condition |= ( input_a << 1 ) | input_b;

    if (state == STATE_1_LED) {
        if (condition == 0b10) {
            state = STATE_2_LED;
        }
        else if (condition == 0b01) {
            state = STATE_4_LED;
        }
    }
    else if (state == STATE_2_LED) {
        if (condition == 0b10) {
            state = STATE_3_LED;
        }
        else if (condition == 0b01) {
            state = STATE_1_LED;
        }
    }
    else if (state == STATE_3_LED) {
        if (condition == 0b10) {
            state = STATE_4_LED;
        }
        else if (condition == 0b01) {
            state = STATE_2_LED;
        }
    }
    else if (state == STATE_4_LED) {
        if (condition == 0b10) {
            state = STATE_1_LED;
        }
        else if (condition == 0b01) {
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